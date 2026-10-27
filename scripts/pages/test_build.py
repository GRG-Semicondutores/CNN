"""Verifica a correspondência dos indicadores com seus registros de origem."""

import hashlib
from pathlib import Path
import shutil
import tempfile
import unittest

from build import ROOT, scrub
from data import EVIDENCE, SYNTHESIS, load, read_lcov


class CampaignDataTests(unittest.TestCase):
    def setUp(self):
        self.temporary = tempfile.TemporaryDirectory(prefix="cnn-pages-test-")
        self.root = Path(self.temporary.name)
        shutil.copytree(ROOT / EVIDENCE, self.root / EVIDENCE)
        (self.root / SYNTHESIS).mkdir(parents=True)
        for name in ("synth_stat.txt", "6_finish.rpt"):
            shutil.copyfile(ROOT / SYNTHESIS / name, self.root / SYNTHESIS / name)
        (self.root / "site/evidence").mkdir(parents=True)
        shutil.copyfile(ROOT / "site/evidence/rtl.lcov", self.root / "site/evidence/rtl.lcov")
        (self.root / "UVM/CNN_top/UVM_tb_params.svh").write_text((ROOT / "UVM/CNN_top/UVM_tb_params.svh").read_text())

    def tearDown(self):
        self.temporary.cleanup()

    def change(self, relative, before, after, rehash=True):
        path = self.root / relative
        source = path.read_text()
        self.assertIn(before, source)
        path.write_text(source.replace(before, after, 1))
        if rehash:
            manifest = self.root / EVIDENCE / "SHA256SUMS"
            lines = []
            for line in manifest.read_text().splitlines():
                digest, name = line.split("  ", 1)
                if self.root / EVIDENCE / name == path:
                    digest = hashlib.sha256(path.read_bytes()).hexdigest()
                lines.append(f"{digest}  {name}")
            manifest.write_text("\n".join(lines) + "\n")

    def test_recorded_failure_remains_visible(self):
        data = load(self.root)
        self.assertEqual(data["status"], "FAIL")
        self.assertEqual(data["summary"]["total_starts"], 1100)
        self.assertEqual([row["test_id"] for row in data["failures"]], ["IMG-00", "IMG-16"])
        self.assertEqual(data["cell_total"], 47470)
        self.assertEqual(data["functional"], dict(hit=106, total=234, percent=45.3))

    def test_manifest_detects_changed_evidence(self):
        self.change(EVIDENCE / "report.log", "total_starts=1100", "total_starts=1101", rehash=False)
        with self.assertRaisesRegex(ValueError, "Hash divergente"):
            load(self.root)

    def test_failure_cannot_be_labeled_pass(self):
        self.change(EVIDENCE / "report.log", "[RESULT] FAIL", "[RESULT] PASS")
        with self.assertRaisesRegex(ValueError, "status não é FAIL"):
            load(self.root)

    def test_missing_starts_are_rejected(self):
        self.change(EVIDENCE / "report.log", "total_starts=1100", "total_starts=1101")
        with self.assertRaisesRegex(ValueError, "não reconciliam"):
            load(self.root)

    def test_lcov_must_use_relative_project_paths(self):
        self.change(Path("site/evidence/rtl.lcov"), "SF:src/", "SF:/tmp/foreign/", rehash=False)
        with self.assertRaisesRegex(ValueError, "Caminho LCOV inválido"):
            read_lcov(self.root / "site/evidence/rtl.lcov")

    def test_parameter_change_requires_new_campaign(self):
        self.change(Path("UVM/CNN_top/UVM_tb_params.svh"), "DATA_WIDTH        = 8", "DATA_WIDTH        = 16", rehash=False)
        with self.assertRaisesRegex(ValueError, "parâmetros atuais diferem"):
            load(self.root)

    def test_exported_logs_remove_personal_paths(self):
        exported = scrub(str(ROOT) + "/UVM/test.sv /home/example/OpenROAD/library.lib")
        self.assertNotIn("/home/", exported)
        self.assertIn("UVM/test.sv", exported)


if __name__ == "__main__":
    unittest.main()

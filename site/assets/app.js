"use strict";
document.body.classList.add("js");
if (new URLSearchParams(location.search).get("embed") === "1") document.body.classList.add("is-embedded");

const menu = document.querySelector(".menu-toggle");
const nav = document.getElementById("primary-nav");
if (menu && nav) {
  menu.hidden = false;
  const closeMenu = () => { nav.dataset.open = "false"; menu.setAttribute("aria-expanded", "false"); };
  menu.addEventListener("click", () => {
    const open = menu.getAttribute("aria-expanded") !== "true";
    nav.dataset.open = String(open);
    menu.setAttribute("aria-expanded", String(open));
  });
  nav.querySelectorAll("a").forEach(link => link.addEventListener("click", closeMenu));
  document.addEventListener("keydown", event => { if (event.key === "Escape") closeMenu(); });
  if ("IntersectionObserver" in window) {
    const observer = new IntersectionObserver(entries => {
      for (const entry of entries) {
        if (!entry.isIntersecting) continue;
        nav.querySelectorAll("a").forEach(link => {
          if (link.hash === `#${entry.target.id}`) link.setAttribute("aria-current", "location");
          else link.removeAttribute("aria-current");
        });
      }
    }, { rootMargin: "-15% 0px -65% 0px", threshold: 0 });
    document.querySelectorAll("main > .section[id]").forEach(section => observer.observe(section));
  }
}

const filters = document.querySelector("[data-case-filters]");
if (filters) {
  const rows = [...document.querySelectorAll("[data-case]")];
  filters.querySelectorAll("button").forEach(button => {
    button.addEventListener("click", () => {
      const state = button.dataset.filter;
      let count = 0;
      rows.forEach(row => { row.hidden = state !== "all" && row.dataset.case !== state; if (!row.hidden) count++; });
      filters.querySelectorAll("button").forEach(item => item.setAttribute("aria-pressed", String(item === button)));
      document.getElementById("case-count").textContent = `${count} ${count === 1 ? "cenário" : "cenários"} ${state === "all" ? "na campanha" : `com status ${state}`}.`;
    });
  });
}

const dialog = document.getElementById("image-dialog");
if (dialog && typeof dialog.showModal === "function") {
  let gallery = [];
  let index = 0;
  let origin = null;
  const image = document.getElementById("lightbox-image");
  const title = document.getElementById("image-dialog-title");
  const caption = document.getElementById("lightbox-caption");
  const count = document.getElementById("lightbox-count");
  const showImage = () => {
    const link = gallery[index];
    image.src = link.href;
    image.alt = link.querySelector("img").alt;
    title.textContent = link.dataset.title || image.alt;
    caption.textContent = link.closest("figure")?.querySelector("figcaption p")?.textContent || image.alt;
    count.textContent = `${index + 1} / ${gallery.length}`;
    dialog.querySelectorAll("[data-lightbox-prev], [data-lightbox-next]").forEach(button => { button.hidden = gallery.length < 2; });
  };
  const move = direction => { index = (index + direction + gallery.length) % gallery.length; showImage(); };
  document.querySelectorAll("a[data-lightbox]").forEach(link => {
    link.addEventListener("click", event => {
      if (event.ctrlKey || event.metaKey || event.shiftKey || event.altKey) return;
      event.preventDefault();
      origin = link;
      gallery = [...document.querySelectorAll("a[data-lightbox]")].filter(item => item.dataset.gallery === link.dataset.gallery);
      index = gallery.indexOf(link);
      showImage();
      document.body.style.overflow = "hidden";
      dialog.showModal();
    });
  });
  dialog.querySelector("[data-lightbox-close]").addEventListener("click", () => dialog.close());
  dialog.querySelector("[data-lightbox-prev]").addEventListener("click", () => move(-1));
  dialog.querySelector("[data-lightbox-next]").addEventListener("click", () => move(1));
  dialog.addEventListener("keydown", event => {
    if (event.key === "Escape") { event.preventDefault(); dialog.close(); }
    if (event.key === "ArrowRight") { event.preventDefault(); move(1); }
    if (event.key === "ArrowLeft") { event.preventDefault(); move(-1); }
  });
  dialog.addEventListener("click", event => { if (event.target === dialog) dialog.close(); });
  dialog.addEventListener("close", () => { document.body.style.overflow = ""; origin?.focus({ preventScroll: true }); });
}

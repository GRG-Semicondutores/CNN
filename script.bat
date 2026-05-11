@echo off
setlocal

if "%~1"=="" (
    exit /b 1
)

set "PASTA=%~1"
set "ARQUIVO=logic_filelist.txt"
echo "%PASTA%"

type nul > "%ARQUIVO%"
> "%ARQUIVO%" (
  for %%f in ("*.sv" "*.v") do echo %%~nxf
)
if not exist "out" (
  md "out"
)
del /q "out\*.*"
endlocal
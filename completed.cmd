@echo off
setlocal

if "%~1"=="" (
    echo Usage: completed sample_name
    exit /b 1
)

set "name=%~1"
set "dest=%~dp0completed\%name%"

if not exist "%dest%" mkdir "%dest%"

copy /y "%~dp0main.cpp" "%dest%\main.cpp" >nul

git add .
git diff --cached --quiet || git commit -m "completed: %name%"
git push

echo Saved to completed\%name% and pushed.

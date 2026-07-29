@echo off
powershell -NoProfile -ExecutionPolicy Bypass -File "%~dp0ensure_freopen.ps1"
g++ -std=c++20 main.cpp -o main.exe && main.exe
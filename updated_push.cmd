@echo off
git add .
git diff --cached --quiet || git commit -m "update"
git push
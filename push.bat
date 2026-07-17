@echo off
cd /d D:\C\c-practice
set /p msg="这次做了什么？ "
git add .
git commit -m "%msg%"
git push
pause

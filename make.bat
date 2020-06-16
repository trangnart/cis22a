@echo off
g++ -g %1 -o %~n1.exe

if %ERRORLEVEL%==0 %~n1.exe
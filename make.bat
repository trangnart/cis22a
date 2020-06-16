@echo off

if "%1" neq "" (
    g++ -g %1 -o %~n1.exe
    if %ERRORLEVEL%==0 %~n1.exe
) else (
    g++ -g main.cpp -o main.exe
    if %ERRORLEVEL%==0 main.exe
)
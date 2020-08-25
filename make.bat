@echo off
setlocal
chcp 65001 >NUL

if "%1"=="init" goto :INIT
if "%1"=="" (
    set source=main.cpp
) else (
    set source=%1
)
if not exist %source% (
    echo %source% not found
    exit /b 1
)

for %%i in ("%source%") do ( set exe=%%~ni.exe )
g++ -Wsign-compare -g %source% -o %exe%
if %ERRORLEVEL%==0 %exe%

exit /b 0

:INIT
for /f %%i in ('dir /b "*.*-*"') do (
    for %%j in (main.cpp README.md solution.cpp) do (
        if not exist "%%i\\%%j" (
            copy /y nul "%%i\\%%j" > nul
        )
    )
)

exit /b 0
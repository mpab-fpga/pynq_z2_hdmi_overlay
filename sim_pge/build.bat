@echo off
setlocal enabledelayedexpansion

if "x%PGE_DIR%" == "x" (
    echo "env-var PGE_DIR (installation folder) is not defined, using local PGE"
    set PGE_DIR=.\
)

set PGE_INC_ENGINE="%PGE_DIR%\olcPixelGameEngine"
if not exist "%PGE_INC_ENGINE%\" (
    echo ERROR: %PGE_INC_ENGINE% is not a folder
    exit /B
)

set PGE_INC_SOUNDWAVE="%PGE_DIR%\olcSoundWaveEngine"
if not exist "%PGE_INC_SOUNDWAVE%\" (
    echo ERROR: %PGE_INC_SOUNDWAVE% is not a folder
    exit /B
)

where cl
if %ERRORLEVEL% neq 0 (
    echo ERROR: cl not found
    exit /B
    )

for %%I in (.) do set APPBASE=%%~nxI
set APPSRC=%APPBASE%.cpp

if not "x%~1" == "x" (
    set APPBASE=%~1
    set APPSRC=%~1.cpp
)

echo APPSRC: %APPSRC%, APPBASE: %APPBASE%

if not exist "%APPSRC%" (
    echo error - invalid application source: %APPSRC%
    exit /B
)

set CLFLAGS=/std:c++17 /EHsc
set CLLIBS=kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib winmm.lib
set CLINC=/I%PGE_INC_ENGINE% /I%PGE_INC_SOUNDWAVE%
cl %APPSRC% %CLFLAGS% %CLINC% /link %CLLIBS%

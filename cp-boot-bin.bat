@echo off
REM wmic logicaldisk where "drivetype=2 and size>0" get deviceid | %WINDIR%\System32\find.exe /v "DeviceID"

for /f "skip=2 tokens=2 delims=," %%a in ('wmic logicaldisk where "drivetype=2 and size>0" get deviceid /format:csv') do (
    echo copy firmware\vitis\hdmi-overlay_app_system\_ide\bootimage\BOOT.bin %%a
    copy firmware\vitis\hdmi-overlay_app_system\_ide\bootimage\BOOT.bin %%a
)

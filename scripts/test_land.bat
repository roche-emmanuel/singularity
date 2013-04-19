@set THIS_PATH=%~dp0

@echo Testing Land...
@%THIS_PATH%..\software\bin\win32\sgtLauncher test_land.lua --log test_land.log
@echo Test done.
REM @pause

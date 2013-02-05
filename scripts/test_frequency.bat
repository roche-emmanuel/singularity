@set THIS_PATH=%~dp0

@echo Testing update frequency...
@%THIS_PATH%..\software\bin\win32\sgtLauncher test_frequency.lua --log test_frequency.log
@echo Test done.
REM @pause

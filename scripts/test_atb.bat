@set THIS_PATH=%~dp0

@echo Testing ATB...
@%THIS_PATH%..\software\bin\win32\sgtLauncher test_atb.lua --log test_atb.log
@echo Test done.
REM @pause

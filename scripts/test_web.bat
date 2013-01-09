@set THIS_PATH=%~dp0

@echo Testing web...
@%THIS_PATH%..\software\bin\win32\sgtLauncher test_web.lua --log test_web.log
@echo Test done.
REM @pause

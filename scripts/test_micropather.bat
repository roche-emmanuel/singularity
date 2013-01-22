@set THIS_PATH=%~dp0

@echo Testing Micropather...
@%THIS_PATH%..\software\bin\win32\sgtLauncher test_micropather.lua --log test_micropather.log
@echo Test done.
REM @pause

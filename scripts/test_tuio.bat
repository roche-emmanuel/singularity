@set THIS_PATH=%~dp0

@echo Testing tuio...
@%THIS_PATH%..\software\bin\win32\sgtLauncher test_tuio.lua --log test_tuio.log
@echo Test done.
REM @pause

@set THIS_PATH=%~dp0

@echo Testing viewer...
@%THIS_PATH%..\software\bin\win32\sgtLauncher test_viewer.lua --log test_viewer.log
@echo Test done.
REM @pause

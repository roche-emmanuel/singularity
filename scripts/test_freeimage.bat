@set THIS_PATH=%~dp0

@echo Testing freeimage...
@%THIS_PATH%..\software\bin\win32\sgtLauncher test_freeimage.lua --log test_freeimage.log
@echo Test done.
REM @pause

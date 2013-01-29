@set THIS_PATH=%~dp0

@echo Testing mathgl...
@%THIS_PATH%..\software\bin\win32\sgtLauncher test_mathgl.lua --log test_mathgl.log
@echo Test done.
REM @pause

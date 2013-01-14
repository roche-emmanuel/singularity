@set THIS_PATH=%~dp0

@echo Testing Box2D...
@%THIS_PATH%..\software\bin\win32\sgtLauncher test_box2d.lua --log test_box2d.log
@echo Test done.
REM @pause

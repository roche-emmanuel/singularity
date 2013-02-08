@set THIS_PATH=%~dp0

@echo Testing Bullet...
@%THIS_PATH%..\software\bin\win32\sgtLauncher test_bullet.lua --log test_bullet.log
@echo Test done.
REM @pause

@set THIS_PATH=%~dp0

@echo Testing SDL joystick
%THIS_PATH%..\software\bin\win32\sgtLauncher test_sdl_joystick.lua --log test_sdl_joystick.log
@echo Test done.
REM @pause

@set THIS_PATH=%~dp0

@echo Testing kinect...
@%THIS_PATH%..\software\bin\win32\sgtLauncher test_kinect.lua --log test_kinect.log
@echo Test done.
REM @pause

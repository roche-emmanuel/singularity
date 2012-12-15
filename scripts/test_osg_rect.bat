@set THIS_PATH=%~dp0

@echo Testing osg rect...
@%THIS_PATH%..\software\bin\win32\sgtLauncher test_osg_rect.lua --log test_osg_rect.log
@echo Test done.
REM @pause

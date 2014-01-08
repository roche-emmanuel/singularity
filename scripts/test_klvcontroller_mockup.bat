@set THIS_PATH=%~dp0

@echo Testing KLVController mockup...
@%THIS_PATH%..\software\bin\win32\sgtLauncher test_klvcontroller_mockup.lua --log test_klvcontroller_mockup.log
@echo Test done.

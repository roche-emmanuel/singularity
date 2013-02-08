@set THIS_PATH=%~dp0

@echo Testing Redbird mockup...
@%THIS_PATH%..\software\bin\win32\sgtLauncher test_redbird_mockup.lua --log test_redbird_mockup.log
@echo Test done.

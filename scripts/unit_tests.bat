@set THIS_PATH=%~dp0

@echo Performing unit tests...
@%THIS_PATH%..\software\bin\win32\sgtLauncher unit_tests.lua --log unit_tests.log
@echo Tests done.
REM @pause

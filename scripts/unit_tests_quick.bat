@set THIS_PATH=%~dp0

@echo Performing quick unit tests...
@%THIS_PATH%..\software\bin\win32\sgtLauncher unit_tests_quick.lua --log unit_tests_quick.log
@echo Tests done.
REM @pause

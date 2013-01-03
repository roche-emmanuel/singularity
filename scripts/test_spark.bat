@set THIS_PATH=%~dp0

@echo Testing spark...
@%THIS_PATH%..\software\bin\win32\sgtLauncher test_spark.lua --log test_spark.log
@echo Test done.
REM @pause

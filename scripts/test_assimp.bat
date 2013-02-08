@set THIS_PATH=%~dp0

@echo Testing assimp...
@%THIS_PATH%..\software\bin\win32\sgtLauncher test_assimp.lua --log test_assimp.log
@echo Test done.
REM @pause

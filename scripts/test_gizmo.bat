@set THIS_PATH=%~dp0

@echo Testing Gizmo...
@%THIS_PATH%..\software\bin\win32\sgtLauncher test_gizmo.lua --log test_gizmo.log
@echo Test done.
REM @pause

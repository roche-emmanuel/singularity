@set THIS_PATH=%~dp0

@echo Testing minimal gui display...
@%THIS_PATH%..\software\bin\win32\sgtLauncher test_gui_minimal.lua --log test_gui_minimal.log
@echo Test done.

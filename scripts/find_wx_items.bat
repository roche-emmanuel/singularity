@set THIS_PATH=%~dp0

@echo Finding Wx elements...
@%THIS_PATH%..\software\bin\win32\sgtLauncher find_wx_items.lua --log find_wx_items.log
@echo Done.
REM @pause

@set THIS_PATH=%~dp0

@echo Generating web paks...
@%THIS_PATH%..\..\software\bin\win32\sgtLauncher generate_web_pak.lua --log generate_web_pak.log
REM @pause

@set THIS_PATH=%~dp0

@echo Converting lua modules to C...
@%THIS_PATH%..\software\bin\win32\sgtLauncher convert_lua_to_c.lua --log convert_lua_to_c.log
@echo Tests done.
REM @pause

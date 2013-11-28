@set THIS_PATH=%~dp0

@echo Testing lua env support...
set VLC_VERBOSE=0
@%THIS_PATH%..\software\bin\win32\sgtLauncher test_lua_env.lua --log test_lua_env.log
@echo Test done.
REM @pause

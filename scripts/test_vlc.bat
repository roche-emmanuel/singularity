@set THIS_PATH=%~dp0

@echo Testing vlc...
set VLC_VERBOSE=0
@%THIS_PATH%..\software\bin\win32\sgtLauncher test_vlc.lua --log test_vlc.log
@echo Test done.
REM @pause

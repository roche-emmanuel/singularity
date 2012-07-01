set TOOLS_DIR=%~dp0..\..\..\..\..\Dev\Tools\win32
set DOXYGEN=%TOOLS_DIR%\doxygen-1.7.6.1\doxygen.exe
set LUA=W:\Shared\Dev\Deps\mingw32\luaJIT-2.0.0-beta8\bin\luajit.exe
set SGT_PATH=W:\Shared\Projects\singularity\software
set PATH=%TOOLS_DIR%\GraphViz-2.28.0\bin;%PATH%
set PROJECT=display
set DOX_INPUT=%~dp0interface

echo INPUT=%DOX_INPUT% > temp.doxyfile
echo PREDEFINED="_DOXYGEN=1 __DOXYGEN__=1 VBS2FUSION_API VBS2FUSION_HUD_API" >> temp.doxyfile
echo INCLUDE_PATH=%DOX_INPUT% >> temp.doxyfile
echo EXCLUDE_PATTERNS="" >> temp.doxyfile
copy temp.doxyfile+Doxyfile_template final.doxyfile

del temp.doxyfile

%DOXYGEN% final.doxyfile
del final.doxyfile

mkdir include\luna
mkdir src\luna

%LUA% -e "project='%PROJECT%'" generate_reflection.lua

	
SET(DEPS_DIR "W:/Shared/Dev/Deps" CACHE STRING "Folder containing all the needed dependencies")
SET(TOOLS_DIR "W:/Shared/Dev/Tools/win32" CACHE STRING "Folder containing all the needed dev tools")
SET(CMAKE_INSTALL_PREFIX "W:/Shared/Dev/Projects/singularity/software" CACHE STRING "Installation folder" FORCE)
SET(SGT_DIR "W:/Shared/Dev/Projects/singularity" CACHE STRING "Root path of Singularity project" FORCE)
# SET(FUSION_ENCRYPTER "${DEPS_DIR}/VBS2Fusion-2.6.0/tools/dllencrypter/Crypt_YYMEA.exe" CACHE STRING "Encrypter used to generate .fusion files" FORCE)
# SET(VBS_DIR "W:/Games/VBS" CACHE STRING "VBS installation folder" FORCE)

SET(DOT_DIR "${TOOLS_DIR}/GraphViz-2.28.0/bin" CACHE STRING "Path where dot.exe can be found" FORCE)
SET(HHC_DIR "${TOOLS_DIR}/HtmlHelpWorkshop-1.3" CACHE STRING "Path where hhc.exe can be found" FORCE)
# SET(DOXYGEN "${TOOLS_DIR}/doxygen-1.7.6.1/doxygen.exe" CACHE STRING "Doxygen executable" FORCE)
SET(DOXYGEN "${TOOLS_DIR}/doxygen-1.8.0/doxygen.exe" CACHE STRING "Doxygen executable" FORCE)

SET(DEP_LUABIND luabind-0.9.1)
SET(DEP_LUA LuaJIT-2.0.0-beta9)
SET(DEP_BOOST boost-1.49.0)
SET(DEP_FUSION VBS2Fusion-2.6.0)
SET(DEP_DX DXSDK-June2010)
# SET(DEP_WX wxWidgets-2.9.3-static)
SET(DEP_WX wxWidgets-2.9.3)
SET(DEP_WXWEBKIT wxWebKit)
SET(DEP_OSG OpenSceneGraph-3.0.1-static)
SET(DEP_MYSQL mysql-5.5.25)
SET(DEP_FIREBIRD Firebird-2.5.1.26351-0)

SET(DEP_IM IM-3.8_vc9_lib)
SET(DEP_CD CD-5.5.1_vc9_lib)
SET(DEP_IUP IUP-3.6_vc9_lib)

# SET(LUA "${DEPS_DIR}/${DEP_LUA}/bin/luajit.exe" CACHE STRING "Lua executable" FORCE)
# SET(LUA "W:/Shared/Dev/Deps/mingw32/luaJIT-2.0.0-beta8/bin/luajit.exe" CACHE STRING "Lua executable" FORCE)
SET(LUA "W:/Shared/Dev/Deps/win32/LuaJIT-2.0.0-beta9/bin/luajit.exe" CACHE STRING "Lua executable" FORCE)
SET(UPX "W:/Shared/Dev/Tools/win32/upx-3.08/upx.exe" CACHE STRING "UPX executable" FORCE)

SET(FLAVOR win32)

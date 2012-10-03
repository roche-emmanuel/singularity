
IF("${CMAKE_SYSTEM_NAME}" STREQUAL "Linux")
	SET(WX_PLATFORM gtk2u)
	SET(WX_PLAT WXGTK)
	SET(LIB_EXT so)
	SET(SHARED_EXT so)
	SET(JDK_PLATFORM linux)
ELSE()
	SET(WX_PLATFORM mswu)
	SET(WX_PLAT WXMSW)
	SET(LIB_EXT dll.a)
	SET(SHARED_EXT dll)
	SET(JDK_PLATFORM win32)
ENDIF()

SETUP_WXWIDGETS()

# common dependency setups:

SET(BOOST_INC_DIR 	${DEP_BOOST}/include)
SET(BOOST_LIB_DIR 	${DEP_BOOST}/lib)
SET(BOOST_LIBS 		)

SET(CD_INC_DIR 	${DEP_CD}/include)
SET(CD_LIB_DIR 	${DEP_CD})
SET(CD_LIBS     cd cdcontextplus cdgl cdlua51 cdluacontextplus51 cdluagl51 cdluaim51 cdluapdf51 cdpdf freetype6 ftgl pdflib zlib1 gdiplus)
SET(CD_FLAGS    )

SET(FIREBIRD_INC_DIR 	${DEP_FIREBIRD}/include)
SET(FIREBIRD_LIB_DIR 	${DEP_FIREBIRD}/lib)
SET(FIREBIRD_LIBS 		fbclient_ms)

SET(IM_INC_DIR 	${DEP_IM}/include)
SET(IM_LIB_DIR 	${DEP_IM})
SET(IM_LIBS     im im_avi im_capture im_fftw im_jp2 im_process im_process_omp im_wmv imlua_avi51 imlua_capture51 imlua_fftw51 imlua_jp251 imlua_process_omp51 imlua_process51 imlua_wmv51 imlua51)
# Removed libs: zlib1 !!!
SET(IM_FLAGS    )

SET(IUP_INC_DIR 	${DEP_IUP}/include)
SET(IUP_LIB_DIR 	${DEP_IUP})
SET(IUP_LIBS     iup iup_mglplot iup_pplot iupcd iupcontrols iupgl iupim iupimglib iuplua_mglplot51 iuplua_pplot51 iuplua51 iupluacd51 iupluacontrols51 iupluagl51 iupluaim51 iupluaimglib51 iupluaole51 iupluatuio51 iupluaweb51 iupole iuptuio iupweb gdi32 user32 comdlg32 comctl32 ole32 ws2_32 winmm)
SET(IUP_FLAGS    )

SET(LUA_INC_DIR 	${DEP_LUA}/include)
SET(LUA_LIB_DIR 	${DEP_LUA}/lib)
SET(LUA_LIBS 		lua51)

SET(LUABIND_INC_DIR 	${DEP_LUABIND}/include)
SET(LUABIND_LIB_DIR 	${DEP_LUABIND}/lib)
SET(LUABIND_LIBS 		luabind)

SET(MYSQL_INC_DIR 	${DEP_MYSQL}/include)
SET(MYSQL_LIB_DIR 	${DEP_MYSQL}/lib)
SET(MYSQL_LIBS 		mysql)

SET(OSG_INC_DIR 	${DEP_OSG}/include)
SET(OSG_LIB_DIR 	${DEP_OSG}/lib ${DEP_OSG}/lib/osgPlugins-3.0.1)
SET(OSG_LIBS     	OpenThreads 
					osg
					osgUtil 
					osgDB 
					osgGA
					osgText 
					osgViewer  
					osgParticle
					)
SET(OSG_FLAGS     	) #-DOSG_LIBRARY_STATIC) #) #-DOT_LIBRARY_STATIC 

SET(SDL_INC_DIR 	${DEP_SDL}/include)
SET(SDL_LIB_DIR 	${DEP_SDL}/VisualC/SDL/Release)
SET(SDL_LIBS 		SDL)

SET(SPICE_INC_DIR 	${DEP_SPICE}/include)
SET(SPICE_LIB_DIR 	${DEP_SPICE}/lib)
SET(SPICE_LIBS 		cspice csupport)


# SET(WXWEBKIT_INC_DIR 	${DEP_WXWEBKIT}/Source/WebKit/wx)
# SET(WXWEBKIT_LIB_DIR 	${DEP_WXWEBKIT}/WebKitBuild/Release)
# SET(WXWEBKIT_LIBS 		wxwebkit.lib)

IF(WIN32)
	SET(FLAVOR_LIBS rpcrt4 oleaut32 ole32 uuid winspool winmm shell32 comctl32 comdlg32 advapi32 ws2_32 wsock32 gdi32 wmvcore vfw32 strmiids)
	SET(GL_LIBS opengl32 GLU32)
	SET(IUP_FLAGS    -DIUP_DLL)
ELSE()
	SET(FLAVOR_LIBS dl)
	SET(GL_LIBS GL GLU)
ENDIF()
	
IF(MSVC)
    SET(WX_INC_DIR 	${DEP_WX}/include ${DEP_WX}/lib/vc_dll/mswu)
    # SET(WX_LIB_DIR 	${DEP_WX}/lib/vc_lib)
    SET(WX_LIB_DIR 	${DEP_WX}/lib/vc_dll)
    # SET(WX_LIBS     wxexpat.lib wxjpeg.lib wxpng.lib wxregex.lib wxscintilla.lib wxtiff.lib wxzlib.lib wxmsw29.lib wxmsw29_gl.lib)
    SET(WX_LIBS     wxmsw29u.lib wxmsw29u_gl.lib)
    SET(WX_FLAGS    -D__WXMSW__ -DWXUSINGDLL)
	
ELSE()

    SET(LUA_INC_DIR 	${DEP_LUA}/include/luajit-2.0)
    SET(LUA_LIB_DIR 	${DEP_LUA}/lib)
    SET(LUA_LIBS 		luajit-5.1)
	
	SET(GL_INC_DIR 		${DEP_GL}/include)
	SET(GL_LIB_DIR 		${DEP_GL}/lib)
	
	SET(BOOST_LIBS 		boost_system boost_thread)
	
	INCLUDE_DIRECTORIES(${GL_INC_DIR})
	LINK_DIRECTORIES (${GL_LIB_DIR})
ENDIF()


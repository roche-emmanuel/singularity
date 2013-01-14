
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
SET(CD_LIBS     cd.lib cdcontextplus.lib cdgl.lib cdlua51.lib cdluacontextplus51.lib cdluagl51.lib cdluaim51.lib cdluapdf51.lib cdpdf.lib freetype6.lib ftgl.lib pdflib.lib zlib1.lib gdiplus.lib)
SET(CD_FLAGS    )

SET(FIREBIRD_INC_DIR 	${DEP_FIREBIRD}/include)
SET(FIREBIRD_LIB_DIR 	${DEP_FIREBIRD}/lib)
SET(FIREBIRD_LIBS 		fbclient_ms)

SET(IM_INC_DIR 	${DEP_IM}/include)
SET(IM_LIB_DIR 	${DEP_IM})
SET(IM_LIBS     im.lib im_avi.lib im_capture.lib im_fftw.lib im_jp2.lib im_process.lib im_process_omp.lib im_wmv.lib imlua_avi51.lib imlua_capture51.lib imlua_fftw51.lib imlua_jp251.lib imlua_process_omp51.lib imlua_process51.lib imlua_wmv51.lib imlua51.lib zlib1.lib vfw32.lib wmvcore.lib strmiids.lib)
SET(IM_FLAGS    )

SET(IUP_INC_DIR 	${DEP_IUP}/include)
SET(IUP_LIB_DIR 	${DEP_IUP})
SET(IUP_LIBS     iup.lib iup_mglplot.lib iup_pplot.lib iupcd.lib iupcontrols.lib iupgl.lib iupim.lib iupimglib.lib iuplua_mglplot51.lib iuplua_pplot51.lib iuplua51.lib iupluacd51.lib iupluacontrols51.lib iupluagl51.lib iupluaim51.lib iupluaimglib51.lib iupluaole51.lib iupluatuio51.lib iupluaweb51.lib iupole.lib iuptuio.lib iupweb.lib gdi32.lib user32.lib comdlg32.lib comctl32.lib ole32.lib ws2_32.lib winmm.lib)
SET(IUP_FLAGS    )

SET(LUA_INC_DIR 	${DEP_LUA}/include)
SET(LUA_LIB_DIR 	${DEP_LUA}/lib)
SET(LUA_LIBS 		lua51)

SET(LUA_INC_DIR 	${DEP_LUA}/include)
SET(LUA_LIB_DIR 	${DEP_LUA}/lib)
SET(LUA_LIBS 		lua51)

SET(LUABIND_INC_DIR 	${DEP_LUABIND}/include)
SET(LUABIND_LIB_DIR 	${DEP_LUABIND}/lib)
SET(LUABIND_LIBS 		luabind)

SET(MYSQL_INC_DIR 	${DEP_MYSQL}/include)
SET(MYSQL_LIB_DIR 	${DEP_MYSQL}/lib)
SET(MYSQL_LIBS 		mysqlclient)

SET(FREENECT_INC_DIR 	${DEP_FREENECT}/include)
SET(FREENECT_LIB_DIR 	${DEP_FREENECT}/lib)
SET(FREENECT_LIBS 		freenect)

SET(KINECT_INC_DIR 		${DEP_KINECT}/include)
SET(KINECT_LIB_DIR 		${DEP_KINECT}/lib/x86)
SET(KINECT_LIBS 		Kinect10)

SET(ASSIMP_INC_DIR 		${DEP_ASSIMP}/include)
SET(ASSIMP_LIB_DIR 		${DEP_ASSIMP}/lib/assimp_release-dll_win32)
SET(ASSIMP_LIBS 		assimp)

SET(OPENSSL_INC_DIR 	${DEP_OPENSSL}/include)
SET(OPENSSL_LIB_DIR 	${DEP_OPENSSL}/lib)
SET(OPENSSL_LIBS 		libeay32.lib ssleay32.lib)

SET(AWESOMIUM_INC_DIR 	${DEP_AWESOMIUM}/include)
SET(AWESOMIUM_LIB_DIR 	${DEP_AWESOMIUM}/lib)
SET(AWESOMIUM_LIBS 		awesomium.lib)

SET(SPARK_INC_DIR 	${DEP_SPARK}/include)
SET(SPARK_LIB_DIR 	${DEP_SPARK}/lib/vc2008/static/)
SET(SPARK_LIBS 		SPARK.lib SPARK_GL.lib)

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
SET(SDL_LIBS 		SDL.lib)

SET(SPICE_INC_DIR 	${DEP_SPICE}/include)
SET(SPICE_LIB_DIR 	${DEP_SPICE}/lib)
SET(SPICE_LIBS 		cspice csupport)

SET(VLC_INC_DIR 	${DEP_VLC}/include)
SET(VLC_LIB_DIR 	${DEP_VLC}/lib)
SET(VLC_LIBS 		libvlc libvlccore)

SET(ATB_INC_DIR 	${DEP_ATB}/include)
SET(ATB_LIB_DIR 	${DEP_ATB}/lib)
SET(ATB_LIBS 		AntTweakBar.lib)

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
	
	SET(MYSQL_LIBS 		libmysql)

	SET(OSG_LIBS     	OpenThreads.lib
						osg.lib
						osgUtil.lib 
						osgDB.lib 
						osgGA.lib
						osgText.lib 
						osgViewer.lib  
						osgParticle.lib
						)						
ELSE()

    SET(LUA_INC_DIR 	${DEP_LUA}/include/luajit-2.0)
    SET(LUA_LIB_DIR 	${DEP_LUA}/lib)
    SET(LUA_LIBS 		luajit-5.1)
	
	SET(GL_INC_DIR 		${DEP_GL}/include)
	SET(GL_LIB_DIR 		${DEP_GL}/lib)
	
	SET(BOOST_LIBS 		boost_system boost_thread boost_program_options)
	
	INCLUDE_DIRECTORIES(${GL_INC_DIR})
	LINK_DIRECTORIES (${GL_LIB_DIR})
ENDIF()


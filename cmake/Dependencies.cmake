
IF("${FLAVOR}" STREQUAL "linux64" OR "${FLAVOR}" STREQUAL "linux32")
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

IF(WIN32)
SET(FLAVOR_LIBS rpcrt4 oleaut32 ole32 uuid winspool winmm shell32 comctl32 comdlg32 advapi32 ws2_32 wsock32 gdi32 )
SET(GL_LIBS opengl32)
ELSE()
SET(FLAVOR_LIBS dl)
SET(GL_LIBS GM)
ENDIF()

IF(MSVC)
	SET(GL_LIBS  		OpenGL32.lib GLU32.lib)
	
    SET(LUA_INC_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_LUA}/include)
    SET(LUA_LIB_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_LUA}/lib)
    SET(LUA_LIBS 		lua51)

	SET(MYSQL_INC_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_MYSQL}/include)
    SET(MYSQL_LIB_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_MYSQL}/lib)
    SET(MYSQL_LIBS 		libmysql.lib)
	
	SET(FIREBIRD_INC_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_FIREBIRD}/include)
    SET(FIREBIRD_LIB_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_FIREBIRD}/lib)
    SET(FIREBIRD_LIBS 		fbclient_ms.lib)
	
	SET(WXWEBKIT_INC_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_WXWEBKIT}/Source/WebKit/wx)
    SET(WXWEBKIT_LIB_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_WXWEBKIT}/WebKitBuild/Release)
    SET(WXWEBKIT_LIBS 		wxwebkit.lib)
	
    SET(WX_INC_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_WX}/include ${DEPS_DIR}/${FLAVOR}/${DEP_WX}/lib/vc_dll/mswu)
    # SET(WX_LIB_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_WX}/lib/vc_lib)
    SET(WX_LIB_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_WX}/lib/vc_dll)
    # SET(WX_LIBS     wxexpat.lib wxjpeg.lib wxpng.lib wxregex.lib wxscintilla.lib wxtiff.lib wxzlib.lib wxmsw29.lib wxmsw29_gl.lib)
    SET(WX_LIBS     wxmsw29u.lib wxmsw29u_gl.lib)
    SET(WX_FLAGS    -D__WXMSW__ -DWXUSINGDLL)
	
	SET(OSG_INC_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_OSG}/include)
	SET(OSG_LIB_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_OSG}/lib ${DEPS_DIR}/${FLAVOR}/${DEP_OSG}/lib/osgPlugins-3.0.1)
	SET(OSG_LIBS     	OpenThreads.lib 
						osg.lib 
						osgUtil.lib 
						osgDB.lib 
						osgGA.lib 
						osgText.lib 
						osgViewer.lib  
						osgParticle.lib
						
						# ot12-OpenThreads.lib 
						# osg80-osg.lib 
						# osg80-osgUtil.lib 
						# osg80-osgDB.lib 
						# osg80-osgGA.lib 
						# osg80-osgText.lib 
						# osg80-osgViewer.lib  
						# osg80-osgParticle.lib 
						# part for serialization support:
						# osgdb_osg
						# osgdb_serializers_osg osgdb_serializers_osgparticle osgdb_serializers_osgtext
						# osgdb_serializers_osgterrain osgdb_serializers_osganimation osgdb_serializers_osgfx
						# osgdb_serializers_osgshadow osgdb_serializers_osgmanipulator osgdb_serializers_osgsim
						# osgdb_serializers_osgvolume
						)
	SET(OSG_FLAGS     	) #-DOSG_LIBRARY_STATIC) #) #-DOT_LIBRARY_STATIC 
	
	SET(IM_INC_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_IM}/include)
	SET(IM_LIB_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_IM})
	SET(IM_LIBS     im.lib im_avi.lib im_capture.lib im_fftw.lib im_jp2.lib im_process.lib im_process_omp.lib im_wmv.lib imlua_avi51.lib imlua_capture51.lib imlua_fftw51.lib imlua_jp251.lib imlua_process_omp51.lib imlua_process51.lib imlua_wmv51.lib imlua51.lib zlib1.lib vfw32.lib wmvcore.lib strmiids.lib)
	SET(IM_FLAGS    )

	SET(CD_INC_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_CD}/include)
	SET(CD_LIB_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_CD})
	SET(CD_LIBS     cd.lib cdcontextplus.lib cdgl.lib cdlua51.lib cdluacontextplus51.lib cdluagl51.lib cdluaim51.lib cdluapdf51.lib cdpdf.lib freetype6.lib ftgl.lib pdflib.lib zlib1.lib gdiplus.lib)
	SET(CD_FLAGS    )

	SET(IUP_INC_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_IUP}/include)
	SET(IUP_LIB_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_IUP})
	SET(IUP_LIBS     iup.lib iup_mglplot.lib iup_pplot.lib iupcd.lib iupcontrols.lib iupgl.lib iupim.lib iupimglib.lib iuplua_mglplot51.lib iuplua_pplot51.lib iuplua51.lib iupluacd51.lib iupluacontrols51.lib iupluagl51.lib iupluaim51.lib iupluaimglib51.lib iupluaole51.lib iupluatuio51.lib iupluaweb51.lib iupole.lib iuptuio.lib iupweb.lib gdi32.lib user32.lib comdlg32.lib comctl32.lib ole32.lib ws2_32.lib winmm.lib)
	SET(IUP_FLAGS    -DIUP_DLL)

    SET(SDL_INC_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_SDL}/include)
    SET(SDL_LIB_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_SDL}/VisualC/SDL/Release)
    SET(SDL_LIBS 		SDL.lib)

    SET(SPICE_INC_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_SPICE}/include)
    SET(SPICE_LIB_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_SPICE}/lib)
    SET(SPICE_LIBS 		cspice.lib csupport.lib)
	
ELSE()
    SET(LUABIND_INC_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_LUABIND}/include)
    SET(LUABIND_LIB_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_LUABIND}/lib)
    SET(LUABIND_LIBS 		luabind)

    SET(LUA_INC_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_LUA}/include/luajit-2.0)
    SET(LUA_LIB_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_LUA}/lib)
    SET(LUA_LIBS 		luajit-5.1)

    SET(BOOST_INC_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_BOOST}/include)
    SET(BOOST_LIB_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_BOOST}/lib)
    SET(BOOST_LIBS 		)
ENDIF()
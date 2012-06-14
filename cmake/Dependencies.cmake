
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
    SET(LUA_INC_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_LUA}/include)
    SET(LUA_LIB_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_LUA}/lib)
    SET(LUA_LIBS 		lua51)

	SET(MYSQL_INC_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_MYSQL}/include)
    SET(MYSQL_LIB_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_MYSQL}/lib)
    SET(MYSQL_LIBS 		libmysql.lib)
	
	SET(FIREBIRD_INC_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_FIREBIRD}/include)
    SET(FIREBIRD_LIB_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_FIREBIRD}/lib)
    SET(FIREBIRD_LIBS 		fbclient_ms.lib)
	
    SET(WX_INC_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_WX}/include ${DEPS_DIR}/${FLAVOR}/${DEP_WX}/lib/vc_dll/mswu)
    # SET(WX_LIB_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_WX}/lib/vc_lib)
    SET(WX_LIB_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_WX}/lib/vc_dll)
    # SET(WX_LIBS     wxexpat.lib wxjpeg.lib wxpng.lib wxregex.lib wxscintilla.lib wxtiff.lib wxzlib.lib wxmsw29.lib wxmsw29_gl.lib)
    SET(WX_LIBS     wxmsw29u.lib wxmsw29u_gl.lib)
    SET(WX_FLAGS    -D__WXMSW__ -DWXUSINGDLL)
	
	SET(OSG_INC_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_OSG}/include)
	SET(OSG_LIB_DIR 	${DEPS_DIR}/${FLAVOR}/${DEP_OSG}/lib)
	SET(OSG_LIBS     ot12-OpenThreads.lib osg80-osg.lib osg80-osgUtil.lib osg80-osgDB.lib)
	SET(OSG_FLAGS     ) #-DOSG_LIBRARY_STATIC) #-DOT_LIBRARY_STATIC 
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
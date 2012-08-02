#include <plug_common.h>

#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgText/Version>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgText/Font>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgText/Font3D>

// Function checkers:
inline static bool _lg_typecheck_osgTextGetVersion(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_osgTextGetLibraryName(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}


// Function binds:
// const char * osgTextGetVersion()
static int _bind_osgTextGetVersion(lua_State *L) {
	if (!_lg_typecheck_osgTextGetVersion(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in const char * osgTextGetVersion() function, expected prototype:\nconst char * osgTextGetVersion()\nClass arguments details:\n");
	}


	const char * lret = osgTextGetVersion();
	lua_pushstring(L,lret);

	return 1;
}

// const char * osgTextGetLibraryName()
static int _bind_osgTextGetLibraryName(lua_State *L) {
	if (!_lg_typecheck_osgTextGetLibraryName(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in const char * osgTextGetLibraryName() function, expected prototype:\nconst char * osgTextGetLibraryName()\nClass arguments details:\n");
	}


	const char * lret = osgTextGetLibraryName();
	lua_pushstring(L,lret);

	return 1;
}


// Function checkers:

// Function binds:

// Function checkers:

// Function binds:

// Function checkers:

// Function binds:

// Function checkers:
inline static bool _lg_typecheck_readFontFile(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_readRefFontFile(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_findFontFile(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_readFont3DFile(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_readRefFont3DFile(lua_State *L) {
	int luatop = lua_gettop(L);
	if( luatop<1 || luatop>2 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
	return true;
}

inline static bool _lg_typecheck_findFont3DFile(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	return true;
}


// Function binds:
// osgText::Font * osgText::readFontFile(const std::string & filename, const osgDB::Options * userOptions = 0)
static int _bind_readFontFile(lua_State *L) {
	if (!_lg_typecheck_readFontFile(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osgText::Font * osgText::readFontFile(const std::string & filename, const osgDB::Options * userOptions = 0) function, expected prototype:\nosgText::Font * osgText::readFontFile(const std::string & filename, const osgDB::Options * userOptions = 0)\nClass arguments details:\narg 2 ID = 50169651\n");
	}

	int luatop = lua_gettop(L);

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::Options* userOptions=luatop>1 ? dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,2)) : (const osgDB::Options*)0;

	osgText::Font * lret = readFontFile(filename, userOptions);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osgText::Font >::push(L,lret,false);

	return 1;
}

// osg::ref_ptr< osgText::Font > osgText::readRefFontFile(const std::string & filename, const osgDB::Options * userOptions = 0)
static int _bind_readRefFontFile(lua_State *L) {
	if (!_lg_typecheck_readRefFontFile(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::ref_ptr< osgText::Font > osgText::readRefFontFile(const std::string & filename, const osgDB::Options * userOptions = 0) function, expected prototype:\nosg::ref_ptr< osgText::Font > osgText::readRefFontFile(const std::string & filename, const osgDB::Options * userOptions = 0)\nClass arguments details:\narg 2 ID = 50169651\n");
	}

	int luatop = lua_gettop(L);

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::Options* userOptions=luatop>1 ? dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,2)) : (const osgDB::Options*)0;

	osg::ref_ptr< osgText::Font > lret = readRefFontFile(filename, userOptions);
	Luna< osgText::Font >::push(L,lret.get(),false);

	return 1;
}

// std::string osgText::findFontFile(const std::string & str)
static int _bind_findFontFile(lua_State *L) {
	if (!_lg_typecheck_findFontFile(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgText::findFontFile(const std::string & str) function, expected prototype:\nstd::string osgText::findFontFile(const std::string & str)\nClass arguments details:\n");
	}

	std::string str(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = findFontFile(str);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}

// osgText::Font * osgText::readFont3DFile(const std::string & filename, const osgDB::Options * userOptions = 0)
static int _bind_readFont3DFile(lua_State *L) {
	if (!_lg_typecheck_readFont3DFile(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osgText::Font * osgText::readFont3DFile(const std::string & filename, const osgDB::Options * userOptions = 0) function, expected prototype:\nosgText::Font * osgText::readFont3DFile(const std::string & filename, const osgDB::Options * userOptions = 0)\nClass arguments details:\narg 2 ID = 50169651\n");
	}

	int luatop = lua_gettop(L);

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::Options* userOptions=luatop>1 ? dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,2)) : (const osgDB::Options*)0;

	osgText::Font * lret = readFont3DFile(filename, userOptions);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< osgText::Font >::push(L,lret,false);

	return 1;
}

// osg::ref_ptr< osgText::Font > osgText::readRefFont3DFile(const std::string & filename, const osgDB::Options * userOptions = 0)
static int _bind_readRefFont3DFile(lua_State *L) {
	if (!_lg_typecheck_readRefFont3DFile(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in osg::ref_ptr< osgText::Font > osgText::readRefFont3DFile(const std::string & filename, const osgDB::Options * userOptions = 0) function, expected prototype:\nosg::ref_ptr< osgText::Font > osgText::readRefFont3DFile(const std::string & filename, const osgDB::Options * userOptions = 0)\nClass arguments details:\narg 2 ID = 50169651\n");
	}

	int luatop = lua_gettop(L);

	std::string filename(lua_tostring(L,1),lua_objlen(L,1));
	const osgDB::Options* userOptions=luatop>1 ? dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,2)) : (const osgDB::Options*)0;

	osg::ref_ptr< osgText::Font > lret = readRefFont3DFile(filename, userOptions);
	Luna< osgText::Font >::push(L,lret.get(),false);

	return 1;
}

// std::string osgText::findFont3DFile(const std::string & str)
static int _bind_findFont3DFile(lua_State *L) {
	if (!_lg_typecheck_findFont3DFile(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in std::string osgText::findFont3DFile(const std::string & str) function, expected prototype:\nstd::string osgText::findFont3DFile(const std::string & str)\nClass arguments details:\n");
	}

	std::string str(lua_tostring(L,1),lua_objlen(L,1));

	std::string lret = findFont3DFile(str);
	lua_pushlstring(L,lret.data(),lret.size());

	return 1;
}


// Function checkers:

// Function binds:

#ifdef __cplusplus
extern "C" {
#endif

void register_global_functions(lua_State* L) {
	lua_pushcfunction(L, _bind_osgTextGetVersion); lua_setfield(L,-2,"osgTextGetVersion");
	lua_pushcfunction(L, _bind_osgTextGetLibraryName); lua_setfield(L,-2,"osgTextGetLibraryName");
	lua_pushcfunction(L, _bind_readFontFile); lua_setfield(L,-2,"readFontFile");
	lua_pushcfunction(L, _bind_readRefFontFile); lua_setfield(L,-2,"readRefFontFile");
	lua_pushcfunction(L, _bind_findFontFile); lua_setfield(L,-2,"findFontFile");
	lua_pushcfunction(L, _bind_readFont3DFile); lua_setfield(L,-2,"readFont3DFile");
	lua_pushcfunction(L, _bind_readRefFont3DFile); lua_setfield(L,-2,"readRefFont3DFile");
	lua_pushcfunction(L, _bind_findFont3DFile); lua_setfield(L,-2,"findFont3DFile");
}

#ifdef __cplusplus
}
#endif


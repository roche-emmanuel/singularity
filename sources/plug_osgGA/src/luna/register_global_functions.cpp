#include <plug_common.h>

#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgGA/Version>

// Function checkers:
inline static bool _lg_typecheck_osgGAGetVersion(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_osgGAGetLibraryName(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}


// Function binds:
// const char * osgGAGetVersion()
static int _bind_osgGAGetVersion(lua_State *L) {
	if (!_lg_typecheck_osgGAGetVersion(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in const char * osgGAGetVersion() function, expected prototype:\nconst char * osgGAGetVersion()\nClass arguments details:\n");
	}


	const char * lret = osgGAGetVersion();
	lua_pushstring(L,lret);

	return 1;
}

// const char * osgGAGetLibraryName()
static int _bind_osgGAGetLibraryName(lua_State *L) {
	if (!_lg_typecheck_osgGAGetLibraryName(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in const char * osgGAGetLibraryName() function, expected prototype:\nconst char * osgGAGetLibraryName()\nClass arguments details:\n");
	}


	const char * lret = osgGAGetLibraryName();
	lua_pushstring(L,lret);

	return 1;
}


// Function checkers:

// Function binds:

// Function checkers:

// Function binds:

#ifdef __cplusplus
extern "C" {
#endif

void register_global_functions(lua_State* L) {
	lua_pushcfunction(L, _bind_osgGAGetVersion); lua_setfield(L,-2,"osgGAGetVersion");
	lua_pushcfunction(L, _bind_osgGAGetLibraryName); lua_setfield(L,-2,"osgGAGetLibraryName");
}

#ifdef __cplusplus
}
#endif


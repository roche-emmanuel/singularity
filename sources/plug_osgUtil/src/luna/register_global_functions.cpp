#include <plug_common.h>

#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1/include/osgUtil/Version>

// Function checkers:
inline static bool _lg_typecheck_osgUtilGetVersion(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_osgUtilGetLibraryName(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}


// Function binds:
// const char * osgUtilGetVersion()
static int _bind_osgUtilGetVersion(lua_State *L) {
	if (!_lg_typecheck_osgUtilGetVersion(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in const char * osgUtilGetVersion() function, expected prototype:\nconst char * osgUtilGetVersion()\nClass arguments details:\n");
	}


	const char * lret = osgUtilGetVersion();
	lua_pushstring(L,lret);

	return 1;
}

// const char * osgUtilGetLibraryName()
static int _bind_osgUtilGetLibraryName(lua_State *L) {
	if (!_lg_typecheck_osgUtilGetLibraryName(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in const char * osgUtilGetLibraryName() function, expected prototype:\nconst char * osgUtilGetLibraryName()\nClass arguments details:\n");
	}


	const char * lret = osgUtilGetLibraryName();
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
	lua_pushcfunction(L, _bind_osgUtilGetVersion); lua_setfield(L,-2,"osgUtilGetVersion");
	lua_pushcfunction(L, _bind_osgUtilGetLibraryName); lua_setfield(L,-2,"osgUtilGetLibraryName");
}

#ifdef __cplusplus
}
#endif


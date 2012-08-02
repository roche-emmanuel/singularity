#include <plug_common.h>

#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgViewer/Version>

// Function checkers:
inline static bool _lg_typecheck_osgViewerGetVersion(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_osgViewerGetLibraryName(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}


// Function binds:
// const char * osgViewerGetVersion()
static int _bind_osgViewerGetVersion(lua_State *L) {
	if (!_lg_typecheck_osgViewerGetVersion(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in const char * osgViewerGetVersion() function, expected prototype:\nconst char * osgViewerGetVersion()\nClass arguments details:\n");
	}


	const char * lret = osgViewerGetVersion();
	lua_pushstring(L,lret);

	return 1;
}

// const char * osgViewerGetLibraryName()
static int _bind_osgViewerGetLibraryName(lua_State *L) {
	if (!_lg_typecheck_osgViewerGetLibraryName(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in const char * osgViewerGetLibraryName() function, expected prototype:\nconst char * osgViewerGetLibraryName()\nClass arguments details:\n");
	}


	const char * lret = osgViewerGetLibraryName();
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

// Function binds:

// Function checkers:

// Function binds:

#ifdef __cplusplus
extern "C" {
#endif

void register_global_functions(lua_State* L) {
	lua_pushcfunction(L, _bind_osgViewerGetVersion); lua_setfield(L,-2,"osgViewerGetVersion");
	lua_pushcfunction(L, _bind_osgViewerGetLibraryName); lua_setfield(L,-2,"osgViewerGetLibraryName");
}

#ifdef __cplusplus
}
#endif


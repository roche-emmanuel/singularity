#include <plug_common.h>

#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1-static/include/osgParticle/Version>

// Function checkers:
inline static bool _lg_typecheck_osgParticleGetVersion(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_osgParticleGetLibraryName(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}


// Function binds:
// const char * osgParticleGetVersion()
static int _bind_osgParticleGetVersion(lua_State *L) {
	if (!_lg_typecheck_osgParticleGetVersion(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in const char * osgParticleGetVersion() function, expected prototype:\nconst char * osgParticleGetVersion()\nClass arguments details:\n");
	}


	const char * lret = osgParticleGetVersion();
	lua_pushstring(L,lret);

	return 1;
}

// const char * osgParticleGetLibraryName()
static int _bind_osgParticleGetLibraryName(lua_State *L) {
	if (!_lg_typecheck_osgParticleGetLibraryName(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in const char * osgParticleGetLibraryName() function, expected prototype:\nconst char * osgParticleGetLibraryName()\nClass arguments details:\n");
	}


	const char * lret = osgParticleGetLibraryName();
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

#ifdef __cplusplus
extern "C" {
#endif

void register_global_functions(lua_State* L) {
	lua_pushcfunction(L, _bind_osgParticleGetVersion); lua_setfield(L,-2,"osgParticleGetVersion");
	lua_pushcfunction(L, _bind_osgParticleGetLibraryName); lua_setfield(L,-2,"osgParticleGetLibraryName");
}

#ifdef __cplusplus
}
#endif


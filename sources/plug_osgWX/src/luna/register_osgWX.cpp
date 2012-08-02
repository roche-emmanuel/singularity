#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void register_defines(lua_State* L);
extern void register_enums(lua_State* L);
extern void register_global_functions(lua_State* L);

int PLUG_EXPORT luaopen_osgWX(lua_State* L) {
	luna_open(L);

	lua_newtable(L); // container class

	register_defines(L);

	register_enums(L);

	Luna< void >::Register(L);
	Luna< GraphicsWindowWX >::Register(L);

	register_global_functions(L);

	lua_pushstring(L,"osgWX");
	lua_setfield(L,-2,"__NAME__");

	lua_setglobal(L,"osgWX");
	lua_getglobal(L,"osgWX");

	luna_copyParents(L,"osgWX");

	return 1;
}

#ifdef __cplusplus
}
#endif


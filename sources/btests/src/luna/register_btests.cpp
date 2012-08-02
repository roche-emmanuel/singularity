#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void register_defines(lua_State* L);
extern void register_global_functions(lua_State* L);

int luaopen_btests(lua_State* L) {
	luna_open(L);

	lua_newtable(L); // container class

	Luna< void >::Register(L);
	Luna< GetSetTester >::Register(L);
	Luna< ProfileAnotherBase >::Register(L);
	Luna< ProfileBase >::Register(L);
	Luna< ProfileDerived >::Register(L);
	Luna< ProfileMultiBases >::Register(L);

	register_defines(L);

	register_global_functions(L);

	lua_setglobal(L,"btests");
	lua_getglobal(L,"btests");

	luna_copyParents(L,"btests");

	return 1;
}

#ifdef __cplusplus
}
#endif


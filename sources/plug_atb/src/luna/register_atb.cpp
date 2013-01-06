#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void register_defines(lua_State* L);
extern void register_enums(lua_State* L);
extern void register_global_functions(lua_State* L);

	
	
int PLUG_EXPORT luaopen_atb(lua_State* L) {
	luna_open(L);

	luna_pushModule(L,"luna");
	Luna< void >::Register(L);
	luna_popModule(L);

	luna_pushModule(L,"atb");
	Luna< TwBar >::Register(L);
	Luna< TwEnumVal >::Register(L);
	Luna< TwStructMember >::Register(L);
	Luna< atb::TwBoolCallback >::Register(L);
	luna_popModule(L);

	luna_pushModule(L,"atb");

	register_defines(L);

	register_enums(L);

	luna_popModule(L);

	register_global_functions(L);

	luna_copyParents(L,"atb");

	luna_pushModule(L,"atb");
	return 1;
}

#ifdef __cplusplus
}
#endif


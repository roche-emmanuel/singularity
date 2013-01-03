#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void register_defines(lua_State* L);
extern void register_enums(lua_State* L);
extern void register_global_functions(lua_State* L);

	
	
int PLUG_EXPORT luaopen_spark(lua_State* L) {
	luna_open(L);

	luna_pushModule(L,"luna");
	Luna< void >::Register(L);
	luna_popModule(L);

	luna_pushModule(L,"spark");
	Luna< spark::GroupCustomUpdate >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"tuio");
	Luna< tuio::TUIOClientHandler >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"spark");
	Luna< SPK::Oriented3DRendererInterface >::Register(L);
	Luna< SPK::Group >::Register(L);
	Luna< SPK::Vector3D >::Register(L);
	luna_popModule(L);

	luna_pushModule(L,"spark");

	register_defines(L);

	register_enums(L);

	luna_popModule(L);

	register_global_functions(L);

	luna_copyParents(L,"spark");
	luna_copyParents(L,"tuio");

	luna_pushModule(L,"spark");
	return 1;
}

#ifdef __cplusplus
}
#endif


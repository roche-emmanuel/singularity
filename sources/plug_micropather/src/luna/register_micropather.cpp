#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void register_defines(lua_State* L);
extern void register_enums(lua_State* L);
extern void register_global_functions(lua_State* L);

	
	
int PLUG_EXPORT luaopen_micropather(lua_State* L) {
	luna_open(L);

	luna_pushModule(L,"luna");
	Luna< void >::Register(L);
	luna_popModule(L);

	luna_pushModule(L,"micropather");
	Luna< micropather::StateCost >::Register(L);
	Luna< micropather::Graph >::Register(L);
	Luna< micropather::NodeCost >::Register(L);
	Luna< micropather::PathNode >::Register(L);
	Luna< micropather::PathNodePool >::Register(L);
	Luna< micropather::MicroPather >::Register(L);
	Luna< std::vector< micropather::StateCost > >::Register(L);
	Luna< std::vector< void * > >::Register(L);
	luna_popModule(L);

	luna_pushModule(L,"micropather");

	register_defines(L);

	register_enums(L);

	luna_popModule(L);

	register_global_functions(L);

	luna_copyParents(L,"micropather");

	luna_pushModule(L,"micropather");
	return 1;
}

#ifdef __cplusplus
}
#endif


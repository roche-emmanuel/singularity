#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void register_defines(lua_State* L);
extern void register_enums(lua_State* L);
extern void register_global_functions(lua_State* L);

	
	
int PLUG_EXPORT luaopen_FANN(lua_State* L) {
	luna_open(L);

	luna_pushModule(L,"luna");
	Luna< void >::Register(L);
	luna_popModule(L);

	luna_pushModule(L,"FANN");
	Luna< FANN::training_data >::Register(L);
	Luna< FANN::neural_net >::Register(L);
	luna_popModule(L);

	luna_pushModule(L,"FANN");

	register_defines(L);

	register_enums(L);

	register_global_functions(L);

	luna_popModule(L);

	luna_copyParents(L,"FANN");

	luna_pushModule(L,"FANN");
	return 1;
}

#ifdef __cplusplus
}
#endif


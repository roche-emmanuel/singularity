#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void register_defines(lua_State* L);
extern void register_enums(lua_State* L);
extern void register_global_functions(lua_State* L);

	
	
int PLUG_EXPORT luaopen_land(lua_State* L) {
	luna_open(L);

	luna_pushModule(L,"sgt");
	Luna< sgt::half >::Register(L);
	Luna< sgt::vec2h >::Register(L);
	Luna< sgt::vec2f >::Register(L);
	Luna< sgt::vec2d >::Register(L);
	Luna< sgt::vec2i >::Register(L);
	Luna< sgt::vec3h >::Register(L);
	Luna< sgt::vec3f >::Register(L);
	Luna< sgt::vec3d >::Register(L);
	Luna< sgt::vec3i >::Register(L);
	luna_popModule(L);

	luna_pushModule(L,"land");

	register_defines(L);

	register_enums(L);

	luna_popModule(L);

	register_global_functions(L);

	luna_copyParents(L,"sgt");
	luna_copyParents(L,"land");

	luna_pushModule(L,"land");
	return 1;
}

#ifdef __cplusplus
}
#endif


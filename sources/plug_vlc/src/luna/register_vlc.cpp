#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void register_defines(lua_State* L);
extern void register_enums(lua_State* L);
extern void register_global_functions(lua_State* L);

	
	
int PLUG_EXPORT luaopen_vlc(lua_State* L) {
	luna_open(L);

	luna_pushModule(L,"vlc");
	Luna< vlc::VLCImageStream >::Register(L);
	luna_popModule(L);

	luna_pushModule(L,"vlc");

	register_defines(L);

	register_enums(L);

	luna_popModule(L);

	register_global_functions(L);

	luna_copyParents(L,"vlc");

	luna_pushModule(L,"vlc");
	return 1;
}

#ifdef __cplusplus
}
#endif


#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void register_defines(lua_State* L);
extern void register_enums(lua_State* L);
extern void register_global_functions(lua_State* L);

	
	
int PLUG_EXPORT luaopen_atb(lua_State* L) {
	luna_open(L);

	luna_pushModule(L,"atb");
	Luna< BasicVariableCallback >::Register(L);
	Luna< BoolCallback >::Register(L);
	Luna< ButtonCallback >::Register(L);
	Luna< ColorCallback >::Register(L);
	Luna< DirCallback >::Register(L);
	Luna< DoubleCallback >::Register(L);
	Luna< EnumCallback >::Register(L);
	Luna< IntCallback >::Register(L);
	Luna< QuatCallback >::Register(L);
	Luna< StringCallback >::Register(L);
	Luna< TwBar >::Register(L);
	Luna< TwEnumVal >::Register(L);
	Luna< TwStructMember >::Register(L);
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


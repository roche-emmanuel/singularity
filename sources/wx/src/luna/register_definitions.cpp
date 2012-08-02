#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

void register_defines(lua_State* L) {
	lua_pushnumber(L,wxOK); lua_setfield(L,-2,"wxOK");
}

#ifdef __cplusplus
}
#endif


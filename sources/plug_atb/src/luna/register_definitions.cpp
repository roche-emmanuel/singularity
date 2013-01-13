#include <plug_common.h>

#include <AntTweakBar.h>

#ifdef __cplusplus
extern "C" {
#endif

void register_defines(lua_State* L) {
	lua_pushnumber(L,TW_VERSION); lua_setfield(L,-2,"TW_VERSION");
}

#ifdef __cplusplus
}
#endif


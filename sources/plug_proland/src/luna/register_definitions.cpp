#include <plug_common.h>

#include <ork/render/Texture.h>

#ifdef __cplusplus
extern "C" {
#endif

void register_defines(lua_State* L) {
	lua_pushnumber(L,MAX_TEXTURE_UNITS); lua_setfield(L,-2,"MAX_TEXTURE_UNITS");
}

#ifdef __cplusplus
}
#endif


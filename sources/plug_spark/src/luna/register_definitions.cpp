#include <plug_common.h>

#include <RenderingAPIs/OpenGL/SPK_GLExtHandler.h>

#ifdef __cplusplus
extern "C" {
#endif

void register_defines(lua_State* L) {
	lua_pushnumber(L,GL_POINT_SPRITE); lua_setfield(L,-2,"GL_POINT_SPRITE");
	lua_pushnumber(L,GL_COORD_REPLACE); lua_setfield(L,-2,"GL_COORD_REPLACE");
	lua_pushnumber(L,GL_POINT_DISTANCE_ATTENUATION); lua_setfield(L,-2,"GL_POINT_DISTANCE_ATTENUATION");
	lua_pushnumber(L,GL_POINT_SIZE_MIN); lua_setfield(L,-2,"GL_POINT_SIZE_MIN");
	lua_pushnumber(L,GL_POINT_SIZE_MAX); lua_setfield(L,-2,"GL_POINT_SIZE_MAX");
	lua_pushnumber(L,GL_TEXTURE_3D); lua_setfield(L,-2,"GL_TEXTURE_3D");
}

#ifdef __cplusplus
}
#endif


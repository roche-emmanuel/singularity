#include <plug_common.h>

#include <KinectHandler.h>

#ifdef __cplusplus
extern "C" {
#endif

void register_defines(lua_State* L) {
	lua_pushnumber(L,KINECT_IMAGE_WIDTH); lua_setfield(L,-2,"KINECT_IMAGE_WIDTH");
	lua_pushnumber(L,KINECT_IMAGE_HEIGHT); lua_setfield(L,-2,"KINECT_IMAGE_HEIGHT");
}

#ifdef __cplusplus
}
#endif


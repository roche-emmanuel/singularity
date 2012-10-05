#include <plug_common.h>

#include <osg/Object>
#include <osg/Referenced>
#include <sgtCommon.h>

#ifdef __cplusplus
extern "C" {
#endif

void register_defines(lua_State* L) {
	lua_pushnumber(L,OSG_OBJECT); lua_setfield(L,-2,"OSG_OBJECT");
	lua_pushnumber(L,OSG_REFERENCED); lua_setfield(L,-2,"OSG_REFERENCED");
}

#ifdef __cplusplus
}
#endif


#include <plug_common.h>

#include <Box2D/Collision/b2DynamicTree.h>
#include <Box2D/Common/b2Settings.h>

#ifdef __cplusplus
extern "C" {
#endif

void register_defines(lua_State* L) {
	lua_pushnumber(L,b2_maxManifoldPoints); lua_setfield(L,-2,"b2_maxManifoldPoints");
	lua_pushnumber(L,b2_maxPolygonVertices); lua_setfield(L,-2,"b2_maxPolygonVertices");
	lua_pushnumber(L,b2_maxSubSteps); lua_setfield(L,-2,"b2_maxSubSteps");
	lua_pushnumber(L,b2_maxTOIContacts); lua_setfield(L,-2,"b2_maxTOIContacts");
}

#ifdef __cplusplus
}
#endif


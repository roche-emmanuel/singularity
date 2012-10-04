#include </cygdrive/w/Cloud/Dev/Deps/ds411/OpenSceneGraph-3.0.1/include/osg/Object>
#include </cygdrive/w/Cloud/Dev/Deps/ds411/OpenSceneGraph-3.0.1/include/osg/Referenced>
#include </cygdrive/w/Cloud/Projects/singularity/sources/sgtCore/include/sgtCommon.h>

#include <plug_common.h>

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


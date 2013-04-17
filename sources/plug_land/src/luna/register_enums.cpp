#include <plug_common.h>

#include <scene/Tools.h>

#ifdef __cplusplus
extern "C" {
#endif

void register_enums(lua_State* L) {
	lua_newtable(L); // enum VisibilityMode

	lua_pushnumber(L,sgt::FULLY_VISIBLE); lua_setfield(L,-2,"FULLY_VISIBLE");
	lua_pushnumber(L,sgt::PARTIALLY_VISIBLE); lua_setfield(L,-2,"PARTIALLY_VISIBLE");
	lua_pushnumber(L,sgt::INVISIBLE); lua_setfield(L,-2,"INVISIBLE");

	lua_setfield(L,-2,"VisibilityMode");

	lua_pushnumber(L,sgt::FULLY_VISIBLE); lua_setfield(L,-2,"FULLY_VISIBLE");
	lua_pushnumber(L,sgt::PARTIALLY_VISIBLE); lua_setfield(L,-2,"PARTIALLY_VISIBLE");
	lua_pushnumber(L,sgt::INVISIBLE); lua_setfield(L,-2,"INVISIBLE");


}

#ifdef __cplusplus
}
#endif



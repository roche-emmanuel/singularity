#include <plug_common.h>

#include <plug_extensions.h>

// Function checkers:
inline static bool _lg_typecheck_playProlandDemo(lua_State *L) {
	if( lua_gettop(L)!=3 ) return false;

	if( lua_isstring(L,1)==0 ) return false;
	if( lua_isstring(L,2)==0 ) return false;
	if( lua_isstring(L,3)==0 ) return false;
	return true;
}

inline static bool _lg_typecheck_installDebugCallback(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}


// Function binds:
// int proland::playProlandDemo(const std::string & archive, const std::string & data, const std::string & events)
static int _bind_playProlandDemo(lua_State *L) {
	if (!_lg_typecheck_playProlandDemo(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in int proland::playProlandDemo(const std::string & archive, const std::string & data, const std::string & events) function, expected prototype:\nint proland::playProlandDemo(const std::string & archive, const std::string & data, const std::string & events)\nClass arguments details:\n");
	}

	std::string archive(lua_tostring(L,1),lua_objlen(L,1));
	std::string data(lua_tostring(L,2),lua_objlen(L,2));
	std::string events(lua_tostring(L,3),lua_objlen(L,3));

	int lret = proland::playProlandDemo(archive, data, events);
	lua_pushnumber(L,lret);

	return 1;
}

// bool proland::installDebugCallback()
static int _bind_installDebugCallback(lua_State *L) {
	if (!_lg_typecheck_installDebugCallback(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in bool proland::installDebugCallback() function, expected prototype:\nbool proland::installDebugCallback()\nClass arguments details:\n");
	}


	bool lret = proland::installDebugCallback();
	lua_pushboolean(L,lret?1:0);

	return 1;
}


#ifdef __cplusplus
extern "C" {
#endif

void register_global_functions(lua_State* L) {
	luna_pushModule(L,"proland");
	lua_pushcfunction(L, _bind_playProlandDemo); lua_setfield(L,-2,"playProlandDemo");
	lua_pushcfunction(L, _bind_installDebugCallback); lua_setfield(L,-2,"installDebugCallback");
	luna_popModule(L);
}

#ifdef __cplusplus
}
#endif


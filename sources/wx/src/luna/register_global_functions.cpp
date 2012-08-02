#include <plug_common.h>

// Function checkers:
inline static bool _lg_typecheck_wxMessageBox(lua_State *L) {
	if( lua_gettop(L) != 6) return false;
	if( lua_isstring(L,1)==0) return false;
	if( lua_isstring(L,2)==0) return false;
	if( lua_isnumber(L,3)==0) return false;
	if( lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,92430048)) return false;
	if( lua_isnumber(L,5)==0) return false;
	if( lua_isnumber(L,6)==0) return false;
	return true;
}

inline static bool _lg_typecheck_wxExit(lua_State *L) {
	if( lua_gettop(L) != 0) return false;
	return true;
}

inline static bool _lg_typecheck_wxYield(lua_State *L) {
	if( lua_gettop(L) != 0) return false;
	return true;
}

inline static bool _lg_typecheck_wxWakeUpIdle(lua_State *L) {
	if( lua_gettop(L) != 0) return false;
	return true;
}

inline static bool _lg_typecheck_wxNewEventType(lua_State *L) {
	if( lua_gettop(L) != 0) return false;
	return true;
}

inline static bool _lg_typecheck_wxCheckDynamicCast(lua_State *L) {
	if( lua_gettop(L) != 2) return false;
	if( lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) return false;
	if( lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,96106697)) return false;
	return true;
}


// Function binds:
static int _bind_wxMessageBox(lua_State *L) {
	if (!_lg_typecheck_wxMessageBox(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in wxMessageBox function, expected prototype:\nwxMessageBox(const wxString&, const wxString&, long, wxWindow*, int, int)");
	}

	wxString message(lua_tostring(L,1),lua_objlen(L,1));
	wxString caption(lua_tostring(L,2),lua_objlen(L,2));
	long style=(long)lua_tonumber(L,3);
	wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxWindow >::check(L,4));
	int x=(int)lua_tonumber(L,5);
	int y=(int)lua_tonumber(L,6);

	int ret = wxMessageBox(message, caption, style, parent, x, y);
	lua_pushnumber(L,ret);

	return 1;
}

static int _bind_wxExit(lua_State *L) {
	if (!_lg_typecheck_wxExit(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in wxExit function, expected prototype:\nwxExit()");
	}


	wxExit();

	return 0;
}

static int _bind_wxYield(lua_State *L) {
	if (!_lg_typecheck_wxYield(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in wxYield function, expected prototype:\nwxYield()");
	}


	bool ret = wxYield();
	lua_pushboolean(L,ret?1:0);

	return 1;
}

static int _bind_wxWakeUpIdle(lua_State *L) {
	if (!_lg_typecheck_wxWakeUpIdle(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in wxWakeUpIdle function, expected prototype:\nwxWakeUpIdle()");
	}


	wxWakeUpIdle();

	return 0;
}

static int _bind_wxNewEventType(lua_State *L) {
	if (!_lg_typecheck_wxNewEventType(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in wxNewEventType function, expected prototype:\nwxNewEventType()");
	}


	int ret = wxNewEventType();
	lua_pushnumber(L,ret);

	return 1;
}

static int _bind_wxCheckDynamicCast(lua_State *L) {
	if (!_lg_typecheck_wxCheckDynamicCast(L)) {
		luna_printStack(L);
		luaL_error(L, "luna typecheck failed in wxCheckDynamicCast function, expected prototype:\nwxCheckDynamicCast(wxObject*, wxClassInfo*)");
	}

	wxObject* obj=dynamic_cast< wxObject* >(Luna< wxObject >::check(L,1));
	wxClassInfo* classInfo=dynamic_cast< wxClassInfo* >(Luna< wxClassInfo >::check(L,2));

	wxObject* ret = wxCheckDynamicCast(obj, classInfo);
	Luna< wxObject >::push(L,ret,false,"wxObject");

	return 1;
}


#ifdef __cplusplus
extern "C" {
#endif

void register_global_functions(lua_State* L) {
	lua_pushcfunction(L, _bind_wxMessageBox); lua_setfield(L,-2,"wxMessageBox");
	lua_pushcfunction(L, _bind_wxExit); lua_setfield(L,-2,"wxExit");
	lua_pushcfunction(L, _bind_wxYield); lua_setfield(L,-2,"wxYield");
	lua_pushcfunction(L, _bind_wxWakeUpIdle); lua_setfield(L,-2,"wxWakeUpIdle");
	lua_pushcfunction(L, _bind_wxNewEventType); lua_setfield(L,-2,"wxNewEventType");
	lua_pushcfunction(L, _bind_wxCheckDynamicCast); lua_setfield(L,-2,"wxCheckDynamicCast");
}

#ifdef __cplusplus
}
#endif


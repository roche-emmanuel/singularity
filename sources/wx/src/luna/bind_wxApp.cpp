#include <plug_common.h>

class luna_wrapper_wxApp {
public:
	typedef Luna< wxApp > luna_t;

	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_OnInitGui(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnRun(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnExit(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_CleanUp(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_SafeYield(lua_State *L) {
		if( lua_gettop(L) != 3) return false;
		if( lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92430048)) return false;
		if( lua_isboolean(L,3)==0) return false;
		return true;
	}

	inline static bool _lg_typecheck_SafeYieldFor(lua_State *L) {
		if( lua_gettop(L) != 3) return false;
		if( lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92430048)) return false;
		if( lua_isnumber(L,3)==0) return false;
		return true;
	}

	inline static bool _lg_typecheck_ProcessIdle(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_UsesEventLoop(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsActive(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTopWindow(lua_State *L) {
		if( lua_gettop(L) != 2) return false;
		if( lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92430048)) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTopWindow(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetExitOnFrameDelete(lua_State *L) {
		if( lua_gettop(L) != 2) return false;
		if( lua_isboolean(L,2)==0) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetExitOnFrameDelete(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetUseBestVisual(lua_State *L) {
		if( lua_gettop(L) != 3) return false;
		if( lua_isboolean(L,2)==0) return false;
		if( lua_isboolean(L,3)==0) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetUseBestVisual(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLayoutDirection(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetNativeTheme(lua_State *L) {
		if( lua_gettop(L) != 2) return false;
		if( lua_isstring(L,2)==0) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetActive(lua_State *L) {
		if( lua_gettop(L) != 3) return false;
		if( lua_isboolean(L,2)==0) return false;
		if( lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,92430048)) return false;
		return true;
	}


	// Constructor binds:

	// Function binds:
	static int _bind_OnInitGui(lua_State *L) {
		if (!_lg_typecheck_OnInitGui(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in OnInitGui function, expected prototype:\nOnInitGui()");
		}


		wxApp* self=dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call OnInitGui(...)");
		}
		bool ret = self->OnInitGui();
		lua_pushboolean(L,ret?1:0);

		return 1;
	}

	static int _bind_OnRun(lua_State *L) {
		if (!_lg_typecheck_OnRun(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in OnRun function, expected prototype:\nOnRun()");
		}


		wxApp* self=dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call OnRun(...)");
		}
		int ret = self->OnRun();
		lua_pushnumber(L,ret);

		return 1;
	}

	static int _bind_OnExit(lua_State *L) {
		if (!_lg_typecheck_OnExit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in OnExit function, expected prototype:\nOnExit()");
		}


		wxApp* self=dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call OnExit(...)");
		}
		int ret = self->OnExit();
		lua_pushnumber(L,ret);

		return 1;
	}

	static int _bind_CleanUp(lua_State *L) {
		if (!_lg_typecheck_CleanUp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in CleanUp function, expected prototype:\nCleanUp()");
		}


		wxApp* self=dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call CleanUp(...)");
		}
		self->CleanUp();

		return 0;
	}

	static int _bind_SafeYield(lua_State *L) {
		if (!_lg_typecheck_SafeYield(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SafeYield function, expected prototype:\nSafeYield(wxWindow*, bool)");
		}

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxWindow >::check(L,2));
		bool onlyIfNeeded=(bool)lua_toboolean(L,3);

		wxApp* self=dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SafeYield(...)");
		}
		bool ret = self->SafeYield(win, onlyIfNeeded);
		lua_pushboolean(L,ret?1:0);

		return 1;
	}

	static int _bind_SafeYieldFor(lua_State *L) {
		if (!_lg_typecheck_SafeYieldFor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SafeYieldFor function, expected prototype:\nSafeYieldFor(wxWindow*, long)");
		}

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxWindow >::check(L,2));
		long eventsToProcess=(long)lua_tonumber(L,3);

		wxApp* self=dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SafeYieldFor(...)");
		}
		bool ret = self->SafeYieldFor(win, eventsToProcess);
		lua_pushboolean(L,ret?1:0);

		return 1;
	}

	static int _bind_ProcessIdle(lua_State *L) {
		if (!_lg_typecheck_ProcessIdle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in ProcessIdle function, expected prototype:\nProcessIdle()");
		}


		wxApp* self=dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ProcessIdle(...)");
		}
		bool ret = self->ProcessIdle();
		lua_pushboolean(L,ret?1:0);

		return 1;
	}

	static int _bind_UsesEventLoop(lua_State *L) {
		if (!_lg_typecheck_UsesEventLoop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in UsesEventLoop function, expected prototype:\nUsesEventLoop()");
		}


		wxApp* self=dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call UsesEventLoop(...)");
		}
		bool ret = self->UsesEventLoop();
		lua_pushboolean(L,ret?1:0);

		return 1;
	}

	static int _bind_IsActive(lua_State *L) {
		if (!_lg_typecheck_IsActive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in IsActive function, expected prototype:\nIsActive()");
		}


		wxApp* self=dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IsActive(...)");
		}
		bool ret = self->IsActive();
		lua_pushboolean(L,ret?1:0);

		return 1;
	}

	static int _bind_SetTopWindow(lua_State *L) {
		if (!_lg_typecheck_SetTopWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SetTopWindow function, expected prototype:\nSetTopWindow(wxWindow*)");
		}

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxWindow >::check(L,2));

		wxApp* self=dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SetTopWindow(...)");
		}
		self->SetTopWindow(win);

		return 0;
	}

	static int _bind_GetTopWindow(lua_State *L) {
		if (!_lg_typecheck_GetTopWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in GetTopWindow function, expected prototype:\nGetTopWindow()");
		}


		wxApp* self=dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call GetTopWindow(...)");
		}
		wxWindow* ret = self->GetTopWindow();
		Luna< wxWindow >::push(L,ret,false,"wxWindow");

		return 1;
	}

	static int _bind_SetExitOnFrameDelete(lua_State *L) {
		if (!_lg_typecheck_SetExitOnFrameDelete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SetExitOnFrameDelete function, expected prototype:\nSetExitOnFrameDelete(bool)");
		}

		bool flag=(bool)lua_toboolean(L,2);

		wxApp* self=dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SetExitOnFrameDelete(...)");
		}
		self->SetExitOnFrameDelete(flag);

		return 0;
	}

	static int _bind_GetExitOnFrameDelete(lua_State *L) {
		if (!_lg_typecheck_GetExitOnFrameDelete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in GetExitOnFrameDelete function, expected prototype:\nGetExitOnFrameDelete()");
		}


		wxApp* self=dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call GetExitOnFrameDelete(...)");
		}
		bool ret = self->GetExitOnFrameDelete();
		lua_pushboolean(L,ret?1:0);

		return 1;
	}

	static int _bind_SetUseBestVisual(lua_State *L) {
		if (!_lg_typecheck_SetUseBestVisual(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SetUseBestVisual function, expected prototype:\nSetUseBestVisual(bool, bool)");
		}

		bool flag=(bool)lua_toboolean(L,2);
		bool forceTrueColour=(bool)lua_toboolean(L,3);

		wxApp* self=dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SetUseBestVisual(...)");
		}
		self->SetUseBestVisual(flag, forceTrueColour);

		return 0;
	}

	static int _bind_GetUseBestVisual(lua_State *L) {
		if (!_lg_typecheck_GetUseBestVisual(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in GetUseBestVisual function, expected prototype:\nGetUseBestVisual()");
		}


		wxApp* self=dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call GetUseBestVisual(...)");
		}
		bool ret = self->GetUseBestVisual();
		lua_pushboolean(L,ret?1:0);

		return 1;
	}

	static int _bind_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_GetLayoutDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in GetLayoutDirection function, expected prototype:\nGetLayoutDirection()");
		}


		wxApp* self=dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call GetLayoutDirection(...)");
		}
		wxLayoutDirection ret = self->GetLayoutDirection();
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'wxLayoutDirection'
		////////////////////////////////////////////////////////////////////

		return 1;
	}

	static int _bind_SetNativeTheme(lua_State *L) {
		if (!_lg_typecheck_SetNativeTheme(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SetNativeTheme function, expected prototype:\nSetNativeTheme(const wxString&)");
		}

		wxString theme(lua_tostring(L,2),lua_objlen(L,2));

		wxApp* self=dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SetNativeTheme(...)");
		}
		bool ret = self->SetNativeTheme(theme);
		lua_pushboolean(L,ret?1:0);

		return 1;
	}

	static int _bind_SetActive(lua_State *L) {
		if (!_lg_typecheck_SetActive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SetActive function, expected prototype:\nSetActive(bool, wxWindow*)");
		}

		bool isActive=(bool)lua_toboolean(L,2);
		wxWindow* lastFocus=dynamic_cast< wxWindow* >(Luna< wxWindow >::check(L,3));

		wxApp* self=dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SetActive(...)");
		}
		self->SetActive(isActive, lastFocus);

		return 0;
	}

};

wxApp* LunaTraits< wxApp >::_bind_ctor(lua_State *L) {
	return NULL; // No default constructor.
}

void LunaTraits< wxApp >::_bind_dtor(wxApp* obj) {
	delete obj;
}

const char LunaTraits< wxApp >::className[] = "wxApp";
const char LunaTraits< wxApp >::moduleName[] = "wx";
const int LunaTraits< wxApp >::uniqueIDs = {56813631,0};

luna_RegType LunaTraits< wxApp >::methods[] = {
	{"OnInitGui", &luna_wrapper_wxApp::_bind_OnInitGui},
	{"OnRun", &luna_wrapper_wxApp::_bind_OnRun},
	{"OnExit", &luna_wrapper_wxApp::_bind_OnExit},
	{"CleanUp", &luna_wrapper_wxApp::_bind_CleanUp},
	{"SafeYield", &luna_wrapper_wxApp::_bind_SafeYield},
	{"SafeYieldFor", &luna_wrapper_wxApp::_bind_SafeYieldFor},
	{"ProcessIdle", &luna_wrapper_wxApp::_bind_ProcessIdle},
	{"UsesEventLoop", &luna_wrapper_wxApp::_bind_UsesEventLoop},
	{"IsActive", &luna_wrapper_wxApp::_bind_IsActive},
	{"SetTopWindow", &luna_wrapper_wxApp::_bind_SetTopWindow},
	{"GetTopWindow", &luna_wrapper_wxApp::_bind_GetTopWindow},
	{"SetExitOnFrameDelete", &luna_wrapper_wxApp::_bind_SetExitOnFrameDelete},
	{"GetExitOnFrameDelete", &luna_wrapper_wxApp::_bind_GetExitOnFrameDelete},
	{"SetUseBestVisual", &luna_wrapper_wxApp::_bind_SetUseBestVisual},
	{"GetUseBestVisual", &luna_wrapper_wxApp::_bind_GetUseBestVisual},
	{"GetLayoutDirection", &luna_wrapper_wxApp::_bind_GetLayoutDirection},
	{"SetNativeTheme", &luna_wrapper_wxApp::_bind_SetNativeTheme},
	{"SetActive", &luna_wrapper_wxApp::_bind_SetActive},
	{0,0}
};



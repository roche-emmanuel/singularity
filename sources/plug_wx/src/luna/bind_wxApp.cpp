#include <plug_common.h>

class luna_wrapper_wxApp {
public:
	typedef Luna< wxApp > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxObject*)");
		}

		wxObject* rhs =(Luna< wxObject >::check(L,2));
		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxApp* ptr= dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxApp >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTrackable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxApp* ptr= static_cast< wxApp* >(Luna< wxTrackable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxApp >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxEventFilter(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxApp* ptr= dynamic_cast< wxApp* >(Luna< wxEventFilter >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxApp >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetDisplayMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetExitOnFrameDelete(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLayoutDirection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUseBestVisual(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTopWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsActive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SafeYield(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SafeYieldFor(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDisplayMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,44802589) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetExitOnFrameDelete(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetNativeTheme(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTopWindow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetUseBestVisual(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxApp::wxApp()
	static wxApp* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxApp::wxApp() function, expected prototype:\nwxApp::wxApp()\nClass arguments details:\n");
		}


		return new wxApp();
	}


	// Function binds:
	// wxVideoMode wxApp::GetDisplayMode() const
	static int _bind_GetDisplayMode(lua_State *L) {
		if (!_lg_typecheck_GetDisplayMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxVideoMode wxApp::GetDisplayMode() const function, expected prototype:\nwxVideoMode wxApp::GetDisplayMode() const\nClass arguments details:\n");
		}


		wxApp* self=dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxVideoMode wxApp::GetDisplayMode() const");
		}
		wxVideoMode stack_lret = self->GetDisplayMode();
		wxVideoMode* lret = new wxVideoMode(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVideoMode >::push(L,lret,true);

		return 1;
	}

	// bool wxApp::GetExitOnFrameDelete() const
	static int _bind_GetExitOnFrameDelete(lua_State *L) {
		if (!_lg_typecheck_GetExitOnFrameDelete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxApp::GetExitOnFrameDelete() const function, expected prototype:\nbool wxApp::GetExitOnFrameDelete() const\nClass arguments details:\n");
		}


		wxApp* self=dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxApp::GetExitOnFrameDelete() const");
		}
		bool lret = self->GetExitOnFrameDelete();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxLayoutDirection wxApp::GetLayoutDirection() const
	static int _bind_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_GetLayoutDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxApp::GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxApp::GetLayoutDirection() const\nClass arguments details:\n");
		}


		wxApp* self=dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxApp::GetLayoutDirection() const");
		}
		wxLayoutDirection lret = self->GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxApp::GetUseBestVisual() const
	static int _bind_GetUseBestVisual(lua_State *L) {
		if (!_lg_typecheck_GetUseBestVisual(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxApp::GetUseBestVisual() const function, expected prototype:\nbool wxApp::GetUseBestVisual() const\nClass arguments details:\n");
		}


		wxApp* self=dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxApp::GetUseBestVisual() const");
		}
		bool lret = self->GetUseBestVisual();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxWindow * wxApp::GetTopWindow() const
	static int _bind_GetTopWindow(lua_State *L) {
		if (!_lg_typecheck_GetTopWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxApp::GetTopWindow() const function, expected prototype:\nwxWindow * wxApp::GetTopWindow() const\nClass arguments details:\n");
		}


		wxApp* self=dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxApp::GetTopWindow() const");
		}
		wxWindow * lret = self->GetTopWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// bool wxApp::IsActive() const
	static int _bind_IsActive(lua_State *L) {
		if (!_lg_typecheck_IsActive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxApp::IsActive() const function, expected prototype:\nbool wxApp::IsActive() const\nClass arguments details:\n");
		}


		wxApp* self=dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxApp::IsActive() const");
		}
		bool lret = self->IsActive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxApp::SafeYield(wxWindow * win, bool onlyIfNeeded)
	static int _bind_SafeYield(lua_State *L) {
		if (!_lg_typecheck_SafeYield(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxApp::SafeYield(wxWindow * win, bool onlyIfNeeded) function, expected prototype:\nbool wxApp::SafeYield(wxWindow * win, bool onlyIfNeeded)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		bool onlyIfNeeded=(bool)(lua_toboolean(L,3)==1);

		wxApp* self=dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxApp::SafeYield(wxWindow *, bool)");
		}
		bool lret = self->SafeYield(win, onlyIfNeeded);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxApp::SafeYieldFor(wxWindow * win, long eventsToProcess)
	static int _bind_SafeYieldFor(lua_State *L) {
		if (!_lg_typecheck_SafeYieldFor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxApp::SafeYieldFor(wxWindow * win, long eventsToProcess) function, expected prototype:\nbool wxApp::SafeYieldFor(wxWindow * win, long eventsToProcess)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		long eventsToProcess=(long)lua_tointeger(L,3);

		wxApp* self=dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxApp::SafeYieldFor(wxWindow *, long)");
		}
		bool lret = self->SafeYieldFor(win, eventsToProcess);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxApp::SetDisplayMode(const wxVideoMode & info)
	static int _bind_SetDisplayMode(lua_State *L) {
		if (!_lg_typecheck_SetDisplayMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxApp::SetDisplayMode(const wxVideoMode & info) function, expected prototype:\nbool wxApp::SetDisplayMode(const wxVideoMode & info)\nClass arguments details:\narg 1 ID = 44802589\n");
		}

		const wxVideoMode* info_ptr=(Luna< wxVideoMode >::check(L,2));
		if( !info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg info in wxApp::SetDisplayMode function");
		}
		const wxVideoMode & info=*info_ptr;

		wxApp* self=dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxApp::SetDisplayMode(const wxVideoMode &)");
		}
		bool lret = self->SetDisplayMode(info);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxApp::SetExitOnFrameDelete(bool flag)
	static int _bind_SetExitOnFrameDelete(lua_State *L) {
		if (!_lg_typecheck_SetExitOnFrameDelete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxApp::SetExitOnFrameDelete(bool flag) function, expected prototype:\nvoid wxApp::SetExitOnFrameDelete(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		wxApp* self=dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxApp::SetExitOnFrameDelete(bool)");
		}
		self->SetExitOnFrameDelete(flag);

		return 0;
	}

	// bool wxApp::SetNativeTheme(const wxString & theme)
	static int _bind_SetNativeTheme(lua_State *L) {
		if (!_lg_typecheck_SetNativeTheme(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxApp::SetNativeTheme(const wxString & theme) function, expected prototype:\nbool wxApp::SetNativeTheme(const wxString & theme)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString theme(lua_tostring(L,2),lua_objlen(L,2));

		wxApp* self=dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxApp::SetNativeTheme(const wxString &)");
		}
		bool lret = self->SetNativeTheme(theme);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxApp::SetTopWindow(wxWindow * window)
	static int _bind_SetTopWindow(lua_State *L) {
		if (!_lg_typecheck_SetTopWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxApp::SetTopWindow(wxWindow * window) function, expected prototype:\nvoid wxApp::SetTopWindow(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxApp* self=dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxApp::SetTopWindow(wxWindow *)");
		}
		self->SetTopWindow(window);

		return 0;
	}

	// void wxApp::SetUseBestVisual(bool flag, bool forceTrueColour = false)
	static int _bind_SetUseBestVisual(lua_State *L) {
		if (!_lg_typecheck_SetUseBestVisual(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxApp::SetUseBestVisual(bool flag, bool forceTrueColour = false) function, expected prototype:\nvoid wxApp::SetUseBestVisual(bool flag, bool forceTrueColour = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool flag=(bool)(lua_toboolean(L,2)==1);
		bool forceTrueColour=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		wxApp* self=dynamic_cast< wxApp* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxApp::SetUseBestVisual(bool, bool)");
		}
		self->SetUseBestVisual(flag, forceTrueColour);

		return 0;
	}


	// Operator binds:

};

wxApp* LunaTraits< wxApp >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxApp::_bind_ctor(L);
}

void LunaTraits< wxApp >::_bind_dtor(wxApp* obj) {
	delete obj;
}

const char LunaTraits< wxApp >::className[] = "wxApp";
const char LunaTraits< wxApp >::fullName[] = "wxApp";
const char LunaTraits< wxApp >::moduleName[] = "wx";
const char* LunaTraits< wxApp >::parents[] = {"wx.wxAppConsole", 0};
const int LunaTraits< wxApp >::hash = 13539963;
const int LunaTraits< wxApp >::uniqueIDs[] = {56813631, 53506535, 81056638,0};

luna_RegType LunaTraits< wxApp >::methods[] = {
	{"GetDisplayMode", &luna_wrapper_wxApp::_bind_GetDisplayMode},
	{"GetExitOnFrameDelete", &luna_wrapper_wxApp::_bind_GetExitOnFrameDelete},
	{"GetLayoutDirection", &luna_wrapper_wxApp::_bind_GetLayoutDirection},
	{"GetUseBestVisual", &luna_wrapper_wxApp::_bind_GetUseBestVisual},
	{"GetTopWindow", &luna_wrapper_wxApp::_bind_GetTopWindow},
	{"IsActive", &luna_wrapper_wxApp::_bind_IsActive},
	{"SafeYield", &luna_wrapper_wxApp::_bind_SafeYield},
	{"SafeYieldFor", &luna_wrapper_wxApp::_bind_SafeYieldFor},
	{"SetDisplayMode", &luna_wrapper_wxApp::_bind_SetDisplayMode},
	{"SetExitOnFrameDelete", &luna_wrapper_wxApp::_bind_SetExitOnFrameDelete},
	{"SetNativeTheme", &luna_wrapper_wxApp::_bind_SetNativeTheme},
	{"SetTopWindow", &luna_wrapper_wxApp::_bind_SetTopWindow},
	{"SetUseBestVisual", &luna_wrapper_wxApp::_bind_SetUseBestVisual},
	{"__eq", &luna_wrapper_wxApp::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxApp >::converters[] = {
	{"wxObject", &luna_wrapper_wxApp::_cast_from_wxObject},
	{"wxTrackable", &luna_wrapper_wxApp::_cast_from_wxTrackable},
	{"wxEventFilter", &luna_wrapper_wxApp::_cast_from_wxEventFilter},
	{0,0}
};

luna_RegEnumType LunaTraits< wxApp >::enumValues[] = {
	{0,0}
};



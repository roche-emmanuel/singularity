#include <plug_common.h>

class luna_wrapper_wxSplashScreen {
public:
	typedef Luna< wxSplashScreen > luna_t;

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
		wxSplashScreen* ptr= dynamic_cast< wxSplashScreen* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSplashScreen >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>8 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,25723480) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,20268751) ) return false;
		if( luatop>7 && (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetSplashStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSplashWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTimeout(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnCloseWindow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxSplashScreen::wxSplashScreen(const wxBitmap & bitmap, long splashStyle, int milliseconds, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxBORDER_SIMPLE | wxFRAME_NO_TASKBAR | wxSTAY_ON_TOP)
	static wxSplashScreen* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSplashScreen::wxSplashScreen(const wxBitmap & bitmap, long splashStyle, int milliseconds, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxBORDER_SIMPLE | wxFRAME_NO_TASKBAR | wxSTAY_ON_TOP) function, expected prototype:\nwxSplashScreen::wxSplashScreen(const wxBitmap & bitmap, long splashStyle, int milliseconds, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxBORDER_SIMPLE | wxFRAME_NO_TASKBAR | wxSTAY_ON_TOP)\nClass arguments details:\narg 1 ID = 56813631\narg 4 ID = 56813631\narg 6 ID = 25723480\narg 7 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		const wxBitmap* bitmap_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,1));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxSplashScreen::wxSplashScreen function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		long splashStyle=(long)lua_tointeger(L,2);
		int milliseconds=(int)lua_tointeger(L,3);
		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,4));
		int id=(int)lua_tointeger(L,5);
		const wxPoint* pos_ptr=luatop>5 ? (Luna< wxPoint >::check(L,6)) : NULL;
		if( luatop>5 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxSplashScreen::wxSplashScreen function");
		}
		const wxPoint & pos=luatop>5 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>6 ? (Luna< wxSize >::check(L,7)) : NULL;
		if( luatop>6 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSplashScreen::wxSplashScreen function");
		}
		const wxSize & size=luatop>6 ? *size_ptr : wxDefaultSize;
		long style=luatop>7 ? (long)lua_tointeger(L,8) : wxBORDER_SIMPLE | wxFRAME_NO_TASKBAR | wxSTAY_ON_TOP;

		return new wxSplashScreen(bitmap, splashStyle, milliseconds, parent, id, pos, size, style);
	}


	// Function binds:
	// long wxSplashScreen::GetSplashStyle() const
	static int _bind_GetSplashStyle(lua_State *L) {
		if (!_lg_typecheck_GetSplashStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxSplashScreen::GetSplashStyle() const function, expected prototype:\nlong wxSplashScreen::GetSplashStyle() const\nClass arguments details:\n");
		}


		wxSplashScreen* self=dynamic_cast< wxSplashScreen* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxSplashScreen::GetSplashStyle() const");
		}
		long lret = self->GetSplashStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSplashScreenWindow * wxSplashScreen::GetSplashWindow() const
	static int _bind_GetSplashWindow(lua_State *L) {
		if (!_lg_typecheck_GetSplashWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSplashScreenWindow * wxSplashScreen::GetSplashWindow() const function, expected prototype:\nwxSplashScreenWindow * wxSplashScreen::GetSplashWindow() const\nClass arguments details:\n");
		}


		wxSplashScreen* self=dynamic_cast< wxSplashScreen* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSplashScreenWindow * wxSplashScreen::GetSplashWindow() const");
		}
		wxSplashScreenWindow * lret = self->GetSplashWindow();
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'wxSplashScreenWindow *'
		////////////////////////////////////////////////////////////////////

		return 1;
	}

	// int wxSplashScreen::GetTimeout() const
	static int _bind_GetTimeout(lua_State *L) {
		if (!_lg_typecheck_GetTimeout(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSplashScreen::GetTimeout() const function, expected prototype:\nint wxSplashScreen::GetTimeout() const\nClass arguments details:\n");
		}


		wxSplashScreen* self=dynamic_cast< wxSplashScreen* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSplashScreen::GetTimeout() const");
		}
		int lret = self->GetTimeout();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxSplashScreen::OnCloseWindow(wxCloseEvent & event)
	static int _bind_OnCloseWindow(lua_State *L) {
		if (!_lg_typecheck_OnCloseWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSplashScreen::OnCloseWindow(wxCloseEvent & event) function, expected prototype:\nvoid wxSplashScreen::OnCloseWindow(wxCloseEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxCloseEvent* event_ptr=dynamic_cast< wxCloseEvent* >(Luna< wxObject >::check(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxSplashScreen::OnCloseWindow function");
		}
		wxCloseEvent & event=*event_ptr;

		wxSplashScreen* self=dynamic_cast< wxSplashScreen* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSplashScreen::OnCloseWindow(wxCloseEvent &)");
		}
		self->OnCloseWindow(event);

		return 0;
	}


	// Operator binds:

};

wxSplashScreen* LunaTraits< wxSplashScreen >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSplashScreen::_bind_ctor(L);
}

void LunaTraits< wxSplashScreen >::_bind_dtor(wxSplashScreen* obj) {
	delete obj;
}

const char LunaTraits< wxSplashScreen >::className[] = "wxSplashScreen";
const char LunaTraits< wxSplashScreen >::fullName[] = "wxSplashScreen";
const char LunaTraits< wxSplashScreen >::moduleName[] = "wx";
const char* LunaTraits< wxSplashScreen >::parents[] = {"wx.wxFrame", 0};
const int LunaTraits< wxSplashScreen >::hash = 10930958;
const int LunaTraits< wxSplashScreen >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxSplashScreen >::methods[] = {
	{"GetSplashStyle", &luna_wrapper_wxSplashScreen::_bind_GetSplashStyle},
	{"GetSplashWindow", &luna_wrapper_wxSplashScreen::_bind_GetSplashWindow},
	{"GetTimeout", &luna_wrapper_wxSplashScreen::_bind_GetTimeout},
	{"OnCloseWindow", &luna_wrapper_wxSplashScreen::_bind_OnCloseWindow},
	{"__eq", &luna_wrapper_wxSplashScreen::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxSplashScreen >::converters[] = {
	{"wxObject", &luna_wrapper_wxSplashScreen::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSplashScreen >::enumValues[] = {
	{0,0}
};



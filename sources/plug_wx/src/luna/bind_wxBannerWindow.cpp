#include <plug_common.h>

class luna_wrapper_wxBannerWindow {
public:
	typedef Luna< wxBannerWindow > luna_t;

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
		wxBannerWindow* ptr= dynamic_cast< wxBannerWindow* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxBannerWindow >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTrackable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxBannerWindow* ptr= static_cast< wxBannerWindow* >(Luna< wxTrackable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxBannerWindow >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>7 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>4 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,5))) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>8 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBitmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetText(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetGradient(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxBannerWindow::wxBannerWindow()
	static wxBannerWindow* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBannerWindow::wxBannerWindow() function, expected prototype:\nwxBannerWindow::wxBannerWindow()\nClass arguments details:\n");
		}


		return new wxBannerWindow();
	}

	// wxBannerWindow::wxBannerWindow(wxWindow * parent, wxDirection dir = wxLEFT)
	static wxBannerWindow* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBannerWindow::wxBannerWindow(wxWindow * parent, wxDirection dir = wxLEFT) function, expected prototype:\nwxBannerWindow::wxBannerWindow(wxWindow * parent, wxDirection dir = wxLEFT)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		wxDirection dir=luatop>1 ? (wxDirection)lua_tointeger(L,2) : wxLEFT;

		return new wxBannerWindow(parent, dir);
	}

	// wxBannerWindow::wxBannerWindow(wxWindow * parent, int winid, wxDirection dir = wxLEFT, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxBannerWindowNameStr)
	static wxBannerWindow* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBannerWindow::wxBannerWindow(wxWindow * parent, int winid, wxDirection dir = wxLEFT, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxBannerWindowNameStr) function, expected prototype:\nwxBannerWindow::wxBannerWindow(wxWindow * parent, int winid, wxDirection dir = wxLEFT, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxBannerWindowNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int winid=(int)lua_tointeger(L,2);
		wxDirection dir=luatop>2 ? (wxDirection)lua_tointeger(L,3) : wxLEFT;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxBannerWindow::wxBannerWindow function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxBannerWindow::wxBannerWindow function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : 0;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wxBannerWindow(parent, winid, dir, pos, size, style, name);
	}

	// Overload binder for wxBannerWindow::wxBannerWindow
	static wxBannerWindow* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function wxBannerWindow, cannot match any of the overloads for function wxBannerWindow:\n  wxBannerWindow()\n  wxBannerWindow(wxWindow *, wxDirection)\n  wxBannerWindow(wxWindow *, int, wxDirection, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxBannerWindow::Create(wxWindow * parent, int winid, wxDirection dir = wxLEFT, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxBannerWindowNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxBannerWindow::Create(wxWindow * parent, int winid, wxDirection dir = wxLEFT, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxBannerWindowNameStr) function, expected prototype:\nbool wxBannerWindow::Create(wxWindow * parent, int winid, wxDirection dir = wxLEFT, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxBannerWindowNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int winid=(int)lua_tointeger(L,3);
		wxDirection dir=luatop>3 ? (wxDirection)lua_tointeger(L,4) : wxLEFT;
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxBannerWindow::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxBannerWindow::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : 0;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		wxBannerWindow* self=dynamic_cast< wxBannerWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxBannerWindow::Create(wxWindow *, int, wxDirection, const wxPoint &, const wxSize &, long, const wxString &)");
		}
		bool lret = self->Create(parent, winid, dir, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxBannerWindow::SetBitmap(const wxBitmap & bmp)
	static int _bind_SetBitmap(lua_State *L) {
		if (!_lg_typecheck_SetBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxBannerWindow::SetBitmap(const wxBitmap & bmp) function, expected prototype:\nvoid wxBannerWindow::SetBitmap(const wxBitmap & bmp)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBitmap* bmp_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !bmp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmp in wxBannerWindow::SetBitmap function");
		}
		const wxBitmap & bmp=*bmp_ptr;

		wxBannerWindow* self=dynamic_cast< wxBannerWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxBannerWindow::SetBitmap(const wxBitmap &)");
		}
		self->SetBitmap(bmp);

		return 0;
	}

	// void wxBannerWindow::SetText(const wxString & title, const wxString & message)
	static int _bind_SetText(lua_State *L) {
		if (!_lg_typecheck_SetText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxBannerWindow::SetText(const wxString & title, const wxString & message) function, expected prototype:\nvoid wxBannerWindow::SetText(const wxString & title, const wxString & message)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		wxString title(lua_tostring(L,2),lua_objlen(L,2));
		wxString message(lua_tostring(L,3),lua_objlen(L,3));

		wxBannerWindow* self=dynamic_cast< wxBannerWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxBannerWindow::SetText(const wxString &, const wxString &)");
		}
		self->SetText(title, message);

		return 0;
	}

	// void wxBannerWindow::SetGradient(const wxColour & start, const wxColour & end)
	static int _bind_SetGradient(lua_State *L) {
		if (!_lg_typecheck_SetGradient(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxBannerWindow::SetGradient(const wxColour & start, const wxColour & end) function, expected prototype:\nvoid wxBannerWindow::SetGradient(const wxColour & start, const wxColour & end)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		const wxColour* start_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !start_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg start in wxBannerWindow::SetGradient function");
		}
		const wxColour & start=*start_ptr;
		const wxColour* end_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,3));
		if( !end_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg end in wxBannerWindow::SetGradient function");
		}
		const wxColour & end=*end_ptr;

		wxBannerWindow* self=dynamic_cast< wxBannerWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxBannerWindow::SetGradient(const wxColour &, const wxColour &)");
		}
		self->SetGradient(start, end);

		return 0;
	}


	// Operator binds:

};

wxBannerWindow* LunaTraits< wxBannerWindow >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxBannerWindow::_bind_ctor(L);
}

void LunaTraits< wxBannerWindow >::_bind_dtor(wxBannerWindow* obj) {
	delete obj;
}

const char LunaTraits< wxBannerWindow >::className[] = "wxBannerWindow";
const char LunaTraits< wxBannerWindow >::fullName[] = "wxBannerWindow";
const char LunaTraits< wxBannerWindow >::moduleName[] = "wx";
const char* LunaTraits< wxBannerWindow >::parents[] = {"wx.wxWindow", 0};
const int LunaTraits< wxBannerWindow >::hash = 26960334;
const int LunaTraits< wxBannerWindow >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxBannerWindow >::methods[] = {
	{"Create", &luna_wrapper_wxBannerWindow::_bind_Create},
	{"SetBitmap", &luna_wrapper_wxBannerWindow::_bind_SetBitmap},
	{"SetText", &luna_wrapper_wxBannerWindow::_bind_SetText},
	{"SetGradient", &luna_wrapper_wxBannerWindow::_bind_SetGradient},
	{"__eq", &luna_wrapper_wxBannerWindow::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxBannerWindow >::converters[] = {
	{"wxObject", &luna_wrapper_wxBannerWindow::_cast_from_wxObject},
	{"wxTrackable", &luna_wrapper_wxBannerWindow::_cast_from_wxTrackable},
	{0,0}
};

luna_RegEnumType LunaTraits< wxBannerWindow >::enumValues[] = {
	{0,0}
};



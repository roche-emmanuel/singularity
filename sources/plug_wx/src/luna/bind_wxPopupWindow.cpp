#include <plug_common.h>

#include <luna/wrappers/wrapper_wxPopupWindow.h>

class luna_wrapper_wxPopupWindow {
public:
	typedef Luna< wxPopupWindow > luna_t;

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
		wxPopupWindow* ptr= dynamic_cast< wxPopupWindow* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPopupWindow >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Position(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxPopupWindow::wxPopupWindow(wxWindow * parent, int flags = ::wxBORDER_NONE)
	static wxPopupWindow* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPopupWindow::wxPopupWindow(wxWindow * parent, int flags = ::wxBORDER_NONE) function, expected prototype:\nwxPopupWindow::wxPopupWindow(wxWindow * parent, int flags = ::wxBORDER_NONE)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int flags=luatop>1 ? (int)lua_tointeger(L,2) : ::wxBORDER_NONE;

		return new wxPopupWindow(parent, flags);
	}

	// wxPopupWindow::wxPopupWindow(lua_Table * data, wxWindow * parent, int flags = ::wxBORDER_NONE)
	static wxPopupWindow* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPopupWindow::wxPopupWindow(lua_Table * data, wxWindow * parent, int flags = ::wxBORDER_NONE) function, expected prototype:\nwxPopupWindow::wxPopupWindow(lua_Table * data, wxWindow * parent, int flags = ::wxBORDER_NONE)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : ::wxBORDER_NONE;

		return new wrapper_wxPopupWindow(L,NULL, parent, flags);
	}

	// Overload binder for wxPopupWindow::wxPopupWindow
	static wxPopupWindow* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxPopupWindow, cannot match any of the overloads for function wxPopupWindow:\n  wxPopupWindow(wxWindow *, int)\n  wxPopupWindow(lua_Table *, wxWindow *, int)\n");
		return NULL;
	}


	// Function binds:
	// bool wxPopupWindow::Create(wxWindow * parent, int flags = ::wxBORDER_NONE)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPopupWindow::Create(wxWindow * parent, int flags = ::wxBORDER_NONE) function, expected prototype:\nbool wxPopupWindow::Create(wxWindow * parent, int flags = ::wxBORDER_NONE)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : ::wxBORDER_NONE;

		wxPopupWindow* self=dynamic_cast< wxPopupWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPopupWindow::Create(wxWindow *, int)");
		}
		bool lret = self->Create(parent, flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPopupWindow::Position(const wxPoint & ptOrigin, const wxSize & sizePopup)
	static int _bind_Position(lua_State *L) {
		if (!_lg_typecheck_Position(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPopupWindow::Position(const wxPoint & ptOrigin, const wxSize & sizePopup) function, expected prototype:\nvoid wxPopupWindow::Position(const wxPoint & ptOrigin, const wxSize & sizePopup)\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 20268751\n");
		}

		const wxPoint* ptOrigin_ptr=(Luna< wxPoint >::check(L,2));
		if( !ptOrigin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ptOrigin in wxPopupWindow::Position function");
		}
		const wxPoint & ptOrigin=*ptOrigin_ptr;
		const wxSize* sizePopup_ptr=(Luna< wxSize >::check(L,3));
		if( !sizePopup_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sizePopup in wxPopupWindow::Position function");
		}
		const wxSize & sizePopup=*sizePopup_ptr;

		wxPopupWindow* self=dynamic_cast< wxPopupWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPopupWindow::Position(const wxPoint &, const wxSize &)");
		}
		self->Position(ptOrigin, sizePopup);

		return 0;
	}


	// Operator binds:

};

wxPopupWindow* LunaTraits< wxPopupWindow >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPopupWindow::_bind_ctor(L);
}

void LunaTraits< wxPopupWindow >::_bind_dtor(wxPopupWindow* obj) {
	delete obj;
}

const char LunaTraits< wxPopupWindow >::className[] = "wxPopupWindow";
const char LunaTraits< wxPopupWindow >::fullName[] = "wxPopupWindow";
const char LunaTraits< wxPopupWindow >::moduleName[] = "wx";
const char* LunaTraits< wxPopupWindow >::parents[] = {"wx.wxNonOwnedWindow", 0};
const int LunaTraits< wxPopupWindow >::hash = 99676744;
const int LunaTraits< wxPopupWindow >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxPopupWindow >::methods[] = {
	{"Create", &luna_wrapper_wxPopupWindow::_bind_Create},
	{"Position", &luna_wrapper_wxPopupWindow::_bind_Position},
	{"__eq", &luna_wrapper_wxPopupWindow::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxPopupWindow >::converters[] = {
	{"wxObject", &luna_wrapper_wxPopupWindow::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPopupWindow >::enumValues[] = {
	{0,0}
};



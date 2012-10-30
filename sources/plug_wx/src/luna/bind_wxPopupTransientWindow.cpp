#include <plug_common.h>

class luna_wrapper_wxPopupTransientWindow {
public:
	typedef Luna< wxPopupTransientWindow > luna_t;

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
		wxPopupTransientWindow* ptr= dynamic_cast< wxPopupTransientWindow* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPopupTransientWindow >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTrackable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxPopupTransientWindow* ptr= static_cast< wxPopupTransientWindow* >(Luna< wxTrackable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPopupTransientWindow >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Popup(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Dismiss(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ProcessLeftDown(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxPopupTransientWindow::wxPopupTransientWindow(wxWindow * parent, int flags = wxBORDER_NONE)
	static wxPopupTransientWindow* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPopupTransientWindow::wxPopupTransientWindow(wxWindow * parent, int flags = wxBORDER_NONE) function, expected prototype:\nwxPopupTransientWindow::wxPopupTransientWindow(wxWindow * parent, int flags = wxBORDER_NONE)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int flags=luatop>1 ? (int)lua_tointeger(L,2) : wxBORDER_NONE;

		return new wxPopupTransientWindow(parent, flags);
	}


	// Function binds:
	// void wxPopupTransientWindow::Popup(wxWindow * focus = NULL)
	static int _bind_Popup(lua_State *L) {
		if (!_lg_typecheck_Popup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPopupTransientWindow::Popup(wxWindow * focus = NULL) function, expected prototype:\nvoid wxPopupTransientWindow::Popup(wxWindow * focus = NULL)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* focus=luatop>1 ? dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) : (wxWindow*)NULL;

		wxPopupTransientWindow* self=dynamic_cast< wxPopupTransientWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPopupTransientWindow::Popup(wxWindow *)");
		}
		self->Popup(focus);

		return 0;
	}

	// void wxPopupTransientWindow::Dismiss()
	static int _bind_Dismiss(lua_State *L) {
		if (!_lg_typecheck_Dismiss(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPopupTransientWindow::Dismiss() function, expected prototype:\nvoid wxPopupTransientWindow::Dismiss()\nClass arguments details:\n");
		}


		wxPopupTransientWindow* self=dynamic_cast< wxPopupTransientWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPopupTransientWindow::Dismiss()");
		}
		self->Dismiss();

		return 0;
	}

	// bool wxPopupTransientWindow::ProcessLeftDown(wxMouseEvent & event)
	static int _bind_ProcessLeftDown(lua_State *L) {
		if (!_lg_typecheck_ProcessLeftDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPopupTransientWindow::ProcessLeftDown(wxMouseEvent & event) function, expected prototype:\nbool wxPopupTransientWindow::ProcessLeftDown(wxMouseEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxMouseEvent* event_ptr=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxPopupTransientWindow::ProcessLeftDown function");
		}
		wxMouseEvent & event=*event_ptr;

		wxPopupTransientWindow* self=dynamic_cast< wxPopupTransientWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPopupTransientWindow::ProcessLeftDown(wxMouseEvent &)");
		}
		bool lret = self->ProcessLeftDown(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxPopupTransientWindow* LunaTraits< wxPopupTransientWindow >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPopupTransientWindow::_bind_ctor(L);
}

void LunaTraits< wxPopupTransientWindow >::_bind_dtor(wxPopupTransientWindow* obj) {
	delete obj;
}

const char LunaTraits< wxPopupTransientWindow >::className[] = "wxPopupTransientWindow";
const char LunaTraits< wxPopupTransientWindow >::fullName[] = "wxPopupTransientWindow";
const char LunaTraits< wxPopupTransientWindow >::moduleName[] = "wx";
const char* LunaTraits< wxPopupTransientWindow >::parents[] = {"wx.wxPopupWindow", 0};
const int LunaTraits< wxPopupTransientWindow >::hash = 96416413;
const int LunaTraits< wxPopupTransientWindow >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxPopupTransientWindow >::methods[] = {
	{"Popup", &luna_wrapper_wxPopupTransientWindow::_bind_Popup},
	{"Dismiss", &luna_wrapper_wxPopupTransientWindow::_bind_Dismiss},
	{"ProcessLeftDown", &luna_wrapper_wxPopupTransientWindow::_bind_ProcessLeftDown},
	{"__eq", &luna_wrapper_wxPopupTransientWindow::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxPopupTransientWindow >::converters[] = {
	{"wxObject", &luna_wrapper_wxPopupTransientWindow::_cast_from_wxObject},
	{"wxTrackable", &luna_wrapper_wxPopupTransientWindow::_cast_from_wxTrackable},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPopupTransientWindow >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

class luna_wrapper_wxContextHelpButton {
public:
	typedef Luna< wxContextHelpButton > luna_t;

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
		wxContextHelpButton* ptr= dynamic_cast< wxContextHelpButton* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxContextHelpButton >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTrackable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxContextHelpButton* ptr= static_cast< wxContextHelpButton* >(Luna< wxTrackable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxContextHelpButton >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxContextHelpButton::wxContextHelpButton(wxWindow * parent, int id = wxID_CONTEXT_HELP, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxBU_AUTODRAW)
	static wxContextHelpButton* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxContextHelpButton::wxContextHelpButton(wxWindow * parent, int id = wxID_CONTEXT_HELP, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxBU_AUTODRAW) function, expected prototype:\nwxContextHelpButton::wxContextHelpButton(wxWindow * parent, int id = wxID_CONTEXT_HELP, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxBU_AUTODRAW)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=luatop>1 ? (int)lua_tointeger(L,2) : wxID_CONTEXT_HELP;
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxContextHelpButton::wxContextHelpButton function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxContextHelpButton::wxContextHelpButton function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : wxDefaultSize;
		long style=luatop>4 ? (long)lua_tointeger(L,5) : wxBU_AUTODRAW;

		return new wxContextHelpButton(parent, id, pos, size, style);
	}


	// Function binds:

	// Operator binds:

};

wxContextHelpButton* LunaTraits< wxContextHelpButton >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxContextHelpButton::_bind_ctor(L);
}

void LunaTraits< wxContextHelpButton >::_bind_dtor(wxContextHelpButton* obj) {
	delete obj;
}

const char LunaTraits< wxContextHelpButton >::className[] = "wxContextHelpButton";
const char LunaTraits< wxContextHelpButton >::fullName[] = "wxContextHelpButton";
const char LunaTraits< wxContextHelpButton >::moduleName[] = "wx";
const char* LunaTraits< wxContextHelpButton >::parents[] = {"wx.wxBitmapButton", 0};
const int LunaTraits< wxContextHelpButton >::hash = 80544620;
const int LunaTraits< wxContextHelpButton >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxContextHelpButton >::methods[] = {
	{"__eq", &luna_wrapper_wxContextHelpButton::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxContextHelpButton >::converters[] = {
	{"wxObject", &luna_wrapper_wxContextHelpButton::_cast_from_wxObject},
	{"wxTrackable", &luna_wrapper_wxContextHelpButton::_cast_from_wxTrackable},
	{0,0}
};

luna_RegEnumType LunaTraits< wxContextHelpButton >::enumValues[] = {
	{0,0}
};



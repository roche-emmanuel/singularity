#include <plug_common.h>

class luna_wrapper_wxHtmlColourCell {
public:
	typedef Luna< wxHtmlColourCell > luna_t;

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
		wxHtmlColourCell* ptr= dynamic_cast< wxHtmlColourCell* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHtmlColourCell >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxHtmlColourCell::wxHtmlColourCell(const wxColour & clr, int flags = wxHTML_CLR_FOREGROUND)
	static wxHtmlColourCell* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHtmlColourCell::wxHtmlColourCell(const wxColour & clr, int flags = wxHTML_CLR_FOREGROUND) function, expected prototype:\nwxHtmlColourCell::wxHtmlColourCell(const wxColour & clr, int flags = wxHTML_CLR_FOREGROUND)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		const wxColour* clr_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if( !clr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clr in wxHtmlColourCell::wxHtmlColourCell function");
		}
		const wxColour & clr=*clr_ptr;
		int flags=luatop>1 ? (int)lua_tointeger(L,2) : wxHTML_CLR_FOREGROUND;

		return new wxHtmlColourCell(clr, flags);
	}


	// Function binds:

	// Operator binds:

};

wxHtmlColourCell* LunaTraits< wxHtmlColourCell >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHtmlColourCell::_bind_ctor(L);
}

void LunaTraits< wxHtmlColourCell >::_bind_dtor(wxHtmlColourCell* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlColourCell >::className[] = "wxHtmlColourCell";
const char LunaTraits< wxHtmlColourCell >::fullName[] = "wxHtmlColourCell";
const char LunaTraits< wxHtmlColourCell >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlColourCell >::parents[] = {"wx.wxHtmlCell", 0};
const int LunaTraits< wxHtmlColourCell >::hash = 39562076;
const int LunaTraits< wxHtmlColourCell >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxHtmlColourCell >::methods[] = {
	{"__eq", &luna_wrapper_wxHtmlColourCell::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlColourCell >::converters[] = {
	{"wxObject", &luna_wrapper_wxHtmlColourCell::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlColourCell >::enumValues[] = {
	{0,0}
};



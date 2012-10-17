#include <plug_common.h>

class luna_wrapper_wxClientDC {
public:
	typedef Luna< wxClientDC > luna_t;

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
		wxClientDC* ptr= dynamic_cast< wxClientDC* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxClientDC >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxClientDC::wxClientDC(wxWindow * window)
	static wxClientDC* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClientDC::wxClientDC(wxWindow * window) function, expected prototype:\nwxClientDC::wxClientDC(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));

		return new wxClientDC(window);
	}


	// Function binds:

	// Operator binds:

};

wxClientDC* LunaTraits< wxClientDC >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxClientDC::_bind_ctor(L);
}

void LunaTraits< wxClientDC >::_bind_dtor(wxClientDC* obj) {
	delete obj;
}

const char LunaTraits< wxClientDC >::className[] = "wxClientDC";
const char LunaTraits< wxClientDC >::fullName[] = "wxClientDC";
const char LunaTraits< wxClientDC >::moduleName[] = "wx";
const char* LunaTraits< wxClientDC >::parents[] = {"wx.wxWindowDC", 0};
const int LunaTraits< wxClientDC >::hash = 93288694;
const int LunaTraits< wxClientDC >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxClientDC >::methods[] = {
	{"__eq", &luna_wrapper_wxClientDC::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxClientDC >::converters[] = {
	{"wxObject", &luna_wrapper_wxClientDC::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxClientDC >::enumValues[] = {
	{0,0}
};



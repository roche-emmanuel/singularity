#include <plug_common.h>

class luna_wrapper_wxPaintDC {
public:
	typedef Luna< wxPaintDC > luna_t;

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
		wxPaintDC* ptr= dynamic_cast< wxPaintDC* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPaintDC >::push(L,ptr,false);
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
	// wxPaintDC::wxPaintDC(wxWindow * window)
	static wxPaintDC* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPaintDC::wxPaintDC(wxWindow * window) function, expected prototype:\nwxPaintDC::wxPaintDC(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));

		return new wxPaintDC(window);
	}


	// Function binds:

	// Operator binds:

};

wxPaintDC* LunaTraits< wxPaintDC >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPaintDC::_bind_ctor(L);
}

void LunaTraits< wxPaintDC >::_bind_dtor(wxPaintDC* obj) {
	delete obj;
}

const char LunaTraits< wxPaintDC >::className[] = "wxPaintDC";
const char LunaTraits< wxPaintDC >::fullName[] = "wxPaintDC";
const char LunaTraits< wxPaintDC >::moduleName[] = "wx";
const char* LunaTraits< wxPaintDC >::parents[] = {"wx.wxWindowDC", 0};
const int LunaTraits< wxPaintDC >::hash = 19456371;
const int LunaTraits< wxPaintDC >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxPaintDC >::methods[] = {
	{"__eq", &luna_wrapper_wxPaintDC::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxPaintDC >::converters[] = {
	{"wxObject", &luna_wrapper_wxPaintDC::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPaintDC >::enumValues[] = {
	{0,0}
};



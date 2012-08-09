#include <plug_common.h>

class luna_wrapper_wxWindowDC {
public:
	typedef Luna< wxWindowDC > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxWindowDC* ptr= dynamic_cast< wxWindowDC* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxWindowDC >::push(L,ptr,false);
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
	// wxWindowDC::wxWindowDC(wxWindow * window)
	static wxWindowDC* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindowDC::wxWindowDC(wxWindow * window) function, expected prototype:\nwxWindowDC::wxWindowDC(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));

		return new wxWindowDC(window);
	}


	// Function binds:

	// Operator binds:

};

wxWindowDC* LunaTraits< wxWindowDC >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxWindowDC::_bind_ctor(L);
}

void LunaTraits< wxWindowDC >::_bind_dtor(wxWindowDC* obj) {
	delete obj;
}

const char LunaTraits< wxWindowDC >::className[] = "wxWindowDC";
const char LunaTraits< wxWindowDC >::fullName[] = "wxWindowDC";
const char LunaTraits< wxWindowDC >::moduleName[] = "wx";
const char* LunaTraits< wxWindowDC >::parents[] = {"wx.wxDC", 0};
const int LunaTraits< wxWindowDC >::hash = 25270291;
const int LunaTraits< wxWindowDC >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxWindowDC >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxWindowDC >::converters[] = {
	{"wxObject", &luna_wrapper_wxWindowDC::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxWindowDC >::enumValues[] = {
	{0,0}
};


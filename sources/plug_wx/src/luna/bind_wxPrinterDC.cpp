#include <plug_common.h>

#include <luna/wrappers/wrapper_wxPrinterDC.h>

class luna_wrapper_wxPrinterDC {
public:
	typedef Luna< wxPrinterDC > luna_t;

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
		//wxPrinterDC* ptr= dynamic_cast< wxPrinterDC* >(Luna< wxObject >::check(L,1));
		wxPrinterDC* ptr= luna_caster< wxObject, wxPrinterDC >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPrinterDC >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxPrinterDC* LunaTraits< wxPrinterDC >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxPrinterDC >::_bind_dtor(wxPrinterDC* obj) {
	delete obj;
}

const char LunaTraits< wxPrinterDC >::className[] = "wxPrinterDC";
const char LunaTraits< wxPrinterDC >::fullName[] = "wxPrinterDC";
const char LunaTraits< wxPrinterDC >::moduleName[] = "wx";
const char* LunaTraits< wxPrinterDC >::parents[] = {"wx.wxDC", 0};
const int LunaTraits< wxPrinterDC >::hash = 13028791;
const int LunaTraits< wxPrinterDC >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxPrinterDC >::methods[] = {
	{"__eq", &luna_wrapper_wxPrinterDC::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxPrinterDC >::converters[] = {
	{"wxObject", &luna_wrapper_wxPrinterDC::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPrinterDC >::enumValues[] = {
	{0,0}
};



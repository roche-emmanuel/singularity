#include <plug_common.h>

class luna_wrapper_wxPrintDialogData {
public:
	typedef Luna< wxPrintDialogData > luna_t;

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
		wxPrintDialogData* ptr= dynamic_cast< wxPrintDialogData* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPrintDialogData >::push(L,ptr,false);
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

wxPrintDialogData* LunaTraits< wxPrintDialogData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxPrintDialogData >::_bind_dtor(wxPrintDialogData* obj) {
	delete obj;
}

const char LunaTraits< wxPrintDialogData >::className[] = "wxPrintDialogData";
const char LunaTraits< wxPrintDialogData >::fullName[] = "wxPrintDialogData";
const char LunaTraits< wxPrintDialogData >::moduleName[] = "wx";
const char* LunaTraits< wxPrintDialogData >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxPrintDialogData >::hash = 45741527;
const int LunaTraits< wxPrintDialogData >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxPrintDialogData >::methods[] = {
	{"__eq", &luna_wrapper_wxPrintDialogData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxPrintDialogData >::converters[] = {
	{"wxObject", &luna_wrapper_wxPrintDialogData::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPrintDialogData >::enumValues[] = {
	{0,0}
};



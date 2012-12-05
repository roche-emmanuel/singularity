#include <plug_common.h>

#include <luna/wrappers/wrapper_wxPrintPreview.h>

class luna_wrapper_wxPrintPreview {
public:
	typedef Luna< wxPrintPreview > luna_t;

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
		wxPrintPreview* ptr= dynamic_cast< wxPrintPreview* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPrintPreview >::push(L,ptr,false);
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

wxPrintPreview* LunaTraits< wxPrintPreview >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxPrintPreview >::_bind_dtor(wxPrintPreview* obj) {
	delete obj;
}

const char LunaTraits< wxPrintPreview >::className[] = "wxPrintPreview";
const char LunaTraits< wxPrintPreview >::fullName[] = "wxPrintPreview";
const char LunaTraits< wxPrintPreview >::moduleName[] = "wx";
const char* LunaTraits< wxPrintPreview >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxPrintPreview >::hash = 35189911;
const int LunaTraits< wxPrintPreview >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxPrintPreview >::methods[] = {
	{"__eq", &luna_wrapper_wxPrintPreview::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxPrintPreview >::converters[] = {
	{"wxObject", &luna_wrapper_wxPrintPreview::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPrintPreview >::enumValues[] = {
	{0,0}
};



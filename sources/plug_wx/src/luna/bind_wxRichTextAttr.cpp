#include <plug_common.h>

class luna_wrapper_wxRichTextAttr {
public:
	typedef Luna< wxRichTextAttr > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,37117058) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxTextAttr*)");
		}

		wxTextAttr* rhs =(Luna< wxTextAttr >::check(L,2));
		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:

	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxRichTextAttr* LunaTraits< wxRichTextAttr >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxRichTextAttr >::_bind_dtor(wxRichTextAttr* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextAttr >::className[] = "wxRichTextAttr";
const char LunaTraits< wxRichTextAttr >::fullName[] = "wxRichTextAttr";
const char LunaTraits< wxRichTextAttr >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextAttr >::parents[] = {"wx.wxTextAttr", 0};
const int LunaTraits< wxRichTextAttr >::hash = 86201242;
const int LunaTraits< wxRichTextAttr >::uniqueIDs[] = {37117058,0};

luna_RegType LunaTraits< wxRichTextAttr >::methods[] = {
	{"__eq", &luna_wrapper_wxRichTextAttr::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextAttr >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextAttr >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

class luna_wrapper_wxRichTextStyleOrganiserDialog {
public:
	typedef Luna< wxRichTextStyleOrganiserDialog > luna_t;

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
		wxRichTextStyleOrganiserDialog* ptr= dynamic_cast< wxRichTextStyleOrganiserDialog* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextStyleOrganiserDialog >::push(L,ptr,false);
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

wxRichTextStyleOrganiserDialog* LunaTraits< wxRichTextStyleOrganiserDialog >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextStyleOrganiserDialog >::_bind_dtor(wxRichTextStyleOrganiserDialog* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextStyleOrganiserDialog >::className[] = "wxRichTextStyleOrganiserDialog";
const char LunaTraits< wxRichTextStyleOrganiserDialog >::fullName[] = "wxRichTextStyleOrganiserDialog";
const char LunaTraits< wxRichTextStyleOrganiserDialog >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextStyleOrganiserDialog >::parents[] = {"wx.wxDialog", 0};
const int LunaTraits< wxRichTextStyleOrganiserDialog >::hash = 70181438;
const int LunaTraits< wxRichTextStyleOrganiserDialog >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxRichTextStyleOrganiserDialog >::methods[] = {
	{"__eq", &luna_wrapper_wxRichTextStyleOrganiserDialog::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextStyleOrganiserDialog >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextStyleOrganiserDialog::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextStyleOrganiserDialog >::enumValues[] = {
	{0,0}
};



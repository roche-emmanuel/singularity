#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRichTextCell.h>

class luna_wrapper_wxRichTextCell {
public:
	typedef Luna< wxRichTextCell > luna_t;

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
		//wxRichTextCell* ptr= dynamic_cast< wxRichTextCell* >(Luna< wxObject >::check(L,1));
		wxRichTextCell* ptr= luna_caster< wxObject, wxRichTextCell >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextCell >::push(L,ptr,false);
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

wxRichTextCell* LunaTraits< wxRichTextCell >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextCell >::_bind_dtor(wxRichTextCell* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextCell >::className[] = "wxRichTextCell";
const char LunaTraits< wxRichTextCell >::fullName[] = "wxRichTextCell";
const char LunaTraits< wxRichTextCell >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextCell >::parents[] = {"wx.wxRichTextBox", 0};
const int LunaTraits< wxRichTextCell >::hash = 86246155;
const int LunaTraits< wxRichTextCell >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextCell >::methods[] = {
	{"__eq", &luna_wrapper_wxRichTextCell::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextCell >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextCell::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextCell >::enumValues[] = {
	{0,0}
};



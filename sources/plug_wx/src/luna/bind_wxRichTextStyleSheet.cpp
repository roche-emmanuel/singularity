#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRichTextStyleSheet.h>

class luna_wrapper_wxRichTextStyleSheet {
public:
	typedef Luna< wxRichTextStyleSheet > luna_t;

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
		//wxRichTextStyleSheet* ptr= dynamic_cast< wxRichTextStyleSheet* >(Luna< wxObject >::check(L,1));
		wxRichTextStyleSheet* ptr= luna_caster< wxObject, wxRichTextStyleSheet >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextStyleSheet >::push(L,ptr,false);
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

wxRichTextStyleSheet* LunaTraits< wxRichTextStyleSheet >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextStyleSheet >::_bind_dtor(wxRichTextStyleSheet* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextStyleSheet >::className[] = "wxRichTextStyleSheet";
const char LunaTraits< wxRichTextStyleSheet >::fullName[] = "wxRichTextStyleSheet";
const char LunaTraits< wxRichTextStyleSheet >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextStyleSheet >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxRichTextStyleSheet >::hash = 17165498;
const int LunaTraits< wxRichTextStyleSheet >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextStyleSheet >::methods[] = {
	{"__eq", &luna_wrapper_wxRichTextStyleSheet::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextStyleSheet >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextStyleSheet::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextStyleSheet >::enumValues[] = {
	{0,0}
};



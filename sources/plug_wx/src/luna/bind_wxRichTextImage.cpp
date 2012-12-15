#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRichTextImage.h>

class luna_wrapper_wxRichTextImage {
public:
	typedef Luna< wxRichTextImage > luna_t;

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
		//wxRichTextImage* ptr= dynamic_cast< wxRichTextImage* >(Luna< wxObject >::check(L,1));
		wxRichTextImage* ptr= luna_caster< wxObject, wxRichTextImage >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextImage >::push(L,ptr,false);
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

wxRichTextImage* LunaTraits< wxRichTextImage >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextImage >::_bind_dtor(wxRichTextImage* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextImage >::className[] = "wxRichTextImage";
const char LunaTraits< wxRichTextImage >::fullName[] = "wxRichTextImage";
const char LunaTraits< wxRichTextImage >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextImage >::parents[] = {"wx.wxRichTextObject", 0};
const int LunaTraits< wxRichTextImage >::hash = 79399244;
const int LunaTraits< wxRichTextImage >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextImage >::methods[] = {
	{"__eq", &luna_wrapper_wxRichTextImage::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextImage >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextImage::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextImage >::enumValues[] = {
	{0,0}
};



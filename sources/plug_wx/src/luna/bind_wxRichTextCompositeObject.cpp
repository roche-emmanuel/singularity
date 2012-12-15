#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRichTextCompositeObject.h>

class luna_wrapper_wxRichTextCompositeObject {
public:
	typedef Luna< wxRichTextCompositeObject > luna_t;

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
		//wxRichTextCompositeObject* ptr= dynamic_cast< wxRichTextCompositeObject* >(Luna< wxObject >::check(L,1));
		wxRichTextCompositeObject* ptr= luna_caster< wxObject, wxRichTextCompositeObject >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextCompositeObject >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxRichTextCompositeObject* LunaTraits< wxRichTextCompositeObject >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool wxRichTextObject::Draw(wxDC & dc, const wxRichTextRange & range, const wxRichTextSelection & selection, const wxRect & rect, int descent, int style)
	// bool wxRichTextObject::Layout(wxDC & dc, const wxRect & rect, int style)
}

void LunaTraits< wxRichTextCompositeObject >::_bind_dtor(wxRichTextCompositeObject* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextCompositeObject >::className[] = "wxRichTextCompositeObject";
const char LunaTraits< wxRichTextCompositeObject >::fullName[] = "wxRichTextCompositeObject";
const char LunaTraits< wxRichTextCompositeObject >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextCompositeObject >::parents[] = {"wx.wxRichTextObject", 0};
const int LunaTraits< wxRichTextCompositeObject >::hash = 3375595;
const int LunaTraits< wxRichTextCompositeObject >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextCompositeObject >::methods[] = {
	{"__eq", &luna_wrapper_wxRichTextCompositeObject::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextCompositeObject >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextCompositeObject::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextCompositeObject >::enumValues[] = {
	{0,0}
};



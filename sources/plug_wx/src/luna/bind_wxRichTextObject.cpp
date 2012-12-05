#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRichTextObject.h>

class luna_wrapper_wxRichTextObject {
public:
	typedef Luna< wxRichTextObject > luna_t;

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
		wxRichTextObject* ptr= dynamic_cast< wxRichTextObject* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextObject >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxRichTextObject* LunaTraits< wxRichTextObject >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool wxRichTextObject::Draw(wxDC & dc, const wxRichTextRange & range, const wxRichTextSelection & selection, const wxRect & rect, int descent, int style)
	// bool wxRichTextObject::Layout(wxDC & dc, const wxRect & rect, int style)
	// bool wxRichTextObject::GetRangeSize(const wxRichTextRange & range, wxSize & size, int & descent, wxDC & dc, int flags, wxPoint position = wxPoint (0, 0), wxArrayInt * partialExtents = NULL) const
}

void LunaTraits< wxRichTextObject >::_bind_dtor(wxRichTextObject* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextObject >::className[] = "wxRichTextObject";
const char LunaTraits< wxRichTextObject >::fullName[] = "wxRichTextObject";
const char LunaTraits< wxRichTextObject >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextObject >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxRichTextObject >::hash = 23258574;
const int LunaTraits< wxRichTextObject >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextObject >::methods[] = {
	{"__eq", &luna_wrapper_wxRichTextObject::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextObject >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextObject::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextObject >::enumValues[] = {
	{0,0}
};



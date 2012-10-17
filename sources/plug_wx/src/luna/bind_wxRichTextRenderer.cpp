#include <plug_common.h>

class luna_wrapper_wxRichTextRenderer {
public:
	typedef Luna< wxRichTextRenderer > luna_t;

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
		wxRichTextRenderer* ptr= dynamic_cast< wxRichTextRenderer* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextRenderer >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxRichTextRenderer* LunaTraits< wxRichTextRenderer >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool wxRichTextRenderer::DrawStandardBullet(wxRichTextParagraph * paragraph, wxDC & dc, const wxRichTextAttr & attr, const wxRect & rect)
	// bool wxRichTextRenderer::DrawTextBullet(wxRichTextParagraph * paragraph, wxDC & dc, const wxRichTextAttr & attr, const wxRect & rect, const wxString & text)
	// bool wxRichTextRenderer::DrawBitmapBullet(wxRichTextParagraph * paragraph, wxDC & dc, const wxRichTextAttr & attr, const wxRect & rect)
	// bool wxRichTextRenderer::EnumerateStandardBulletNames(wxArrayString & bulletNames)

	// Abstract operators:
}

void LunaTraits< wxRichTextRenderer >::_bind_dtor(wxRichTextRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextRenderer >::className[] = "wxRichTextRenderer";
const char LunaTraits< wxRichTextRenderer >::fullName[] = "wxRichTextRenderer";
const char LunaTraits< wxRichTextRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextRenderer >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxRichTextRenderer >::hash = 65479625;
const int LunaTraits< wxRichTextRenderer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextRenderer >::methods[] = {
	{"__eq", &luna_wrapper_wxRichTextRenderer::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextRenderer >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextRenderer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextRenderer >::enumValues[] = {
	{0,0}
};



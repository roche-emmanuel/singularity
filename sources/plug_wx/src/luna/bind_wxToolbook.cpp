#include <plug_common.h>

class luna_wrapper_wxToolbook {
public:
	typedef Luna< wxToolbook > luna_t;

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
		wxToolbook* ptr= dynamic_cast< wxToolbook* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxToolbook >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxWithImages(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxToolbook* ptr= dynamic_cast< wxToolbook* >(Luna< wxWithImages >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxToolbook >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetToolBar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxToolBarBase * wxToolbook::GetToolBar() const
	static int _bind_GetToolBar(lua_State *L) {
		if (!_lg_typecheck_GetToolBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolBarBase * wxToolbook::GetToolBar() const function, expected prototype:\nwxToolBarBase * wxToolbook::GetToolBar() const\nClass arguments details:\n");
		}


		wxToolbook* self=dynamic_cast< wxToolbook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxToolBarBase * wxToolbook::GetToolBar() const");
		}
		wxToolBarBase * lret = self->GetToolBar();
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'wxToolBarBase *'
		////////////////////////////////////////////////////////////////////

		return 1;
	}


	// Operator binds:

};

wxToolbook* LunaTraits< wxToolbook >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// int wxBookCtrlBase::GetPageImage(size_t nPage) const
	// bool wxBookCtrlBase::SetPageImage(size_t page, int image)
	// wxString wxBookCtrlBase::GetPageText(size_t nPage) const
	// bool wxBookCtrlBase::SetPageText(size_t page, const wxString & text)
	// int wxBookCtrlBase::GetSelection() const
	// int wxBookCtrlBase::SetSelection(size_t page)
	// int wxBookCtrlBase::ChangeSelection(size_t page)
	// bool wxBookCtrlBase::InsertPage(size_t index, wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE)

	// Abstract operators:
}

void LunaTraits< wxToolbook >::_bind_dtor(wxToolbook* obj) {
	delete obj;
}

const char LunaTraits< wxToolbook >::className[] = "wxToolbook";
const char LunaTraits< wxToolbook >::fullName[] = "wxToolbook";
const char LunaTraits< wxToolbook >::moduleName[] = "wx";
const char* LunaTraits< wxToolbook >::parents[] = {"wx.wxBookCtrlBase", 0};
const int LunaTraits< wxToolbook >::hash = 48080710;
const int LunaTraits< wxToolbook >::uniqueIDs[] = {56813631, 53506535, 14187710,0};

luna_RegType LunaTraits< wxToolbook >::methods[] = {
	{"GetToolBar", &luna_wrapper_wxToolbook::_bind_GetToolBar},
	{"__eq", &luna_wrapper_wxToolbook::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxToolbook >::converters[] = {
	{"wxObject", &luna_wrapper_wxToolbook::_cast_from_wxObject},
	{"wxWithImages", &luna_wrapper_wxToolbook::_cast_from_wxWithImages},
	{0,0}
};

luna_RegEnumType LunaTraits< wxToolbook >::enumValues[] = {
	{0,0}
};



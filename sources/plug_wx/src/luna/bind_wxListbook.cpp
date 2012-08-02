#include <plug_common.h>

class luna_wrapper_wxListbook {
public:
	typedef Luna< wxListbook > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxListbook* ptr= dynamic_cast< wxListbook* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxListbook >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxWithImages(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxListbook* ptr= dynamic_cast< wxListbook* >(Luna< wxWithImages >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxListbook >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetListView(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxListView * wxListbook::GetListView() const
	static int _bind_GetListView(lua_State *L) {
		if (!_lg_typecheck_GetListView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxListView * wxListbook::GetListView() const function, expected prototype:\nwxListView * wxListbook::GetListView() const\nClass arguments details:\n");
		}


		wxListbook* self=dynamic_cast< wxListbook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxListView * wxListbook::GetListView() const");
		}
		wxListView * lret = self->GetListView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxListView >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxListbook* LunaTraits< wxListbook >::_bind_ctor(lua_State *L) {
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

void LunaTraits< wxListbook >::_bind_dtor(wxListbook* obj) {
	delete obj;
}

const char LunaTraits< wxListbook >::className[] = "wxListbook";
const char LunaTraits< wxListbook >::fullName[] = "wxListbook";
const char LunaTraits< wxListbook >::moduleName[] = "wx";
const char* LunaTraits< wxListbook >::parents[] = {"wx.wxBookCtrlBase", 0};
const int LunaTraits< wxListbook >::hash = 44067923;
const int LunaTraits< wxListbook >::uniqueIDs[] = {56813631, 53506535, 14187710,0};

luna_RegType LunaTraits< wxListbook >::methods[] = {
	{"GetListView", &luna_wrapper_wxListbook::_bind_GetListView},
	{0,0}
};

luna_ConverterType LunaTraits< wxListbook >::converters[] = {
	{"wxObject", &luna_wrapper_wxListbook::_cast_from_wxObject},
	{"wxWithImages", &luna_wrapper_wxListbook::_cast_from_wxWithImages},
	{0,0}
};

luna_RegEnumType LunaTraits< wxListbook >::enumValues[] = {
	{0,0}
};



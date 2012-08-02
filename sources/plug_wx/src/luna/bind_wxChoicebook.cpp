#include <plug_common.h>

class luna_wrapper_wxChoicebook {
public:
	typedef Luna< wxChoicebook > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxChoicebook* ptr= dynamic_cast< wxChoicebook* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxChoicebook >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxWithImages(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxChoicebook* ptr= dynamic_cast< wxChoicebook* >(Luna< wxWithImages >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxChoicebook >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetChoiceCtrl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxChoice * wxChoicebook::GetChoiceCtrl() const
	static int _bind_GetChoiceCtrl(lua_State *L) {
		if (!_lg_typecheck_GetChoiceCtrl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxChoice * wxChoicebook::GetChoiceCtrl() const function, expected prototype:\nwxChoice * wxChoicebook::GetChoiceCtrl() const\nClass arguments details:\n");
		}


		wxChoicebook* self=dynamic_cast< wxChoicebook* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxChoice * wxChoicebook::GetChoiceCtrl() const");
		}
		wxChoice * lret = self->GetChoiceCtrl();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxChoice >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxChoicebook* LunaTraits< wxChoicebook >::_bind_ctor(lua_State *L) {
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

void LunaTraits< wxChoicebook >::_bind_dtor(wxChoicebook* obj) {
	delete obj;
}

const char LunaTraits< wxChoicebook >::className[] = "wxChoicebook";
const char LunaTraits< wxChoicebook >::fullName[] = "wxChoicebook";
const char LunaTraits< wxChoicebook >::moduleName[] = "wx";
const char* LunaTraits< wxChoicebook >::parents[] = {"wx.wxBookCtrlBase", 0};
const int LunaTraits< wxChoicebook >::hash = 84436028;
const int LunaTraits< wxChoicebook >::uniqueIDs[] = {56813631, 53506535, 14187710,0};

luna_RegType LunaTraits< wxChoicebook >::methods[] = {
	{"GetChoiceCtrl", &luna_wrapper_wxChoicebook::_bind_GetChoiceCtrl},
	{0,0}
};

luna_ConverterType LunaTraits< wxChoicebook >::converters[] = {
	{"wxObject", &luna_wrapper_wxChoicebook::_cast_from_wxObject},
	{"wxWithImages", &luna_wrapper_wxChoicebook::_cast_from_wxWithImages},
	{0,0}
};

luna_RegEnumType LunaTraits< wxChoicebook >::enumValues[] = {
	{0,0}
};



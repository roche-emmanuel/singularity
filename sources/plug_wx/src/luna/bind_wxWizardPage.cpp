#include <plug_common.h>

class luna_wrapper_wxWizardPage {
public:
	typedef Luna< wxWizardPage > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxWizardPage* ptr= dynamic_cast< wxWizardPage* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxWizardPage >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetBitmap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPrev(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxBitmap wxWizardPage::GetBitmap() const
	static int _bind_GetBitmap(lua_State *L) {
		if (!_lg_typecheck_GetBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap wxWizardPage::GetBitmap() const function, expected prototype:\nwxBitmap wxWizardPage::GetBitmap() const\nClass arguments details:\n");
		}


		wxWizardPage* self=dynamic_cast< wxWizardPage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBitmap wxWizardPage::GetBitmap() const");
		}
		wxBitmap stack_lret = self->GetBitmap();
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// wxWizardPage * wxWizardPage::GetNext() const
	static int _bind_GetNext(lua_State *L) {
		if (!_lg_typecheck_GetNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWizardPage * wxWizardPage::GetNext() const function, expected prototype:\nwxWizardPage * wxWizardPage::GetNext() const\nClass arguments details:\n");
		}


		wxWizardPage* self=dynamic_cast< wxWizardPage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWizardPage * wxWizardPage::GetNext() const");
		}
		wxWizardPage * lret = self->GetNext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWizardPage >::push(L,lret,false);

		return 1;
	}

	// wxWizardPage * wxWizardPage::GetPrev() const
	static int _bind_GetPrev(lua_State *L) {
		if (!_lg_typecheck_GetPrev(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWizardPage * wxWizardPage::GetPrev() const function, expected prototype:\nwxWizardPage * wxWizardPage::GetPrev() const\nClass arguments details:\n");
		}


		wxWizardPage* self=dynamic_cast< wxWizardPage* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWizardPage * wxWizardPage::GetPrev() const");
		}
		wxWizardPage * lret = self->GetPrev();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWizardPage >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxWizardPage* LunaTraits< wxWizardPage >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxWizardPage * wxWizardPage::GetNext() const
	// wxWizardPage * wxWizardPage::GetPrev() const

	// Abstract operators:
}

void LunaTraits< wxWizardPage >::_bind_dtor(wxWizardPage* obj) {
	delete obj;
}

const char LunaTraits< wxWizardPage >::className[] = "wxWizardPage";
const char LunaTraits< wxWizardPage >::fullName[] = "wxWizardPage";
const char LunaTraits< wxWizardPage >::moduleName[] = "wx";
const char* LunaTraits< wxWizardPage >::parents[] = {"wx.wxPanel", 0};
const int LunaTraits< wxWizardPage >::hash = 42302280;
const int LunaTraits< wxWizardPage >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxWizardPage >::methods[] = {
	{"GetBitmap", &luna_wrapper_wxWizardPage::_bind_GetBitmap},
	{"GetNext", &luna_wrapper_wxWizardPage::_bind_GetNext},
	{"GetPrev", &luna_wrapper_wxWizardPage::_bind_GetPrev},
	{0,0}
};

luna_ConverterType LunaTraits< wxWizardPage >::converters[] = {
	{"wxObject", &luna_wrapper_wxWizardPage::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxWizardPage >::enumValues[] = {
	{0,0}
};



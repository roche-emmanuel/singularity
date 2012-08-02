#include <plug_common.h>

class luna_wrapper_wxPageSetupDialog {
public:
	typedef Luna< wxPageSetupDialog > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxPageSetupDialog* ptr= dynamic_cast< wxPageSetupDialog* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPageSetupDialog >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetPageSetupData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ShowModal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxPageSetupDialog::wxPageSetupDialog(wxWindow * parent, wxPageSetupDialogData * data = NULL)
	static wxPageSetupDialog* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPageSetupDialog::wxPageSetupDialog(wxWindow * parent, wxPageSetupDialogData * data = NULL) function, expected prototype:\nwxPageSetupDialog::wxPageSetupDialog(wxWindow * parent, wxPageSetupDialogData * data = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		wxPageSetupDialogData* data=luatop>1 ? dynamic_cast< wxPageSetupDialogData* >(Luna< wxObject >::check(L,2)) : (wxPageSetupDialogData*)NULL;

		return new wxPageSetupDialog(parent, data);
	}


	// Function binds:
	// wxPageSetupDialogData & wxPageSetupDialog::GetPageSetupData()
	static int _bind_GetPageSetupData(lua_State *L) {
		if (!_lg_typecheck_GetPageSetupData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPageSetupDialogData & wxPageSetupDialog::GetPageSetupData() function, expected prototype:\nwxPageSetupDialogData & wxPageSetupDialog::GetPageSetupData()\nClass arguments details:\n");
		}


		wxPageSetupDialog* self=dynamic_cast< wxPageSetupDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPageSetupDialogData & wxPageSetupDialog::GetPageSetupData()");
		}
		const wxPageSetupDialogData* lret = &self->GetPageSetupData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPageSetupDialogData >::push(L,lret,false);

		return 1;
	}

	// int wxPageSetupDialog::ShowModal()
	static int _bind_ShowModal(lua_State *L) {
		if (!_lg_typecheck_ShowModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxPageSetupDialog::ShowModal() function, expected prototype:\nint wxPageSetupDialog::ShowModal()\nClass arguments details:\n");
		}


		wxPageSetupDialog* self=dynamic_cast< wxPageSetupDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxPageSetupDialog::ShowModal()");
		}
		int lret = self->ShowModal();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxPageSetupDialog* LunaTraits< wxPageSetupDialog >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPageSetupDialog::_bind_ctor(L);
}

void LunaTraits< wxPageSetupDialog >::_bind_dtor(wxPageSetupDialog* obj) {
	delete obj;
}

const char LunaTraits< wxPageSetupDialog >::className[] = "wxPageSetupDialog";
const char LunaTraits< wxPageSetupDialog >::fullName[] = "wxPageSetupDialog";
const char LunaTraits< wxPageSetupDialog >::moduleName[] = "wx";
const char* LunaTraits< wxPageSetupDialog >::parents[] = {"wx.wxDialog", 0};
const int LunaTraits< wxPageSetupDialog >::hash = 2863759;
const int LunaTraits< wxPageSetupDialog >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxPageSetupDialog >::methods[] = {
	{"GetPageSetupData", &luna_wrapper_wxPageSetupDialog::_bind_GetPageSetupData},
	{"ShowModal", &luna_wrapper_wxPageSetupDialog::_bind_ShowModal},
	{0,0}
};

luna_ConverterType LunaTraits< wxPageSetupDialog >::converters[] = {
	{"wxObject", &luna_wrapper_wxPageSetupDialog::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPageSetupDialog >::enumValues[] = {
	{0,0}
};



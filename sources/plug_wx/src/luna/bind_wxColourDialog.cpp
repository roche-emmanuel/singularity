#include <plug_common.h>

class luna_wrapper_wxColourDialog {
public:
	typedef Luna< wxColourDialog > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxColourDialog* ptr= dynamic_cast< wxColourDialog* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxColourDialog >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColourData(lua_State *L) {
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
	// wxColourDialog::wxColourDialog(wxWindow * parent, wxColourData * data = NULL)
	static wxColourDialog* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColourDialog::wxColourDialog(wxWindow * parent, wxColourData * data = NULL) function, expected prototype:\nwxColourDialog::wxColourDialog(wxWindow * parent, wxColourData * data = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		wxColourData* data=luatop>1 ? dynamic_cast< wxColourData* >(Luna< wxObject >::check(L,2)) : (wxColourData*)NULL;

		return new wxColourDialog(parent, data);
	}


	// Function binds:
	// bool wxColourDialog::Create(wxWindow * parent, wxColourData * data = NULL)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxColourDialog::Create(wxWindow * parent, wxColourData * data = NULL) function, expected prototype:\nbool wxColourDialog::Create(wxWindow * parent, wxColourData * data = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxColourData* data=luatop>2 ? dynamic_cast< wxColourData* >(Luna< wxObject >::check(L,3)) : (wxColourData*)NULL;

		wxColourDialog* self=dynamic_cast< wxColourDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxColourDialog::Create(wxWindow *, wxColourData *)");
		}
		bool lret = self->Create(parent, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxColourData & wxColourDialog::GetColourData()
	static int _bind_GetColourData(lua_State *L) {
		if (!_lg_typecheck_GetColourData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColourData & wxColourDialog::GetColourData() function, expected prototype:\nwxColourData & wxColourDialog::GetColourData()\nClass arguments details:\n");
		}


		wxColourDialog* self=dynamic_cast< wxColourDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColourData & wxColourDialog::GetColourData()");
		}
		const wxColourData* lret = &self->GetColourData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColourData >::push(L,lret,false);

		return 1;
	}

	// int wxColourDialog::ShowModal()
	static int _bind_ShowModal(lua_State *L) {
		if (!_lg_typecheck_ShowModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxColourDialog::ShowModal() function, expected prototype:\nint wxColourDialog::ShowModal()\nClass arguments details:\n");
		}


		wxColourDialog* self=dynamic_cast< wxColourDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxColourDialog::ShowModal()");
		}
		int lret = self->ShowModal();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxColourDialog* LunaTraits< wxColourDialog >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxColourDialog::_bind_ctor(L);
}

void LunaTraits< wxColourDialog >::_bind_dtor(wxColourDialog* obj) {
	delete obj;
}

const char LunaTraits< wxColourDialog >::className[] = "wxColourDialog";
const char LunaTraits< wxColourDialog >::fullName[] = "wxColourDialog";
const char LunaTraits< wxColourDialog >::moduleName[] = "wx";
const char* LunaTraits< wxColourDialog >::parents[] = {"wx.wxDialog", 0};
const int LunaTraits< wxColourDialog >::hash = 21976230;
const int LunaTraits< wxColourDialog >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxColourDialog >::methods[] = {
	{"Create", &luna_wrapper_wxColourDialog::_bind_Create},
	{"GetColourData", &luna_wrapper_wxColourDialog::_bind_GetColourData},
	{"ShowModal", &luna_wrapper_wxColourDialog::_bind_ShowModal},
	{0,0}
};

luna_ConverterType LunaTraits< wxColourDialog >::converters[] = {
	{"wxObject", &luna_wrapper_wxColourDialog::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxColourDialog >::enumValues[] = {
	{0,0}
};



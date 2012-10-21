#include <plug_common.h>

class luna_wrapper_wxFontDialog {
public:
	typedef Luna< wxFontDialog > luna_t;

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
		wxFontDialog* ptr= dynamic_cast< wxFontDialog* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFontDialog >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!dynamic_cast< wxFontData* >(Luna< wxObject >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( (!dynamic_cast< wxFontData* >(Luna< wxObject >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFontData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFontData_overload_2(lua_State *L) {
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
	// wxFontDialog::wxFontDialog()
	static wxFontDialog* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFontDialog::wxFontDialog() function, expected prototype:\nwxFontDialog::wxFontDialog()\nClass arguments details:\n");
		}


		return new wxFontDialog();
	}

	// wxFontDialog::wxFontDialog(wxWindow * parent)
	static wxFontDialog* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFontDialog::wxFontDialog(wxWindow * parent) function, expected prototype:\nwxFontDialog::wxFontDialog(wxWindow * parent)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));

		return new wxFontDialog(parent);
	}

	// wxFontDialog::wxFontDialog(wxWindow * parent, const wxFontData & data)
	static wxFontDialog* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFontDialog::wxFontDialog(wxWindow * parent, const wxFontData & data) function, expected prototype:\nwxFontDialog::wxFontDialog(wxWindow * parent, const wxFontData & data)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		const wxFontData* data_ptr=dynamic_cast< wxFontData* >(Luna< wxObject >::check(L,2));
		if( !data_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg data in wxFontDialog::wxFontDialog function");
		}
		const wxFontData & data=*data_ptr;

		return new wxFontDialog(parent, data);
	}

	// Overload binder for wxFontDialog::wxFontDialog
	static wxFontDialog* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function wxFontDialog, cannot match any of the overloads for function wxFontDialog:\n  wxFontDialog()\n  wxFontDialog(wxWindow *)\n  wxFontDialog(wxWindow *, const wxFontData &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxFontDialog::Create(wxWindow * parent)
	static int _bind_Create_overload_1(lua_State *L) {
		if (!_lg_typecheck_Create_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::Create(wxWindow * parent) function, expected prototype:\nbool wxFontDialog::Create(wxWindow * parent)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxFontDialog* self=dynamic_cast< wxFontDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::Create(wxWindow *)");
		}
		bool lret = self->Create(parent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontDialog::Create(wxWindow * parent, const wxFontData & data)
	static int _bind_Create_overload_2(lua_State *L) {
		if (!_lg_typecheck_Create_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFontDialog::Create(wxWindow * parent, const wxFontData & data) function, expected prototype:\nbool wxFontDialog::Create(wxWindow * parent, const wxFontData & data)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		const wxFontData* data_ptr=dynamic_cast< wxFontData* >(Luna< wxObject >::check(L,3));
		if( !data_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg data in wxFontDialog::Create function");
		}
		const wxFontData & data=*data_ptr;

		wxFontDialog* self=dynamic_cast< wxFontDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFontDialog::Create(wxWindow *, const wxFontData &)");
		}
		bool lret = self->Create(parent, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxFontDialog::Create
	static int _bind_Create(lua_State *L) {
		if (_lg_typecheck_Create_overload_1(L)) return _bind_Create_overload_1(L);
		if (_lg_typecheck_Create_overload_2(L)) return _bind_Create_overload_2(L);

		luaL_error(L, "error in function Create, cannot match any of the overloads for function Create:\n  Create(wxWindow *)\n  Create(wxWindow *, const wxFontData &)\n");
		return 0;
	}

	// const wxFontData & wxFontDialog::GetFontData() const
	static int _bind_GetFontData_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetFontData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxFontData & wxFontDialog::GetFontData() const function, expected prototype:\nconst wxFontData & wxFontDialog::GetFontData() const\nClass arguments details:\n");
		}


		wxFontDialog* self=dynamic_cast< wxFontDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxFontData & wxFontDialog::GetFontData() const");
		}
		const wxFontData* lret = &self->GetFontData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFontData >::push(L,lret,false);

		return 1;
	}

	// wxFontData & wxFontDialog::GetFontData()
	static int _bind_GetFontData_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetFontData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFontData & wxFontDialog::GetFontData() function, expected prototype:\nwxFontData & wxFontDialog::GetFontData()\nClass arguments details:\n");
		}


		wxFontDialog* self=dynamic_cast< wxFontDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFontData & wxFontDialog::GetFontData()");
		}
		const wxFontData* lret = &self->GetFontData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFontData >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxFontDialog::GetFontData
	static int _bind_GetFontData(lua_State *L) {
		if (_lg_typecheck_GetFontData_overload_1(L)) return _bind_GetFontData_overload_1(L);
		if (_lg_typecheck_GetFontData_overload_2(L)) return _bind_GetFontData_overload_2(L);

		luaL_error(L, "error in function GetFontData, cannot match any of the overloads for function GetFontData:\n  GetFontData()\n  GetFontData()\n");
		return 0;
	}

	// int wxFontDialog::ShowModal()
	static int _bind_ShowModal(lua_State *L) {
		if (!_lg_typecheck_ShowModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxFontDialog::ShowModal() function, expected prototype:\nint wxFontDialog::ShowModal()\nClass arguments details:\n");
		}


		wxFontDialog* self=dynamic_cast< wxFontDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxFontDialog::ShowModal()");
		}
		int lret = self->ShowModal();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxFontDialog* LunaTraits< wxFontDialog >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFontDialog::_bind_ctor(L);
}

void LunaTraits< wxFontDialog >::_bind_dtor(wxFontDialog* obj) {
	delete obj;
}

const char LunaTraits< wxFontDialog >::className[] = "wxFontDialog";
const char LunaTraits< wxFontDialog >::fullName[] = "wxFontDialog";
const char LunaTraits< wxFontDialog >::moduleName[] = "wx";
const char* LunaTraits< wxFontDialog >::parents[] = {"wx.wxDialog", 0};
const int LunaTraits< wxFontDialog >::hash = 47524357;
const int LunaTraits< wxFontDialog >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxFontDialog >::methods[] = {
	{"Create", &luna_wrapper_wxFontDialog::_bind_Create},
	{"GetFontData", &luna_wrapper_wxFontDialog::_bind_GetFontData},
	{"ShowModal", &luna_wrapper_wxFontDialog::_bind_ShowModal},
	{"__eq", &luna_wrapper_wxFontDialog::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxFontDialog >::converters[] = {
	{"wxObject", &luna_wrapper_wxFontDialog::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFontDialog >::enumValues[] = {
	{0,0}
};



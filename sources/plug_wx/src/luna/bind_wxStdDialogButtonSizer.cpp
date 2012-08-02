#include <plug_common.h>

class luna_wrapper_wxStdDialogButtonSizer {
public:
	typedef Luna< wxStdDialogButtonSizer > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxStdDialogButtonSizer* ptr= dynamic_cast< wxStdDialogButtonSizer* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxStdDialogButtonSizer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddButton(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Realize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAffirmativeButton(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCancelButton(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetNegativeButton(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RecalcSizes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CalcMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxStdDialogButtonSizer::wxStdDialogButtonSizer()
	static wxStdDialogButtonSizer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStdDialogButtonSizer::wxStdDialogButtonSizer() function, expected prototype:\nwxStdDialogButtonSizer::wxStdDialogButtonSizer()\nClass arguments details:\n");
		}


		return new wxStdDialogButtonSizer();
	}


	// Function binds:
	// void wxStdDialogButtonSizer::AddButton(wxButton * button)
	static int _bind_AddButton(lua_State *L) {
		if (!_lg_typecheck_AddButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStdDialogButtonSizer::AddButton(wxButton * button) function, expected prototype:\nvoid wxStdDialogButtonSizer::AddButton(wxButton * button)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxButton* button=dynamic_cast< wxButton* >(Luna< wxObject >::check(L,2));

		wxStdDialogButtonSizer* self=dynamic_cast< wxStdDialogButtonSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStdDialogButtonSizer::AddButton(wxButton *)");
		}
		self->AddButton(button);

		return 0;
	}

	// void wxStdDialogButtonSizer::Realize()
	static int _bind_Realize(lua_State *L) {
		if (!_lg_typecheck_Realize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStdDialogButtonSizer::Realize() function, expected prototype:\nvoid wxStdDialogButtonSizer::Realize()\nClass arguments details:\n");
		}


		wxStdDialogButtonSizer* self=dynamic_cast< wxStdDialogButtonSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStdDialogButtonSizer::Realize()");
		}
		self->Realize();

		return 0;
	}

	// void wxStdDialogButtonSizer::SetAffirmativeButton(wxButton * button)
	static int _bind_SetAffirmativeButton(lua_State *L) {
		if (!_lg_typecheck_SetAffirmativeButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStdDialogButtonSizer::SetAffirmativeButton(wxButton * button) function, expected prototype:\nvoid wxStdDialogButtonSizer::SetAffirmativeButton(wxButton * button)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxButton* button=dynamic_cast< wxButton* >(Luna< wxObject >::check(L,2));

		wxStdDialogButtonSizer* self=dynamic_cast< wxStdDialogButtonSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStdDialogButtonSizer::SetAffirmativeButton(wxButton *)");
		}
		self->SetAffirmativeButton(button);

		return 0;
	}

	// void wxStdDialogButtonSizer::SetCancelButton(wxButton * button)
	static int _bind_SetCancelButton(lua_State *L) {
		if (!_lg_typecheck_SetCancelButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStdDialogButtonSizer::SetCancelButton(wxButton * button) function, expected prototype:\nvoid wxStdDialogButtonSizer::SetCancelButton(wxButton * button)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxButton* button=dynamic_cast< wxButton* >(Luna< wxObject >::check(L,2));

		wxStdDialogButtonSizer* self=dynamic_cast< wxStdDialogButtonSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStdDialogButtonSizer::SetCancelButton(wxButton *)");
		}
		self->SetCancelButton(button);

		return 0;
	}

	// void wxStdDialogButtonSizer::SetNegativeButton(wxButton * button)
	static int _bind_SetNegativeButton(lua_State *L) {
		if (!_lg_typecheck_SetNegativeButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStdDialogButtonSizer::SetNegativeButton(wxButton * button) function, expected prototype:\nvoid wxStdDialogButtonSizer::SetNegativeButton(wxButton * button)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxButton* button=dynamic_cast< wxButton* >(Luna< wxObject >::check(L,2));

		wxStdDialogButtonSizer* self=dynamic_cast< wxStdDialogButtonSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStdDialogButtonSizer::SetNegativeButton(wxButton *)");
		}
		self->SetNegativeButton(button);

		return 0;
	}

	// void wxStdDialogButtonSizer::RecalcSizes()
	static int _bind_RecalcSizes(lua_State *L) {
		if (!_lg_typecheck_RecalcSizes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStdDialogButtonSizer::RecalcSizes() function, expected prototype:\nvoid wxStdDialogButtonSizer::RecalcSizes()\nClass arguments details:\n");
		}


		wxStdDialogButtonSizer* self=dynamic_cast< wxStdDialogButtonSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStdDialogButtonSizer::RecalcSizes()");
		}
		self->RecalcSizes();

		return 0;
	}

	// wxSize wxStdDialogButtonSizer::CalcMin()
	static int _bind_CalcMin(lua_State *L) {
		if (!_lg_typecheck_CalcMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSize wxStdDialogButtonSizer::CalcMin() function, expected prototype:\nwxSize wxStdDialogButtonSizer::CalcMin()\nClass arguments details:\n");
		}


		wxStdDialogButtonSizer* self=dynamic_cast< wxStdDialogButtonSizer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSize wxStdDialogButtonSizer::CalcMin()");
		}
		wxSize stack_lret = self->CalcMin();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

wxStdDialogButtonSizer* LunaTraits< wxStdDialogButtonSizer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxStdDialogButtonSizer::_bind_ctor(L);
}

void LunaTraits< wxStdDialogButtonSizer >::_bind_dtor(wxStdDialogButtonSizer* obj) {
	delete obj;
}

const char LunaTraits< wxStdDialogButtonSizer >::className[] = "wxStdDialogButtonSizer";
const char LunaTraits< wxStdDialogButtonSizer >::fullName[] = "wxStdDialogButtonSizer";
const char LunaTraits< wxStdDialogButtonSizer >::moduleName[] = "wx";
const char* LunaTraits< wxStdDialogButtonSizer >::parents[] = {"wx.wxBoxSizer", 0};
const int LunaTraits< wxStdDialogButtonSizer >::hash = 79748271;
const int LunaTraits< wxStdDialogButtonSizer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxStdDialogButtonSizer >::methods[] = {
	{"AddButton", &luna_wrapper_wxStdDialogButtonSizer::_bind_AddButton},
	{"Realize", &luna_wrapper_wxStdDialogButtonSizer::_bind_Realize},
	{"SetAffirmativeButton", &luna_wrapper_wxStdDialogButtonSizer::_bind_SetAffirmativeButton},
	{"SetCancelButton", &luna_wrapper_wxStdDialogButtonSizer::_bind_SetCancelButton},
	{"SetNegativeButton", &luna_wrapper_wxStdDialogButtonSizer::_bind_SetNegativeButton},
	{"RecalcSizes", &luna_wrapper_wxStdDialogButtonSizer::_bind_RecalcSizes},
	{"CalcMin", &luna_wrapper_wxStdDialogButtonSizer::_bind_CalcMin},
	{0,0}
};

luna_ConverterType LunaTraits< wxStdDialogButtonSizer >::converters[] = {
	{"wxObject", &luna_wrapper_wxStdDialogButtonSizer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxStdDialogButtonSizer >::enumValues[] = {
	{0,0}
};



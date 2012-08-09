#include <plug_common.h>

class luna_wrapper_wxKeyboardState {
public:
	typedef Luna< wxKeyboardState > luna_t;

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		wxKeyboardState* self=(Luna< wxKeyboardState >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxKeyboardState");
		
		return luna_dynamicCast(L,converters,"wxKeyboardState",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>4 ) return false;

		if( luatop>0 && lua_isboolean(L,1)==0 ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetModifiers(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasModifiers(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ControlDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RawControlDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ShiftDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MetaDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AltDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CmdDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetControlDown(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRawControlDown(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetShiftDown(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAltDown(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMetaDown(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxKeyboardState::wxKeyboardState(bool controlDown = false, bool shiftDown = false, bool altDown = false, bool metaDown = false)
	static wxKeyboardState* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxKeyboardState::wxKeyboardState(bool controlDown = false, bool shiftDown = false, bool altDown = false, bool metaDown = false) function, expected prototype:\nwxKeyboardState::wxKeyboardState(bool controlDown = false, bool shiftDown = false, bool altDown = false, bool metaDown = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool controlDown=luatop>0 ? (bool)(lua_toboolean(L,1)==1) : false;
		bool shiftDown=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : false;
		bool altDown=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;
		bool metaDown=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : false;

		return new wxKeyboardState(controlDown, shiftDown, altDown, metaDown);
	}


	// Function binds:
	// int wxKeyboardState::GetModifiers() const
	static int _bind_GetModifiers(lua_State *L) {
		if (!_lg_typecheck_GetModifiers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxKeyboardState::GetModifiers() const function, expected prototype:\nint wxKeyboardState::GetModifiers() const\nClass arguments details:\n");
		}


		wxKeyboardState* self=(Luna< wxKeyboardState >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxKeyboardState::GetModifiers() const");
		}
		int lret = self->GetModifiers();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxKeyboardState::HasModifiers() const
	static int _bind_HasModifiers(lua_State *L) {
		if (!_lg_typecheck_HasModifiers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxKeyboardState::HasModifiers() const function, expected prototype:\nbool wxKeyboardState::HasModifiers() const\nClass arguments details:\n");
		}


		wxKeyboardState* self=(Luna< wxKeyboardState >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxKeyboardState::HasModifiers() const");
		}
		bool lret = self->HasModifiers();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxKeyboardState::ControlDown() const
	static int _bind_ControlDown(lua_State *L) {
		if (!_lg_typecheck_ControlDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxKeyboardState::ControlDown() const function, expected prototype:\nbool wxKeyboardState::ControlDown() const\nClass arguments details:\n");
		}


		wxKeyboardState* self=(Luna< wxKeyboardState >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxKeyboardState::ControlDown() const");
		}
		bool lret = self->ControlDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxKeyboardState::RawControlDown() const
	static int _bind_RawControlDown(lua_State *L) {
		if (!_lg_typecheck_RawControlDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxKeyboardState::RawControlDown() const function, expected prototype:\nbool wxKeyboardState::RawControlDown() const\nClass arguments details:\n");
		}


		wxKeyboardState* self=(Luna< wxKeyboardState >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxKeyboardState::RawControlDown() const");
		}
		bool lret = self->RawControlDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxKeyboardState::ShiftDown() const
	static int _bind_ShiftDown(lua_State *L) {
		if (!_lg_typecheck_ShiftDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxKeyboardState::ShiftDown() const function, expected prototype:\nbool wxKeyboardState::ShiftDown() const\nClass arguments details:\n");
		}


		wxKeyboardState* self=(Luna< wxKeyboardState >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxKeyboardState::ShiftDown() const");
		}
		bool lret = self->ShiftDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxKeyboardState::MetaDown() const
	static int _bind_MetaDown(lua_State *L) {
		if (!_lg_typecheck_MetaDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxKeyboardState::MetaDown() const function, expected prototype:\nbool wxKeyboardState::MetaDown() const\nClass arguments details:\n");
		}


		wxKeyboardState* self=(Luna< wxKeyboardState >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxKeyboardState::MetaDown() const");
		}
		bool lret = self->MetaDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxKeyboardState::AltDown() const
	static int _bind_AltDown(lua_State *L) {
		if (!_lg_typecheck_AltDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxKeyboardState::AltDown() const function, expected prototype:\nbool wxKeyboardState::AltDown() const\nClass arguments details:\n");
		}


		wxKeyboardState* self=(Luna< wxKeyboardState >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxKeyboardState::AltDown() const");
		}
		bool lret = self->AltDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxKeyboardState::CmdDown() const
	static int _bind_CmdDown(lua_State *L) {
		if (!_lg_typecheck_CmdDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxKeyboardState::CmdDown() const function, expected prototype:\nbool wxKeyboardState::CmdDown() const\nClass arguments details:\n");
		}


		wxKeyboardState* self=(Luna< wxKeyboardState >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxKeyboardState::CmdDown() const");
		}
		bool lret = self->CmdDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxKeyboardState::SetControlDown(bool down)
	static int _bind_SetControlDown(lua_State *L) {
		if (!_lg_typecheck_SetControlDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxKeyboardState::SetControlDown(bool down) function, expected prototype:\nvoid wxKeyboardState::SetControlDown(bool down)\nClass arguments details:\n");
		}

		bool down=(bool)(lua_toboolean(L,2)==1);

		wxKeyboardState* self=(Luna< wxKeyboardState >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxKeyboardState::SetControlDown(bool)");
		}
		self->SetControlDown(down);

		return 0;
	}

	// void wxKeyboardState::SetRawControlDown(bool down)
	static int _bind_SetRawControlDown(lua_State *L) {
		if (!_lg_typecheck_SetRawControlDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxKeyboardState::SetRawControlDown(bool down) function, expected prototype:\nvoid wxKeyboardState::SetRawControlDown(bool down)\nClass arguments details:\n");
		}

		bool down=(bool)(lua_toboolean(L,2)==1);

		wxKeyboardState* self=(Luna< wxKeyboardState >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxKeyboardState::SetRawControlDown(bool)");
		}
		self->SetRawControlDown(down);

		return 0;
	}

	// void wxKeyboardState::SetShiftDown(bool down)
	static int _bind_SetShiftDown(lua_State *L) {
		if (!_lg_typecheck_SetShiftDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxKeyboardState::SetShiftDown(bool down) function, expected prototype:\nvoid wxKeyboardState::SetShiftDown(bool down)\nClass arguments details:\n");
		}

		bool down=(bool)(lua_toboolean(L,2)==1);

		wxKeyboardState* self=(Luna< wxKeyboardState >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxKeyboardState::SetShiftDown(bool)");
		}
		self->SetShiftDown(down);

		return 0;
	}

	// void wxKeyboardState::SetAltDown(bool down)
	static int _bind_SetAltDown(lua_State *L) {
		if (!_lg_typecheck_SetAltDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxKeyboardState::SetAltDown(bool down) function, expected prototype:\nvoid wxKeyboardState::SetAltDown(bool down)\nClass arguments details:\n");
		}

		bool down=(bool)(lua_toboolean(L,2)==1);

		wxKeyboardState* self=(Luna< wxKeyboardState >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxKeyboardState::SetAltDown(bool)");
		}
		self->SetAltDown(down);

		return 0;
	}

	// void wxKeyboardState::SetMetaDown(bool down)
	static int _bind_SetMetaDown(lua_State *L) {
		if (!_lg_typecheck_SetMetaDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxKeyboardState::SetMetaDown(bool down) function, expected prototype:\nvoid wxKeyboardState::SetMetaDown(bool down)\nClass arguments details:\n");
		}

		bool down=(bool)(lua_toboolean(L,2)==1);

		wxKeyboardState* self=(Luna< wxKeyboardState >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxKeyboardState::SetMetaDown(bool)");
		}
		self->SetMetaDown(down);

		return 0;
	}


	// Operator binds:

};

wxKeyboardState* LunaTraits< wxKeyboardState >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxKeyboardState::_bind_ctor(L);
}

void LunaTraits< wxKeyboardState >::_bind_dtor(wxKeyboardState* obj) {
	delete obj;
}

const char LunaTraits< wxKeyboardState >::className[] = "wxKeyboardState";
const char LunaTraits< wxKeyboardState >::fullName[] = "wxKeyboardState";
const char LunaTraits< wxKeyboardState >::moduleName[] = "wx";
const char* LunaTraits< wxKeyboardState >::parents[] = {0};
const int LunaTraits< wxKeyboardState >::hash = 92036952;
const int LunaTraits< wxKeyboardState >::uniqueIDs[] = {92036952,0};

luna_RegType LunaTraits< wxKeyboardState >::methods[] = {
	{"GetModifiers", &luna_wrapper_wxKeyboardState::_bind_GetModifiers},
	{"HasModifiers", &luna_wrapper_wxKeyboardState::_bind_HasModifiers},
	{"ControlDown", &luna_wrapper_wxKeyboardState::_bind_ControlDown},
	{"RawControlDown", &luna_wrapper_wxKeyboardState::_bind_RawControlDown},
	{"ShiftDown", &luna_wrapper_wxKeyboardState::_bind_ShiftDown},
	{"MetaDown", &luna_wrapper_wxKeyboardState::_bind_MetaDown},
	{"AltDown", &luna_wrapper_wxKeyboardState::_bind_AltDown},
	{"CmdDown", &luna_wrapper_wxKeyboardState::_bind_CmdDown},
	{"SetControlDown", &luna_wrapper_wxKeyboardState::_bind_SetControlDown},
	{"SetRawControlDown", &luna_wrapper_wxKeyboardState::_bind_SetRawControlDown},
	{"SetShiftDown", &luna_wrapper_wxKeyboardState::_bind_SetShiftDown},
	{"SetAltDown", &luna_wrapper_wxKeyboardState::_bind_SetAltDown},
	{"SetMetaDown", &luna_wrapper_wxKeyboardState::_bind_SetMetaDown},
	{"dynCast", &luna_wrapper_wxKeyboardState::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxKeyboardState >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxKeyboardState >::enumValues[] = {
	{0,0}
};


#include <plug_common.h>

class luna_wrapper_wxGBPosition {
public:
	typedef Luna< wxGBPosition > luna_t;

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

		wxGBPosition* self=(Luna< wxGBPosition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxGBPosition");
		
		return luna_dynamicCast(L,converters,"wxGBPosition",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetCol(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCol(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3425779) ) return false;
		return true;
	}


	// Constructor binds:
	// wxGBPosition::wxGBPosition()
	static wxGBPosition* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGBPosition::wxGBPosition() function, expected prototype:\nwxGBPosition::wxGBPosition()\nClass arguments details:\n");
		}


		return new wxGBPosition();
	}

	// wxGBPosition::wxGBPosition(int row, int col)
	static wxGBPosition* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGBPosition::wxGBPosition(int row, int col) function, expected prototype:\nwxGBPosition::wxGBPosition(int row, int col)\nClass arguments details:\n");
		}

		int row=(int)lua_tointeger(L,1);
		int col=(int)lua_tointeger(L,2);

		return new wxGBPosition(row, col);
	}

	// Overload binder for wxGBPosition::wxGBPosition
	static wxGBPosition* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxGBPosition, cannot match any of the overloads for function wxGBPosition:\n  wxGBPosition()\n  wxGBPosition(int, int)\n");
		return NULL;
	}


	// Function binds:
	// int wxGBPosition::GetCol() const
	static int _bind_GetCol(lua_State *L) {
		if (!_lg_typecheck_GetCol(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGBPosition::GetCol() const function, expected prototype:\nint wxGBPosition::GetCol() const\nClass arguments details:\n");
		}


		wxGBPosition* self=(Luna< wxGBPosition >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGBPosition::GetCol() const");
		}
		int lret = self->GetCol();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGBPosition::GetRow() const
	static int _bind_GetRow(lua_State *L) {
		if (!_lg_typecheck_GetRow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGBPosition::GetRow() const function, expected prototype:\nint wxGBPosition::GetRow() const\nClass arguments details:\n");
		}


		wxGBPosition* self=(Luna< wxGBPosition >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGBPosition::GetRow() const");
		}
		int lret = self->GetRow();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxGBPosition::SetCol(int col)
	static int _bind_SetCol(lua_State *L) {
		if (!_lg_typecheck_SetCol(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGBPosition::SetCol(int col) function, expected prototype:\nvoid wxGBPosition::SetCol(int col)\nClass arguments details:\n");
		}

		int col=(int)lua_tointeger(L,2);

		wxGBPosition* self=(Luna< wxGBPosition >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGBPosition::SetCol(int)");
		}
		self->SetCol(col);

		return 0;
	}

	// void wxGBPosition::SetRow(int row)
	static int _bind_SetRow(lua_State *L) {
		if (!_lg_typecheck_SetRow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGBPosition::SetRow(int row) function, expected prototype:\nvoid wxGBPosition::SetRow(int row)\nClass arguments details:\n");
		}

		int row=(int)lua_tointeger(L,2);

		wxGBPosition* self=(Luna< wxGBPosition >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGBPosition::SetRow(int)");
		}
		self->SetRow(row);

		return 0;
	}


	// Operator binds:
	// bool wxGBPosition::operator==(const wxGBPosition & p) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGBPosition::operator==(const wxGBPosition & p) const function, expected prototype:\nbool wxGBPosition::operator==(const wxGBPosition & p) const\nClass arguments details:\narg 1 ID = 3425779\n");
		}

		const wxGBPosition* p_ptr=(Luna< wxGBPosition >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in wxGBPosition::operator== function");
		}
		const wxGBPosition & p=*p_ptr;

		wxGBPosition* self=(Luna< wxGBPosition >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGBPosition::operator==(const wxGBPosition &) const");
		}
		bool lret = self->operator==(p);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

wxGBPosition* LunaTraits< wxGBPosition >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGBPosition::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxGBPosition >::_bind_dtor(wxGBPosition* obj) {
	delete obj;
}

const char LunaTraits< wxGBPosition >::className[] = "wxGBPosition";
const char LunaTraits< wxGBPosition >::fullName[] = "wxGBPosition";
const char LunaTraits< wxGBPosition >::moduleName[] = "wx";
const char* LunaTraits< wxGBPosition >::parents[] = {0};
const int LunaTraits< wxGBPosition >::hash = 3425779;
const int LunaTraits< wxGBPosition >::uniqueIDs[] = {3425779,0};

luna_RegType LunaTraits< wxGBPosition >::methods[] = {
	{"GetCol", &luna_wrapper_wxGBPosition::_bind_GetCol},
	{"GetRow", &luna_wrapper_wxGBPosition::_bind_GetRow},
	{"SetCol", &luna_wrapper_wxGBPosition::_bind_SetCol},
	{"SetRow", &luna_wrapper_wxGBPosition::_bind_SetRow},
	{"__eq", &luna_wrapper_wxGBPosition::_bind___eq},
	{"dynCast", &luna_wrapper_wxGBPosition::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxGBPosition >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxGBPosition >::enumValues[] = {
	{0,0}
};



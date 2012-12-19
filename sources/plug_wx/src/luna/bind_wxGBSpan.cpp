#include <plug_common.h>

class luna_wrapper_wxGBSpan {
public:
	typedef Luna< wxGBSpan > luna_t;

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

		wxGBSpan* self=(Luna< wxGBSpan >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxGBSpan");
		
		return luna_dynamicCast(L,converters,"wxGBSpan",name);
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
	inline static bool _lg_typecheck_GetColspan(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRowspan(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetColspan(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRowspan(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,97553085) ) return false;
		return true;
	}


	// Constructor binds:
	// wxGBSpan::wxGBSpan()
	static wxGBSpan* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGBSpan::wxGBSpan() function, expected prototype:\nwxGBSpan::wxGBSpan()\nClass arguments details:\n");
		}


		return new wxGBSpan();
	}

	// wxGBSpan::wxGBSpan(int rowspan, int colspan)
	static wxGBSpan* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxGBSpan::wxGBSpan(int rowspan, int colspan) function, expected prototype:\nwxGBSpan::wxGBSpan(int rowspan, int colspan)\nClass arguments details:\n");
		}

		int rowspan=(int)lua_tointeger(L,1);
		int colspan=(int)lua_tointeger(L,2);

		return new wxGBSpan(rowspan, colspan);
	}

	// Overload binder for wxGBSpan::wxGBSpan
	static wxGBSpan* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxGBSpan, cannot match any of the overloads for function wxGBSpan:\n  wxGBSpan()\n  wxGBSpan(int, int)\n");
		return NULL;
	}


	// Function binds:
	// int wxGBSpan::GetColspan() const
	static int _bind_GetColspan(lua_State *L) {
		if (!_lg_typecheck_GetColspan(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGBSpan::GetColspan() const function, expected prototype:\nint wxGBSpan::GetColspan() const\nClass arguments details:\n");
		}


		wxGBSpan* self=(Luna< wxGBSpan >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGBSpan::GetColspan() const");
		}
		int lret = self->GetColspan();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGBSpan::GetRowspan() const
	static int _bind_GetRowspan(lua_State *L) {
		if (!_lg_typecheck_GetRowspan(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxGBSpan::GetRowspan() const function, expected prototype:\nint wxGBSpan::GetRowspan() const\nClass arguments details:\n");
		}


		wxGBSpan* self=(Luna< wxGBSpan >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxGBSpan::GetRowspan() const");
		}
		int lret = self->GetRowspan();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxGBSpan::SetColspan(int colspan)
	static int _bind_SetColspan(lua_State *L) {
		if (!_lg_typecheck_SetColspan(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGBSpan::SetColspan(int colspan) function, expected prototype:\nvoid wxGBSpan::SetColspan(int colspan)\nClass arguments details:\n");
		}

		int colspan=(int)lua_tointeger(L,2);

		wxGBSpan* self=(Luna< wxGBSpan >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGBSpan::SetColspan(int)");
		}
		self->SetColspan(colspan);

		return 0;
	}

	// void wxGBSpan::SetRowspan(int rowspan)
	static int _bind_SetRowspan(lua_State *L) {
		if (!_lg_typecheck_SetRowspan(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxGBSpan::SetRowspan(int rowspan) function, expected prototype:\nvoid wxGBSpan::SetRowspan(int rowspan)\nClass arguments details:\n");
		}

		int rowspan=(int)lua_tointeger(L,2);

		wxGBSpan* self=(Luna< wxGBSpan >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxGBSpan::SetRowspan(int)");
		}
		self->SetRowspan(rowspan);

		return 0;
	}


	// Operator binds:
	// bool wxGBSpan::operator==(const wxGBSpan & o) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxGBSpan::operator==(const wxGBSpan & o) const function, expected prototype:\nbool wxGBSpan::operator==(const wxGBSpan & o) const\nClass arguments details:\narg 1 ID = 97553085\n");
		}

		const wxGBSpan* o_ptr=(Luna< wxGBSpan >::check(L,2));
		if( !o_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg o in wxGBSpan::operator== function");
		}
		const wxGBSpan & o=*o_ptr;

		wxGBSpan* self=(Luna< wxGBSpan >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxGBSpan::operator==(const wxGBSpan &) const");
		}
		bool lret = self->operator==(o);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

wxGBSpan* LunaTraits< wxGBSpan >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGBSpan::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxGBSpan >::_bind_dtor(wxGBSpan* obj) {
	delete obj;
}

const char LunaTraits< wxGBSpan >::className[] = "wxGBSpan";
const char LunaTraits< wxGBSpan >::fullName[] = "wxGBSpan";
const char LunaTraits< wxGBSpan >::moduleName[] = "wx";
const char* LunaTraits< wxGBSpan >::parents[] = {0};
const int LunaTraits< wxGBSpan >::hash = 97553085;
const int LunaTraits< wxGBSpan >::uniqueIDs[] = {97553085,0};

luna_RegType LunaTraits< wxGBSpan >::methods[] = {
	{"GetColspan", &luna_wrapper_wxGBSpan::_bind_GetColspan},
	{"GetRowspan", &luna_wrapper_wxGBSpan::_bind_GetRowspan},
	{"SetColspan", &luna_wrapper_wxGBSpan::_bind_SetColspan},
	{"SetRowspan", &luna_wrapper_wxGBSpan::_bind_SetRowspan},
	{"__eq", &luna_wrapper_wxGBSpan::_bind___eq},
	{"dynCast", &luna_wrapper_wxGBSpan::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxGBSpan >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxGBSpan >::enumValues[] = {
	{0,0}
};



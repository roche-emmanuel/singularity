#include <plug_common.h>

class luna_wrapper_wxDataFormat {
public:
	typedef Luna< wxDataFormat > luna_t;

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

		wxDataFormat* self=(Luna< wxDataFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDataFormat");
		
		return luna_dynamicCast(L,converters,"wxDataFormat",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 2 valid operators)
	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Constructor binds:
	// wxDataFormat::wxDataFormat(unsigned short format = ::wxDF_INVALID)
	static wxDataFormat* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataFormat::wxDataFormat(unsigned short format = ::wxDF_INVALID) function, expected prototype:\nwxDataFormat::wxDataFormat(unsigned short format = ::wxDF_INVALID)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned short format=luatop>0 ? (unsigned short)lua_tointeger(L,1) : ::wxDF_INVALID;

		return new wxDataFormat(format);
	}

	// wxDataFormat::wxDataFormat(const wxString & format)
	static wxDataFormat* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDataFormat::wxDataFormat(const wxString & format) function, expected prototype:\nwxDataFormat::wxDataFormat(const wxString & format)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString format(lua_tostring(L,1),lua_objlen(L,1));

		return new wxDataFormat(format);
	}

	// Overload binder for wxDataFormat::wxDataFormat
	static wxDataFormat* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxDataFormat, cannot match any of the overloads for function wxDataFormat:\n  wxDataFormat(unsigned short)\n  wxDataFormat(const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// wxString wxDataFormat::GetId() const
	static int _bind_GetId(lua_State *L) {
		if (!_lg_typecheck_GetId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDataFormat::GetId() const function, expected prototype:\nwxString wxDataFormat::GetId() const\nClass arguments details:\n");
		}


		wxDataFormat* self=(Luna< wxDataFormat >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDataFormat::GetId() const. Got : '%s'",typeid(Luna< wxDataFormat >::check(L,1)).name());
		}
		wxString lret = self->GetId();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// unsigned short wxDataFormat::GetType() const
	static int _bind_GetType(lua_State *L) {
		if (!_lg_typecheck_GetType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned short wxDataFormat::GetType() const function, expected prototype:\nunsigned short wxDataFormat::GetType() const\nClass arguments details:\n");
		}


		wxDataFormat* self=(Luna< wxDataFormat >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned short wxDataFormat::GetType() const. Got : '%s'",typeid(Luna< wxDataFormat >::check(L,1)).name());
		}
		unsigned short lret = self->GetType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxDataFormat::SetId(const wxString & format)
	static int _bind_SetId(lua_State *L) {
		if (!_lg_typecheck_SetId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataFormat::SetId(const wxString & format) function, expected prototype:\nvoid wxDataFormat::SetId(const wxString & format)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString format(lua_tostring(L,2),lua_objlen(L,2));

		wxDataFormat* self=(Luna< wxDataFormat >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataFormat::SetId(const wxString &). Got : '%s'",typeid(Luna< wxDataFormat >::check(L,1)).name());
		}
		self->SetId(format);

		return 0;
	}

	// void wxDataFormat::SetType(unsigned short type)
	static int _bind_SetType(lua_State *L) {
		if (!_lg_typecheck_SetType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataFormat::SetType(unsigned short type) function, expected prototype:\nvoid wxDataFormat::SetType(unsigned short type)\nClass arguments details:\n");
		}

		unsigned short type=(unsigned short)lua_tointeger(L,2);

		wxDataFormat* self=(Luna< wxDataFormat >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataFormat::SetType(unsigned short). Got : '%s'",typeid(Luna< wxDataFormat >::check(L,1)).name());
		}
		self->SetType(type);

		return 0;
	}


	// Operator binds:
	// bool wxDataFormat::operator!=(unsigned short format) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataFormat::operator!=(unsigned short format) const function, expected prototype:\nbool wxDataFormat::operator!=(unsigned short format) const\nClass arguments details:\n");
		}

		unsigned short format=(unsigned short)lua_tointeger(L,2);

		wxDataFormat* self=(Luna< wxDataFormat >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataFormat::operator!=(unsigned short) const. Got : '%s'",typeid(Luna< wxDataFormat >::check(L,1)).name());
		}
		bool lret = self->operator!=(format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataFormat::operator==(unsigned short format) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDataFormat::operator==(unsigned short format) const function, expected prototype:\nbool wxDataFormat::operator==(unsigned short format) const\nClass arguments details:\n");
		}

		unsigned short format=(unsigned short)lua_tointeger(L,2);

		wxDataFormat* self=(Luna< wxDataFormat >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDataFormat::operator==(unsigned short) const. Got : '%s'",typeid(Luna< wxDataFormat >::check(L,1)).name());
		}
		bool lret = self->operator==(format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

wxDataFormat* LunaTraits< wxDataFormat >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDataFormat::_bind_ctor(L);
}

void LunaTraits< wxDataFormat >::_bind_dtor(wxDataFormat* obj) {
	delete obj;
}

const char LunaTraits< wxDataFormat >::className[] = "wxDataFormat";
const char LunaTraits< wxDataFormat >::fullName[] = "wxDataFormat";
const char LunaTraits< wxDataFormat >::moduleName[] = "wx";
const char* LunaTraits< wxDataFormat >::parents[] = {0};
const int LunaTraits< wxDataFormat >::hash = 9988153;
const int LunaTraits< wxDataFormat >::uniqueIDs[] = {9988153,0};

luna_RegType LunaTraits< wxDataFormat >::methods[] = {
	{"GetId", &luna_wrapper_wxDataFormat::_bind_GetId},
	{"GetType", &luna_wrapper_wxDataFormat::_bind_GetType},
	{"SetId", &luna_wrapper_wxDataFormat::_bind_SetId},
	{"SetType", &luna_wrapper_wxDataFormat::_bind_SetType},
	{"op_neq", &luna_wrapper_wxDataFormat::_bind_op_neq},
	{"__eq", &luna_wrapper_wxDataFormat::_bind___eq},
	{"dynCast", &luna_wrapper_wxDataFormat::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataFormat >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataFormat >::enumValues[] = {
	{0,0}
};



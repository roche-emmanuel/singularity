#include <plug_common.h>

class luna_wrapper_wxDataInputStream {
public:
	typedef Luna< wxDataInputStream > luna_t;

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

		wxDataInputStream* self=(Luna< wxDataInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDataInputStream");
		
		return luna_dynamicCast(L,converters,"wxDataInputStream",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_BigEndianOrdered(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Read8(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Read16_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Read16_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Read32_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Read32_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ReadDouble_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ReadDouble_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ReadString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void wxDataInputStream::BigEndianOrdered(bool be_order)
	static int _bind_BigEndianOrdered(lua_State *L) {
		if (!_lg_typecheck_BigEndianOrdered(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataInputStream::BigEndianOrdered(bool be_order) function, expected prototype:\nvoid wxDataInputStream::BigEndianOrdered(bool be_order)\nClass arguments details:\n");
		}

		bool be_order=(bool)(lua_toboolean(L,2)==1);

		wxDataInputStream* self=(Luna< wxDataInputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataInputStream::BigEndianOrdered(bool)");
		}
		self->BigEndianOrdered(be_order);

		return 0;
	}

	// void wxDataInputStream::Read8(unsigned char * buffer, size_t size)
	static int _bind_Read8(lua_State *L) {
		if (!_lg_typecheck_Read8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataInputStream::Read8(unsigned char * buffer, size_t size) function, expected prototype:\nvoid wxDataInputStream::Read8(unsigned char * buffer, size_t size)\nClass arguments details:\n");
		}

		unsigned char buffer = (unsigned char)(lua_tointeger(L,2));
		size_t size=(size_t)lua_tointeger(L,3);

		wxDataInputStream* self=(Luna< wxDataInputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataInputStream::Read8(unsigned char *, size_t)");
		}
		self->Read8(&buffer, size);

		return 0;
	}

	// unsigned short wxDataInputStream::Read16()
	static int _bind_Read16_overload_1(lua_State *L) {
		if (!_lg_typecheck_Read16_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned short wxDataInputStream::Read16() function, expected prototype:\nunsigned short wxDataInputStream::Read16()\nClass arguments details:\n");
		}


		wxDataInputStream* self=(Luna< wxDataInputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned short wxDataInputStream::Read16()");
		}
		unsigned short lret = self->Read16();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxDataInputStream::Read16(unsigned short * buffer, size_t size)
	static int _bind_Read16_overload_2(lua_State *L) {
		if (!_lg_typecheck_Read16_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataInputStream::Read16(unsigned short * buffer, size_t size) function, expected prototype:\nvoid wxDataInputStream::Read16(unsigned short * buffer, size_t size)\nClass arguments details:\n");
		}

		unsigned short buffer=(unsigned short)lua_tointeger(L,2);
		size_t size=(size_t)lua_tointeger(L,3);

		wxDataInputStream* self=(Luna< wxDataInputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataInputStream::Read16(unsigned short *, size_t)");
		}
		self->Read16(&buffer, size);

		return 0;
	}

	// Overload binder for wxDataInputStream::Read16
	static int _bind_Read16(lua_State *L) {
		if (_lg_typecheck_Read16_overload_1(L)) return _bind_Read16_overload_1(L);
		if (_lg_typecheck_Read16_overload_2(L)) return _bind_Read16_overload_2(L);

		luaL_error(L, "error in function Read16, cannot match any of the overloads for function Read16:\n  Read16()\n  Read16(unsigned short *, size_t)\n");
		return 0;
	}

	// unsigned int wxDataInputStream::Read32()
	static int _bind_Read32_overload_1(lua_State *L) {
		if (!_lg_typecheck_Read32_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxDataInputStream::Read32() function, expected prototype:\nunsigned int wxDataInputStream::Read32()\nClass arguments details:\n");
		}


		wxDataInputStream* self=(Luna< wxDataInputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxDataInputStream::Read32()");
		}
		unsigned int lret = self->Read32();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxDataInputStream::Read32(unsigned int * buffer, size_t size)
	static int _bind_Read32_overload_2(lua_State *L) {
		if (!_lg_typecheck_Read32_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataInputStream::Read32(unsigned int * buffer, size_t size) function, expected prototype:\nvoid wxDataInputStream::Read32(unsigned int * buffer, size_t size)\nClass arguments details:\n");
		}

		unsigned int buffer=(unsigned int)lua_tointeger(L,2);
		size_t size=(size_t)lua_tointeger(L,3);

		wxDataInputStream* self=(Luna< wxDataInputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataInputStream::Read32(unsigned int *, size_t)");
		}
		self->Read32(&buffer, size);

		return 0;
	}

	// Overload binder for wxDataInputStream::Read32
	static int _bind_Read32(lua_State *L) {
		if (_lg_typecheck_Read32_overload_1(L)) return _bind_Read32_overload_1(L);
		if (_lg_typecheck_Read32_overload_2(L)) return _bind_Read32_overload_2(L);

		luaL_error(L, "error in function Read32, cannot match any of the overloads for function Read32:\n  Read32()\n  Read32(unsigned int *, size_t)\n");
		return 0;
	}

	// double wxDataInputStream::ReadDouble()
	static int _bind_ReadDouble_overload_1(lua_State *L) {
		if (!_lg_typecheck_ReadDouble_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double wxDataInputStream::ReadDouble() function, expected prototype:\ndouble wxDataInputStream::ReadDouble()\nClass arguments details:\n");
		}


		wxDataInputStream* self=(Luna< wxDataInputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double wxDataInputStream::ReadDouble()");
		}
		double lret = self->ReadDouble();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxDataInputStream::ReadDouble(double * buffer, size_t size)
	static int _bind_ReadDouble_overload_2(lua_State *L) {
		if (!_lg_typecheck_ReadDouble_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDataInputStream::ReadDouble(double * buffer, size_t size) function, expected prototype:\nvoid wxDataInputStream::ReadDouble(double * buffer, size_t size)\nClass arguments details:\n");
		}

		double buffer=(double)lua_tonumber(L,2);
		size_t size=(size_t)lua_tointeger(L,3);

		wxDataInputStream* self=(Luna< wxDataInputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDataInputStream::ReadDouble(double *, size_t)");
		}
		self->ReadDouble(&buffer, size);

		return 0;
	}

	// Overload binder for wxDataInputStream::ReadDouble
	static int _bind_ReadDouble(lua_State *L) {
		if (_lg_typecheck_ReadDouble_overload_1(L)) return _bind_ReadDouble_overload_1(L);
		if (_lg_typecheck_ReadDouble_overload_2(L)) return _bind_ReadDouble_overload_2(L);

		luaL_error(L, "error in function ReadDouble, cannot match any of the overloads for function ReadDouble:\n  ReadDouble()\n  ReadDouble(double *, size_t)\n");
		return 0;
	}

	// wxString wxDataInputStream::ReadString()
	static int _bind_ReadString(lua_State *L) {
		if (!_lg_typecheck_ReadString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDataInputStream::ReadString() function, expected prototype:\nwxString wxDataInputStream::ReadString()\nClass arguments details:\n");
		}


		wxDataInputStream* self=(Luna< wxDataInputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDataInputStream::ReadString()");
		}
		wxString lret = self->ReadString();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

wxDataInputStream* LunaTraits< wxDataInputStream >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxDataInputStream >::_bind_dtor(wxDataInputStream* obj) {
	delete obj;
}

const char LunaTraits< wxDataInputStream >::className[] = "wxDataInputStream";
const char LunaTraits< wxDataInputStream >::fullName[] = "wxDataInputStream";
const char LunaTraits< wxDataInputStream >::moduleName[] = "wx";
const char* LunaTraits< wxDataInputStream >::parents[] = {0};
const int LunaTraits< wxDataInputStream >::hash = 72882318;
const int LunaTraits< wxDataInputStream >::uniqueIDs[] = {72882318,0};

luna_RegType LunaTraits< wxDataInputStream >::methods[] = {
	{"BigEndianOrdered", &luna_wrapper_wxDataInputStream::_bind_BigEndianOrdered},
	{"Read8", &luna_wrapper_wxDataInputStream::_bind_Read8},
	{"Read16", &luna_wrapper_wxDataInputStream::_bind_Read16},
	{"Read32", &luna_wrapper_wxDataInputStream::_bind_Read32},
	{"ReadDouble", &luna_wrapper_wxDataInputStream::_bind_ReadDouble},
	{"ReadString", &luna_wrapper_wxDataInputStream::_bind_ReadString},
	{"dynCast", &luna_wrapper_wxDataInputStream::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataInputStream >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataInputStream >::enumValues[] = {
	{0,0}
};


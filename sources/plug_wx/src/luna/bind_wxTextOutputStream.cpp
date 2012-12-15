#include <plug_common.h>

#include <luna/wrappers/wrapper_wxTextOutputStream.h>

class luna_wrapper_wxTextOutputStream {
public:
	typedef Luna< wxTextOutputStream > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48327447) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxTextOutputStream*)");
		}

		wxTextOutputStream* rhs =(Luna< wxTextOutputStream >::check(L,2));
		wxTextOutputStream* self=(Luna< wxTextOutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

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

		wxTextOutputStream* self=(Luna< wxTextOutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTextOutputStream");
		
		return luna_dynamicCast(L,converters,"wxTextOutputStream",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_Flush(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOutputStream(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetMode(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Write16(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Write32(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Write8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WriteDouble(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WriteString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_WriteDouble(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_WriteString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void wxTextOutputStream::Flush()
	static int _bind_Flush(lua_State *L) {
		if (!_lg_typecheck_Flush(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextOutputStream::Flush() function, expected prototype:\nvoid wxTextOutputStream::Flush()\nClass arguments details:\n");
		}


		wxTextOutputStream* self=(Luna< wxTextOutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextOutputStream::Flush()");
		}
		self->Flush();

		return 0;
	}

	// const wxOutputStream & wxTextOutputStream::GetOutputStream() const
	static int _bind_GetOutputStream(lua_State *L) {
		if (!_lg_typecheck_GetOutputStream(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxOutputStream & wxTextOutputStream::GetOutputStream() const function, expected prototype:\nconst wxOutputStream & wxTextOutputStream::GetOutputStream() const\nClass arguments details:\n");
		}


		wxTextOutputStream* self=(Luna< wxTextOutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxOutputStream & wxTextOutputStream::GetOutputStream() const");
		}
		const wxOutputStream* lret = &self->GetOutputStream();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxOutputStream >::push(L,lret,false);

		return 1;
	}

	// wxEOL wxTextOutputStream::GetMode()
	static int _bind_GetMode(lua_State *L) {
		if (!_lg_typecheck_GetMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEOL wxTextOutputStream::GetMode() function, expected prototype:\nwxEOL wxTextOutputStream::GetMode()\nClass arguments details:\n");
		}


		wxTextOutputStream* self=(Luna< wxTextOutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEOL wxTextOutputStream::GetMode()");
		}
		wxEOL lret = self->GetMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxTextOutputStream::SetMode(wxEOL mode = ::wxEOL_NATIVE)
	static int _bind_SetMode(lua_State *L) {
		if (!_lg_typecheck_SetMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextOutputStream::SetMode(wxEOL mode = ::wxEOL_NATIVE) function, expected prototype:\nvoid wxTextOutputStream::SetMode(wxEOL mode = ::wxEOL_NATIVE)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxEOL mode=luatop>1 ? (wxEOL)lua_tointeger(L,2) : ::wxEOL_NATIVE;

		wxTextOutputStream* self=(Luna< wxTextOutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextOutputStream::SetMode(wxEOL)");
		}
		self->SetMode(mode);

		return 0;
	}

	// void wxTextOutputStream::Write16(unsigned short i16)
	static int _bind_Write16(lua_State *L) {
		if (!_lg_typecheck_Write16(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextOutputStream::Write16(unsigned short i16) function, expected prototype:\nvoid wxTextOutputStream::Write16(unsigned short i16)\nClass arguments details:\n");
		}

		unsigned short i16=(unsigned short)lua_tointeger(L,2);

		wxTextOutputStream* self=(Luna< wxTextOutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextOutputStream::Write16(unsigned short)");
		}
		self->Write16(i16);

		return 0;
	}

	// void wxTextOutputStream::Write32(unsigned int i32)
	static int _bind_Write32(lua_State *L) {
		if (!_lg_typecheck_Write32(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextOutputStream::Write32(unsigned int i32) function, expected prototype:\nvoid wxTextOutputStream::Write32(unsigned int i32)\nClass arguments details:\n");
		}

		unsigned int i32=(unsigned int)lua_tointeger(L,2);

		wxTextOutputStream* self=(Luna< wxTextOutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextOutputStream::Write32(unsigned int)");
		}
		self->Write32(i32);

		return 0;
	}

	// void wxTextOutputStream::Write8(unsigned char i8)
	static int _bind_Write8(lua_State *L) {
		if (!_lg_typecheck_Write8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextOutputStream::Write8(unsigned char i8) function, expected prototype:\nvoid wxTextOutputStream::Write8(unsigned char i8)\nClass arguments details:\n");
		}

		unsigned char i8 = (unsigned char)(lua_tointeger(L,2));

		wxTextOutputStream* self=(Luna< wxTextOutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextOutputStream::Write8(unsigned char)");
		}
		self->Write8(i8);

		return 0;
	}

	// void wxTextOutputStream::WriteDouble(double f)
	static int _bind_WriteDouble(lua_State *L) {
		if (!_lg_typecheck_WriteDouble(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextOutputStream::WriteDouble(double f) function, expected prototype:\nvoid wxTextOutputStream::WriteDouble(double f)\nClass arguments details:\n");
		}

		double f=(double)lua_tonumber(L,2);

		wxTextOutputStream* self=(Luna< wxTextOutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextOutputStream::WriteDouble(double)");
		}
		self->WriteDouble(f);

		return 0;
	}

	// void wxTextOutputStream::WriteString(const wxString & string)
	static int _bind_WriteString(lua_State *L) {
		if (!_lg_typecheck_WriteString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextOutputStream::WriteString(const wxString & string) function, expected prototype:\nvoid wxTextOutputStream::WriteString(const wxString & string)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString string(lua_tostring(L,2),lua_objlen(L,2));

		wxTextOutputStream* self=(Luna< wxTextOutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextOutputStream::WriteString(const wxString &)");
		}
		self->WriteString(string);

		return 0;
	}

	// void wxTextOutputStream::base_WriteDouble(double f)
	static int _bind_base_WriteDouble(lua_State *L) {
		if (!_lg_typecheck_base_WriteDouble(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextOutputStream::base_WriteDouble(double f) function, expected prototype:\nvoid wxTextOutputStream::base_WriteDouble(double f)\nClass arguments details:\n");
		}

		double f=(double)lua_tonumber(L,2);

		wxTextOutputStream* self=(Luna< wxTextOutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextOutputStream::base_WriteDouble(double)");
		}
		self->wxTextOutputStream::WriteDouble(f);

		return 0;
	}

	// void wxTextOutputStream::base_WriteString(const wxString & string)
	static int _bind_base_WriteString(lua_State *L) {
		if (!_lg_typecheck_base_WriteString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextOutputStream::base_WriteString(const wxString & string) function, expected prototype:\nvoid wxTextOutputStream::base_WriteString(const wxString & string)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString string(lua_tostring(L,2),lua_objlen(L,2));

		wxTextOutputStream* self=(Luna< wxTextOutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextOutputStream::base_WriteString(const wxString &)");
		}
		self->wxTextOutputStream::WriteString(string);

		return 0;
	}


	// Operator binds:

};

wxTextOutputStream* LunaTraits< wxTextOutputStream >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxTextOutputStream >::_bind_dtor(wxTextOutputStream* obj) {
	delete obj;
}

const char LunaTraits< wxTextOutputStream >::className[] = "wxTextOutputStream";
const char LunaTraits< wxTextOutputStream >::fullName[] = "wxTextOutputStream";
const char LunaTraits< wxTextOutputStream >::moduleName[] = "wx";
const char* LunaTraits< wxTextOutputStream >::parents[] = {0};
const int LunaTraits< wxTextOutputStream >::hash = 48327447;
const int LunaTraits< wxTextOutputStream >::uniqueIDs[] = {48327447,0};

luna_RegType LunaTraits< wxTextOutputStream >::methods[] = {
	{"Flush", &luna_wrapper_wxTextOutputStream::_bind_Flush},
	{"GetOutputStream", &luna_wrapper_wxTextOutputStream::_bind_GetOutputStream},
	{"GetMode", &luna_wrapper_wxTextOutputStream::_bind_GetMode},
	{"SetMode", &luna_wrapper_wxTextOutputStream::_bind_SetMode},
	{"Write16", &luna_wrapper_wxTextOutputStream::_bind_Write16},
	{"Write32", &luna_wrapper_wxTextOutputStream::_bind_Write32},
	{"Write8", &luna_wrapper_wxTextOutputStream::_bind_Write8},
	{"WriteDouble", &luna_wrapper_wxTextOutputStream::_bind_WriteDouble},
	{"WriteString", &luna_wrapper_wxTextOutputStream::_bind_WriteString},
	{"base_WriteDouble", &luna_wrapper_wxTextOutputStream::_bind_base_WriteDouble},
	{"base_WriteString", &luna_wrapper_wxTextOutputStream::_bind_base_WriteString},
	{"dynCast", &luna_wrapper_wxTextOutputStream::_bind_dynCast},
	{"__eq", &luna_wrapper_wxTextOutputStream::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxTextOutputStream >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTextOutputStream >::enumValues[] = {
	{0,0}
};



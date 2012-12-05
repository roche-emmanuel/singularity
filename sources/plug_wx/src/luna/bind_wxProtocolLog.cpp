#include <plug_common.h>

#include <luna/wrappers/wrapper_wxProtocolLog.h>

class luna_wrapper_wxProtocolLog {
public:
	typedef Luna< wxProtocolLog > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,45711597) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxProtocolLog*)");
		}

		wxProtocolLog* rhs =(Luna< wxProtocolLog >::check(L,2));
		wxProtocolLog* self=(Luna< wxProtocolLog >::check(L,1));
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

		wxProtocolLog* self=(Luna< wxProtocolLog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxProtocolLog");
		
		return luna_dynamicCast(L,converters,"wxProtocolLog",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_LogRequest(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LogResponse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxProtocolLog::wxProtocolLog(const wxString & traceMask)
	static wxProtocolLog* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxProtocolLog::wxProtocolLog(const wxString & traceMask) function, expected prototype:\nwxProtocolLog::wxProtocolLog(const wxString & traceMask)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString traceMask(lua_tostring(L,1),lua_objlen(L,1));

		return new wxProtocolLog(traceMask);
	}

	// wxProtocolLog::wxProtocolLog(lua_Table * data, const wxString & traceMask)
	static wxProtocolLog* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxProtocolLog::wxProtocolLog(lua_Table * data, const wxString & traceMask) function, expected prototype:\nwxProtocolLog::wxProtocolLog(lua_Table * data, const wxString & traceMask)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		wxString traceMask(lua_tostring(L,2),lua_objlen(L,2));

		return new wrapper_wxProtocolLog(L,NULL, traceMask);
	}

	// Overload binder for wxProtocolLog::wxProtocolLog
	static wxProtocolLog* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxProtocolLog, cannot match any of the overloads for function wxProtocolLog:\n  wxProtocolLog(const wxString &)\n  wxProtocolLog(lua_Table *, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// void wxProtocolLog::LogRequest(const wxString & str)
	static int _bind_LogRequest(lua_State *L) {
		if (!_lg_typecheck_LogRequest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxProtocolLog::LogRequest(const wxString & str) function, expected prototype:\nvoid wxProtocolLog::LogRequest(const wxString & str)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString str(lua_tostring(L,2),lua_objlen(L,2));

		wxProtocolLog* self=(Luna< wxProtocolLog >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxProtocolLog::LogRequest(const wxString &)");
		}
		self->LogRequest(str);

		return 0;
	}

	// void wxProtocolLog::LogResponse(const wxString & str)
	static int _bind_LogResponse(lua_State *L) {
		if (!_lg_typecheck_LogResponse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxProtocolLog::LogResponse(const wxString & str) function, expected prototype:\nvoid wxProtocolLog::LogResponse(const wxString & str)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString str(lua_tostring(L,2),lua_objlen(L,2));

		wxProtocolLog* self=(Luna< wxProtocolLog >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxProtocolLog::LogResponse(const wxString &)");
		}
		self->LogResponse(str);

		return 0;
	}


	// Operator binds:

};

wxProtocolLog* LunaTraits< wxProtocolLog >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxProtocolLog::_bind_ctor(L);
}

void LunaTraits< wxProtocolLog >::_bind_dtor(wxProtocolLog* obj) {
	delete obj;
}

const char LunaTraits< wxProtocolLog >::className[] = "wxProtocolLog";
const char LunaTraits< wxProtocolLog >::fullName[] = "wxProtocolLog";
const char LunaTraits< wxProtocolLog >::moduleName[] = "wx";
const char* LunaTraits< wxProtocolLog >::parents[] = {0};
const int LunaTraits< wxProtocolLog >::hash = 45711597;
const int LunaTraits< wxProtocolLog >::uniqueIDs[] = {45711597,0};

luna_RegType LunaTraits< wxProtocolLog >::methods[] = {
	{"LogRequest", &luna_wrapper_wxProtocolLog::_bind_LogRequest},
	{"LogResponse", &luna_wrapper_wxProtocolLog::_bind_LogResponse},
	{"dynCast", &luna_wrapper_wxProtocolLog::_bind_dynCast},
	{"__eq", &luna_wrapper_wxProtocolLog::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxProtocolLog >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxProtocolLog >::enumValues[] = {
	{0,0}
};



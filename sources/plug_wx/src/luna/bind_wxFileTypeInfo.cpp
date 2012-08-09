#include <plug_common.h>

class luna_wrapper_wxFileTypeInfo {
public:
	typedef Luna< wxFileTypeInfo > luna_t;

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

		wxFileTypeInfo* self=(Luna< wxFileTypeInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxFileTypeInfo");
		
		return luna_dynamicCast(L,converters,"wxFileTypeInfo",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddExtension(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDescription(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetOpenCommand(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPrintCommand(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetShortDesc(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxFileTypeInfo::wxFileTypeInfo()
	static wxFileTypeInfo* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFileTypeInfo::wxFileTypeInfo() function, expected prototype:\nwxFileTypeInfo::wxFileTypeInfo()\nClass arguments details:\n");
		}


		return new wxFileTypeInfo();
	}

	// wxFileTypeInfo::wxFileTypeInfo(const wxString & mimeType)
	static wxFileTypeInfo* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFileTypeInfo::wxFileTypeInfo(const wxString & mimeType) function, expected prototype:\nwxFileTypeInfo::wxFileTypeInfo(const wxString & mimeType)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString mimeType(lua_tostring(L,1),lua_objlen(L,1));

		return new wxFileTypeInfo(mimeType);
	}

	// Overload binder for wxFileTypeInfo::wxFileTypeInfo
	static wxFileTypeInfo* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxFileTypeInfo, cannot match any of the overloads for function wxFileTypeInfo:\n  wxFileTypeInfo()\n  wxFileTypeInfo(const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// void wxFileTypeInfo::AddExtension(const wxString & ext)
	static int _bind_AddExtension(lua_State *L) {
		if (!_lg_typecheck_AddExtension(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileTypeInfo::AddExtension(const wxString & ext) function, expected prototype:\nvoid wxFileTypeInfo::AddExtension(const wxString & ext)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString ext(lua_tostring(L,2),lua_objlen(L,2));

		wxFileTypeInfo* self=(Luna< wxFileTypeInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileTypeInfo::AddExtension(const wxString &)");
		}
		self->AddExtension(ext);

		return 0;
	}

	// void wxFileTypeInfo::SetDescription(const wxString & description)
	static int _bind_SetDescription(lua_State *L) {
		if (!_lg_typecheck_SetDescription(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileTypeInfo::SetDescription(const wxString & description) function, expected prototype:\nvoid wxFileTypeInfo::SetDescription(const wxString & description)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString description(lua_tostring(L,2),lua_objlen(L,2));

		wxFileTypeInfo* self=(Luna< wxFileTypeInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileTypeInfo::SetDescription(const wxString &)");
		}
		self->SetDescription(description);

		return 0;
	}

	// void wxFileTypeInfo::SetOpenCommand(const wxString & command)
	static int _bind_SetOpenCommand(lua_State *L) {
		if (!_lg_typecheck_SetOpenCommand(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileTypeInfo::SetOpenCommand(const wxString & command) function, expected prototype:\nvoid wxFileTypeInfo::SetOpenCommand(const wxString & command)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString command(lua_tostring(L,2),lua_objlen(L,2));

		wxFileTypeInfo* self=(Luna< wxFileTypeInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileTypeInfo::SetOpenCommand(const wxString &)");
		}
		self->SetOpenCommand(command);

		return 0;
	}

	// void wxFileTypeInfo::SetPrintCommand(const wxString & command)
	static int _bind_SetPrintCommand(lua_State *L) {
		if (!_lg_typecheck_SetPrintCommand(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileTypeInfo::SetPrintCommand(const wxString & command) function, expected prototype:\nvoid wxFileTypeInfo::SetPrintCommand(const wxString & command)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString command(lua_tostring(L,2),lua_objlen(L,2));

		wxFileTypeInfo* self=(Luna< wxFileTypeInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileTypeInfo::SetPrintCommand(const wxString &)");
		}
		self->SetPrintCommand(command);

		return 0;
	}

	// void wxFileTypeInfo::SetShortDesc(const wxString & shortDesc)
	static int _bind_SetShortDesc(lua_State *L) {
		if (!_lg_typecheck_SetShortDesc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileTypeInfo::SetShortDesc(const wxString & shortDesc) function, expected prototype:\nvoid wxFileTypeInfo::SetShortDesc(const wxString & shortDesc)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString shortDesc(lua_tostring(L,2),lua_objlen(L,2));

		wxFileTypeInfo* self=(Luna< wxFileTypeInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileTypeInfo::SetShortDesc(const wxString &)");
		}
		self->SetShortDesc(shortDesc);

		return 0;
	}


	// Operator binds:

};

wxFileTypeInfo* LunaTraits< wxFileTypeInfo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFileTypeInfo::_bind_ctor(L);
}

void LunaTraits< wxFileTypeInfo >::_bind_dtor(wxFileTypeInfo* obj) {
	delete obj;
}

const char LunaTraits< wxFileTypeInfo >::className[] = "wxFileTypeInfo";
const char LunaTraits< wxFileTypeInfo >::fullName[] = "wxFileTypeInfo";
const char LunaTraits< wxFileTypeInfo >::moduleName[] = "wx";
const char* LunaTraits< wxFileTypeInfo >::parents[] = {0};
const int LunaTraits< wxFileTypeInfo >::hash = 3858360;
const int LunaTraits< wxFileTypeInfo >::uniqueIDs[] = {3858360,0};

luna_RegType LunaTraits< wxFileTypeInfo >::methods[] = {
	{"AddExtension", &luna_wrapper_wxFileTypeInfo::_bind_AddExtension},
	{"SetDescription", &luna_wrapper_wxFileTypeInfo::_bind_SetDescription},
	{"SetOpenCommand", &luna_wrapper_wxFileTypeInfo::_bind_SetOpenCommand},
	{"SetPrintCommand", &luna_wrapper_wxFileTypeInfo::_bind_SetPrintCommand},
	{"SetShortDesc", &luna_wrapper_wxFileTypeInfo::_bind_SetShortDesc},
	{"dynCast", &luna_wrapper_wxFileTypeInfo::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxFileTypeInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxFileTypeInfo >::enumValues[] = {
	{0,0}
};


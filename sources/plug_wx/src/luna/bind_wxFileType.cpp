#include <plug_common.h>

class luna_wrapper_wxFileType {
public:
	typedef Luna< wxFileType > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53732841) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxFileType*)");
		}

		wxFileType* rhs =(Luna< wxFileType >::check(L,2));
		wxFileType* self=(Luna< wxFileType >::check(L,1));
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

		wxFileType* self=(Luna< wxFileType >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxFileType");
		
		return luna_dynamicCast(L,converters,"wxFileType",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3858360) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetDescription(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetExtensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetIcon(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,82682189)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMimeType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMimeTypes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetOpenCommand(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxFileType::wxFileType(const wxFileTypeInfo & ftInfo)
	static wxFileType* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFileType::wxFileType(const wxFileTypeInfo & ftInfo) function, expected prototype:\nwxFileType::wxFileType(const wxFileTypeInfo & ftInfo)\nClass arguments details:\narg 1 ID = 3858360\n");
		}

		const wxFileTypeInfo* ftInfo_ptr=(Luna< wxFileTypeInfo >::check(L,1));
		if( !ftInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ftInfo in wxFileType::wxFileType function");
		}
		const wxFileTypeInfo & ftInfo=*ftInfo_ptr;

		return new wxFileType(ftInfo);
	}


	// Function binds:
	// bool wxFileType::GetDescription(wxString * desc) const
	static int _bind_GetDescription(lua_State *L) {
		if (!_lg_typecheck_GetDescription(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFileType::GetDescription(wxString * desc) const function, expected prototype:\nbool wxFileType::GetDescription(wxString * desc) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString desc(lua_tostring(L,2),lua_objlen(L,2));

		wxFileType* self=(Luna< wxFileType >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFileType::GetDescription(wxString *) const. Got : '%s'",typeid(Luna< wxFileType >::check(L,1)).name());
		}
		bool lret = self->GetDescription(&desc);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileType::GetExtensions(wxArrayString & extensions)
	static int _bind_GetExtensions(lua_State *L) {
		if (!_lg_typecheck_GetExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFileType::GetExtensions(wxArrayString & extensions) function, expected prototype:\nbool wxFileType::GetExtensions(wxArrayString & extensions)\nClass arguments details:\narg 1 ID = 59507769\n");
		}

		wxArrayString* extensions_ptr=(Luna< wxArrayString >::check(L,2));
		if( !extensions_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg extensions in wxFileType::GetExtensions function");
		}
		wxArrayString & extensions=*extensions_ptr;

		wxFileType* self=(Luna< wxFileType >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFileType::GetExtensions(wxArrayString &). Got : '%s'",typeid(Luna< wxFileType >::check(L,1)).name());
		}
		bool lret = self->GetExtensions(extensions);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileType::GetIcon(wxIconLocation * iconLoc) const
	static int _bind_GetIcon(lua_State *L) {
		if (!_lg_typecheck_GetIcon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFileType::GetIcon(wxIconLocation * iconLoc) const function, expected prototype:\nbool wxFileType::GetIcon(wxIconLocation * iconLoc) const\nClass arguments details:\narg 1 ID = 82682189\n");
		}

		wxIconLocation* iconLoc=(Luna< wxIconLocation >::check(L,2));

		wxFileType* self=(Luna< wxFileType >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFileType::GetIcon(wxIconLocation *) const. Got : '%s'",typeid(Luna< wxFileType >::check(L,1)).name());
		}
		bool lret = self->GetIcon(iconLoc);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileType::GetMimeType(wxString * mimeType) const
	static int _bind_GetMimeType(lua_State *L) {
		if (!_lg_typecheck_GetMimeType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFileType::GetMimeType(wxString * mimeType) const function, expected prototype:\nbool wxFileType::GetMimeType(wxString * mimeType) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString mimeType(lua_tostring(L,2),lua_objlen(L,2));

		wxFileType* self=(Luna< wxFileType >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFileType::GetMimeType(wxString *) const. Got : '%s'",typeid(Luna< wxFileType >::check(L,1)).name());
		}
		bool lret = self->GetMimeType(&mimeType);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileType::GetMimeTypes(wxArrayString & mimeTypes) const
	static int _bind_GetMimeTypes(lua_State *L) {
		if (!_lg_typecheck_GetMimeTypes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFileType::GetMimeTypes(wxArrayString & mimeTypes) const function, expected prototype:\nbool wxFileType::GetMimeTypes(wxArrayString & mimeTypes) const\nClass arguments details:\narg 1 ID = 59507769\n");
		}

		wxArrayString* mimeTypes_ptr=(Luna< wxArrayString >::check(L,2));
		if( !mimeTypes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mimeTypes in wxFileType::GetMimeTypes function");
		}
		wxArrayString & mimeTypes=*mimeTypes_ptr;

		wxFileType* self=(Luna< wxFileType >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFileType::GetMimeTypes(wxArrayString &) const. Got : '%s'",typeid(Luna< wxFileType >::check(L,1)).name());
		}
		bool lret = self->GetMimeTypes(mimeTypes);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxFileType::GetOpenCommand(const wxString & filename) const
	static int _bind_GetOpenCommand(lua_State *L) {
		if (!_lg_typecheck_GetOpenCommand(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxFileType::GetOpenCommand(const wxString & filename) const function, expected prototype:\nwxString wxFileType::GetOpenCommand(const wxString & filename) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));

		wxFileType* self=(Luna< wxFileType >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxFileType::GetOpenCommand(const wxString &) const. Got : '%s'",typeid(Luna< wxFileType >::check(L,1)).name());
		}
		wxString lret = self->GetOpenCommand(filename);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

wxFileType* LunaTraits< wxFileType >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFileType::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxFileType >::_bind_dtor(wxFileType* obj) {
	delete obj;
}

const char LunaTraits< wxFileType >::className[] = "wxFileType";
const char LunaTraits< wxFileType >::fullName[] = "wxFileType";
const char LunaTraits< wxFileType >::moduleName[] = "wx";
const char* LunaTraits< wxFileType >::parents[] = {0};
const int LunaTraits< wxFileType >::hash = 53732841;
const int LunaTraits< wxFileType >::uniqueIDs[] = {53732841,0};

luna_RegType LunaTraits< wxFileType >::methods[] = {
	{"GetDescription", &luna_wrapper_wxFileType::_bind_GetDescription},
	{"GetExtensions", &luna_wrapper_wxFileType::_bind_GetExtensions},
	{"GetIcon", &luna_wrapper_wxFileType::_bind_GetIcon},
	{"GetMimeType", &luna_wrapper_wxFileType::_bind_GetMimeType},
	{"GetMimeTypes", &luna_wrapper_wxFileType::_bind_GetMimeTypes},
	{"GetOpenCommand", &luna_wrapper_wxFileType::_bind_GetOpenCommand},
	{"dynCast", &luna_wrapper_wxFileType::_bind_dynCast},
	{"__eq", &luna_wrapper_wxFileType::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxFileType >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxFileType >::enumValues[] = {
	{0,0}
};



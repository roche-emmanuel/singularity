#include <plug_common.h>

class luna_wrapper_wxPGValidationInfo {
public:
	typedef Luna< wxPGValidationInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78254748) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxPGValidationInfo*)");
		}

		wxPGValidationInfo* rhs =(Luna< wxPGValidationInfo >::check(L,2));
		wxPGValidationInfo* self=(Luna< wxPGValidationInfo >::check(L,1));
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

		wxPGValidationInfo* self=(Luna< wxPGValidationInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxPGValidationInfo");
		
		return luna_dynamicCast(L,converters,"wxPGValidationInfo",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_GetFailureMessage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFailureBehavior(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFailureMessage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// const wxString & wxPGValidationInfo::GetFailureMessage() const
	static int _bind_GetFailureMessage(lua_State *L) {
		if (!_lg_typecheck_GetFailureMessage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxPGValidationInfo::GetFailureMessage() const function, expected prototype:\nconst wxString & wxPGValidationInfo::GetFailureMessage() const\nClass arguments details:\n");
		}


		wxPGValidationInfo* self=(Luna< wxPGValidationInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxPGValidationInfo::GetFailureMessage() const");
		}
		const wxString & lret = self->GetFailureMessage();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxPGValidationInfo::SetFailureBehavior(unsigned char failureBehavior)
	static int _bind_SetFailureBehavior(lua_State *L) {
		if (!_lg_typecheck_SetFailureBehavior(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPGValidationInfo::SetFailureBehavior(unsigned char failureBehavior) function, expected prototype:\nvoid wxPGValidationInfo::SetFailureBehavior(unsigned char failureBehavior)\nClass arguments details:\n");
		}

		unsigned char failureBehavior = (unsigned char)(lua_tointeger(L,2));

		wxPGValidationInfo* self=(Luna< wxPGValidationInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPGValidationInfo::SetFailureBehavior(unsigned char)");
		}
		self->SetFailureBehavior(failureBehavior);

		return 0;
	}

	// void wxPGValidationInfo::SetFailureMessage(const wxString & message)
	static int _bind_SetFailureMessage(lua_State *L) {
		if (!_lg_typecheck_SetFailureMessage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPGValidationInfo::SetFailureMessage(const wxString & message) function, expected prototype:\nvoid wxPGValidationInfo::SetFailureMessage(const wxString & message)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString message(lua_tostring(L,2),lua_objlen(L,2));

		wxPGValidationInfo* self=(Luna< wxPGValidationInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPGValidationInfo::SetFailureMessage(const wxString &)");
		}
		self->SetFailureMessage(message);

		return 0;
	}


	// Operator binds:

};

wxPGValidationInfo* LunaTraits< wxPGValidationInfo >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxPGValidationInfo >::_bind_dtor(wxPGValidationInfo* obj) {
	delete obj;
}

const char LunaTraits< wxPGValidationInfo >::className[] = "wxPGValidationInfo";
const char LunaTraits< wxPGValidationInfo >::fullName[] = "wxPGValidationInfo";
const char LunaTraits< wxPGValidationInfo >::moduleName[] = "wx";
const char* LunaTraits< wxPGValidationInfo >::parents[] = {0};
const int LunaTraits< wxPGValidationInfo >::hash = 78254748;
const int LunaTraits< wxPGValidationInfo >::uniqueIDs[] = {78254748,0};

luna_RegType LunaTraits< wxPGValidationInfo >::methods[] = {
	{"GetFailureMessage", &luna_wrapper_wxPGValidationInfo::_bind_GetFailureMessage},
	{"SetFailureBehavior", &luna_wrapper_wxPGValidationInfo::_bind_SetFailureBehavior},
	{"SetFailureMessage", &luna_wrapper_wxPGValidationInfo::_bind_SetFailureMessage},
	{"dynCast", &luna_wrapper_wxPGValidationInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_wxPGValidationInfo::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxPGValidationInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxPGValidationInfo >::enumValues[] = {
	{0,0}
};



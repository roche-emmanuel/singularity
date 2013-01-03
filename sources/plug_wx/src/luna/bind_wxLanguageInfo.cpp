#include <plug_common.h>

class luna_wrapper_wxLanguageInfo {
public:
	typedef Luna< wxLanguageInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,23681138) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxLanguageInfo*)");
		}

		wxLanguageInfo* rhs =(Luna< wxLanguageInfo >::check(L,2));
		wxLanguageInfo* self=(Luna< wxLanguageInfo >::check(L,1));
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

		wxLanguageInfo* self=(Luna< wxLanguageInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxLanguageInfo");
		
		return luna_dynamicCast(L,converters,"wxLanguageInfo",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_GetLCID(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLocaleName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned int wxLanguageInfo::GetLCID() const
	static int _bind_GetLCID(lua_State *L) {
		if (!_lg_typecheck_GetLCID(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxLanguageInfo::GetLCID() const function, expected prototype:\nunsigned int wxLanguageInfo::GetLCID() const\nClass arguments details:\n");
		}


		wxLanguageInfo* self=(Luna< wxLanguageInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxLanguageInfo::GetLCID() const. Got : '%s'",typeid(Luna< wxLanguageInfo >::check(L,1)).name());
		}
		unsigned int lret = self->GetLCID();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxLanguageInfo::GetLocaleName() const
	static int _bind_GetLocaleName(lua_State *L) {
		if (!_lg_typecheck_GetLocaleName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxLanguageInfo::GetLocaleName() const function, expected prototype:\nwxString wxLanguageInfo::GetLocaleName() const\nClass arguments details:\n");
		}


		wxLanguageInfo* self=(Luna< wxLanguageInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxLanguageInfo::GetLocaleName() const. Got : '%s'",typeid(Luna< wxLanguageInfo >::check(L,1)).name());
		}
		wxString lret = self->GetLocaleName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

wxLanguageInfo* LunaTraits< wxLanguageInfo >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxLanguageInfo >::_bind_dtor(wxLanguageInfo* obj) {
	delete obj;
}

const char LunaTraits< wxLanguageInfo >::className[] = "wxLanguageInfo";
const char LunaTraits< wxLanguageInfo >::fullName[] = "wxLanguageInfo";
const char LunaTraits< wxLanguageInfo >::moduleName[] = "wx";
const char* LunaTraits< wxLanguageInfo >::parents[] = {0};
const int LunaTraits< wxLanguageInfo >::hash = 23681138;
const int LunaTraits< wxLanguageInfo >::uniqueIDs[] = {23681138,0};

luna_RegType LunaTraits< wxLanguageInfo >::methods[] = {
	{"GetLCID", &luna_wrapper_wxLanguageInfo::_bind_GetLCID},
	{"GetLocaleName", &luna_wrapper_wxLanguageInfo::_bind_GetLocaleName},
	{"dynCast", &luna_wrapper_wxLanguageInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_wxLanguageInfo::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxLanguageInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxLanguageInfo >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

class luna_wrapper_wxLogRecordInfo {
public:
	typedef Luna< wxLogRecordInfo > luna_t;

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

		wxLogRecordInfo* self=(Luna< wxLogRecordInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxLogRecordInfo");
		
		return luna_dynamicCast(L,converters,"wxLogRecordInfo",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxLogRecordInfo* LunaTraits< wxLogRecordInfo >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxLogRecordInfo >::_bind_dtor(wxLogRecordInfo* obj) {
	delete obj;
}

const char LunaTraits< wxLogRecordInfo >::className[] = "wxLogRecordInfo";
const char LunaTraits< wxLogRecordInfo >::fullName[] = "wxLogRecordInfo";
const char LunaTraits< wxLogRecordInfo >::moduleName[] = "wx";
const char* LunaTraits< wxLogRecordInfo >::parents[] = {0};
const int LunaTraits< wxLogRecordInfo >::hash = 82105951;
const int LunaTraits< wxLogRecordInfo >::uniqueIDs[] = {82105951,0};

luna_RegType LunaTraits< wxLogRecordInfo >::methods[] = {
	{"dynCast", &luna_wrapper_wxLogRecordInfo::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxLogRecordInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxLogRecordInfo >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

class luna_wrapper_wxDateTimeWorkDays {
public:
	typedef Luna< wxDateTimeWorkDays > luna_t;

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

		wxDateTimeWorkDays* self=(Luna< wxDateTimeWorkDays >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDateTimeWorkDays");
		
		return luna_dynamicCast(L,converters,"wxDateTimeWorkDays",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxDateTimeWorkDays* LunaTraits< wxDateTimeWorkDays >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxDateTimeWorkDays >::_bind_dtor(wxDateTimeWorkDays* obj) {
	delete obj;
}

const char LunaTraits< wxDateTimeWorkDays >::className[] = "wxDateTimeWorkDays";
const char LunaTraits< wxDateTimeWorkDays >::fullName[] = "wxDateTimeWorkDays";
const char LunaTraits< wxDateTimeWorkDays >::moduleName[] = "wx";
const char* LunaTraits< wxDateTimeWorkDays >::parents[] = {0};
const int LunaTraits< wxDateTimeWorkDays >::hash = 97008810;
const int LunaTraits< wxDateTimeWorkDays >::uniqueIDs[] = {97008810,0};

luna_RegType LunaTraits< wxDateTimeWorkDays >::methods[] = {
	{"dynCast", &luna_wrapper_wxDateTimeWorkDays::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxDateTimeWorkDays >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDateTimeWorkDays >::enumValues[] = {
	{0,0}
};



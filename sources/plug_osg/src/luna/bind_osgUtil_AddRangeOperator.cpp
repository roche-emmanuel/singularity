#include <plug_common.h>

class luna_wrapper_osgUtil_AddRangeOperator {
public:
	typedef Luna< osgUtil::AddRangeOperator > luna_t;

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

		osgUtil::AddRangeOperator* self=(Luna< osgUtil::AddRangeOperator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::AddRangeOperator");
		
		return luna_dynamicCast(L,converters,"osgUtil::AddRangeOperator",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::AddRangeOperator* LunaTraits< osgUtil::AddRangeOperator >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::AddRangeOperator >::_bind_dtor(osgUtil::AddRangeOperator* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::AddRangeOperator >::className[] = "AddRangeOperator";
const char LunaTraits< osgUtil::AddRangeOperator >::fullName[] = "osgUtil::AddRangeOperator";
const char LunaTraits< osgUtil::AddRangeOperator >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::AddRangeOperator >::parents[] = {0};
const int LunaTraits< osgUtil::AddRangeOperator >::hash = 12139482;
const int LunaTraits< osgUtil::AddRangeOperator >::uniqueIDs[] = {12139482,0};

luna_RegType LunaTraits< osgUtil::AddRangeOperator >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_AddRangeOperator::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::AddRangeOperator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::AddRangeOperator >::enumValues[] = {
	{0,0}
};



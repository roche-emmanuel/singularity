#include <plug_common.h>

class luna_wrapper_osgUtil_dereference_less {
public:
	typedef Luna< osgUtil::dereference_less > luna_t;

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

		osgUtil::dereference_less* self=(Luna< osgUtil::dereference_less >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::dereference_less");
		
		return luna_dynamicCast(L,converters,"osgUtil::dereference_less",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::dereference_less* LunaTraits< osgUtil::dereference_less >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::dereference_less >::_bind_dtor(osgUtil::dereference_less* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::dereference_less >::className[] = "dereference_less";
const char LunaTraits< osgUtil::dereference_less >::fullName[] = "osgUtil::dereference_less";
const char LunaTraits< osgUtil::dereference_less >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::dereference_less >::parents[] = {0};
const int LunaTraits< osgUtil::dereference_less >::hash = 4191371;
const int LunaTraits< osgUtil::dereference_less >::uniqueIDs[] = {4191371,0};

luna_RegType LunaTraits< osgUtil::dereference_less >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_dereference_less::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::dereference_less >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::dereference_less >::enumValues[] = {
	{0,0}
};



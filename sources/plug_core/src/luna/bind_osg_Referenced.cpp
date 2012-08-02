#include <plug_common.h>

class luna_wrapper_osg_Referenced {
public:
	typedef Luna< osg::Referenced > luna_t;

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

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Referenced");
		
		return luna_dynamicCast(L,converters,"osg::Referenced",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Referenced* LunaTraits< osg::Referenced >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::Referenced >::_bind_dtor(osg::Referenced* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::Referenced >::className[] = "Referenced";
const char LunaTraits< osg::Referenced >::fullName[] = "osg::Referenced";
const char LunaTraits< osg::Referenced >::moduleName[] = "core";
const char* LunaTraits< osg::Referenced >::parents[] = {0};
const int LunaTraits< osg::Referenced >::hash = 50169651;
const int LunaTraits< osg::Referenced >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Referenced >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Referenced::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Referenced >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Referenced >::enumValues[] = {
	{0,0}
};



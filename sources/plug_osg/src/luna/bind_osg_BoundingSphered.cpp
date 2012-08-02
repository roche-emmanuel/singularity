#include <plug_common.h>

class luna_wrapper_osg_BoundingSphered {
public:
	typedef Luna< osg::BoundingSphered > luna_t;

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

		osg::BoundingSphered* self=(Luna< osg::BoundingSphered >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::BoundingSphered");
		
		return luna_dynamicCast(L,converters,"osg::BoundingSphered",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::BoundingSphered* LunaTraits< osg::BoundingSphered >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::BoundingSphered >::_bind_dtor(osg::BoundingSphered* obj) {
	delete obj;
}

const char LunaTraits< osg::BoundingSphered >::className[] = "BoundingSphered";
const char LunaTraits< osg::BoundingSphered >::fullName[] = "osg::BoundingSphered";
const char LunaTraits< osg::BoundingSphered >::moduleName[] = "osg";
const char* LunaTraits< osg::BoundingSphered >::parents[] = {0};
const int LunaTraits< osg::BoundingSphered >::hash = 54337300;
const int LunaTraits< osg::BoundingSphered >::uniqueIDs[] = {54337300,0};

luna_RegType LunaTraits< osg::BoundingSphered >::methods[] = {
	{"dynCast", &luna_wrapper_osg_BoundingSphered::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::BoundingSphered >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::BoundingSphered >::enumValues[] = {
	{0,0}
};



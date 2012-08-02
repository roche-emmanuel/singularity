#include <plug_common.h>

class luna_wrapper_osg_Vec2dValueObject {
public:
	typedef Luna< osg::Vec2dValueObject > luna_t;

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

		osg::Vec2dValueObject* self=(Luna< osg::Vec2dValueObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Vec2dValueObject");
		
		return luna_dynamicCast(L,converters,"osg::Vec2dValueObject",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Vec2dValueObject* LunaTraits< osg::Vec2dValueObject >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::Vec2dValueObject >::_bind_dtor(osg::Vec2dValueObject* obj) {
	delete obj;
}

const char LunaTraits< osg::Vec2dValueObject >::className[] = "Vec2dValueObject";
const char LunaTraits< osg::Vec2dValueObject >::fullName[] = "osg::Vec2dValueObject";
const char LunaTraits< osg::Vec2dValueObject >::moduleName[] = "osg";
const char* LunaTraits< osg::Vec2dValueObject >::parents[] = {0};
const int LunaTraits< osg::Vec2dValueObject >::hash = 40755179;
const int LunaTraits< osg::Vec2dValueObject >::uniqueIDs[] = {40755179,0};

luna_RegType LunaTraits< osg::Vec2dValueObject >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Vec2dValueObject::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Vec2dValueObject >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Vec2dValueObject >::enumValues[] = {
	{0,0}
};



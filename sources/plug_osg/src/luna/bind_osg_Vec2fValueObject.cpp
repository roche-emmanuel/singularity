#include <plug_common.h>

class luna_wrapper_osg_Vec2fValueObject {
public:
	typedef Luna< osg::Vec2fValueObject > luna_t;

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

		osg::Vec2fValueObject* self=(Luna< osg::Vec2fValueObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Vec2fValueObject");
		
		return luna_dynamicCast(L,converters,"osg::Vec2fValueObject",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Vec2fValueObject* LunaTraits< osg::Vec2fValueObject >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::Vec2fValueObject >::_bind_dtor(osg::Vec2fValueObject* obj) {
	delete obj;
}

const char LunaTraits< osg::Vec2fValueObject >::className[] = "Vec2fValueObject";
const char LunaTraits< osg::Vec2fValueObject >::fullName[] = "osg::Vec2fValueObject";
const char LunaTraits< osg::Vec2fValueObject >::moduleName[] = "osg";
const char* LunaTraits< osg::Vec2fValueObject >::parents[] = {0};
const int LunaTraits< osg::Vec2fValueObject >::hash = 9780955;
const int LunaTraits< osg::Vec2fValueObject >::uniqueIDs[] = {9780955,0};

luna_RegType LunaTraits< osg::Vec2fValueObject >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Vec2fValueObject::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Vec2fValueObject >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Vec2fValueObject >::enumValues[] = {
	{0,0}
};



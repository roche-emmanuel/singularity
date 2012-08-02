#include <plug_common.h>

class luna_wrapper_osg_IntValueObject {
public:
	typedef Luna< osg::IntValueObject > luna_t;

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

		osg::IntValueObject* self=(Luna< osg::IntValueObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::IntValueObject");
		
		return luna_dynamicCast(L,converters,"osg::IntValueObject",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::IntValueObject* LunaTraits< osg::IntValueObject >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::IntValueObject >::_bind_dtor(osg::IntValueObject* obj) {
	delete obj;
}

const char LunaTraits< osg::IntValueObject >::className[] = "IntValueObject";
const char LunaTraits< osg::IntValueObject >::fullName[] = "osg::IntValueObject";
const char LunaTraits< osg::IntValueObject >::moduleName[] = "osg";
const char* LunaTraits< osg::IntValueObject >::parents[] = {0};
const int LunaTraits< osg::IntValueObject >::hash = 37099841;
const int LunaTraits< osg::IntValueObject >::uniqueIDs[] = {37099841,0};

luna_RegType LunaTraits< osg::IntValueObject >::methods[] = {
	{"dynCast", &luna_wrapper_osg_IntValueObject::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::IntValueObject >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::IntValueObject >::enumValues[] = {
	{0,0}
};



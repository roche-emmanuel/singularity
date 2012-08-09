#include <plug_common.h>

class luna_wrapper_osg_DoubleValueObject {
public:
	typedef Luna< osg::DoubleValueObject > luna_t;

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

		osg::DoubleValueObject* self=(Luna< osg::DoubleValueObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::DoubleValueObject");
		
		return luna_dynamicCast(L,converters,"osg::DoubleValueObject",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::DoubleValueObject* LunaTraits< osg::DoubleValueObject >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::DoubleValueObject >::_bind_dtor(osg::DoubleValueObject* obj) {
	delete obj;
}

const char LunaTraits< osg::DoubleValueObject >::className[] = "DoubleValueObject";
const char LunaTraits< osg::DoubleValueObject >::fullName[] = "osg::DoubleValueObject";
const char LunaTraits< osg::DoubleValueObject >::moduleName[] = "osg";
const char* LunaTraits< osg::DoubleValueObject >::parents[] = {0};
const int LunaTraits< osg::DoubleValueObject >::hash = 23601808;
const int LunaTraits< osg::DoubleValueObject >::uniqueIDs[] = {23601808,0};

luna_RegType LunaTraits< osg::DoubleValueObject >::methods[] = {
	{"dynCast", &luna_wrapper_osg_DoubleValueObject::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::DoubleValueObject >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::DoubleValueObject >::enumValues[] = {
	{0,0}
};


#include <plug_common.h>

class luna_wrapper_osg_UShortValueObject {
public:
	typedef Luna< osg::UShortValueObject > luna_t;

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

		osg::UShortValueObject* self=(Luna< osg::UShortValueObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::UShortValueObject");
		
		return luna_dynamicCast(L,converters,"osg::UShortValueObject",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::UShortValueObject* LunaTraits< osg::UShortValueObject >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::UShortValueObject >::_bind_dtor(osg::UShortValueObject* obj) {
	delete obj;
}

const char LunaTraits< osg::UShortValueObject >::className[] = "UShortValueObject";
const char LunaTraits< osg::UShortValueObject >::fullName[] = "osg::UShortValueObject";
const char LunaTraits< osg::UShortValueObject >::moduleName[] = "osg";
const char* LunaTraits< osg::UShortValueObject >::parents[] = {0};
const int LunaTraits< osg::UShortValueObject >::hash = 26732852;
const int LunaTraits< osg::UShortValueObject >::uniqueIDs[] = {26732852,0};

luna_RegType LunaTraits< osg::UShortValueObject >::methods[] = {
	{"dynCast", &luna_wrapper_osg_UShortValueObject::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::UShortValueObject >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::UShortValueObject >::enumValues[] = {
	{0,0}
};



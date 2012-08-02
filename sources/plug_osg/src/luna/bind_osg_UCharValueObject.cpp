#include <plug_common.h>

class luna_wrapper_osg_UCharValueObject {
public:
	typedef Luna< osg::UCharValueObject > luna_t;

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

		osg::UCharValueObject* self=(Luna< osg::UCharValueObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::UCharValueObject");
		
		return luna_dynamicCast(L,converters,"osg::UCharValueObject",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::UCharValueObject* LunaTraits< osg::UCharValueObject >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::UCharValueObject >::_bind_dtor(osg::UCharValueObject* obj) {
	delete obj;
}

const char LunaTraits< osg::UCharValueObject >::className[] = "UCharValueObject";
const char LunaTraits< osg::UCharValueObject >::fullName[] = "osg::UCharValueObject";
const char LunaTraits< osg::UCharValueObject >::moduleName[] = "osg";
const char* LunaTraits< osg::UCharValueObject >::parents[] = {0};
const int LunaTraits< osg::UCharValueObject >::hash = 43245321;
const int LunaTraits< osg::UCharValueObject >::uniqueIDs[] = {43245321,0};

luna_RegType LunaTraits< osg::UCharValueObject >::methods[] = {
	{"dynCast", &luna_wrapper_osg_UCharValueObject::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::UCharValueObject >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::UCharValueObject >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

class luna_wrapper_osg_QuatValueObject {
public:
	typedef Luna< osg::QuatValueObject > luna_t;

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

		osg::QuatValueObject* self=(Luna< osg::QuatValueObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::QuatValueObject");
		
		return luna_dynamicCast(L,converters,"osg::QuatValueObject",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::QuatValueObject* LunaTraits< osg::QuatValueObject >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::QuatValueObject >::_bind_dtor(osg::QuatValueObject* obj) {
	delete obj;
}

const char LunaTraits< osg::QuatValueObject >::className[] = "QuatValueObject";
const char LunaTraits< osg::QuatValueObject >::fullName[] = "osg::QuatValueObject";
const char LunaTraits< osg::QuatValueObject >::moduleName[] = "osg";
const char* LunaTraits< osg::QuatValueObject >::parents[] = {0};
const int LunaTraits< osg::QuatValueObject >::hash = 57401373;
const int LunaTraits< osg::QuatValueObject >::uniqueIDs[] = {57401373,0};

luna_RegType LunaTraits< osg::QuatValueObject >::methods[] = {
	{"dynCast", &luna_wrapper_osg_QuatValueObject::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::QuatValueObject >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::QuatValueObject >::enumValues[] = {
	{0,0}
};



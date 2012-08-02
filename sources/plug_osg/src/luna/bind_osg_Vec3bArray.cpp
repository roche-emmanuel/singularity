#include <plug_common.h>

class luna_wrapper_osg_Vec3bArray {
public:
	typedef Luna< osg::Vec3bArray > luna_t;

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

		osg::Vec3bArray* self=(Luna< osg::Vec3bArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Vec3bArray");
		
		return luna_dynamicCast(L,converters,"osg::Vec3bArray",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Vec3bArray* LunaTraits< osg::Vec3bArray >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::Vec3bArray >::_bind_dtor(osg::Vec3bArray* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::Vec3bArray >::className[] = "Vec3bArray";
const char LunaTraits< osg::Vec3bArray >::fullName[] = "osg::Vec3bArray";
const char LunaTraits< osg::Vec3bArray >::moduleName[] = "osg";
const char* LunaTraits< osg::Vec3bArray >::parents[] = {0};
const int LunaTraits< osg::Vec3bArray >::hash = 22871013;
const int LunaTraits< osg::Vec3bArray >::uniqueIDs[] = {22871013,0};

luna_RegType LunaTraits< osg::Vec3bArray >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Vec3bArray::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Vec3bArray >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Vec3bArray >::enumValues[] = {
	{0,0}
};



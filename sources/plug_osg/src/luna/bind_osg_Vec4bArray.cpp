#include <plug_common.h>

class luna_wrapper_osg_Vec4bArray {
public:
	typedef Luna< osg::Vec4bArray > luna_t;

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

		osg::Vec4bArray* self=(Luna< osg::Vec4bArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Vec4bArray");
		
		return luna_dynamicCast(L,converters,"osg::Vec4bArray",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Vec4bArray* LunaTraits< osg::Vec4bArray >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::Vec4bArray >::_bind_dtor(osg::Vec4bArray* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::Vec4bArray >::className[] = "Vec4bArray";
const char LunaTraits< osg::Vec4bArray >::fullName[] = "osg::Vec4bArray";
const char LunaTraits< osg::Vec4bArray >::moduleName[] = "osg";
const char* LunaTraits< osg::Vec4bArray >::parents[] = {0};
const int LunaTraits< osg::Vec4bArray >::hash = 10374559;
const int LunaTraits< osg::Vec4bArray >::uniqueIDs[] = {10374559,0};

luna_RegType LunaTraits< osg::Vec4bArray >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Vec4bArray::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Vec4bArray >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Vec4bArray >::enumValues[] = {
	{0,0}
};



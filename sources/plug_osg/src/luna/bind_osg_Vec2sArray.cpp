#include <plug_common.h>

class luna_wrapper_osg_Vec2sArray {
public:
	typedef Luna< osg::Vec2sArray > luna_t;

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

		osg::Vec2sArray* self=(Luna< osg::Vec2sArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Vec2sArray");
		
		return luna_dynamicCast(L,converters,"osg::Vec2sArray",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Vec2sArray* LunaTraits< osg::Vec2sArray >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::Vec2sArray >::_bind_dtor(osg::Vec2sArray* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::Vec2sArray >::className[] = "Vec2sArray";
const char LunaTraits< osg::Vec2sArray >::fullName[] = "osg::Vec2sArray";
const char LunaTraits< osg::Vec2sArray >::moduleName[] = "osg";
const char* LunaTraits< osg::Vec2sArray >::parents[] = {0};
const int LunaTraits< osg::Vec2sArray >::hash = 22062959;
const int LunaTraits< osg::Vec2sArray >::uniqueIDs[] = {22062959,0};

luna_RegType LunaTraits< osg::Vec2sArray >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Vec2sArray::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Vec2sArray >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Vec2sArray >::enumValues[] = {
	{0,0}
};



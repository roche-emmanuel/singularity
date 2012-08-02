#include <plug_common.h>

class luna_wrapper_osg_IntArray {
public:
	typedef Luna< osg::IntArray > luna_t;

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

		osg::IntArray* self=(Luna< osg::IntArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::IntArray");
		
		return luna_dynamicCast(L,converters,"osg::IntArray",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::IntArray* LunaTraits< osg::IntArray >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::IntArray >::_bind_dtor(osg::IntArray* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::IntArray >::className[] = "IntArray";
const char LunaTraits< osg::IntArray >::fullName[] = "osg::IntArray";
const char LunaTraits< osg::IntArray >::moduleName[] = "osg";
const char* LunaTraits< osg::IntArray >::parents[] = {0};
const int LunaTraits< osg::IntArray >::hash = 28130065;
const int LunaTraits< osg::IntArray >::uniqueIDs[] = {28130065,0};

luna_RegType LunaTraits< osg::IntArray >::methods[] = {
	{"dynCast", &luna_wrapper_osg_IntArray::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::IntArray >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::IntArray >::enumValues[] = {
	{0,0}
};



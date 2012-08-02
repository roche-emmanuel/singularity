#include <plug_common.h>

class luna_wrapper_osg_UShortArray {
public:
	typedef Luna< osg::UShortArray > luna_t;

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

		osg::UShortArray* self=(Luna< osg::UShortArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::UShortArray");
		
		return luna_dynamicCast(L,converters,"osg::UShortArray",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::UShortArray* LunaTraits< osg::UShortArray >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::UShortArray >::_bind_dtor(osg::UShortArray* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::UShortArray >::className[] = "UShortArray";
const char LunaTraits< osg::UShortArray >::fullName[] = "osg::UShortArray";
const char LunaTraits< osg::UShortArray >::moduleName[] = "osg";
const char* LunaTraits< osg::UShortArray >::parents[] = {0};
const int LunaTraits< osg::UShortArray >::hash = 4787198;
const int LunaTraits< osg::UShortArray >::uniqueIDs[] = {4787198,0};

luna_RegType LunaTraits< osg::UShortArray >::methods[] = {
	{"dynCast", &luna_wrapper_osg_UShortArray::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::UShortArray >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::UShortArray >::enumValues[] = {
	{0,0}
};



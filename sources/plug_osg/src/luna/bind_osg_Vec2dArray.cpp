#include <plug_common.h>

class luna_wrapper_osg_Vec2dArray {
public:
	typedef Luna< osg::Vec2dArray > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92625769) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Vec2dArray*)");
		}

		osg::Vec2dArray* rhs =(Luna< osg::Vec2dArray >::check(L,2));
		osg::Vec2dArray* self=(Luna< osg::Vec2dArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

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

		osg::Vec2dArray* self=(Luna< osg::Vec2dArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Vec2dArray");
		
		return luna_dynamicCast(L,converters,"osg::Vec2dArray",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Vec2dArray* LunaTraits< osg::Vec2dArray >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::Vec2dArray >::_bind_dtor(osg::Vec2dArray* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::Vec2dArray >::className[] = "Vec2dArray";
const char LunaTraits< osg::Vec2dArray >::fullName[] = "osg::Vec2dArray";
const char LunaTraits< osg::Vec2dArray >::moduleName[] = "osg";
const char* LunaTraits< osg::Vec2dArray >::parents[] = {0};
const int LunaTraits< osg::Vec2dArray >::hash = 92625769;
const int LunaTraits< osg::Vec2dArray >::uniqueIDs[] = {92625769,0};

luna_RegType LunaTraits< osg::Vec2dArray >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Vec2dArray::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Vec2dArray::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Vec2dArray >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Vec2dArray >::enumValues[] = {
	{0,0}
};



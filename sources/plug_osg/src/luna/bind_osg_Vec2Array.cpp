#include <plug_common.h>

class luna_wrapper_osg_Vec2Array {
public:
	typedef Luna< osg::Vec2Array > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78575573) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Vec2Array*)");
		}

		osg::Vec2Array* rhs =(Luna< osg::Vec2Array >::check(L,2));
		osg::Vec2Array* self=(Luna< osg::Vec2Array >::check(L,1));
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

		osg::Vec2Array* self=(Luna< osg::Vec2Array >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Vec2Array");
		
		return luna_dynamicCast(L,converters,"osg::Vec2Array",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::Vec2Array* LunaTraits< osg::Vec2Array >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::Vec2Array >::_bind_dtor(osg::Vec2Array* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osg::Vec2Array >::className[] = "Vec2Array";
const char LunaTraits< osg::Vec2Array >::fullName[] = "osg::Vec2Array";
const char LunaTraits< osg::Vec2Array >::moduleName[] = "osg";
const char* LunaTraits< osg::Vec2Array >::parents[] = {0};
const int LunaTraits< osg::Vec2Array >::hash = 78575573;
const int LunaTraits< osg::Vec2Array >::uniqueIDs[] = {78575573,0};

luna_RegType LunaTraits< osg::Vec2Array >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Vec2Array::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Vec2Array::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Vec2Array >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Vec2Array >::enumValues[] = {
	{0,0}
};



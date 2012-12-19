#include <plug_common.h>

class luna_wrapper_osg_BoundingSpheref {
public:
	typedef Luna< osg::BoundingSpheref > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,54337302) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::BoundingSpheref*)");
		}

		osg::BoundingSpheref* rhs =(Luna< osg::BoundingSpheref >::check(L,2));
		osg::BoundingSpheref* self=(Luna< osg::BoundingSpheref >::check(L,1));
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

		osg::BoundingSpheref* self=(Luna< osg::BoundingSpheref >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::BoundingSpheref");
		
		return luna_dynamicCast(L,converters,"osg::BoundingSpheref",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::BoundingSpheref* LunaTraits< osg::BoundingSpheref >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::BoundingSpheref >::_bind_dtor(osg::BoundingSpheref* obj) {
	delete obj;
}

const char LunaTraits< osg::BoundingSpheref >::className[] = "BoundingSpheref";
const char LunaTraits< osg::BoundingSpheref >::fullName[] = "osg::BoundingSpheref";
const char LunaTraits< osg::BoundingSpheref >::moduleName[] = "osg";
const char* LunaTraits< osg::BoundingSpheref >::parents[] = {0};
const int LunaTraits< osg::BoundingSpheref >::hash = 54337302;
const int LunaTraits< osg::BoundingSpheref >::uniqueIDs[] = {54337302,0};

luna_RegType LunaTraits< osg::BoundingSpheref >::methods[] = {
	{"dynCast", &luna_wrapper_osg_BoundingSpheref::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_BoundingSpheref::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::BoundingSpheref >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::BoundingSpheref >::enumValues[] = {
	{0,0}
};



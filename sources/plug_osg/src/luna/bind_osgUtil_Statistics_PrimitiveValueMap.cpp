#include <plug_common.h>

class luna_wrapper_osgUtil_Statistics_PrimitiveValueMap {
public:
	typedef Luna< osgUtil::Statistics::PrimitiveValueMap > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74391787) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::Statistics::PrimitiveValueMap*)");
		}

		osgUtil::Statistics::PrimitiveValueMap* rhs =(Luna< osgUtil::Statistics::PrimitiveValueMap >::check(L,2));
		osgUtil::Statistics::PrimitiveValueMap* self=(Luna< osgUtil::Statistics::PrimitiveValueMap >::check(L,1));
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

		osgUtil::Statistics::PrimitiveValueMap* self=(Luna< osgUtil::Statistics::PrimitiveValueMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::Statistics::PrimitiveValueMap");
		
		return luna_dynamicCast(L,converters,"osgUtil::Statistics::PrimitiveValueMap",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::Statistics::PrimitiveValueMap* LunaTraits< osgUtil::Statistics::PrimitiveValueMap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::Statistics::PrimitiveValueMap >::_bind_dtor(osgUtil::Statistics::PrimitiveValueMap* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::Statistics::PrimitiveValueMap >::className[] = "PrimitiveValueMap";
const char LunaTraits< osgUtil::Statistics::PrimitiveValueMap >::fullName[] = "osgUtil::Statistics::PrimitiveValueMap";
const char LunaTraits< osgUtil::Statistics::PrimitiveValueMap >::moduleName[] = "osg";
const char* LunaTraits< osgUtil::Statistics::PrimitiveValueMap >::parents[] = {0};
const int LunaTraits< osgUtil::Statistics::PrimitiveValueMap >::hash = 74391787;
const int LunaTraits< osgUtil::Statistics::PrimitiveValueMap >::uniqueIDs[] = {74391787,0};

luna_RegType LunaTraits< osgUtil::Statistics::PrimitiveValueMap >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_Statistics_PrimitiveValueMap::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_Statistics_PrimitiveValueMap::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::Statistics::PrimitiveValueMap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::Statistics::PrimitiveValueMap >::enumValues[] = {
	{0,0}
};



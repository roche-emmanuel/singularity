#include <plug_common.h>

class luna_wrapper_osg_ApplicationUsage_UsageMap {
public:
	typedef Luna< osg::ApplicationUsage::UsageMap > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31149124) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ApplicationUsage::UsageMap*)");
		}

		osg::ApplicationUsage::UsageMap* rhs =(Luna< osg::ApplicationUsage::UsageMap >::check(L,2));
		osg::ApplicationUsage::UsageMap* self=(Luna< osg::ApplicationUsage::UsageMap >::check(L,1));
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

		osg::ApplicationUsage::UsageMap* self=(Luna< osg::ApplicationUsage::UsageMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ApplicationUsage::UsageMap");
		
		return luna_dynamicCast(L,converters,"osg::ApplicationUsage::UsageMap",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::ApplicationUsage::UsageMap* LunaTraits< osg::ApplicationUsage::UsageMap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::ApplicationUsage::UsageMap >::_bind_dtor(osg::ApplicationUsage::UsageMap* obj) {
	delete obj;
}

const char LunaTraits< osg::ApplicationUsage::UsageMap >::className[] = "UsageMap";
const char LunaTraits< osg::ApplicationUsage::UsageMap >::fullName[] = "osg::ApplicationUsage::UsageMap";
const char LunaTraits< osg::ApplicationUsage::UsageMap >::moduleName[] = "osg";
const char* LunaTraits< osg::ApplicationUsage::UsageMap >::parents[] = {0};
const int LunaTraits< osg::ApplicationUsage::UsageMap >::hash = 31149124;
const int LunaTraits< osg::ApplicationUsage::UsageMap >::uniqueIDs[] = {31149124,0};

luna_RegType LunaTraits< osg::ApplicationUsage::UsageMap >::methods[] = {
	{"dynCast", &luna_wrapper_osg_ApplicationUsage_UsageMap::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ApplicationUsage_UsageMap::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ApplicationUsage::UsageMap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ApplicationUsage::UsageMap >::enumValues[] = {
	{0,0}
};



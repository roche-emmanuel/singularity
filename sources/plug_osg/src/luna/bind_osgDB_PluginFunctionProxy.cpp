#include <plug_common.h>

class luna_wrapper_osgDB_PluginFunctionProxy {
public:
	typedef Luna< osgDB::PluginFunctionProxy > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71649278) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::PluginFunctionProxy*)");
		}

		osgDB::PluginFunctionProxy* rhs =(Luna< osgDB::PluginFunctionProxy >::check(L,2));
		osgDB::PluginFunctionProxy* self=(Luna< osgDB::PluginFunctionProxy >::check(L,1));
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

		osgDB::PluginFunctionProxy* self=(Luna< osgDB::PluginFunctionProxy >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::PluginFunctionProxy");
		
		return luna_dynamicCast(L,converters,"osgDB::PluginFunctionProxy",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgDB::PluginFunctionProxy* LunaTraits< osgDB::PluginFunctionProxy >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgDB::PluginFunctionProxy >::_bind_dtor(osgDB::PluginFunctionProxy* obj) {
	delete obj;
}

const char LunaTraits< osgDB::PluginFunctionProxy >::className[] = "PluginFunctionProxy";
const char LunaTraits< osgDB::PluginFunctionProxy >::fullName[] = "osgDB::PluginFunctionProxy";
const char LunaTraits< osgDB::PluginFunctionProxy >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::PluginFunctionProxy >::parents[] = {0};
const int LunaTraits< osgDB::PluginFunctionProxy >::hash = 71649278;
const int LunaTraits< osgDB::PluginFunctionProxy >::uniqueIDs[] = {71649278,0};

luna_RegType LunaTraits< osgDB::PluginFunctionProxy >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_PluginFunctionProxy::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_PluginFunctionProxy::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::PluginFunctionProxy >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::PluginFunctionProxy >::enumValues[] = {
	{0,0}
};



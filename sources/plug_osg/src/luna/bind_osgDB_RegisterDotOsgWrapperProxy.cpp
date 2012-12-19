#include <plug_common.h>

class luna_wrapper_osgDB_RegisterDotOsgWrapperProxy {
public:
	typedef Luna< osgDB::RegisterDotOsgWrapperProxy > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,98364369) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::RegisterDotOsgWrapperProxy*)");
		}

		osgDB::RegisterDotOsgWrapperProxy* rhs =(Luna< osgDB::RegisterDotOsgWrapperProxy >::check(L,2));
		osgDB::RegisterDotOsgWrapperProxy* self=(Luna< osgDB::RegisterDotOsgWrapperProxy >::check(L,1));
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

		osgDB::RegisterDotOsgWrapperProxy* self=(Luna< osgDB::RegisterDotOsgWrapperProxy >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::RegisterDotOsgWrapperProxy");
		
		return luna_dynamicCast(L,converters,"osgDB::RegisterDotOsgWrapperProxy",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgDB::RegisterDotOsgWrapperProxy* LunaTraits< osgDB::RegisterDotOsgWrapperProxy >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgDB::RegisterDotOsgWrapperProxy >::_bind_dtor(osgDB::RegisterDotOsgWrapperProxy* obj) {
	delete obj;
}

const char LunaTraits< osgDB::RegisterDotOsgWrapperProxy >::className[] = "RegisterDotOsgWrapperProxy";
const char LunaTraits< osgDB::RegisterDotOsgWrapperProxy >::fullName[] = "osgDB::RegisterDotOsgWrapperProxy";
const char LunaTraits< osgDB::RegisterDotOsgWrapperProxy >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::RegisterDotOsgWrapperProxy >::parents[] = {0};
const int LunaTraits< osgDB::RegisterDotOsgWrapperProxy >::hash = 98364369;
const int LunaTraits< osgDB::RegisterDotOsgWrapperProxy >::uniqueIDs[] = {98364369,0};

luna_RegType LunaTraits< osgDB::RegisterDotOsgWrapperProxy >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_RegisterDotOsgWrapperProxy::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_RegisterDotOsgWrapperProxy::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::RegisterDotOsgWrapperProxy >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::RegisterDotOsgWrapperProxy >::enumValues[] = {
	{0,0}
};



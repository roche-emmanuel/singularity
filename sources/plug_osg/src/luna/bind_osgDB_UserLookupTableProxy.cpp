#include <plug_common.h>

class luna_wrapper_osgDB_UserLookupTableProxy {
public:
	typedef Luna< osgDB::UserLookupTableProxy > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58712445) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::UserLookupTableProxy*)");
		}

		osgDB::UserLookupTableProxy* rhs =(Luna< osgDB::UserLookupTableProxy >::check(L,2));
		osgDB::UserLookupTableProxy* self=(Luna< osgDB::UserLookupTableProxy >::check(L,1));
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

		osgDB::UserLookupTableProxy* self=(Luna< osgDB::UserLookupTableProxy >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::UserLookupTableProxy");
		
		return luna_dynamicCast(L,converters,"osgDB::UserLookupTableProxy",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgDB::UserLookupTableProxy* LunaTraits< osgDB::UserLookupTableProxy >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgDB::UserLookupTableProxy >::_bind_dtor(osgDB::UserLookupTableProxy* obj) {
	delete obj;
}

const char LunaTraits< osgDB::UserLookupTableProxy >::className[] = "UserLookupTableProxy";
const char LunaTraits< osgDB::UserLookupTableProxy >::fullName[] = "osgDB::UserLookupTableProxy";
const char LunaTraits< osgDB::UserLookupTableProxy >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::UserLookupTableProxy >::parents[] = {0};
const int LunaTraits< osgDB::UserLookupTableProxy >::hash = 58712445;
const int LunaTraits< osgDB::UserLookupTableProxy >::uniqueIDs[] = {58712445,0};

luna_RegType LunaTraits< osgDB::UserLookupTableProxy >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_UserLookupTableProxy::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_UserLookupTableProxy::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::UserLookupTableProxy >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::UserLookupTableProxy >::enumValues[] = {
	{0,0}
};



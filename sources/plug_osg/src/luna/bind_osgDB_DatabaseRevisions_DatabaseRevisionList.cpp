#include <plug_common.h>

class luna_wrapper_osgDB_DatabaseRevisions_DatabaseRevisionList {
public:
	typedef Luna< osgDB::DatabaseRevisions::DatabaseRevisionList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,52474503) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::DatabaseRevisions::DatabaseRevisionList*)");
		}

		osgDB::DatabaseRevisions::DatabaseRevisionList* rhs =(Luna< osgDB::DatabaseRevisions::DatabaseRevisionList >::check(L,2));
		osgDB::DatabaseRevisions::DatabaseRevisionList* self=(Luna< osgDB::DatabaseRevisions::DatabaseRevisionList >::check(L,1));
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

		osgDB::DatabaseRevisions::DatabaseRevisionList* self=(Luna< osgDB::DatabaseRevisions::DatabaseRevisionList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::DatabaseRevisions::DatabaseRevisionList");
		
		return luna_dynamicCast(L,converters,"osgDB::DatabaseRevisions::DatabaseRevisionList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgDB::DatabaseRevisions::DatabaseRevisionList* LunaTraits< osgDB::DatabaseRevisions::DatabaseRevisionList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgDB::DatabaseRevisions::DatabaseRevisionList >::_bind_dtor(osgDB::DatabaseRevisions::DatabaseRevisionList* obj) {
	delete obj;
}

const char LunaTraits< osgDB::DatabaseRevisions::DatabaseRevisionList >::className[] = "DatabaseRevisionList";
const char LunaTraits< osgDB::DatabaseRevisions::DatabaseRevisionList >::fullName[] = "osgDB::DatabaseRevisions::DatabaseRevisionList";
const char LunaTraits< osgDB::DatabaseRevisions::DatabaseRevisionList >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::DatabaseRevisions::DatabaseRevisionList >::parents[] = {0};
const int LunaTraits< osgDB::DatabaseRevisions::DatabaseRevisionList >::hash = 52474503;
const int LunaTraits< osgDB::DatabaseRevisions::DatabaseRevisionList >::uniqueIDs[] = {52474503,0};

luna_RegType LunaTraits< osgDB::DatabaseRevisions::DatabaseRevisionList >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_DatabaseRevisions_DatabaseRevisionList::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_DatabaseRevisions_DatabaseRevisionList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::DatabaseRevisions::DatabaseRevisionList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::DatabaseRevisions::DatabaseRevisionList >::enumValues[] = {
	{0,0}
};



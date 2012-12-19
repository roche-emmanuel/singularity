#include <plug_common.h>

class luna_wrapper_osgDB_ExternalFileWriter_ObjectsSet {
public:
	typedef Luna< osgDB::ExternalFileWriter::ObjectsSet > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,51931662) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::ExternalFileWriter::ObjectsSet*)");
		}

		osgDB::ExternalFileWriter::ObjectsSet* rhs =(Luna< osgDB::ExternalFileWriter::ObjectsSet >::check(L,2));
		osgDB::ExternalFileWriter::ObjectsSet* self=(Luna< osgDB::ExternalFileWriter::ObjectsSet >::check(L,1));
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

		osgDB::ExternalFileWriter::ObjectsSet* self=(Luna< osgDB::ExternalFileWriter::ObjectsSet >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::ExternalFileWriter::ObjectsSet");
		
		return luna_dynamicCast(L,converters,"osgDB::ExternalFileWriter::ObjectsSet",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgDB::ExternalFileWriter::ObjectsSet* LunaTraits< osgDB::ExternalFileWriter::ObjectsSet >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgDB::ExternalFileWriter::ObjectsSet >::_bind_dtor(osgDB::ExternalFileWriter::ObjectsSet* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osgDB::ExternalFileWriter::ObjectsSet >::className[] = "ObjectsSet";
const char LunaTraits< osgDB::ExternalFileWriter::ObjectsSet >::fullName[] = "osgDB::ExternalFileWriter::ObjectsSet";
const char LunaTraits< osgDB::ExternalFileWriter::ObjectsSet >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ExternalFileWriter::ObjectsSet >::parents[] = {0};
const int LunaTraits< osgDB::ExternalFileWriter::ObjectsSet >::hash = 51931662;
const int LunaTraits< osgDB::ExternalFileWriter::ObjectsSet >::uniqueIDs[] = {51931662,0};

luna_RegType LunaTraits< osgDB::ExternalFileWriter::ObjectsSet >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_ExternalFileWriter_ObjectsSet::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_ExternalFileWriter_ObjectsSet::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ExternalFileWriter::ObjectsSet >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ExternalFileWriter::ObjectsSet >::enumValues[] = {
	{0,0}
};



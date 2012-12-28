#include <plug_common.h>

class luna_wrapper_osgDB_ObjectWrapper_SerializerList {
public:
	typedef Luna< osgDB::ObjectWrapper::SerializerList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,21896453) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::ObjectWrapper::SerializerList*)");
		}

		osgDB::ObjectWrapper::SerializerList* rhs =(Luna< osgDB::ObjectWrapper::SerializerList >::check(L,2));
		osgDB::ObjectWrapper::SerializerList* self=(Luna< osgDB::ObjectWrapper::SerializerList >::check(L,1));
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

		osgDB::ObjectWrapper::SerializerList* self=(Luna< osgDB::ObjectWrapper::SerializerList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::ObjectWrapper::SerializerList");
		
		return luna_dynamicCast(L,converters,"osgDB::ObjectWrapper::SerializerList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgDB::ObjectWrapper::SerializerList* LunaTraits< osgDB::ObjectWrapper::SerializerList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgDB::ObjectWrapper::SerializerList >::_bind_dtor(osgDB::ObjectWrapper::SerializerList* obj) {
	delete obj;
}

const char LunaTraits< osgDB::ObjectWrapper::SerializerList >::className[] = "SerializerList";
const char LunaTraits< osgDB::ObjectWrapper::SerializerList >::fullName[] = "osgDB::ObjectWrapper::SerializerList";
const char LunaTraits< osgDB::ObjectWrapper::SerializerList >::moduleName[] = "osg";
const char* LunaTraits< osgDB::ObjectWrapper::SerializerList >::parents[] = {0};
const int LunaTraits< osgDB::ObjectWrapper::SerializerList >::hash = 21896453;
const int LunaTraits< osgDB::ObjectWrapper::SerializerList >::uniqueIDs[] = {21896453,0};

luna_RegType LunaTraits< osgDB::ObjectWrapper::SerializerList >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_ObjectWrapper_SerializerList::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_ObjectWrapper_SerializerList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ObjectWrapper::SerializerList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ObjectWrapper::SerializerList >::enumValues[] = {
	{0,0}
};



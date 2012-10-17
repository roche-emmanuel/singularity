#include <plug_common.h>

class luna_wrapper_osgDB_ObjectWrapper_FinishedObjectReadCallbackList {
public:
	typedef Luna< osgDB::ObjectWrapper::FinishedObjectReadCallbackList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87742033) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::ObjectWrapper::FinishedObjectReadCallbackList*)");
		}

		osgDB::ObjectWrapper::FinishedObjectReadCallbackList* rhs =(Luna< osgDB::ObjectWrapper::FinishedObjectReadCallbackList >::check(L,2));
		osgDB::ObjectWrapper::FinishedObjectReadCallbackList* self=(Luna< osgDB::ObjectWrapper::FinishedObjectReadCallbackList >::check(L,1));
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

		osgDB::ObjectWrapper::FinishedObjectReadCallbackList* self=(Luna< osgDB::ObjectWrapper::FinishedObjectReadCallbackList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::ObjectWrapper::FinishedObjectReadCallbackList");
		
		return luna_dynamicCast(L,converters,"osgDB::ObjectWrapper::FinishedObjectReadCallbackList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgDB::ObjectWrapper::FinishedObjectReadCallbackList* LunaTraits< osgDB::ObjectWrapper::FinishedObjectReadCallbackList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgDB::ObjectWrapper::FinishedObjectReadCallbackList >::_bind_dtor(osgDB::ObjectWrapper::FinishedObjectReadCallbackList* obj) {
	delete obj;
}

const char LunaTraits< osgDB::ObjectWrapper::FinishedObjectReadCallbackList >::className[] = "FinishedObjectReadCallbackList";
const char LunaTraits< osgDB::ObjectWrapper::FinishedObjectReadCallbackList >::fullName[] = "osgDB::ObjectWrapper::FinishedObjectReadCallbackList";
const char LunaTraits< osgDB::ObjectWrapper::FinishedObjectReadCallbackList >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ObjectWrapper::FinishedObjectReadCallbackList >::parents[] = {0};
const int LunaTraits< osgDB::ObjectWrapper::FinishedObjectReadCallbackList >::hash = 87742033;
const int LunaTraits< osgDB::ObjectWrapper::FinishedObjectReadCallbackList >::uniqueIDs[] = {87742033,0};

luna_RegType LunaTraits< osgDB::ObjectWrapper::FinishedObjectReadCallbackList >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_ObjectWrapper_FinishedObjectReadCallbackList::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_ObjectWrapper_FinishedObjectReadCallbackList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ObjectWrapper::FinishedObjectReadCallbackList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ObjectWrapper::FinishedObjectReadCallbackList >::enumValues[] = {
	{0,0}
};



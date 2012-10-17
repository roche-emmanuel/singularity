#include <plug_common.h>

class luna_wrapper_osg_DeleteHandler_ObjectsToDeleteList {
public:
	typedef Luna< osg::DeleteHandler::ObjectsToDeleteList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,16632691) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::DeleteHandler::ObjectsToDeleteList*)");
		}

		osg::DeleteHandler::ObjectsToDeleteList* rhs =(Luna< osg::DeleteHandler::ObjectsToDeleteList >::check(L,2));
		osg::DeleteHandler::ObjectsToDeleteList* self=(Luna< osg::DeleteHandler::ObjectsToDeleteList >::check(L,1));
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

		osg::DeleteHandler::ObjectsToDeleteList* self=(Luna< osg::DeleteHandler::ObjectsToDeleteList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::DeleteHandler::ObjectsToDeleteList");
		
		return luna_dynamicCast(L,converters,"osg::DeleteHandler::ObjectsToDeleteList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::DeleteHandler::ObjectsToDeleteList* LunaTraits< osg::DeleteHandler::ObjectsToDeleteList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::DeleteHandler::ObjectsToDeleteList >::_bind_dtor(osg::DeleteHandler::ObjectsToDeleteList* obj) {
	delete obj;
}

const char LunaTraits< osg::DeleteHandler::ObjectsToDeleteList >::className[] = "ObjectsToDeleteList";
const char LunaTraits< osg::DeleteHandler::ObjectsToDeleteList >::fullName[] = "osg::DeleteHandler::ObjectsToDeleteList";
const char LunaTraits< osg::DeleteHandler::ObjectsToDeleteList >::moduleName[] = "osg";
const char* LunaTraits< osg::DeleteHandler::ObjectsToDeleteList >::parents[] = {0};
const int LunaTraits< osg::DeleteHandler::ObjectsToDeleteList >::hash = 16632691;
const int LunaTraits< osg::DeleteHandler::ObjectsToDeleteList >::uniqueIDs[] = {16632691,0};

luna_RegType LunaTraits< osg::DeleteHandler::ObjectsToDeleteList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_DeleteHandler_ObjectsToDeleteList::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_DeleteHandler_ObjectsToDeleteList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::DeleteHandler::ObjectsToDeleteList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::DeleteHandler::ObjectsToDeleteList >::enumValues[] = {
	{0,0}
};



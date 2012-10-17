#include <plug_common.h>

class luna_wrapper_osgDB_ObjectWrapperManager {
public:
	typedef Luna< osgDB::ObjectWrapperManager > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Referenced*)");
		}

		osg::Referenced* rhs =(Luna< osg::Referenced >::check(L,2));
		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgDB::ObjectWrapperManager* ptr= dynamic_cast< osgDB::ObjectWrapperManager* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::ObjectWrapperManager >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgDB::ObjectWrapperManager* LunaTraits< osgDB::ObjectWrapperManager >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgDB::ObjectWrapperManager >::_bind_dtor(osgDB::ObjectWrapperManager* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::ObjectWrapperManager >::className[] = "ObjectWrapperManager";
const char LunaTraits< osgDB::ObjectWrapperManager >::fullName[] = "osgDB::ObjectWrapperManager";
const char LunaTraits< osgDB::ObjectWrapperManager >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ObjectWrapperManager >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::ObjectWrapperManager >::hash = 11391365;
const int LunaTraits< osgDB::ObjectWrapperManager >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::ObjectWrapperManager >::methods[] = {
	{"__eq", &luna_wrapper_osgDB_ObjectWrapperManager::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ObjectWrapperManager >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_ObjectWrapperManager::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ObjectWrapperManager >::enumValues[] = {
	{0,0}
};



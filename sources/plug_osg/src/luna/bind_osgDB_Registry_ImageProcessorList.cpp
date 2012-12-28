#include <plug_common.h>

class luna_wrapper_osgDB_Registry_ImageProcessorList {
public:
	typedef Luna< osgDB::Registry::ImageProcessorList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47131645) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::Registry::ImageProcessorList*)");
		}

		osgDB::Registry::ImageProcessorList* rhs =(Luna< osgDB::Registry::ImageProcessorList >::check(L,2));
		osgDB::Registry::ImageProcessorList* self=(Luna< osgDB::Registry::ImageProcessorList >::check(L,1));
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

		osgDB::Registry::ImageProcessorList* self=(Luna< osgDB::Registry::ImageProcessorList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::Registry::ImageProcessorList");
		
		return luna_dynamicCast(L,converters,"osgDB::Registry::ImageProcessorList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgDB::Registry::ImageProcessorList* LunaTraits< osgDB::Registry::ImageProcessorList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgDB::Registry::ImageProcessorList >::_bind_dtor(osgDB::Registry::ImageProcessorList* obj) {
	delete obj;
}

const char LunaTraits< osgDB::Registry::ImageProcessorList >::className[] = "ImageProcessorList";
const char LunaTraits< osgDB::Registry::ImageProcessorList >::fullName[] = "osgDB::Registry::ImageProcessorList";
const char LunaTraits< osgDB::Registry::ImageProcessorList >::moduleName[] = "osg";
const char* LunaTraits< osgDB::Registry::ImageProcessorList >::parents[] = {0};
const int LunaTraits< osgDB::Registry::ImageProcessorList >::hash = 47131645;
const int LunaTraits< osgDB::Registry::ImageProcessorList >::uniqueIDs[] = {47131645,0};

luna_RegType LunaTraits< osgDB::Registry::ImageProcessorList >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_Registry_ImageProcessorList::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_Registry_ImageProcessorList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::Registry::ImageProcessorList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::Registry::ImageProcessorList >::enumValues[] = {
	{0,0}
};



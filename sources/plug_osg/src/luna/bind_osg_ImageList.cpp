#include <plug_common.h>

class luna_wrapper_osg_ImageList {
public:
	typedef Luna< osg::ImageList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71630045) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ImageList*)");
		}

		osg::ImageList* rhs =(Luna< osg::ImageList >::check(L,2));
		osg::ImageList* self=(Luna< osg::ImageList >::check(L,1));
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

		osg::ImageList* self=(Luna< osg::ImageList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ImageList");
		
		return luna_dynamicCast(L,converters,"osg::ImageList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::ImageList* LunaTraits< osg::ImageList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::ImageList >::_bind_dtor(osg::ImageList* obj) {
	delete obj;
}

const char LunaTraits< osg::ImageList >::className[] = "ImageList";
const char LunaTraits< osg::ImageList >::fullName[] = "osg::ImageList";
const char LunaTraits< osg::ImageList >::moduleName[] = "osg";
const char* LunaTraits< osg::ImageList >::parents[] = {0};
const int LunaTraits< osg::ImageList >::hash = 71630045;
const int LunaTraits< osg::ImageList >::uniqueIDs[] = {71630045,0};

luna_RegType LunaTraits< osg::ImageList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_ImageList::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ImageList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ImageList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ImageList >::enumValues[] = {
	{0,0}
};



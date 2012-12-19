#include <plug_common.h>

class luna_wrapper_osg_LOD_RangeList {
public:
	typedef Luna< osg::LOD::RangeList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74660837) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::LOD::RangeList*)");
		}

		osg::LOD::RangeList* rhs =(Luna< osg::LOD::RangeList >::check(L,2));
		osg::LOD::RangeList* self=(Luna< osg::LOD::RangeList >::check(L,1));
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

		osg::LOD::RangeList* self=(Luna< osg::LOD::RangeList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::LOD::RangeList");
		
		return luna_dynamicCast(L,converters,"osg::LOD::RangeList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::LOD::RangeList* LunaTraits< osg::LOD::RangeList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::LOD::RangeList >::_bind_dtor(osg::LOD::RangeList* obj) {
	delete obj;
}

const char LunaTraits< osg::LOD::RangeList >::className[] = "RangeList";
const char LunaTraits< osg::LOD::RangeList >::fullName[] = "osg::LOD::RangeList";
const char LunaTraits< osg::LOD::RangeList >::moduleName[] = "osg";
const char* LunaTraits< osg::LOD::RangeList >::parents[] = {0};
const int LunaTraits< osg::LOD::RangeList >::hash = 74660837;
const int LunaTraits< osg::LOD::RangeList >::uniqueIDs[] = {74660837,0};

luna_RegType LunaTraits< osg::LOD::RangeList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_LOD_RangeList::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_LOD_RangeList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::LOD::RangeList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::LOD::RangeList >::enumValues[] = {
	{0,0}
};



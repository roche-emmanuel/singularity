#include <plug_common.h>

class luna_wrapper_osgUtil_Hit_VecIndexList {
public:
	typedef Luna< osgUtil::Hit::VecIndexList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,26842661) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::Hit::VecIndexList*)");
		}

		osgUtil::Hit::VecIndexList* rhs =(Luna< osgUtil::Hit::VecIndexList >::check(L,2));
		osgUtil::Hit::VecIndexList* self=(Luna< osgUtil::Hit::VecIndexList >::check(L,1));
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

		osgUtil::Hit::VecIndexList* self=(Luna< osgUtil::Hit::VecIndexList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::Hit::VecIndexList");
		
		return luna_dynamicCast(L,converters,"osgUtil::Hit::VecIndexList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::Hit::VecIndexList* LunaTraits< osgUtil::Hit::VecIndexList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::Hit::VecIndexList >::_bind_dtor(osgUtil::Hit::VecIndexList* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::Hit::VecIndexList >::className[] = "VecIndexList";
const char LunaTraits< osgUtil::Hit::VecIndexList >::fullName[] = "osgUtil::Hit::VecIndexList";
const char LunaTraits< osgUtil::Hit::VecIndexList >::moduleName[] = "osg";
const char* LunaTraits< osgUtil::Hit::VecIndexList >::parents[] = {0};
const int LunaTraits< osgUtil::Hit::VecIndexList >::hash = 26842661;
const int LunaTraits< osgUtil::Hit::VecIndexList >::uniqueIDs[] = {26842661,0};

luna_RegType LunaTraits< osgUtil::Hit::VecIndexList >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_Hit_VecIndexList::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_Hit_VecIndexList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::Hit::VecIndexList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::Hit::VecIndexList >::enumValues[] = {
	{0,0}
};



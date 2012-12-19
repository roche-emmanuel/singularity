#include <plug_common.h>

class luna_wrapper_osgUtil_IntersectorGroup_Intersectors {
public:
	typedef Luna< osgUtil::IntersectorGroup::Intersectors > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,66660324) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::IntersectorGroup::Intersectors*)");
		}

		osgUtil::IntersectorGroup::Intersectors* rhs =(Luna< osgUtil::IntersectorGroup::Intersectors >::check(L,2));
		osgUtil::IntersectorGroup::Intersectors* self=(Luna< osgUtil::IntersectorGroup::Intersectors >::check(L,1));
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

		osgUtil::IntersectorGroup::Intersectors* self=(Luna< osgUtil::IntersectorGroup::Intersectors >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::IntersectorGroup::Intersectors");
		
		return luna_dynamicCast(L,converters,"osgUtil::IntersectorGroup::Intersectors",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::IntersectorGroup::Intersectors* LunaTraits< osgUtil::IntersectorGroup::Intersectors >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::IntersectorGroup::Intersectors >::_bind_dtor(osgUtil::IntersectorGroup::Intersectors* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::IntersectorGroup::Intersectors >::className[] = "Intersectors";
const char LunaTraits< osgUtil::IntersectorGroup::Intersectors >::fullName[] = "osgUtil::IntersectorGroup::Intersectors";
const char LunaTraits< osgUtil::IntersectorGroup::Intersectors >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::IntersectorGroup::Intersectors >::parents[] = {0};
const int LunaTraits< osgUtil::IntersectorGroup::Intersectors >::hash = 66660324;
const int LunaTraits< osgUtil::IntersectorGroup::Intersectors >::uniqueIDs[] = {66660324,0};

luna_RegType LunaTraits< osgUtil::IntersectorGroup::Intersectors >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_IntersectorGroup_Intersectors::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_IntersectorGroup_Intersectors::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::IntersectorGroup::Intersectors >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::IntersectorGroup::Intersectors >::enumValues[] = {
	{0,0}
};



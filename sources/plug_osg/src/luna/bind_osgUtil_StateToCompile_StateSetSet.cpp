#include <plug_common.h>

class luna_wrapper_osgUtil_StateToCompile_StateSetSet {
public:
	typedef Luna< osgUtil::StateToCompile::StateSetSet > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88961844) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::StateToCompile::StateSetSet*)");
		}

		osgUtil::StateToCompile::StateSetSet* rhs =(Luna< osgUtil::StateToCompile::StateSetSet >::check(L,2));
		osgUtil::StateToCompile::StateSetSet* self=(Luna< osgUtil::StateToCompile::StateSetSet >::check(L,1));
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

		osgUtil::StateToCompile::StateSetSet* self=(Luna< osgUtil::StateToCompile::StateSetSet >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::StateToCompile::StateSetSet");
		
		return luna_dynamicCast(L,converters,"osgUtil::StateToCompile::StateSetSet",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::StateToCompile::StateSetSet* LunaTraits< osgUtil::StateToCompile::StateSetSet >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::StateToCompile::StateSetSet >::_bind_dtor(osgUtil::StateToCompile::StateSetSet* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osgUtil::StateToCompile::StateSetSet >::className[] = "StateSetSet";
const char LunaTraits< osgUtil::StateToCompile::StateSetSet >::fullName[] = "osgUtil::StateToCompile::StateSetSet";
const char LunaTraits< osgUtil::StateToCompile::StateSetSet >::moduleName[] = "osg";
const char* LunaTraits< osgUtil::StateToCompile::StateSetSet >::parents[] = {0};
const int LunaTraits< osgUtil::StateToCompile::StateSetSet >::hash = 88961844;
const int LunaTraits< osgUtil::StateToCompile::StateSetSet >::uniqueIDs[] = {88961844,0};

luna_RegType LunaTraits< osgUtil::StateToCompile::StateSetSet >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_StateToCompile_StateSetSet::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_StateToCompile_StateSetSet::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::StateToCompile::StateSetSet >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::StateToCompile::StateSetSet >::enumValues[] = {
	{0,0}
};



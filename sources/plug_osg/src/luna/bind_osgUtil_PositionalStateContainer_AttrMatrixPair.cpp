#include <plug_common.h>

class luna_wrapper_osgUtil_PositionalStateContainer_AttrMatrixPair {
public:
	typedef Luna< osgUtil::PositionalStateContainer::AttrMatrixPair > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92627939) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::PositionalStateContainer::AttrMatrixPair*)");
		}

		osgUtil::PositionalStateContainer::AttrMatrixPair* rhs =(Luna< osgUtil::PositionalStateContainer::AttrMatrixPair >::check(L,2));
		osgUtil::PositionalStateContainer::AttrMatrixPair* self=(Luna< osgUtil::PositionalStateContainer::AttrMatrixPair >::check(L,1));
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

		osgUtil::PositionalStateContainer::AttrMatrixPair* self=(Luna< osgUtil::PositionalStateContainer::AttrMatrixPair >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::PositionalStateContainer::AttrMatrixPair");
		
		return luna_dynamicCast(L,converters,"osgUtil::PositionalStateContainer::AttrMatrixPair",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::PositionalStateContainer::AttrMatrixPair* LunaTraits< osgUtil::PositionalStateContainer::AttrMatrixPair >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::PositionalStateContainer::AttrMatrixPair >::_bind_dtor(osgUtil::PositionalStateContainer::AttrMatrixPair* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::PositionalStateContainer::AttrMatrixPair >::className[] = "AttrMatrixPair";
const char LunaTraits< osgUtil::PositionalStateContainer::AttrMatrixPair >::fullName[] = "osgUtil::PositionalStateContainer::AttrMatrixPair";
const char LunaTraits< osgUtil::PositionalStateContainer::AttrMatrixPair >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::PositionalStateContainer::AttrMatrixPair >::parents[] = {0};
const int LunaTraits< osgUtil::PositionalStateContainer::AttrMatrixPair >::hash = 92627939;
const int LunaTraits< osgUtil::PositionalStateContainer::AttrMatrixPair >::uniqueIDs[] = {92627939,0};

luna_RegType LunaTraits< osgUtil::PositionalStateContainer::AttrMatrixPair >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_PositionalStateContainer_AttrMatrixPair::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_PositionalStateContainer_AttrMatrixPair::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::PositionalStateContainer::AttrMatrixPair >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::PositionalStateContainer::AttrMatrixPair >::enumValues[] = {
	{0,0}
};



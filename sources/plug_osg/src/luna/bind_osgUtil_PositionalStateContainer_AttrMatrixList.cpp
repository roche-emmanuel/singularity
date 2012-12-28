#include <plug_common.h>

class luna_wrapper_osgUtil_PositionalStateContainer_AttrMatrixList {
public:
	typedef Luna< osgUtil::PositionalStateContainer::AttrMatrixList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92516775) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::PositionalStateContainer::AttrMatrixList*)");
		}

		osgUtil::PositionalStateContainer::AttrMatrixList* rhs =(Luna< osgUtil::PositionalStateContainer::AttrMatrixList >::check(L,2));
		osgUtil::PositionalStateContainer::AttrMatrixList* self=(Luna< osgUtil::PositionalStateContainer::AttrMatrixList >::check(L,1));
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

		osgUtil::PositionalStateContainer::AttrMatrixList* self=(Luna< osgUtil::PositionalStateContainer::AttrMatrixList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::PositionalStateContainer::AttrMatrixList");
		
		return luna_dynamicCast(L,converters,"osgUtil::PositionalStateContainer::AttrMatrixList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::PositionalStateContainer::AttrMatrixList* LunaTraits< osgUtil::PositionalStateContainer::AttrMatrixList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::PositionalStateContainer::AttrMatrixList >::_bind_dtor(osgUtil::PositionalStateContainer::AttrMatrixList* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::PositionalStateContainer::AttrMatrixList >::className[] = "AttrMatrixList";
const char LunaTraits< osgUtil::PositionalStateContainer::AttrMatrixList >::fullName[] = "osgUtil::PositionalStateContainer::AttrMatrixList";
const char LunaTraits< osgUtil::PositionalStateContainer::AttrMatrixList >::moduleName[] = "osg";
const char* LunaTraits< osgUtil::PositionalStateContainer::AttrMatrixList >::parents[] = {0};
const int LunaTraits< osgUtil::PositionalStateContainer::AttrMatrixList >::hash = 92516775;
const int LunaTraits< osgUtil::PositionalStateContainer::AttrMatrixList >::uniqueIDs[] = {92516775,0};

luna_RegType LunaTraits< osgUtil::PositionalStateContainer::AttrMatrixList >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_PositionalStateContainer_AttrMatrixList::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_PositionalStateContainer_AttrMatrixList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::PositionalStateContainer::AttrMatrixList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::PositionalStateContainer::AttrMatrixList >::enumValues[] = {
	{0,0}
};



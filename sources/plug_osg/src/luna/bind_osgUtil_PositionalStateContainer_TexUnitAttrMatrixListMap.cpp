#include <plug_common.h>

class luna_wrapper_osgUtil_PositionalStateContainer_TexUnitAttrMatrixListMap {
public:
	typedef Luna< osgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,42744840) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap*)");
		}

		osgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap* rhs =(Luna< osgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap >::check(L,2));
		osgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap* self=(Luna< osgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap >::check(L,1));
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

		osgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap* self=(Luna< osgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap");
		
		return luna_dynamicCast(L,converters,"osgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap* LunaTraits< osgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap >::_bind_dtor(osgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap >::className[] = "TexUnitAttrMatrixListMap";
const char LunaTraits< osgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap >::fullName[] = "osgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap";
const char LunaTraits< osgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap >::moduleName[] = "osg";
const char* LunaTraits< osgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap >::parents[] = {0};
const int LunaTraits< osgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap >::hash = 42744840;
const int LunaTraits< osgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap >::uniqueIDs[] = {42744840,0};

luna_RegType LunaTraits< osgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_PositionalStateContainer_TexUnitAttrMatrixListMap::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_PositionalStateContainer_TexUnitAttrMatrixListMap::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap >::enumValues[] = {
	{0,0}
};



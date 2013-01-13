#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_map_unsigned_int_osgUtil_PositionalStateContainer_AttrMatrixList {
public:
	typedef Luna< std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88896285) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList >*)");
		}

		std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList >* rhs =(Luna< std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList > >::check(L,2));
		std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList >* self=(Luna< std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList > >::check(L,1));
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

		std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList >* self=(Luna< std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList >");
		
		return luna_dynamicCast(L,converters,"std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList >",name);
	}

};

std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList >* LunaTraits< std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList > >::_bind_ctor(lua_State *L) {
	return new std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList >();
}

void LunaTraits< std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList > >::_bind_dtor(std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList >* obj) {
	delete obj;
}

const char LunaTraits< std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList > >::className[] = "std_map_unsigned_int_osgUtil_PositionalStateContainer_AttrMatrixList";
const char LunaTraits< std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList > >::fullName[] = "std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList >";
const char LunaTraits< std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList > >::moduleName[] = "osg";
const char* LunaTraits< std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList > >::parents[] = {0};
const int LunaTraits< std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList > >::hash = 88896285;
const int LunaTraits< std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList > >::uniqueIDs[] = {88896285,0};

luna_RegType LunaTraits< std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList > >::methods[] = {
	{"dynCast", &luna_wrapper_std_map_unsigned_int_osgUtil_PositionalStateContainer_AttrMatrixList::_bind_dynCast},
	{"__eq", &luna_wrapper_std_map_unsigned_int_osgUtil_PositionalStateContainer_AttrMatrixList::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList > >::enumValues[] = {
	{0,0}
};



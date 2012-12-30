#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_PagedLOD_PerRangeData {
public:
	typedef Luna< std::vector< osg::PagedLOD::PerRangeData > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,912958) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::PagedLOD::PerRangeData >*)");
		}

		std::vector< osg::PagedLOD::PerRangeData >* rhs =(Luna< std::vector< osg::PagedLOD::PerRangeData > >::check(L,2));
		std::vector< osg::PagedLOD::PerRangeData >* self=(Luna< std::vector< osg::PagedLOD::PerRangeData > >::check(L,1));
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

		std::vector< osg::PagedLOD::PerRangeData >* self=(Luna< std::vector< osg::PagedLOD::PerRangeData > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::PagedLOD::PerRangeData >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::PagedLOD::PerRangeData >",name);
	}
};

std::vector< osg::PagedLOD::PerRangeData >* LunaTraits< std::vector< osg::PagedLOD::PerRangeData > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< std::vector< osg::PagedLOD::PerRangeData > >::_bind_dtor(std::vector< osg::PagedLOD::PerRangeData >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< std::vector< osg::PagedLOD::PerRangeData > >::className[] = "std_vector_osg_PagedLOD_PerRangeData";
const char LunaTraits< std::vector< osg::PagedLOD::PerRangeData > >::fullName[] = "std::vector< osg::PagedLOD::PerRangeData >";
const char LunaTraits< std::vector< osg::PagedLOD::PerRangeData > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::PagedLOD::PerRangeData > >::parents[] = {0};
const int LunaTraits< std::vector< osg::PagedLOD::PerRangeData > >::hash = 912958;
const int LunaTraits< std::vector< osg::PagedLOD::PerRangeData > >::uniqueIDs[] = {912958,0};

luna_RegType LunaTraits< std::vector< osg::PagedLOD::PerRangeData > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_PagedLOD_PerRangeData::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_PagedLOD_PerRangeData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::PagedLOD::PerRangeData > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::PagedLOD::PerRangeData > >::enumValues[] = {
	{0,0}
};


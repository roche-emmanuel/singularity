#include <plug_common.h>

class luna_wrapper_osg_PagedLOD_PerRangeDataList {
public:
	typedef Luna< osg::PagedLOD::PerRangeDataList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56081763) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::PagedLOD::PerRangeDataList*)");
		}

		osg::PagedLOD::PerRangeDataList* rhs =(Luna< osg::PagedLOD::PerRangeDataList >::check(L,2));
		osg::PagedLOD::PerRangeDataList* self=(Luna< osg::PagedLOD::PerRangeDataList >::check(L,1));
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

		osg::PagedLOD::PerRangeDataList* self=(Luna< osg::PagedLOD::PerRangeDataList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::PagedLOD::PerRangeDataList");
		
		return luna_dynamicCast(L,converters,"osg::PagedLOD::PerRangeDataList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::PagedLOD::PerRangeDataList* LunaTraits< osg::PagedLOD::PerRangeDataList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::PagedLOD::PerRangeDataList >::_bind_dtor(osg::PagedLOD::PerRangeDataList* obj) {
	delete obj;
}

const char LunaTraits< osg::PagedLOD::PerRangeDataList >::className[] = "PerRangeDataList";
const char LunaTraits< osg::PagedLOD::PerRangeDataList >::fullName[] = "osg::PagedLOD::PerRangeDataList";
const char LunaTraits< osg::PagedLOD::PerRangeDataList >::moduleName[] = "osg";
const char* LunaTraits< osg::PagedLOD::PerRangeDataList >::parents[] = {0};
const int LunaTraits< osg::PagedLOD::PerRangeDataList >::hash = 56081763;
const int LunaTraits< osg::PagedLOD::PerRangeDataList >::uniqueIDs[] = {56081763,0};

luna_RegType LunaTraits< osg::PagedLOD::PerRangeDataList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_PagedLOD_PerRangeDataList::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_PagedLOD_PerRangeDataList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::PagedLOD::PerRangeDataList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::PagedLOD::PerRangeDataList >::enumValues[] = {
	{0,0}
};



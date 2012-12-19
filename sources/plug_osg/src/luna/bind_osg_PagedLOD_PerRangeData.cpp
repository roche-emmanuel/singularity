#include <plug_common.h>

class luna_wrapper_osg_PagedLOD_PerRangeData {
public:
	typedef Luna< osg::PagedLOD::PerRangeData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,17496146) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::PagedLOD::PerRangeData*)");
		}

		osg::PagedLOD::PerRangeData* rhs =(Luna< osg::PagedLOD::PerRangeData >::check(L,2));
		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
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

		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::PagedLOD::PerRangeData");
		
		return luna_dynamicCast(L,converters,"osg::PagedLOD::PerRangeData",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,17496146) ) return false;
		if( (!dynamic_cast< osg::PagedLOD::PerRangeData* >(Luna< osg::PagedLOD::PerRangeData >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::PagedLOD::PerRangeData::PerRangeData()
	static osg::PagedLOD::PerRangeData* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PagedLOD::PerRangeData::PerRangeData() function, expected prototype:\nosg::PagedLOD::PerRangeData::PerRangeData()\nClass arguments details:\n");
		}


		return new osg::PagedLOD::PerRangeData();
	}

	// osg::PagedLOD::PerRangeData::PerRangeData(const osg::PagedLOD::PerRangeData & prd)
	static osg::PagedLOD::PerRangeData* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PagedLOD::PerRangeData::PerRangeData(const osg::PagedLOD::PerRangeData & prd) function, expected prototype:\nosg::PagedLOD::PerRangeData::PerRangeData(const osg::PagedLOD::PerRangeData & prd)\nClass arguments details:\narg 1 ID = 17496146\n");
		}

		const osg::PagedLOD::PerRangeData* prd_ptr=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if( !prd_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg prd in osg::PagedLOD::PerRangeData::PerRangeData function");
		}
		const osg::PagedLOD::PerRangeData & prd=*prd_ptr;

		return new osg::PagedLOD::PerRangeData(prd);
	}

	// Overload binder for osg::PagedLOD::PerRangeData::PerRangeData
	static osg::PagedLOD::PerRangeData* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function PerRangeData, cannot match any of the overloads for function PerRangeData:\n  PerRangeData()\n  PerRangeData(const osg::PagedLOD::PerRangeData &)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:

};

osg::PagedLOD::PerRangeData* LunaTraits< osg::PagedLOD::PerRangeData >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_PagedLOD_PerRangeData::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::PagedLOD::PerRangeData >::_bind_dtor(osg::PagedLOD::PerRangeData* obj) {
	delete obj;
}

const char LunaTraits< osg::PagedLOD::PerRangeData >::className[] = "PerRangeData";
const char LunaTraits< osg::PagedLOD::PerRangeData >::fullName[] = "osg::PagedLOD::PerRangeData";
const char LunaTraits< osg::PagedLOD::PerRangeData >::moduleName[] = "osg";
const char* LunaTraits< osg::PagedLOD::PerRangeData >::parents[] = {0};
const int LunaTraits< osg::PagedLOD::PerRangeData >::hash = 17496146;
const int LunaTraits< osg::PagedLOD::PerRangeData >::uniqueIDs[] = {17496146,0};

luna_RegType LunaTraits< osg::PagedLOD::PerRangeData >::methods[] = {
	{"dynCast", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::PagedLOD::PerRangeData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::PagedLOD::PerRangeData >::enumValues[] = {
	{0,0}
};



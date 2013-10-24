#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_btAlignedObjectArray_btDbvt_sStkNPS {
public:
	typedef Luna< btAlignedObjectArray< btDbvt::sStkNPS > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91616889) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btAlignedObjectArray< btDbvt::sStkNPS >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btAlignedObjectArray< btDbvt::sStkNPS >* rhs =(Luna< btAlignedObjectArray< btDbvt::sStkNPS > >::check(L,2));
		btAlignedObjectArray< btDbvt::sStkNPS >* self=(Luna< btAlignedObjectArray< btDbvt::sStkNPS > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		btAlignedObjectArray< btDbvt::sStkNPS >* self=(Luna< btAlignedObjectArray< btDbvt::sStkNPS > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btAlignedObjectArray< btDbvt::sStkNPS >");
		
		return luna_dynamicCast(L,converters,"btAlignedObjectArray< btDbvt::sStkNPS >",name);
	}

};

btAlignedObjectArray< btDbvt::sStkNPS >* LunaTraits< btAlignedObjectArray< btDbvt::sStkNPS > >::_bind_ctor(lua_State *L) {
	return new btAlignedObjectArray< btDbvt::sStkNPS >();
}

void LunaTraits< btAlignedObjectArray< btDbvt::sStkNPS > >::_bind_dtor(btAlignedObjectArray< btDbvt::sStkNPS >* obj) {
	delete obj;
}

const char LunaTraits< btAlignedObjectArray< btDbvt::sStkNPS > >::className[] = "btAlignedObjectArray_btDbvt_sStkNPS";
const char LunaTraits< btAlignedObjectArray< btDbvt::sStkNPS > >::fullName[] = "btAlignedObjectArray< btDbvt::sStkNPS >";
const char LunaTraits< btAlignedObjectArray< btDbvt::sStkNPS > >::moduleName[] = "bullet";
const char* LunaTraits< btAlignedObjectArray< btDbvt::sStkNPS > >::parents[] = {0};
const int LunaTraits< btAlignedObjectArray< btDbvt::sStkNPS > >::hash = 91616889;
const int LunaTraits< btAlignedObjectArray< btDbvt::sStkNPS > >::uniqueIDs[] = {91616889,0};

luna_RegType LunaTraits< btAlignedObjectArray< btDbvt::sStkNPS > >::methods[] = {
	{"dynCast", &luna_wrapper_btAlignedObjectArray_btDbvt_sStkNPS::_bind_dynCast},
	{"__eq", &luna_wrapper_btAlignedObjectArray_btDbvt_sStkNPS::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< btAlignedObjectArray< btDbvt::sStkNPS > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btAlignedObjectArray< btDbvt::sStkNPS > >::enumValues[] = {
	{0,0}
};



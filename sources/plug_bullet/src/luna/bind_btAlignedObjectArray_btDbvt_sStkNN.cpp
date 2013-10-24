#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_btAlignedObjectArray_btDbvt_sStkNN {
public:
	typedef Luna< btAlignedObjectArray< btDbvt::sStkNN > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,64242255) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btAlignedObjectArray< btDbvt::sStkNN >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btAlignedObjectArray< btDbvt::sStkNN >* rhs =(Luna< btAlignedObjectArray< btDbvt::sStkNN > >::check(L,2));
		btAlignedObjectArray< btDbvt::sStkNN >* self=(Luna< btAlignedObjectArray< btDbvt::sStkNN > >::check(L,1));
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

		btAlignedObjectArray< btDbvt::sStkNN >* self=(Luna< btAlignedObjectArray< btDbvt::sStkNN > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btAlignedObjectArray< btDbvt::sStkNN >");
		
		return luna_dynamicCast(L,converters,"btAlignedObjectArray< btDbvt::sStkNN >",name);
	}

};

btAlignedObjectArray< btDbvt::sStkNN >* LunaTraits< btAlignedObjectArray< btDbvt::sStkNN > >::_bind_ctor(lua_State *L) {
	return new btAlignedObjectArray< btDbvt::sStkNN >();
}

void LunaTraits< btAlignedObjectArray< btDbvt::sStkNN > >::_bind_dtor(btAlignedObjectArray< btDbvt::sStkNN >* obj) {
	delete obj;
}

const char LunaTraits< btAlignedObjectArray< btDbvt::sStkNN > >::className[] = "btAlignedObjectArray_btDbvt_sStkNN";
const char LunaTraits< btAlignedObjectArray< btDbvt::sStkNN > >::fullName[] = "btAlignedObjectArray< btDbvt::sStkNN >";
const char LunaTraits< btAlignedObjectArray< btDbvt::sStkNN > >::moduleName[] = "bullet";
const char* LunaTraits< btAlignedObjectArray< btDbvt::sStkNN > >::parents[] = {0};
const int LunaTraits< btAlignedObjectArray< btDbvt::sStkNN > >::hash = 64242255;
const int LunaTraits< btAlignedObjectArray< btDbvt::sStkNN > >::uniqueIDs[] = {64242255,0};

luna_RegType LunaTraits< btAlignedObjectArray< btDbvt::sStkNN > >::methods[] = {
	{"dynCast", &luna_wrapper_btAlignedObjectArray_btDbvt_sStkNN::_bind_dynCast},
	{"__eq", &luna_wrapper_btAlignedObjectArray_btDbvt_sStkNN::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< btAlignedObjectArray< btDbvt::sStkNN > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btAlignedObjectArray< btDbvt::sStkNN > >::enumValues[] = {
	{0,0}
};



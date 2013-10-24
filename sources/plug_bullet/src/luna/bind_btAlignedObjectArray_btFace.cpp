#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_btAlignedObjectArray_btFace {
public:
	typedef Luna< btAlignedObjectArray< btFace > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,27702431) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btAlignedObjectArray< btFace >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btAlignedObjectArray< btFace >* rhs =(Luna< btAlignedObjectArray< btFace > >::check(L,2));
		btAlignedObjectArray< btFace >* self=(Luna< btAlignedObjectArray< btFace > >::check(L,1));
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

		btAlignedObjectArray< btFace >* self=(Luna< btAlignedObjectArray< btFace > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btAlignedObjectArray< btFace >");
		
		return luna_dynamicCast(L,converters,"btAlignedObjectArray< btFace >",name);
	}

};

btAlignedObjectArray< btFace >* LunaTraits< btAlignedObjectArray< btFace > >::_bind_ctor(lua_State *L) {
	return new btAlignedObjectArray< btFace >();
}

void LunaTraits< btAlignedObjectArray< btFace > >::_bind_dtor(btAlignedObjectArray< btFace >* obj) {
	delete obj;
}

const char LunaTraits< btAlignedObjectArray< btFace > >::className[] = "btAlignedObjectArray_btFace";
const char LunaTraits< btAlignedObjectArray< btFace > >::fullName[] = "btAlignedObjectArray< btFace >";
const char LunaTraits< btAlignedObjectArray< btFace > >::moduleName[] = "bullet";
const char* LunaTraits< btAlignedObjectArray< btFace > >::parents[] = {0};
const int LunaTraits< btAlignedObjectArray< btFace > >::hash = 27702431;
const int LunaTraits< btAlignedObjectArray< btFace > >::uniqueIDs[] = {27702431,0};

luna_RegType LunaTraits< btAlignedObjectArray< btFace > >::methods[] = {
	{"dynCast", &luna_wrapper_btAlignedObjectArray_btFace::_bind_dynCast},
	{"__eq", &luna_wrapper_btAlignedObjectArray_btFace::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< btAlignedObjectArray< btFace > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btAlignedObjectArray< btFace > >::enumValues[] = {
	{0,0}
};



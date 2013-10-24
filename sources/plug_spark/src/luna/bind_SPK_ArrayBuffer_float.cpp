#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_SPK_ArrayBuffer_float {
public:
	typedef Luna< SPK::ArrayBuffer< float > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,28491752) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SPK::ArrayBuffer< float >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SPK::ArrayBuffer< float >* rhs =(Luna< SPK::ArrayBuffer< float > >::check(L,2));
		SPK::ArrayBuffer< float >* self=(Luna< SPK::ArrayBuffer< float > >::check(L,1));
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

		SPK::ArrayBuffer< float >* self=(Luna< SPK::ArrayBuffer< float > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SPK::ArrayBuffer< float >");
		
		return luna_dynamicCast(L,converters,"SPK::ArrayBuffer< float >",name);
	}

};

SPK::ArrayBuffer< float >* LunaTraits< SPK::ArrayBuffer< float > >::_bind_ctor(lua_State *L) {
	return NULL;
}

void LunaTraits< SPK::ArrayBuffer< float > >::_bind_dtor(SPK::ArrayBuffer< float >* obj) {
	// do nothing
}

const char LunaTraits< SPK::ArrayBuffer< float > >::className[] = "SPK_ArrayBuffer_float";
const char LunaTraits< SPK::ArrayBuffer< float > >::fullName[] = "SPK::ArrayBuffer< float >";
const char LunaTraits< SPK::ArrayBuffer< float > >::moduleName[] = "spark";
const char* LunaTraits< SPK::ArrayBuffer< float > >::parents[] = {0};
const int LunaTraits< SPK::ArrayBuffer< float > >::hash = 28491752;
const int LunaTraits< SPK::ArrayBuffer< float > >::uniqueIDs[] = {28491752,0};

luna_RegType LunaTraits< SPK::ArrayBuffer< float > >::methods[] = {
	{"dynCast", &luna_wrapper_SPK_ArrayBuffer_float::_bind_dynCast},
	{"__eq", &luna_wrapper_SPK_ArrayBuffer_float::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< SPK::ArrayBuffer< float > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::ArrayBuffer< float > >::enumValues[] = {
	{0,0}
};



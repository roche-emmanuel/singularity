#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_btAlignedObjectArray_float {
public:
	typedef Luna< btAlignedObjectArray< float > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92010878) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btAlignedObjectArray< float >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btAlignedObjectArray< float >* rhs =(Luna< btAlignedObjectArray< float > >::check(L,2));
		btAlignedObjectArray< float >* self=(Luna< btAlignedObjectArray< float > >::check(L,1));
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

		btAlignedObjectArray< float >* self=(Luna< btAlignedObjectArray< float > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btAlignedObjectArray< float >");
		
		return luna_dynamicCast(L,converters,"btAlignedObjectArray< float >",name);
	}

};

btAlignedObjectArray< float >* LunaTraits< btAlignedObjectArray< float > >::_bind_ctor(lua_State *L) {
	return new btAlignedObjectArray< float >();
}

void LunaTraits< btAlignedObjectArray< float > >::_bind_dtor(btAlignedObjectArray< float >* obj) {
	delete obj;
}

const char LunaTraits< btAlignedObjectArray< float > >::className[] = "btAlignedObjectArray_float";
const char LunaTraits< btAlignedObjectArray< float > >::fullName[] = "btAlignedObjectArray< float >";
const char LunaTraits< btAlignedObjectArray< float > >::moduleName[] = "bullet";
const char* LunaTraits< btAlignedObjectArray< float > >::parents[] = {0};
const int LunaTraits< btAlignedObjectArray< float > >::hash = 92010878;
const int LunaTraits< btAlignedObjectArray< float > >::uniqueIDs[] = {92010878,0};

luna_RegType LunaTraits< btAlignedObjectArray< float > >::methods[] = {
	{"dynCast", &luna_wrapper_btAlignedObjectArray_float::_bind_dynCast},
	{"__eq", &luna_wrapper_btAlignedObjectArray_float::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< btAlignedObjectArray< float > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btAlignedObjectArray< float > >::enumValues[] = {
	{0,0}
};



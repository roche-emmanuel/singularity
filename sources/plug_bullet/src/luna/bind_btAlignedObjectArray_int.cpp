#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_btAlignedObjectArray_int {
public:
	typedef Luna< btAlignedObjectArray< int > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,41950488) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btAlignedObjectArray< int >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btAlignedObjectArray< int >* rhs =(Luna< btAlignedObjectArray< int > >::check(L,2));
		btAlignedObjectArray< int >* self=(Luna< btAlignedObjectArray< int > >::check(L,1));
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

		btAlignedObjectArray< int >* self=(Luna< btAlignedObjectArray< int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btAlignedObjectArray< int >");
		
		return luna_dynamicCast(L,converters,"btAlignedObjectArray< int >",name);
	}

};

btAlignedObjectArray< int >* LunaTraits< btAlignedObjectArray< int > >::_bind_ctor(lua_State *L) {
	return new btAlignedObjectArray< int >();
}

void LunaTraits< btAlignedObjectArray< int > >::_bind_dtor(btAlignedObjectArray< int >* obj) {
	delete obj;
}

const char LunaTraits< btAlignedObjectArray< int > >::className[] = "btAlignedObjectArray_int";
const char LunaTraits< btAlignedObjectArray< int > >::fullName[] = "btAlignedObjectArray< int >";
const char LunaTraits< btAlignedObjectArray< int > >::moduleName[] = "bullet";
const char* LunaTraits< btAlignedObjectArray< int > >::parents[] = {0};
const int LunaTraits< btAlignedObjectArray< int > >::hash = 41950488;
const int LunaTraits< btAlignedObjectArray< int > >::uniqueIDs[] = {41950488,0};

luna_RegType LunaTraits< btAlignedObjectArray< int > >::methods[] = {
	{"dynCast", &luna_wrapper_btAlignedObjectArray_int::_bind_dynCast},
	{"__eq", &luna_wrapper_btAlignedObjectArray_int::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< btAlignedObjectArray< int > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btAlignedObjectArray< int > >::enumValues[] = {
	{0,0}
};



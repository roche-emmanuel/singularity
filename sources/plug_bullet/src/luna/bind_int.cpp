#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_int {
public:
	typedef Luna< int > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,104431) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(int*)");
		}

		int* rhs =(Luna< int >::check(L,2));
		int* self=(Luna< int >::check(L,1));
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

		int* self=(Luna< int >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("int");
		
		return luna_dynamicCast(L,converters,"int",name);
	}

};

int* LunaTraits< int >::_bind_ctor(lua_State *L) {
	return new int();
}

void LunaTraits< int >::_bind_dtor(int* obj) {
	delete obj;
}

const char LunaTraits< int >::className[] = "int";
const char LunaTraits< int >::fullName[] = "int";
const char LunaTraits< int >::moduleName[] = "bullet";
const char* LunaTraits< int >::parents[] = {0};
const int LunaTraits< int >::hash = 104431;
const int LunaTraits< int >::uniqueIDs[] = {104431,0};

luna_RegType LunaTraits< int >::methods[] = {
	{"dynCast", &luna_wrapper_int::_bind_dynCast},
	{"__eq", &luna_wrapper_int::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< int >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< int >::enumValues[] = {
	{0,0}
};



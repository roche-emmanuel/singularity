#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_signed_int {
public:
	typedef Luna< signed int > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56792152) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(signed int*)");
		}

		signed int* rhs =(Luna< signed int >::check(L,2));
		signed int* self=(Luna< signed int >::check(L,1));
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

		signed int* self=(Luna< signed int >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("signed int");
		
		return luna_dynamicCast(L,converters,"signed int",name);
	}

};

signed int* LunaTraits< signed int >::_bind_ctor(lua_State *L) {
	return new signed int();
}

void LunaTraits< signed int >::_bind_dtor(signed int* obj) {
	delete obj;
}

const char LunaTraits< signed int >::className[] = "signed_int";
const char LunaTraits< signed int >::fullName[] = "signed int";
const char LunaTraits< signed int >::moduleName[] = "box2d";
const char* LunaTraits< signed int >::parents[] = {0};
const int LunaTraits< signed int >::hash = 56792152;
const int LunaTraits< signed int >::uniqueIDs[] = {56792152,0};

luna_RegType LunaTraits< signed int >::methods[] = {
	{"dynCast", &luna_wrapper_signed_int::_bind_dynCast},
	{"__eq", &luna_wrapper_signed_int::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< signed int >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< signed int >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_signed_short {
public:
	typedef Luna< signed short > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86307368) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(signed short*)");
		}

		signed short* rhs =(Luna< signed short >::check(L,2));
		signed short* self=(Luna< signed short >::check(L,1));
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

		signed short* self=(Luna< signed short >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("signed short");
		
		return luna_dynamicCast(L,converters,"signed short",name);
	}

};

signed short* LunaTraits< signed short >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< signed short >::_bind_dtor(signed short* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< signed short >::className[] = "signed_short";
const char LunaTraits< signed short >::fullName[] = "signed short";
const char LunaTraits< signed short >::moduleName[] = "wx";
const char* LunaTraits< signed short >::parents[] = {0};
const int LunaTraits< signed short >::hash = 86307368;
const int LunaTraits< signed short >::uniqueIDs[] = {86307368,0};

luna_RegType LunaTraits< signed short >::methods[] = {
	{"dynCast", &luna_wrapper_signed_short::_bind_dynCast},
	{"__eq", &luna_wrapper_signed_short::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< signed short >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< signed short >::enumValues[] = {
	{0,0}
};



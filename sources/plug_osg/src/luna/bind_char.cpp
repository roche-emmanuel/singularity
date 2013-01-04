#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_char {
public:
	typedef Luna< char > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3052374) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(char*)");
		}

		char* rhs =(Luna< char >::check(L,2));
		char* self=(Luna< char >::check(L,1));
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

		char* self=(Luna< char >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("char");
		
		return luna_dynamicCast(L,converters,"char",name);
	}

};

char* LunaTraits< char >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< char >::_bind_dtor(char* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< char >::className[] = "char";
const char LunaTraits< char >::fullName[] = "char";
const char LunaTraits< char >::moduleName[] = "osg";
const char* LunaTraits< char >::parents[] = {0};
const int LunaTraits< char >::hash = 3052374;
const int LunaTraits< char >::uniqueIDs[] = {3052374,0};

luna_RegType LunaTraits< char >::methods[] = {
	{"dynCast", &luna_wrapper_char::_bind_dynCast},
	{"__eq", &luna_wrapper_char::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< char >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< char >::enumValues[] = {
	{0,0}
};



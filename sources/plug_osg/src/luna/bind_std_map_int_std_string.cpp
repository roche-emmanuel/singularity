#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_map_int_std_string {
public:
	typedef Luna< std::map< int, std::string > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,16309392) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::map< int, std::string >*)");
		}

		std::map< int, std::string >* rhs =(Luna< std::map< int, std::string > >::check(L,2));
		std::map< int, std::string >* self=(Luna< std::map< int, std::string > >::check(L,1));
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

		std::map< int, std::string >* self=(Luna< std::map< int, std::string > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::map< int, std::string >");
		
		return luna_dynamicCast(L,converters,"std::map< int, std::string >",name);
	}
};

std::map< int, std::string >* LunaTraits< std::map< int, std::string > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< std::map< int, std::string > >::_bind_dtor(std::map< int, std::string >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< std::map< int, std::string > >::className[] = "std_map_int_std_string";
const char LunaTraits< std::map< int, std::string > >::fullName[] = "std::map< int, std::string >";
const char LunaTraits< std::map< int, std::string > >::moduleName[] = "osg";
const char* LunaTraits< std::map< int, std::string > >::parents[] = {0};
const int LunaTraits< std::map< int, std::string > >::hash = 16309392;
const int LunaTraits< std::map< int, std::string > >::uniqueIDs[] = {16309392,0};

luna_RegType LunaTraits< std::map< int, std::string > >::methods[] = {
	{"dynCast", &luna_wrapper_std_map_int_std_string::_bind_dynCast},
	{"__eq", &luna_wrapper_std_map_int_std_string::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< std::map< int, std::string > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::map< int, std::string > >::enumValues[] = {
	{0,0}
};


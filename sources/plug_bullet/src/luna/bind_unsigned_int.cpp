#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_unsigned_int {
public:
	typedef Luna< unsigned int > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,97636445) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(unsigned int*)");
		}

		unsigned int* rhs =(Luna< unsigned int >::check(L,2));
		unsigned int* self=(Luna< unsigned int >::check(L,1));
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

		unsigned int* self=(Luna< unsigned int >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("unsigned int");
		
		return luna_dynamicCast(L,converters,"unsigned int",name);
	}

};

unsigned int* LunaTraits< unsigned int >::_bind_ctor(lua_State *L) {
	return new unsigned int();
}

void LunaTraits< unsigned int >::_bind_dtor(unsigned int* obj) {
	delete obj;
}

const char LunaTraits< unsigned int >::className[] = "unsigned_int";
const char LunaTraits< unsigned int >::fullName[] = "unsigned int";
const char LunaTraits< unsigned int >::moduleName[] = "bullet";
const char* LunaTraits< unsigned int >::parents[] = {0};
const int LunaTraits< unsigned int >::hash = 97636445;
const int LunaTraits< unsigned int >::uniqueIDs[] = {97636445,0};

luna_RegType LunaTraits< unsigned int >::methods[] = {
	{"dynCast", &luna_wrapper_unsigned_int::_bind_dynCast},
	{"__eq", &luna_wrapper_unsigned_int::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< unsigned int >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< unsigned int >::enumValues[] = {
	{0,0}
};



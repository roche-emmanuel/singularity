#include <plug_common.h>

class luna_wrapper_void {
public:
	typedef Luna< void > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(void*)");
		}

		void* rhs =(Luna< void >::check(L,2));
		void* self=(Luna< void >::check(L,1));
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

		void* self=(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("void");
		
		return luna_dynamicCast(L,converters,"void",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

void* LunaTraits< void >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< void >::_bind_dtor(void* obj) {
	delete obj;
}

const char LunaTraits< void >::className[] = "void";
const char LunaTraits< void >::fullName[] = "void";
const char LunaTraits< void >::moduleName[] = "sgt";
const char* LunaTraits< void >::parents[] = {0};
const int LunaTraits< void >::hash = 3625364;
const int LunaTraits< void >::uniqueIDs[] = {3625364,0};

luna_RegType LunaTraits< void >::methods[] = {
	{"dynCast", &luna_wrapper_void::_bind_dynCast},
	{"__eq", &luna_wrapper_void::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< void >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< void >::enumValues[] = {
	{0,0}
};



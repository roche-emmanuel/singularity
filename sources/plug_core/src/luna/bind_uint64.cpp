#include <plug_common.h>

class luna_wrapper_uint64 {
public:
	typedef Luna< __uint64 > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,60998621) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(__uint64*)");
		}

		__uint64* rhs =(Luna< __uint64 >::check(L,2));
		__uint64* self=(Luna< __uint64 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		__uint64* self= (__uint64*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< __uint64 >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,60998621) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< __uint64 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
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

		__uint64* self=(Luna< __uint64 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("__uint64");
		
		return luna_dynamicCast(L,converters,"__uint64",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

__uint64* LunaTraits< __uint64 >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< __uint64 >::_bind_dtor(__uint64* obj) {
	delete obj;
}

const char LunaTraits< __uint64 >::className[] = "uint64";
const char LunaTraits< __uint64 >::fullName[] = "__uint64";
const char LunaTraits< __uint64 >::moduleName[] = "sgt";
const char* LunaTraits< __uint64 >::parents[] = {0};
const int LunaTraits< __uint64 >::hash = 60998621;
const int LunaTraits< __uint64 >::uniqueIDs[] = {60998621,0};

luna_RegType LunaTraits< __uint64 >::methods[] = {
	{"dynCast", &luna_wrapper_uint64::_bind_dynCast},
	{"__eq", &luna_wrapper_uint64::_bind___eq},
	{"fromVoid", &luna_wrapper_uint64::_bind_fromVoid},
	{"asVoid", &luna_wrapper_uint64::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< __uint64 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< __uint64 >::enumValues[] = {
	{0,0}
};


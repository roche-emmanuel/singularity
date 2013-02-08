#include <plug_common.h>

class luna_wrapper_btVector3FloatData {
public:
	typedef Luna< btVector3FloatData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,96449857) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btVector3FloatData*)");
		}

		btVector3FloatData* rhs =(Luna< btVector3FloatData >::check(L,2));
		btVector3FloatData* self=(Luna< btVector3FloatData >::check(L,1));
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

		btVector3FloatData* self= (btVector3FloatData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btVector3FloatData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,96449857) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btVector3FloatData >::check(L,1));
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

		btVector3FloatData* self=(Luna< btVector3FloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btVector3FloatData");
		
		return luna_dynamicCast(L,converters,"btVector3FloatData",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

btVector3FloatData* LunaTraits< btVector3FloatData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btVector3FloatData >::_bind_dtor(btVector3FloatData* obj) {
	delete obj;
}

const char LunaTraits< btVector3FloatData >::className[] = "btVector3FloatData";
const char LunaTraits< btVector3FloatData >::fullName[] = "btVector3FloatData";
const char LunaTraits< btVector3FloatData >::moduleName[] = "bullet";
const char* LunaTraits< btVector3FloatData >::parents[] = {0};
const int LunaTraits< btVector3FloatData >::hash = 96449857;
const int LunaTraits< btVector3FloatData >::uniqueIDs[] = {96449857,0};

luna_RegType LunaTraits< btVector3FloatData >::methods[] = {
	{"dynCast", &luna_wrapper_btVector3FloatData::_bind_dynCast},
	{"__eq", &luna_wrapper_btVector3FloatData::_bind___eq},
	{"fromVoid", &luna_wrapper_btVector3FloatData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btVector3FloatData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btVector3FloatData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btVector3FloatData >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

class luna_wrapper_btMatrix3x3DoubleData {
public:
	typedef Luna< btMatrix3x3DoubleData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48479346) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btMatrix3x3DoubleData*)");
		}

		btMatrix3x3DoubleData* rhs =(Luna< btMatrix3x3DoubleData >::check(L,2));
		btMatrix3x3DoubleData* self=(Luna< btMatrix3x3DoubleData >::check(L,1));
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

		btMatrix3x3DoubleData* self= (btMatrix3x3DoubleData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btMatrix3x3DoubleData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48479346) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btMatrix3x3DoubleData >::check(L,1));
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

		btMatrix3x3DoubleData* self=(Luna< btMatrix3x3DoubleData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btMatrix3x3DoubleData");
		
		return luna_dynamicCast(L,converters,"btMatrix3x3DoubleData",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

btMatrix3x3DoubleData* LunaTraits< btMatrix3x3DoubleData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btMatrix3x3DoubleData >::_bind_dtor(btMatrix3x3DoubleData* obj) {
	delete obj;
}

const char LunaTraits< btMatrix3x3DoubleData >::className[] = "btMatrix3x3DoubleData";
const char LunaTraits< btMatrix3x3DoubleData >::fullName[] = "btMatrix3x3DoubleData";
const char LunaTraits< btMatrix3x3DoubleData >::moduleName[] = "bullet";
const char* LunaTraits< btMatrix3x3DoubleData >::parents[] = {0};
const int LunaTraits< btMatrix3x3DoubleData >::hash = 48479346;
const int LunaTraits< btMatrix3x3DoubleData >::uniqueIDs[] = {48479346,0};

luna_RegType LunaTraits< btMatrix3x3DoubleData >::methods[] = {
	{"dynCast", &luna_wrapper_btMatrix3x3DoubleData::_bind_dynCast},
	{"__eq", &luna_wrapper_btMatrix3x3DoubleData::_bind___eq},
	{"fromVoid", &luna_wrapper_btMatrix3x3DoubleData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btMatrix3x3DoubleData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btMatrix3x3DoubleData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btMatrix3x3DoubleData >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

class luna_wrapper_btIntIndexData {
public:
	typedef Luna< btIntIndexData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,39554929) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btIntIndexData*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btIntIndexData* rhs =(Luna< btIntIndexData >::check(L,2));
		btIntIndexData* self=(Luna< btIntIndexData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btIntIndexData* self= (btIntIndexData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btIntIndexData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,39554929) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btIntIndexData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		btIntIndexData* self=(Luna< btIntIndexData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btIntIndexData");
		
		return luna_dynamicCast(L,converters,"btIntIndexData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// int btIntIndexData::m_value()
	static int _bind_getValue(lua_State *L) {
		if (!_lg_typecheck_getValue(L)) {
			luaL_error(L, "luna typecheck failed in int btIntIndexData::m_value() function, expected prototype:\nint btIntIndexData::m_value()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btIntIndexData* self=(Luna< btIntIndexData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btIntIndexData::m_value(). Got : '%s'\n%s",typeid(Luna< btIntIndexData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_value;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btIntIndexData::m_value(int value)
	static int _bind_setValue(lua_State *L) {
		if (!_lg_typecheck_setValue(L)) {
			luaL_error(L, "luna typecheck failed in void btIntIndexData::m_value(int value) function, expected prototype:\nvoid btIntIndexData::m_value(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btIntIndexData* self=(Luna< btIntIndexData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btIntIndexData::m_value(int). Got : '%s'\n%s",typeid(Luna< btIntIndexData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_value = value;

		return 0;
	}


	// Operator binds:

};

btIntIndexData* LunaTraits< btIntIndexData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btIntIndexData >::_bind_dtor(btIntIndexData* obj) {
	delete obj;
}

const char LunaTraits< btIntIndexData >::className[] = "btIntIndexData";
const char LunaTraits< btIntIndexData >::fullName[] = "btIntIndexData";
const char LunaTraits< btIntIndexData >::moduleName[] = "bullet";
const char* LunaTraits< btIntIndexData >::parents[] = {0};
const int LunaTraits< btIntIndexData >::hash = 39554929;
const int LunaTraits< btIntIndexData >::uniqueIDs[] = {39554929,0};

luna_RegType LunaTraits< btIntIndexData >::methods[] = {
	{"getValue", &luna_wrapper_btIntIndexData::_bind_getValue},
	{"setValue", &luna_wrapper_btIntIndexData::_bind_setValue},
	{"dynCast", &luna_wrapper_btIntIndexData::_bind_dynCast},
	{"__eq", &luna_wrapper_btIntIndexData::_bind___eq},
	{"fromVoid", &luna_wrapper_btIntIndexData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btIntIndexData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btIntIndexData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btIntIndexData >::enumValues[] = {
	{0,0}
};



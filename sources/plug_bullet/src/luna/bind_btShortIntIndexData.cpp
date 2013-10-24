#include <plug_common.h>

class luna_wrapper_btShortIntIndexData {
public:
	typedef Luna< btShortIntIndexData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,8692805) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btShortIntIndexData*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btShortIntIndexData* rhs =(Luna< btShortIntIndexData >::check(L,2));
		btShortIntIndexData* self=(Luna< btShortIntIndexData >::check(L,1));
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

		btShortIntIndexData* self= (btShortIntIndexData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btShortIntIndexData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,8692805) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btShortIntIndexData >::check(L,1));
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

		btShortIntIndexData* self=(Luna< btShortIntIndexData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btShortIntIndexData");
		
		return luna_dynamicCast(L,converters,"btShortIntIndexData",name);
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
	// short btShortIntIndexData::m_value()
	static int _bind_getValue(lua_State *L) {
		if (!_lg_typecheck_getValue(L)) {
			luaL_error(L, "luna typecheck failed in short btShortIntIndexData::m_value() function, expected prototype:\nshort btShortIntIndexData::m_value()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btShortIntIndexData* self=(Luna< btShortIntIndexData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call short btShortIntIndexData::m_value(). Got : '%s'\n%s",typeid(Luna< btShortIntIndexData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		short lret = self->m_value;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btShortIntIndexData::m_value(short value)
	static int _bind_setValue(lua_State *L) {
		if (!_lg_typecheck_setValue(L)) {
			luaL_error(L, "luna typecheck failed in void btShortIntIndexData::m_value(short value) function, expected prototype:\nvoid btShortIntIndexData::m_value(short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		short value=(short)lua_tointeger(L,2);

		btShortIntIndexData* self=(Luna< btShortIntIndexData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btShortIntIndexData::m_value(short). Got : '%s'\n%s",typeid(Luna< btShortIntIndexData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_value = value;

		return 0;
	}


	// Operator binds:

};

btShortIntIndexData* LunaTraits< btShortIntIndexData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btShortIntIndexData >::_bind_dtor(btShortIntIndexData* obj) {
	delete obj;
}

const char LunaTraits< btShortIntIndexData >::className[] = "btShortIntIndexData";
const char LunaTraits< btShortIntIndexData >::fullName[] = "btShortIntIndexData";
const char LunaTraits< btShortIntIndexData >::moduleName[] = "bullet";
const char* LunaTraits< btShortIntIndexData >::parents[] = {0};
const int LunaTraits< btShortIntIndexData >::hash = 8692805;
const int LunaTraits< btShortIntIndexData >::uniqueIDs[] = {8692805,0};

luna_RegType LunaTraits< btShortIntIndexData >::methods[] = {
	{"getValue", &luna_wrapper_btShortIntIndexData::_bind_getValue},
	{"setValue", &luna_wrapper_btShortIntIndexData::_bind_setValue},
	{"dynCast", &luna_wrapper_btShortIntIndexData::_bind_dynCast},
	{"__eq", &luna_wrapper_btShortIntIndexData::_bind___eq},
	{"fromVoid", &luna_wrapper_btShortIntIndexData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btShortIntIndexData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btShortIntIndexData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btShortIntIndexData >::enumValues[] = {
	{0,0}
};



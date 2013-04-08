#include <plug_common.h>

class luna_wrapper_btCharIndexTripletData {
public:
	typedef Luna< btCharIndexTripletData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,66220201) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCharIndexTripletData*)");
		}

		btCharIndexTripletData* rhs =(Luna< btCharIndexTripletData >::check(L,2));
		btCharIndexTripletData* self=(Luna< btCharIndexTripletData >::check(L,1));
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		btCharIndexTripletData* self= (btCharIndexTripletData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btCharIndexTripletData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,66220201) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btCharIndexTripletData >::check(L,1));
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

		btCharIndexTripletData* self=(Luna< btCharIndexTripletData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btCharIndexTripletData");
		
		return luna_dynamicCast(L,converters,"btCharIndexTripletData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getPad(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPad(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// char btCharIndexTripletData::m_pad()
	static int _bind_getPad(lua_State *L) {
		if (!_lg_typecheck_getPad(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in char btCharIndexTripletData::m_pad() function, expected prototype:\nchar btCharIndexTripletData::m_pad()\nClass arguments details:\n");
		}


		btCharIndexTripletData* self=(Luna< btCharIndexTripletData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call char btCharIndexTripletData::m_pad(). Got : '%s'",typeid(Luna< btCharIndexTripletData >::check(L,1)).name());
		}
		char lret = self->m_pad;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCharIndexTripletData::m_pad(char value)
	static int _bind_setPad(lua_State *L) {
		if (!_lg_typecheck_setPad(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCharIndexTripletData::m_pad(char value) function, expected prototype:\nvoid btCharIndexTripletData::m_pad(char value)\nClass arguments details:\n");
		}

		char value=(char)lua_tointeger(L,2);

		btCharIndexTripletData* self=(Luna< btCharIndexTripletData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCharIndexTripletData::m_pad(char). Got : '%s'",typeid(Luna< btCharIndexTripletData >::check(L,1)).name());
		}
		self->m_pad = value;

		return 0;
	}


	// Operator binds:

};

btCharIndexTripletData* LunaTraits< btCharIndexTripletData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btCharIndexTripletData >::_bind_dtor(btCharIndexTripletData* obj) {
	delete obj;
}

const char LunaTraits< btCharIndexTripletData >::className[] = "btCharIndexTripletData";
const char LunaTraits< btCharIndexTripletData >::fullName[] = "btCharIndexTripletData";
const char LunaTraits< btCharIndexTripletData >::moduleName[] = "bullet";
const char* LunaTraits< btCharIndexTripletData >::parents[] = {0};
const int LunaTraits< btCharIndexTripletData >::hash = 66220201;
const int LunaTraits< btCharIndexTripletData >::uniqueIDs[] = {66220201,0};

luna_RegType LunaTraits< btCharIndexTripletData >::methods[] = {
	{"getPad", &luna_wrapper_btCharIndexTripletData::_bind_getPad},
	{"setPad", &luna_wrapper_btCharIndexTripletData::_bind_setPad},
	{"dynCast", &luna_wrapper_btCharIndexTripletData::_bind_dynCast},
	{"__eq", &luna_wrapper_btCharIndexTripletData::_bind___eq},
	{"fromVoid", &luna_wrapper_btCharIndexTripletData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btCharIndexTripletData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btCharIndexTripletData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btCharIndexTripletData >::enumValues[] = {
	{0,0}
};



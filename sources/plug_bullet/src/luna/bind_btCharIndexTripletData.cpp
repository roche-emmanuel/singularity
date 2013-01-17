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

		btCharIndexTripletData* self=(Luna< btCharIndexTripletData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btCharIndexTripletData");
		
		return luna_dynamicCast(L,converters,"btCharIndexTripletData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getM_pad(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_pad(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// char btCharIndexTripletData::m_pad()
	static int _bind_getM_pad(lua_State *L) {
		if (!_lg_typecheck_getM_pad(L)) {
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
	static int _bind_setM_pad(lua_State *L) {
		if (!_lg_typecheck_setM_pad(L)) {
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
	{"getM_pad", &luna_wrapper_btCharIndexTripletData::_bind_getM_pad},
	{"setM_pad", &luna_wrapper_btCharIndexTripletData::_bind_setM_pad},
	{"dynCast", &luna_wrapper_btCharIndexTripletData::_bind_dynCast},
	{"__eq", &luna_wrapper_btCharIndexTripletData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btCharIndexTripletData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btCharIndexTripletData >::enumValues[] = {
	{0,0}
};



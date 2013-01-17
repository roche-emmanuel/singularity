#include <plug_common.h>

class luna_wrapper_TwEnumVal {
public:
	typedef Luna< TwEnumVal > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,42065624) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(TwEnumVal*)");
		}

		TwEnumVal* rhs =(Luna< TwEnumVal >::check(L,2));
		TwEnumVal* self=(Luna< TwEnumVal >::check(L,1));
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

		TwEnumVal* self=(Luna< TwEnumVal >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("TwEnumVal");
		
		return luna_dynamicCast(L,converters,"TwEnumVal",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLabel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// int TwEnumVal::Value()
	static int _bind_getValue(lua_State *L) {
		if (!_lg_typecheck_getValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int TwEnumVal::Value() function, expected prototype:\nint TwEnumVal::Value()\nClass arguments details:\n");
		}


		TwEnumVal* self=(Luna< TwEnumVal >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int TwEnumVal::Value(). Got : '%s'",typeid(Luna< TwEnumVal >::check(L,1)).name());
		}
		int lret = self->Value;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * TwEnumVal::Label()
	static int _bind_getLabel(lua_State *L) {
		if (!_lg_typecheck_getLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * TwEnumVal::Label() function, expected prototype:\nconst char * TwEnumVal::Label()\nClass arguments details:\n");
		}


		TwEnumVal* self=(Luna< TwEnumVal >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * TwEnumVal::Label(). Got : '%s'",typeid(Luna< TwEnumVal >::check(L,1)).name());
		}
		const char * lret = self->Label;
		lua_pushstring(L,lret);

		return 1;
	}

	// void TwEnumVal::Value(int value)
	static int _bind_setValue(lua_State *L) {
		if (!_lg_typecheck_setValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void TwEnumVal::Value(int value) function, expected prototype:\nvoid TwEnumVal::Value(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		TwEnumVal* self=(Luna< TwEnumVal >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void TwEnumVal::Value(int). Got : '%s'",typeid(Luna< TwEnumVal >::check(L,1)).name());
		}
		self->Value = value;

		return 0;
	}


	// Operator binds:

};

TwEnumVal* LunaTraits< TwEnumVal >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< TwEnumVal >::_bind_dtor(TwEnumVal* obj) {
	delete obj;
}

const char LunaTraits< TwEnumVal >::className[] = "TwEnumVal";
const char LunaTraits< TwEnumVal >::fullName[] = "TwEnumVal";
const char LunaTraits< TwEnumVal >::moduleName[] = "atb";
const char* LunaTraits< TwEnumVal >::parents[] = {0};
const int LunaTraits< TwEnumVal >::hash = 42065624;
const int LunaTraits< TwEnumVal >::uniqueIDs[] = {42065624,0};

luna_RegType LunaTraits< TwEnumVal >::methods[] = {
	{"getValue", &luna_wrapper_TwEnumVal::_bind_getValue},
	{"getLabel", &luna_wrapper_TwEnumVal::_bind_getLabel},
	{"setValue", &luna_wrapper_TwEnumVal::_bind_setValue},
	{"dynCast", &luna_wrapper_TwEnumVal::_bind_dynCast},
	{"__eq", &luna_wrapper_TwEnumVal::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< TwEnumVal >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< TwEnumVal >::enumValues[] = {
	{0,0}
};



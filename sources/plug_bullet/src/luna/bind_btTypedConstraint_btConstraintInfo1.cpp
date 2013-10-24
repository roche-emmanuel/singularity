#include <plug_common.h>

class luna_wrapper_btTypedConstraint_btConstraintInfo1 {
public:
	typedef Luna< btTypedConstraint::btConstraintInfo1 > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,17243935) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btTypedConstraint::btConstraintInfo1*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btTypedConstraint::btConstraintInfo1* rhs =(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,2));
		btTypedConstraint::btConstraintInfo1* self=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,1));
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

		btTypedConstraint::btConstraintInfo1* self= (btTypedConstraint::btConstraintInfo1*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btTypedConstraint::btConstraintInfo1 >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,17243935) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,1));
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

		btTypedConstraint::btConstraintInfo1* self=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btTypedConstraint::btConstraintInfo1");
		
		return luna_dynamicCast(L,converters,"btTypedConstraint::btConstraintInfo1",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getNumConstraintRows(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNub(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNumConstraintRows(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// int btTypedConstraint::btConstraintInfo1::m_numConstraintRows()
	static int _bind_getNumConstraintRows(lua_State *L) {
		if (!_lg_typecheck_getNumConstraintRows(L)) {
			luaL_error(L, "luna typecheck failed in int btTypedConstraint::btConstraintInfo1::m_numConstraintRows() function, expected prototype:\nint btTypedConstraint::btConstraintInfo1::m_numConstraintRows()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btTypedConstraint::btConstraintInfo1* self=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btTypedConstraint::btConstraintInfo1::m_numConstraintRows(). Got : '%s'\n%s",typeid(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_numConstraintRows;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btTypedConstraint::btConstraintInfo1::nub()
	static int _bind_getNub(lua_State *L) {
		if (!_lg_typecheck_getNub(L)) {
			luaL_error(L, "luna typecheck failed in int btTypedConstraint::btConstraintInfo1::nub() function, expected prototype:\nint btTypedConstraint::btConstraintInfo1::nub()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btTypedConstraint::btConstraintInfo1* self=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btTypedConstraint::btConstraintInfo1::nub(). Got : '%s'\n%s",typeid(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->nub;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTypedConstraint::btConstraintInfo1::m_numConstraintRows(int value)
	static int _bind_setNumConstraintRows(lua_State *L) {
		if (!_lg_typecheck_setNumConstraintRows(L)) {
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::btConstraintInfo1::m_numConstraintRows(int value) function, expected prototype:\nvoid btTypedConstraint::btConstraintInfo1::m_numConstraintRows(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btTypedConstraint::btConstraintInfo1* self=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btTypedConstraint::btConstraintInfo1::m_numConstraintRows(int). Got : '%s'\n%s",typeid(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_numConstraintRows = value;

		return 0;
	}

	// void btTypedConstraint::btConstraintInfo1::nub(int value)
	static int _bind_setNub(lua_State *L) {
		if (!_lg_typecheck_setNub(L)) {
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::btConstraintInfo1::nub(int value) function, expected prototype:\nvoid btTypedConstraint::btConstraintInfo1::nub(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btTypedConstraint::btConstraintInfo1* self=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btTypedConstraint::btConstraintInfo1::nub(int). Got : '%s'\n%s",typeid(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->nub = value;

		return 0;
	}


	// Operator binds:

};

btTypedConstraint::btConstraintInfo1* LunaTraits< btTypedConstraint::btConstraintInfo1 >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btTypedConstraint::btConstraintInfo1 >::_bind_dtor(btTypedConstraint::btConstraintInfo1* obj) {
	delete obj;
}

const char LunaTraits< btTypedConstraint::btConstraintInfo1 >::className[] = "btTypedConstraint_btConstraintInfo1";
const char LunaTraits< btTypedConstraint::btConstraintInfo1 >::fullName[] = "btTypedConstraint::btConstraintInfo1";
const char LunaTraits< btTypedConstraint::btConstraintInfo1 >::moduleName[] = "bullet";
const char* LunaTraits< btTypedConstraint::btConstraintInfo1 >::parents[] = {0};
const int LunaTraits< btTypedConstraint::btConstraintInfo1 >::hash = 17243935;
const int LunaTraits< btTypedConstraint::btConstraintInfo1 >::uniqueIDs[] = {17243935,0};

luna_RegType LunaTraits< btTypedConstraint::btConstraintInfo1 >::methods[] = {
	{"getNumConstraintRows", &luna_wrapper_btTypedConstraint_btConstraintInfo1::_bind_getNumConstraintRows},
	{"getNub", &luna_wrapper_btTypedConstraint_btConstraintInfo1::_bind_getNub},
	{"setNumConstraintRows", &luna_wrapper_btTypedConstraint_btConstraintInfo1::_bind_setNumConstraintRows},
	{"setNub", &luna_wrapper_btTypedConstraint_btConstraintInfo1::_bind_setNub},
	{"dynCast", &luna_wrapper_btTypedConstraint_btConstraintInfo1::_bind_dynCast},
	{"__eq", &luna_wrapper_btTypedConstraint_btConstraintInfo1::_bind___eq},
	{"fromVoid", &luna_wrapper_btTypedConstraint_btConstraintInfo1::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btTypedConstraint_btConstraintInfo1::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btTypedConstraint::btConstraintInfo1 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btTypedConstraint::btConstraintInfo1 >::enumValues[] = {
	{0,0}
};



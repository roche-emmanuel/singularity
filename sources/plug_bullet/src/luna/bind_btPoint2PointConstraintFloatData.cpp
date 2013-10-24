#include <plug_common.h>

class luna_wrapper_btPoint2PointConstraintFloatData {
public:
	typedef Luna< btPoint2PointConstraintFloatData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,16600347) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btPoint2PointConstraintFloatData*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btPoint2PointConstraintFloatData* rhs =(Luna< btPoint2PointConstraintFloatData >::check(L,2));
		btPoint2PointConstraintFloatData* self=(Luna< btPoint2PointConstraintFloatData >::check(L,1));
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

		btPoint2PointConstraintFloatData* self= (btPoint2PointConstraintFloatData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btPoint2PointConstraintFloatData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,16600347) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btPoint2PointConstraintFloatData >::check(L,1));
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

		btPoint2PointConstraintFloatData* self=(Luna< btPoint2PointConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btPoint2PointConstraintFloatData");
		
		return luna_dynamicCast(L,converters,"btPoint2PointConstraintFloatData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getTypeConstraintData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPivotInA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPivotInB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTypeConstraintData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,98838043) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPivotInA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPivotInB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,96449857) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btTypedConstraintData btPoint2PointConstraintFloatData::m_typeConstraintData()
	static int _bind_getTypeConstraintData(lua_State *L) {
		if (!_lg_typecheck_getTypeConstraintData(L)) {
			luaL_error(L, "luna typecheck failed in btTypedConstraintData btPoint2PointConstraintFloatData::m_typeConstraintData() function, expected prototype:\nbtTypedConstraintData btPoint2PointConstraintFloatData::m_typeConstraintData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btPoint2PointConstraintFloatData* self=(Luna< btPoint2PointConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btTypedConstraintData btPoint2PointConstraintFloatData::m_typeConstraintData(). Got : '%s'\n%s",typeid(Luna< btPoint2PointConstraintFloatData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btTypedConstraintData* lret = &self->m_typeConstraintData;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTypedConstraintData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData btPoint2PointConstraintFloatData::m_pivotInA()
	static int _bind_getPivotInA(lua_State *L) {
		if (!_lg_typecheck_getPivotInA(L)) {
			luaL_error(L, "luna typecheck failed in btVector3FloatData btPoint2PointConstraintFloatData::m_pivotInA() function, expected prototype:\nbtVector3FloatData btPoint2PointConstraintFloatData::m_pivotInA()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btPoint2PointConstraintFloatData* self=(Luna< btPoint2PointConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3FloatData btPoint2PointConstraintFloatData::m_pivotInA(). Got : '%s'\n%s",typeid(Luna< btPoint2PointConstraintFloatData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3FloatData* lret = &self->m_pivotInA;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// btVector3FloatData btPoint2PointConstraintFloatData::m_pivotInB()
	static int _bind_getPivotInB(lua_State *L) {
		if (!_lg_typecheck_getPivotInB(L)) {
			luaL_error(L, "luna typecheck failed in btVector3FloatData btPoint2PointConstraintFloatData::m_pivotInB() function, expected prototype:\nbtVector3FloatData btPoint2PointConstraintFloatData::m_pivotInB()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btPoint2PointConstraintFloatData* self=(Luna< btPoint2PointConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3FloatData btPoint2PointConstraintFloatData::m_pivotInB(). Got : '%s'\n%s",typeid(Luna< btPoint2PointConstraintFloatData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3FloatData* lret = &self->m_pivotInB;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3FloatData >::push(L,lret,false);

		return 1;
	}

	// void btPoint2PointConstraintFloatData::m_typeConstraintData(btTypedConstraintData value)
	static int _bind_setTypeConstraintData(lua_State *L) {
		if (!_lg_typecheck_setTypeConstraintData(L)) {
			luaL_error(L, "luna typecheck failed in void btPoint2PointConstraintFloatData::m_typeConstraintData(btTypedConstraintData value) function, expected prototype:\nvoid btPoint2PointConstraintFloatData::m_typeConstraintData(btTypedConstraintData value)\nClass arguments details:\narg 1 ID = 98838043\n\n%s",luna_dumpStack(L).c_str());
		}

		btTypedConstraintData* value_ptr=(Luna< btTypedConstraintData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btPoint2PointConstraintFloatData::m_typeConstraintData function");
		}
		btTypedConstraintData value=*value_ptr;

		btPoint2PointConstraintFloatData* self=(Luna< btPoint2PointConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btPoint2PointConstraintFloatData::m_typeConstraintData(btTypedConstraintData). Got : '%s'\n%s",typeid(Luna< btPoint2PointConstraintFloatData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_typeConstraintData = value;

		return 0;
	}

	// void btPoint2PointConstraintFloatData::m_pivotInA(btVector3FloatData value)
	static int _bind_setPivotInA(lua_State *L) {
		if (!_lg_typecheck_setPivotInA(L)) {
			luaL_error(L, "luna typecheck failed in void btPoint2PointConstraintFloatData::m_pivotInA(btVector3FloatData value) function, expected prototype:\nvoid btPoint2PointConstraintFloatData::m_pivotInA(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btPoint2PointConstraintFloatData::m_pivotInA function");
		}
		btVector3FloatData value=*value_ptr;

		btPoint2PointConstraintFloatData* self=(Luna< btPoint2PointConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btPoint2PointConstraintFloatData::m_pivotInA(btVector3FloatData). Got : '%s'\n%s",typeid(Luna< btPoint2PointConstraintFloatData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_pivotInA = value;

		return 0;
	}

	// void btPoint2PointConstraintFloatData::m_pivotInB(btVector3FloatData value)
	static int _bind_setPivotInB(lua_State *L) {
		if (!_lg_typecheck_setPivotInB(L)) {
			luaL_error(L, "luna typecheck failed in void btPoint2PointConstraintFloatData::m_pivotInB(btVector3FloatData value) function, expected prototype:\nvoid btPoint2PointConstraintFloatData::m_pivotInB(btVector3FloatData value)\nClass arguments details:\narg 1 ID = 96449857\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3FloatData* value_ptr=(Luna< btVector3FloatData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btPoint2PointConstraintFloatData::m_pivotInB function");
		}
		btVector3FloatData value=*value_ptr;

		btPoint2PointConstraintFloatData* self=(Luna< btPoint2PointConstraintFloatData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btPoint2PointConstraintFloatData::m_pivotInB(btVector3FloatData). Got : '%s'\n%s",typeid(Luna< btPoint2PointConstraintFloatData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_pivotInB = value;

		return 0;
	}


	// Operator binds:

};

btPoint2PointConstraintFloatData* LunaTraits< btPoint2PointConstraintFloatData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btPoint2PointConstraintFloatData >::_bind_dtor(btPoint2PointConstraintFloatData* obj) {
	delete obj;
}

const char LunaTraits< btPoint2PointConstraintFloatData >::className[] = "btPoint2PointConstraintFloatData";
const char LunaTraits< btPoint2PointConstraintFloatData >::fullName[] = "btPoint2PointConstraintFloatData";
const char LunaTraits< btPoint2PointConstraintFloatData >::moduleName[] = "bullet";
const char* LunaTraits< btPoint2PointConstraintFloatData >::parents[] = {0};
const int LunaTraits< btPoint2PointConstraintFloatData >::hash = 16600347;
const int LunaTraits< btPoint2PointConstraintFloatData >::uniqueIDs[] = {16600347,0};

luna_RegType LunaTraits< btPoint2PointConstraintFloatData >::methods[] = {
	{"getTypeConstraintData", &luna_wrapper_btPoint2PointConstraintFloatData::_bind_getTypeConstraintData},
	{"getPivotInA", &luna_wrapper_btPoint2PointConstraintFloatData::_bind_getPivotInA},
	{"getPivotInB", &luna_wrapper_btPoint2PointConstraintFloatData::_bind_getPivotInB},
	{"setTypeConstraintData", &luna_wrapper_btPoint2PointConstraintFloatData::_bind_setTypeConstraintData},
	{"setPivotInA", &luna_wrapper_btPoint2PointConstraintFloatData::_bind_setPivotInA},
	{"setPivotInB", &luna_wrapper_btPoint2PointConstraintFloatData::_bind_setPivotInB},
	{"dynCast", &luna_wrapper_btPoint2PointConstraintFloatData::_bind_dynCast},
	{"__eq", &luna_wrapper_btPoint2PointConstraintFloatData::_bind___eq},
	{"fromVoid", &luna_wrapper_btPoint2PointConstraintFloatData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btPoint2PointConstraintFloatData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btPoint2PointConstraintFloatData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btPoint2PointConstraintFloatData >::enumValues[] = {
	{0,0}
};



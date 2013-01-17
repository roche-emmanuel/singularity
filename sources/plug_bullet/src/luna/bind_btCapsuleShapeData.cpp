#include <plug_common.h>

class luna_wrapper_btCapsuleShapeData {
public:
	typedef Luna< btCapsuleShapeData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48452508) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCapsuleShapeData*)");
		}

		btCapsuleShapeData* rhs =(Luna< btCapsuleShapeData >::check(L,2));
		btCapsuleShapeData* self=(Luna< btCapsuleShapeData >::check(L,1));
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

		btCapsuleShapeData* self=(Luna< btCapsuleShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btCapsuleShapeData");
		
		return luna_dynamicCast(L,converters,"btCapsuleShapeData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getM_convexInternalShapeData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_upAxis(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_convexInternalShapeData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,7968673) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_upAxis(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btConvexInternalShapeData btCapsuleShapeData::m_convexInternalShapeData()
	static int _bind_getM_convexInternalShapeData(lua_State *L) {
		if (!_lg_typecheck_getM_convexInternalShapeData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConvexInternalShapeData btCapsuleShapeData::m_convexInternalShapeData() function, expected prototype:\nbtConvexInternalShapeData btCapsuleShapeData::m_convexInternalShapeData()\nClass arguments details:\n");
		}


		btCapsuleShapeData* self=(Luna< btCapsuleShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btConvexInternalShapeData btCapsuleShapeData::m_convexInternalShapeData(). Got : '%s'",typeid(Luna< btCapsuleShapeData >::check(L,1)).name());
		}
		const btConvexInternalShapeData* lret = &self->m_convexInternalShapeData;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btConvexInternalShapeData >::push(L,lret,false);

		return 1;
	}

	// int btCapsuleShapeData::m_upAxis()
	static int _bind_getM_upAxis(lua_State *L) {
		if (!_lg_typecheck_getM_upAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCapsuleShapeData::m_upAxis() function, expected prototype:\nint btCapsuleShapeData::m_upAxis()\nClass arguments details:\n");
		}


		btCapsuleShapeData* self=(Luna< btCapsuleShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCapsuleShapeData::m_upAxis(). Got : '%s'",typeid(Luna< btCapsuleShapeData >::check(L,1)).name());
		}
		int lret = self->m_upAxis;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCapsuleShapeData::m_convexInternalShapeData(btConvexInternalShapeData value)
	static int _bind_setM_convexInternalShapeData(lua_State *L) {
		if (!_lg_typecheck_setM_convexInternalShapeData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCapsuleShapeData::m_convexInternalShapeData(btConvexInternalShapeData value) function, expected prototype:\nvoid btCapsuleShapeData::m_convexInternalShapeData(btConvexInternalShapeData value)\nClass arguments details:\narg 1 ID = 7968673\n");
		}

		btConvexInternalShapeData* value_ptr=(Luna< btConvexInternalShapeData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btCapsuleShapeData::m_convexInternalShapeData function");
		}
		btConvexInternalShapeData value=*value_ptr;

		btCapsuleShapeData* self=(Luna< btCapsuleShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCapsuleShapeData::m_convexInternalShapeData(btConvexInternalShapeData). Got : '%s'",typeid(Luna< btCapsuleShapeData >::check(L,1)).name());
		}
		self->m_convexInternalShapeData = value;

		return 0;
	}

	// void btCapsuleShapeData::m_upAxis(int value)
	static int _bind_setM_upAxis(lua_State *L) {
		if (!_lg_typecheck_setM_upAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCapsuleShapeData::m_upAxis(int value) function, expected prototype:\nvoid btCapsuleShapeData::m_upAxis(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btCapsuleShapeData* self=(Luna< btCapsuleShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCapsuleShapeData::m_upAxis(int). Got : '%s'",typeid(Luna< btCapsuleShapeData >::check(L,1)).name());
		}
		self->m_upAxis = value;

		return 0;
	}


	// Operator binds:

};

btCapsuleShapeData* LunaTraits< btCapsuleShapeData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btCapsuleShapeData >::_bind_dtor(btCapsuleShapeData* obj) {
	delete obj;
}

const char LunaTraits< btCapsuleShapeData >::className[] = "btCapsuleShapeData";
const char LunaTraits< btCapsuleShapeData >::fullName[] = "btCapsuleShapeData";
const char LunaTraits< btCapsuleShapeData >::moduleName[] = "bullet";
const char* LunaTraits< btCapsuleShapeData >::parents[] = {0};
const int LunaTraits< btCapsuleShapeData >::hash = 48452508;
const int LunaTraits< btCapsuleShapeData >::uniqueIDs[] = {48452508,0};

luna_RegType LunaTraits< btCapsuleShapeData >::methods[] = {
	{"getM_convexInternalShapeData", &luna_wrapper_btCapsuleShapeData::_bind_getM_convexInternalShapeData},
	{"getM_upAxis", &luna_wrapper_btCapsuleShapeData::_bind_getM_upAxis},
	{"setM_convexInternalShapeData", &luna_wrapper_btCapsuleShapeData::_bind_setM_convexInternalShapeData},
	{"setM_upAxis", &luna_wrapper_btCapsuleShapeData::_bind_setM_upAxis},
	{"dynCast", &luna_wrapper_btCapsuleShapeData::_bind_dynCast},
	{"__eq", &luna_wrapper_btCapsuleShapeData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btCapsuleShapeData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btCapsuleShapeData >::enumValues[] = {
	{0,0}
};


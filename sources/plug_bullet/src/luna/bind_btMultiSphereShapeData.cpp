#include <plug_common.h>

class luna_wrapper_btMultiSphereShapeData {
public:
	typedef Luna< btMultiSphereShapeData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,69068888) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btMultiSphereShapeData*)");
		}

		btMultiSphereShapeData* rhs =(Luna< btMultiSphereShapeData >::check(L,2));
		btMultiSphereShapeData* self=(Luna< btMultiSphereShapeData >::check(L,1));
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

		btMultiSphereShapeData* self= (btMultiSphereShapeData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btMultiSphereShapeData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,69068888) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btMultiSphereShapeData >::check(L,1));
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

		btMultiSphereShapeData* self=(Luna< btMultiSphereShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btMultiSphereShapeData");
		
		return luna_dynamicCast(L,converters,"btMultiSphereShapeData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getConvexInternalShapeData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalPositionArrayPtr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalPositionArraySize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setConvexInternalShapeData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,7968673) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalPositionArrayPtr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,22563878)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalPositionArraySize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btConvexInternalShapeData btMultiSphereShapeData::m_convexInternalShapeData()
	static int _bind_getConvexInternalShapeData(lua_State *L) {
		if (!_lg_typecheck_getConvexInternalShapeData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConvexInternalShapeData btMultiSphereShapeData::m_convexInternalShapeData() function, expected prototype:\nbtConvexInternalShapeData btMultiSphereShapeData::m_convexInternalShapeData()\nClass arguments details:\n");
		}


		btMultiSphereShapeData* self=(Luna< btMultiSphereShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btConvexInternalShapeData btMultiSphereShapeData::m_convexInternalShapeData(). Got : '%s'",typeid(Luna< btMultiSphereShapeData >::check(L,1)).name());
		}
		const btConvexInternalShapeData* lret = &self->m_convexInternalShapeData;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btConvexInternalShapeData >::push(L,lret,false);

		return 1;
	}

	// btPositionAndRadius * btMultiSphereShapeData::m_localPositionArrayPtr()
	static int _bind_getLocalPositionArrayPtr(lua_State *L) {
		if (!_lg_typecheck_getLocalPositionArrayPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPositionAndRadius * btMultiSphereShapeData::m_localPositionArrayPtr() function, expected prototype:\nbtPositionAndRadius * btMultiSphereShapeData::m_localPositionArrayPtr()\nClass arguments details:\n");
		}


		btMultiSphereShapeData* self=(Luna< btMultiSphereShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btPositionAndRadius * btMultiSphereShapeData::m_localPositionArrayPtr(). Got : '%s'",typeid(Luna< btMultiSphereShapeData >::check(L,1)).name());
		}
		btPositionAndRadius * lret = self->m_localPositionArrayPtr;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPositionAndRadius >::push(L,lret,false);

		return 1;
	}

	// int btMultiSphereShapeData::m_localPositionArraySize()
	static int _bind_getLocalPositionArraySize(lua_State *L) {
		if (!_lg_typecheck_getLocalPositionArraySize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btMultiSphereShapeData::m_localPositionArraySize() function, expected prototype:\nint btMultiSphereShapeData::m_localPositionArraySize()\nClass arguments details:\n");
		}


		btMultiSphereShapeData* self=(Luna< btMultiSphereShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btMultiSphereShapeData::m_localPositionArraySize(). Got : '%s'",typeid(Luna< btMultiSphereShapeData >::check(L,1)).name());
		}
		int lret = self->m_localPositionArraySize;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btMultiSphereShapeData::m_convexInternalShapeData(btConvexInternalShapeData value)
	static int _bind_setConvexInternalShapeData(lua_State *L) {
		if (!_lg_typecheck_setConvexInternalShapeData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSphereShapeData::m_convexInternalShapeData(btConvexInternalShapeData value) function, expected prototype:\nvoid btMultiSphereShapeData::m_convexInternalShapeData(btConvexInternalShapeData value)\nClass arguments details:\narg 1 ID = 7968673\n");
		}

		btConvexInternalShapeData* value_ptr=(Luna< btConvexInternalShapeData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btMultiSphereShapeData::m_convexInternalShapeData function");
		}
		btConvexInternalShapeData value=*value_ptr;

		btMultiSphereShapeData* self=(Luna< btMultiSphereShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSphereShapeData::m_convexInternalShapeData(btConvexInternalShapeData). Got : '%s'",typeid(Luna< btMultiSphereShapeData >::check(L,1)).name());
		}
		self->m_convexInternalShapeData = value;

		return 0;
	}

	// void btMultiSphereShapeData::m_localPositionArrayPtr(btPositionAndRadius * value)
	static int _bind_setLocalPositionArrayPtr(lua_State *L) {
		if (!_lg_typecheck_setLocalPositionArrayPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSphereShapeData::m_localPositionArrayPtr(btPositionAndRadius * value) function, expected prototype:\nvoid btMultiSphereShapeData::m_localPositionArrayPtr(btPositionAndRadius * value)\nClass arguments details:\narg 1 ID = 22563878\n");
		}

		btPositionAndRadius* value=(Luna< btPositionAndRadius >::check(L,2));

		btMultiSphereShapeData* self=(Luna< btMultiSphereShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSphereShapeData::m_localPositionArrayPtr(btPositionAndRadius *). Got : '%s'",typeid(Luna< btMultiSphereShapeData >::check(L,1)).name());
		}
		self->m_localPositionArrayPtr = value;

		return 0;
	}

	// void btMultiSphereShapeData::m_localPositionArraySize(int value)
	static int _bind_setLocalPositionArraySize(lua_State *L) {
		if (!_lg_typecheck_setLocalPositionArraySize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSphereShapeData::m_localPositionArraySize(int value) function, expected prototype:\nvoid btMultiSphereShapeData::m_localPositionArraySize(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btMultiSphereShapeData* self=(Luna< btMultiSphereShapeData >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSphereShapeData::m_localPositionArraySize(int). Got : '%s'",typeid(Luna< btMultiSphereShapeData >::check(L,1)).name());
		}
		self->m_localPositionArraySize = value;

		return 0;
	}


	// Operator binds:

};

btMultiSphereShapeData* LunaTraits< btMultiSphereShapeData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btMultiSphereShapeData >::_bind_dtor(btMultiSphereShapeData* obj) {
	delete obj;
}

const char LunaTraits< btMultiSphereShapeData >::className[] = "btMultiSphereShapeData";
const char LunaTraits< btMultiSphereShapeData >::fullName[] = "btMultiSphereShapeData";
const char LunaTraits< btMultiSphereShapeData >::moduleName[] = "bullet";
const char* LunaTraits< btMultiSphereShapeData >::parents[] = {0};
const int LunaTraits< btMultiSphereShapeData >::hash = 69068888;
const int LunaTraits< btMultiSphereShapeData >::uniqueIDs[] = {69068888,0};

luna_RegType LunaTraits< btMultiSphereShapeData >::methods[] = {
	{"getConvexInternalShapeData", &luna_wrapper_btMultiSphereShapeData::_bind_getConvexInternalShapeData},
	{"getLocalPositionArrayPtr", &luna_wrapper_btMultiSphereShapeData::_bind_getLocalPositionArrayPtr},
	{"getLocalPositionArraySize", &luna_wrapper_btMultiSphereShapeData::_bind_getLocalPositionArraySize},
	{"setConvexInternalShapeData", &luna_wrapper_btMultiSphereShapeData::_bind_setConvexInternalShapeData},
	{"setLocalPositionArrayPtr", &luna_wrapper_btMultiSphereShapeData::_bind_setLocalPositionArrayPtr},
	{"setLocalPositionArraySize", &luna_wrapper_btMultiSphereShapeData::_bind_setLocalPositionArraySize},
	{"dynCast", &luna_wrapper_btMultiSphereShapeData::_bind_dynCast},
	{"__eq", &luna_wrapper_btMultiSphereShapeData::_bind___eq},
	{"fromVoid", &luna_wrapper_btMultiSphereShapeData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btMultiSphereShapeData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btMultiSphereShapeData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btMultiSphereShapeData >::enumValues[] = {
	{0,0}
};



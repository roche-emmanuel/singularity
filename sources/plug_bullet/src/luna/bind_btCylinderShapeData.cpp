#include <plug_common.h>

class luna_wrapper_btCylinderShapeData {
public:
	typedef Luna< btCylinderShapeData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72584776) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCylinderShapeData*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btCylinderShapeData* rhs =(Luna< btCylinderShapeData >::check(L,2));
		btCylinderShapeData* self=(Luna< btCylinderShapeData >::check(L,1));
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

		btCylinderShapeData* self= (btCylinderShapeData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btCylinderShapeData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72584776) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btCylinderShapeData >::check(L,1));
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

		btCylinderShapeData* self=(Luna< btCylinderShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btCylinderShapeData");
		
		return luna_dynamicCast(L,converters,"btCylinderShapeData",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getConvexInternalShapeData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUpAxis(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setConvexInternalShapeData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,7968673) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUpAxis(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btConvexInternalShapeData btCylinderShapeData::m_convexInternalShapeData()
	static int _bind_getConvexInternalShapeData(lua_State *L) {
		if (!_lg_typecheck_getConvexInternalShapeData(L)) {
			luaL_error(L, "luna typecheck failed in btConvexInternalShapeData btCylinderShapeData::m_convexInternalShapeData() function, expected prototype:\nbtConvexInternalShapeData btCylinderShapeData::m_convexInternalShapeData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btCylinderShapeData* self=(Luna< btCylinderShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btConvexInternalShapeData btCylinderShapeData::m_convexInternalShapeData(). Got : '%s'\n%s",typeid(Luna< btCylinderShapeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btConvexInternalShapeData* lret = &self->m_convexInternalShapeData;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btConvexInternalShapeData >::push(L,lret,false);

		return 1;
	}

	// int btCylinderShapeData::m_upAxis()
	static int _bind_getUpAxis(lua_State *L) {
		if (!_lg_typecheck_getUpAxis(L)) {
			luaL_error(L, "luna typecheck failed in int btCylinderShapeData::m_upAxis() function, expected prototype:\nint btCylinderShapeData::m_upAxis()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btCylinderShapeData* self=(Luna< btCylinderShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btCylinderShapeData::m_upAxis(). Got : '%s'\n%s",typeid(Luna< btCylinderShapeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_upAxis;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCylinderShapeData::m_convexInternalShapeData(btConvexInternalShapeData value)
	static int _bind_setConvexInternalShapeData(lua_State *L) {
		if (!_lg_typecheck_setConvexInternalShapeData(L)) {
			luaL_error(L, "luna typecheck failed in void btCylinderShapeData::m_convexInternalShapeData(btConvexInternalShapeData value) function, expected prototype:\nvoid btCylinderShapeData::m_convexInternalShapeData(btConvexInternalShapeData value)\nClass arguments details:\narg 1 ID = 7968673\n\n%s",luna_dumpStack(L).c_str());
		}

		btConvexInternalShapeData* value_ptr=(Luna< btConvexInternalShapeData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btCylinderShapeData::m_convexInternalShapeData function");
		}
		btConvexInternalShapeData value=*value_ptr;

		btCylinderShapeData* self=(Luna< btCylinderShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btCylinderShapeData::m_convexInternalShapeData(btConvexInternalShapeData). Got : '%s'\n%s",typeid(Luna< btCylinderShapeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_convexInternalShapeData = value;

		return 0;
	}

	// void btCylinderShapeData::m_upAxis(int value)
	static int _bind_setUpAxis(lua_State *L) {
		if (!_lg_typecheck_setUpAxis(L)) {
			luaL_error(L, "luna typecheck failed in void btCylinderShapeData::m_upAxis(int value) function, expected prototype:\nvoid btCylinderShapeData::m_upAxis(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btCylinderShapeData* self=(Luna< btCylinderShapeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btCylinderShapeData::m_upAxis(int). Got : '%s'\n%s",typeid(Luna< btCylinderShapeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_upAxis = value;

		return 0;
	}


	// Operator binds:

};

btCylinderShapeData* LunaTraits< btCylinderShapeData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btCylinderShapeData >::_bind_dtor(btCylinderShapeData* obj) {
	delete obj;
}

const char LunaTraits< btCylinderShapeData >::className[] = "btCylinderShapeData";
const char LunaTraits< btCylinderShapeData >::fullName[] = "btCylinderShapeData";
const char LunaTraits< btCylinderShapeData >::moduleName[] = "bullet";
const char* LunaTraits< btCylinderShapeData >::parents[] = {0};
const int LunaTraits< btCylinderShapeData >::hash = 72584776;
const int LunaTraits< btCylinderShapeData >::uniqueIDs[] = {72584776,0};

luna_RegType LunaTraits< btCylinderShapeData >::methods[] = {
	{"getConvexInternalShapeData", &luna_wrapper_btCylinderShapeData::_bind_getConvexInternalShapeData},
	{"getUpAxis", &luna_wrapper_btCylinderShapeData::_bind_getUpAxis},
	{"setConvexInternalShapeData", &luna_wrapper_btCylinderShapeData::_bind_setConvexInternalShapeData},
	{"setUpAxis", &luna_wrapper_btCylinderShapeData::_bind_setUpAxis},
	{"dynCast", &luna_wrapper_btCylinderShapeData::_bind_dynCast},
	{"__eq", &luna_wrapper_btCylinderShapeData::_bind___eq},
	{"fromVoid", &luna_wrapper_btCylinderShapeData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btCylinderShapeData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btCylinderShapeData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btCylinderShapeData >::enumValues[] = {
	{0,0}
};



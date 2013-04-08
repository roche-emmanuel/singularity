#include <plug_common.h>

#include <luna/wrappers/wrapper_btTriangleRaycastCallback.h>

class luna_wrapper_btTriangleRaycastCallback {
public:
	typedef Luna< btTriangleRaycastCallback > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btTriangleCallback* self=(Luna< btTriangleCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btTriangleCallback,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
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

		btTriangleRaycastCallback* self= (btTriangleRaycastCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btTriangleRaycastCallback >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,46793426) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btTriangleCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btTriangleCallback(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btTriangleRaycastCallback* ptr= dynamic_cast< btTriangleRaycastCallback* >(Luna< btTriangleCallback >::check(L,1));
		btTriangleRaycastCallback* ptr= luna_caster< btTriangleCallback, btTriangleRaycastCallback >::cast(Luna< btTriangleCallback >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btTriangleRaycastCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_processTriangle(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91544891)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reportHit(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFrom(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHitFraction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFrom(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHitFraction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_processTriangle(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91544891)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btTriangleRaycastCallback::btTriangleRaycastCallback(lua_Table * data, const btVector3 & from, const btVector3 & to, unsigned int flags = 0)
	static btTriangleRaycastCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTriangleRaycastCallback::btTriangleRaycastCallback(lua_Table * data, const btVector3 & from, const btVector3 & to, unsigned int flags = 0) function, expected prototype:\nbtTriangleRaycastCallback::btTriangleRaycastCallback(lua_Table * data, const btVector3 & from, const btVector3 & to, unsigned int flags = 0)\nClass arguments details:\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		const btVector3* from_ptr=(Luna< btVector3 >::check(L,2));
		if( !from_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg from in btTriangleRaycastCallback::btTriangleRaycastCallback function");
		}
		const btVector3 & from=*from_ptr;
		const btVector3* to_ptr=(Luna< btVector3 >::check(L,3));
		if( !to_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg to in btTriangleRaycastCallback::btTriangleRaycastCallback function");
		}
		const btVector3 & to=*to_ptr;
		unsigned int flags=luatop>3 ? (unsigned int)lua_tointeger(L,4) : (unsigned int)0;

		return new wrapper_btTriangleRaycastCallback(L,NULL, from, to, flags);
	}


	// Function binds:
	// void btTriangleRaycastCallback::processTriangle(btVector3 * triangle, int partId, int triangleIndex)
	static int _bind_processTriangle(lua_State *L) {
		if (!_lg_typecheck_processTriangle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleRaycastCallback::processTriangle(btVector3 * triangle, int partId, int triangleIndex) function, expected prototype:\nvoid btTriangleRaycastCallback::processTriangle(btVector3 * triangle, int partId, int triangleIndex)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* triangle=(Luna< btVector3 >::check(L,2));
		int partId=(int)lua_tointeger(L,3);
		int triangleIndex=(int)lua_tointeger(L,4);

		btTriangleRaycastCallback* self=Luna< btTriangleCallback >::checkSubType< btTriangleRaycastCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleRaycastCallback::processTriangle(btVector3 *, int, int). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		self->processTriangle(triangle, partId, triangleIndex);

		return 0;
	}

	// float btTriangleRaycastCallback::reportHit(const btVector3 & hitNormalLocal, float hitFraction, int partId, int triangleIndex)
	static int _bind_reportHit(lua_State *L) {
		if (!_lg_typecheck_reportHit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTriangleRaycastCallback::reportHit(const btVector3 & hitNormalLocal, float hitFraction, int partId, int triangleIndex) function, expected prototype:\nfloat btTriangleRaycastCallback::reportHit(const btVector3 & hitNormalLocal, float hitFraction, int partId, int triangleIndex)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* hitNormalLocal_ptr=(Luna< btVector3 >::check(L,2));
		if( !hitNormalLocal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg hitNormalLocal in btTriangleRaycastCallback::reportHit function");
		}
		const btVector3 & hitNormalLocal=*hitNormalLocal_ptr;
		float hitFraction=(float)lua_tonumber(L,3);
		int partId=(int)lua_tointeger(L,4);
		int triangleIndex=(int)lua_tointeger(L,5);

		btTriangleRaycastCallback* self=Luna< btTriangleCallback >::checkSubType< btTriangleRaycastCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTriangleRaycastCallback::reportHit(const btVector3 &, float, int, int). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		float lret = self->reportHit(hitNormalLocal, hitFraction, partId, triangleIndex);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btTriangleRaycastCallback::m_from()
	static int _bind_getFrom(lua_State *L) {
		if (!_lg_typecheck_getFrom(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btTriangleRaycastCallback::m_from() function, expected prototype:\nbtVector3 btTriangleRaycastCallback::m_from()\nClass arguments details:\n");
		}


		btTriangleRaycastCallback* self=Luna< btTriangleCallback >::checkSubType< btTriangleRaycastCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btTriangleRaycastCallback::m_from(). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_from;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btTriangleRaycastCallback::m_to()
	static int _bind_getTo(lua_State *L) {
		if (!_lg_typecheck_getTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btTriangleRaycastCallback::m_to() function, expected prototype:\nbtVector3 btTriangleRaycastCallback::m_to()\nClass arguments details:\n");
		}


		btTriangleRaycastCallback* self=Luna< btTriangleCallback >::checkSubType< btTriangleRaycastCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btTriangleRaycastCallback::m_to(). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_to;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// unsigned int btTriangleRaycastCallback::m_flags()
	static int _bind_getFlags(lua_State *L) {
		if (!_lg_typecheck_getFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int btTriangleRaycastCallback::m_flags() function, expected prototype:\nunsigned int btTriangleRaycastCallback::m_flags()\nClass arguments details:\n");
		}


		btTriangleRaycastCallback* self=Luna< btTriangleCallback >::checkSubType< btTriangleRaycastCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int btTriangleRaycastCallback::m_flags(). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		unsigned int lret = self->m_flags;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btTriangleRaycastCallback::m_hitFraction()
	static int _bind_getHitFraction(lua_State *L) {
		if (!_lg_typecheck_getHitFraction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTriangleRaycastCallback::m_hitFraction() function, expected prototype:\nfloat btTriangleRaycastCallback::m_hitFraction()\nClass arguments details:\n");
		}


		btTriangleRaycastCallback* self=Luna< btTriangleCallback >::checkSubType< btTriangleRaycastCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTriangleRaycastCallback::m_hitFraction(). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		float lret = self->m_hitFraction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTriangleRaycastCallback::m_from(btVector3 value)
	static int _bind_setFrom(lua_State *L) {
		if (!_lg_typecheck_setFrom(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleRaycastCallback::m_from(btVector3 value) function, expected prototype:\nvoid btTriangleRaycastCallback::m_from(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btTriangleRaycastCallback::m_from function");
		}
		btVector3 value=*value_ptr;

		btTriangleRaycastCallback* self=Luna< btTriangleCallback >::checkSubType< btTriangleRaycastCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleRaycastCallback::m_from(btVector3). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		self->m_from = value;

		return 0;
	}

	// void btTriangleRaycastCallback::m_to(btVector3 value)
	static int _bind_setTo(lua_State *L) {
		if (!_lg_typecheck_setTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleRaycastCallback::m_to(btVector3 value) function, expected prototype:\nvoid btTriangleRaycastCallback::m_to(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btTriangleRaycastCallback::m_to function");
		}
		btVector3 value=*value_ptr;

		btTriangleRaycastCallback* self=Luna< btTriangleCallback >::checkSubType< btTriangleRaycastCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleRaycastCallback::m_to(btVector3). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		self->m_to = value;

		return 0;
	}

	// void btTriangleRaycastCallback::m_flags(unsigned int value)
	static int _bind_setFlags(lua_State *L) {
		if (!_lg_typecheck_setFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleRaycastCallback::m_flags(unsigned int value) function, expected prototype:\nvoid btTriangleRaycastCallback::m_flags(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		btTriangleRaycastCallback* self=Luna< btTriangleCallback >::checkSubType< btTriangleRaycastCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleRaycastCallback::m_flags(unsigned int). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		self->m_flags = value;

		return 0;
	}

	// void btTriangleRaycastCallback::m_hitFraction(float value)
	static int _bind_setHitFraction(lua_State *L) {
		if (!_lg_typecheck_setHitFraction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleRaycastCallback::m_hitFraction(float value) function, expected prototype:\nvoid btTriangleRaycastCallback::m_hitFraction(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btTriangleRaycastCallback* self=Luna< btTriangleCallback >::checkSubType< btTriangleRaycastCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleRaycastCallback::m_hitFraction(float). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		self->m_hitFraction = value;

		return 0;
	}

	// void btTriangleRaycastCallback::base_processTriangle(btVector3 * triangle, int partId, int triangleIndex)
	static int _bind_base_processTriangle(lua_State *L) {
		if (!_lg_typecheck_base_processTriangle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleRaycastCallback::base_processTriangle(btVector3 * triangle, int partId, int triangleIndex) function, expected prototype:\nvoid btTriangleRaycastCallback::base_processTriangle(btVector3 * triangle, int partId, int triangleIndex)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* triangle=(Luna< btVector3 >::check(L,2));
		int partId=(int)lua_tointeger(L,3);
		int triangleIndex=(int)lua_tointeger(L,4);

		btTriangleRaycastCallback* self=Luna< btTriangleCallback >::checkSubType< btTriangleRaycastCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleRaycastCallback::base_processTriangle(btVector3 *, int, int). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		self->btTriangleRaycastCallback::processTriangle(triangle, partId, triangleIndex);

		return 0;
	}


	// Operator binds:

};

btTriangleRaycastCallback* LunaTraits< btTriangleRaycastCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btTriangleRaycastCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// float btTriangleRaycastCallback::reportHit(const btVector3 & hitNormalLocal, float hitFraction, int partId, int triangleIndex)
}

void LunaTraits< btTriangleRaycastCallback >::_bind_dtor(btTriangleRaycastCallback* obj) {
	delete obj;
}

const char LunaTraits< btTriangleRaycastCallback >::className[] = "btTriangleRaycastCallback";
const char LunaTraits< btTriangleRaycastCallback >::fullName[] = "btTriangleRaycastCallback";
const char LunaTraits< btTriangleRaycastCallback >::moduleName[] = "bullet";
const char* LunaTraits< btTriangleRaycastCallback >::parents[] = {"bullet.btTriangleCallback", 0};
const int LunaTraits< btTriangleRaycastCallback >::hash = 4452781;
const int LunaTraits< btTriangleRaycastCallback >::uniqueIDs[] = {46793426,0};

luna_RegType LunaTraits< btTriangleRaycastCallback >::methods[] = {
	{"processTriangle", &luna_wrapper_btTriangleRaycastCallback::_bind_processTriangle},
	{"reportHit", &luna_wrapper_btTriangleRaycastCallback::_bind_reportHit},
	{"getFrom", &luna_wrapper_btTriangleRaycastCallback::_bind_getFrom},
	{"getTo", &luna_wrapper_btTriangleRaycastCallback::_bind_getTo},
	{"getFlags", &luna_wrapper_btTriangleRaycastCallback::_bind_getFlags},
	{"getHitFraction", &luna_wrapper_btTriangleRaycastCallback::_bind_getHitFraction},
	{"setFrom", &luna_wrapper_btTriangleRaycastCallback::_bind_setFrom},
	{"setTo", &luna_wrapper_btTriangleRaycastCallback::_bind_setTo},
	{"setFlags", &luna_wrapper_btTriangleRaycastCallback::_bind_setFlags},
	{"setHitFraction", &luna_wrapper_btTriangleRaycastCallback::_bind_setHitFraction},
	{"base_processTriangle", &luna_wrapper_btTriangleRaycastCallback::_bind_base_processTriangle},
	{"fromVoid", &luna_wrapper_btTriangleRaycastCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btTriangleRaycastCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_btTriangleRaycastCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btTriangleRaycastCallback >::converters[] = {
	{"btTriangleCallback", &luna_wrapper_btTriangleRaycastCallback::_cast_from_btTriangleCallback},
	{0,0}
};

luna_RegEnumType LunaTraits< btTriangleRaycastCallback >::enumValues[] = {
	{"kF_None", btTriangleRaycastCallback::kF_None},
	{"kF_FilterBackfaces", btTriangleRaycastCallback::kF_FilterBackfaces},
	{"kF_KeepUnflippedNormal", btTriangleRaycastCallback::kF_KeepUnflippedNormal},
	{"kF_Terminator", btTriangleRaycastCallback::kF_Terminator},
	{0,0}
};



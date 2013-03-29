#include <plug_common.h>

#include <luna/wrappers/wrapper_btTriangleConvexcastCallback.h>

class luna_wrapper_btTriangleConvexcastCallback {
public:
	typedef Luna< btTriangleConvexcastCallback > luna_t;

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

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,46793426) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btTriangleCallback*)");
		}

		btTriangleCallback* rhs =(Luna< btTriangleCallback >::check(L,2));
		btTriangleCallback* self=(Luna< btTriangleCallback >::check(L,1));
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

		btTriangleConvexcastCallback* self= (btTriangleConvexcastCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btTriangleConvexcastCallback >::push(L,self,false);
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
		//btTriangleConvexcastCallback* ptr= dynamic_cast< btTriangleConvexcastCallback* >(Luna< btTriangleCallback >::check(L,1));
		btTriangleConvexcastCallback* ptr= luna_caster< btTriangleCallback, btTriangleConvexcastCallback >::cast(Luna< btTriangleCallback >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btTriangleConvexcastCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,13247377) ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
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
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getConvexShape(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getConvexShapeFrom(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getConvexShapeTo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTriangleToWorld(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHitFraction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTriangleCollisionMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAllowedPenetration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setConvexShapeFrom(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setConvexShapeTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTriangleToWorld(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHitFraction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTriangleCollisionMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAllowedPenetration(lua_State *L) {
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
	// btTriangleConvexcastCallback::btTriangleConvexcastCallback(lua_Table * data, const btConvexShape * convexShape, const btTransform & convexShapeFrom, const btTransform & convexShapeTo, const btTransform & triangleToWorld, const float triangleCollisionMargin)
	static btTriangleConvexcastCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTriangleConvexcastCallback::btTriangleConvexcastCallback(lua_Table * data, const btConvexShape * convexShape, const btTransform & convexShapeFrom, const btTransform & convexShapeTo, const btTransform & triangleToWorld, const float triangleCollisionMargin) function, expected prototype:\nbtTriangleConvexcastCallback::btTriangleConvexcastCallback(lua_Table * data, const btConvexShape * convexShape, const btTransform & convexShapeFrom, const btTransform & convexShapeTo, const btTransform & triangleToWorld, const float triangleCollisionMargin)\nClass arguments details:\narg 2 ID = 58243831\narg 3 ID = 13247377\narg 4 ID = 13247377\narg 5 ID = 13247377\n");
		}

		const btConvexShape* convexShape=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,2));
		const btTransform* convexShapeFrom_ptr=(Luna< btTransform >::check(L,3));
		if( !convexShapeFrom_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg convexShapeFrom in btTriangleConvexcastCallback::btTriangleConvexcastCallback function");
		}
		const btTransform & convexShapeFrom=*convexShapeFrom_ptr;
		const btTransform* convexShapeTo_ptr=(Luna< btTransform >::check(L,4));
		if( !convexShapeTo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg convexShapeTo in btTriangleConvexcastCallback::btTriangleConvexcastCallback function");
		}
		const btTransform & convexShapeTo=*convexShapeTo_ptr;
		const btTransform* triangleToWorld_ptr=(Luna< btTransform >::check(L,5));
		if( !triangleToWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg triangleToWorld in btTriangleConvexcastCallback::btTriangleConvexcastCallback function");
		}
		const btTransform & triangleToWorld=*triangleToWorld_ptr;
		const float triangleCollisionMargin=(const float)lua_tonumber(L,6);

		return new wrapper_btTriangleConvexcastCallback(L,NULL, convexShape, convexShapeFrom, convexShapeTo, triangleToWorld, triangleCollisionMargin);
	}


	// Function binds:
	// void btTriangleConvexcastCallback::processTriangle(btVector3 * triangle, int partId, int triangleIndex)
	static int _bind_processTriangle(lua_State *L) {
		if (!_lg_typecheck_processTriangle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleConvexcastCallback::processTriangle(btVector3 * triangle, int partId, int triangleIndex) function, expected prototype:\nvoid btTriangleConvexcastCallback::processTriangle(btVector3 * triangle, int partId, int triangleIndex)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* triangle=(Luna< btVector3 >::check(L,2));
		int partId=(int)lua_tointeger(L,3);
		int triangleIndex=(int)lua_tointeger(L,4);

		btTriangleConvexcastCallback* self=Luna< btTriangleCallback >::checkSubType< btTriangleConvexcastCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleConvexcastCallback::processTriangle(btVector3 *, int, int). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		self->processTriangle(triangle, partId, triangleIndex);

		return 0;
	}

	// float btTriangleConvexcastCallback::reportHit(const btVector3 & hitNormalLocal, const btVector3 & hitPointLocal, float hitFraction, int partId, int triangleIndex)
	static int _bind_reportHit(lua_State *L) {
		if (!_lg_typecheck_reportHit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTriangleConvexcastCallback::reportHit(const btVector3 & hitNormalLocal, const btVector3 & hitPointLocal, float hitFraction, int partId, int triangleIndex) function, expected prototype:\nfloat btTriangleConvexcastCallback::reportHit(const btVector3 & hitNormalLocal, const btVector3 & hitPointLocal, float hitFraction, int partId, int triangleIndex)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* hitNormalLocal_ptr=(Luna< btVector3 >::check(L,2));
		if( !hitNormalLocal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg hitNormalLocal in btTriangleConvexcastCallback::reportHit function");
		}
		const btVector3 & hitNormalLocal=*hitNormalLocal_ptr;
		const btVector3* hitPointLocal_ptr=(Luna< btVector3 >::check(L,3));
		if( !hitPointLocal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg hitPointLocal in btTriangleConvexcastCallback::reportHit function");
		}
		const btVector3 & hitPointLocal=*hitPointLocal_ptr;
		float hitFraction=(float)lua_tonumber(L,4);
		int partId=(int)lua_tointeger(L,5);
		int triangleIndex=(int)lua_tointeger(L,6);

		btTriangleConvexcastCallback* self=Luna< btTriangleCallback >::checkSubType< btTriangleConvexcastCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTriangleConvexcastCallback::reportHit(const btVector3 &, const btVector3 &, float, int, int). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		float lret = self->reportHit(hitNormalLocal, hitPointLocal, hitFraction, partId, triangleIndex);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const btConvexShape * btTriangleConvexcastCallback::m_convexShape()
	static int _bind_getConvexShape(lua_State *L) {
		if (!_lg_typecheck_getConvexShape(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btConvexShape * btTriangleConvexcastCallback::m_convexShape() function, expected prototype:\nconst btConvexShape * btTriangleConvexcastCallback::m_convexShape()\nClass arguments details:\n");
		}


		btTriangleConvexcastCallback* self=Luna< btTriangleCallback >::checkSubType< btTriangleConvexcastCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btConvexShape * btTriangleConvexcastCallback::m_convexShape(). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		const btConvexShape * lret = self->m_convexShape;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btConvexShape >::push(L,lret,false);

		return 1;
	}

	// btTransform btTriangleConvexcastCallback::m_convexShapeFrom()
	static int _bind_getConvexShapeFrom(lua_State *L) {
		if (!_lg_typecheck_getConvexShapeFrom(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform btTriangleConvexcastCallback::m_convexShapeFrom() function, expected prototype:\nbtTransform btTriangleConvexcastCallback::m_convexShapeFrom()\nClass arguments details:\n");
		}


		btTriangleConvexcastCallback* self=Luna< btTriangleCallback >::checkSubType< btTriangleConvexcastCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform btTriangleConvexcastCallback::m_convexShapeFrom(). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		const btTransform* lret = &self->m_convexShapeFrom;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// btTransform btTriangleConvexcastCallback::m_convexShapeTo()
	static int _bind_getConvexShapeTo(lua_State *L) {
		if (!_lg_typecheck_getConvexShapeTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform btTriangleConvexcastCallback::m_convexShapeTo() function, expected prototype:\nbtTransform btTriangleConvexcastCallback::m_convexShapeTo()\nClass arguments details:\n");
		}


		btTriangleConvexcastCallback* self=Luna< btTriangleCallback >::checkSubType< btTriangleConvexcastCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform btTriangleConvexcastCallback::m_convexShapeTo(). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		const btTransform* lret = &self->m_convexShapeTo;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// btTransform btTriangleConvexcastCallback::m_triangleToWorld()
	static int _bind_getTriangleToWorld(lua_State *L) {
		if (!_lg_typecheck_getTriangleToWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform btTriangleConvexcastCallback::m_triangleToWorld() function, expected prototype:\nbtTransform btTriangleConvexcastCallback::m_triangleToWorld()\nClass arguments details:\n");
		}


		btTriangleConvexcastCallback* self=Luna< btTriangleCallback >::checkSubType< btTriangleConvexcastCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform btTriangleConvexcastCallback::m_triangleToWorld(). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		const btTransform* lret = &self->m_triangleToWorld;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// float btTriangleConvexcastCallback::m_hitFraction()
	static int _bind_getHitFraction(lua_State *L) {
		if (!_lg_typecheck_getHitFraction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTriangleConvexcastCallback::m_hitFraction() function, expected prototype:\nfloat btTriangleConvexcastCallback::m_hitFraction()\nClass arguments details:\n");
		}


		btTriangleConvexcastCallback* self=Luna< btTriangleCallback >::checkSubType< btTriangleConvexcastCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTriangleConvexcastCallback::m_hitFraction(). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		float lret = self->m_hitFraction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btTriangleConvexcastCallback::m_triangleCollisionMargin()
	static int _bind_getTriangleCollisionMargin(lua_State *L) {
		if (!_lg_typecheck_getTriangleCollisionMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTriangleConvexcastCallback::m_triangleCollisionMargin() function, expected prototype:\nfloat btTriangleConvexcastCallback::m_triangleCollisionMargin()\nClass arguments details:\n");
		}


		btTriangleConvexcastCallback* self=Luna< btTriangleCallback >::checkSubType< btTriangleConvexcastCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTriangleConvexcastCallback::m_triangleCollisionMargin(). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		float lret = self->m_triangleCollisionMargin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btTriangleConvexcastCallback::m_allowedPenetration()
	static int _bind_getAllowedPenetration(lua_State *L) {
		if (!_lg_typecheck_getAllowedPenetration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTriangleConvexcastCallback::m_allowedPenetration() function, expected prototype:\nfloat btTriangleConvexcastCallback::m_allowedPenetration()\nClass arguments details:\n");
		}


		btTriangleConvexcastCallback* self=Luna< btTriangleCallback >::checkSubType< btTriangleConvexcastCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTriangleConvexcastCallback::m_allowedPenetration(). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		float lret = self->m_allowedPenetration;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTriangleConvexcastCallback::m_convexShapeFrom(btTransform value)
	static int _bind_setConvexShapeFrom(lua_State *L) {
		if (!_lg_typecheck_setConvexShapeFrom(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleConvexcastCallback::m_convexShapeFrom(btTransform value) function, expected prototype:\nvoid btTriangleConvexcastCallback::m_convexShapeFrom(btTransform value)\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		btTransform* value_ptr=(Luna< btTransform >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btTriangleConvexcastCallback::m_convexShapeFrom function");
		}
		btTransform value=*value_ptr;

		btTriangleConvexcastCallback* self=Luna< btTriangleCallback >::checkSubType< btTriangleConvexcastCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleConvexcastCallback::m_convexShapeFrom(btTransform). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		self->m_convexShapeFrom = value;

		return 0;
	}

	// void btTriangleConvexcastCallback::m_convexShapeTo(btTransform value)
	static int _bind_setConvexShapeTo(lua_State *L) {
		if (!_lg_typecheck_setConvexShapeTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleConvexcastCallback::m_convexShapeTo(btTransform value) function, expected prototype:\nvoid btTriangleConvexcastCallback::m_convexShapeTo(btTransform value)\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		btTransform* value_ptr=(Luna< btTransform >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btTriangleConvexcastCallback::m_convexShapeTo function");
		}
		btTransform value=*value_ptr;

		btTriangleConvexcastCallback* self=Luna< btTriangleCallback >::checkSubType< btTriangleConvexcastCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleConvexcastCallback::m_convexShapeTo(btTransform). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		self->m_convexShapeTo = value;

		return 0;
	}

	// void btTriangleConvexcastCallback::m_triangleToWorld(btTransform value)
	static int _bind_setTriangleToWorld(lua_State *L) {
		if (!_lg_typecheck_setTriangleToWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleConvexcastCallback::m_triangleToWorld(btTransform value) function, expected prototype:\nvoid btTriangleConvexcastCallback::m_triangleToWorld(btTransform value)\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		btTransform* value_ptr=(Luna< btTransform >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btTriangleConvexcastCallback::m_triangleToWorld function");
		}
		btTransform value=*value_ptr;

		btTriangleConvexcastCallback* self=Luna< btTriangleCallback >::checkSubType< btTriangleConvexcastCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleConvexcastCallback::m_triangleToWorld(btTransform). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		self->m_triangleToWorld = value;

		return 0;
	}

	// void btTriangleConvexcastCallback::m_hitFraction(float value)
	static int _bind_setHitFraction(lua_State *L) {
		if (!_lg_typecheck_setHitFraction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleConvexcastCallback::m_hitFraction(float value) function, expected prototype:\nvoid btTriangleConvexcastCallback::m_hitFraction(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btTriangleConvexcastCallback* self=Luna< btTriangleCallback >::checkSubType< btTriangleConvexcastCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleConvexcastCallback::m_hitFraction(float). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		self->m_hitFraction = value;

		return 0;
	}

	// void btTriangleConvexcastCallback::m_triangleCollisionMargin(float value)
	static int _bind_setTriangleCollisionMargin(lua_State *L) {
		if (!_lg_typecheck_setTriangleCollisionMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleConvexcastCallback::m_triangleCollisionMargin(float value) function, expected prototype:\nvoid btTriangleConvexcastCallback::m_triangleCollisionMargin(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btTriangleConvexcastCallback* self=Luna< btTriangleCallback >::checkSubType< btTriangleConvexcastCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleConvexcastCallback::m_triangleCollisionMargin(float). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		self->m_triangleCollisionMargin = value;

		return 0;
	}

	// void btTriangleConvexcastCallback::m_allowedPenetration(float value)
	static int _bind_setAllowedPenetration(lua_State *L) {
		if (!_lg_typecheck_setAllowedPenetration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleConvexcastCallback::m_allowedPenetration(float value) function, expected prototype:\nvoid btTriangleConvexcastCallback::m_allowedPenetration(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btTriangleConvexcastCallback* self=Luna< btTriangleCallback >::checkSubType< btTriangleConvexcastCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleConvexcastCallback::m_allowedPenetration(float). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		self->m_allowedPenetration = value;

		return 0;
	}

	// void btTriangleConvexcastCallback::base_processTriangle(btVector3 * triangle, int partId, int triangleIndex)
	static int _bind_base_processTriangle(lua_State *L) {
		if (!_lg_typecheck_base_processTriangle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleConvexcastCallback::base_processTriangle(btVector3 * triangle, int partId, int triangleIndex) function, expected prototype:\nvoid btTriangleConvexcastCallback::base_processTriangle(btVector3 * triangle, int partId, int triangleIndex)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* triangle=(Luna< btVector3 >::check(L,2));
		int partId=(int)lua_tointeger(L,3);
		int triangleIndex=(int)lua_tointeger(L,4);

		btTriangleConvexcastCallback* self=Luna< btTriangleCallback >::checkSubType< btTriangleConvexcastCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleConvexcastCallback::base_processTriangle(btVector3 *, int, int). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
		}
		self->btTriangleConvexcastCallback::processTriangle(triangle, partId, triangleIndex);

		return 0;
	}


	// Operator binds:

};

btTriangleConvexcastCallback* LunaTraits< btTriangleConvexcastCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btTriangleConvexcastCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// float btTriangleConvexcastCallback::reportHit(const btVector3 & hitNormalLocal, const btVector3 & hitPointLocal, float hitFraction, int partId, int triangleIndex)
}

void LunaTraits< btTriangleConvexcastCallback >::_bind_dtor(btTriangleConvexcastCallback* obj) {
	delete obj;
}

const char LunaTraits< btTriangleConvexcastCallback >::className[] = "btTriangleConvexcastCallback";
const char LunaTraits< btTriangleConvexcastCallback >::fullName[] = "btTriangleConvexcastCallback";
const char LunaTraits< btTriangleConvexcastCallback >::moduleName[] = "bullet";
const char* LunaTraits< btTriangleConvexcastCallback >::parents[] = {"bullet.btTriangleCallback", 0};
const int LunaTraits< btTriangleConvexcastCallback >::hash = 90654319;
const int LunaTraits< btTriangleConvexcastCallback >::uniqueIDs[] = {46793426,0};

luna_RegType LunaTraits< btTriangleConvexcastCallback >::methods[] = {
	{"processTriangle", &luna_wrapper_btTriangleConvexcastCallback::_bind_processTriangle},
	{"reportHit", &luna_wrapper_btTriangleConvexcastCallback::_bind_reportHit},
	{"getConvexShape", &luna_wrapper_btTriangleConvexcastCallback::_bind_getConvexShape},
	{"getConvexShapeFrom", &luna_wrapper_btTriangleConvexcastCallback::_bind_getConvexShapeFrom},
	{"getConvexShapeTo", &luna_wrapper_btTriangleConvexcastCallback::_bind_getConvexShapeTo},
	{"getTriangleToWorld", &luna_wrapper_btTriangleConvexcastCallback::_bind_getTriangleToWorld},
	{"getHitFraction", &luna_wrapper_btTriangleConvexcastCallback::_bind_getHitFraction},
	{"getTriangleCollisionMargin", &luna_wrapper_btTriangleConvexcastCallback::_bind_getTriangleCollisionMargin},
	{"getAllowedPenetration", &luna_wrapper_btTriangleConvexcastCallback::_bind_getAllowedPenetration},
	{"setConvexShapeFrom", &luna_wrapper_btTriangleConvexcastCallback::_bind_setConvexShapeFrom},
	{"setConvexShapeTo", &luna_wrapper_btTriangleConvexcastCallback::_bind_setConvexShapeTo},
	{"setTriangleToWorld", &luna_wrapper_btTriangleConvexcastCallback::_bind_setTriangleToWorld},
	{"setHitFraction", &luna_wrapper_btTriangleConvexcastCallback::_bind_setHitFraction},
	{"setTriangleCollisionMargin", &luna_wrapper_btTriangleConvexcastCallback::_bind_setTriangleCollisionMargin},
	{"setAllowedPenetration", &luna_wrapper_btTriangleConvexcastCallback::_bind_setAllowedPenetration},
	{"base_processTriangle", &luna_wrapper_btTriangleConvexcastCallback::_bind_base_processTriangle},
	{"__eq", &luna_wrapper_btTriangleConvexcastCallback::_bind___eq},
	{"fromVoid", &luna_wrapper_btTriangleConvexcastCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btTriangleConvexcastCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_btTriangleConvexcastCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btTriangleConvexcastCallback >::converters[] = {
	{"btTriangleCallback", &luna_wrapper_btTriangleConvexcastCallback::_cast_from_btTriangleCallback},
	{0,0}
};

luna_RegEnumType LunaTraits< btTriangleConvexcastCallback >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

class luna_wrapper_btManifoldPoint {
public:
	typedef Luna< btManifoldPoint > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,55239733) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btManifoldPoint*)");
		}

		btManifoldPoint* rhs =(Luna< btManifoldPoint >::check(L,2));
		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
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

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btManifoldPoint");
		
		return luna_dynamicCast(L,converters,"btManifoldPoint",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getDistance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLifeTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPositionWorldOnA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPositionWorldOnB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDistance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAppliedImpulse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_localPointA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_localPointB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_positionWorldOnB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_positionWorldOnA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_normalWorldOnB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_distance1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_combinedFriction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_combinedRollingFriction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_combinedRestitution(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_partId0(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_partId1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_index0(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_index1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_userPersistentData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_lateralFrictionInitialized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_appliedImpulse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_appliedImpulseLateral1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_appliedImpulseLateral2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_contactMotion1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_contactMotion2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_contactCFM1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_contactCFM2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_lifeTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_lateralFrictionDir1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_lateralFrictionDir2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_localPointA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_localPointB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_positionWorldOnB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_positionWorldOnA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_normalWorldOnB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_distance1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_combinedFriction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_combinedRollingFriction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_combinedRestitution(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_partId0(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_partId1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_index0(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_index1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_userPersistentData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_lateralFrictionInitialized(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_appliedImpulse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_appliedImpulseLateral1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_appliedImpulseLateral2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_contactMotion1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_contactMotion2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_contactCFM1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_contactCFM2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_lifeTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_lateralFrictionDir1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_lateralFrictionDir2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btManifoldPoint::btManifoldPoint()
	static btManifoldPoint* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btManifoldPoint::btManifoldPoint() function, expected prototype:\nbtManifoldPoint::btManifoldPoint()\nClass arguments details:\n");
		}


		return new btManifoldPoint();
	}

	// btManifoldPoint::btManifoldPoint(const btVector3 & pointA, const btVector3 & pointB, const btVector3 & normal, float distance)
	static btManifoldPoint* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btManifoldPoint::btManifoldPoint(const btVector3 & pointA, const btVector3 & pointB, const btVector3 & normal, float distance) function, expected prototype:\nbtManifoldPoint::btManifoldPoint(const btVector3 & pointA, const btVector3 & pointB, const btVector3 & normal, float distance)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btVector3* pointA_ptr=(Luna< btVector3 >::check(L,1));
		if( !pointA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pointA in btManifoldPoint::btManifoldPoint function");
		}
		const btVector3 & pointA=*pointA_ptr;
		const btVector3* pointB_ptr=(Luna< btVector3 >::check(L,2));
		if( !pointB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pointB in btManifoldPoint::btManifoldPoint function");
		}
		const btVector3 & pointB=*pointB_ptr;
		const btVector3* normal_ptr=(Luna< btVector3 >::check(L,3));
		if( !normal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normal in btManifoldPoint::btManifoldPoint function");
		}
		const btVector3 & normal=*normal_ptr;
		float distance=(float)lua_tonumber(L,4);

		return new btManifoldPoint(pointA, pointB, normal, distance);
	}

	// Overload binder for btManifoldPoint::btManifoldPoint
	static btManifoldPoint* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btManifoldPoint, cannot match any of the overloads for function btManifoldPoint:\n  btManifoldPoint()\n  btManifoldPoint(const btVector3 &, const btVector3 &, const btVector3 &, float)\n");
		return NULL;
	}


	// Function binds:
	// float btManifoldPoint::getDistance() const
	static int _bind_getDistance(lua_State *L) {
		if (!_lg_typecheck_getDistance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btManifoldPoint::getDistance() const function, expected prototype:\nfloat btManifoldPoint::getDistance() const\nClass arguments details:\n");
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btManifoldPoint::getDistance() const. Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		float lret = self->getDistance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btManifoldPoint::getLifeTime() const
	static int _bind_getLifeTime(lua_State *L) {
		if (!_lg_typecheck_getLifeTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btManifoldPoint::getLifeTime() const function, expected prototype:\nint btManifoldPoint::getLifeTime() const\nClass arguments details:\n");
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btManifoldPoint::getLifeTime() const. Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		int lret = self->getLifeTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const btVector3 & btManifoldPoint::getPositionWorldOnA() const
	static int _bind_getPositionWorldOnA(lua_State *L) {
		if (!_lg_typecheck_getPositionWorldOnA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btManifoldPoint::getPositionWorldOnA() const function, expected prototype:\nconst btVector3 & btManifoldPoint::getPositionWorldOnA() const\nClass arguments details:\n");
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btManifoldPoint::getPositionWorldOnA() const. Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		const btVector3* lret = &self->getPositionWorldOnA();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const btVector3 & btManifoldPoint::getPositionWorldOnB() const
	static int _bind_getPositionWorldOnB(lua_State *L) {
		if (!_lg_typecheck_getPositionWorldOnB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btManifoldPoint::getPositionWorldOnB() const function, expected prototype:\nconst btVector3 & btManifoldPoint::getPositionWorldOnB() const\nClass arguments details:\n");
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btManifoldPoint::getPositionWorldOnB() const. Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		const btVector3* lret = &self->getPositionWorldOnB();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btManifoldPoint::setDistance(float dist)
	static int _bind_setDistance(lua_State *L) {
		if (!_lg_typecheck_setDistance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::setDistance(float dist) function, expected prototype:\nvoid btManifoldPoint::setDistance(float dist)\nClass arguments details:\n");
		}

		float dist=(float)lua_tonumber(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldPoint::setDistance(float). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		self->setDistance(dist);

		return 0;
	}

	// float btManifoldPoint::getAppliedImpulse() const
	static int _bind_getAppliedImpulse(lua_State *L) {
		if (!_lg_typecheck_getAppliedImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btManifoldPoint::getAppliedImpulse() const function, expected prototype:\nfloat btManifoldPoint::getAppliedImpulse() const\nClass arguments details:\n");
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btManifoldPoint::getAppliedImpulse() const. Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		float lret = self->getAppliedImpulse();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btManifoldPoint::m_localPointA()
	static int _bind_getM_localPointA(lua_State *L) {
		if (!_lg_typecheck_getM_localPointA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btManifoldPoint::m_localPointA() function, expected prototype:\nbtVector3 btManifoldPoint::m_localPointA()\nClass arguments details:\n");
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btManifoldPoint::m_localPointA(). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_localPointA;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btManifoldPoint::m_localPointB()
	static int _bind_getM_localPointB(lua_State *L) {
		if (!_lg_typecheck_getM_localPointB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btManifoldPoint::m_localPointB() function, expected prototype:\nbtVector3 btManifoldPoint::m_localPointB()\nClass arguments details:\n");
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btManifoldPoint::m_localPointB(). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_localPointB;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btManifoldPoint::m_positionWorldOnB()
	static int _bind_getM_positionWorldOnB(lua_State *L) {
		if (!_lg_typecheck_getM_positionWorldOnB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btManifoldPoint::m_positionWorldOnB() function, expected prototype:\nbtVector3 btManifoldPoint::m_positionWorldOnB()\nClass arguments details:\n");
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btManifoldPoint::m_positionWorldOnB(). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_positionWorldOnB;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btManifoldPoint::m_positionWorldOnA()
	static int _bind_getM_positionWorldOnA(lua_State *L) {
		if (!_lg_typecheck_getM_positionWorldOnA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btManifoldPoint::m_positionWorldOnA() function, expected prototype:\nbtVector3 btManifoldPoint::m_positionWorldOnA()\nClass arguments details:\n");
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btManifoldPoint::m_positionWorldOnA(). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_positionWorldOnA;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btManifoldPoint::m_normalWorldOnB()
	static int _bind_getM_normalWorldOnB(lua_State *L) {
		if (!_lg_typecheck_getM_normalWorldOnB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btManifoldPoint::m_normalWorldOnB() function, expected prototype:\nbtVector3 btManifoldPoint::m_normalWorldOnB()\nClass arguments details:\n");
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btManifoldPoint::m_normalWorldOnB(). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_normalWorldOnB;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// float btManifoldPoint::m_distance1()
	static int _bind_getM_distance1(lua_State *L) {
		if (!_lg_typecheck_getM_distance1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btManifoldPoint::m_distance1() function, expected prototype:\nfloat btManifoldPoint::m_distance1()\nClass arguments details:\n");
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btManifoldPoint::m_distance1(). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		float lret = self->m_distance1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btManifoldPoint::m_combinedFriction()
	static int _bind_getM_combinedFriction(lua_State *L) {
		if (!_lg_typecheck_getM_combinedFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btManifoldPoint::m_combinedFriction() function, expected prototype:\nfloat btManifoldPoint::m_combinedFriction()\nClass arguments details:\n");
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btManifoldPoint::m_combinedFriction(). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		float lret = self->m_combinedFriction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btManifoldPoint::m_combinedRollingFriction()
	static int _bind_getM_combinedRollingFriction(lua_State *L) {
		if (!_lg_typecheck_getM_combinedRollingFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btManifoldPoint::m_combinedRollingFriction() function, expected prototype:\nfloat btManifoldPoint::m_combinedRollingFriction()\nClass arguments details:\n");
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btManifoldPoint::m_combinedRollingFriction(). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		float lret = self->m_combinedRollingFriction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btManifoldPoint::m_combinedRestitution()
	static int _bind_getM_combinedRestitution(lua_State *L) {
		if (!_lg_typecheck_getM_combinedRestitution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btManifoldPoint::m_combinedRestitution() function, expected prototype:\nfloat btManifoldPoint::m_combinedRestitution()\nClass arguments details:\n");
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btManifoldPoint::m_combinedRestitution(). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		float lret = self->m_combinedRestitution;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btManifoldPoint::m_partId0()
	static int _bind_getM_partId0(lua_State *L) {
		if (!_lg_typecheck_getM_partId0(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btManifoldPoint::m_partId0() function, expected prototype:\nint btManifoldPoint::m_partId0()\nClass arguments details:\n");
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btManifoldPoint::m_partId0(). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		int lret = self->m_partId0;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btManifoldPoint::m_partId1()
	static int _bind_getM_partId1(lua_State *L) {
		if (!_lg_typecheck_getM_partId1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btManifoldPoint::m_partId1() function, expected prototype:\nint btManifoldPoint::m_partId1()\nClass arguments details:\n");
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btManifoldPoint::m_partId1(). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		int lret = self->m_partId1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btManifoldPoint::m_index0()
	static int _bind_getM_index0(lua_State *L) {
		if (!_lg_typecheck_getM_index0(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btManifoldPoint::m_index0() function, expected prototype:\nint btManifoldPoint::m_index0()\nClass arguments details:\n");
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btManifoldPoint::m_index0(). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		int lret = self->m_index0;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btManifoldPoint::m_index1()
	static int _bind_getM_index1(lua_State *L) {
		if (!_lg_typecheck_getM_index1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btManifoldPoint::m_index1() function, expected prototype:\nint btManifoldPoint::m_index1()\nClass arguments details:\n");
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btManifoldPoint::m_index1(). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		int lret = self->m_index1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void * btManifoldPoint::m_userPersistentData()
	static int _bind_getM_userPersistentData(lua_State *L) {
		if (!_lg_typecheck_getM_userPersistentData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btManifoldPoint::m_userPersistentData() function, expected prototype:\nvoid * btManifoldPoint::m_userPersistentData()\nClass arguments details:\n");
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btManifoldPoint::m_userPersistentData(). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		void * lret = self->m_userPersistentData;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// bool btManifoldPoint::m_lateralFrictionInitialized()
	static int _bind_getM_lateralFrictionInitialized(lua_State *L) {
		if (!_lg_typecheck_getM_lateralFrictionInitialized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btManifoldPoint::m_lateralFrictionInitialized() function, expected prototype:\nbool btManifoldPoint::m_lateralFrictionInitialized()\nClass arguments details:\n");
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btManifoldPoint::m_lateralFrictionInitialized(). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		bool lret = self->m_lateralFrictionInitialized;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float btManifoldPoint::m_appliedImpulse()
	static int _bind_getM_appliedImpulse(lua_State *L) {
		if (!_lg_typecheck_getM_appliedImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btManifoldPoint::m_appliedImpulse() function, expected prototype:\nfloat btManifoldPoint::m_appliedImpulse()\nClass arguments details:\n");
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btManifoldPoint::m_appliedImpulse(). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		float lret = self->m_appliedImpulse;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btManifoldPoint::m_appliedImpulseLateral1()
	static int _bind_getM_appliedImpulseLateral1(lua_State *L) {
		if (!_lg_typecheck_getM_appliedImpulseLateral1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btManifoldPoint::m_appliedImpulseLateral1() function, expected prototype:\nfloat btManifoldPoint::m_appliedImpulseLateral1()\nClass arguments details:\n");
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btManifoldPoint::m_appliedImpulseLateral1(). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		float lret = self->m_appliedImpulseLateral1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btManifoldPoint::m_appliedImpulseLateral2()
	static int _bind_getM_appliedImpulseLateral2(lua_State *L) {
		if (!_lg_typecheck_getM_appliedImpulseLateral2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btManifoldPoint::m_appliedImpulseLateral2() function, expected prototype:\nfloat btManifoldPoint::m_appliedImpulseLateral2()\nClass arguments details:\n");
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btManifoldPoint::m_appliedImpulseLateral2(). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		float lret = self->m_appliedImpulseLateral2;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btManifoldPoint::m_contactMotion1()
	static int _bind_getM_contactMotion1(lua_State *L) {
		if (!_lg_typecheck_getM_contactMotion1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btManifoldPoint::m_contactMotion1() function, expected prototype:\nfloat btManifoldPoint::m_contactMotion1()\nClass arguments details:\n");
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btManifoldPoint::m_contactMotion1(). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		float lret = self->m_contactMotion1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btManifoldPoint::m_contactMotion2()
	static int _bind_getM_contactMotion2(lua_State *L) {
		if (!_lg_typecheck_getM_contactMotion2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btManifoldPoint::m_contactMotion2() function, expected prototype:\nfloat btManifoldPoint::m_contactMotion2()\nClass arguments details:\n");
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btManifoldPoint::m_contactMotion2(). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		float lret = self->m_contactMotion2;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btManifoldPoint::m_contactCFM1()
	static int _bind_getM_contactCFM1(lua_State *L) {
		if (!_lg_typecheck_getM_contactCFM1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btManifoldPoint::m_contactCFM1() function, expected prototype:\nfloat btManifoldPoint::m_contactCFM1()\nClass arguments details:\n");
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btManifoldPoint::m_contactCFM1(). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		float lret = self->m_contactCFM1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btManifoldPoint::m_contactCFM2()
	static int _bind_getM_contactCFM2(lua_State *L) {
		if (!_lg_typecheck_getM_contactCFM2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btManifoldPoint::m_contactCFM2() function, expected prototype:\nfloat btManifoldPoint::m_contactCFM2()\nClass arguments details:\n");
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btManifoldPoint::m_contactCFM2(). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		float lret = self->m_contactCFM2;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btManifoldPoint::m_lifeTime()
	static int _bind_getM_lifeTime(lua_State *L) {
		if (!_lg_typecheck_getM_lifeTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btManifoldPoint::m_lifeTime() function, expected prototype:\nint btManifoldPoint::m_lifeTime()\nClass arguments details:\n");
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btManifoldPoint::m_lifeTime(). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		int lret = self->m_lifeTime;
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btManifoldPoint::m_lateralFrictionDir1()
	static int _bind_getM_lateralFrictionDir1(lua_State *L) {
		if (!_lg_typecheck_getM_lateralFrictionDir1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btManifoldPoint::m_lateralFrictionDir1() function, expected prototype:\nbtVector3 btManifoldPoint::m_lateralFrictionDir1()\nClass arguments details:\n");
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btManifoldPoint::m_lateralFrictionDir1(). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_lateralFrictionDir1;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btManifoldPoint::m_lateralFrictionDir2()
	static int _bind_getM_lateralFrictionDir2(lua_State *L) {
		if (!_lg_typecheck_getM_lateralFrictionDir2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btManifoldPoint::m_lateralFrictionDir2() function, expected prototype:\nbtVector3 btManifoldPoint::m_lateralFrictionDir2()\nClass arguments details:\n");
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btManifoldPoint::m_lateralFrictionDir2(). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_lateralFrictionDir2;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btManifoldPoint::m_localPointA(btVector3 value)
	static int _bind_setM_localPointA(lua_State *L) {
		if (!_lg_typecheck_setM_localPointA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_localPointA(btVector3 value) function, expected prototype:\nvoid btManifoldPoint::m_localPointA(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btManifoldPoint::m_localPointA function");
		}
		btVector3 value=*value_ptr;

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_localPointA(btVector3). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		self->m_localPointA = value;

		return 0;
	}

	// void btManifoldPoint::m_localPointB(btVector3 value)
	static int _bind_setM_localPointB(lua_State *L) {
		if (!_lg_typecheck_setM_localPointB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_localPointB(btVector3 value) function, expected prototype:\nvoid btManifoldPoint::m_localPointB(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btManifoldPoint::m_localPointB function");
		}
		btVector3 value=*value_ptr;

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_localPointB(btVector3). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		self->m_localPointB = value;

		return 0;
	}

	// void btManifoldPoint::m_positionWorldOnB(btVector3 value)
	static int _bind_setM_positionWorldOnB(lua_State *L) {
		if (!_lg_typecheck_setM_positionWorldOnB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_positionWorldOnB(btVector3 value) function, expected prototype:\nvoid btManifoldPoint::m_positionWorldOnB(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btManifoldPoint::m_positionWorldOnB function");
		}
		btVector3 value=*value_ptr;

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_positionWorldOnB(btVector3). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		self->m_positionWorldOnB = value;

		return 0;
	}

	// void btManifoldPoint::m_positionWorldOnA(btVector3 value)
	static int _bind_setM_positionWorldOnA(lua_State *L) {
		if (!_lg_typecheck_setM_positionWorldOnA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_positionWorldOnA(btVector3 value) function, expected prototype:\nvoid btManifoldPoint::m_positionWorldOnA(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btManifoldPoint::m_positionWorldOnA function");
		}
		btVector3 value=*value_ptr;

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_positionWorldOnA(btVector3). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		self->m_positionWorldOnA = value;

		return 0;
	}

	// void btManifoldPoint::m_normalWorldOnB(btVector3 value)
	static int _bind_setM_normalWorldOnB(lua_State *L) {
		if (!_lg_typecheck_setM_normalWorldOnB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_normalWorldOnB(btVector3 value) function, expected prototype:\nvoid btManifoldPoint::m_normalWorldOnB(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btManifoldPoint::m_normalWorldOnB function");
		}
		btVector3 value=*value_ptr;

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_normalWorldOnB(btVector3). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		self->m_normalWorldOnB = value;

		return 0;
	}

	// void btManifoldPoint::m_distance1(float value)
	static int _bind_setM_distance1(lua_State *L) {
		if (!_lg_typecheck_setM_distance1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_distance1(float value) function, expected prototype:\nvoid btManifoldPoint::m_distance1(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_distance1(float). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		self->m_distance1 = value;

		return 0;
	}

	// void btManifoldPoint::m_combinedFriction(float value)
	static int _bind_setM_combinedFriction(lua_State *L) {
		if (!_lg_typecheck_setM_combinedFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_combinedFriction(float value) function, expected prototype:\nvoid btManifoldPoint::m_combinedFriction(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_combinedFriction(float). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		self->m_combinedFriction = value;

		return 0;
	}

	// void btManifoldPoint::m_combinedRollingFriction(float value)
	static int _bind_setM_combinedRollingFriction(lua_State *L) {
		if (!_lg_typecheck_setM_combinedRollingFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_combinedRollingFriction(float value) function, expected prototype:\nvoid btManifoldPoint::m_combinedRollingFriction(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_combinedRollingFriction(float). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		self->m_combinedRollingFriction = value;

		return 0;
	}

	// void btManifoldPoint::m_combinedRestitution(float value)
	static int _bind_setM_combinedRestitution(lua_State *L) {
		if (!_lg_typecheck_setM_combinedRestitution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_combinedRestitution(float value) function, expected prototype:\nvoid btManifoldPoint::m_combinedRestitution(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_combinedRestitution(float). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		self->m_combinedRestitution = value;

		return 0;
	}

	// void btManifoldPoint::m_partId0(int value)
	static int _bind_setM_partId0(lua_State *L) {
		if (!_lg_typecheck_setM_partId0(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_partId0(int value) function, expected prototype:\nvoid btManifoldPoint::m_partId0(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_partId0(int). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		self->m_partId0 = value;

		return 0;
	}

	// void btManifoldPoint::m_partId1(int value)
	static int _bind_setM_partId1(lua_State *L) {
		if (!_lg_typecheck_setM_partId1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_partId1(int value) function, expected prototype:\nvoid btManifoldPoint::m_partId1(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_partId1(int). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		self->m_partId1 = value;

		return 0;
	}

	// void btManifoldPoint::m_index0(int value)
	static int _bind_setM_index0(lua_State *L) {
		if (!_lg_typecheck_setM_index0(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_index0(int value) function, expected prototype:\nvoid btManifoldPoint::m_index0(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_index0(int). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		self->m_index0 = value;

		return 0;
	}

	// void btManifoldPoint::m_index1(int value)
	static int _bind_setM_index1(lua_State *L) {
		if (!_lg_typecheck_setM_index1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_index1(int value) function, expected prototype:\nvoid btManifoldPoint::m_index1(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_index1(int). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		self->m_index1 = value;

		return 0;
	}

	// void btManifoldPoint::m_userPersistentData(void * value)
	static int _bind_setM_userPersistentData(lua_State *L) {
		if (!_lg_typecheck_setM_userPersistentData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_userPersistentData(void * value) function, expected prototype:\nvoid btManifoldPoint::m_userPersistentData(void * value)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,2));

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_userPersistentData(void *). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		self->m_userPersistentData = value;

		return 0;
	}

	// void btManifoldPoint::m_lateralFrictionInitialized(bool value)
	static int _bind_setM_lateralFrictionInitialized(lua_State *L) {
		if (!_lg_typecheck_setM_lateralFrictionInitialized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_lateralFrictionInitialized(bool value) function, expected prototype:\nvoid btManifoldPoint::m_lateralFrictionInitialized(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_lateralFrictionInitialized(bool). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		self->m_lateralFrictionInitialized = value;

		return 0;
	}

	// void btManifoldPoint::m_appliedImpulse(float value)
	static int _bind_setM_appliedImpulse(lua_State *L) {
		if (!_lg_typecheck_setM_appliedImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_appliedImpulse(float value) function, expected prototype:\nvoid btManifoldPoint::m_appliedImpulse(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_appliedImpulse(float). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		self->m_appliedImpulse = value;

		return 0;
	}

	// void btManifoldPoint::m_appliedImpulseLateral1(float value)
	static int _bind_setM_appliedImpulseLateral1(lua_State *L) {
		if (!_lg_typecheck_setM_appliedImpulseLateral1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_appliedImpulseLateral1(float value) function, expected prototype:\nvoid btManifoldPoint::m_appliedImpulseLateral1(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_appliedImpulseLateral1(float). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		self->m_appliedImpulseLateral1 = value;

		return 0;
	}

	// void btManifoldPoint::m_appliedImpulseLateral2(float value)
	static int _bind_setM_appliedImpulseLateral2(lua_State *L) {
		if (!_lg_typecheck_setM_appliedImpulseLateral2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_appliedImpulseLateral2(float value) function, expected prototype:\nvoid btManifoldPoint::m_appliedImpulseLateral2(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_appliedImpulseLateral2(float). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		self->m_appliedImpulseLateral2 = value;

		return 0;
	}

	// void btManifoldPoint::m_contactMotion1(float value)
	static int _bind_setM_contactMotion1(lua_State *L) {
		if (!_lg_typecheck_setM_contactMotion1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_contactMotion1(float value) function, expected prototype:\nvoid btManifoldPoint::m_contactMotion1(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_contactMotion1(float). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		self->m_contactMotion1 = value;

		return 0;
	}

	// void btManifoldPoint::m_contactMotion2(float value)
	static int _bind_setM_contactMotion2(lua_State *L) {
		if (!_lg_typecheck_setM_contactMotion2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_contactMotion2(float value) function, expected prototype:\nvoid btManifoldPoint::m_contactMotion2(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_contactMotion2(float). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		self->m_contactMotion2 = value;

		return 0;
	}

	// void btManifoldPoint::m_contactCFM1(float value)
	static int _bind_setM_contactCFM1(lua_State *L) {
		if (!_lg_typecheck_setM_contactCFM1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_contactCFM1(float value) function, expected prototype:\nvoid btManifoldPoint::m_contactCFM1(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_contactCFM1(float). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		self->m_contactCFM1 = value;

		return 0;
	}

	// void btManifoldPoint::m_contactCFM2(float value)
	static int _bind_setM_contactCFM2(lua_State *L) {
		if (!_lg_typecheck_setM_contactCFM2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_contactCFM2(float value) function, expected prototype:\nvoid btManifoldPoint::m_contactCFM2(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_contactCFM2(float). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		self->m_contactCFM2 = value;

		return 0;
	}

	// void btManifoldPoint::m_lifeTime(int value)
	static int _bind_setM_lifeTime(lua_State *L) {
		if (!_lg_typecheck_setM_lifeTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_lifeTime(int value) function, expected prototype:\nvoid btManifoldPoint::m_lifeTime(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_lifeTime(int). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		self->m_lifeTime = value;

		return 0;
	}

	// void btManifoldPoint::m_lateralFrictionDir1(btVector3 value)
	static int _bind_setM_lateralFrictionDir1(lua_State *L) {
		if (!_lg_typecheck_setM_lateralFrictionDir1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_lateralFrictionDir1(btVector3 value) function, expected prototype:\nvoid btManifoldPoint::m_lateralFrictionDir1(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btManifoldPoint::m_lateralFrictionDir1 function");
		}
		btVector3 value=*value_ptr;

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_lateralFrictionDir1(btVector3). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		self->m_lateralFrictionDir1 = value;

		return 0;
	}

	// void btManifoldPoint::m_lateralFrictionDir2(btVector3 value)
	static int _bind_setM_lateralFrictionDir2(lua_State *L) {
		if (!_lg_typecheck_setM_lateralFrictionDir2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_lateralFrictionDir2(btVector3 value) function, expected prototype:\nvoid btManifoldPoint::m_lateralFrictionDir2(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btManifoldPoint::m_lateralFrictionDir2 function");
		}
		btVector3 value=*value_ptr;

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_lateralFrictionDir2(btVector3). Got : '%s'",typeid(Luna< btManifoldPoint >::check(L,1)).name());
		}
		self->m_lateralFrictionDir2 = value;

		return 0;
	}


	// Operator binds:

};

btManifoldPoint* LunaTraits< btManifoldPoint >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btManifoldPoint::_bind_ctor(L);
}

void LunaTraits< btManifoldPoint >::_bind_dtor(btManifoldPoint* obj) {
	delete obj;
}

const char LunaTraits< btManifoldPoint >::className[] = "btManifoldPoint";
const char LunaTraits< btManifoldPoint >::fullName[] = "btManifoldPoint";
const char LunaTraits< btManifoldPoint >::moduleName[] = "bullet";
const char* LunaTraits< btManifoldPoint >::parents[] = {0};
const int LunaTraits< btManifoldPoint >::hash = 55239733;
const int LunaTraits< btManifoldPoint >::uniqueIDs[] = {55239733,0};

luna_RegType LunaTraits< btManifoldPoint >::methods[] = {
	{"getDistance", &luna_wrapper_btManifoldPoint::_bind_getDistance},
	{"getLifeTime", &luna_wrapper_btManifoldPoint::_bind_getLifeTime},
	{"getPositionWorldOnA", &luna_wrapper_btManifoldPoint::_bind_getPositionWorldOnA},
	{"getPositionWorldOnB", &luna_wrapper_btManifoldPoint::_bind_getPositionWorldOnB},
	{"setDistance", &luna_wrapper_btManifoldPoint::_bind_setDistance},
	{"getAppliedImpulse", &luna_wrapper_btManifoldPoint::_bind_getAppliedImpulse},
	{"getM_localPointA", &luna_wrapper_btManifoldPoint::_bind_getM_localPointA},
	{"getM_localPointB", &luna_wrapper_btManifoldPoint::_bind_getM_localPointB},
	{"getM_positionWorldOnB", &luna_wrapper_btManifoldPoint::_bind_getM_positionWorldOnB},
	{"getM_positionWorldOnA", &luna_wrapper_btManifoldPoint::_bind_getM_positionWorldOnA},
	{"getM_normalWorldOnB", &luna_wrapper_btManifoldPoint::_bind_getM_normalWorldOnB},
	{"getM_distance1", &luna_wrapper_btManifoldPoint::_bind_getM_distance1},
	{"getM_combinedFriction", &luna_wrapper_btManifoldPoint::_bind_getM_combinedFriction},
	{"getM_combinedRollingFriction", &luna_wrapper_btManifoldPoint::_bind_getM_combinedRollingFriction},
	{"getM_combinedRestitution", &luna_wrapper_btManifoldPoint::_bind_getM_combinedRestitution},
	{"getM_partId0", &luna_wrapper_btManifoldPoint::_bind_getM_partId0},
	{"getM_partId1", &luna_wrapper_btManifoldPoint::_bind_getM_partId1},
	{"getM_index0", &luna_wrapper_btManifoldPoint::_bind_getM_index0},
	{"getM_index1", &luna_wrapper_btManifoldPoint::_bind_getM_index1},
	{"getM_userPersistentData", &luna_wrapper_btManifoldPoint::_bind_getM_userPersistentData},
	{"getM_lateralFrictionInitialized", &luna_wrapper_btManifoldPoint::_bind_getM_lateralFrictionInitialized},
	{"getM_appliedImpulse", &luna_wrapper_btManifoldPoint::_bind_getM_appliedImpulse},
	{"getM_appliedImpulseLateral1", &luna_wrapper_btManifoldPoint::_bind_getM_appliedImpulseLateral1},
	{"getM_appliedImpulseLateral2", &luna_wrapper_btManifoldPoint::_bind_getM_appliedImpulseLateral2},
	{"getM_contactMotion1", &luna_wrapper_btManifoldPoint::_bind_getM_contactMotion1},
	{"getM_contactMotion2", &luna_wrapper_btManifoldPoint::_bind_getM_contactMotion2},
	{"getM_contactCFM1", &luna_wrapper_btManifoldPoint::_bind_getM_contactCFM1},
	{"getM_contactCFM2", &luna_wrapper_btManifoldPoint::_bind_getM_contactCFM2},
	{"getM_lifeTime", &luna_wrapper_btManifoldPoint::_bind_getM_lifeTime},
	{"getM_lateralFrictionDir1", &luna_wrapper_btManifoldPoint::_bind_getM_lateralFrictionDir1},
	{"getM_lateralFrictionDir2", &luna_wrapper_btManifoldPoint::_bind_getM_lateralFrictionDir2},
	{"setM_localPointA", &luna_wrapper_btManifoldPoint::_bind_setM_localPointA},
	{"setM_localPointB", &luna_wrapper_btManifoldPoint::_bind_setM_localPointB},
	{"setM_positionWorldOnB", &luna_wrapper_btManifoldPoint::_bind_setM_positionWorldOnB},
	{"setM_positionWorldOnA", &luna_wrapper_btManifoldPoint::_bind_setM_positionWorldOnA},
	{"setM_normalWorldOnB", &luna_wrapper_btManifoldPoint::_bind_setM_normalWorldOnB},
	{"setM_distance1", &luna_wrapper_btManifoldPoint::_bind_setM_distance1},
	{"setM_combinedFriction", &luna_wrapper_btManifoldPoint::_bind_setM_combinedFriction},
	{"setM_combinedRollingFriction", &luna_wrapper_btManifoldPoint::_bind_setM_combinedRollingFriction},
	{"setM_combinedRestitution", &luna_wrapper_btManifoldPoint::_bind_setM_combinedRestitution},
	{"setM_partId0", &luna_wrapper_btManifoldPoint::_bind_setM_partId0},
	{"setM_partId1", &luna_wrapper_btManifoldPoint::_bind_setM_partId1},
	{"setM_index0", &luna_wrapper_btManifoldPoint::_bind_setM_index0},
	{"setM_index1", &luna_wrapper_btManifoldPoint::_bind_setM_index1},
	{"setM_userPersistentData", &luna_wrapper_btManifoldPoint::_bind_setM_userPersistentData},
	{"setM_lateralFrictionInitialized", &luna_wrapper_btManifoldPoint::_bind_setM_lateralFrictionInitialized},
	{"setM_appliedImpulse", &luna_wrapper_btManifoldPoint::_bind_setM_appliedImpulse},
	{"setM_appliedImpulseLateral1", &luna_wrapper_btManifoldPoint::_bind_setM_appliedImpulseLateral1},
	{"setM_appliedImpulseLateral2", &luna_wrapper_btManifoldPoint::_bind_setM_appliedImpulseLateral2},
	{"setM_contactMotion1", &luna_wrapper_btManifoldPoint::_bind_setM_contactMotion1},
	{"setM_contactMotion2", &luna_wrapper_btManifoldPoint::_bind_setM_contactMotion2},
	{"setM_contactCFM1", &luna_wrapper_btManifoldPoint::_bind_setM_contactCFM1},
	{"setM_contactCFM2", &luna_wrapper_btManifoldPoint::_bind_setM_contactCFM2},
	{"setM_lifeTime", &luna_wrapper_btManifoldPoint::_bind_setM_lifeTime},
	{"setM_lateralFrictionDir1", &luna_wrapper_btManifoldPoint::_bind_setM_lateralFrictionDir1},
	{"setM_lateralFrictionDir2", &luna_wrapper_btManifoldPoint::_bind_setM_lateralFrictionDir2},
	{"dynCast", &luna_wrapper_btManifoldPoint::_bind_dynCast},
	{"__eq", &luna_wrapper_btManifoldPoint::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btManifoldPoint >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btManifoldPoint >::enumValues[] = {
	{0,0}
};



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
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btManifoldPoint*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btManifoldPoint* rhs =(Luna< btManifoldPoint >::check(L,2));
		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
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

		btManifoldPoint* self= (btManifoldPoint*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btManifoldPoint >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,55239733) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btManifoldPoint >::check(L,1));
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
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
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

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAppliedImpulse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalPointA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalPointB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNormalWorldOnB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDistance1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCombinedFriction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCombinedRollingFriction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCombinedRestitution(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPartId0(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPartId1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIndex0(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIndex1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUserPersistentData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLateralFrictionInitialized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAppliedImpulseLateral1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAppliedImpulseLateral2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getContactMotion1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getContactMotion2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getContactCFM1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getContactCFM2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLateralFrictionDir1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLateralFrictionDir2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLocalPointA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalPointB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPositionWorldOnB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPositionWorldOnA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNormalWorldOnB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDistance1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCombinedFriction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCombinedRollingFriction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCombinedRestitution(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPartId0(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPartId1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIndex0(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIndex1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUserPersistentData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLateralFrictionInitialized(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAppliedImpulse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAppliedImpulseLateral1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAppliedImpulseLateral2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setContactMotion1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setContactMotion2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setContactCFM1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setContactCFM2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLifeTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLateralFrictionDir1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLateralFrictionDir2(lua_State *L) {
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
			luaL_error(L, "luna typecheck failed in btManifoldPoint::btManifoldPoint() function, expected prototype:\nbtManifoldPoint::btManifoldPoint()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new btManifoldPoint();
	}

	// btManifoldPoint::btManifoldPoint(const btVector3 & pointA, const btVector3 & pointB, const btVector3 & normal, float distance)
	static btManifoldPoint* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in btManifoldPoint::btManifoldPoint(const btVector3 & pointA, const btVector3 & pointB, const btVector3 & normal, float distance) function, expected prototype:\nbtManifoldPoint::btManifoldPoint(const btVector3 & pointA, const btVector3 & pointB, const btVector3 & normal, float distance)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
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
			luaL_error(L, "luna typecheck failed in float btManifoldPoint::getDistance() const function, expected prototype:\nfloat btManifoldPoint::getDistance() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btManifoldPoint::getDistance() const. Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getDistance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btManifoldPoint::getLifeTime() const
	static int _bind_getLifeTime(lua_State *L) {
		if (!_lg_typecheck_getLifeTime(L)) {
			luaL_error(L, "luna typecheck failed in int btManifoldPoint::getLifeTime() const function, expected prototype:\nint btManifoldPoint::getLifeTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btManifoldPoint::getLifeTime() const. Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getLifeTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const btVector3 & btManifoldPoint::getPositionWorldOnA() const
	static int _bind_getPositionWorldOnA(lua_State *L) {
		if (!_lg_typecheck_getPositionWorldOnA(L)) {
			luaL_error(L, "luna typecheck failed in const btVector3 & btManifoldPoint::getPositionWorldOnA() const function, expected prototype:\nconst btVector3 & btManifoldPoint::getPositionWorldOnA() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const btVector3 & btManifoldPoint::getPositionWorldOnA() const. Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->getPositionWorldOnA();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const btVector3 & btManifoldPoint::getPositionWorldOnB() const
	static int _bind_getPositionWorldOnB(lua_State *L) {
		if (!_lg_typecheck_getPositionWorldOnB(L)) {
			luaL_error(L, "luna typecheck failed in const btVector3 & btManifoldPoint::getPositionWorldOnB() const function, expected prototype:\nconst btVector3 & btManifoldPoint::getPositionWorldOnB() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const btVector3 & btManifoldPoint::getPositionWorldOnB() const. Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->getPositionWorldOnB();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btManifoldPoint::setDistance(float dist)
	static int _bind_setDistance(lua_State *L) {
		if (!_lg_typecheck_setDistance(L)) {
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::setDistance(float dist) function, expected prototype:\nvoid btManifoldPoint::setDistance(float dist)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float dist=(float)lua_tonumber(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btManifoldPoint::setDistance(float). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDistance(dist);

		return 0;
	}

	// float btManifoldPoint::getAppliedImpulse() const
	static int _bind_getAppliedImpulse(lua_State *L) {
		if (!_lg_typecheck_getAppliedImpulse(L)) {
			luaL_error(L, "luna typecheck failed in float btManifoldPoint::getAppliedImpulse() const function, expected prototype:\nfloat btManifoldPoint::getAppliedImpulse() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btManifoldPoint::getAppliedImpulse() const. Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getAppliedImpulse();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btManifoldPoint::m_localPointA()
	static int _bind_getLocalPointA(lua_State *L) {
		if (!_lg_typecheck_getLocalPointA(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btManifoldPoint::m_localPointA() function, expected prototype:\nbtVector3 btManifoldPoint::m_localPointA()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btManifoldPoint::m_localPointA(). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->m_localPointA;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btManifoldPoint::m_localPointB()
	static int _bind_getLocalPointB(lua_State *L) {
		if (!_lg_typecheck_getLocalPointB(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btManifoldPoint::m_localPointB() function, expected prototype:\nbtVector3 btManifoldPoint::m_localPointB()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btManifoldPoint::m_localPointB(). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->m_localPointB;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btManifoldPoint::m_normalWorldOnB()
	static int _bind_getNormalWorldOnB(lua_State *L) {
		if (!_lg_typecheck_getNormalWorldOnB(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btManifoldPoint::m_normalWorldOnB() function, expected prototype:\nbtVector3 btManifoldPoint::m_normalWorldOnB()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btManifoldPoint::m_normalWorldOnB(). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->m_normalWorldOnB;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// float btManifoldPoint::m_distance1()
	static int _bind_getDistance1(lua_State *L) {
		if (!_lg_typecheck_getDistance1(L)) {
			luaL_error(L, "luna typecheck failed in float btManifoldPoint::m_distance1() function, expected prototype:\nfloat btManifoldPoint::m_distance1()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btManifoldPoint::m_distance1(). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_distance1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btManifoldPoint::m_combinedFriction()
	static int _bind_getCombinedFriction(lua_State *L) {
		if (!_lg_typecheck_getCombinedFriction(L)) {
			luaL_error(L, "luna typecheck failed in float btManifoldPoint::m_combinedFriction() function, expected prototype:\nfloat btManifoldPoint::m_combinedFriction()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btManifoldPoint::m_combinedFriction(). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_combinedFriction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btManifoldPoint::m_combinedRollingFriction()
	static int _bind_getCombinedRollingFriction(lua_State *L) {
		if (!_lg_typecheck_getCombinedRollingFriction(L)) {
			luaL_error(L, "luna typecheck failed in float btManifoldPoint::m_combinedRollingFriction() function, expected prototype:\nfloat btManifoldPoint::m_combinedRollingFriction()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btManifoldPoint::m_combinedRollingFriction(). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_combinedRollingFriction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btManifoldPoint::m_combinedRestitution()
	static int _bind_getCombinedRestitution(lua_State *L) {
		if (!_lg_typecheck_getCombinedRestitution(L)) {
			luaL_error(L, "luna typecheck failed in float btManifoldPoint::m_combinedRestitution() function, expected prototype:\nfloat btManifoldPoint::m_combinedRestitution()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btManifoldPoint::m_combinedRestitution(). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_combinedRestitution;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btManifoldPoint::m_partId0()
	static int _bind_getPartId0(lua_State *L) {
		if (!_lg_typecheck_getPartId0(L)) {
			luaL_error(L, "luna typecheck failed in int btManifoldPoint::m_partId0() function, expected prototype:\nint btManifoldPoint::m_partId0()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btManifoldPoint::m_partId0(). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_partId0;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btManifoldPoint::m_partId1()
	static int _bind_getPartId1(lua_State *L) {
		if (!_lg_typecheck_getPartId1(L)) {
			luaL_error(L, "luna typecheck failed in int btManifoldPoint::m_partId1() function, expected prototype:\nint btManifoldPoint::m_partId1()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btManifoldPoint::m_partId1(). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_partId1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btManifoldPoint::m_index0()
	static int _bind_getIndex0(lua_State *L) {
		if (!_lg_typecheck_getIndex0(L)) {
			luaL_error(L, "luna typecheck failed in int btManifoldPoint::m_index0() function, expected prototype:\nint btManifoldPoint::m_index0()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btManifoldPoint::m_index0(). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_index0;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btManifoldPoint::m_index1()
	static int _bind_getIndex1(lua_State *L) {
		if (!_lg_typecheck_getIndex1(L)) {
			luaL_error(L, "luna typecheck failed in int btManifoldPoint::m_index1() function, expected prototype:\nint btManifoldPoint::m_index1()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btManifoldPoint::m_index1(). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_index1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void * btManifoldPoint::m_userPersistentData()
	static int _bind_getUserPersistentData(lua_State *L) {
		if (!_lg_typecheck_getUserPersistentData(L)) {
			luaL_error(L, "luna typecheck failed in void * btManifoldPoint::m_userPersistentData() function, expected prototype:\nvoid * btManifoldPoint::m_userPersistentData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void * btManifoldPoint::m_userPersistentData(). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->m_userPersistentData;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// bool btManifoldPoint::m_lateralFrictionInitialized()
	static int _bind_getLateralFrictionInitialized(lua_State *L) {
		if (!_lg_typecheck_getLateralFrictionInitialized(L)) {
			luaL_error(L, "luna typecheck failed in bool btManifoldPoint::m_lateralFrictionInitialized() function, expected prototype:\nbool btManifoldPoint::m_lateralFrictionInitialized()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btManifoldPoint::m_lateralFrictionInitialized(). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->m_lateralFrictionInitialized;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float btManifoldPoint::m_appliedImpulseLateral1()
	static int _bind_getAppliedImpulseLateral1(lua_State *L) {
		if (!_lg_typecheck_getAppliedImpulseLateral1(L)) {
			luaL_error(L, "luna typecheck failed in float btManifoldPoint::m_appliedImpulseLateral1() function, expected prototype:\nfloat btManifoldPoint::m_appliedImpulseLateral1()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btManifoldPoint::m_appliedImpulseLateral1(). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_appliedImpulseLateral1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btManifoldPoint::m_appliedImpulseLateral2()
	static int _bind_getAppliedImpulseLateral2(lua_State *L) {
		if (!_lg_typecheck_getAppliedImpulseLateral2(L)) {
			luaL_error(L, "luna typecheck failed in float btManifoldPoint::m_appliedImpulseLateral2() function, expected prototype:\nfloat btManifoldPoint::m_appliedImpulseLateral2()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btManifoldPoint::m_appliedImpulseLateral2(). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_appliedImpulseLateral2;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btManifoldPoint::m_contactMotion1()
	static int _bind_getContactMotion1(lua_State *L) {
		if (!_lg_typecheck_getContactMotion1(L)) {
			luaL_error(L, "luna typecheck failed in float btManifoldPoint::m_contactMotion1() function, expected prototype:\nfloat btManifoldPoint::m_contactMotion1()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btManifoldPoint::m_contactMotion1(). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_contactMotion1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btManifoldPoint::m_contactMotion2()
	static int _bind_getContactMotion2(lua_State *L) {
		if (!_lg_typecheck_getContactMotion2(L)) {
			luaL_error(L, "luna typecheck failed in float btManifoldPoint::m_contactMotion2() function, expected prototype:\nfloat btManifoldPoint::m_contactMotion2()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btManifoldPoint::m_contactMotion2(). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_contactMotion2;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btManifoldPoint::m_contactCFM1()
	static int _bind_getContactCFM1(lua_State *L) {
		if (!_lg_typecheck_getContactCFM1(L)) {
			luaL_error(L, "luna typecheck failed in float btManifoldPoint::m_contactCFM1() function, expected prototype:\nfloat btManifoldPoint::m_contactCFM1()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btManifoldPoint::m_contactCFM1(). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_contactCFM1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btManifoldPoint::m_contactCFM2()
	static int _bind_getContactCFM2(lua_State *L) {
		if (!_lg_typecheck_getContactCFM2(L)) {
			luaL_error(L, "luna typecheck failed in float btManifoldPoint::m_contactCFM2() function, expected prototype:\nfloat btManifoldPoint::m_contactCFM2()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btManifoldPoint::m_contactCFM2(). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_contactCFM2;
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btManifoldPoint::m_lateralFrictionDir1()
	static int _bind_getLateralFrictionDir1(lua_State *L) {
		if (!_lg_typecheck_getLateralFrictionDir1(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btManifoldPoint::m_lateralFrictionDir1() function, expected prototype:\nbtVector3 btManifoldPoint::m_lateralFrictionDir1()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btManifoldPoint::m_lateralFrictionDir1(). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->m_lateralFrictionDir1;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btManifoldPoint::m_lateralFrictionDir2()
	static int _bind_getLateralFrictionDir2(lua_State *L) {
		if (!_lg_typecheck_getLateralFrictionDir2(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btManifoldPoint::m_lateralFrictionDir2() function, expected prototype:\nbtVector3 btManifoldPoint::m_lateralFrictionDir2()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btManifoldPoint::m_lateralFrictionDir2(). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->m_lateralFrictionDir2;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btManifoldPoint::m_localPointA(btVector3 value)
	static int _bind_setLocalPointA(lua_State *L) {
		if (!_lg_typecheck_setLocalPointA(L)) {
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_localPointA(btVector3 value) function, expected prototype:\nvoid btManifoldPoint::m_localPointA(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btManifoldPoint::m_localPointA function");
		}
		btVector3 value=*value_ptr;

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_localPointA(btVector3). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_localPointA = value;

		return 0;
	}

	// void btManifoldPoint::m_localPointB(btVector3 value)
	static int _bind_setLocalPointB(lua_State *L) {
		if (!_lg_typecheck_setLocalPointB(L)) {
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_localPointB(btVector3 value) function, expected prototype:\nvoid btManifoldPoint::m_localPointB(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btManifoldPoint::m_localPointB function");
		}
		btVector3 value=*value_ptr;

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_localPointB(btVector3). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_localPointB = value;

		return 0;
	}

	// void btManifoldPoint::m_positionWorldOnB(btVector3 value)
	static int _bind_setPositionWorldOnB(lua_State *L) {
		if (!_lg_typecheck_setPositionWorldOnB(L)) {
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_positionWorldOnB(btVector3 value) function, expected prototype:\nvoid btManifoldPoint::m_positionWorldOnB(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btManifoldPoint::m_positionWorldOnB function");
		}
		btVector3 value=*value_ptr;

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_positionWorldOnB(btVector3). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_positionWorldOnB = value;

		return 0;
	}

	// void btManifoldPoint::m_positionWorldOnA(btVector3 value)
	static int _bind_setPositionWorldOnA(lua_State *L) {
		if (!_lg_typecheck_setPositionWorldOnA(L)) {
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_positionWorldOnA(btVector3 value) function, expected prototype:\nvoid btManifoldPoint::m_positionWorldOnA(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btManifoldPoint::m_positionWorldOnA function");
		}
		btVector3 value=*value_ptr;

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_positionWorldOnA(btVector3). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_positionWorldOnA = value;

		return 0;
	}

	// void btManifoldPoint::m_normalWorldOnB(btVector3 value)
	static int _bind_setNormalWorldOnB(lua_State *L) {
		if (!_lg_typecheck_setNormalWorldOnB(L)) {
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_normalWorldOnB(btVector3 value) function, expected prototype:\nvoid btManifoldPoint::m_normalWorldOnB(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btManifoldPoint::m_normalWorldOnB function");
		}
		btVector3 value=*value_ptr;

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_normalWorldOnB(btVector3). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_normalWorldOnB = value;

		return 0;
	}

	// void btManifoldPoint::m_distance1(float value)
	static int _bind_setDistance1(lua_State *L) {
		if (!_lg_typecheck_setDistance1(L)) {
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_distance1(float value) function, expected prototype:\nvoid btManifoldPoint::m_distance1(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_distance1(float). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_distance1 = value;

		return 0;
	}

	// void btManifoldPoint::m_combinedFriction(float value)
	static int _bind_setCombinedFriction(lua_State *L) {
		if (!_lg_typecheck_setCombinedFriction(L)) {
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_combinedFriction(float value) function, expected prototype:\nvoid btManifoldPoint::m_combinedFriction(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_combinedFriction(float). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_combinedFriction = value;

		return 0;
	}

	// void btManifoldPoint::m_combinedRollingFriction(float value)
	static int _bind_setCombinedRollingFriction(lua_State *L) {
		if (!_lg_typecheck_setCombinedRollingFriction(L)) {
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_combinedRollingFriction(float value) function, expected prototype:\nvoid btManifoldPoint::m_combinedRollingFriction(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_combinedRollingFriction(float). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_combinedRollingFriction = value;

		return 0;
	}

	// void btManifoldPoint::m_combinedRestitution(float value)
	static int _bind_setCombinedRestitution(lua_State *L) {
		if (!_lg_typecheck_setCombinedRestitution(L)) {
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_combinedRestitution(float value) function, expected prototype:\nvoid btManifoldPoint::m_combinedRestitution(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_combinedRestitution(float). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_combinedRestitution = value;

		return 0;
	}

	// void btManifoldPoint::m_partId0(int value)
	static int _bind_setPartId0(lua_State *L) {
		if (!_lg_typecheck_setPartId0(L)) {
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_partId0(int value) function, expected prototype:\nvoid btManifoldPoint::m_partId0(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_partId0(int). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_partId0 = value;

		return 0;
	}

	// void btManifoldPoint::m_partId1(int value)
	static int _bind_setPartId1(lua_State *L) {
		if (!_lg_typecheck_setPartId1(L)) {
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_partId1(int value) function, expected prototype:\nvoid btManifoldPoint::m_partId1(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_partId1(int). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_partId1 = value;

		return 0;
	}

	// void btManifoldPoint::m_index0(int value)
	static int _bind_setIndex0(lua_State *L) {
		if (!_lg_typecheck_setIndex0(L)) {
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_index0(int value) function, expected prototype:\nvoid btManifoldPoint::m_index0(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_index0(int). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_index0 = value;

		return 0;
	}

	// void btManifoldPoint::m_index1(int value)
	static int _bind_setIndex1(lua_State *L) {
		if (!_lg_typecheck_setIndex1(L)) {
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_index1(int value) function, expected prototype:\nvoid btManifoldPoint::m_index1(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_index1(int). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_index1 = value;

		return 0;
	}

	// void btManifoldPoint::m_userPersistentData(void * value)
	static int _bind_setUserPersistentData(lua_State *L) {
		if (!_lg_typecheck_setUserPersistentData(L)) {
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_userPersistentData(void * value) function, expected prototype:\nvoid btManifoldPoint::m_userPersistentData(void * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* value=(Luna< void >::check(L,2));

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_userPersistentData(void *). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_userPersistentData = value;

		return 0;
	}

	// void btManifoldPoint::m_lateralFrictionInitialized(bool value)
	static int _bind_setLateralFrictionInitialized(lua_State *L) {
		if (!_lg_typecheck_setLateralFrictionInitialized(L)) {
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_lateralFrictionInitialized(bool value) function, expected prototype:\nvoid btManifoldPoint::m_lateralFrictionInitialized(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_lateralFrictionInitialized(bool). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_lateralFrictionInitialized = value;

		return 0;
	}

	// void btManifoldPoint::m_appliedImpulse(float value)
	static int _bind_setAppliedImpulse(lua_State *L) {
		if (!_lg_typecheck_setAppliedImpulse(L)) {
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_appliedImpulse(float value) function, expected prototype:\nvoid btManifoldPoint::m_appliedImpulse(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_appliedImpulse(float). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_appliedImpulse = value;

		return 0;
	}

	// void btManifoldPoint::m_appliedImpulseLateral1(float value)
	static int _bind_setAppliedImpulseLateral1(lua_State *L) {
		if (!_lg_typecheck_setAppliedImpulseLateral1(L)) {
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_appliedImpulseLateral1(float value) function, expected prototype:\nvoid btManifoldPoint::m_appliedImpulseLateral1(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_appliedImpulseLateral1(float). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_appliedImpulseLateral1 = value;

		return 0;
	}

	// void btManifoldPoint::m_appliedImpulseLateral2(float value)
	static int _bind_setAppliedImpulseLateral2(lua_State *L) {
		if (!_lg_typecheck_setAppliedImpulseLateral2(L)) {
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_appliedImpulseLateral2(float value) function, expected prototype:\nvoid btManifoldPoint::m_appliedImpulseLateral2(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_appliedImpulseLateral2(float). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_appliedImpulseLateral2 = value;

		return 0;
	}

	// void btManifoldPoint::m_contactMotion1(float value)
	static int _bind_setContactMotion1(lua_State *L) {
		if (!_lg_typecheck_setContactMotion1(L)) {
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_contactMotion1(float value) function, expected prototype:\nvoid btManifoldPoint::m_contactMotion1(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_contactMotion1(float). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_contactMotion1 = value;

		return 0;
	}

	// void btManifoldPoint::m_contactMotion2(float value)
	static int _bind_setContactMotion2(lua_State *L) {
		if (!_lg_typecheck_setContactMotion2(L)) {
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_contactMotion2(float value) function, expected prototype:\nvoid btManifoldPoint::m_contactMotion2(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_contactMotion2(float). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_contactMotion2 = value;

		return 0;
	}

	// void btManifoldPoint::m_contactCFM1(float value)
	static int _bind_setContactCFM1(lua_State *L) {
		if (!_lg_typecheck_setContactCFM1(L)) {
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_contactCFM1(float value) function, expected prototype:\nvoid btManifoldPoint::m_contactCFM1(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_contactCFM1(float). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_contactCFM1 = value;

		return 0;
	}

	// void btManifoldPoint::m_contactCFM2(float value)
	static int _bind_setContactCFM2(lua_State *L) {
		if (!_lg_typecheck_setContactCFM2(L)) {
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_contactCFM2(float value) function, expected prototype:\nvoid btManifoldPoint::m_contactCFM2(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_contactCFM2(float). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_contactCFM2 = value;

		return 0;
	}

	// void btManifoldPoint::m_lifeTime(int value)
	static int _bind_setLifeTime(lua_State *L) {
		if (!_lg_typecheck_setLifeTime(L)) {
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_lifeTime(int value) function, expected prototype:\nvoid btManifoldPoint::m_lifeTime(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_lifeTime(int). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_lifeTime = value;

		return 0;
	}

	// void btManifoldPoint::m_lateralFrictionDir1(btVector3 value)
	static int _bind_setLateralFrictionDir1(lua_State *L) {
		if (!_lg_typecheck_setLateralFrictionDir1(L)) {
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_lateralFrictionDir1(btVector3 value) function, expected prototype:\nvoid btManifoldPoint::m_lateralFrictionDir1(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btManifoldPoint::m_lateralFrictionDir1 function");
		}
		btVector3 value=*value_ptr;

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_lateralFrictionDir1(btVector3). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_lateralFrictionDir1 = value;

		return 0;
	}

	// void btManifoldPoint::m_lateralFrictionDir2(btVector3 value)
	static int _bind_setLateralFrictionDir2(lua_State *L) {
		if (!_lg_typecheck_setLateralFrictionDir2(L)) {
			luaL_error(L, "luna typecheck failed in void btManifoldPoint::m_lateralFrictionDir2(btVector3 value) function, expected prototype:\nvoid btManifoldPoint::m_lateralFrictionDir2(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btManifoldPoint::m_lateralFrictionDir2 function");
		}
		btVector3 value=*value_ptr;

		btManifoldPoint* self=(Luna< btManifoldPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btManifoldPoint::m_lateralFrictionDir2(btVector3). Got : '%s'\n%s",typeid(Luna< btManifoldPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
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
	{"getLocalPointA", &luna_wrapper_btManifoldPoint::_bind_getLocalPointA},
	{"getLocalPointB", &luna_wrapper_btManifoldPoint::_bind_getLocalPointB},
	{"getNormalWorldOnB", &luna_wrapper_btManifoldPoint::_bind_getNormalWorldOnB},
	{"getDistance1", &luna_wrapper_btManifoldPoint::_bind_getDistance1},
	{"getCombinedFriction", &luna_wrapper_btManifoldPoint::_bind_getCombinedFriction},
	{"getCombinedRollingFriction", &luna_wrapper_btManifoldPoint::_bind_getCombinedRollingFriction},
	{"getCombinedRestitution", &luna_wrapper_btManifoldPoint::_bind_getCombinedRestitution},
	{"getPartId0", &luna_wrapper_btManifoldPoint::_bind_getPartId0},
	{"getPartId1", &luna_wrapper_btManifoldPoint::_bind_getPartId1},
	{"getIndex0", &luna_wrapper_btManifoldPoint::_bind_getIndex0},
	{"getIndex1", &luna_wrapper_btManifoldPoint::_bind_getIndex1},
	{"getUserPersistentData", &luna_wrapper_btManifoldPoint::_bind_getUserPersistentData},
	{"getLateralFrictionInitialized", &luna_wrapper_btManifoldPoint::_bind_getLateralFrictionInitialized},
	{"getAppliedImpulseLateral1", &luna_wrapper_btManifoldPoint::_bind_getAppliedImpulseLateral1},
	{"getAppliedImpulseLateral2", &luna_wrapper_btManifoldPoint::_bind_getAppliedImpulseLateral2},
	{"getContactMotion1", &luna_wrapper_btManifoldPoint::_bind_getContactMotion1},
	{"getContactMotion2", &luna_wrapper_btManifoldPoint::_bind_getContactMotion2},
	{"getContactCFM1", &luna_wrapper_btManifoldPoint::_bind_getContactCFM1},
	{"getContactCFM2", &luna_wrapper_btManifoldPoint::_bind_getContactCFM2},
	{"getLateralFrictionDir1", &luna_wrapper_btManifoldPoint::_bind_getLateralFrictionDir1},
	{"getLateralFrictionDir2", &luna_wrapper_btManifoldPoint::_bind_getLateralFrictionDir2},
	{"setLocalPointA", &luna_wrapper_btManifoldPoint::_bind_setLocalPointA},
	{"setLocalPointB", &luna_wrapper_btManifoldPoint::_bind_setLocalPointB},
	{"setPositionWorldOnB", &luna_wrapper_btManifoldPoint::_bind_setPositionWorldOnB},
	{"setPositionWorldOnA", &luna_wrapper_btManifoldPoint::_bind_setPositionWorldOnA},
	{"setNormalWorldOnB", &luna_wrapper_btManifoldPoint::_bind_setNormalWorldOnB},
	{"setDistance1", &luna_wrapper_btManifoldPoint::_bind_setDistance1},
	{"setCombinedFriction", &luna_wrapper_btManifoldPoint::_bind_setCombinedFriction},
	{"setCombinedRollingFriction", &luna_wrapper_btManifoldPoint::_bind_setCombinedRollingFriction},
	{"setCombinedRestitution", &luna_wrapper_btManifoldPoint::_bind_setCombinedRestitution},
	{"setPartId0", &luna_wrapper_btManifoldPoint::_bind_setPartId0},
	{"setPartId1", &luna_wrapper_btManifoldPoint::_bind_setPartId1},
	{"setIndex0", &luna_wrapper_btManifoldPoint::_bind_setIndex0},
	{"setIndex1", &luna_wrapper_btManifoldPoint::_bind_setIndex1},
	{"setUserPersistentData", &luna_wrapper_btManifoldPoint::_bind_setUserPersistentData},
	{"setLateralFrictionInitialized", &luna_wrapper_btManifoldPoint::_bind_setLateralFrictionInitialized},
	{"setAppliedImpulse", &luna_wrapper_btManifoldPoint::_bind_setAppliedImpulse},
	{"setAppliedImpulseLateral1", &luna_wrapper_btManifoldPoint::_bind_setAppliedImpulseLateral1},
	{"setAppliedImpulseLateral2", &luna_wrapper_btManifoldPoint::_bind_setAppliedImpulseLateral2},
	{"setContactMotion1", &luna_wrapper_btManifoldPoint::_bind_setContactMotion1},
	{"setContactMotion2", &luna_wrapper_btManifoldPoint::_bind_setContactMotion2},
	{"setContactCFM1", &luna_wrapper_btManifoldPoint::_bind_setContactCFM1},
	{"setContactCFM2", &luna_wrapper_btManifoldPoint::_bind_setContactCFM2},
	{"setLifeTime", &luna_wrapper_btManifoldPoint::_bind_setLifeTime},
	{"setLateralFrictionDir1", &luna_wrapper_btManifoldPoint::_bind_setLateralFrictionDir1},
	{"setLateralFrictionDir2", &luna_wrapper_btManifoldPoint::_bind_setLateralFrictionDir2},
	{"dynCast", &luna_wrapper_btManifoldPoint::_bind_dynCast},
	{"__eq", &luna_wrapper_btManifoldPoint::_bind___eq},
	{"fromVoid", &luna_wrapper_btManifoldPoint::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btManifoldPoint::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btManifoldPoint >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btManifoldPoint >::enumValues[] = {
	{0,0}
};



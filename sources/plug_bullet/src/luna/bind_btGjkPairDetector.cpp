#include <plug_common.h>

#include <luna/wrappers/wrapper_btGjkPairDetector.h>

class luna_wrapper_btGjkPairDetector {
public:
	typedef Luna< btGjkPairDetector > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btDiscreteCollisionDetectorInterface* self=(Luna< btDiscreteCollisionDetectorInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btDiscreteCollisionDetectorInterface,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,36160911) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btDiscreteCollisionDetectorInterface*)");
		}

		btDiscreteCollisionDetectorInterface* rhs =(Luna< btDiscreteCollisionDetectorInterface >::check(L,2));
		btDiscreteCollisionDetectorInterface* self=(Luna< btDiscreteCollisionDetectorInterface >::check(L,1));
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

		btGjkPairDetector* self= (btGjkPairDetector*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btGjkPairDetector >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,36160911) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btDiscreteCollisionDetectorInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btDiscreteCollisionDetectorInterface(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btGjkPairDetector* ptr= dynamic_cast< btGjkPairDetector* >(Luna< btDiscreteCollisionDetectorInterface >::check(L,1));
		btGjkPairDetector* ptr= luna_caster< btDiscreteCollisionDetectorInterface, btGjkPairDetector >::cast(Luna< btDiscreteCollisionDetectorInterface >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btGjkPairDetector >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58243831)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,95428271)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btVoronoiSimplexSolver >::check(L,3)) ) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,62802517)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< btConvexPenetrationDepthSolver >::check(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58243831)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,95428271)) ) return false;
		if( (lua_isnil(L,7)==0 && !(Luna< btVoronoiSimplexSolver >::check(L,7)) ) ) return false;
		if( (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,62802517)) ) return false;
		if( (lua_isnil(L,8)==0 && !(Luna< btConvexPenetrationDepthSolver >::check(L,8)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,58243831)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,3)) ) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,95428271)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< btVoronoiSimplexSolver >::check(L,4)) ) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,62802517)) ) return false;
		if( (lua_isnil(L,5)==0 && !(Luna< btConvexPenetrationDepthSolver >::check(L,5)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,58243831)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,3)) ) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		if( (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,95428271)) ) return false;
		if( (lua_isnil(L,8)==0 && !(Luna< btVoronoiSimplexSolver >::check(L,8)) ) ) return false;
		if( (lua_isnil(L,9)==0 && !Luna<void>::has_uniqueid(L,9,62802517)) ) return false;
		if( (lua_isnil(L,9)==0 && !(Luna< btConvexPenetrationDepthSolver >::check(L,9)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getClosestPoints(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,99215612) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25324514) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,63441741)) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getClosestPointsNonVirtual(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,99215612) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25324514) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,63441741)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMinkowskiA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMinkowskiB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCachedSeperatingAxis(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCachedSeparatingAxis(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCachedSeparatingDistance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPenetrationDepthSolver(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,62802517)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIgnoreMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLastUsedMethod(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurIter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDegenerateSimplex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCatchDegeneracies(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLastUsedMethod(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCurIter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDegenerateSimplex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCatchDegeneracies(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getClosestPoints(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,99215612) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25324514) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,63441741)) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btGjkPairDetector::btGjkPairDetector(const btConvexShape * objectA, const btConvexShape * objectB, btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * penetrationDepthSolver)
	static btGjkPairDetector* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGjkPairDetector::btGjkPairDetector(const btConvexShape * objectA, const btConvexShape * objectB, btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * penetrationDepthSolver) function, expected prototype:\nbtGjkPairDetector::btGjkPairDetector(const btConvexShape * objectA, const btConvexShape * objectB, btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * penetrationDepthSolver)\nClass arguments details:\narg 1 ID = 58243831\narg 2 ID = 58243831\narg 3 ID = 95428271\narg 4 ID = 62802517\n");
		}

		const btConvexShape* objectA=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,1));
		const btConvexShape* objectB=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,2));
		btVoronoiSimplexSolver* simplexSolver=(Luna< btVoronoiSimplexSolver >::check(L,3));
		btConvexPenetrationDepthSolver* penetrationDepthSolver=(Luna< btConvexPenetrationDepthSolver >::check(L,4));

		return new btGjkPairDetector(objectA, objectB, simplexSolver, penetrationDepthSolver);
	}

	// btGjkPairDetector::btGjkPairDetector(const btConvexShape * objectA, const btConvexShape * objectB, int shapeTypeA, int shapeTypeB, float marginA, float marginB, btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * penetrationDepthSolver)
	static btGjkPairDetector* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGjkPairDetector::btGjkPairDetector(const btConvexShape * objectA, const btConvexShape * objectB, int shapeTypeA, int shapeTypeB, float marginA, float marginB, btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * penetrationDepthSolver) function, expected prototype:\nbtGjkPairDetector::btGjkPairDetector(const btConvexShape * objectA, const btConvexShape * objectB, int shapeTypeA, int shapeTypeB, float marginA, float marginB, btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * penetrationDepthSolver)\nClass arguments details:\narg 1 ID = 58243831\narg 2 ID = 58243831\narg 7 ID = 95428271\narg 8 ID = 62802517\n");
		}

		const btConvexShape* objectA=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,1));
		const btConvexShape* objectB=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,2));
		int shapeTypeA=(int)lua_tointeger(L,3);
		int shapeTypeB=(int)lua_tointeger(L,4);
		float marginA=(float)lua_tonumber(L,5);
		float marginB=(float)lua_tonumber(L,6);
		btVoronoiSimplexSolver* simplexSolver=(Luna< btVoronoiSimplexSolver >::check(L,7));
		btConvexPenetrationDepthSolver* penetrationDepthSolver=(Luna< btConvexPenetrationDepthSolver >::check(L,8));

		return new btGjkPairDetector(objectA, objectB, shapeTypeA, shapeTypeB, marginA, marginB, simplexSolver, penetrationDepthSolver);
	}

	// btGjkPairDetector::btGjkPairDetector(lua_Table * data, const btConvexShape * objectA, const btConvexShape * objectB, btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * penetrationDepthSolver)
	static btGjkPairDetector* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGjkPairDetector::btGjkPairDetector(lua_Table * data, const btConvexShape * objectA, const btConvexShape * objectB, btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * penetrationDepthSolver) function, expected prototype:\nbtGjkPairDetector::btGjkPairDetector(lua_Table * data, const btConvexShape * objectA, const btConvexShape * objectB, btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * penetrationDepthSolver)\nClass arguments details:\narg 2 ID = 58243831\narg 3 ID = 58243831\narg 4 ID = 95428271\narg 5 ID = 62802517\n");
		}

		const btConvexShape* objectA=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,2));
		const btConvexShape* objectB=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,3));
		btVoronoiSimplexSolver* simplexSolver=(Luna< btVoronoiSimplexSolver >::check(L,4));
		btConvexPenetrationDepthSolver* penetrationDepthSolver=(Luna< btConvexPenetrationDepthSolver >::check(L,5));

		return new wrapper_btGjkPairDetector(L,NULL, objectA, objectB, simplexSolver, penetrationDepthSolver);
	}

	// btGjkPairDetector::btGjkPairDetector(lua_Table * data, const btConvexShape * objectA, const btConvexShape * objectB, int shapeTypeA, int shapeTypeB, float marginA, float marginB, btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * penetrationDepthSolver)
	static btGjkPairDetector* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGjkPairDetector::btGjkPairDetector(lua_Table * data, const btConvexShape * objectA, const btConvexShape * objectB, int shapeTypeA, int shapeTypeB, float marginA, float marginB, btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * penetrationDepthSolver) function, expected prototype:\nbtGjkPairDetector::btGjkPairDetector(lua_Table * data, const btConvexShape * objectA, const btConvexShape * objectB, int shapeTypeA, int shapeTypeB, float marginA, float marginB, btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * penetrationDepthSolver)\nClass arguments details:\narg 2 ID = 58243831\narg 3 ID = 58243831\narg 8 ID = 95428271\narg 9 ID = 62802517\n");
		}

		const btConvexShape* objectA=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,2));
		const btConvexShape* objectB=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,3));
		int shapeTypeA=(int)lua_tointeger(L,4);
		int shapeTypeB=(int)lua_tointeger(L,5);
		float marginA=(float)lua_tonumber(L,6);
		float marginB=(float)lua_tonumber(L,7);
		btVoronoiSimplexSolver* simplexSolver=(Luna< btVoronoiSimplexSolver >::check(L,8));
		btConvexPenetrationDepthSolver* penetrationDepthSolver=(Luna< btConvexPenetrationDepthSolver >::check(L,9));

		return new wrapper_btGjkPairDetector(L,NULL, objectA, objectB, shapeTypeA, shapeTypeB, marginA, marginB, simplexSolver, penetrationDepthSolver);
	}

	// Overload binder for btGjkPairDetector::btGjkPairDetector
	static btGjkPairDetector* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function btGjkPairDetector, cannot match any of the overloads for function btGjkPairDetector:\n  btGjkPairDetector(const btConvexShape *, const btConvexShape *, btVoronoiSimplexSolver *, btConvexPenetrationDepthSolver *)\n  btGjkPairDetector(const btConvexShape *, const btConvexShape *, int, int, float, float, btVoronoiSimplexSolver *, btConvexPenetrationDepthSolver *)\n  btGjkPairDetector(lua_Table *, const btConvexShape *, const btConvexShape *, btVoronoiSimplexSolver *, btConvexPenetrationDepthSolver *)\n  btGjkPairDetector(lua_Table *, const btConvexShape *, const btConvexShape *, int, int, float, float, btVoronoiSimplexSolver *, btConvexPenetrationDepthSolver *)\n");
		return NULL;
	}


	// Function binds:
	// void btGjkPairDetector::getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw, bool swapResults = false)
	static int _bind_getClosestPoints(lua_State *L) {
		if (!_lg_typecheck_getClosestPoints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGjkPairDetector::getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw, bool swapResults = false) function, expected prototype:\nvoid btGjkPairDetector::getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw, bool swapResults = false)\nClass arguments details:\narg 1 ID = 99215612\narg 2 ID = 25324514\narg 3 ID = 63441741\n");
		}

		int luatop = lua_gettop(L);

		const btDiscreteCollisionDetectorInterface::ClosestPointInput* input_ptr=(Luna< btDiscreteCollisionDetectorInterface::ClosestPointInput >::check(L,2));
		if( !input_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg input in btGjkPairDetector::getClosestPoints function");
		}
		const btDiscreteCollisionDetectorInterface::ClosestPointInput & input=*input_ptr;
		btDiscreteCollisionDetectorInterface::Result* output_ptr=(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,3));
		if( !output_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg output in btGjkPairDetector::getClosestPoints function");
		}
		btDiscreteCollisionDetectorInterface::Result & output=*output_ptr;
		btIDebugDraw* debugDraw=(Luna< btIDebugDraw >::check(L,4));
		bool swapResults=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : false;

		btGjkPairDetector* self=Luna< btDiscreteCollisionDetectorInterface >::checkSubType< btGjkPairDetector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGjkPairDetector::getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput &, btDiscreteCollisionDetectorInterface::Result &, class btIDebugDraw *, bool). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface >::check(L,1)).name());
		}
		self->getClosestPoints(input, output, debugDraw, swapResults);

		return 0;
	}

	// void btGjkPairDetector::getClosestPointsNonVirtual(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw)
	static int _bind_getClosestPointsNonVirtual(lua_State *L) {
		if (!_lg_typecheck_getClosestPointsNonVirtual(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGjkPairDetector::getClosestPointsNonVirtual(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw) function, expected prototype:\nvoid btGjkPairDetector::getClosestPointsNonVirtual(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw)\nClass arguments details:\narg 1 ID = 99215612\narg 2 ID = 25324514\narg 3 ID = 63441741\n");
		}

		const btDiscreteCollisionDetectorInterface::ClosestPointInput* input_ptr=(Luna< btDiscreteCollisionDetectorInterface::ClosestPointInput >::check(L,2));
		if( !input_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg input in btGjkPairDetector::getClosestPointsNonVirtual function");
		}
		const btDiscreteCollisionDetectorInterface::ClosestPointInput & input=*input_ptr;
		btDiscreteCollisionDetectorInterface::Result* output_ptr=(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,3));
		if( !output_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg output in btGjkPairDetector::getClosestPointsNonVirtual function");
		}
		btDiscreteCollisionDetectorInterface::Result & output=*output_ptr;
		btIDebugDraw* debugDraw=(Luna< btIDebugDraw >::check(L,4));

		btGjkPairDetector* self=Luna< btDiscreteCollisionDetectorInterface >::checkSubType< btGjkPairDetector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGjkPairDetector::getClosestPointsNonVirtual(const btDiscreteCollisionDetectorInterface::ClosestPointInput &, btDiscreteCollisionDetectorInterface::Result &, class btIDebugDraw *). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface >::check(L,1)).name());
		}
		self->getClosestPointsNonVirtual(input, output, debugDraw);

		return 0;
	}

	// void btGjkPairDetector::setMinkowskiA(const btConvexShape * minkA)
	static int _bind_setMinkowskiA(lua_State *L) {
		if (!_lg_typecheck_setMinkowskiA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGjkPairDetector::setMinkowskiA(const btConvexShape * minkA) function, expected prototype:\nvoid btGjkPairDetector::setMinkowskiA(const btConvexShape * minkA)\nClass arguments details:\narg 1 ID = 58243831\n");
		}

		const btConvexShape* minkA=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,2));

		btGjkPairDetector* self=Luna< btDiscreteCollisionDetectorInterface >::checkSubType< btGjkPairDetector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGjkPairDetector::setMinkowskiA(const btConvexShape *). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface >::check(L,1)).name());
		}
		self->setMinkowskiA(minkA);

		return 0;
	}

	// void btGjkPairDetector::setMinkowskiB(const btConvexShape * minkB)
	static int _bind_setMinkowskiB(lua_State *L) {
		if (!_lg_typecheck_setMinkowskiB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGjkPairDetector::setMinkowskiB(const btConvexShape * minkB) function, expected prototype:\nvoid btGjkPairDetector::setMinkowskiB(const btConvexShape * minkB)\nClass arguments details:\narg 1 ID = 58243831\n");
		}

		const btConvexShape* minkB=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,2));

		btGjkPairDetector* self=Luna< btDiscreteCollisionDetectorInterface >::checkSubType< btGjkPairDetector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGjkPairDetector::setMinkowskiB(const btConvexShape *). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface >::check(L,1)).name());
		}
		self->setMinkowskiB(minkB);

		return 0;
	}

	// void btGjkPairDetector::setCachedSeperatingAxis(const btVector3 & seperatingAxis)
	static int _bind_setCachedSeperatingAxis(lua_State *L) {
		if (!_lg_typecheck_setCachedSeperatingAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGjkPairDetector::setCachedSeperatingAxis(const btVector3 & seperatingAxis) function, expected prototype:\nvoid btGjkPairDetector::setCachedSeperatingAxis(const btVector3 & seperatingAxis)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* seperatingAxis_ptr=(Luna< btVector3 >::check(L,2));
		if( !seperatingAxis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg seperatingAxis in btGjkPairDetector::setCachedSeperatingAxis function");
		}
		const btVector3 & seperatingAxis=*seperatingAxis_ptr;

		btGjkPairDetector* self=Luna< btDiscreteCollisionDetectorInterface >::checkSubType< btGjkPairDetector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGjkPairDetector::setCachedSeperatingAxis(const btVector3 &). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface >::check(L,1)).name());
		}
		self->setCachedSeperatingAxis(seperatingAxis);

		return 0;
	}

	// const btVector3 & btGjkPairDetector::getCachedSeparatingAxis() const
	static int _bind_getCachedSeparatingAxis(lua_State *L) {
		if (!_lg_typecheck_getCachedSeparatingAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btGjkPairDetector::getCachedSeparatingAxis() const function, expected prototype:\nconst btVector3 & btGjkPairDetector::getCachedSeparatingAxis() const\nClass arguments details:\n");
		}


		btGjkPairDetector* self=Luna< btDiscreteCollisionDetectorInterface >::checkSubType< btGjkPairDetector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btGjkPairDetector::getCachedSeparatingAxis() const. Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface >::check(L,1)).name());
		}
		const btVector3* lret = &self->getCachedSeparatingAxis();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// float btGjkPairDetector::getCachedSeparatingDistance() const
	static int _bind_getCachedSeparatingDistance(lua_State *L) {
		if (!_lg_typecheck_getCachedSeparatingDistance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btGjkPairDetector::getCachedSeparatingDistance() const function, expected prototype:\nfloat btGjkPairDetector::getCachedSeparatingDistance() const\nClass arguments details:\n");
		}


		btGjkPairDetector* self=Luna< btDiscreteCollisionDetectorInterface >::checkSubType< btGjkPairDetector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btGjkPairDetector::getCachedSeparatingDistance() const. Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface >::check(L,1)).name());
		}
		float lret = self->getCachedSeparatingDistance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGjkPairDetector::setPenetrationDepthSolver(btConvexPenetrationDepthSolver * penetrationDepthSolver)
	static int _bind_setPenetrationDepthSolver(lua_State *L) {
		if (!_lg_typecheck_setPenetrationDepthSolver(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGjkPairDetector::setPenetrationDepthSolver(btConvexPenetrationDepthSolver * penetrationDepthSolver) function, expected prototype:\nvoid btGjkPairDetector::setPenetrationDepthSolver(btConvexPenetrationDepthSolver * penetrationDepthSolver)\nClass arguments details:\narg 1 ID = 62802517\n");
		}

		btConvexPenetrationDepthSolver* penetrationDepthSolver=(Luna< btConvexPenetrationDepthSolver >::check(L,2));

		btGjkPairDetector* self=Luna< btDiscreteCollisionDetectorInterface >::checkSubType< btGjkPairDetector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGjkPairDetector::setPenetrationDepthSolver(btConvexPenetrationDepthSolver *). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface >::check(L,1)).name());
		}
		self->setPenetrationDepthSolver(penetrationDepthSolver);

		return 0;
	}

	// void btGjkPairDetector::setIgnoreMargin(bool ignoreMargin)
	static int _bind_setIgnoreMargin(lua_State *L) {
		if (!_lg_typecheck_setIgnoreMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGjkPairDetector::setIgnoreMargin(bool ignoreMargin) function, expected prototype:\nvoid btGjkPairDetector::setIgnoreMargin(bool ignoreMargin)\nClass arguments details:\n");
		}

		bool ignoreMargin=(bool)(lua_toboolean(L,2)==1);

		btGjkPairDetector* self=Luna< btDiscreteCollisionDetectorInterface >::checkSubType< btGjkPairDetector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGjkPairDetector::setIgnoreMargin(bool). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface >::check(L,1)).name());
		}
		self->setIgnoreMargin(ignoreMargin);

		return 0;
	}

	// int btGjkPairDetector::m_lastUsedMethod()
	static int _bind_getLastUsedMethod(lua_State *L) {
		if (!_lg_typecheck_getLastUsedMethod(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGjkPairDetector::m_lastUsedMethod() function, expected prototype:\nint btGjkPairDetector::m_lastUsedMethod()\nClass arguments details:\n");
		}


		btGjkPairDetector* self=Luna< btDiscreteCollisionDetectorInterface >::checkSubType< btGjkPairDetector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGjkPairDetector::m_lastUsedMethod(). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface >::check(L,1)).name());
		}
		int lret = self->m_lastUsedMethod;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btGjkPairDetector::m_curIter()
	static int _bind_getCurIter(lua_State *L) {
		if (!_lg_typecheck_getCurIter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGjkPairDetector::m_curIter() function, expected prototype:\nint btGjkPairDetector::m_curIter()\nClass arguments details:\n");
		}


		btGjkPairDetector* self=Luna< btDiscreteCollisionDetectorInterface >::checkSubType< btGjkPairDetector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGjkPairDetector::m_curIter(). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface >::check(L,1)).name());
		}
		int lret = self->m_curIter;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btGjkPairDetector::m_degenerateSimplex()
	static int _bind_getDegenerateSimplex(lua_State *L) {
		if (!_lg_typecheck_getDegenerateSimplex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGjkPairDetector::m_degenerateSimplex() function, expected prototype:\nint btGjkPairDetector::m_degenerateSimplex()\nClass arguments details:\n");
		}


		btGjkPairDetector* self=Luna< btDiscreteCollisionDetectorInterface >::checkSubType< btGjkPairDetector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGjkPairDetector::m_degenerateSimplex(). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface >::check(L,1)).name());
		}
		int lret = self->m_degenerateSimplex;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btGjkPairDetector::m_catchDegeneracies()
	static int _bind_getCatchDegeneracies(lua_State *L) {
		if (!_lg_typecheck_getCatchDegeneracies(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGjkPairDetector::m_catchDegeneracies() function, expected prototype:\nint btGjkPairDetector::m_catchDegeneracies()\nClass arguments details:\n");
		}


		btGjkPairDetector* self=Luna< btDiscreteCollisionDetectorInterface >::checkSubType< btGjkPairDetector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGjkPairDetector::m_catchDegeneracies(). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface >::check(L,1)).name());
		}
		int lret = self->m_catchDegeneracies;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGjkPairDetector::m_lastUsedMethod(int value)
	static int _bind_setLastUsedMethod(lua_State *L) {
		if (!_lg_typecheck_setLastUsedMethod(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGjkPairDetector::m_lastUsedMethod(int value) function, expected prototype:\nvoid btGjkPairDetector::m_lastUsedMethod(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btGjkPairDetector* self=Luna< btDiscreteCollisionDetectorInterface >::checkSubType< btGjkPairDetector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGjkPairDetector::m_lastUsedMethod(int). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface >::check(L,1)).name());
		}
		self->m_lastUsedMethod = value;

		return 0;
	}

	// void btGjkPairDetector::m_curIter(int value)
	static int _bind_setCurIter(lua_State *L) {
		if (!_lg_typecheck_setCurIter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGjkPairDetector::m_curIter(int value) function, expected prototype:\nvoid btGjkPairDetector::m_curIter(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btGjkPairDetector* self=Luna< btDiscreteCollisionDetectorInterface >::checkSubType< btGjkPairDetector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGjkPairDetector::m_curIter(int). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface >::check(L,1)).name());
		}
		self->m_curIter = value;

		return 0;
	}

	// void btGjkPairDetector::m_degenerateSimplex(int value)
	static int _bind_setDegenerateSimplex(lua_State *L) {
		if (!_lg_typecheck_setDegenerateSimplex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGjkPairDetector::m_degenerateSimplex(int value) function, expected prototype:\nvoid btGjkPairDetector::m_degenerateSimplex(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btGjkPairDetector* self=Luna< btDiscreteCollisionDetectorInterface >::checkSubType< btGjkPairDetector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGjkPairDetector::m_degenerateSimplex(int). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface >::check(L,1)).name());
		}
		self->m_degenerateSimplex = value;

		return 0;
	}

	// void btGjkPairDetector::m_catchDegeneracies(int value)
	static int _bind_setCatchDegeneracies(lua_State *L) {
		if (!_lg_typecheck_setCatchDegeneracies(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGjkPairDetector::m_catchDegeneracies(int value) function, expected prototype:\nvoid btGjkPairDetector::m_catchDegeneracies(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btGjkPairDetector* self=Luna< btDiscreteCollisionDetectorInterface >::checkSubType< btGjkPairDetector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGjkPairDetector::m_catchDegeneracies(int). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface >::check(L,1)).name());
		}
		self->m_catchDegeneracies = value;

		return 0;
	}

	// void btGjkPairDetector::base_getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw, bool swapResults = false)
	static int _bind_base_getClosestPoints(lua_State *L) {
		if (!_lg_typecheck_base_getClosestPoints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGjkPairDetector::base_getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw, bool swapResults = false) function, expected prototype:\nvoid btGjkPairDetector::base_getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw, bool swapResults = false)\nClass arguments details:\narg 1 ID = 99215612\narg 2 ID = 25324514\narg 3 ID = 63441741\n");
		}

		int luatop = lua_gettop(L);

		const btDiscreteCollisionDetectorInterface::ClosestPointInput* input_ptr=(Luna< btDiscreteCollisionDetectorInterface::ClosestPointInput >::check(L,2));
		if( !input_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg input in btGjkPairDetector::base_getClosestPoints function");
		}
		const btDiscreteCollisionDetectorInterface::ClosestPointInput & input=*input_ptr;
		btDiscreteCollisionDetectorInterface::Result* output_ptr=(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,3));
		if( !output_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg output in btGjkPairDetector::base_getClosestPoints function");
		}
		btDiscreteCollisionDetectorInterface::Result & output=*output_ptr;
		btIDebugDraw* debugDraw=(Luna< btIDebugDraw >::check(L,4));
		bool swapResults=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : false;

		btGjkPairDetector* self=Luna< btDiscreteCollisionDetectorInterface >::checkSubType< btGjkPairDetector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGjkPairDetector::base_getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput &, btDiscreteCollisionDetectorInterface::Result &, class btIDebugDraw *, bool). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface >::check(L,1)).name());
		}
		self->btGjkPairDetector::getClosestPoints(input, output, debugDraw, swapResults);

		return 0;
	}


	// Operator binds:

};

btGjkPairDetector* LunaTraits< btGjkPairDetector >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btGjkPairDetector::_bind_ctor(L);
}

void LunaTraits< btGjkPairDetector >::_bind_dtor(btGjkPairDetector* obj) {
	delete obj;
}

const char LunaTraits< btGjkPairDetector >::className[] = "btGjkPairDetector";
const char LunaTraits< btGjkPairDetector >::fullName[] = "btGjkPairDetector";
const char LunaTraits< btGjkPairDetector >::moduleName[] = "bullet";
const char* LunaTraits< btGjkPairDetector >::parents[] = {"bullet.btDiscreteCollisionDetectorInterface", 0};
const int LunaTraits< btGjkPairDetector >::hash = 98911473;
const int LunaTraits< btGjkPairDetector >::uniqueIDs[] = {36160911,0};

luna_RegType LunaTraits< btGjkPairDetector >::methods[] = {
	{"getClosestPoints", &luna_wrapper_btGjkPairDetector::_bind_getClosestPoints},
	{"getClosestPointsNonVirtual", &luna_wrapper_btGjkPairDetector::_bind_getClosestPointsNonVirtual},
	{"setMinkowskiA", &luna_wrapper_btGjkPairDetector::_bind_setMinkowskiA},
	{"setMinkowskiB", &luna_wrapper_btGjkPairDetector::_bind_setMinkowskiB},
	{"setCachedSeperatingAxis", &luna_wrapper_btGjkPairDetector::_bind_setCachedSeperatingAxis},
	{"getCachedSeparatingAxis", &luna_wrapper_btGjkPairDetector::_bind_getCachedSeparatingAxis},
	{"getCachedSeparatingDistance", &luna_wrapper_btGjkPairDetector::_bind_getCachedSeparatingDistance},
	{"setPenetrationDepthSolver", &luna_wrapper_btGjkPairDetector::_bind_setPenetrationDepthSolver},
	{"setIgnoreMargin", &luna_wrapper_btGjkPairDetector::_bind_setIgnoreMargin},
	{"getLastUsedMethod", &luna_wrapper_btGjkPairDetector::_bind_getLastUsedMethod},
	{"getCurIter", &luna_wrapper_btGjkPairDetector::_bind_getCurIter},
	{"getDegenerateSimplex", &luna_wrapper_btGjkPairDetector::_bind_getDegenerateSimplex},
	{"getCatchDegeneracies", &luna_wrapper_btGjkPairDetector::_bind_getCatchDegeneracies},
	{"setLastUsedMethod", &luna_wrapper_btGjkPairDetector::_bind_setLastUsedMethod},
	{"setCurIter", &luna_wrapper_btGjkPairDetector::_bind_setCurIter},
	{"setDegenerateSimplex", &luna_wrapper_btGjkPairDetector::_bind_setDegenerateSimplex},
	{"setCatchDegeneracies", &luna_wrapper_btGjkPairDetector::_bind_setCatchDegeneracies},
	{"base_getClosestPoints", &luna_wrapper_btGjkPairDetector::_bind_base_getClosestPoints},
	{"__eq", &luna_wrapper_btGjkPairDetector::_bind___eq},
	{"fromVoid", &luna_wrapper_btGjkPairDetector::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btGjkPairDetector::_bind_asVoid},
	{"getTable", &luna_wrapper_btGjkPairDetector::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btGjkPairDetector >::converters[] = {
	{"btDiscreteCollisionDetectorInterface", &luna_wrapper_btGjkPairDetector::_cast_from_btDiscreteCollisionDetectorInterface},
	{0,0}
};

luna_RegEnumType LunaTraits< btGjkPairDetector >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

class luna_wrapper_btDispatcherInfo {
public:
	typedef Luna< btDispatcherInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,95201256) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btDispatcherInfo*)");
		}

		btDispatcherInfo* rhs =(Luna< btDispatcherInfo >::check(L,2));
		btDispatcherInfo* self=(Luna< btDispatcherInfo >::check(L,1));
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

		btDispatcherInfo* self=(Luna< btDispatcherInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btDispatcherInfo");
		
		return luna_dynamicCast(L,converters,"btDispatcherInfo",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getM_timeStep(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_stepCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_dispatchFunc(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_timeOfImpact(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_useContinuous(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_debugDraw(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_enableSatConvex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_enableSPU(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_useEpa(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_allowedCcdPenetration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_useConvexConservativeDistanceUtil(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_convexConservativeDistanceThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_stackAllocator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_timeStep(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_stepCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_dispatchFunc(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_timeOfImpact(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_useContinuous(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_debugDraw(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,63441741)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_enableSatConvex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_enableSPU(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_useEpa(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_allowedCcdPenetration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_useConvexConservativeDistanceUtil(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_convexConservativeDistanceThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_stackAllocator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,46980417)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btDispatcherInfo::btDispatcherInfo()
	static btDispatcherInfo* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDispatcherInfo::btDispatcherInfo() function, expected prototype:\nbtDispatcherInfo::btDispatcherInfo()\nClass arguments details:\n");
		}


		return new btDispatcherInfo();
	}


	// Function binds:
	// float btDispatcherInfo::m_timeStep()
	static int _bind_getM_timeStep(lua_State *L) {
		if (!_lg_typecheck_getM_timeStep(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btDispatcherInfo::m_timeStep() function, expected prototype:\nfloat btDispatcherInfo::m_timeStep()\nClass arguments details:\n");
		}


		btDispatcherInfo* self=(Luna< btDispatcherInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btDispatcherInfo::m_timeStep(). Got : '%s'",typeid(Luna< btDispatcherInfo >::check(L,1)).name());
		}
		float lret = self->m_timeStep;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btDispatcherInfo::m_stepCount()
	static int _bind_getM_stepCount(lua_State *L) {
		if (!_lg_typecheck_getM_stepCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDispatcherInfo::m_stepCount() function, expected prototype:\nint btDispatcherInfo::m_stepCount()\nClass arguments details:\n");
		}


		btDispatcherInfo* self=(Luna< btDispatcherInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDispatcherInfo::m_stepCount(). Got : '%s'",typeid(Luna< btDispatcherInfo >::check(L,1)).name());
		}
		int lret = self->m_stepCount;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btDispatcherInfo::m_dispatchFunc()
	static int _bind_getM_dispatchFunc(lua_State *L) {
		if (!_lg_typecheck_getM_dispatchFunc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDispatcherInfo::m_dispatchFunc() function, expected prototype:\nint btDispatcherInfo::m_dispatchFunc()\nClass arguments details:\n");
		}


		btDispatcherInfo* self=(Luna< btDispatcherInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDispatcherInfo::m_dispatchFunc(). Got : '%s'",typeid(Luna< btDispatcherInfo >::check(L,1)).name());
		}
		int lret = self->m_dispatchFunc;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btDispatcherInfo::m_timeOfImpact()
	static int _bind_getM_timeOfImpact(lua_State *L) {
		if (!_lg_typecheck_getM_timeOfImpact(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btDispatcherInfo::m_timeOfImpact() function, expected prototype:\nfloat btDispatcherInfo::m_timeOfImpact()\nClass arguments details:\n");
		}


		btDispatcherInfo* self=(Luna< btDispatcherInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btDispatcherInfo::m_timeOfImpact(). Got : '%s'",typeid(Luna< btDispatcherInfo >::check(L,1)).name());
		}
		float lret = self->m_timeOfImpact;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btDispatcherInfo::m_useContinuous()
	static int _bind_getM_useContinuous(lua_State *L) {
		if (!_lg_typecheck_getM_useContinuous(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btDispatcherInfo::m_useContinuous() function, expected prototype:\nbool btDispatcherInfo::m_useContinuous()\nClass arguments details:\n");
		}


		btDispatcherInfo* self=(Luna< btDispatcherInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btDispatcherInfo::m_useContinuous(). Got : '%s'",typeid(Luna< btDispatcherInfo >::check(L,1)).name());
		}
		bool lret = self->m_useContinuous;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// class btIDebugDraw * btDispatcherInfo::m_debugDraw()
	static int _bind_getM_debugDraw(lua_State *L) {
		if (!_lg_typecheck_getM_debugDraw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in class btIDebugDraw * btDispatcherInfo::m_debugDraw() function, expected prototype:\nclass btIDebugDraw * btDispatcherInfo::m_debugDraw()\nClass arguments details:\n");
		}


		btDispatcherInfo* self=(Luna< btDispatcherInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call class btIDebugDraw * btDispatcherInfo::m_debugDraw(). Got : '%s'",typeid(Luna< btDispatcherInfo >::check(L,1)).name());
		}
		class btIDebugDraw * lret = self->m_debugDraw;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btIDebugDraw >::push(L,lret,false);

		return 1;
	}

	// bool btDispatcherInfo::m_enableSatConvex()
	static int _bind_getM_enableSatConvex(lua_State *L) {
		if (!_lg_typecheck_getM_enableSatConvex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btDispatcherInfo::m_enableSatConvex() function, expected prototype:\nbool btDispatcherInfo::m_enableSatConvex()\nClass arguments details:\n");
		}


		btDispatcherInfo* self=(Luna< btDispatcherInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btDispatcherInfo::m_enableSatConvex(). Got : '%s'",typeid(Luna< btDispatcherInfo >::check(L,1)).name());
		}
		bool lret = self->m_enableSatConvex;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btDispatcherInfo::m_enableSPU()
	static int _bind_getM_enableSPU(lua_State *L) {
		if (!_lg_typecheck_getM_enableSPU(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btDispatcherInfo::m_enableSPU() function, expected prototype:\nbool btDispatcherInfo::m_enableSPU()\nClass arguments details:\n");
		}


		btDispatcherInfo* self=(Luna< btDispatcherInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btDispatcherInfo::m_enableSPU(). Got : '%s'",typeid(Luna< btDispatcherInfo >::check(L,1)).name());
		}
		bool lret = self->m_enableSPU;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btDispatcherInfo::m_useEpa()
	static int _bind_getM_useEpa(lua_State *L) {
		if (!_lg_typecheck_getM_useEpa(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btDispatcherInfo::m_useEpa() function, expected prototype:\nbool btDispatcherInfo::m_useEpa()\nClass arguments details:\n");
		}


		btDispatcherInfo* self=(Luna< btDispatcherInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btDispatcherInfo::m_useEpa(). Got : '%s'",typeid(Luna< btDispatcherInfo >::check(L,1)).name());
		}
		bool lret = self->m_useEpa;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float btDispatcherInfo::m_allowedCcdPenetration()
	static int _bind_getM_allowedCcdPenetration(lua_State *L) {
		if (!_lg_typecheck_getM_allowedCcdPenetration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btDispatcherInfo::m_allowedCcdPenetration() function, expected prototype:\nfloat btDispatcherInfo::m_allowedCcdPenetration()\nClass arguments details:\n");
		}


		btDispatcherInfo* self=(Luna< btDispatcherInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btDispatcherInfo::m_allowedCcdPenetration(). Got : '%s'",typeid(Luna< btDispatcherInfo >::check(L,1)).name());
		}
		float lret = self->m_allowedCcdPenetration;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btDispatcherInfo::m_useConvexConservativeDistanceUtil()
	static int _bind_getM_useConvexConservativeDistanceUtil(lua_State *L) {
		if (!_lg_typecheck_getM_useConvexConservativeDistanceUtil(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btDispatcherInfo::m_useConvexConservativeDistanceUtil() function, expected prototype:\nbool btDispatcherInfo::m_useConvexConservativeDistanceUtil()\nClass arguments details:\n");
		}


		btDispatcherInfo* self=(Luna< btDispatcherInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btDispatcherInfo::m_useConvexConservativeDistanceUtil(). Got : '%s'",typeid(Luna< btDispatcherInfo >::check(L,1)).name());
		}
		bool lret = self->m_useConvexConservativeDistanceUtil;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float btDispatcherInfo::m_convexConservativeDistanceThreshold()
	static int _bind_getM_convexConservativeDistanceThreshold(lua_State *L) {
		if (!_lg_typecheck_getM_convexConservativeDistanceThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btDispatcherInfo::m_convexConservativeDistanceThreshold() function, expected prototype:\nfloat btDispatcherInfo::m_convexConservativeDistanceThreshold()\nClass arguments details:\n");
		}


		btDispatcherInfo* self=(Luna< btDispatcherInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btDispatcherInfo::m_convexConservativeDistanceThreshold(). Got : '%s'",typeid(Luna< btDispatcherInfo >::check(L,1)).name());
		}
		float lret = self->m_convexConservativeDistanceThreshold;
		lua_pushnumber(L,lret);

		return 1;
	}

	// btStackAlloc * btDispatcherInfo::m_stackAllocator()
	static int _bind_getM_stackAllocator(lua_State *L) {
		if (!_lg_typecheck_getM_stackAllocator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btStackAlloc * btDispatcherInfo::m_stackAllocator() function, expected prototype:\nbtStackAlloc * btDispatcherInfo::m_stackAllocator()\nClass arguments details:\n");
		}


		btDispatcherInfo* self=(Luna< btDispatcherInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btStackAlloc * btDispatcherInfo::m_stackAllocator(). Got : '%s'",typeid(Luna< btDispatcherInfo >::check(L,1)).name());
		}
		btStackAlloc * lret = self->m_stackAllocator;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btStackAlloc >::push(L,lret,false);

		return 1;
	}

	// void btDispatcherInfo::m_timeStep(float value)
	static int _bind_setM_timeStep(lua_State *L) {
		if (!_lg_typecheck_setM_timeStep(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDispatcherInfo::m_timeStep(float value) function, expected prototype:\nvoid btDispatcherInfo::m_timeStep(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btDispatcherInfo* self=(Luna< btDispatcherInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDispatcherInfo::m_timeStep(float). Got : '%s'",typeid(Luna< btDispatcherInfo >::check(L,1)).name());
		}
		self->m_timeStep = value;

		return 0;
	}

	// void btDispatcherInfo::m_stepCount(int value)
	static int _bind_setM_stepCount(lua_State *L) {
		if (!_lg_typecheck_setM_stepCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDispatcherInfo::m_stepCount(int value) function, expected prototype:\nvoid btDispatcherInfo::m_stepCount(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btDispatcherInfo* self=(Luna< btDispatcherInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDispatcherInfo::m_stepCount(int). Got : '%s'",typeid(Luna< btDispatcherInfo >::check(L,1)).name());
		}
		self->m_stepCount = value;

		return 0;
	}

	// void btDispatcherInfo::m_dispatchFunc(int value)
	static int _bind_setM_dispatchFunc(lua_State *L) {
		if (!_lg_typecheck_setM_dispatchFunc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDispatcherInfo::m_dispatchFunc(int value) function, expected prototype:\nvoid btDispatcherInfo::m_dispatchFunc(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btDispatcherInfo* self=(Luna< btDispatcherInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDispatcherInfo::m_dispatchFunc(int). Got : '%s'",typeid(Luna< btDispatcherInfo >::check(L,1)).name());
		}
		self->m_dispatchFunc = value;

		return 0;
	}

	// void btDispatcherInfo::m_timeOfImpact(float value)
	static int _bind_setM_timeOfImpact(lua_State *L) {
		if (!_lg_typecheck_setM_timeOfImpact(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDispatcherInfo::m_timeOfImpact(float value) function, expected prototype:\nvoid btDispatcherInfo::m_timeOfImpact(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btDispatcherInfo* self=(Luna< btDispatcherInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDispatcherInfo::m_timeOfImpact(float). Got : '%s'",typeid(Luna< btDispatcherInfo >::check(L,1)).name());
		}
		self->m_timeOfImpact = value;

		return 0;
	}

	// void btDispatcherInfo::m_useContinuous(bool value)
	static int _bind_setM_useContinuous(lua_State *L) {
		if (!_lg_typecheck_setM_useContinuous(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDispatcherInfo::m_useContinuous(bool value) function, expected prototype:\nvoid btDispatcherInfo::m_useContinuous(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		btDispatcherInfo* self=(Luna< btDispatcherInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDispatcherInfo::m_useContinuous(bool). Got : '%s'",typeid(Luna< btDispatcherInfo >::check(L,1)).name());
		}
		self->m_useContinuous = value;

		return 0;
	}

	// void btDispatcherInfo::m_debugDraw(class btIDebugDraw * value)
	static int _bind_setM_debugDraw(lua_State *L) {
		if (!_lg_typecheck_setM_debugDraw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDispatcherInfo::m_debugDraw(class btIDebugDraw * value) function, expected prototype:\nvoid btDispatcherInfo::m_debugDraw(class btIDebugDraw * value)\nClass arguments details:\narg 1 ID = 63441741\n");
		}

		btIDebugDraw* value=(Luna< btIDebugDraw >::check(L,2));

		btDispatcherInfo* self=(Luna< btDispatcherInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDispatcherInfo::m_debugDraw(class btIDebugDraw *). Got : '%s'",typeid(Luna< btDispatcherInfo >::check(L,1)).name());
		}
		self->m_debugDraw = value;

		return 0;
	}

	// void btDispatcherInfo::m_enableSatConvex(bool value)
	static int _bind_setM_enableSatConvex(lua_State *L) {
		if (!_lg_typecheck_setM_enableSatConvex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDispatcherInfo::m_enableSatConvex(bool value) function, expected prototype:\nvoid btDispatcherInfo::m_enableSatConvex(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		btDispatcherInfo* self=(Luna< btDispatcherInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDispatcherInfo::m_enableSatConvex(bool). Got : '%s'",typeid(Luna< btDispatcherInfo >::check(L,1)).name());
		}
		self->m_enableSatConvex = value;

		return 0;
	}

	// void btDispatcherInfo::m_enableSPU(bool value)
	static int _bind_setM_enableSPU(lua_State *L) {
		if (!_lg_typecheck_setM_enableSPU(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDispatcherInfo::m_enableSPU(bool value) function, expected prototype:\nvoid btDispatcherInfo::m_enableSPU(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		btDispatcherInfo* self=(Luna< btDispatcherInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDispatcherInfo::m_enableSPU(bool). Got : '%s'",typeid(Luna< btDispatcherInfo >::check(L,1)).name());
		}
		self->m_enableSPU = value;

		return 0;
	}

	// void btDispatcherInfo::m_useEpa(bool value)
	static int _bind_setM_useEpa(lua_State *L) {
		if (!_lg_typecheck_setM_useEpa(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDispatcherInfo::m_useEpa(bool value) function, expected prototype:\nvoid btDispatcherInfo::m_useEpa(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		btDispatcherInfo* self=(Luna< btDispatcherInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDispatcherInfo::m_useEpa(bool). Got : '%s'",typeid(Luna< btDispatcherInfo >::check(L,1)).name());
		}
		self->m_useEpa = value;

		return 0;
	}

	// void btDispatcherInfo::m_allowedCcdPenetration(float value)
	static int _bind_setM_allowedCcdPenetration(lua_State *L) {
		if (!_lg_typecheck_setM_allowedCcdPenetration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDispatcherInfo::m_allowedCcdPenetration(float value) function, expected prototype:\nvoid btDispatcherInfo::m_allowedCcdPenetration(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btDispatcherInfo* self=(Luna< btDispatcherInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDispatcherInfo::m_allowedCcdPenetration(float). Got : '%s'",typeid(Luna< btDispatcherInfo >::check(L,1)).name());
		}
		self->m_allowedCcdPenetration = value;

		return 0;
	}

	// void btDispatcherInfo::m_useConvexConservativeDistanceUtil(bool value)
	static int _bind_setM_useConvexConservativeDistanceUtil(lua_State *L) {
		if (!_lg_typecheck_setM_useConvexConservativeDistanceUtil(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDispatcherInfo::m_useConvexConservativeDistanceUtil(bool value) function, expected prototype:\nvoid btDispatcherInfo::m_useConvexConservativeDistanceUtil(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		btDispatcherInfo* self=(Luna< btDispatcherInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDispatcherInfo::m_useConvexConservativeDistanceUtil(bool). Got : '%s'",typeid(Luna< btDispatcherInfo >::check(L,1)).name());
		}
		self->m_useConvexConservativeDistanceUtil = value;

		return 0;
	}

	// void btDispatcherInfo::m_convexConservativeDistanceThreshold(float value)
	static int _bind_setM_convexConservativeDistanceThreshold(lua_State *L) {
		if (!_lg_typecheck_setM_convexConservativeDistanceThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDispatcherInfo::m_convexConservativeDistanceThreshold(float value) function, expected prototype:\nvoid btDispatcherInfo::m_convexConservativeDistanceThreshold(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btDispatcherInfo* self=(Luna< btDispatcherInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDispatcherInfo::m_convexConservativeDistanceThreshold(float). Got : '%s'",typeid(Luna< btDispatcherInfo >::check(L,1)).name());
		}
		self->m_convexConservativeDistanceThreshold = value;

		return 0;
	}

	// void btDispatcherInfo::m_stackAllocator(btStackAlloc * value)
	static int _bind_setM_stackAllocator(lua_State *L) {
		if (!_lg_typecheck_setM_stackAllocator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDispatcherInfo::m_stackAllocator(btStackAlloc * value) function, expected prototype:\nvoid btDispatcherInfo::m_stackAllocator(btStackAlloc * value)\nClass arguments details:\narg 1 ID = 46980417\n");
		}

		btStackAlloc* value=(Luna< btStackAlloc >::check(L,2));

		btDispatcherInfo* self=(Luna< btDispatcherInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDispatcherInfo::m_stackAllocator(btStackAlloc *). Got : '%s'",typeid(Luna< btDispatcherInfo >::check(L,1)).name());
		}
		self->m_stackAllocator = value;

		return 0;
	}


	// Operator binds:

};

btDispatcherInfo* LunaTraits< btDispatcherInfo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btDispatcherInfo::_bind_ctor(L);
}

void LunaTraits< btDispatcherInfo >::_bind_dtor(btDispatcherInfo* obj) {
	delete obj;
}

const char LunaTraits< btDispatcherInfo >::className[] = "btDispatcherInfo";
const char LunaTraits< btDispatcherInfo >::fullName[] = "btDispatcherInfo";
const char LunaTraits< btDispatcherInfo >::moduleName[] = "bullet";
const char* LunaTraits< btDispatcherInfo >::parents[] = {0};
const int LunaTraits< btDispatcherInfo >::hash = 95201256;
const int LunaTraits< btDispatcherInfo >::uniqueIDs[] = {95201256,0};

luna_RegType LunaTraits< btDispatcherInfo >::methods[] = {
	{"getM_timeStep", &luna_wrapper_btDispatcherInfo::_bind_getM_timeStep},
	{"getM_stepCount", &luna_wrapper_btDispatcherInfo::_bind_getM_stepCount},
	{"getM_dispatchFunc", &luna_wrapper_btDispatcherInfo::_bind_getM_dispatchFunc},
	{"getM_timeOfImpact", &luna_wrapper_btDispatcherInfo::_bind_getM_timeOfImpact},
	{"getM_useContinuous", &luna_wrapper_btDispatcherInfo::_bind_getM_useContinuous},
	{"getM_debugDraw", &luna_wrapper_btDispatcherInfo::_bind_getM_debugDraw},
	{"getM_enableSatConvex", &luna_wrapper_btDispatcherInfo::_bind_getM_enableSatConvex},
	{"getM_enableSPU", &luna_wrapper_btDispatcherInfo::_bind_getM_enableSPU},
	{"getM_useEpa", &luna_wrapper_btDispatcherInfo::_bind_getM_useEpa},
	{"getM_allowedCcdPenetration", &luna_wrapper_btDispatcherInfo::_bind_getM_allowedCcdPenetration},
	{"getM_useConvexConservativeDistanceUtil", &luna_wrapper_btDispatcherInfo::_bind_getM_useConvexConservativeDistanceUtil},
	{"getM_convexConservativeDistanceThreshold", &luna_wrapper_btDispatcherInfo::_bind_getM_convexConservativeDistanceThreshold},
	{"getM_stackAllocator", &luna_wrapper_btDispatcherInfo::_bind_getM_stackAllocator},
	{"setM_timeStep", &luna_wrapper_btDispatcherInfo::_bind_setM_timeStep},
	{"setM_stepCount", &luna_wrapper_btDispatcherInfo::_bind_setM_stepCount},
	{"setM_dispatchFunc", &luna_wrapper_btDispatcherInfo::_bind_setM_dispatchFunc},
	{"setM_timeOfImpact", &luna_wrapper_btDispatcherInfo::_bind_setM_timeOfImpact},
	{"setM_useContinuous", &luna_wrapper_btDispatcherInfo::_bind_setM_useContinuous},
	{"setM_debugDraw", &luna_wrapper_btDispatcherInfo::_bind_setM_debugDraw},
	{"setM_enableSatConvex", &luna_wrapper_btDispatcherInfo::_bind_setM_enableSatConvex},
	{"setM_enableSPU", &luna_wrapper_btDispatcherInfo::_bind_setM_enableSPU},
	{"setM_useEpa", &luna_wrapper_btDispatcherInfo::_bind_setM_useEpa},
	{"setM_allowedCcdPenetration", &luna_wrapper_btDispatcherInfo::_bind_setM_allowedCcdPenetration},
	{"setM_useConvexConservativeDistanceUtil", &luna_wrapper_btDispatcherInfo::_bind_setM_useConvexConservativeDistanceUtil},
	{"setM_convexConservativeDistanceThreshold", &luna_wrapper_btDispatcherInfo::_bind_setM_convexConservativeDistanceThreshold},
	{"setM_stackAllocator", &luna_wrapper_btDispatcherInfo::_bind_setM_stackAllocator},
	{"dynCast", &luna_wrapper_btDispatcherInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_btDispatcherInfo::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btDispatcherInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btDispatcherInfo >::enumValues[] = {
	{"DISPATCH_DISCRETE", btDispatcherInfo::DISPATCH_DISCRETE},
	{"DISPATCH_CONTINUOUS", btDispatcherInfo::DISPATCH_CONTINUOUS},
	{0,0}
};



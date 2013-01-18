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
	inline static bool _lg_typecheck_getTimeStep(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStepCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDispatchFunc(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTimeOfImpact(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUseContinuous(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDebugDraw(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEnableSatConvex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEnableSPU(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUseEpa(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAllowedCcdPenetration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUseConvexConservativeDistanceUtil(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getConvexConservativeDistanceThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStackAllocator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTimeStep(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStepCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDispatchFunc(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTimeOfImpact(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUseContinuous(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDebugDraw(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,63441741)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEnableSatConvex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEnableSPU(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUseEpa(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAllowedCcdPenetration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUseConvexConservativeDistanceUtil(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setConvexConservativeDistanceThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStackAllocator(lua_State *L) {
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
	static int _bind_getTimeStep(lua_State *L) {
		if (!_lg_typecheck_getTimeStep(L)) {
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
	static int _bind_getStepCount(lua_State *L) {
		if (!_lg_typecheck_getStepCount(L)) {
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
	static int _bind_getDispatchFunc(lua_State *L) {
		if (!_lg_typecheck_getDispatchFunc(L)) {
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
	static int _bind_getTimeOfImpact(lua_State *L) {
		if (!_lg_typecheck_getTimeOfImpact(L)) {
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
	static int _bind_getUseContinuous(lua_State *L) {
		if (!_lg_typecheck_getUseContinuous(L)) {
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
	static int _bind_getDebugDraw(lua_State *L) {
		if (!_lg_typecheck_getDebugDraw(L)) {
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
	static int _bind_getEnableSatConvex(lua_State *L) {
		if (!_lg_typecheck_getEnableSatConvex(L)) {
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
	static int _bind_getEnableSPU(lua_State *L) {
		if (!_lg_typecheck_getEnableSPU(L)) {
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
	static int _bind_getUseEpa(lua_State *L) {
		if (!_lg_typecheck_getUseEpa(L)) {
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
	static int _bind_getAllowedCcdPenetration(lua_State *L) {
		if (!_lg_typecheck_getAllowedCcdPenetration(L)) {
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
	static int _bind_getUseConvexConservativeDistanceUtil(lua_State *L) {
		if (!_lg_typecheck_getUseConvexConservativeDistanceUtil(L)) {
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
	static int _bind_getConvexConservativeDistanceThreshold(lua_State *L) {
		if (!_lg_typecheck_getConvexConservativeDistanceThreshold(L)) {
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
	static int _bind_getStackAllocator(lua_State *L) {
		if (!_lg_typecheck_getStackAllocator(L)) {
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
	static int _bind_setTimeStep(lua_State *L) {
		if (!_lg_typecheck_setTimeStep(L)) {
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
	static int _bind_setStepCount(lua_State *L) {
		if (!_lg_typecheck_setStepCount(L)) {
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
	static int _bind_setDispatchFunc(lua_State *L) {
		if (!_lg_typecheck_setDispatchFunc(L)) {
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
	static int _bind_setTimeOfImpact(lua_State *L) {
		if (!_lg_typecheck_setTimeOfImpact(L)) {
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
	static int _bind_setUseContinuous(lua_State *L) {
		if (!_lg_typecheck_setUseContinuous(L)) {
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
	static int _bind_setDebugDraw(lua_State *L) {
		if (!_lg_typecheck_setDebugDraw(L)) {
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
	static int _bind_setEnableSatConvex(lua_State *L) {
		if (!_lg_typecheck_setEnableSatConvex(L)) {
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
	static int _bind_setEnableSPU(lua_State *L) {
		if (!_lg_typecheck_setEnableSPU(L)) {
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
	static int _bind_setUseEpa(lua_State *L) {
		if (!_lg_typecheck_setUseEpa(L)) {
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
	static int _bind_setAllowedCcdPenetration(lua_State *L) {
		if (!_lg_typecheck_setAllowedCcdPenetration(L)) {
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
	static int _bind_setUseConvexConservativeDistanceUtil(lua_State *L) {
		if (!_lg_typecheck_setUseConvexConservativeDistanceUtil(L)) {
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
	static int _bind_setConvexConservativeDistanceThreshold(lua_State *L) {
		if (!_lg_typecheck_setConvexConservativeDistanceThreshold(L)) {
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
	static int _bind_setStackAllocator(lua_State *L) {
		if (!_lg_typecheck_setStackAllocator(L)) {
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
	{"getTimeStep", &luna_wrapper_btDispatcherInfo::_bind_getTimeStep},
	{"getStepCount", &luna_wrapper_btDispatcherInfo::_bind_getStepCount},
	{"getDispatchFunc", &luna_wrapper_btDispatcherInfo::_bind_getDispatchFunc},
	{"getTimeOfImpact", &luna_wrapper_btDispatcherInfo::_bind_getTimeOfImpact},
	{"getUseContinuous", &luna_wrapper_btDispatcherInfo::_bind_getUseContinuous},
	{"getDebugDraw", &luna_wrapper_btDispatcherInfo::_bind_getDebugDraw},
	{"getEnableSatConvex", &luna_wrapper_btDispatcherInfo::_bind_getEnableSatConvex},
	{"getEnableSPU", &luna_wrapper_btDispatcherInfo::_bind_getEnableSPU},
	{"getUseEpa", &luna_wrapper_btDispatcherInfo::_bind_getUseEpa},
	{"getAllowedCcdPenetration", &luna_wrapper_btDispatcherInfo::_bind_getAllowedCcdPenetration},
	{"getUseConvexConservativeDistanceUtil", &luna_wrapper_btDispatcherInfo::_bind_getUseConvexConservativeDistanceUtil},
	{"getConvexConservativeDistanceThreshold", &luna_wrapper_btDispatcherInfo::_bind_getConvexConservativeDistanceThreshold},
	{"getStackAllocator", &luna_wrapper_btDispatcherInfo::_bind_getStackAllocator},
	{"setTimeStep", &luna_wrapper_btDispatcherInfo::_bind_setTimeStep},
	{"setStepCount", &luna_wrapper_btDispatcherInfo::_bind_setStepCount},
	{"setDispatchFunc", &luna_wrapper_btDispatcherInfo::_bind_setDispatchFunc},
	{"setTimeOfImpact", &luna_wrapper_btDispatcherInfo::_bind_setTimeOfImpact},
	{"setUseContinuous", &luna_wrapper_btDispatcherInfo::_bind_setUseContinuous},
	{"setDebugDraw", &luna_wrapper_btDispatcherInfo::_bind_setDebugDraw},
	{"setEnableSatConvex", &luna_wrapper_btDispatcherInfo::_bind_setEnableSatConvex},
	{"setEnableSPU", &luna_wrapper_btDispatcherInfo::_bind_setEnableSPU},
	{"setUseEpa", &luna_wrapper_btDispatcherInfo::_bind_setUseEpa},
	{"setAllowedCcdPenetration", &luna_wrapper_btDispatcherInfo::_bind_setAllowedCcdPenetration},
	{"setUseConvexConservativeDistanceUtil", &luna_wrapper_btDispatcherInfo::_bind_setUseConvexConservativeDistanceUtil},
	{"setConvexConservativeDistanceThreshold", &luna_wrapper_btDispatcherInfo::_bind_setConvexConservativeDistanceThreshold},
	{"setStackAllocator", &luna_wrapper_btDispatcherInfo::_bind_setStackAllocator},
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



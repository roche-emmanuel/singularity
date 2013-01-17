#include <plug_common.h>

#include <luna/wrappers/wrapper_btConvexCast_CastResult.h>

class luna_wrapper_btConvexCast_CastResult {
public:
	typedef Luna< btConvexCast::CastResult > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btConvexCast::CastResult* self=(Luna< btConvexCast::CastResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btConvexCast::CastResult,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,12958328) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btConvexCast::CastResult*)");
		}

		btConvexCast::CastResult* rhs =(Luna< btConvexCast::CastResult >::check(L,2));
		btConvexCast::CastResult* self=(Luna< btConvexCast::CastResult >::check(L,1));
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

		btConvexCast::CastResult* self=(Luna< btConvexCast::CastResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btConvexCast::CastResult");
		
		return luna_dynamicCast(L,converters,"btConvexCast::CastResult",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_DebugDraw(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawCoordSystem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reportFailure(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getM_hitTransformA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_hitTransformB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_normal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_hitPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_fraction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_debugDrawer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_allowedPenetration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_hitTransformA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_hitTransformB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_normal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_hitPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_fraction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_debugDrawer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,63441741)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_allowedPenetration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DebugDraw(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_drawCoordSystem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_reportFailure(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btConvexCast::CastResult::CastResult()
	static btConvexCast::CastResult* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConvexCast::CastResult::CastResult() function, expected prototype:\nbtConvexCast::CastResult::CastResult()\nClass arguments details:\n");
		}


		return new btConvexCast::CastResult();
	}

	// btConvexCast::CastResult::CastResult(lua_Table * data)
	static btConvexCast::CastResult* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConvexCast::CastResult::CastResult(lua_Table * data) function, expected prototype:\nbtConvexCast::CastResult::CastResult(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btConvexCast_CastResult(L,NULL);
	}

	// Overload binder for btConvexCast::CastResult::CastResult
	static btConvexCast::CastResult* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function CastResult, cannot match any of the overloads for function CastResult:\n  CastResult()\n  CastResult(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void btConvexCast::CastResult::DebugDraw(float fraction)
	static int _bind_DebugDraw(lua_State *L) {
		if (!_lg_typecheck_DebugDraw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexCast::CastResult::DebugDraw(float fraction) function, expected prototype:\nvoid btConvexCast::CastResult::DebugDraw(float fraction)\nClass arguments details:\n");
		}

		float fraction=(float)lua_tonumber(L,2);

		btConvexCast::CastResult* self=(Luna< btConvexCast::CastResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexCast::CastResult::DebugDraw(float). Got : '%s'",typeid(Luna< btConvexCast::CastResult >::check(L,1)).name());
		}
		self->DebugDraw(fraction);

		return 0;
	}

	// void btConvexCast::CastResult::drawCoordSystem(const btTransform & trans)
	static int _bind_drawCoordSystem(lua_State *L) {
		if (!_lg_typecheck_drawCoordSystem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexCast::CastResult::drawCoordSystem(const btTransform & trans) function, expected prototype:\nvoid btConvexCast::CastResult::drawCoordSystem(const btTransform & trans)\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		const btTransform* trans_ptr=(Luna< btTransform >::check(L,2));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in btConvexCast::CastResult::drawCoordSystem function");
		}
		const btTransform & trans=*trans_ptr;

		btConvexCast::CastResult* self=(Luna< btConvexCast::CastResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexCast::CastResult::drawCoordSystem(const btTransform &). Got : '%s'",typeid(Luna< btConvexCast::CastResult >::check(L,1)).name());
		}
		self->drawCoordSystem(trans);

		return 0;
	}

	// void btConvexCast::CastResult::reportFailure(int errNo, int numIterations)
	static int _bind_reportFailure(lua_State *L) {
		if (!_lg_typecheck_reportFailure(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexCast::CastResult::reportFailure(int errNo, int numIterations) function, expected prototype:\nvoid btConvexCast::CastResult::reportFailure(int errNo, int numIterations)\nClass arguments details:\n");
		}

		int errNo=(int)lua_tointeger(L,2);
		int numIterations=(int)lua_tointeger(L,3);

		btConvexCast::CastResult* self=(Luna< btConvexCast::CastResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexCast::CastResult::reportFailure(int, int). Got : '%s'",typeid(Luna< btConvexCast::CastResult >::check(L,1)).name());
		}
		self->reportFailure(errNo, numIterations);

		return 0;
	}

	// btTransform btConvexCast::CastResult::m_hitTransformA()
	static int _bind_getM_hitTransformA(lua_State *L) {
		if (!_lg_typecheck_getM_hitTransformA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform btConvexCast::CastResult::m_hitTransformA() function, expected prototype:\nbtTransform btConvexCast::CastResult::m_hitTransformA()\nClass arguments details:\n");
		}


		btConvexCast::CastResult* self=(Luna< btConvexCast::CastResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform btConvexCast::CastResult::m_hitTransformA(). Got : '%s'",typeid(Luna< btConvexCast::CastResult >::check(L,1)).name());
		}
		const btTransform* lret = &self->m_hitTransformA;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// btTransform btConvexCast::CastResult::m_hitTransformB()
	static int _bind_getM_hitTransformB(lua_State *L) {
		if (!_lg_typecheck_getM_hitTransformB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform btConvexCast::CastResult::m_hitTransformB() function, expected prototype:\nbtTransform btConvexCast::CastResult::m_hitTransformB()\nClass arguments details:\n");
		}


		btConvexCast::CastResult* self=(Luna< btConvexCast::CastResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform btConvexCast::CastResult::m_hitTransformB(). Got : '%s'",typeid(Luna< btConvexCast::CastResult >::check(L,1)).name());
		}
		const btTransform* lret = &self->m_hitTransformB;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// btVector3 btConvexCast::CastResult::m_normal()
	static int _bind_getM_normal(lua_State *L) {
		if (!_lg_typecheck_getM_normal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btConvexCast::CastResult::m_normal() function, expected prototype:\nbtVector3 btConvexCast::CastResult::m_normal()\nClass arguments details:\n");
		}


		btConvexCast::CastResult* self=(Luna< btConvexCast::CastResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btConvexCast::CastResult::m_normal(). Got : '%s'",typeid(Luna< btConvexCast::CastResult >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_normal;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btConvexCast::CastResult::m_hitPoint()
	static int _bind_getM_hitPoint(lua_State *L) {
		if (!_lg_typecheck_getM_hitPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btConvexCast::CastResult::m_hitPoint() function, expected prototype:\nbtVector3 btConvexCast::CastResult::m_hitPoint()\nClass arguments details:\n");
		}


		btConvexCast::CastResult* self=(Luna< btConvexCast::CastResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btConvexCast::CastResult::m_hitPoint(). Got : '%s'",typeid(Luna< btConvexCast::CastResult >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_hitPoint;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// float btConvexCast::CastResult::m_fraction()
	static int _bind_getM_fraction(lua_State *L) {
		if (!_lg_typecheck_getM_fraction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConvexCast::CastResult::m_fraction() function, expected prototype:\nfloat btConvexCast::CastResult::m_fraction()\nClass arguments details:\n");
		}


		btConvexCast::CastResult* self=(Luna< btConvexCast::CastResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConvexCast::CastResult::m_fraction(). Got : '%s'",typeid(Luna< btConvexCast::CastResult >::check(L,1)).name());
		}
		float lret = self->m_fraction;
		lua_pushnumber(L,lret);

		return 1;
	}

	// btIDebugDraw * btConvexCast::CastResult::m_debugDrawer()
	static int _bind_getM_debugDrawer(lua_State *L) {
		if (!_lg_typecheck_getM_debugDrawer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btIDebugDraw * btConvexCast::CastResult::m_debugDrawer() function, expected prototype:\nbtIDebugDraw * btConvexCast::CastResult::m_debugDrawer()\nClass arguments details:\n");
		}


		btConvexCast::CastResult* self=(Luna< btConvexCast::CastResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btIDebugDraw * btConvexCast::CastResult::m_debugDrawer(). Got : '%s'",typeid(Luna< btConvexCast::CastResult >::check(L,1)).name());
		}
		btIDebugDraw * lret = self->m_debugDrawer;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btIDebugDraw >::push(L,lret,false);

		return 1;
	}

	// float btConvexCast::CastResult::m_allowedPenetration()
	static int _bind_getM_allowedPenetration(lua_State *L) {
		if (!_lg_typecheck_getM_allowedPenetration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConvexCast::CastResult::m_allowedPenetration() function, expected prototype:\nfloat btConvexCast::CastResult::m_allowedPenetration()\nClass arguments details:\n");
		}


		btConvexCast::CastResult* self=(Luna< btConvexCast::CastResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConvexCast::CastResult::m_allowedPenetration(). Got : '%s'",typeid(Luna< btConvexCast::CastResult >::check(L,1)).name());
		}
		float lret = self->m_allowedPenetration;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConvexCast::CastResult::m_hitTransformA(btTransform value)
	static int _bind_setM_hitTransformA(lua_State *L) {
		if (!_lg_typecheck_setM_hitTransformA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexCast::CastResult::m_hitTransformA(btTransform value) function, expected prototype:\nvoid btConvexCast::CastResult::m_hitTransformA(btTransform value)\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		btTransform* value_ptr=(Luna< btTransform >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btConvexCast::CastResult::m_hitTransformA function");
		}
		btTransform value=*value_ptr;

		btConvexCast::CastResult* self=(Luna< btConvexCast::CastResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexCast::CastResult::m_hitTransformA(btTransform). Got : '%s'",typeid(Luna< btConvexCast::CastResult >::check(L,1)).name());
		}
		self->m_hitTransformA = value;

		return 0;
	}

	// void btConvexCast::CastResult::m_hitTransformB(btTransform value)
	static int _bind_setM_hitTransformB(lua_State *L) {
		if (!_lg_typecheck_setM_hitTransformB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexCast::CastResult::m_hitTransformB(btTransform value) function, expected prototype:\nvoid btConvexCast::CastResult::m_hitTransformB(btTransform value)\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		btTransform* value_ptr=(Luna< btTransform >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btConvexCast::CastResult::m_hitTransformB function");
		}
		btTransform value=*value_ptr;

		btConvexCast::CastResult* self=(Luna< btConvexCast::CastResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexCast::CastResult::m_hitTransformB(btTransform). Got : '%s'",typeid(Luna< btConvexCast::CastResult >::check(L,1)).name());
		}
		self->m_hitTransformB = value;

		return 0;
	}

	// void btConvexCast::CastResult::m_normal(btVector3 value)
	static int _bind_setM_normal(lua_State *L) {
		if (!_lg_typecheck_setM_normal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexCast::CastResult::m_normal(btVector3 value) function, expected prototype:\nvoid btConvexCast::CastResult::m_normal(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btConvexCast::CastResult::m_normal function");
		}
		btVector3 value=*value_ptr;

		btConvexCast::CastResult* self=(Luna< btConvexCast::CastResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexCast::CastResult::m_normal(btVector3). Got : '%s'",typeid(Luna< btConvexCast::CastResult >::check(L,1)).name());
		}
		self->m_normal = value;

		return 0;
	}

	// void btConvexCast::CastResult::m_hitPoint(btVector3 value)
	static int _bind_setM_hitPoint(lua_State *L) {
		if (!_lg_typecheck_setM_hitPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexCast::CastResult::m_hitPoint(btVector3 value) function, expected prototype:\nvoid btConvexCast::CastResult::m_hitPoint(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btConvexCast::CastResult::m_hitPoint function");
		}
		btVector3 value=*value_ptr;

		btConvexCast::CastResult* self=(Luna< btConvexCast::CastResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexCast::CastResult::m_hitPoint(btVector3). Got : '%s'",typeid(Luna< btConvexCast::CastResult >::check(L,1)).name());
		}
		self->m_hitPoint = value;

		return 0;
	}

	// void btConvexCast::CastResult::m_fraction(float value)
	static int _bind_setM_fraction(lua_State *L) {
		if (!_lg_typecheck_setM_fraction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexCast::CastResult::m_fraction(float value) function, expected prototype:\nvoid btConvexCast::CastResult::m_fraction(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btConvexCast::CastResult* self=(Luna< btConvexCast::CastResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexCast::CastResult::m_fraction(float). Got : '%s'",typeid(Luna< btConvexCast::CastResult >::check(L,1)).name());
		}
		self->m_fraction = value;

		return 0;
	}

	// void btConvexCast::CastResult::m_debugDrawer(btIDebugDraw * value)
	static int _bind_setM_debugDrawer(lua_State *L) {
		if (!_lg_typecheck_setM_debugDrawer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexCast::CastResult::m_debugDrawer(btIDebugDraw * value) function, expected prototype:\nvoid btConvexCast::CastResult::m_debugDrawer(btIDebugDraw * value)\nClass arguments details:\narg 1 ID = 63441741\n");
		}

		btIDebugDraw* value=(Luna< btIDebugDraw >::check(L,2));

		btConvexCast::CastResult* self=(Luna< btConvexCast::CastResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexCast::CastResult::m_debugDrawer(btIDebugDraw *). Got : '%s'",typeid(Luna< btConvexCast::CastResult >::check(L,1)).name());
		}
		self->m_debugDrawer = value;

		return 0;
	}

	// void btConvexCast::CastResult::m_allowedPenetration(float value)
	static int _bind_setM_allowedPenetration(lua_State *L) {
		if (!_lg_typecheck_setM_allowedPenetration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexCast::CastResult::m_allowedPenetration(float value) function, expected prototype:\nvoid btConvexCast::CastResult::m_allowedPenetration(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btConvexCast::CastResult* self=(Luna< btConvexCast::CastResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexCast::CastResult::m_allowedPenetration(float). Got : '%s'",typeid(Luna< btConvexCast::CastResult >::check(L,1)).name());
		}
		self->m_allowedPenetration = value;

		return 0;
	}

	// void btConvexCast::CastResult::base_DebugDraw(float fraction)
	static int _bind_base_DebugDraw(lua_State *L) {
		if (!_lg_typecheck_base_DebugDraw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexCast::CastResult::base_DebugDraw(float fraction) function, expected prototype:\nvoid btConvexCast::CastResult::base_DebugDraw(float fraction)\nClass arguments details:\n");
		}

		float fraction=(float)lua_tonumber(L,2);

		btConvexCast::CastResult* self=(Luna< btConvexCast::CastResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexCast::CastResult::base_DebugDraw(float). Got : '%s'",typeid(Luna< btConvexCast::CastResult >::check(L,1)).name());
		}
		self->CastResult::DebugDraw(fraction);

		return 0;
	}

	// void btConvexCast::CastResult::base_drawCoordSystem(const btTransform & trans)
	static int _bind_base_drawCoordSystem(lua_State *L) {
		if (!_lg_typecheck_base_drawCoordSystem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexCast::CastResult::base_drawCoordSystem(const btTransform & trans) function, expected prototype:\nvoid btConvexCast::CastResult::base_drawCoordSystem(const btTransform & trans)\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		const btTransform* trans_ptr=(Luna< btTransform >::check(L,2));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in btConvexCast::CastResult::base_drawCoordSystem function");
		}
		const btTransform & trans=*trans_ptr;

		btConvexCast::CastResult* self=(Luna< btConvexCast::CastResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexCast::CastResult::base_drawCoordSystem(const btTransform &). Got : '%s'",typeid(Luna< btConvexCast::CastResult >::check(L,1)).name());
		}
		self->CastResult::drawCoordSystem(trans);

		return 0;
	}

	// void btConvexCast::CastResult::base_reportFailure(int errNo, int numIterations)
	static int _bind_base_reportFailure(lua_State *L) {
		if (!_lg_typecheck_base_reportFailure(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexCast::CastResult::base_reportFailure(int errNo, int numIterations) function, expected prototype:\nvoid btConvexCast::CastResult::base_reportFailure(int errNo, int numIterations)\nClass arguments details:\n");
		}

		int errNo=(int)lua_tointeger(L,2);
		int numIterations=(int)lua_tointeger(L,3);

		btConvexCast::CastResult* self=(Luna< btConvexCast::CastResult >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexCast::CastResult::base_reportFailure(int, int). Got : '%s'",typeid(Luna< btConvexCast::CastResult >::check(L,1)).name());
		}
		self->CastResult::reportFailure(errNo, numIterations);

		return 0;
	}


	// Operator binds:

};

btConvexCast::CastResult* LunaTraits< btConvexCast::CastResult >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btConvexCast_CastResult::_bind_ctor(L);
}

void LunaTraits< btConvexCast::CastResult >::_bind_dtor(btConvexCast::CastResult* obj) {
	delete obj;
}

const char LunaTraits< btConvexCast::CastResult >::className[] = "btConvexCast_CastResult";
const char LunaTraits< btConvexCast::CastResult >::fullName[] = "btConvexCast::CastResult";
const char LunaTraits< btConvexCast::CastResult >::moduleName[] = "btConvexCast";
const char* LunaTraits< btConvexCast::CastResult >::parents[] = {0};
const int LunaTraits< btConvexCast::CastResult >::hash = 12958328;
const int LunaTraits< btConvexCast::CastResult >::uniqueIDs[] = {12958328,0};

luna_RegType LunaTraits< btConvexCast::CastResult >::methods[] = {
	{"DebugDraw", &luna_wrapper_btConvexCast_CastResult::_bind_DebugDraw},
	{"drawCoordSystem", &luna_wrapper_btConvexCast_CastResult::_bind_drawCoordSystem},
	{"reportFailure", &luna_wrapper_btConvexCast_CastResult::_bind_reportFailure},
	{"getM_hitTransformA", &luna_wrapper_btConvexCast_CastResult::_bind_getM_hitTransformA},
	{"getM_hitTransformB", &luna_wrapper_btConvexCast_CastResult::_bind_getM_hitTransformB},
	{"getM_normal", &luna_wrapper_btConvexCast_CastResult::_bind_getM_normal},
	{"getM_hitPoint", &luna_wrapper_btConvexCast_CastResult::_bind_getM_hitPoint},
	{"getM_fraction", &luna_wrapper_btConvexCast_CastResult::_bind_getM_fraction},
	{"getM_debugDrawer", &luna_wrapper_btConvexCast_CastResult::_bind_getM_debugDrawer},
	{"getM_allowedPenetration", &luna_wrapper_btConvexCast_CastResult::_bind_getM_allowedPenetration},
	{"setM_hitTransformA", &luna_wrapper_btConvexCast_CastResult::_bind_setM_hitTransformA},
	{"setM_hitTransformB", &luna_wrapper_btConvexCast_CastResult::_bind_setM_hitTransformB},
	{"setM_normal", &luna_wrapper_btConvexCast_CastResult::_bind_setM_normal},
	{"setM_hitPoint", &luna_wrapper_btConvexCast_CastResult::_bind_setM_hitPoint},
	{"setM_fraction", &luna_wrapper_btConvexCast_CastResult::_bind_setM_fraction},
	{"setM_debugDrawer", &luna_wrapper_btConvexCast_CastResult::_bind_setM_debugDrawer},
	{"setM_allowedPenetration", &luna_wrapper_btConvexCast_CastResult::_bind_setM_allowedPenetration},
	{"base_DebugDraw", &luna_wrapper_btConvexCast_CastResult::_bind_base_DebugDraw},
	{"base_drawCoordSystem", &luna_wrapper_btConvexCast_CastResult::_bind_base_drawCoordSystem},
	{"base_reportFailure", &luna_wrapper_btConvexCast_CastResult::_bind_base_reportFailure},
	{"dynCast", &luna_wrapper_btConvexCast_CastResult::_bind_dynCast},
	{"__eq", &luna_wrapper_btConvexCast_CastResult::_bind___eq},
	{"getTable", &luna_wrapper_btConvexCast_CastResult::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btConvexCast::CastResult >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btConvexCast::CastResult >::enumValues[] = {
	{0,0}
};



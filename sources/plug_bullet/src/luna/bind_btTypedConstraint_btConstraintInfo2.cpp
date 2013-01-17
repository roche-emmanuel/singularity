#include <plug_common.h>

class luna_wrapper_btTypedConstraint_btConstraintInfo2 {
public:
	typedef Luna< btTypedConstraint::btConstraintInfo2 > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,17243936) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btTypedConstraint::btConstraintInfo2*)");
		}

		btTypedConstraint::btConstraintInfo2* rhs =(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,2));
		btTypedConstraint::btConstraintInfo2* self=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1));
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

		btTypedConstraint::btConstraintInfo2* self=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btTypedConstraint::btConstraintInfo2");
		
		return luna_dynamicCast(L,converters,"btTypedConstraint::btConstraintInfo2",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getFps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getErp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_J1linearAxis(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_J1angularAxis(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_J2linearAxis(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_J2angularAxis(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRowskip(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_constraintError(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCfm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_lowerLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_upperLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFindex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_numIterations(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_damping(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFps(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setErp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_J1linearAxis(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_J1angularAxis(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_J2linearAxis(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_J2angularAxis(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRowskip(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_constraintError(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCfm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_lowerLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_upperLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFindex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_numIterations(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_damping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// float btTypedConstraint::btConstraintInfo2::fps()
	static int _bind_getFps(lua_State *L) {
		if (!_lg_typecheck_getFps(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTypedConstraint::btConstraintInfo2::fps() function, expected prototype:\nfloat btTypedConstraint::btConstraintInfo2::fps()\nClass arguments details:\n");
		}


		btTypedConstraint::btConstraintInfo2* self=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTypedConstraint::btConstraintInfo2::fps(). Got : '%s'",typeid(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1)).name());
		}
		float lret = self->fps;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btTypedConstraint::btConstraintInfo2::erp()
	static int _bind_getErp(lua_State *L) {
		if (!_lg_typecheck_getErp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTypedConstraint::btConstraintInfo2::erp() function, expected prototype:\nfloat btTypedConstraint::btConstraintInfo2::erp()\nClass arguments details:\n");
		}


		btTypedConstraint::btConstraintInfo2* self=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTypedConstraint::btConstraintInfo2::erp(). Got : '%s'",typeid(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1)).name());
		}
		float lret = self->erp;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float * btTypedConstraint::btConstraintInfo2::m_J1linearAxis()
	static int _bind_getM_J1linearAxis(lua_State *L) {
		if (!_lg_typecheck_getM_J1linearAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float * btTypedConstraint::btConstraintInfo2::m_J1linearAxis() function, expected prototype:\nfloat * btTypedConstraint::btConstraintInfo2::m_J1linearAxis()\nClass arguments details:\n");
		}


		btTypedConstraint::btConstraintInfo2* self=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float * btTypedConstraint::btConstraintInfo2::m_J1linearAxis(). Got : '%s'",typeid(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1)).name());
		}
		float * lret = self->m_J1linearAxis;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// float * btTypedConstraint::btConstraintInfo2::m_J1angularAxis()
	static int _bind_getM_J1angularAxis(lua_State *L) {
		if (!_lg_typecheck_getM_J1angularAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float * btTypedConstraint::btConstraintInfo2::m_J1angularAxis() function, expected prototype:\nfloat * btTypedConstraint::btConstraintInfo2::m_J1angularAxis()\nClass arguments details:\n");
		}


		btTypedConstraint::btConstraintInfo2* self=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float * btTypedConstraint::btConstraintInfo2::m_J1angularAxis(). Got : '%s'",typeid(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1)).name());
		}
		float * lret = self->m_J1angularAxis;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// float * btTypedConstraint::btConstraintInfo2::m_J2linearAxis()
	static int _bind_getM_J2linearAxis(lua_State *L) {
		if (!_lg_typecheck_getM_J2linearAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float * btTypedConstraint::btConstraintInfo2::m_J2linearAxis() function, expected prototype:\nfloat * btTypedConstraint::btConstraintInfo2::m_J2linearAxis()\nClass arguments details:\n");
		}


		btTypedConstraint::btConstraintInfo2* self=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float * btTypedConstraint::btConstraintInfo2::m_J2linearAxis(). Got : '%s'",typeid(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1)).name());
		}
		float * lret = self->m_J2linearAxis;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// float * btTypedConstraint::btConstraintInfo2::m_J2angularAxis()
	static int _bind_getM_J2angularAxis(lua_State *L) {
		if (!_lg_typecheck_getM_J2angularAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float * btTypedConstraint::btConstraintInfo2::m_J2angularAxis() function, expected prototype:\nfloat * btTypedConstraint::btConstraintInfo2::m_J2angularAxis()\nClass arguments details:\n");
		}


		btTypedConstraint::btConstraintInfo2* self=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float * btTypedConstraint::btConstraintInfo2::m_J2angularAxis(). Got : '%s'",typeid(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1)).name());
		}
		float * lret = self->m_J2angularAxis;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// int btTypedConstraint::btConstraintInfo2::rowskip()
	static int _bind_getRowskip(lua_State *L) {
		if (!_lg_typecheck_getRowskip(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTypedConstraint::btConstraintInfo2::rowskip() function, expected prototype:\nint btTypedConstraint::btConstraintInfo2::rowskip()\nClass arguments details:\n");
		}


		btTypedConstraint::btConstraintInfo2* self=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTypedConstraint::btConstraintInfo2::rowskip(). Got : '%s'",typeid(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1)).name());
		}
		int lret = self->rowskip;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float * btTypedConstraint::btConstraintInfo2::m_constraintError()
	static int _bind_getM_constraintError(lua_State *L) {
		if (!_lg_typecheck_getM_constraintError(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float * btTypedConstraint::btConstraintInfo2::m_constraintError() function, expected prototype:\nfloat * btTypedConstraint::btConstraintInfo2::m_constraintError()\nClass arguments details:\n");
		}


		btTypedConstraint::btConstraintInfo2* self=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float * btTypedConstraint::btConstraintInfo2::m_constraintError(). Got : '%s'",typeid(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1)).name());
		}
		float * lret = self->m_constraintError;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// float * btTypedConstraint::btConstraintInfo2::cfm()
	static int _bind_getCfm(lua_State *L) {
		if (!_lg_typecheck_getCfm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float * btTypedConstraint::btConstraintInfo2::cfm() function, expected prototype:\nfloat * btTypedConstraint::btConstraintInfo2::cfm()\nClass arguments details:\n");
		}


		btTypedConstraint::btConstraintInfo2* self=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float * btTypedConstraint::btConstraintInfo2::cfm(). Got : '%s'",typeid(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1)).name());
		}
		float * lret = self->cfm;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// float * btTypedConstraint::btConstraintInfo2::m_lowerLimit()
	static int _bind_getM_lowerLimit(lua_State *L) {
		if (!_lg_typecheck_getM_lowerLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float * btTypedConstraint::btConstraintInfo2::m_lowerLimit() function, expected prototype:\nfloat * btTypedConstraint::btConstraintInfo2::m_lowerLimit()\nClass arguments details:\n");
		}


		btTypedConstraint::btConstraintInfo2* self=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float * btTypedConstraint::btConstraintInfo2::m_lowerLimit(). Got : '%s'",typeid(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1)).name());
		}
		float * lret = self->m_lowerLimit;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// float * btTypedConstraint::btConstraintInfo2::m_upperLimit()
	static int _bind_getM_upperLimit(lua_State *L) {
		if (!_lg_typecheck_getM_upperLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float * btTypedConstraint::btConstraintInfo2::m_upperLimit() function, expected prototype:\nfloat * btTypedConstraint::btConstraintInfo2::m_upperLimit()\nClass arguments details:\n");
		}


		btTypedConstraint::btConstraintInfo2* self=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float * btTypedConstraint::btConstraintInfo2::m_upperLimit(). Got : '%s'",typeid(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1)).name());
		}
		float * lret = self->m_upperLimit;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// int * btTypedConstraint::btConstraintInfo2::findex()
	static int _bind_getFindex(lua_State *L) {
		if (!_lg_typecheck_getFindex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int * btTypedConstraint::btConstraintInfo2::findex() function, expected prototype:\nint * btTypedConstraint::btConstraintInfo2::findex()\nClass arguments details:\n");
		}


		btTypedConstraint::btConstraintInfo2* self=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int * btTypedConstraint::btConstraintInfo2::findex(). Got : '%s'",typeid(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1)).name());
		}
		int * lret = self->findex;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// int btTypedConstraint::btConstraintInfo2::m_numIterations()
	static int _bind_getM_numIterations(lua_State *L) {
		if (!_lg_typecheck_getM_numIterations(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTypedConstraint::btConstraintInfo2::m_numIterations() function, expected prototype:\nint btTypedConstraint::btConstraintInfo2::m_numIterations()\nClass arguments details:\n");
		}


		btTypedConstraint::btConstraintInfo2* self=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTypedConstraint::btConstraintInfo2::m_numIterations(). Got : '%s'",typeid(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1)).name());
		}
		int lret = self->m_numIterations;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btTypedConstraint::btConstraintInfo2::m_damping()
	static int _bind_getM_damping(lua_State *L) {
		if (!_lg_typecheck_getM_damping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTypedConstraint::btConstraintInfo2::m_damping() function, expected prototype:\nfloat btTypedConstraint::btConstraintInfo2::m_damping()\nClass arguments details:\n");
		}


		btTypedConstraint::btConstraintInfo2* self=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTypedConstraint::btConstraintInfo2::m_damping(). Got : '%s'",typeid(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1)).name());
		}
		float lret = self->m_damping;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTypedConstraint::btConstraintInfo2::fps(float value)
	static int _bind_setFps(lua_State *L) {
		if (!_lg_typecheck_setFps(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::btConstraintInfo2::fps(float value) function, expected prototype:\nvoid btTypedConstraint::btConstraintInfo2::fps(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btTypedConstraint::btConstraintInfo2* self=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::btConstraintInfo2::fps(float). Got : '%s'",typeid(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1)).name());
		}
		self->fps = value;

		return 0;
	}

	// void btTypedConstraint::btConstraintInfo2::erp(float value)
	static int _bind_setErp(lua_State *L) {
		if (!_lg_typecheck_setErp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::btConstraintInfo2::erp(float value) function, expected prototype:\nvoid btTypedConstraint::btConstraintInfo2::erp(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btTypedConstraint::btConstraintInfo2* self=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::btConstraintInfo2::erp(float). Got : '%s'",typeid(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1)).name());
		}
		self->erp = value;

		return 0;
	}

	// void btTypedConstraint::btConstraintInfo2::m_J1linearAxis(float * value)
	static int _bind_setM_J1linearAxis(lua_State *L) {
		if (!_lg_typecheck_setM_J1linearAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::btConstraintInfo2::m_J1linearAxis(float * value) function, expected prototype:\nvoid btTypedConstraint::btConstraintInfo2::m_J1linearAxis(float * value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btTypedConstraint::btConstraintInfo2* self=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::btConstraintInfo2::m_J1linearAxis(float *). Got : '%s'",typeid(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1)).name());
		}
		self->m_J1linearAxis = &value;

		return 0;
	}

	// void btTypedConstraint::btConstraintInfo2::m_J1angularAxis(float * value)
	static int _bind_setM_J1angularAxis(lua_State *L) {
		if (!_lg_typecheck_setM_J1angularAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::btConstraintInfo2::m_J1angularAxis(float * value) function, expected prototype:\nvoid btTypedConstraint::btConstraintInfo2::m_J1angularAxis(float * value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btTypedConstraint::btConstraintInfo2* self=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::btConstraintInfo2::m_J1angularAxis(float *). Got : '%s'",typeid(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1)).name());
		}
		self->m_J1angularAxis = &value;

		return 0;
	}

	// void btTypedConstraint::btConstraintInfo2::m_J2linearAxis(float * value)
	static int _bind_setM_J2linearAxis(lua_State *L) {
		if (!_lg_typecheck_setM_J2linearAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::btConstraintInfo2::m_J2linearAxis(float * value) function, expected prototype:\nvoid btTypedConstraint::btConstraintInfo2::m_J2linearAxis(float * value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btTypedConstraint::btConstraintInfo2* self=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::btConstraintInfo2::m_J2linearAxis(float *). Got : '%s'",typeid(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1)).name());
		}
		self->m_J2linearAxis = &value;

		return 0;
	}

	// void btTypedConstraint::btConstraintInfo2::m_J2angularAxis(float * value)
	static int _bind_setM_J2angularAxis(lua_State *L) {
		if (!_lg_typecheck_setM_J2angularAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::btConstraintInfo2::m_J2angularAxis(float * value) function, expected prototype:\nvoid btTypedConstraint::btConstraintInfo2::m_J2angularAxis(float * value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btTypedConstraint::btConstraintInfo2* self=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::btConstraintInfo2::m_J2angularAxis(float *). Got : '%s'",typeid(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1)).name());
		}
		self->m_J2angularAxis = &value;

		return 0;
	}

	// void btTypedConstraint::btConstraintInfo2::rowskip(int value)
	static int _bind_setRowskip(lua_State *L) {
		if (!_lg_typecheck_setRowskip(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::btConstraintInfo2::rowskip(int value) function, expected prototype:\nvoid btTypedConstraint::btConstraintInfo2::rowskip(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btTypedConstraint::btConstraintInfo2* self=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::btConstraintInfo2::rowskip(int). Got : '%s'",typeid(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1)).name());
		}
		self->rowskip = value;

		return 0;
	}

	// void btTypedConstraint::btConstraintInfo2::m_constraintError(float * value)
	static int _bind_setM_constraintError(lua_State *L) {
		if (!_lg_typecheck_setM_constraintError(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::btConstraintInfo2::m_constraintError(float * value) function, expected prototype:\nvoid btTypedConstraint::btConstraintInfo2::m_constraintError(float * value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btTypedConstraint::btConstraintInfo2* self=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::btConstraintInfo2::m_constraintError(float *). Got : '%s'",typeid(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1)).name());
		}
		self->m_constraintError = &value;

		return 0;
	}

	// void btTypedConstraint::btConstraintInfo2::cfm(float * value)
	static int _bind_setCfm(lua_State *L) {
		if (!_lg_typecheck_setCfm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::btConstraintInfo2::cfm(float * value) function, expected prototype:\nvoid btTypedConstraint::btConstraintInfo2::cfm(float * value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btTypedConstraint::btConstraintInfo2* self=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::btConstraintInfo2::cfm(float *). Got : '%s'",typeid(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1)).name());
		}
		self->cfm = &value;

		return 0;
	}

	// void btTypedConstraint::btConstraintInfo2::m_lowerLimit(float * value)
	static int _bind_setM_lowerLimit(lua_State *L) {
		if (!_lg_typecheck_setM_lowerLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::btConstraintInfo2::m_lowerLimit(float * value) function, expected prototype:\nvoid btTypedConstraint::btConstraintInfo2::m_lowerLimit(float * value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btTypedConstraint::btConstraintInfo2* self=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::btConstraintInfo2::m_lowerLimit(float *). Got : '%s'",typeid(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1)).name());
		}
		self->m_lowerLimit = &value;

		return 0;
	}

	// void btTypedConstraint::btConstraintInfo2::m_upperLimit(float * value)
	static int _bind_setM_upperLimit(lua_State *L) {
		if (!_lg_typecheck_setM_upperLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::btConstraintInfo2::m_upperLimit(float * value) function, expected prototype:\nvoid btTypedConstraint::btConstraintInfo2::m_upperLimit(float * value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btTypedConstraint::btConstraintInfo2* self=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::btConstraintInfo2::m_upperLimit(float *). Got : '%s'",typeid(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1)).name());
		}
		self->m_upperLimit = &value;

		return 0;
	}

	// void btTypedConstraint::btConstraintInfo2::findex(int * value)
	static int _bind_setFindex(lua_State *L) {
		if (!_lg_typecheck_setFindex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::btConstraintInfo2::findex(int * value) function, expected prototype:\nvoid btTypedConstraint::btConstraintInfo2::findex(int * value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btTypedConstraint::btConstraintInfo2* self=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::btConstraintInfo2::findex(int *). Got : '%s'",typeid(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1)).name());
		}
		self->findex = &value;

		return 0;
	}

	// void btTypedConstraint::btConstraintInfo2::m_numIterations(int value)
	static int _bind_setM_numIterations(lua_State *L) {
		if (!_lg_typecheck_setM_numIterations(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::btConstraintInfo2::m_numIterations(int value) function, expected prototype:\nvoid btTypedConstraint::btConstraintInfo2::m_numIterations(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btTypedConstraint::btConstraintInfo2* self=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::btConstraintInfo2::m_numIterations(int). Got : '%s'",typeid(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1)).name());
		}
		self->m_numIterations = value;

		return 0;
	}

	// void btTypedConstraint::btConstraintInfo2::m_damping(float value)
	static int _bind_setM_damping(lua_State *L) {
		if (!_lg_typecheck_setM_damping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::btConstraintInfo2::m_damping(float value) function, expected prototype:\nvoid btTypedConstraint::btConstraintInfo2::m_damping(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btTypedConstraint::btConstraintInfo2* self=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::btConstraintInfo2::m_damping(float). Got : '%s'",typeid(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,1)).name());
		}
		self->m_damping = value;

		return 0;
	}


	// Operator binds:

};

btTypedConstraint::btConstraintInfo2* LunaTraits< btTypedConstraint::btConstraintInfo2 >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btTypedConstraint::btConstraintInfo2 >::_bind_dtor(btTypedConstraint::btConstraintInfo2* obj) {
	delete obj;
}

const char LunaTraits< btTypedConstraint::btConstraintInfo2 >::className[] = "btTypedConstraint_btConstraintInfo2";
const char LunaTraits< btTypedConstraint::btConstraintInfo2 >::fullName[] = "btTypedConstraint::btConstraintInfo2";
const char LunaTraits< btTypedConstraint::btConstraintInfo2 >::moduleName[] = "bullet";
const char* LunaTraits< btTypedConstraint::btConstraintInfo2 >::parents[] = {0};
const int LunaTraits< btTypedConstraint::btConstraintInfo2 >::hash = 17243936;
const int LunaTraits< btTypedConstraint::btConstraintInfo2 >::uniqueIDs[] = {17243936,0};

luna_RegType LunaTraits< btTypedConstraint::btConstraintInfo2 >::methods[] = {
	{"getFps", &luna_wrapper_btTypedConstraint_btConstraintInfo2::_bind_getFps},
	{"getErp", &luna_wrapper_btTypedConstraint_btConstraintInfo2::_bind_getErp},
	{"getM_J1linearAxis", &luna_wrapper_btTypedConstraint_btConstraintInfo2::_bind_getM_J1linearAxis},
	{"getM_J1angularAxis", &luna_wrapper_btTypedConstraint_btConstraintInfo2::_bind_getM_J1angularAxis},
	{"getM_J2linearAxis", &luna_wrapper_btTypedConstraint_btConstraintInfo2::_bind_getM_J2linearAxis},
	{"getM_J2angularAxis", &luna_wrapper_btTypedConstraint_btConstraintInfo2::_bind_getM_J2angularAxis},
	{"getRowskip", &luna_wrapper_btTypedConstraint_btConstraintInfo2::_bind_getRowskip},
	{"getM_constraintError", &luna_wrapper_btTypedConstraint_btConstraintInfo2::_bind_getM_constraintError},
	{"getCfm", &luna_wrapper_btTypedConstraint_btConstraintInfo2::_bind_getCfm},
	{"getM_lowerLimit", &luna_wrapper_btTypedConstraint_btConstraintInfo2::_bind_getM_lowerLimit},
	{"getM_upperLimit", &luna_wrapper_btTypedConstraint_btConstraintInfo2::_bind_getM_upperLimit},
	{"getFindex", &luna_wrapper_btTypedConstraint_btConstraintInfo2::_bind_getFindex},
	{"getM_numIterations", &luna_wrapper_btTypedConstraint_btConstraintInfo2::_bind_getM_numIterations},
	{"getM_damping", &luna_wrapper_btTypedConstraint_btConstraintInfo2::_bind_getM_damping},
	{"setFps", &luna_wrapper_btTypedConstraint_btConstraintInfo2::_bind_setFps},
	{"setErp", &luna_wrapper_btTypedConstraint_btConstraintInfo2::_bind_setErp},
	{"setM_J1linearAxis", &luna_wrapper_btTypedConstraint_btConstraintInfo2::_bind_setM_J1linearAxis},
	{"setM_J1angularAxis", &luna_wrapper_btTypedConstraint_btConstraintInfo2::_bind_setM_J1angularAxis},
	{"setM_J2linearAxis", &luna_wrapper_btTypedConstraint_btConstraintInfo2::_bind_setM_J2linearAxis},
	{"setM_J2angularAxis", &luna_wrapper_btTypedConstraint_btConstraintInfo2::_bind_setM_J2angularAxis},
	{"setRowskip", &luna_wrapper_btTypedConstraint_btConstraintInfo2::_bind_setRowskip},
	{"setM_constraintError", &luna_wrapper_btTypedConstraint_btConstraintInfo2::_bind_setM_constraintError},
	{"setCfm", &luna_wrapper_btTypedConstraint_btConstraintInfo2::_bind_setCfm},
	{"setM_lowerLimit", &luna_wrapper_btTypedConstraint_btConstraintInfo2::_bind_setM_lowerLimit},
	{"setM_upperLimit", &luna_wrapper_btTypedConstraint_btConstraintInfo2::_bind_setM_upperLimit},
	{"setFindex", &luna_wrapper_btTypedConstraint_btConstraintInfo2::_bind_setFindex},
	{"setM_numIterations", &luna_wrapper_btTypedConstraint_btConstraintInfo2::_bind_setM_numIterations},
	{"setM_damping", &luna_wrapper_btTypedConstraint_btConstraintInfo2::_bind_setM_damping},
	{"dynCast", &luna_wrapper_btTypedConstraint_btConstraintInfo2::_bind_dynCast},
	{"__eq", &luna_wrapper_btTypedConstraint_btConstraintInfo2::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btTypedConstraint::btConstraintInfo2 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btTypedConstraint::btConstraintInfo2 >::enumValues[] = {
	{0,0}
};



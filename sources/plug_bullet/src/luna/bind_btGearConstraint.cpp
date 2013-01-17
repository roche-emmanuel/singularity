#include <plug_common.h>

#include <luna/wrappers/wrapper_btGearConstraint.h>

class luna_wrapper_btGearConstraint {
public:
	typedef Luna< btGearConstraint > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btTypedObject* self=(Luna< btTypedObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btTypedObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,66271199) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btTypedObject*)");
		}

		btTypedObject* rhs =(Luna< btTypedObject >::check(L,2));
		btTypedObject* self=(Luna< btTypedObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_btTypedObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btGearConstraint* ptr= dynamic_cast< btGearConstraint* >(Luna< btTypedObject >::check(L,1));
		btGearConstraint* ptr= luna_caster< btTypedObject, btGearConstraint >::cast(Luna< btTypedObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btGearConstraint >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,5))) ) return false;
		if( luatop>5 && lua_isnumber(L,6)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getInfo1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,17243935)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInfo2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,17243936)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setParam(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParam(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_buildJacobian(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setupSolverConstraint(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,36629303) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_solveConstraintObsolete(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65712094) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,65712094) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getInfo1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,17243935)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getInfo2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,17243936)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setParam(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getParam(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btGearConstraint::btGearConstraint(btRigidBody & rbA, btRigidBody & rbB, const btVector3 & axisInA, const btVector3 & axisInB, float ratio = 1.f)
	static btGearConstraint* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGearConstraint::btGearConstraint(btRigidBody & rbA, btRigidBody & rbB, const btVector3 & axisInA, const btVector3 & axisInB, float ratio = 1.f) function, expected prototype:\nbtGearConstraint::btGearConstraint(btRigidBody & rbA, btRigidBody & rbB, const btVector3 & axisInA, const btVector3 & axisInB, float ratio = 1.f)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\narg 3 ID = 91544891\narg 4 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		btRigidBody* rbA_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1));
		if( !rbA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbA in btGearConstraint::btGearConstraint function");
		}
		btRigidBody & rbA=*rbA_ptr;
		btRigidBody* rbB_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		if( !rbB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbB in btGearConstraint::btGearConstraint function");
		}
		btRigidBody & rbB=*rbB_ptr;
		const btVector3* axisInA_ptr=(Luna< btVector3 >::check(L,3));
		if( !axisInA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axisInA in btGearConstraint::btGearConstraint function");
		}
		const btVector3 & axisInA=*axisInA_ptr;
		const btVector3* axisInB_ptr=(Luna< btVector3 >::check(L,4));
		if( !axisInB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axisInB in btGearConstraint::btGearConstraint function");
		}
		const btVector3 & axisInB=*axisInB_ptr;
		float ratio=luatop>4 ? (float)lua_tonumber(L,5) : 1.f;

		return new btGearConstraint(rbA, rbB, axisInA, axisInB, ratio);
	}

	// btGearConstraint::btGearConstraint(lua_Table * data, btRigidBody & rbA, btRigidBody & rbB, const btVector3 & axisInA, const btVector3 & axisInB, float ratio = 1.f)
	static btGearConstraint* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGearConstraint::btGearConstraint(lua_Table * data, btRigidBody & rbA, btRigidBody & rbB, const btVector3 & axisInA, const btVector3 & axisInB, float ratio = 1.f) function, expected prototype:\nbtGearConstraint::btGearConstraint(lua_Table * data, btRigidBody & rbA, btRigidBody & rbB, const btVector3 & axisInA, const btVector3 & axisInB, float ratio = 1.f)\nClass arguments details:\narg 2 ID = 85758361\narg 3 ID = 85758361\narg 4 ID = 91544891\narg 5 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		btRigidBody* rbA_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		if( !rbA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbA in btGearConstraint::btGearConstraint function");
		}
		btRigidBody & rbA=*rbA_ptr;
		btRigidBody* rbB_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,3));
		if( !rbB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbB in btGearConstraint::btGearConstraint function");
		}
		btRigidBody & rbB=*rbB_ptr;
		const btVector3* axisInA_ptr=(Luna< btVector3 >::check(L,4));
		if( !axisInA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axisInA in btGearConstraint::btGearConstraint function");
		}
		const btVector3 & axisInA=*axisInA_ptr;
		const btVector3* axisInB_ptr=(Luna< btVector3 >::check(L,5));
		if( !axisInB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axisInB in btGearConstraint::btGearConstraint function");
		}
		const btVector3 & axisInB=*axisInB_ptr;
		float ratio=luatop>5 ? (float)lua_tonumber(L,6) : 1.f;

		return new wrapper_btGearConstraint(L,NULL, rbA, rbB, axisInA, axisInB, ratio);
	}

	// Overload binder for btGearConstraint::btGearConstraint
	static btGearConstraint* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btGearConstraint, cannot match any of the overloads for function btGearConstraint:\n  btGearConstraint(btRigidBody &, btRigidBody &, const btVector3 &, const btVector3 &, float)\n  btGearConstraint(lua_Table *, btRigidBody &, btRigidBody &, const btVector3 &, const btVector3 &, float)\n");
		return NULL;
	}


	// Function binds:
	// void btGearConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 * info)
	static int _bind_getInfo1(lua_State *L) {
		if (!_lg_typecheck_getInfo1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGearConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 * info) function, expected prototype:\nvoid btGearConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 * info)\nClass arguments details:\narg 1 ID = 17243935\n");
		}

		btTypedConstraint::btConstraintInfo1* info=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,2));

		btGearConstraint* self=Luna< btTypedObject >::checkSubType< btGearConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGearConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getInfo1(info);

		return 0;
	}

	// void btGearConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info)
	static int _bind_getInfo2(lua_State *L) {
		if (!_lg_typecheck_getInfo2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGearConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info) function, expected prototype:\nvoid btGearConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info)\nClass arguments details:\narg 1 ID = 17243936\n");
		}

		btTypedConstraint::btConstraintInfo2* info=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,2));

		btGearConstraint* self=Luna< btTypedObject >::checkSubType< btGearConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGearConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getInfo2(info);

		return 0;
	}

	// void btGearConstraint::setParam(int num, float value, int axis = -1)
	static int _bind_setParam(lua_State *L) {
		if (!_lg_typecheck_setParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGearConstraint::setParam(int num, float value, int axis = -1) function, expected prototype:\nvoid btGearConstraint::setParam(int num, float value, int axis = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		float value=(float)lua_tonumber(L,3);
		int axis=luatop>3 ? (int)lua_tointeger(L,4) : -1;

		btGearConstraint* self=Luna< btTypedObject >::checkSubType< btGearConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGearConstraint::setParam(int, float, int). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setParam(num, value, axis);

		return 0;
	}

	// float btGearConstraint::getParam(int num, int axis = -1) const
	static int _bind_getParam(lua_State *L) {
		if (!_lg_typecheck_getParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btGearConstraint::getParam(int num, int axis = -1) const function, expected prototype:\nfloat btGearConstraint::getParam(int num, int axis = -1) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		int axis=luatop>2 ? (int)lua_tointeger(L,3) : -1;

		btGearConstraint* self=Luna< btTypedObject >::checkSubType< btGearConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btGearConstraint::getParam(int, int) const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getParam(num, axis);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGearConstraint::base_buildJacobian()
	static int _bind_base_buildJacobian(lua_State *L) {
		if (!_lg_typecheck_base_buildJacobian(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGearConstraint::base_buildJacobian() function, expected prototype:\nvoid btGearConstraint::base_buildJacobian()\nClass arguments details:\n");
		}


		btGearConstraint* self=Luna< btTypedObject >::checkSubType< btGearConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGearConstraint::base_buildJacobian(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btGearConstraint::buildJacobian();

		return 0;
	}

	// void btGearConstraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep)
	static int _bind_base_setupSolverConstraint(lua_State *L) {
		if (!_lg_typecheck_base_setupSolverConstraint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGearConstraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep) function, expected prototype:\nvoid btGearConstraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep)\nClass arguments details:\narg 1 ID = 1318117\n");
		}

		btConstraintArray* ca_ptr=(Luna< btAlignedObjectArray< btSolverConstraint > >::checkSubType< btConstraintArray >(L,2));
		if( !ca_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ca in btGearConstraint::base_setupSolverConstraint function");
		}
		btConstraintArray & ca=*ca_ptr;
		int solverBodyA=(int)lua_tointeger(L,3);
		int solverBodyB=(int)lua_tointeger(L,4);
		float timeStep=(float)lua_tonumber(L,5);

		btGearConstraint* self=Luna< btTypedObject >::checkSubType< btGearConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGearConstraint::base_setupSolverConstraint(btConstraintArray &, int, int, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btGearConstraint::setupSolverConstraint(ca, solverBodyA, solverBodyB, timeStep);

		return 0;
	}

	// void btGearConstraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3)
	static int _bind_base_solveConstraintObsolete(lua_State *L) {
		if (!_lg_typecheck_base_solveConstraintObsolete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGearConstraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3) function, expected prototype:\nvoid btGearConstraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3)\nClass arguments details:\narg 1 ID = 65712094\narg 2 ID = 65712094\n");
		}

		btSolverBody* _arg1_ptr=(Luna< btSolverBody >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in btGearConstraint::base_solveConstraintObsolete function");
		}
		btSolverBody & _arg1=*_arg1_ptr;
		btSolverBody* _arg2_ptr=(Luna< btSolverBody >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in btGearConstraint::base_solveConstraintObsolete function");
		}
		btSolverBody & _arg2=*_arg2_ptr;
		float _arg3=(float)lua_tonumber(L,4);

		btGearConstraint* self=Luna< btTypedObject >::checkSubType< btGearConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGearConstraint::base_solveConstraintObsolete(btSolverBody &, btSolverBody &, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btGearConstraint::solveConstraintObsolete(_arg1, _arg2, _arg3);

		return 0;
	}

	// int btGearConstraint::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGearConstraint::base_calculateSerializeBufferSize() const function, expected prototype:\nint btGearConstraint::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btGearConstraint* self=Luna< btTypedObject >::checkSubType< btGearConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGearConstraint::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->btGearConstraint::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGearConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 * info)
	static int _bind_base_getInfo1(lua_State *L) {
		if (!_lg_typecheck_base_getInfo1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGearConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 * info) function, expected prototype:\nvoid btGearConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 * info)\nClass arguments details:\narg 1 ID = 17243935\n");
		}

		btTypedConstraint::btConstraintInfo1* info=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,2));

		btGearConstraint* self=Luna< btTypedObject >::checkSubType< btGearConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGearConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btGearConstraint::getInfo1(info);

		return 0;
	}

	// void btGearConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 * info)
	static int _bind_base_getInfo2(lua_State *L) {
		if (!_lg_typecheck_base_getInfo2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGearConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 * info) function, expected prototype:\nvoid btGearConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 * info)\nClass arguments details:\narg 1 ID = 17243936\n");
		}

		btTypedConstraint::btConstraintInfo2* info=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,2));

		btGearConstraint* self=Luna< btTypedObject >::checkSubType< btGearConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGearConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btGearConstraint::getInfo2(info);

		return 0;
	}

	// void btGearConstraint::base_setParam(int num, float value, int axis = -1)
	static int _bind_base_setParam(lua_State *L) {
		if (!_lg_typecheck_base_setParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGearConstraint::base_setParam(int num, float value, int axis = -1) function, expected prototype:\nvoid btGearConstraint::base_setParam(int num, float value, int axis = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		float value=(float)lua_tonumber(L,3);
		int axis=luatop>3 ? (int)lua_tointeger(L,4) : -1;

		btGearConstraint* self=Luna< btTypedObject >::checkSubType< btGearConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGearConstraint::base_setParam(int, float, int). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btGearConstraint::setParam(num, value, axis);

		return 0;
	}

	// float btGearConstraint::base_getParam(int num, int axis = -1) const
	static int _bind_base_getParam(lua_State *L) {
		if (!_lg_typecheck_base_getParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btGearConstraint::base_getParam(int num, int axis = -1) const function, expected prototype:\nfloat btGearConstraint::base_getParam(int num, int axis = -1) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		int axis=luatop>2 ? (int)lua_tointeger(L,3) : -1;

		btGearConstraint* self=Luna< btTypedObject >::checkSubType< btGearConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btGearConstraint::base_getParam(int, int) const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->btGearConstraint::getParam(num, axis);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btGearConstraint* LunaTraits< btGearConstraint >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btGearConstraint::_bind_ctor(L);
}

void LunaTraits< btGearConstraint >::_bind_dtor(btGearConstraint* obj) {
	delete obj;
}

const char LunaTraits< btGearConstraint >::className[] = "btGearConstraint";
const char LunaTraits< btGearConstraint >::fullName[] = "btGearConstraint";
const char LunaTraits< btGearConstraint >::moduleName[] = "bullet";
const char* LunaTraits< btGearConstraint >::parents[] = {"bullet.btTypedConstraint", 0};
const int LunaTraits< btGearConstraint >::hash = 40416937;
const int LunaTraits< btGearConstraint >::uniqueIDs[] = {66271199,0};

luna_RegType LunaTraits< btGearConstraint >::methods[] = {
	{"getInfo1", &luna_wrapper_btGearConstraint::_bind_getInfo1},
	{"getInfo2", &luna_wrapper_btGearConstraint::_bind_getInfo2},
	{"setParam", &luna_wrapper_btGearConstraint::_bind_setParam},
	{"getParam", &luna_wrapper_btGearConstraint::_bind_getParam},
	{"base_buildJacobian", &luna_wrapper_btGearConstraint::_bind_base_buildJacobian},
	{"base_setupSolverConstraint", &luna_wrapper_btGearConstraint::_bind_base_setupSolverConstraint},
	{"base_solveConstraintObsolete", &luna_wrapper_btGearConstraint::_bind_base_solveConstraintObsolete},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btGearConstraint::_bind_base_calculateSerializeBufferSize},
	{"base_getInfo1", &luna_wrapper_btGearConstraint::_bind_base_getInfo1},
	{"base_getInfo2", &luna_wrapper_btGearConstraint::_bind_base_getInfo2},
	{"base_setParam", &luna_wrapper_btGearConstraint::_bind_base_setParam},
	{"base_getParam", &luna_wrapper_btGearConstraint::_bind_base_getParam},
	{"__eq", &luna_wrapper_btGearConstraint::_bind___eq},
	{"getTable", &luna_wrapper_btGearConstraint::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btGearConstraint >::converters[] = {
	{"btTypedObject", &luna_wrapper_btGearConstraint::_cast_from_btTypedObject},
	{0,0}
};

luna_RegEnumType LunaTraits< btGearConstraint >::enumValues[] = {
	{0,0}
};



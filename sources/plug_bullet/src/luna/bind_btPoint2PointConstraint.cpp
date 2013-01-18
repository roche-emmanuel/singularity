#include <plug_common.h>

#include <luna/wrappers/wrapper_btPoint2PointConstraint.h>

class luna_wrapper_btPoint2PointConstraint {
public:
	typedef Luna< btPoint2PointConstraint > luna_t;

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
		//btPoint2PointConstraint* ptr= dynamic_cast< btPoint2PointConstraint* >(Luna< btTypedObject >::check(L,1));
		btPoint2PointConstraint* ptr= luna_caster< btTypedObject, btPoint2PointConstraint >::cast(Luna< btTypedObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btPoint2PointConstraint >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,5))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_buildJacobian(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInfo1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,17243935)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInfo1NonVirtual(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,17243935)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInfo2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,17243936)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInfo2NonVirtual(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,17243936)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_updateRHS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPivotA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPivotB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPivotInA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPivotInB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUseSolveConstraintObsolete(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSetting(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUseSolveConstraintObsolete(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSetting(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,71995903) ) return false;
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

	inline static bool _lg_typecheck_base_buildJacobian(lua_State *L) {
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

	inline static bool _lg_typecheck_base_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btPoint2PointConstraint::btPoint2PointConstraint(btRigidBody & rbA, btRigidBody & rbB, const btVector3 & pivotInA, const btVector3 & pivotInB)
	static btPoint2PointConstraint* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPoint2PointConstraint::btPoint2PointConstraint(btRigidBody & rbA, btRigidBody & rbB, const btVector3 & pivotInA, const btVector3 & pivotInB) function, expected prototype:\nbtPoint2PointConstraint::btPoint2PointConstraint(btRigidBody & rbA, btRigidBody & rbB, const btVector3 & pivotInA, const btVector3 & pivotInB)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\narg 3 ID = 91544891\narg 4 ID = 91544891\n");
		}

		btRigidBody* rbA_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1));
		if( !rbA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbA in btPoint2PointConstraint::btPoint2PointConstraint function");
		}
		btRigidBody & rbA=*rbA_ptr;
		btRigidBody* rbB_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		if( !rbB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbB in btPoint2PointConstraint::btPoint2PointConstraint function");
		}
		btRigidBody & rbB=*rbB_ptr;
		const btVector3* pivotInA_ptr=(Luna< btVector3 >::check(L,3));
		if( !pivotInA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pivotInA in btPoint2PointConstraint::btPoint2PointConstraint function");
		}
		const btVector3 & pivotInA=*pivotInA_ptr;
		const btVector3* pivotInB_ptr=(Luna< btVector3 >::check(L,4));
		if( !pivotInB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pivotInB in btPoint2PointConstraint::btPoint2PointConstraint function");
		}
		const btVector3 & pivotInB=*pivotInB_ptr;

		return new btPoint2PointConstraint(rbA, rbB, pivotInA, pivotInB);
	}

	// btPoint2PointConstraint::btPoint2PointConstraint(btRigidBody & rbA, const btVector3 & pivotInA)
	static btPoint2PointConstraint* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPoint2PointConstraint::btPoint2PointConstraint(btRigidBody & rbA, const btVector3 & pivotInA) function, expected prototype:\nbtPoint2PointConstraint::btPoint2PointConstraint(btRigidBody & rbA, const btVector3 & pivotInA)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 91544891\n");
		}

		btRigidBody* rbA_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1));
		if( !rbA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbA in btPoint2PointConstraint::btPoint2PointConstraint function");
		}
		btRigidBody & rbA=*rbA_ptr;
		const btVector3* pivotInA_ptr=(Luna< btVector3 >::check(L,2));
		if( !pivotInA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pivotInA in btPoint2PointConstraint::btPoint2PointConstraint function");
		}
		const btVector3 & pivotInA=*pivotInA_ptr;

		return new btPoint2PointConstraint(rbA, pivotInA);
	}

	// btPoint2PointConstraint::btPoint2PointConstraint(lua_Table * data, btRigidBody & rbA, btRigidBody & rbB, const btVector3 & pivotInA, const btVector3 & pivotInB)
	static btPoint2PointConstraint* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPoint2PointConstraint::btPoint2PointConstraint(lua_Table * data, btRigidBody & rbA, btRigidBody & rbB, const btVector3 & pivotInA, const btVector3 & pivotInB) function, expected prototype:\nbtPoint2PointConstraint::btPoint2PointConstraint(lua_Table * data, btRigidBody & rbA, btRigidBody & rbB, const btVector3 & pivotInA, const btVector3 & pivotInB)\nClass arguments details:\narg 2 ID = 85758361\narg 3 ID = 85758361\narg 4 ID = 91544891\narg 5 ID = 91544891\n");
		}

		btRigidBody* rbA_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		if( !rbA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbA in btPoint2PointConstraint::btPoint2PointConstraint function");
		}
		btRigidBody & rbA=*rbA_ptr;
		btRigidBody* rbB_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,3));
		if( !rbB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbB in btPoint2PointConstraint::btPoint2PointConstraint function");
		}
		btRigidBody & rbB=*rbB_ptr;
		const btVector3* pivotInA_ptr=(Luna< btVector3 >::check(L,4));
		if( !pivotInA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pivotInA in btPoint2PointConstraint::btPoint2PointConstraint function");
		}
		const btVector3 & pivotInA=*pivotInA_ptr;
		const btVector3* pivotInB_ptr=(Luna< btVector3 >::check(L,5));
		if( !pivotInB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pivotInB in btPoint2PointConstraint::btPoint2PointConstraint function");
		}
		const btVector3 & pivotInB=*pivotInB_ptr;

		return new wrapper_btPoint2PointConstraint(L,NULL, rbA, rbB, pivotInA, pivotInB);
	}

	// btPoint2PointConstraint::btPoint2PointConstraint(lua_Table * data, btRigidBody & rbA, const btVector3 & pivotInA)
	static btPoint2PointConstraint* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPoint2PointConstraint::btPoint2PointConstraint(lua_Table * data, btRigidBody & rbA, const btVector3 & pivotInA) function, expected prototype:\nbtPoint2PointConstraint::btPoint2PointConstraint(lua_Table * data, btRigidBody & rbA, const btVector3 & pivotInA)\nClass arguments details:\narg 2 ID = 85758361\narg 3 ID = 91544891\n");
		}

		btRigidBody* rbA_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		if( !rbA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbA in btPoint2PointConstraint::btPoint2PointConstraint function");
		}
		btRigidBody & rbA=*rbA_ptr;
		const btVector3* pivotInA_ptr=(Luna< btVector3 >::check(L,3));
		if( !pivotInA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pivotInA in btPoint2PointConstraint::btPoint2PointConstraint function");
		}
		const btVector3 & pivotInA=*pivotInA_ptr;

		return new wrapper_btPoint2PointConstraint(L,NULL, rbA, pivotInA);
	}

	// Overload binder for btPoint2PointConstraint::btPoint2PointConstraint
	static btPoint2PointConstraint* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function btPoint2PointConstraint, cannot match any of the overloads for function btPoint2PointConstraint:\n  btPoint2PointConstraint(btRigidBody &, btRigidBody &, const btVector3 &, const btVector3 &)\n  btPoint2PointConstraint(btRigidBody &, const btVector3 &)\n  btPoint2PointConstraint(lua_Table *, btRigidBody &, btRigidBody &, const btVector3 &, const btVector3 &)\n  btPoint2PointConstraint(lua_Table *, btRigidBody &, const btVector3 &)\n");
		return NULL;
	}


	// Function binds:
	// void btPoint2PointConstraint::buildJacobian()
	static int _bind_buildJacobian(lua_State *L) {
		if (!_lg_typecheck_buildJacobian(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPoint2PointConstraint::buildJacobian() function, expected prototype:\nvoid btPoint2PointConstraint::buildJacobian()\nClass arguments details:\n");
		}


		btPoint2PointConstraint* self=Luna< btTypedObject >::checkSubType< btPoint2PointConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPoint2PointConstraint::buildJacobian(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->buildJacobian();

		return 0;
	}

	// void btPoint2PointConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 * info)
	static int _bind_getInfo1(lua_State *L) {
		if (!_lg_typecheck_getInfo1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPoint2PointConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 * info) function, expected prototype:\nvoid btPoint2PointConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 * info)\nClass arguments details:\narg 1 ID = 17243935\n");
		}

		btTypedConstraint::btConstraintInfo1* info=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,2));

		btPoint2PointConstraint* self=Luna< btTypedObject >::checkSubType< btPoint2PointConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPoint2PointConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getInfo1(info);

		return 0;
	}

	// void btPoint2PointConstraint::getInfo1NonVirtual(btTypedConstraint::btConstraintInfo1 * info)
	static int _bind_getInfo1NonVirtual(lua_State *L) {
		if (!_lg_typecheck_getInfo1NonVirtual(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPoint2PointConstraint::getInfo1NonVirtual(btTypedConstraint::btConstraintInfo1 * info) function, expected prototype:\nvoid btPoint2PointConstraint::getInfo1NonVirtual(btTypedConstraint::btConstraintInfo1 * info)\nClass arguments details:\narg 1 ID = 17243935\n");
		}

		btTypedConstraint::btConstraintInfo1* info=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,2));

		btPoint2PointConstraint* self=Luna< btTypedObject >::checkSubType< btPoint2PointConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPoint2PointConstraint::getInfo1NonVirtual(btTypedConstraint::btConstraintInfo1 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getInfo1NonVirtual(info);

		return 0;
	}

	// void btPoint2PointConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info)
	static int _bind_getInfo2(lua_State *L) {
		if (!_lg_typecheck_getInfo2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPoint2PointConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info) function, expected prototype:\nvoid btPoint2PointConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info)\nClass arguments details:\narg 1 ID = 17243936\n");
		}

		btTypedConstraint::btConstraintInfo2* info=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,2));

		btPoint2PointConstraint* self=Luna< btTypedObject >::checkSubType< btPoint2PointConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPoint2PointConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getInfo2(info);

		return 0;
	}

	// void btPoint2PointConstraint::getInfo2NonVirtual(btTypedConstraint::btConstraintInfo2 * info, const btTransform & body0_trans, const btTransform & body1_trans)
	static int _bind_getInfo2NonVirtual(lua_State *L) {
		if (!_lg_typecheck_getInfo2NonVirtual(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPoint2PointConstraint::getInfo2NonVirtual(btTypedConstraint::btConstraintInfo2 * info, const btTransform & body0_trans, const btTransform & body1_trans) function, expected prototype:\nvoid btPoint2PointConstraint::getInfo2NonVirtual(btTypedConstraint::btConstraintInfo2 * info, const btTransform & body0_trans, const btTransform & body1_trans)\nClass arguments details:\narg 1 ID = 17243936\narg 2 ID = 13247377\narg 3 ID = 13247377\n");
		}

		btTypedConstraint::btConstraintInfo2* info=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,2));
		const btTransform* body0_trans_ptr=(Luna< btTransform >::check(L,3));
		if( !body0_trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg body0_trans in btPoint2PointConstraint::getInfo2NonVirtual function");
		}
		const btTransform & body0_trans=*body0_trans_ptr;
		const btTransform* body1_trans_ptr=(Luna< btTransform >::check(L,4));
		if( !body1_trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg body1_trans in btPoint2PointConstraint::getInfo2NonVirtual function");
		}
		const btTransform & body1_trans=*body1_trans_ptr;

		btPoint2PointConstraint* self=Luna< btTypedObject >::checkSubType< btPoint2PointConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPoint2PointConstraint::getInfo2NonVirtual(btTypedConstraint::btConstraintInfo2 *, const btTransform &, const btTransform &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getInfo2NonVirtual(info, body0_trans, body1_trans);

		return 0;
	}

	// void btPoint2PointConstraint::updateRHS(float timeStep)
	static int _bind_updateRHS(lua_State *L) {
		if (!_lg_typecheck_updateRHS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPoint2PointConstraint::updateRHS(float timeStep) function, expected prototype:\nvoid btPoint2PointConstraint::updateRHS(float timeStep)\nClass arguments details:\n");
		}

		float timeStep=(float)lua_tonumber(L,2);

		btPoint2PointConstraint* self=Luna< btTypedObject >::checkSubType< btPoint2PointConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPoint2PointConstraint::updateRHS(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->updateRHS(timeStep);

		return 0;
	}

	// void btPoint2PointConstraint::setPivotA(const btVector3 & pivotA)
	static int _bind_setPivotA(lua_State *L) {
		if (!_lg_typecheck_setPivotA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPoint2PointConstraint::setPivotA(const btVector3 & pivotA) function, expected prototype:\nvoid btPoint2PointConstraint::setPivotA(const btVector3 & pivotA)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* pivotA_ptr=(Luna< btVector3 >::check(L,2));
		if( !pivotA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pivotA in btPoint2PointConstraint::setPivotA function");
		}
		const btVector3 & pivotA=*pivotA_ptr;

		btPoint2PointConstraint* self=Luna< btTypedObject >::checkSubType< btPoint2PointConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPoint2PointConstraint::setPivotA(const btVector3 &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setPivotA(pivotA);

		return 0;
	}

	// void btPoint2PointConstraint::setPivotB(const btVector3 & pivotB)
	static int _bind_setPivotB(lua_State *L) {
		if (!_lg_typecheck_setPivotB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPoint2PointConstraint::setPivotB(const btVector3 & pivotB) function, expected prototype:\nvoid btPoint2PointConstraint::setPivotB(const btVector3 & pivotB)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* pivotB_ptr=(Luna< btVector3 >::check(L,2));
		if( !pivotB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pivotB in btPoint2PointConstraint::setPivotB function");
		}
		const btVector3 & pivotB=*pivotB_ptr;

		btPoint2PointConstraint* self=Luna< btTypedObject >::checkSubType< btPoint2PointConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPoint2PointConstraint::setPivotB(const btVector3 &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setPivotB(pivotB);

		return 0;
	}

	// const btVector3 & btPoint2PointConstraint::getPivotInA() const
	static int _bind_getPivotInA(lua_State *L) {
		if (!_lg_typecheck_getPivotInA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btPoint2PointConstraint::getPivotInA() const function, expected prototype:\nconst btVector3 & btPoint2PointConstraint::getPivotInA() const\nClass arguments details:\n");
		}


		btPoint2PointConstraint* self=Luna< btTypedObject >::checkSubType< btPoint2PointConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btPoint2PointConstraint::getPivotInA() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btVector3* lret = &self->getPivotInA();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const btVector3 & btPoint2PointConstraint::getPivotInB() const
	static int _bind_getPivotInB(lua_State *L) {
		if (!_lg_typecheck_getPivotInB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btPoint2PointConstraint::getPivotInB() const function, expected prototype:\nconst btVector3 & btPoint2PointConstraint::getPivotInB() const\nClass arguments details:\n");
		}


		btPoint2PointConstraint* self=Luna< btTypedObject >::checkSubType< btPoint2PointConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btPoint2PointConstraint::getPivotInB() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btVector3* lret = &self->getPivotInB();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btPoint2PointConstraint::setParam(int num, float value, int axis = -1)
	static int _bind_setParam(lua_State *L) {
		if (!_lg_typecheck_setParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPoint2PointConstraint::setParam(int num, float value, int axis = -1) function, expected prototype:\nvoid btPoint2PointConstraint::setParam(int num, float value, int axis = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		float value=(float)lua_tonumber(L,3);
		int axis=luatop>3 ? (int)lua_tointeger(L,4) : -1;

		btPoint2PointConstraint* self=Luna< btTypedObject >::checkSubType< btPoint2PointConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPoint2PointConstraint::setParam(int, float, int). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setParam(num, value, axis);

		return 0;
	}

	// float btPoint2PointConstraint::getParam(int num, int axis = -1) const
	static int _bind_getParam(lua_State *L) {
		if (!_lg_typecheck_getParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btPoint2PointConstraint::getParam(int num, int axis = -1) const function, expected prototype:\nfloat btPoint2PointConstraint::getParam(int num, int axis = -1) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		int axis=luatop>2 ? (int)lua_tointeger(L,3) : -1;

		btPoint2PointConstraint* self=Luna< btTypedObject >::checkSubType< btPoint2PointConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btPoint2PointConstraint::getParam(int, int) const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getParam(num, axis);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btPoint2PointConstraint::calculateSerializeBufferSize() const
	static int _bind_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btPoint2PointConstraint::calculateSerializeBufferSize() const function, expected prototype:\nint btPoint2PointConstraint::calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btPoint2PointConstraint* self=Luna< btTypedObject >::checkSubType< btPoint2PointConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btPoint2PointConstraint::calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btPoint2PointConstraint::m_useSolveConstraintObsolete()
	static int _bind_getUseSolveConstraintObsolete(lua_State *L) {
		if (!_lg_typecheck_getUseSolveConstraintObsolete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btPoint2PointConstraint::m_useSolveConstraintObsolete() function, expected prototype:\nbool btPoint2PointConstraint::m_useSolveConstraintObsolete()\nClass arguments details:\n");
		}


		btPoint2PointConstraint* self=Luna< btTypedObject >::checkSubType< btPoint2PointConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btPoint2PointConstraint::m_useSolveConstraintObsolete(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		bool lret = self->m_useSolveConstraintObsolete;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// btConstraintSetting btPoint2PointConstraint::m_setting()
	static int _bind_getSetting(lua_State *L) {
		if (!_lg_typecheck_getSetting(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConstraintSetting btPoint2PointConstraint::m_setting() function, expected prototype:\nbtConstraintSetting btPoint2PointConstraint::m_setting()\nClass arguments details:\n");
		}


		btPoint2PointConstraint* self=Luna< btTypedObject >::checkSubType< btPoint2PointConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btConstraintSetting btPoint2PointConstraint::m_setting(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btConstraintSetting* lret = &self->m_setting;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btConstraintSetting >::push(L,lret,false);

		return 1;
	}

	// void btPoint2PointConstraint::m_useSolveConstraintObsolete(bool value)
	static int _bind_setUseSolveConstraintObsolete(lua_State *L) {
		if (!_lg_typecheck_setUseSolveConstraintObsolete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPoint2PointConstraint::m_useSolveConstraintObsolete(bool value) function, expected prototype:\nvoid btPoint2PointConstraint::m_useSolveConstraintObsolete(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		btPoint2PointConstraint* self=Luna< btTypedObject >::checkSubType< btPoint2PointConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPoint2PointConstraint::m_useSolveConstraintObsolete(bool). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->m_useSolveConstraintObsolete = value;

		return 0;
	}

	// void btPoint2PointConstraint::m_setting(btConstraintSetting value)
	static int _bind_setSetting(lua_State *L) {
		if (!_lg_typecheck_setSetting(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPoint2PointConstraint::m_setting(btConstraintSetting value) function, expected prototype:\nvoid btPoint2PointConstraint::m_setting(btConstraintSetting value)\nClass arguments details:\narg 1 ID = 71995903\n");
		}

		btConstraintSetting* value_ptr=(Luna< btConstraintSetting >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btPoint2PointConstraint::m_setting function");
		}
		btConstraintSetting value=*value_ptr;

		btPoint2PointConstraint* self=Luna< btTypedObject >::checkSubType< btPoint2PointConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPoint2PointConstraint::m_setting(btConstraintSetting). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->m_setting = value;

		return 0;
	}

	// void btPoint2PointConstraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep)
	static int _bind_base_setupSolverConstraint(lua_State *L) {
		if (!_lg_typecheck_base_setupSolverConstraint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPoint2PointConstraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep) function, expected prototype:\nvoid btPoint2PointConstraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep)\nClass arguments details:\narg 1 ID = 1318117\n");
		}

		btConstraintArray* ca_ptr=(Luna< btAlignedObjectArray< btSolverConstraint > >::checkSubType< btConstraintArray >(L,2));
		if( !ca_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ca in btPoint2PointConstraint::base_setupSolverConstraint function");
		}
		btConstraintArray & ca=*ca_ptr;
		int solverBodyA=(int)lua_tointeger(L,3);
		int solverBodyB=(int)lua_tointeger(L,4);
		float timeStep=(float)lua_tonumber(L,5);

		btPoint2PointConstraint* self=Luna< btTypedObject >::checkSubType< btPoint2PointConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPoint2PointConstraint::base_setupSolverConstraint(btConstraintArray &, int, int, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btPoint2PointConstraint::setupSolverConstraint(ca, solverBodyA, solverBodyB, timeStep);

		return 0;
	}

	// void btPoint2PointConstraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3)
	static int _bind_base_solveConstraintObsolete(lua_State *L) {
		if (!_lg_typecheck_base_solveConstraintObsolete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPoint2PointConstraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3) function, expected prototype:\nvoid btPoint2PointConstraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3)\nClass arguments details:\narg 1 ID = 65712094\narg 2 ID = 65712094\n");
		}

		btSolverBody* _arg1_ptr=(Luna< btSolverBody >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in btPoint2PointConstraint::base_solveConstraintObsolete function");
		}
		btSolverBody & _arg1=*_arg1_ptr;
		btSolverBody* _arg2_ptr=(Luna< btSolverBody >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in btPoint2PointConstraint::base_solveConstraintObsolete function");
		}
		btSolverBody & _arg2=*_arg2_ptr;
		float _arg3=(float)lua_tonumber(L,4);

		btPoint2PointConstraint* self=Luna< btTypedObject >::checkSubType< btPoint2PointConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPoint2PointConstraint::base_solveConstraintObsolete(btSolverBody &, btSolverBody &, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btPoint2PointConstraint::solveConstraintObsolete(_arg1, _arg2, _arg3);

		return 0;
	}

	// void btPoint2PointConstraint::base_buildJacobian()
	static int _bind_base_buildJacobian(lua_State *L) {
		if (!_lg_typecheck_base_buildJacobian(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPoint2PointConstraint::base_buildJacobian() function, expected prototype:\nvoid btPoint2PointConstraint::base_buildJacobian()\nClass arguments details:\n");
		}


		btPoint2PointConstraint* self=Luna< btTypedObject >::checkSubType< btPoint2PointConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPoint2PointConstraint::base_buildJacobian(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btPoint2PointConstraint::buildJacobian();

		return 0;
	}

	// void btPoint2PointConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 * info)
	static int _bind_base_getInfo1(lua_State *L) {
		if (!_lg_typecheck_base_getInfo1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPoint2PointConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 * info) function, expected prototype:\nvoid btPoint2PointConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 * info)\nClass arguments details:\narg 1 ID = 17243935\n");
		}

		btTypedConstraint::btConstraintInfo1* info=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,2));

		btPoint2PointConstraint* self=Luna< btTypedObject >::checkSubType< btPoint2PointConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPoint2PointConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btPoint2PointConstraint::getInfo1(info);

		return 0;
	}

	// void btPoint2PointConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 * info)
	static int _bind_base_getInfo2(lua_State *L) {
		if (!_lg_typecheck_base_getInfo2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPoint2PointConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 * info) function, expected prototype:\nvoid btPoint2PointConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 * info)\nClass arguments details:\narg 1 ID = 17243936\n");
		}

		btTypedConstraint::btConstraintInfo2* info=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,2));

		btPoint2PointConstraint* self=Luna< btTypedObject >::checkSubType< btPoint2PointConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPoint2PointConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btPoint2PointConstraint::getInfo2(info);

		return 0;
	}

	// void btPoint2PointConstraint::base_setParam(int num, float value, int axis = -1)
	static int _bind_base_setParam(lua_State *L) {
		if (!_lg_typecheck_base_setParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPoint2PointConstraint::base_setParam(int num, float value, int axis = -1) function, expected prototype:\nvoid btPoint2PointConstraint::base_setParam(int num, float value, int axis = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		float value=(float)lua_tonumber(L,3);
		int axis=luatop>3 ? (int)lua_tointeger(L,4) : -1;

		btPoint2PointConstraint* self=Luna< btTypedObject >::checkSubType< btPoint2PointConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPoint2PointConstraint::base_setParam(int, float, int). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btPoint2PointConstraint::setParam(num, value, axis);

		return 0;
	}

	// float btPoint2PointConstraint::base_getParam(int num, int axis = -1) const
	static int _bind_base_getParam(lua_State *L) {
		if (!_lg_typecheck_base_getParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btPoint2PointConstraint::base_getParam(int num, int axis = -1) const function, expected prototype:\nfloat btPoint2PointConstraint::base_getParam(int num, int axis = -1) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		int axis=luatop>2 ? (int)lua_tointeger(L,3) : -1;

		btPoint2PointConstraint* self=Luna< btTypedObject >::checkSubType< btPoint2PointConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btPoint2PointConstraint::base_getParam(int, int) const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->btPoint2PointConstraint::getParam(num, axis);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btPoint2PointConstraint::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btPoint2PointConstraint::base_calculateSerializeBufferSize() const function, expected prototype:\nint btPoint2PointConstraint::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btPoint2PointConstraint* self=Luna< btTypedObject >::checkSubType< btPoint2PointConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btPoint2PointConstraint::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->btPoint2PointConstraint::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btPoint2PointConstraint* LunaTraits< btPoint2PointConstraint >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btPoint2PointConstraint::_bind_ctor(L);
}

void LunaTraits< btPoint2PointConstraint >::_bind_dtor(btPoint2PointConstraint* obj) {
	delete obj;
}

const char LunaTraits< btPoint2PointConstraint >::className[] = "btPoint2PointConstraint";
const char LunaTraits< btPoint2PointConstraint >::fullName[] = "btPoint2PointConstraint";
const char LunaTraits< btPoint2PointConstraint >::moduleName[] = "bullet";
const char* LunaTraits< btPoint2PointConstraint >::parents[] = {"bullet.btTypedConstraint", 0};
const int LunaTraits< btPoint2PointConstraint >::hash = 27188011;
const int LunaTraits< btPoint2PointConstraint >::uniqueIDs[] = {66271199,0};

luna_RegType LunaTraits< btPoint2PointConstraint >::methods[] = {
	{"buildJacobian", &luna_wrapper_btPoint2PointConstraint::_bind_buildJacobian},
	{"getInfo1", &luna_wrapper_btPoint2PointConstraint::_bind_getInfo1},
	{"getInfo1NonVirtual", &luna_wrapper_btPoint2PointConstraint::_bind_getInfo1NonVirtual},
	{"getInfo2", &luna_wrapper_btPoint2PointConstraint::_bind_getInfo2},
	{"getInfo2NonVirtual", &luna_wrapper_btPoint2PointConstraint::_bind_getInfo2NonVirtual},
	{"updateRHS", &luna_wrapper_btPoint2PointConstraint::_bind_updateRHS},
	{"setPivotA", &luna_wrapper_btPoint2PointConstraint::_bind_setPivotA},
	{"setPivotB", &luna_wrapper_btPoint2PointConstraint::_bind_setPivotB},
	{"getPivotInA", &luna_wrapper_btPoint2PointConstraint::_bind_getPivotInA},
	{"getPivotInB", &luna_wrapper_btPoint2PointConstraint::_bind_getPivotInB},
	{"setParam", &luna_wrapper_btPoint2PointConstraint::_bind_setParam},
	{"getParam", &luna_wrapper_btPoint2PointConstraint::_bind_getParam},
	{"calculateSerializeBufferSize", &luna_wrapper_btPoint2PointConstraint::_bind_calculateSerializeBufferSize},
	{"getUseSolveConstraintObsolete", &luna_wrapper_btPoint2PointConstraint::_bind_getUseSolveConstraintObsolete},
	{"getSetting", &luna_wrapper_btPoint2PointConstraint::_bind_getSetting},
	{"setUseSolveConstraintObsolete", &luna_wrapper_btPoint2PointConstraint::_bind_setUseSolveConstraintObsolete},
	{"setSetting", &luna_wrapper_btPoint2PointConstraint::_bind_setSetting},
	{"base_setupSolverConstraint", &luna_wrapper_btPoint2PointConstraint::_bind_base_setupSolverConstraint},
	{"base_solveConstraintObsolete", &luna_wrapper_btPoint2PointConstraint::_bind_base_solveConstraintObsolete},
	{"base_buildJacobian", &luna_wrapper_btPoint2PointConstraint::_bind_base_buildJacobian},
	{"base_getInfo1", &luna_wrapper_btPoint2PointConstraint::_bind_base_getInfo1},
	{"base_getInfo2", &luna_wrapper_btPoint2PointConstraint::_bind_base_getInfo2},
	{"base_setParam", &luna_wrapper_btPoint2PointConstraint::_bind_base_setParam},
	{"base_getParam", &luna_wrapper_btPoint2PointConstraint::_bind_base_getParam},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btPoint2PointConstraint::_bind_base_calculateSerializeBufferSize},
	{"__eq", &luna_wrapper_btPoint2PointConstraint::_bind___eq},
	{"getTable", &luna_wrapper_btPoint2PointConstraint::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btPoint2PointConstraint >::converters[] = {
	{"btTypedObject", &luna_wrapper_btPoint2PointConstraint::_cast_from_btTypedObject},
	{0,0}
};

luna_RegEnumType LunaTraits< btPoint2PointConstraint >::enumValues[] = {
	{0,0}
};



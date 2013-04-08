#include <plug_common.h>

#include <luna/wrappers/wrapper_btHinge2Constraint.h>

class luna_wrapper_btHinge2Constraint {
public:
	typedef Luna< btHinge2Constraint > luna_t;

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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		btHinge2Constraint* self= (btHinge2Constraint*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btHinge2Constraint >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,66271199) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btTypedObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btTypedObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btHinge2Constraint* ptr= dynamic_cast< btHinge2Constraint* >(Luna< btTypedObject >::check(L,1));
		btHinge2Constraint* ptr= luna_caster< btTypedObject, btHinge2Constraint >::cast(Luna< btTypedObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btHinge2Constraint >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,5))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,6))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getAnchor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAnchor2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAxis1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAxis2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAngle1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAngle2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUpperLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLowerLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_base_calcAnchorPos(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_setAxis(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getInfo2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,17243936)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btHinge2Constraint::btHinge2Constraint(btRigidBody & rbA, btRigidBody & rbB, btVector3 & anchor, btVector3 & axis1, btVector3 & axis2)
	static btHinge2Constraint* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btHinge2Constraint::btHinge2Constraint(btRigidBody & rbA, btRigidBody & rbB, btVector3 & anchor, btVector3 & axis1, btVector3 & axis2) function, expected prototype:\nbtHinge2Constraint::btHinge2Constraint(btRigidBody & rbA, btRigidBody & rbB, btVector3 & anchor, btVector3 & axis1, btVector3 & axis2)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\narg 3 ID = 91544891\narg 4 ID = 91544891\narg 5 ID = 91544891\n");
		}

		btRigidBody* rbA_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1));
		if( !rbA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbA in btHinge2Constraint::btHinge2Constraint function");
		}
		btRigidBody & rbA=*rbA_ptr;
		btRigidBody* rbB_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		if( !rbB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbB in btHinge2Constraint::btHinge2Constraint function");
		}
		btRigidBody & rbB=*rbB_ptr;
		btVector3* anchor_ptr=(Luna< btVector3 >::check(L,3));
		if( !anchor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg anchor in btHinge2Constraint::btHinge2Constraint function");
		}
		btVector3 & anchor=*anchor_ptr;
		btVector3* axis1_ptr=(Luna< btVector3 >::check(L,4));
		if( !axis1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis1 in btHinge2Constraint::btHinge2Constraint function");
		}
		btVector3 & axis1=*axis1_ptr;
		btVector3* axis2_ptr=(Luna< btVector3 >::check(L,5));
		if( !axis2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis2 in btHinge2Constraint::btHinge2Constraint function");
		}
		btVector3 & axis2=*axis2_ptr;

		return new btHinge2Constraint(rbA, rbB, anchor, axis1, axis2);
	}

	// btHinge2Constraint::btHinge2Constraint(lua_Table * data, btRigidBody & rbA, btRigidBody & rbB, btVector3 & anchor, btVector3 & axis1, btVector3 & axis2)
	static btHinge2Constraint* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btHinge2Constraint::btHinge2Constraint(lua_Table * data, btRigidBody & rbA, btRigidBody & rbB, btVector3 & anchor, btVector3 & axis1, btVector3 & axis2) function, expected prototype:\nbtHinge2Constraint::btHinge2Constraint(lua_Table * data, btRigidBody & rbA, btRigidBody & rbB, btVector3 & anchor, btVector3 & axis1, btVector3 & axis2)\nClass arguments details:\narg 2 ID = 85758361\narg 3 ID = 85758361\narg 4 ID = 91544891\narg 5 ID = 91544891\narg 6 ID = 91544891\n");
		}

		btRigidBody* rbA_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		if( !rbA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbA in btHinge2Constraint::btHinge2Constraint function");
		}
		btRigidBody & rbA=*rbA_ptr;
		btRigidBody* rbB_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,3));
		if( !rbB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbB in btHinge2Constraint::btHinge2Constraint function");
		}
		btRigidBody & rbB=*rbB_ptr;
		btVector3* anchor_ptr=(Luna< btVector3 >::check(L,4));
		if( !anchor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg anchor in btHinge2Constraint::btHinge2Constraint function");
		}
		btVector3 & anchor=*anchor_ptr;
		btVector3* axis1_ptr=(Luna< btVector3 >::check(L,5));
		if( !axis1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis1 in btHinge2Constraint::btHinge2Constraint function");
		}
		btVector3 & axis1=*axis1_ptr;
		btVector3* axis2_ptr=(Luna< btVector3 >::check(L,6));
		if( !axis2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis2 in btHinge2Constraint::btHinge2Constraint function");
		}
		btVector3 & axis2=*axis2_ptr;

		return new wrapper_btHinge2Constraint(L,NULL, rbA, rbB, anchor, axis1, axis2);
	}

	// Overload binder for btHinge2Constraint::btHinge2Constraint
	static btHinge2Constraint* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btHinge2Constraint, cannot match any of the overloads for function btHinge2Constraint:\n  btHinge2Constraint(btRigidBody &, btRigidBody &, btVector3 &, btVector3 &, btVector3 &)\n  btHinge2Constraint(lua_Table *, btRigidBody &, btRigidBody &, btVector3 &, btVector3 &, btVector3 &)\n");
		return NULL;
	}


	// Function binds:
	// const btVector3 & btHinge2Constraint::getAnchor()
	static int _bind_getAnchor(lua_State *L) {
		if (!_lg_typecheck_getAnchor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btHinge2Constraint::getAnchor() function, expected prototype:\nconst btVector3 & btHinge2Constraint::getAnchor()\nClass arguments details:\n");
		}


		btHinge2Constraint* self=Luna< btTypedObject >::checkSubType< btHinge2Constraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btHinge2Constraint::getAnchor(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btVector3* lret = &self->getAnchor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const btVector3 & btHinge2Constraint::getAnchor2()
	static int _bind_getAnchor2(lua_State *L) {
		if (!_lg_typecheck_getAnchor2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btHinge2Constraint::getAnchor2() function, expected prototype:\nconst btVector3 & btHinge2Constraint::getAnchor2()\nClass arguments details:\n");
		}


		btHinge2Constraint* self=Luna< btTypedObject >::checkSubType< btHinge2Constraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btHinge2Constraint::getAnchor2(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btVector3* lret = &self->getAnchor2();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const btVector3 & btHinge2Constraint::getAxis1()
	static int _bind_getAxis1(lua_State *L) {
		if (!_lg_typecheck_getAxis1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btHinge2Constraint::getAxis1() function, expected prototype:\nconst btVector3 & btHinge2Constraint::getAxis1()\nClass arguments details:\n");
		}


		btHinge2Constraint* self=Luna< btTypedObject >::checkSubType< btHinge2Constraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btHinge2Constraint::getAxis1(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btVector3* lret = &self->getAxis1();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const btVector3 & btHinge2Constraint::getAxis2()
	static int _bind_getAxis2(lua_State *L) {
		if (!_lg_typecheck_getAxis2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btHinge2Constraint::getAxis2() function, expected prototype:\nconst btVector3 & btHinge2Constraint::getAxis2()\nClass arguments details:\n");
		}


		btHinge2Constraint* self=Luna< btTypedObject >::checkSubType< btHinge2Constraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btHinge2Constraint::getAxis2(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btVector3* lret = &self->getAxis2();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// float btHinge2Constraint::getAngle1()
	static int _bind_getAngle1(lua_State *L) {
		if (!_lg_typecheck_getAngle1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btHinge2Constraint::getAngle1() function, expected prototype:\nfloat btHinge2Constraint::getAngle1()\nClass arguments details:\n");
		}


		btHinge2Constraint* self=Luna< btTypedObject >::checkSubType< btHinge2Constraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btHinge2Constraint::getAngle1(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getAngle1();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btHinge2Constraint::getAngle2()
	static int _bind_getAngle2(lua_State *L) {
		if (!_lg_typecheck_getAngle2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btHinge2Constraint::getAngle2() function, expected prototype:\nfloat btHinge2Constraint::getAngle2()\nClass arguments details:\n");
		}


		btHinge2Constraint* self=Luna< btTypedObject >::checkSubType< btHinge2Constraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btHinge2Constraint::getAngle2(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getAngle2();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btHinge2Constraint::setUpperLimit(float ang1max)
	static int _bind_setUpperLimit(lua_State *L) {
		if (!_lg_typecheck_setUpperLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHinge2Constraint::setUpperLimit(float ang1max) function, expected prototype:\nvoid btHinge2Constraint::setUpperLimit(float ang1max)\nClass arguments details:\n");
		}

		float ang1max=(float)lua_tonumber(L,2);

		btHinge2Constraint* self=Luna< btTypedObject >::checkSubType< btHinge2Constraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHinge2Constraint::setUpperLimit(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setUpperLimit(ang1max);

		return 0;
	}

	// void btHinge2Constraint::setLowerLimit(float ang1min)
	static int _bind_setLowerLimit(lua_State *L) {
		if (!_lg_typecheck_setLowerLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHinge2Constraint::setLowerLimit(float ang1min) function, expected prototype:\nvoid btHinge2Constraint::setLowerLimit(float ang1min)\nClass arguments details:\n");
		}

		float ang1min=(float)lua_tonumber(L,2);

		btHinge2Constraint* self=Luna< btTypedObject >::checkSubType< btHinge2Constraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHinge2Constraint::setLowerLimit(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setLowerLimit(ang1min);

		return 0;
	}

	// void btHinge2Constraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep)
	static int _bind_base_setupSolverConstraint(lua_State *L) {
		if (!_lg_typecheck_base_setupSolverConstraint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHinge2Constraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep) function, expected prototype:\nvoid btHinge2Constraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep)\nClass arguments details:\narg 1 ID = 1318117\n");
		}

		btConstraintArray* ca_ptr=(Luna< btAlignedObjectArray< btSolverConstraint > >::checkSubType< btConstraintArray >(L,2));
		if( !ca_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ca in btHinge2Constraint::base_setupSolverConstraint function");
		}
		btConstraintArray & ca=*ca_ptr;
		int solverBodyA=(int)lua_tointeger(L,3);
		int solverBodyB=(int)lua_tointeger(L,4);
		float timeStep=(float)lua_tonumber(L,5);

		btHinge2Constraint* self=Luna< btTypedObject >::checkSubType< btHinge2Constraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHinge2Constraint::base_setupSolverConstraint(btConstraintArray &, int, int, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btHinge2Constraint::setupSolverConstraint(ca, solverBodyA, solverBodyB, timeStep);

		return 0;
	}

	// void btHinge2Constraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3)
	static int _bind_base_solveConstraintObsolete(lua_State *L) {
		if (!_lg_typecheck_base_solveConstraintObsolete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHinge2Constraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3) function, expected prototype:\nvoid btHinge2Constraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3)\nClass arguments details:\narg 1 ID = 65712094\narg 2 ID = 65712094\n");
		}

		btSolverBody* _arg1_ptr=(Luna< btSolverBody >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in btHinge2Constraint::base_solveConstraintObsolete function");
		}
		btSolverBody & _arg1=*_arg1_ptr;
		btSolverBody* _arg2_ptr=(Luna< btSolverBody >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in btHinge2Constraint::base_solveConstraintObsolete function");
		}
		btSolverBody & _arg2=*_arg2_ptr;
		float _arg3=(float)lua_tonumber(L,4);

		btHinge2Constraint* self=Luna< btTypedObject >::checkSubType< btHinge2Constraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHinge2Constraint::base_solveConstraintObsolete(btSolverBody &, btSolverBody &, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btHinge2Constraint::solveConstraintObsolete(_arg1, _arg2, _arg3);

		return 0;
	}

	// void btHinge2Constraint::base_buildJacobian()
	static int _bind_base_buildJacobian(lua_State *L) {
		if (!_lg_typecheck_base_buildJacobian(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHinge2Constraint::base_buildJacobian() function, expected prototype:\nvoid btHinge2Constraint::base_buildJacobian()\nClass arguments details:\n");
		}


		btHinge2Constraint* self=Luna< btTypedObject >::checkSubType< btHinge2Constraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHinge2Constraint::base_buildJacobian(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btHinge2Constraint::buildJacobian();

		return 0;
	}

	// void btHinge2Constraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 * info)
	static int _bind_base_getInfo1(lua_State *L) {
		if (!_lg_typecheck_base_getInfo1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHinge2Constraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 * info) function, expected prototype:\nvoid btHinge2Constraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 * info)\nClass arguments details:\narg 1 ID = 17243935\n");
		}

		btTypedConstraint::btConstraintInfo1* info=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,2));

		btHinge2Constraint* self=Luna< btTypedObject >::checkSubType< btHinge2Constraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHinge2Constraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btHinge2Constraint::getInfo1(info);

		return 0;
	}

	// void btHinge2Constraint::base_calcAnchorPos()
	static int _bind_base_calcAnchorPos(lua_State *L) {
		if (!_lg_typecheck_base_calcAnchorPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHinge2Constraint::base_calcAnchorPos() function, expected prototype:\nvoid btHinge2Constraint::base_calcAnchorPos()\nClass arguments details:\n");
		}


		btHinge2Constraint* self=Luna< btTypedObject >::checkSubType< btHinge2Constraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHinge2Constraint::base_calcAnchorPos(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btHinge2Constraint::calcAnchorPos();

		return 0;
	}

	// void btHinge2Constraint::base_setParam(int num, float value, int axis = -1)
	static int _bind_base_setParam(lua_State *L) {
		if (!_lg_typecheck_base_setParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHinge2Constraint::base_setParam(int num, float value, int axis = -1) function, expected prototype:\nvoid btHinge2Constraint::base_setParam(int num, float value, int axis = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		float value=(float)lua_tonumber(L,3);
		int axis=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;

		btHinge2Constraint* self=Luna< btTypedObject >::checkSubType< btHinge2Constraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHinge2Constraint::base_setParam(int, float, int). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btHinge2Constraint::setParam(num, value, axis);

		return 0;
	}

	// float btHinge2Constraint::base_getParam(int num, int axis = -1) const
	static int _bind_base_getParam(lua_State *L) {
		if (!_lg_typecheck_base_getParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btHinge2Constraint::base_getParam(int num, int axis = -1) const function, expected prototype:\nfloat btHinge2Constraint::base_getParam(int num, int axis = -1) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		int axis=luatop>2 ? (int)lua_tointeger(L,3) : (int)-1;

		btHinge2Constraint* self=Luna< btTypedObject >::checkSubType< btHinge2Constraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btHinge2Constraint::base_getParam(int, int) const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->btHinge2Constraint::getParam(num, axis);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btHinge2Constraint::base_setAxis(const btVector3 & axis1, const btVector3 & axis2)
	static int _bind_base_setAxis(lua_State *L) {
		if (!_lg_typecheck_base_setAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHinge2Constraint::base_setAxis(const btVector3 & axis1, const btVector3 & axis2) function, expected prototype:\nvoid btHinge2Constraint::base_setAxis(const btVector3 & axis1, const btVector3 & axis2)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* axis1_ptr=(Luna< btVector3 >::check(L,2));
		if( !axis1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis1 in btHinge2Constraint::base_setAxis function");
		}
		const btVector3 & axis1=*axis1_ptr;
		const btVector3* axis2_ptr=(Luna< btVector3 >::check(L,3));
		if( !axis2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis2 in btHinge2Constraint::base_setAxis function");
		}
		const btVector3 & axis2=*axis2_ptr;

		btHinge2Constraint* self=Luna< btTypedObject >::checkSubType< btHinge2Constraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHinge2Constraint::base_setAxis(const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btHinge2Constraint::setAxis(axis1, axis2);

		return 0;
	}

	// void btHinge2Constraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 * info)
	static int _bind_base_getInfo2(lua_State *L) {
		if (!_lg_typecheck_base_getInfo2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHinge2Constraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 * info) function, expected prototype:\nvoid btHinge2Constraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 * info)\nClass arguments details:\narg 1 ID = 17243936\n");
		}

		btTypedConstraint::btConstraintInfo2* info=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,2));

		btHinge2Constraint* self=Luna< btTypedObject >::checkSubType< btHinge2Constraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHinge2Constraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btHinge2Constraint::getInfo2(info);

		return 0;
	}

	// int btHinge2Constraint::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btHinge2Constraint::base_calculateSerializeBufferSize() const function, expected prototype:\nint btHinge2Constraint::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btHinge2Constraint* self=Luna< btTypedObject >::checkSubType< btHinge2Constraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btHinge2Constraint::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->btHinge2Constraint::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btHinge2Constraint* LunaTraits< btHinge2Constraint >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btHinge2Constraint::_bind_ctor(L);
}

void LunaTraits< btHinge2Constraint >::_bind_dtor(btHinge2Constraint* obj) {
	delete obj;
}

const char LunaTraits< btHinge2Constraint >::className[] = "btHinge2Constraint";
const char LunaTraits< btHinge2Constraint >::fullName[] = "btHinge2Constraint";
const char LunaTraits< btHinge2Constraint >::moduleName[] = "bullet";
const char* LunaTraits< btHinge2Constraint >::parents[] = {"bullet.btGeneric6DofSpringConstraint", 0};
const int LunaTraits< btHinge2Constraint >::hash = 86592516;
const int LunaTraits< btHinge2Constraint >::uniqueIDs[] = {66271199,0};

luna_RegType LunaTraits< btHinge2Constraint >::methods[] = {
	{"getAnchor", &luna_wrapper_btHinge2Constraint::_bind_getAnchor},
	{"getAnchor2", &luna_wrapper_btHinge2Constraint::_bind_getAnchor2},
	{"getAxis1", &luna_wrapper_btHinge2Constraint::_bind_getAxis1},
	{"getAxis2", &luna_wrapper_btHinge2Constraint::_bind_getAxis2},
	{"getAngle1", &luna_wrapper_btHinge2Constraint::_bind_getAngle1},
	{"getAngle2", &luna_wrapper_btHinge2Constraint::_bind_getAngle2},
	{"setUpperLimit", &luna_wrapper_btHinge2Constraint::_bind_setUpperLimit},
	{"setLowerLimit", &luna_wrapper_btHinge2Constraint::_bind_setLowerLimit},
	{"base_setupSolverConstraint", &luna_wrapper_btHinge2Constraint::_bind_base_setupSolverConstraint},
	{"base_solveConstraintObsolete", &luna_wrapper_btHinge2Constraint::_bind_base_solveConstraintObsolete},
	{"base_buildJacobian", &luna_wrapper_btHinge2Constraint::_bind_base_buildJacobian},
	{"base_getInfo1", &luna_wrapper_btHinge2Constraint::_bind_base_getInfo1},
	{"base_calcAnchorPos", &luna_wrapper_btHinge2Constraint::_bind_base_calcAnchorPos},
	{"base_setParam", &luna_wrapper_btHinge2Constraint::_bind_base_setParam},
	{"base_getParam", &luna_wrapper_btHinge2Constraint::_bind_base_getParam},
	{"base_setAxis", &luna_wrapper_btHinge2Constraint::_bind_base_setAxis},
	{"base_getInfo2", &luna_wrapper_btHinge2Constraint::_bind_base_getInfo2},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btHinge2Constraint::_bind_base_calculateSerializeBufferSize},
	{"__eq", &luna_wrapper_btHinge2Constraint::_bind___eq},
	{"fromVoid", &luna_wrapper_btHinge2Constraint::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btHinge2Constraint::_bind_asVoid},
	{"getTable", &luna_wrapper_btHinge2Constraint::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btHinge2Constraint >::converters[] = {
	{"btTypedObject", &luna_wrapper_btHinge2Constraint::_cast_from_btTypedObject},
	{0,0}
};

luna_RegEnumType LunaTraits< btHinge2Constraint >::enumValues[] = {
	{0,0}
};



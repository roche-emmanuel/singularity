#include <plug_common.h>

#include <luna/wrappers/wrapper_btUniversalConstraint.h>

class luna_wrapper_btUniversalConstraint {
public:
	typedef Luna< btUniversalConstraint > luna_t;

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

		btUniversalConstraint* self= (btUniversalConstraint*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btUniversalConstraint >::push(L,self,false);
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
		//btUniversalConstraint* ptr= dynamic_cast< btUniversalConstraint* >(Luna< btTypedObject >::check(L,1));
		btUniversalConstraint* ptr= luna_caster< btTypedObject, btUniversalConstraint >::cast(Luna< btTypedObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btUniversalConstraint >::push(L,ptr,false);
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
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLowerLimit(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAxis(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
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

	inline static bool _lg_typecheck_base_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btUniversalConstraint::btUniversalConstraint(btRigidBody & rbA, btRigidBody & rbB, const btVector3 & anchor, const btVector3 & axis1, const btVector3 & axis2)
	static btUniversalConstraint* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btUniversalConstraint::btUniversalConstraint(btRigidBody & rbA, btRigidBody & rbB, const btVector3 & anchor, const btVector3 & axis1, const btVector3 & axis2) function, expected prototype:\nbtUniversalConstraint::btUniversalConstraint(btRigidBody & rbA, btRigidBody & rbB, const btVector3 & anchor, const btVector3 & axis1, const btVector3 & axis2)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\narg 3 ID = 91544891\narg 4 ID = 91544891\narg 5 ID = 91544891\n");
		}

		btRigidBody* rbA_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1));
		if( !rbA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbA in btUniversalConstraint::btUniversalConstraint function");
		}
		btRigidBody & rbA=*rbA_ptr;
		btRigidBody* rbB_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		if( !rbB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbB in btUniversalConstraint::btUniversalConstraint function");
		}
		btRigidBody & rbB=*rbB_ptr;
		const btVector3* anchor_ptr=(Luna< btVector3 >::check(L,3));
		if( !anchor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg anchor in btUniversalConstraint::btUniversalConstraint function");
		}
		const btVector3 & anchor=*anchor_ptr;
		const btVector3* axis1_ptr=(Luna< btVector3 >::check(L,4));
		if( !axis1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis1 in btUniversalConstraint::btUniversalConstraint function");
		}
		const btVector3 & axis1=*axis1_ptr;
		const btVector3* axis2_ptr=(Luna< btVector3 >::check(L,5));
		if( !axis2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis2 in btUniversalConstraint::btUniversalConstraint function");
		}
		const btVector3 & axis2=*axis2_ptr;

		return new btUniversalConstraint(rbA, rbB, anchor, axis1, axis2);
	}

	// btUniversalConstraint::btUniversalConstraint(lua_Table * data, btRigidBody & rbA, btRigidBody & rbB, const btVector3 & anchor, const btVector3 & axis1, const btVector3 & axis2)
	static btUniversalConstraint* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btUniversalConstraint::btUniversalConstraint(lua_Table * data, btRigidBody & rbA, btRigidBody & rbB, const btVector3 & anchor, const btVector3 & axis1, const btVector3 & axis2) function, expected prototype:\nbtUniversalConstraint::btUniversalConstraint(lua_Table * data, btRigidBody & rbA, btRigidBody & rbB, const btVector3 & anchor, const btVector3 & axis1, const btVector3 & axis2)\nClass arguments details:\narg 2 ID = 85758361\narg 3 ID = 85758361\narg 4 ID = 91544891\narg 5 ID = 91544891\narg 6 ID = 91544891\n");
		}

		btRigidBody* rbA_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		if( !rbA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbA in btUniversalConstraint::btUniversalConstraint function");
		}
		btRigidBody & rbA=*rbA_ptr;
		btRigidBody* rbB_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,3));
		if( !rbB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbB in btUniversalConstraint::btUniversalConstraint function");
		}
		btRigidBody & rbB=*rbB_ptr;
		const btVector3* anchor_ptr=(Luna< btVector3 >::check(L,4));
		if( !anchor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg anchor in btUniversalConstraint::btUniversalConstraint function");
		}
		const btVector3 & anchor=*anchor_ptr;
		const btVector3* axis1_ptr=(Luna< btVector3 >::check(L,5));
		if( !axis1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis1 in btUniversalConstraint::btUniversalConstraint function");
		}
		const btVector3 & axis1=*axis1_ptr;
		const btVector3* axis2_ptr=(Luna< btVector3 >::check(L,6));
		if( !axis2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis2 in btUniversalConstraint::btUniversalConstraint function");
		}
		const btVector3 & axis2=*axis2_ptr;

		return new wrapper_btUniversalConstraint(L,NULL, rbA, rbB, anchor, axis1, axis2);
	}

	// Overload binder for btUniversalConstraint::btUniversalConstraint
	static btUniversalConstraint* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btUniversalConstraint, cannot match any of the overloads for function btUniversalConstraint:\n  btUniversalConstraint(btRigidBody &, btRigidBody &, const btVector3 &, const btVector3 &, const btVector3 &)\n  btUniversalConstraint(lua_Table *, btRigidBody &, btRigidBody &, const btVector3 &, const btVector3 &, const btVector3 &)\n");
		return NULL;
	}


	// Function binds:
	// const btVector3 & btUniversalConstraint::getAnchor()
	static int _bind_getAnchor(lua_State *L) {
		if (!_lg_typecheck_getAnchor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btUniversalConstraint::getAnchor() function, expected prototype:\nconst btVector3 & btUniversalConstraint::getAnchor()\nClass arguments details:\n");
		}


		btUniversalConstraint* self=Luna< btTypedObject >::checkSubType< btUniversalConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btUniversalConstraint::getAnchor(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btVector3* lret = &self->getAnchor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const btVector3 & btUniversalConstraint::getAnchor2()
	static int _bind_getAnchor2(lua_State *L) {
		if (!_lg_typecheck_getAnchor2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btUniversalConstraint::getAnchor2() function, expected prototype:\nconst btVector3 & btUniversalConstraint::getAnchor2()\nClass arguments details:\n");
		}


		btUniversalConstraint* self=Luna< btTypedObject >::checkSubType< btUniversalConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btUniversalConstraint::getAnchor2(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btVector3* lret = &self->getAnchor2();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const btVector3 & btUniversalConstraint::getAxis1()
	static int _bind_getAxis1(lua_State *L) {
		if (!_lg_typecheck_getAxis1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btUniversalConstraint::getAxis1() function, expected prototype:\nconst btVector3 & btUniversalConstraint::getAxis1()\nClass arguments details:\n");
		}


		btUniversalConstraint* self=Luna< btTypedObject >::checkSubType< btUniversalConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btUniversalConstraint::getAxis1(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btVector3* lret = &self->getAxis1();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const btVector3 & btUniversalConstraint::getAxis2()
	static int _bind_getAxis2(lua_State *L) {
		if (!_lg_typecheck_getAxis2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btUniversalConstraint::getAxis2() function, expected prototype:\nconst btVector3 & btUniversalConstraint::getAxis2()\nClass arguments details:\n");
		}


		btUniversalConstraint* self=Luna< btTypedObject >::checkSubType< btUniversalConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btUniversalConstraint::getAxis2(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btVector3* lret = &self->getAxis2();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// float btUniversalConstraint::getAngle1()
	static int _bind_getAngle1(lua_State *L) {
		if (!_lg_typecheck_getAngle1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btUniversalConstraint::getAngle1() function, expected prototype:\nfloat btUniversalConstraint::getAngle1()\nClass arguments details:\n");
		}


		btUniversalConstraint* self=Luna< btTypedObject >::checkSubType< btUniversalConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btUniversalConstraint::getAngle1(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getAngle1();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btUniversalConstraint::getAngle2()
	static int _bind_getAngle2(lua_State *L) {
		if (!_lg_typecheck_getAngle2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btUniversalConstraint::getAngle2() function, expected prototype:\nfloat btUniversalConstraint::getAngle2()\nClass arguments details:\n");
		}


		btUniversalConstraint* self=Luna< btTypedObject >::checkSubType< btUniversalConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btUniversalConstraint::getAngle2(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getAngle2();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btUniversalConstraint::setUpperLimit(float ang1max, float ang2max)
	static int _bind_setUpperLimit(lua_State *L) {
		if (!_lg_typecheck_setUpperLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btUniversalConstraint::setUpperLimit(float ang1max, float ang2max) function, expected prototype:\nvoid btUniversalConstraint::setUpperLimit(float ang1max, float ang2max)\nClass arguments details:\n");
		}

		float ang1max=(float)lua_tonumber(L,2);
		float ang2max=(float)lua_tonumber(L,3);

		btUniversalConstraint* self=Luna< btTypedObject >::checkSubType< btUniversalConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btUniversalConstraint::setUpperLimit(float, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setUpperLimit(ang1max, ang2max);

		return 0;
	}

	// void btUniversalConstraint::setLowerLimit(float ang1min, float ang2min)
	static int _bind_setLowerLimit(lua_State *L) {
		if (!_lg_typecheck_setLowerLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btUniversalConstraint::setLowerLimit(float ang1min, float ang2min) function, expected prototype:\nvoid btUniversalConstraint::setLowerLimit(float ang1min, float ang2min)\nClass arguments details:\n");
		}

		float ang1min=(float)lua_tonumber(L,2);
		float ang2min=(float)lua_tonumber(L,3);

		btUniversalConstraint* self=Luna< btTypedObject >::checkSubType< btUniversalConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btUniversalConstraint::setLowerLimit(float, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setLowerLimit(ang1min, ang2min);

		return 0;
	}

	// void btUniversalConstraint::setAxis(const btVector3 & axis1, const btVector3 & axis2)
	static int _bind_setAxis(lua_State *L) {
		if (!_lg_typecheck_setAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btUniversalConstraint::setAxis(const btVector3 & axis1, const btVector3 & axis2) function, expected prototype:\nvoid btUniversalConstraint::setAxis(const btVector3 & axis1, const btVector3 & axis2)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* axis1_ptr=(Luna< btVector3 >::check(L,2));
		if( !axis1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis1 in btUniversalConstraint::setAxis function");
		}
		const btVector3 & axis1=*axis1_ptr;
		const btVector3* axis2_ptr=(Luna< btVector3 >::check(L,3));
		if( !axis2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis2 in btUniversalConstraint::setAxis function");
		}
		const btVector3 & axis2=*axis2_ptr;

		btUniversalConstraint* self=Luna< btTypedObject >::checkSubType< btUniversalConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btUniversalConstraint::setAxis(const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setAxis(axis1, axis2);

		return 0;
	}

	// void btUniversalConstraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep)
	static int _bind_base_setupSolverConstraint(lua_State *L) {
		if (!_lg_typecheck_base_setupSolverConstraint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btUniversalConstraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep) function, expected prototype:\nvoid btUniversalConstraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep)\nClass arguments details:\narg 1 ID = 1318117\n");
		}

		btConstraintArray* ca_ptr=(Luna< btAlignedObjectArray< btSolverConstraint > >::checkSubType< btConstraintArray >(L,2));
		if( !ca_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ca in btUniversalConstraint::base_setupSolverConstraint function");
		}
		btConstraintArray & ca=*ca_ptr;
		int solverBodyA=(int)lua_tointeger(L,3);
		int solverBodyB=(int)lua_tointeger(L,4);
		float timeStep=(float)lua_tonumber(L,5);

		btUniversalConstraint* self=Luna< btTypedObject >::checkSubType< btUniversalConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btUniversalConstraint::base_setupSolverConstraint(btConstraintArray &, int, int, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btUniversalConstraint::setupSolverConstraint(ca, solverBodyA, solverBodyB, timeStep);

		return 0;
	}

	// void btUniversalConstraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3)
	static int _bind_base_solveConstraintObsolete(lua_State *L) {
		if (!_lg_typecheck_base_solveConstraintObsolete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btUniversalConstraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3) function, expected prototype:\nvoid btUniversalConstraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3)\nClass arguments details:\narg 1 ID = 65712094\narg 2 ID = 65712094\n");
		}

		btSolverBody* _arg1_ptr=(Luna< btSolverBody >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in btUniversalConstraint::base_solveConstraintObsolete function");
		}
		btSolverBody & _arg1=*_arg1_ptr;
		btSolverBody* _arg2_ptr=(Luna< btSolverBody >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in btUniversalConstraint::base_solveConstraintObsolete function");
		}
		btSolverBody & _arg2=*_arg2_ptr;
		float _arg3=(float)lua_tonumber(L,4);

		btUniversalConstraint* self=Luna< btTypedObject >::checkSubType< btUniversalConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btUniversalConstraint::base_solveConstraintObsolete(btSolverBody &, btSolverBody &, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btUniversalConstraint::solveConstraintObsolete(_arg1, _arg2, _arg3);

		return 0;
	}

	// void btUniversalConstraint::base_buildJacobian()
	static int _bind_base_buildJacobian(lua_State *L) {
		if (!_lg_typecheck_base_buildJacobian(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btUniversalConstraint::base_buildJacobian() function, expected prototype:\nvoid btUniversalConstraint::base_buildJacobian()\nClass arguments details:\n");
		}


		btUniversalConstraint* self=Luna< btTypedObject >::checkSubType< btUniversalConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btUniversalConstraint::base_buildJacobian(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btUniversalConstraint::buildJacobian();

		return 0;
	}

	// void btUniversalConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 * info)
	static int _bind_base_getInfo1(lua_State *L) {
		if (!_lg_typecheck_base_getInfo1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btUniversalConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 * info) function, expected prototype:\nvoid btUniversalConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 * info)\nClass arguments details:\narg 1 ID = 17243935\n");
		}

		btTypedConstraint::btConstraintInfo1* info=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,2));

		btUniversalConstraint* self=Luna< btTypedObject >::checkSubType< btUniversalConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btUniversalConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btUniversalConstraint::getInfo1(info);

		return 0;
	}

	// void btUniversalConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 * info)
	static int _bind_base_getInfo2(lua_State *L) {
		if (!_lg_typecheck_base_getInfo2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btUniversalConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 * info) function, expected prototype:\nvoid btUniversalConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 * info)\nClass arguments details:\narg 1 ID = 17243936\n");
		}

		btTypedConstraint::btConstraintInfo2* info=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,2));

		btUniversalConstraint* self=Luna< btTypedObject >::checkSubType< btUniversalConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btUniversalConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btUniversalConstraint::getInfo2(info);

		return 0;
	}

	// void btUniversalConstraint::base_calcAnchorPos()
	static int _bind_base_calcAnchorPos(lua_State *L) {
		if (!_lg_typecheck_base_calcAnchorPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btUniversalConstraint::base_calcAnchorPos() function, expected prototype:\nvoid btUniversalConstraint::base_calcAnchorPos()\nClass arguments details:\n");
		}


		btUniversalConstraint* self=Luna< btTypedObject >::checkSubType< btUniversalConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btUniversalConstraint::base_calcAnchorPos(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btUniversalConstraint::calcAnchorPos();

		return 0;
	}

	// void btUniversalConstraint::base_setParam(int num, float value, int axis = -1)
	static int _bind_base_setParam(lua_State *L) {
		if (!_lg_typecheck_base_setParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btUniversalConstraint::base_setParam(int num, float value, int axis = -1) function, expected prototype:\nvoid btUniversalConstraint::base_setParam(int num, float value, int axis = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		float value=(float)lua_tonumber(L,3);
		int axis=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;

		btUniversalConstraint* self=Luna< btTypedObject >::checkSubType< btUniversalConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btUniversalConstraint::base_setParam(int, float, int). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btUniversalConstraint::setParam(num, value, axis);

		return 0;
	}

	// float btUniversalConstraint::base_getParam(int num, int axis = -1) const
	static int _bind_base_getParam(lua_State *L) {
		if (!_lg_typecheck_base_getParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btUniversalConstraint::base_getParam(int num, int axis = -1) const function, expected prototype:\nfloat btUniversalConstraint::base_getParam(int num, int axis = -1) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		int axis=luatop>2 ? (int)lua_tointeger(L,3) : (int)-1;

		btUniversalConstraint* self=Luna< btTypedObject >::checkSubType< btUniversalConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btUniversalConstraint::base_getParam(int, int) const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->btUniversalConstraint::getParam(num, axis);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btUniversalConstraint::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btUniversalConstraint::base_calculateSerializeBufferSize() const function, expected prototype:\nint btUniversalConstraint::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btUniversalConstraint* self=Luna< btTypedObject >::checkSubType< btUniversalConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btUniversalConstraint::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->btUniversalConstraint::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btUniversalConstraint* LunaTraits< btUniversalConstraint >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btUniversalConstraint::_bind_ctor(L);
}

void LunaTraits< btUniversalConstraint >::_bind_dtor(btUniversalConstraint* obj) {
	delete obj;
}

const char LunaTraits< btUniversalConstraint >::className[] = "btUniversalConstraint";
const char LunaTraits< btUniversalConstraint >::fullName[] = "btUniversalConstraint";
const char LunaTraits< btUniversalConstraint >::moduleName[] = "bullet";
const char* LunaTraits< btUniversalConstraint >::parents[] = {"bullet.btGeneric6DofConstraint", 0};
const int LunaTraits< btUniversalConstraint >::hash = 14116621;
const int LunaTraits< btUniversalConstraint >::uniqueIDs[] = {66271199,0};

luna_RegType LunaTraits< btUniversalConstraint >::methods[] = {
	{"getAnchor", &luna_wrapper_btUniversalConstraint::_bind_getAnchor},
	{"getAnchor2", &luna_wrapper_btUniversalConstraint::_bind_getAnchor2},
	{"getAxis1", &luna_wrapper_btUniversalConstraint::_bind_getAxis1},
	{"getAxis2", &luna_wrapper_btUniversalConstraint::_bind_getAxis2},
	{"getAngle1", &luna_wrapper_btUniversalConstraint::_bind_getAngle1},
	{"getAngle2", &luna_wrapper_btUniversalConstraint::_bind_getAngle2},
	{"setUpperLimit", &luna_wrapper_btUniversalConstraint::_bind_setUpperLimit},
	{"setLowerLimit", &luna_wrapper_btUniversalConstraint::_bind_setLowerLimit},
	{"setAxis", &luna_wrapper_btUniversalConstraint::_bind_setAxis},
	{"base_setupSolverConstraint", &luna_wrapper_btUniversalConstraint::_bind_base_setupSolverConstraint},
	{"base_solveConstraintObsolete", &luna_wrapper_btUniversalConstraint::_bind_base_solveConstraintObsolete},
	{"base_buildJacobian", &luna_wrapper_btUniversalConstraint::_bind_base_buildJacobian},
	{"base_getInfo1", &luna_wrapper_btUniversalConstraint::_bind_base_getInfo1},
	{"base_getInfo2", &luna_wrapper_btUniversalConstraint::_bind_base_getInfo2},
	{"base_calcAnchorPos", &luna_wrapper_btUniversalConstraint::_bind_base_calcAnchorPos},
	{"base_setParam", &luna_wrapper_btUniversalConstraint::_bind_base_setParam},
	{"base_getParam", &luna_wrapper_btUniversalConstraint::_bind_base_getParam},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btUniversalConstraint::_bind_base_calculateSerializeBufferSize},
	{"__eq", &luna_wrapper_btUniversalConstraint::_bind___eq},
	{"fromVoid", &luna_wrapper_btUniversalConstraint::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btUniversalConstraint::_bind_asVoid},
	{"getTable", &luna_wrapper_btUniversalConstraint::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btUniversalConstraint >::converters[] = {
	{"btTypedObject", &luna_wrapper_btUniversalConstraint::_cast_from_btTypedObject},
	{0,0}
};

luna_RegEnumType LunaTraits< btUniversalConstraint >::enumValues[] = {
	{0,0}
};



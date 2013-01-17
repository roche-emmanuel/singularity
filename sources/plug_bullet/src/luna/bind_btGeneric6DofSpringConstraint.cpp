#include <plug_common.h>

#include <luna/wrappers/wrapper_btGeneric6DofSpringConstraint.h>

class luna_wrapper_btGeneric6DofSpringConstraint {
public:
	typedef Luna< btGeneric6DofSpringConstraint > luna_t;

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
		//btGeneric6DofSpringConstraint* ptr= dynamic_cast< btGeneric6DofSpringConstraint* >(Luna< btTypedObject >::check(L,1));
		btGeneric6DofSpringConstraint* ptr= luna_caster< btTypedObject, btGeneric6DofSpringConstraint >::cast(Luna< btTypedObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btGeneric6DofSpringConstraint >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,4))) ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,2))) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,5))) ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,3))) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_enableSpring(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStiffness(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDamping(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEquilibriumPoint_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEquilibriumPoint_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEquilibriumPoint_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAxis(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInfo2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,17243936)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_calculateSerializeBufferSize(lua_State *L) {
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
	// btGeneric6DofSpringConstraint::btGeneric6DofSpringConstraint(btRigidBody & rbA, btRigidBody & rbB, const btTransform & frameInA, const btTransform & frameInB, bool useLinearReferenceFrameA)
	static btGeneric6DofSpringConstraint* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGeneric6DofSpringConstraint::btGeneric6DofSpringConstraint(btRigidBody & rbA, btRigidBody & rbB, const btTransform & frameInA, const btTransform & frameInB, bool useLinearReferenceFrameA) function, expected prototype:\nbtGeneric6DofSpringConstraint::btGeneric6DofSpringConstraint(btRigidBody & rbA, btRigidBody & rbB, const btTransform & frameInA, const btTransform & frameInB, bool useLinearReferenceFrameA)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\narg 3 ID = 13247377\narg 4 ID = 13247377\n");
		}

		btRigidBody* rbA_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1));
		if( !rbA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbA in btGeneric6DofSpringConstraint::btGeneric6DofSpringConstraint function");
		}
		btRigidBody & rbA=*rbA_ptr;
		btRigidBody* rbB_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		if( !rbB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbB in btGeneric6DofSpringConstraint::btGeneric6DofSpringConstraint function");
		}
		btRigidBody & rbB=*rbB_ptr;
		const btTransform* frameInA_ptr=(Luna< btTransform >::check(L,3));
		if( !frameInA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameInA in btGeneric6DofSpringConstraint::btGeneric6DofSpringConstraint function");
		}
		const btTransform & frameInA=*frameInA_ptr;
		const btTransform* frameInB_ptr=(Luna< btTransform >::check(L,4));
		if( !frameInB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameInB in btGeneric6DofSpringConstraint::btGeneric6DofSpringConstraint function");
		}
		const btTransform & frameInB=*frameInB_ptr;
		bool useLinearReferenceFrameA=(bool)(lua_toboolean(L,5)==1);

		return new btGeneric6DofSpringConstraint(rbA, rbB, frameInA, frameInB, useLinearReferenceFrameA);
	}

	// btGeneric6DofSpringConstraint::btGeneric6DofSpringConstraint(btRigidBody & rbB, const btTransform & frameInB, bool useLinearReferenceFrameB)
	static btGeneric6DofSpringConstraint* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGeneric6DofSpringConstraint::btGeneric6DofSpringConstraint(btRigidBody & rbB, const btTransform & frameInB, bool useLinearReferenceFrameB) function, expected prototype:\nbtGeneric6DofSpringConstraint::btGeneric6DofSpringConstraint(btRigidBody & rbB, const btTransform & frameInB, bool useLinearReferenceFrameB)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 13247377\n");
		}

		btRigidBody* rbB_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1));
		if( !rbB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbB in btGeneric6DofSpringConstraint::btGeneric6DofSpringConstraint function");
		}
		btRigidBody & rbB=*rbB_ptr;
		const btTransform* frameInB_ptr=(Luna< btTransform >::check(L,2));
		if( !frameInB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameInB in btGeneric6DofSpringConstraint::btGeneric6DofSpringConstraint function");
		}
		const btTransform & frameInB=*frameInB_ptr;
		bool useLinearReferenceFrameB=(bool)(lua_toboolean(L,3)==1);

		return new btGeneric6DofSpringConstraint(rbB, frameInB, useLinearReferenceFrameB);
	}

	// btGeneric6DofSpringConstraint::btGeneric6DofSpringConstraint(lua_Table * data, btRigidBody & rbA, btRigidBody & rbB, const btTransform & frameInA, const btTransform & frameInB, bool useLinearReferenceFrameA)
	static btGeneric6DofSpringConstraint* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGeneric6DofSpringConstraint::btGeneric6DofSpringConstraint(lua_Table * data, btRigidBody & rbA, btRigidBody & rbB, const btTransform & frameInA, const btTransform & frameInB, bool useLinearReferenceFrameA) function, expected prototype:\nbtGeneric6DofSpringConstraint::btGeneric6DofSpringConstraint(lua_Table * data, btRigidBody & rbA, btRigidBody & rbB, const btTransform & frameInA, const btTransform & frameInB, bool useLinearReferenceFrameA)\nClass arguments details:\narg 2 ID = 85758361\narg 3 ID = 85758361\narg 4 ID = 13247377\narg 5 ID = 13247377\n");
		}

		btRigidBody* rbA_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		if( !rbA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbA in btGeneric6DofSpringConstraint::btGeneric6DofSpringConstraint function");
		}
		btRigidBody & rbA=*rbA_ptr;
		btRigidBody* rbB_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,3));
		if( !rbB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbB in btGeneric6DofSpringConstraint::btGeneric6DofSpringConstraint function");
		}
		btRigidBody & rbB=*rbB_ptr;
		const btTransform* frameInA_ptr=(Luna< btTransform >::check(L,4));
		if( !frameInA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameInA in btGeneric6DofSpringConstraint::btGeneric6DofSpringConstraint function");
		}
		const btTransform & frameInA=*frameInA_ptr;
		const btTransform* frameInB_ptr=(Luna< btTransform >::check(L,5));
		if( !frameInB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameInB in btGeneric6DofSpringConstraint::btGeneric6DofSpringConstraint function");
		}
		const btTransform & frameInB=*frameInB_ptr;
		bool useLinearReferenceFrameA=(bool)(lua_toboolean(L,6)==1);

		return new wrapper_btGeneric6DofSpringConstraint(L,NULL, rbA, rbB, frameInA, frameInB, useLinearReferenceFrameA);
	}

	// btGeneric6DofSpringConstraint::btGeneric6DofSpringConstraint(lua_Table * data, btRigidBody & rbB, const btTransform & frameInB, bool useLinearReferenceFrameB)
	static btGeneric6DofSpringConstraint* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGeneric6DofSpringConstraint::btGeneric6DofSpringConstraint(lua_Table * data, btRigidBody & rbB, const btTransform & frameInB, bool useLinearReferenceFrameB) function, expected prototype:\nbtGeneric6DofSpringConstraint::btGeneric6DofSpringConstraint(lua_Table * data, btRigidBody & rbB, const btTransform & frameInB, bool useLinearReferenceFrameB)\nClass arguments details:\narg 2 ID = 85758361\narg 3 ID = 13247377\n");
		}

		btRigidBody* rbB_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		if( !rbB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbB in btGeneric6DofSpringConstraint::btGeneric6DofSpringConstraint function");
		}
		btRigidBody & rbB=*rbB_ptr;
		const btTransform* frameInB_ptr=(Luna< btTransform >::check(L,3));
		if( !frameInB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameInB in btGeneric6DofSpringConstraint::btGeneric6DofSpringConstraint function");
		}
		const btTransform & frameInB=*frameInB_ptr;
		bool useLinearReferenceFrameB=(bool)(lua_toboolean(L,4)==1);

		return new wrapper_btGeneric6DofSpringConstraint(L,NULL, rbB, frameInB, useLinearReferenceFrameB);
	}

	// Overload binder for btGeneric6DofSpringConstraint::btGeneric6DofSpringConstraint
	static btGeneric6DofSpringConstraint* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function btGeneric6DofSpringConstraint, cannot match any of the overloads for function btGeneric6DofSpringConstraint:\n  btGeneric6DofSpringConstraint(btRigidBody &, btRigidBody &, const btTransform &, const btTransform &, bool)\n  btGeneric6DofSpringConstraint(btRigidBody &, const btTransform &, bool)\n  btGeneric6DofSpringConstraint(lua_Table *, btRigidBody &, btRigidBody &, const btTransform &, const btTransform &, bool)\n  btGeneric6DofSpringConstraint(lua_Table *, btRigidBody &, const btTransform &, bool)\n");
		return NULL;
	}


	// Function binds:
	// void btGeneric6DofSpringConstraint::enableSpring(int index, bool onOff)
	static int _bind_enableSpring(lua_State *L) {
		if (!_lg_typecheck_enableSpring(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofSpringConstraint::enableSpring(int index, bool onOff) function, expected prototype:\nvoid btGeneric6DofSpringConstraint::enableSpring(int index, bool onOff)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);
		bool onOff=(bool)(lua_toboolean(L,3)==1);

		btGeneric6DofSpringConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofSpringConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofSpringConstraint::enableSpring(int, bool). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->enableSpring(index, onOff);

		return 0;
	}

	// void btGeneric6DofSpringConstraint::setStiffness(int index, float stiffness)
	static int _bind_setStiffness(lua_State *L) {
		if (!_lg_typecheck_setStiffness(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofSpringConstraint::setStiffness(int index, float stiffness) function, expected prototype:\nvoid btGeneric6DofSpringConstraint::setStiffness(int index, float stiffness)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);
		float stiffness=(float)lua_tonumber(L,3);

		btGeneric6DofSpringConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofSpringConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofSpringConstraint::setStiffness(int, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setStiffness(index, stiffness);

		return 0;
	}

	// void btGeneric6DofSpringConstraint::setDamping(int index, float damping)
	static int _bind_setDamping(lua_State *L) {
		if (!_lg_typecheck_setDamping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofSpringConstraint::setDamping(int index, float damping) function, expected prototype:\nvoid btGeneric6DofSpringConstraint::setDamping(int index, float damping)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);
		float damping=(float)lua_tonumber(L,3);

		btGeneric6DofSpringConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofSpringConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofSpringConstraint::setDamping(int, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setDamping(index, damping);

		return 0;
	}

	// void btGeneric6DofSpringConstraint::setEquilibriumPoint()
	static int _bind_setEquilibriumPoint_overload_1(lua_State *L) {
		if (!_lg_typecheck_setEquilibriumPoint_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofSpringConstraint::setEquilibriumPoint() function, expected prototype:\nvoid btGeneric6DofSpringConstraint::setEquilibriumPoint()\nClass arguments details:\n");
		}


		btGeneric6DofSpringConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofSpringConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofSpringConstraint::setEquilibriumPoint(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setEquilibriumPoint();

		return 0;
	}

	// void btGeneric6DofSpringConstraint::setEquilibriumPoint(int index)
	static int _bind_setEquilibriumPoint_overload_2(lua_State *L) {
		if (!_lg_typecheck_setEquilibriumPoint_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofSpringConstraint::setEquilibriumPoint(int index) function, expected prototype:\nvoid btGeneric6DofSpringConstraint::setEquilibriumPoint(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btGeneric6DofSpringConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofSpringConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofSpringConstraint::setEquilibriumPoint(int). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setEquilibriumPoint(index);

		return 0;
	}

	// void btGeneric6DofSpringConstraint::setEquilibriumPoint(int index, float val)
	static int _bind_setEquilibriumPoint_overload_3(lua_State *L) {
		if (!_lg_typecheck_setEquilibriumPoint_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofSpringConstraint::setEquilibriumPoint(int index, float val) function, expected prototype:\nvoid btGeneric6DofSpringConstraint::setEquilibriumPoint(int index, float val)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);
		float val=(float)lua_tonumber(L,3);

		btGeneric6DofSpringConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofSpringConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofSpringConstraint::setEquilibriumPoint(int, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setEquilibriumPoint(index, val);

		return 0;
	}

	// Overload binder for btGeneric6DofSpringConstraint::setEquilibriumPoint
	static int _bind_setEquilibriumPoint(lua_State *L) {
		if (_lg_typecheck_setEquilibriumPoint_overload_1(L)) return _bind_setEquilibriumPoint_overload_1(L);
		if (_lg_typecheck_setEquilibriumPoint_overload_2(L)) return _bind_setEquilibriumPoint_overload_2(L);
		if (_lg_typecheck_setEquilibriumPoint_overload_3(L)) return _bind_setEquilibriumPoint_overload_3(L);

		luaL_error(L, "error in function setEquilibriumPoint, cannot match any of the overloads for function setEquilibriumPoint:\n  setEquilibriumPoint()\n  setEquilibriumPoint(int)\n  setEquilibriumPoint(int, float)\n");
		return 0;
	}

	// void btGeneric6DofSpringConstraint::setAxis(const btVector3 & axis1, const btVector3 & axis2)
	static int _bind_setAxis(lua_State *L) {
		if (!_lg_typecheck_setAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofSpringConstraint::setAxis(const btVector3 & axis1, const btVector3 & axis2) function, expected prototype:\nvoid btGeneric6DofSpringConstraint::setAxis(const btVector3 & axis1, const btVector3 & axis2)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* axis1_ptr=(Luna< btVector3 >::check(L,2));
		if( !axis1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis1 in btGeneric6DofSpringConstraint::setAxis function");
		}
		const btVector3 & axis1=*axis1_ptr;
		const btVector3* axis2_ptr=(Luna< btVector3 >::check(L,3));
		if( !axis2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis2 in btGeneric6DofSpringConstraint::setAxis function");
		}
		const btVector3 & axis2=*axis2_ptr;

		btGeneric6DofSpringConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofSpringConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofSpringConstraint::setAxis(const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setAxis(axis1, axis2);

		return 0;
	}

	// void btGeneric6DofSpringConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info)
	static int _bind_getInfo2(lua_State *L) {
		if (!_lg_typecheck_getInfo2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofSpringConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info) function, expected prototype:\nvoid btGeneric6DofSpringConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info)\nClass arguments details:\narg 1 ID = 17243936\n");
		}

		btTypedConstraint::btConstraintInfo2* info=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,2));

		btGeneric6DofSpringConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofSpringConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofSpringConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getInfo2(info);

		return 0;
	}

	// int btGeneric6DofSpringConstraint::calculateSerializeBufferSize() const
	static int _bind_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGeneric6DofSpringConstraint::calculateSerializeBufferSize() const function, expected prototype:\nint btGeneric6DofSpringConstraint::calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btGeneric6DofSpringConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofSpringConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGeneric6DofSpringConstraint::calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGeneric6DofSpringConstraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep)
	static int _bind_base_setupSolverConstraint(lua_State *L) {
		if (!_lg_typecheck_base_setupSolverConstraint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofSpringConstraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep) function, expected prototype:\nvoid btGeneric6DofSpringConstraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep)\nClass arguments details:\narg 1 ID = 1318117\n");
		}

		btConstraintArray* ca_ptr=(Luna< btAlignedObjectArray< btSolverConstraint > >::checkSubType< btConstraintArray >(L,2));
		if( !ca_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ca in btGeneric6DofSpringConstraint::base_setupSolverConstraint function");
		}
		btConstraintArray & ca=*ca_ptr;
		int solverBodyA=(int)lua_tointeger(L,3);
		int solverBodyB=(int)lua_tointeger(L,4);
		float timeStep=(float)lua_tonumber(L,5);

		btGeneric6DofSpringConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofSpringConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofSpringConstraint::base_setupSolverConstraint(btConstraintArray &, int, int, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btGeneric6DofSpringConstraint::setupSolverConstraint(ca, solverBodyA, solverBodyB, timeStep);

		return 0;
	}

	// void btGeneric6DofSpringConstraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3)
	static int _bind_base_solveConstraintObsolete(lua_State *L) {
		if (!_lg_typecheck_base_solveConstraintObsolete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofSpringConstraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3) function, expected prototype:\nvoid btGeneric6DofSpringConstraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3)\nClass arguments details:\narg 1 ID = 65712094\narg 2 ID = 65712094\n");
		}

		btSolverBody* _arg1_ptr=(Luna< btSolverBody >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in btGeneric6DofSpringConstraint::base_solveConstraintObsolete function");
		}
		btSolverBody & _arg1=*_arg1_ptr;
		btSolverBody* _arg2_ptr=(Luna< btSolverBody >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in btGeneric6DofSpringConstraint::base_solveConstraintObsolete function");
		}
		btSolverBody & _arg2=*_arg2_ptr;
		float _arg3=(float)lua_tonumber(L,4);

		btGeneric6DofSpringConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofSpringConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofSpringConstraint::base_solveConstraintObsolete(btSolverBody &, btSolverBody &, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btGeneric6DofSpringConstraint::solveConstraintObsolete(_arg1, _arg2, _arg3);

		return 0;
	}

	// void btGeneric6DofSpringConstraint::base_buildJacobian()
	static int _bind_base_buildJacobian(lua_State *L) {
		if (!_lg_typecheck_base_buildJacobian(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofSpringConstraint::base_buildJacobian() function, expected prototype:\nvoid btGeneric6DofSpringConstraint::base_buildJacobian()\nClass arguments details:\n");
		}


		btGeneric6DofSpringConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofSpringConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofSpringConstraint::base_buildJacobian(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btGeneric6DofSpringConstraint::buildJacobian();

		return 0;
	}

	// void btGeneric6DofSpringConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 * info)
	static int _bind_base_getInfo1(lua_State *L) {
		if (!_lg_typecheck_base_getInfo1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofSpringConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 * info) function, expected prototype:\nvoid btGeneric6DofSpringConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 * info)\nClass arguments details:\narg 1 ID = 17243935\n");
		}

		btTypedConstraint::btConstraintInfo1* info=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,2));

		btGeneric6DofSpringConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofSpringConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofSpringConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btGeneric6DofSpringConstraint::getInfo1(info);

		return 0;
	}

	// void btGeneric6DofSpringConstraint::base_calcAnchorPos()
	static int _bind_base_calcAnchorPos(lua_State *L) {
		if (!_lg_typecheck_base_calcAnchorPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofSpringConstraint::base_calcAnchorPos() function, expected prototype:\nvoid btGeneric6DofSpringConstraint::base_calcAnchorPos()\nClass arguments details:\n");
		}


		btGeneric6DofSpringConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofSpringConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofSpringConstraint::base_calcAnchorPos(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btGeneric6DofSpringConstraint::calcAnchorPos();

		return 0;
	}

	// void btGeneric6DofSpringConstraint::base_setParam(int num, float value, int axis = -1)
	static int _bind_base_setParam(lua_State *L) {
		if (!_lg_typecheck_base_setParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofSpringConstraint::base_setParam(int num, float value, int axis = -1) function, expected prototype:\nvoid btGeneric6DofSpringConstraint::base_setParam(int num, float value, int axis = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		float value=(float)lua_tonumber(L,3);
		int axis=luatop>3 ? (int)lua_tointeger(L,4) : -1;

		btGeneric6DofSpringConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofSpringConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofSpringConstraint::base_setParam(int, float, int). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btGeneric6DofSpringConstraint::setParam(num, value, axis);

		return 0;
	}

	// float btGeneric6DofSpringConstraint::base_getParam(int num, int axis = -1) const
	static int _bind_base_getParam(lua_State *L) {
		if (!_lg_typecheck_base_getParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btGeneric6DofSpringConstraint::base_getParam(int num, int axis = -1) const function, expected prototype:\nfloat btGeneric6DofSpringConstraint::base_getParam(int num, int axis = -1) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		int axis=luatop>2 ? (int)lua_tointeger(L,3) : -1;

		btGeneric6DofSpringConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofSpringConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btGeneric6DofSpringConstraint::base_getParam(int, int) const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->btGeneric6DofSpringConstraint::getParam(num, axis);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGeneric6DofSpringConstraint::base_setAxis(const btVector3 & axis1, const btVector3 & axis2)
	static int _bind_base_setAxis(lua_State *L) {
		if (!_lg_typecheck_base_setAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofSpringConstraint::base_setAxis(const btVector3 & axis1, const btVector3 & axis2) function, expected prototype:\nvoid btGeneric6DofSpringConstraint::base_setAxis(const btVector3 & axis1, const btVector3 & axis2)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* axis1_ptr=(Luna< btVector3 >::check(L,2));
		if( !axis1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis1 in btGeneric6DofSpringConstraint::base_setAxis function");
		}
		const btVector3 & axis1=*axis1_ptr;
		const btVector3* axis2_ptr=(Luna< btVector3 >::check(L,3));
		if( !axis2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis2 in btGeneric6DofSpringConstraint::base_setAxis function");
		}
		const btVector3 & axis2=*axis2_ptr;

		btGeneric6DofSpringConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofSpringConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofSpringConstraint::base_setAxis(const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btGeneric6DofSpringConstraint::setAxis(axis1, axis2);

		return 0;
	}

	// void btGeneric6DofSpringConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 * info)
	static int _bind_base_getInfo2(lua_State *L) {
		if (!_lg_typecheck_base_getInfo2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofSpringConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 * info) function, expected prototype:\nvoid btGeneric6DofSpringConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 * info)\nClass arguments details:\narg 1 ID = 17243936\n");
		}

		btTypedConstraint::btConstraintInfo2* info=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,2));

		btGeneric6DofSpringConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofSpringConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofSpringConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btGeneric6DofSpringConstraint::getInfo2(info);

		return 0;
	}

	// int btGeneric6DofSpringConstraint::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGeneric6DofSpringConstraint::base_calculateSerializeBufferSize() const function, expected prototype:\nint btGeneric6DofSpringConstraint::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btGeneric6DofSpringConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofSpringConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGeneric6DofSpringConstraint::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->btGeneric6DofSpringConstraint::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btGeneric6DofSpringConstraint* LunaTraits< btGeneric6DofSpringConstraint >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btGeneric6DofSpringConstraint::_bind_ctor(L);
}

void LunaTraits< btGeneric6DofSpringConstraint >::_bind_dtor(btGeneric6DofSpringConstraint* obj) {
	delete obj;
}

const char LunaTraits< btGeneric6DofSpringConstraint >::className[] = "btGeneric6DofSpringConstraint";
const char LunaTraits< btGeneric6DofSpringConstraint >::fullName[] = "btGeneric6DofSpringConstraint";
const char LunaTraits< btGeneric6DofSpringConstraint >::moduleName[] = "bullet";
const char* LunaTraits< btGeneric6DofSpringConstraint >::parents[] = {"bullet.btGeneric6DofConstraint", 0};
const int LunaTraits< btGeneric6DofSpringConstraint >::hash = 37841097;
const int LunaTraits< btGeneric6DofSpringConstraint >::uniqueIDs[] = {66271199,0};

luna_RegType LunaTraits< btGeneric6DofSpringConstraint >::methods[] = {
	{"enableSpring", &luna_wrapper_btGeneric6DofSpringConstraint::_bind_enableSpring},
	{"setStiffness", &luna_wrapper_btGeneric6DofSpringConstraint::_bind_setStiffness},
	{"setDamping", &luna_wrapper_btGeneric6DofSpringConstraint::_bind_setDamping},
	{"setEquilibriumPoint", &luna_wrapper_btGeneric6DofSpringConstraint::_bind_setEquilibriumPoint},
	{"setAxis", &luna_wrapper_btGeneric6DofSpringConstraint::_bind_setAxis},
	{"getInfo2", &luna_wrapper_btGeneric6DofSpringConstraint::_bind_getInfo2},
	{"calculateSerializeBufferSize", &luna_wrapper_btGeneric6DofSpringConstraint::_bind_calculateSerializeBufferSize},
	{"base_setupSolverConstraint", &luna_wrapper_btGeneric6DofSpringConstraint::_bind_base_setupSolverConstraint},
	{"base_solveConstraintObsolete", &luna_wrapper_btGeneric6DofSpringConstraint::_bind_base_solveConstraintObsolete},
	{"base_buildJacobian", &luna_wrapper_btGeneric6DofSpringConstraint::_bind_base_buildJacobian},
	{"base_getInfo1", &luna_wrapper_btGeneric6DofSpringConstraint::_bind_base_getInfo1},
	{"base_calcAnchorPos", &luna_wrapper_btGeneric6DofSpringConstraint::_bind_base_calcAnchorPos},
	{"base_setParam", &luna_wrapper_btGeneric6DofSpringConstraint::_bind_base_setParam},
	{"base_getParam", &luna_wrapper_btGeneric6DofSpringConstraint::_bind_base_getParam},
	{"base_setAxis", &luna_wrapper_btGeneric6DofSpringConstraint::_bind_base_setAxis},
	{"base_getInfo2", &luna_wrapper_btGeneric6DofSpringConstraint::_bind_base_getInfo2},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btGeneric6DofSpringConstraint::_bind_base_calculateSerializeBufferSize},
	{"__eq", &luna_wrapper_btGeneric6DofSpringConstraint::_bind___eq},
	{"getTable", &luna_wrapper_btGeneric6DofSpringConstraint::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btGeneric6DofSpringConstraint >::converters[] = {
	{"btTypedObject", &luna_wrapper_btGeneric6DofSpringConstraint::_cast_from_btTypedObject},
	{0,0}
};

luna_RegEnumType LunaTraits< btGeneric6DofSpringConstraint >::enumValues[] = {
	{0,0}
};



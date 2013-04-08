#include <plug_common.h>

#include <luna/wrappers/wrapper_btContactConstraint.h>

class luna_wrapper_btContactConstraint {
public:
	typedef Luna< btContactConstraint > luna_t;

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

		btContactConstraint* self= (btContactConstraint*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btContactConstraint >::push(L,self,false);
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
		//btContactConstraint* ptr= dynamic_cast< btContactConstraint* >(Luna< btTypedObject >::check(L,1));
		btContactConstraint* ptr= luna_caster< btTypedObject, btContactConstraint >::cast(Luna< btTypedObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btContactConstraint >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,66271199)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85758361) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,85758361) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setContactManifold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,66271199)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getContactManifold_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getContactManifold_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

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

	inline static bool _lg_typecheck_buildJacobian(lua_State *L) {
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

	inline static bool _lg_typecheck_base_buildJacobian(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btContactConstraint::btContactConstraint(lua_Table * data, btPersistentManifold * contactManifold, btRigidBody & rbA, btRigidBody & rbB)
	static btContactConstraint* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btContactConstraint::btContactConstraint(lua_Table * data, btPersistentManifold * contactManifold, btRigidBody & rbA, btRigidBody & rbB) function, expected prototype:\nbtContactConstraint::btContactConstraint(lua_Table * data, btPersistentManifold * contactManifold, btRigidBody & rbA, btRigidBody & rbB)\nClass arguments details:\narg 2 ID = 66271199\narg 3 ID = 85758361\narg 4 ID = 85758361\n");
		}

		btPersistentManifold* contactManifold=(Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,2));
		btRigidBody* rbA_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,3));
		if( !rbA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbA in btContactConstraint::btContactConstraint function");
		}
		btRigidBody & rbA=*rbA_ptr;
		btRigidBody* rbB_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,4));
		if( !rbB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbB in btContactConstraint::btContactConstraint function");
		}
		btRigidBody & rbB=*rbB_ptr;

		return new wrapper_btContactConstraint(L,NULL, contactManifold, rbA, rbB);
	}


	// Function binds:
	// void btContactConstraint::setContactManifold(btPersistentManifold * contactManifold)
	static int _bind_setContactManifold(lua_State *L) {
		if (!_lg_typecheck_setContactManifold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btContactConstraint::setContactManifold(btPersistentManifold * contactManifold) function, expected prototype:\nvoid btContactConstraint::setContactManifold(btPersistentManifold * contactManifold)\nClass arguments details:\narg 1 ID = 66271199\n");
		}

		btPersistentManifold* contactManifold=(Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,2));

		btContactConstraint* self=Luna< btTypedObject >::checkSubType< btContactConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btContactConstraint::setContactManifold(btPersistentManifold *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setContactManifold(contactManifold);

		return 0;
	}

	// btPersistentManifold * btContactConstraint::getContactManifold()
	static int _bind_getContactManifold_overload_1(lua_State *L) {
		if (!_lg_typecheck_getContactManifold_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPersistentManifold * btContactConstraint::getContactManifold() function, expected prototype:\nbtPersistentManifold * btContactConstraint::getContactManifold()\nClass arguments details:\n");
		}


		btContactConstraint* self=Luna< btTypedObject >::checkSubType< btContactConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btPersistentManifold * btContactConstraint::getContactManifold(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		btPersistentManifold * lret = self->getContactManifold();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPersistentManifold >::push(L,lret,false);

		return 1;
	}

	// const btPersistentManifold * btContactConstraint::getContactManifold() const
	static int _bind_getContactManifold_overload_2(lua_State *L) {
		if (!_lg_typecheck_getContactManifold_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btPersistentManifold * btContactConstraint::getContactManifold() const function, expected prototype:\nconst btPersistentManifold * btContactConstraint::getContactManifold() const\nClass arguments details:\n");
		}


		btContactConstraint* self=Luna< btTypedObject >::checkSubType< btContactConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btPersistentManifold * btContactConstraint::getContactManifold() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btPersistentManifold * lret = self->getContactManifold();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPersistentManifold >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btContactConstraint::getContactManifold
	static int _bind_getContactManifold(lua_State *L) {
		if (_lg_typecheck_getContactManifold_overload_1(L)) return _bind_getContactManifold_overload_1(L);
		if (_lg_typecheck_getContactManifold_overload_2(L)) return _bind_getContactManifold_overload_2(L);

		luaL_error(L, "error in function getContactManifold, cannot match any of the overloads for function getContactManifold:\n  getContactManifold()\n  getContactManifold()\n");
		return 0;
	}

	// void btContactConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 * info)
	static int _bind_getInfo1(lua_State *L) {
		if (!_lg_typecheck_getInfo1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btContactConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 * info) function, expected prototype:\nvoid btContactConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 * info)\nClass arguments details:\narg 1 ID = 17243935\n");
		}

		btTypedConstraint::btConstraintInfo1* info=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,2));

		btContactConstraint* self=Luna< btTypedObject >::checkSubType< btContactConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btContactConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getInfo1(info);

		return 0;
	}

	// void btContactConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info)
	static int _bind_getInfo2(lua_State *L) {
		if (!_lg_typecheck_getInfo2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btContactConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info) function, expected prototype:\nvoid btContactConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info)\nClass arguments details:\narg 1 ID = 17243936\n");
		}

		btTypedConstraint::btConstraintInfo2* info=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,2));

		btContactConstraint* self=Luna< btTypedObject >::checkSubType< btContactConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btContactConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getInfo2(info);

		return 0;
	}

	// void btContactConstraint::buildJacobian()
	static int _bind_buildJacobian(lua_State *L) {
		if (!_lg_typecheck_buildJacobian(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btContactConstraint::buildJacobian() function, expected prototype:\nvoid btContactConstraint::buildJacobian()\nClass arguments details:\n");
		}


		btContactConstraint* self=Luna< btTypedObject >::checkSubType< btContactConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btContactConstraint::buildJacobian(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->buildJacobian();

		return 0;
	}

	// void btContactConstraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep)
	static int _bind_base_setupSolverConstraint(lua_State *L) {
		if (!_lg_typecheck_base_setupSolverConstraint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btContactConstraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep) function, expected prototype:\nvoid btContactConstraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep)\nClass arguments details:\narg 1 ID = 1318117\n");
		}

		btConstraintArray* ca_ptr=(Luna< btAlignedObjectArray< btSolverConstraint > >::checkSubType< btConstraintArray >(L,2));
		if( !ca_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ca in btContactConstraint::base_setupSolverConstraint function");
		}
		btConstraintArray & ca=*ca_ptr;
		int solverBodyA=(int)lua_tointeger(L,3);
		int solverBodyB=(int)lua_tointeger(L,4);
		float timeStep=(float)lua_tonumber(L,5);

		btContactConstraint* self=Luna< btTypedObject >::checkSubType< btContactConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btContactConstraint::base_setupSolverConstraint(btConstraintArray &, int, int, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btContactConstraint::setupSolverConstraint(ca, solverBodyA, solverBodyB, timeStep);

		return 0;
	}

	// void btContactConstraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3)
	static int _bind_base_solveConstraintObsolete(lua_State *L) {
		if (!_lg_typecheck_base_solveConstraintObsolete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btContactConstraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3) function, expected prototype:\nvoid btContactConstraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3)\nClass arguments details:\narg 1 ID = 65712094\narg 2 ID = 65712094\n");
		}

		btSolverBody* _arg1_ptr=(Luna< btSolverBody >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in btContactConstraint::base_solveConstraintObsolete function");
		}
		btSolverBody & _arg1=*_arg1_ptr;
		btSolverBody* _arg2_ptr=(Luna< btSolverBody >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in btContactConstraint::base_solveConstraintObsolete function");
		}
		btSolverBody & _arg2=*_arg2_ptr;
		float _arg3=(float)lua_tonumber(L,4);

		btContactConstraint* self=Luna< btTypedObject >::checkSubType< btContactConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btContactConstraint::base_solveConstraintObsolete(btSolverBody &, btSolverBody &, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btContactConstraint::solveConstraintObsolete(_arg1, _arg2, _arg3);

		return 0;
	}

	// int btContactConstraint::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btContactConstraint::base_calculateSerializeBufferSize() const function, expected prototype:\nint btContactConstraint::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btContactConstraint* self=Luna< btTypedObject >::checkSubType< btContactConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btContactConstraint::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->btContactConstraint::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btContactConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 * info)
	static int _bind_base_getInfo1(lua_State *L) {
		if (!_lg_typecheck_base_getInfo1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btContactConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 * info) function, expected prototype:\nvoid btContactConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 * info)\nClass arguments details:\narg 1 ID = 17243935\n");
		}

		btTypedConstraint::btConstraintInfo1* info=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,2));

		btContactConstraint* self=Luna< btTypedObject >::checkSubType< btContactConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btContactConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btContactConstraint::getInfo1(info);

		return 0;
	}

	// void btContactConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 * info)
	static int _bind_base_getInfo2(lua_State *L) {
		if (!_lg_typecheck_base_getInfo2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btContactConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 * info) function, expected prototype:\nvoid btContactConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 * info)\nClass arguments details:\narg 1 ID = 17243936\n");
		}

		btTypedConstraint::btConstraintInfo2* info=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,2));

		btContactConstraint* self=Luna< btTypedObject >::checkSubType< btContactConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btContactConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btContactConstraint::getInfo2(info);

		return 0;
	}

	// void btContactConstraint::base_buildJacobian()
	static int _bind_base_buildJacobian(lua_State *L) {
		if (!_lg_typecheck_base_buildJacobian(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btContactConstraint::base_buildJacobian() function, expected prototype:\nvoid btContactConstraint::base_buildJacobian()\nClass arguments details:\n");
		}


		btContactConstraint* self=Luna< btTypedObject >::checkSubType< btContactConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btContactConstraint::base_buildJacobian(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btContactConstraint::buildJacobian();

		return 0;
	}


	// Operator binds:

};

btContactConstraint* LunaTraits< btContactConstraint >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btContactConstraint::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void btTypedConstraint::setParam(int num, float value, int axis = -1)
	// float btTypedConstraint::getParam(int num, int axis = -1) const
}

void LunaTraits< btContactConstraint >::_bind_dtor(btContactConstraint* obj) {
	delete obj;
}

const char LunaTraits< btContactConstraint >::className[] = "btContactConstraint";
const char LunaTraits< btContactConstraint >::fullName[] = "btContactConstraint";
const char LunaTraits< btContactConstraint >::moduleName[] = "bullet";
const char* LunaTraits< btContactConstraint >::parents[] = {"bullet.btTypedConstraint", 0};
const int LunaTraits< btContactConstraint >::hash = 52283101;
const int LunaTraits< btContactConstraint >::uniqueIDs[] = {66271199,0};

luna_RegType LunaTraits< btContactConstraint >::methods[] = {
	{"setContactManifold", &luna_wrapper_btContactConstraint::_bind_setContactManifold},
	{"getContactManifold", &luna_wrapper_btContactConstraint::_bind_getContactManifold},
	{"getInfo1", &luna_wrapper_btContactConstraint::_bind_getInfo1},
	{"getInfo2", &luna_wrapper_btContactConstraint::_bind_getInfo2},
	{"buildJacobian", &luna_wrapper_btContactConstraint::_bind_buildJacobian},
	{"base_setupSolverConstraint", &luna_wrapper_btContactConstraint::_bind_base_setupSolverConstraint},
	{"base_solveConstraintObsolete", &luna_wrapper_btContactConstraint::_bind_base_solveConstraintObsolete},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btContactConstraint::_bind_base_calculateSerializeBufferSize},
	{"base_getInfo1", &luna_wrapper_btContactConstraint::_bind_base_getInfo1},
	{"base_getInfo2", &luna_wrapper_btContactConstraint::_bind_base_getInfo2},
	{"base_buildJacobian", &luna_wrapper_btContactConstraint::_bind_base_buildJacobian},
	{"__eq", &luna_wrapper_btContactConstraint::_bind___eq},
	{"fromVoid", &luna_wrapper_btContactConstraint::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btContactConstraint::_bind_asVoid},
	{"getTable", &luna_wrapper_btContactConstraint::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btContactConstraint >::converters[] = {
	{"btTypedObject", &luna_wrapper_btContactConstraint::_cast_from_btTypedObject},
	{0,0}
};

luna_RegEnumType LunaTraits< btContactConstraint >::enumValues[] = {
	{0,0}
};



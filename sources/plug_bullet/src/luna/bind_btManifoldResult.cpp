#include <plug_common.h>

#include <luna/wrappers/wrapper_btManifoldResult.h>

class luna_wrapper_btManifoldResult {
public:
	typedef Luna< btManifoldResult > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btDiscreteCollisionDetectorInterface::Result* self=(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btDiscreteCollisionDetectorInterface::Result,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25324514) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btDiscreteCollisionDetectorInterface::Result*)");
		}

		btDiscreteCollisionDetectorInterface::Result* rhs =(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,2));
		btDiscreteCollisionDetectorInterface::Result* self=(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1));
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

		btManifoldResult* self= (btManifoldResult*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btManifoldResult >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25324514) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Result(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btManifoldResult* ptr= dynamic_cast< btManifoldResult* >(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1));
		btManifoldResult* ptr= luna_caster< btDiscreteCollisionDetectorInterface::Result, btManifoldResult >::cast(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btManifoldResult >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,32391296)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btCollisionObjectWrapper >::check(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,32391296)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionObjectWrapper >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,32391296)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionObjectWrapper >::check(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,32391296)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btCollisionObjectWrapper >::check(L,3)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setPersistentManifold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,66271199)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPersistentManifold_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPersistentManifold_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setShapeIdentifiersA(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setShapeIdentifiersB(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addContactPoint(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_refreshContactPoints(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBody0Wrap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBody1Wrap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBody0Wrap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,32391296)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBody1Wrap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,32391296)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBody0Internal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBody1Internal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_calculateCombinedRestitution(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,85758361)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_calculateCombinedFriction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,85758361)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setShapeIdentifiersA(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setShapeIdentifiersB(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addContactPoint(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btManifoldResult::btManifoldResult()
	static btManifoldResult* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btManifoldResult::btManifoldResult() function, expected prototype:\nbtManifoldResult::btManifoldResult()\nClass arguments details:\n");
		}


		return new btManifoldResult();
	}

	// btManifoldResult::btManifoldResult(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)
	static btManifoldResult* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btManifoldResult::btManifoldResult(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) function, expected prototype:\nbtManifoldResult::btManifoldResult(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)\nClass arguments details:\narg 1 ID = 32391296\narg 2 ID = 32391296\n");
		}

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,1));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));

		return new btManifoldResult(body0Wrap, body1Wrap);
	}

	// btManifoldResult::btManifoldResult(lua_Table * data)
	static btManifoldResult* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btManifoldResult::btManifoldResult(lua_Table * data) function, expected prototype:\nbtManifoldResult::btManifoldResult(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btManifoldResult(L,NULL);
	}

	// btManifoldResult::btManifoldResult(lua_Table * data, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)
	static btManifoldResult* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btManifoldResult::btManifoldResult(lua_Table * data, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) function, expected prototype:\nbtManifoldResult::btManifoldResult(lua_Table * data, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)\nClass arguments details:\narg 2 ID = 32391296\narg 3 ID = 32391296\n");
		}

		const btCollisionObjectWrapper* body0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));
		const btCollisionObjectWrapper* body1Wrap=(Luna< btCollisionObjectWrapper >::check(L,3));

		return new wrapper_btManifoldResult(L,NULL, body0Wrap, body1Wrap);
	}

	// Overload binder for btManifoldResult::btManifoldResult
	static btManifoldResult* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function btManifoldResult, cannot match any of the overloads for function btManifoldResult:\n  btManifoldResult()\n  btManifoldResult(const btCollisionObjectWrapper *, const btCollisionObjectWrapper *)\n  btManifoldResult(lua_Table *)\n  btManifoldResult(lua_Table *, const btCollisionObjectWrapper *, const btCollisionObjectWrapper *)\n");
		return NULL;
	}


	// Function binds:
	// void btManifoldResult::setPersistentManifold(btPersistentManifold * manifoldPtr)
	static int _bind_setPersistentManifold(lua_State *L) {
		if (!_lg_typecheck_setPersistentManifold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldResult::setPersistentManifold(btPersistentManifold * manifoldPtr) function, expected prototype:\nvoid btManifoldResult::setPersistentManifold(btPersistentManifold * manifoldPtr)\nClass arguments details:\narg 1 ID = 66271199\n");
		}

		btPersistentManifold* manifoldPtr=(Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,2));

		btManifoldResult* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldResult::setPersistentManifold(btPersistentManifold *). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		self->setPersistentManifold(manifoldPtr);

		return 0;
	}

	// const btPersistentManifold * btManifoldResult::getPersistentManifold() const
	static int _bind_getPersistentManifold_overload_1(lua_State *L) {
		if (!_lg_typecheck_getPersistentManifold_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btPersistentManifold * btManifoldResult::getPersistentManifold() const function, expected prototype:\nconst btPersistentManifold * btManifoldResult::getPersistentManifold() const\nClass arguments details:\n");
		}


		btManifoldResult* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btPersistentManifold * btManifoldResult::getPersistentManifold() const. Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		const btPersistentManifold * lret = self->getPersistentManifold();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPersistentManifold >::push(L,lret,false);

		return 1;
	}

	// btPersistentManifold * btManifoldResult::getPersistentManifold()
	static int _bind_getPersistentManifold_overload_2(lua_State *L) {
		if (!_lg_typecheck_getPersistentManifold_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPersistentManifold * btManifoldResult::getPersistentManifold() function, expected prototype:\nbtPersistentManifold * btManifoldResult::getPersistentManifold()\nClass arguments details:\n");
		}


		btManifoldResult* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btPersistentManifold * btManifoldResult::getPersistentManifold(). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		btPersistentManifold * lret = self->getPersistentManifold();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPersistentManifold >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btManifoldResult::getPersistentManifold
	static int _bind_getPersistentManifold(lua_State *L) {
		if (_lg_typecheck_getPersistentManifold_overload_1(L)) return _bind_getPersistentManifold_overload_1(L);
		if (_lg_typecheck_getPersistentManifold_overload_2(L)) return _bind_getPersistentManifold_overload_2(L);

		luaL_error(L, "error in function getPersistentManifold, cannot match any of the overloads for function getPersistentManifold:\n  getPersistentManifold()\n  getPersistentManifold()\n");
		return 0;
	}

	// void btManifoldResult::setShapeIdentifiersA(int partId0, int index0)
	static int _bind_setShapeIdentifiersA(lua_State *L) {
		if (!_lg_typecheck_setShapeIdentifiersA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldResult::setShapeIdentifiersA(int partId0, int index0) function, expected prototype:\nvoid btManifoldResult::setShapeIdentifiersA(int partId0, int index0)\nClass arguments details:\n");
		}

		int partId0=(int)lua_tointeger(L,2);
		int index0=(int)lua_tointeger(L,3);

		btManifoldResult* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldResult::setShapeIdentifiersA(int, int). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		self->setShapeIdentifiersA(partId0, index0);

		return 0;
	}

	// void btManifoldResult::setShapeIdentifiersB(int partId1, int index1)
	static int _bind_setShapeIdentifiersB(lua_State *L) {
		if (!_lg_typecheck_setShapeIdentifiersB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldResult::setShapeIdentifiersB(int partId1, int index1) function, expected prototype:\nvoid btManifoldResult::setShapeIdentifiersB(int partId1, int index1)\nClass arguments details:\n");
		}

		int partId1=(int)lua_tointeger(L,2);
		int index1=(int)lua_tointeger(L,3);

		btManifoldResult* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldResult::setShapeIdentifiersB(int, int). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		self->setShapeIdentifiersB(partId1, index1);

		return 0;
	}

	// void btManifoldResult::addContactPoint(const btVector3 & normalOnBInWorld, const btVector3 & pointInWorld, float depth)
	static int _bind_addContactPoint(lua_State *L) {
		if (!_lg_typecheck_addContactPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldResult::addContactPoint(const btVector3 & normalOnBInWorld, const btVector3 & pointInWorld, float depth) function, expected prototype:\nvoid btManifoldResult::addContactPoint(const btVector3 & normalOnBInWorld, const btVector3 & pointInWorld, float depth)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* normalOnBInWorld_ptr=(Luna< btVector3 >::check(L,2));
		if( !normalOnBInWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normalOnBInWorld in btManifoldResult::addContactPoint function");
		}
		const btVector3 & normalOnBInWorld=*normalOnBInWorld_ptr;
		const btVector3* pointInWorld_ptr=(Luna< btVector3 >::check(L,3));
		if( !pointInWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pointInWorld in btManifoldResult::addContactPoint function");
		}
		const btVector3 & pointInWorld=*pointInWorld_ptr;
		float depth=(float)lua_tonumber(L,4);

		btManifoldResult* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldResult::addContactPoint(const btVector3 &, const btVector3 &, float). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		self->addContactPoint(normalOnBInWorld, pointInWorld, depth);

		return 0;
	}

	// void btManifoldResult::refreshContactPoints()
	static int _bind_refreshContactPoints(lua_State *L) {
		if (!_lg_typecheck_refreshContactPoints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldResult::refreshContactPoints() function, expected prototype:\nvoid btManifoldResult::refreshContactPoints()\nClass arguments details:\n");
		}


		btManifoldResult* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldResult::refreshContactPoints(). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		self->refreshContactPoints();

		return 0;
	}

	// const btCollisionObjectWrapper * btManifoldResult::getBody0Wrap() const
	static int _bind_getBody0Wrap(lua_State *L) {
		if (!_lg_typecheck_getBody0Wrap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btCollisionObjectWrapper * btManifoldResult::getBody0Wrap() const function, expected prototype:\nconst btCollisionObjectWrapper * btManifoldResult::getBody0Wrap() const\nClass arguments details:\n");
		}


		btManifoldResult* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btCollisionObjectWrapper * btManifoldResult::getBody0Wrap() const. Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		const btCollisionObjectWrapper * lret = self->getBody0Wrap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionObjectWrapper >::push(L,lret,false);

		return 1;
	}

	// const btCollisionObjectWrapper * btManifoldResult::getBody1Wrap() const
	static int _bind_getBody1Wrap(lua_State *L) {
		if (!_lg_typecheck_getBody1Wrap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btCollisionObjectWrapper * btManifoldResult::getBody1Wrap() const function, expected prototype:\nconst btCollisionObjectWrapper * btManifoldResult::getBody1Wrap() const\nClass arguments details:\n");
		}


		btManifoldResult* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btCollisionObjectWrapper * btManifoldResult::getBody1Wrap() const. Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		const btCollisionObjectWrapper * lret = self->getBody1Wrap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionObjectWrapper >::push(L,lret,false);

		return 1;
	}

	// void btManifoldResult::setBody0Wrap(const btCollisionObjectWrapper * obj0Wrap)
	static int _bind_setBody0Wrap(lua_State *L) {
		if (!_lg_typecheck_setBody0Wrap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldResult::setBody0Wrap(const btCollisionObjectWrapper * obj0Wrap) function, expected prototype:\nvoid btManifoldResult::setBody0Wrap(const btCollisionObjectWrapper * obj0Wrap)\nClass arguments details:\narg 1 ID = 32391296\n");
		}

		const btCollisionObjectWrapper* obj0Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));

		btManifoldResult* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldResult::setBody0Wrap(const btCollisionObjectWrapper *). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		self->setBody0Wrap(obj0Wrap);

		return 0;
	}

	// void btManifoldResult::setBody1Wrap(const btCollisionObjectWrapper * obj1Wrap)
	static int _bind_setBody1Wrap(lua_State *L) {
		if (!_lg_typecheck_setBody1Wrap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldResult::setBody1Wrap(const btCollisionObjectWrapper * obj1Wrap) function, expected prototype:\nvoid btManifoldResult::setBody1Wrap(const btCollisionObjectWrapper * obj1Wrap)\nClass arguments details:\narg 1 ID = 32391296\n");
		}

		const btCollisionObjectWrapper* obj1Wrap=(Luna< btCollisionObjectWrapper >::check(L,2));

		btManifoldResult* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldResult::setBody1Wrap(const btCollisionObjectWrapper *). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		self->setBody1Wrap(obj1Wrap);

		return 0;
	}

	// const btCollisionObject * btManifoldResult::getBody0Internal() const
	static int _bind_getBody0Internal(lua_State *L) {
		if (!_lg_typecheck_getBody0Internal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btCollisionObject * btManifoldResult::getBody0Internal() const function, expected prototype:\nconst btCollisionObject * btManifoldResult::getBody0Internal() const\nClass arguments details:\n");
		}


		btManifoldResult* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btCollisionObject * btManifoldResult::getBody0Internal() const. Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		const btCollisionObject * lret = self->getBody0Internal();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionObject >::push(L,lret,false);

		return 1;
	}

	// const btCollisionObject * btManifoldResult::getBody1Internal() const
	static int _bind_getBody1Internal(lua_State *L) {
		if (!_lg_typecheck_getBody1Internal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btCollisionObject * btManifoldResult::getBody1Internal() const function, expected prototype:\nconst btCollisionObject * btManifoldResult::getBody1Internal() const\nClass arguments details:\n");
		}


		btManifoldResult* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btCollisionObject * btManifoldResult::getBody1Internal() const. Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		const btCollisionObject * lret = self->getBody1Internal();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionObject >::push(L,lret,false);

		return 1;
	}

	// static float btManifoldResult::calculateCombinedRestitution(const btCollisionObject * body0, const btCollisionObject * body1)
	static int _bind_calculateCombinedRestitution(lua_State *L) {
		if (!_lg_typecheck_calculateCombinedRestitution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static float btManifoldResult::calculateCombinedRestitution(const btCollisionObject * body0, const btCollisionObject * body1) function, expected prototype:\nstatic float btManifoldResult::calculateCombinedRestitution(const btCollisionObject * body0, const btCollisionObject * body1)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\n");
		}

		const btCollisionObject* body0=(Luna< btCollisionObject >::check(L,1));
		const btCollisionObject* body1=(Luna< btCollisionObject >::check(L,2));

		float lret = btManifoldResult::calculateCombinedRestitution(body0, body1);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static float btManifoldResult::calculateCombinedFriction(const btCollisionObject * body0, const btCollisionObject * body1)
	static int _bind_calculateCombinedFriction(lua_State *L) {
		if (!_lg_typecheck_calculateCombinedFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static float btManifoldResult::calculateCombinedFriction(const btCollisionObject * body0, const btCollisionObject * body1) function, expected prototype:\nstatic float btManifoldResult::calculateCombinedFriction(const btCollisionObject * body0, const btCollisionObject * body1)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\n");
		}

		const btCollisionObject* body0=(Luna< btCollisionObject >::check(L,1));
		const btCollisionObject* body1=(Luna< btCollisionObject >::check(L,2));

		float lret = btManifoldResult::calculateCombinedFriction(body0, body1);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btManifoldResult::base_setShapeIdentifiersA(int partId0, int index0)
	static int _bind_base_setShapeIdentifiersA(lua_State *L) {
		if (!_lg_typecheck_base_setShapeIdentifiersA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldResult::base_setShapeIdentifiersA(int partId0, int index0) function, expected prototype:\nvoid btManifoldResult::base_setShapeIdentifiersA(int partId0, int index0)\nClass arguments details:\n");
		}

		int partId0=(int)lua_tointeger(L,2);
		int index0=(int)lua_tointeger(L,3);

		btManifoldResult* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldResult::base_setShapeIdentifiersA(int, int). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		self->btManifoldResult::setShapeIdentifiersA(partId0, index0);

		return 0;
	}

	// void btManifoldResult::base_setShapeIdentifiersB(int partId1, int index1)
	static int _bind_base_setShapeIdentifiersB(lua_State *L) {
		if (!_lg_typecheck_base_setShapeIdentifiersB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldResult::base_setShapeIdentifiersB(int partId1, int index1) function, expected prototype:\nvoid btManifoldResult::base_setShapeIdentifiersB(int partId1, int index1)\nClass arguments details:\n");
		}

		int partId1=(int)lua_tointeger(L,2);
		int index1=(int)lua_tointeger(L,3);

		btManifoldResult* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldResult::base_setShapeIdentifiersB(int, int). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		self->btManifoldResult::setShapeIdentifiersB(partId1, index1);

		return 0;
	}

	// void btManifoldResult::base_addContactPoint(const btVector3 & normalOnBInWorld, const btVector3 & pointInWorld, float depth)
	static int _bind_base_addContactPoint(lua_State *L) {
		if (!_lg_typecheck_base_addContactPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btManifoldResult::base_addContactPoint(const btVector3 & normalOnBInWorld, const btVector3 & pointInWorld, float depth) function, expected prototype:\nvoid btManifoldResult::base_addContactPoint(const btVector3 & normalOnBInWorld, const btVector3 & pointInWorld, float depth)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* normalOnBInWorld_ptr=(Luna< btVector3 >::check(L,2));
		if( !normalOnBInWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normalOnBInWorld in btManifoldResult::base_addContactPoint function");
		}
		const btVector3 & normalOnBInWorld=*normalOnBInWorld_ptr;
		const btVector3* pointInWorld_ptr=(Luna< btVector3 >::check(L,3));
		if( !pointInWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pointInWorld in btManifoldResult::base_addContactPoint function");
		}
		const btVector3 & pointInWorld=*pointInWorld_ptr;
		float depth=(float)lua_tonumber(L,4);

		btManifoldResult* self=Luna< btDiscreteCollisionDetectorInterface::Result >::checkSubType< btManifoldResult >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btManifoldResult::base_addContactPoint(const btVector3 &, const btVector3 &, float). Got : '%s'",typeid(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,1)).name());
		}
		self->btManifoldResult::addContactPoint(normalOnBInWorld, pointInWorld, depth);

		return 0;
	}


	// Operator binds:

};

btManifoldResult* LunaTraits< btManifoldResult >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btManifoldResult::_bind_ctor(L);
}

void LunaTraits< btManifoldResult >::_bind_dtor(btManifoldResult* obj) {
	delete obj;
}

const char LunaTraits< btManifoldResult >::className[] = "btManifoldResult";
const char LunaTraits< btManifoldResult >::fullName[] = "btManifoldResult";
const char LunaTraits< btManifoldResult >::moduleName[] = "bullet";
const char* LunaTraits< btManifoldResult >::parents[] = {"bullet.btDiscreteCollisionDetectorInterface_Result", 0};
const int LunaTraits< btManifoldResult >::hash = 60759048;
const int LunaTraits< btManifoldResult >::uniqueIDs[] = {25324514,0};

luna_RegType LunaTraits< btManifoldResult >::methods[] = {
	{"setPersistentManifold", &luna_wrapper_btManifoldResult::_bind_setPersistentManifold},
	{"getPersistentManifold", &luna_wrapper_btManifoldResult::_bind_getPersistentManifold},
	{"setShapeIdentifiersA", &luna_wrapper_btManifoldResult::_bind_setShapeIdentifiersA},
	{"setShapeIdentifiersB", &luna_wrapper_btManifoldResult::_bind_setShapeIdentifiersB},
	{"addContactPoint", &luna_wrapper_btManifoldResult::_bind_addContactPoint},
	{"refreshContactPoints", &luna_wrapper_btManifoldResult::_bind_refreshContactPoints},
	{"getBody0Wrap", &luna_wrapper_btManifoldResult::_bind_getBody0Wrap},
	{"getBody1Wrap", &luna_wrapper_btManifoldResult::_bind_getBody1Wrap},
	{"setBody0Wrap", &luna_wrapper_btManifoldResult::_bind_setBody0Wrap},
	{"setBody1Wrap", &luna_wrapper_btManifoldResult::_bind_setBody1Wrap},
	{"getBody0Internal", &luna_wrapper_btManifoldResult::_bind_getBody0Internal},
	{"getBody1Internal", &luna_wrapper_btManifoldResult::_bind_getBody1Internal},
	{"calculateCombinedRestitution", &luna_wrapper_btManifoldResult::_bind_calculateCombinedRestitution},
	{"calculateCombinedFriction", &luna_wrapper_btManifoldResult::_bind_calculateCombinedFriction},
	{"base_setShapeIdentifiersA", &luna_wrapper_btManifoldResult::_bind_base_setShapeIdentifiersA},
	{"base_setShapeIdentifiersB", &luna_wrapper_btManifoldResult::_bind_base_setShapeIdentifiersB},
	{"base_addContactPoint", &luna_wrapper_btManifoldResult::_bind_base_addContactPoint},
	{"__eq", &luna_wrapper_btManifoldResult::_bind___eq},
	{"fromVoid", &luna_wrapper_btManifoldResult::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btManifoldResult::_bind_asVoid},
	{"getTable", &luna_wrapper_btManifoldResult::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btManifoldResult >::converters[] = {
	{"btDiscreteCollisionDetectorInterface::Result", &luna_wrapper_btManifoldResult::_cast_from_Result},
	{0,0}
};

luna_RegEnumType LunaTraits< btManifoldResult >::enumValues[] = {
	{0,0}
};



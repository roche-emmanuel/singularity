#include <plug_common.h>

class luna_wrapper_btPersistentManifold {
public:
	typedef Luna< btPersistentManifold > luna_t;

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

		btPersistentManifold* self= (btPersistentManifold*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btPersistentManifold >::push(L,self,false);
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
		//btPersistentManifold* ptr= dynamic_cast< btPersistentManifold* >(Luna< btTypedObject >::check(L,1));
		btPersistentManifold* ptr= luna_caster< btTypedObject, btPersistentManifold >::cast(Luna< btTypedObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btPersistentManifold >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,85758361)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btCollisionObject >::check(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionObject >::check(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getBody0(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBody1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBodies(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,85758361)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clearUserCache(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,55239733) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumContacts(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNumContacts(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getContactPoint_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getContactPoint_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getContactBreakingThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getContactProcessingThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setContactBreakingThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setContactProcessingThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCacheEntry(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,55239733) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addManifoldPoint(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,55239733) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeContactPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_replaceContactPoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,55239733) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_validContactDistance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,55239733) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_refreshContactPoints(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clearManifold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCompanionIdA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCompanionIdB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIndex1a(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCompanionIdA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCompanionIdB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIndex1a(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btPersistentManifold::btPersistentManifold()
	static btPersistentManifold* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPersistentManifold::btPersistentManifold() function, expected prototype:\nbtPersistentManifold::btPersistentManifold()\nClass arguments details:\n");
		}


		return new btPersistentManifold();
	}

	// btPersistentManifold::btPersistentManifold(const btCollisionObject * body0, const btCollisionObject * body1, int arg3, float contactBreakingThreshold, float contactProcessingThreshold)
	static btPersistentManifold* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPersistentManifold::btPersistentManifold(const btCollisionObject * body0, const btCollisionObject * body1, int arg3, float contactBreakingThreshold, float contactProcessingThreshold) function, expected prototype:\nbtPersistentManifold::btPersistentManifold(const btCollisionObject * body0, const btCollisionObject * body1, int arg3, float contactBreakingThreshold, float contactProcessingThreshold)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\n");
		}

		const btCollisionObject* body0=(Luna< btCollisionObject >::check(L,1));
		const btCollisionObject* body1=(Luna< btCollisionObject >::check(L,2));
		int _arg3=(int)lua_tointeger(L,3);
		float contactBreakingThreshold=(float)lua_tonumber(L,4);
		float contactProcessingThreshold=(float)lua_tonumber(L,5);

		return new btPersistentManifold(body0, body1, _arg3, contactBreakingThreshold, contactProcessingThreshold);
	}

	// Overload binder for btPersistentManifold::btPersistentManifold
	static btPersistentManifold* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btPersistentManifold, cannot match any of the overloads for function btPersistentManifold:\n  btPersistentManifold()\n  btPersistentManifold(const btCollisionObject *, const btCollisionObject *, int, float, float)\n");
		return NULL;
	}


	// Function binds:
	// const btCollisionObject * btPersistentManifold::getBody0() const
	static int _bind_getBody0(lua_State *L) {
		if (!_lg_typecheck_getBody0(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btCollisionObject * btPersistentManifold::getBody0() const function, expected prototype:\nconst btCollisionObject * btPersistentManifold::getBody0() const\nClass arguments details:\n");
		}


		btPersistentManifold* self=Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btCollisionObject * btPersistentManifold::getBody0() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btCollisionObject * lret = self->getBody0();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionObject >::push(L,lret,false);

		return 1;
	}

	// const btCollisionObject * btPersistentManifold::getBody1() const
	static int _bind_getBody1(lua_State *L) {
		if (!_lg_typecheck_getBody1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btCollisionObject * btPersistentManifold::getBody1() const function, expected prototype:\nconst btCollisionObject * btPersistentManifold::getBody1() const\nClass arguments details:\n");
		}


		btPersistentManifold* self=Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btCollisionObject * btPersistentManifold::getBody1() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btCollisionObject * lret = self->getBody1();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionObject >::push(L,lret,false);

		return 1;
	}

	// void btPersistentManifold::setBodies(const btCollisionObject * body0, const btCollisionObject * body1)
	static int _bind_setBodies(lua_State *L) {
		if (!_lg_typecheck_setBodies(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPersistentManifold::setBodies(const btCollisionObject * body0, const btCollisionObject * body1) function, expected prototype:\nvoid btPersistentManifold::setBodies(const btCollisionObject * body0, const btCollisionObject * body1)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\n");
		}

		const btCollisionObject* body0=(Luna< btCollisionObject >::check(L,2));
		const btCollisionObject* body1=(Luna< btCollisionObject >::check(L,3));

		btPersistentManifold* self=Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPersistentManifold::setBodies(const btCollisionObject *, const btCollisionObject *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setBodies(body0, body1);

		return 0;
	}

	// void btPersistentManifold::clearUserCache(btManifoldPoint & pt)
	static int _bind_clearUserCache(lua_State *L) {
		if (!_lg_typecheck_clearUserCache(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPersistentManifold::clearUserCache(btManifoldPoint & pt) function, expected prototype:\nvoid btPersistentManifold::clearUserCache(btManifoldPoint & pt)\nClass arguments details:\narg 1 ID = 55239733\n");
		}

		btManifoldPoint* pt_ptr=(Luna< btManifoldPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in btPersistentManifold::clearUserCache function");
		}
		btManifoldPoint & pt=*pt_ptr;

		btPersistentManifold* self=Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPersistentManifold::clearUserCache(btManifoldPoint &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->clearUserCache(pt);

		return 0;
	}

	// int btPersistentManifold::getNumContacts() const
	static int _bind_getNumContacts(lua_State *L) {
		if (!_lg_typecheck_getNumContacts(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btPersistentManifold::getNumContacts() const function, expected prototype:\nint btPersistentManifold::getNumContacts() const\nClass arguments details:\n");
		}


		btPersistentManifold* self=Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btPersistentManifold::getNumContacts() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->getNumContacts();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btPersistentManifold::setNumContacts(int cachedPoints)
	static int _bind_setNumContacts(lua_State *L) {
		if (!_lg_typecheck_setNumContacts(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPersistentManifold::setNumContacts(int cachedPoints) function, expected prototype:\nvoid btPersistentManifold::setNumContacts(int cachedPoints)\nClass arguments details:\n");
		}

		int cachedPoints=(int)lua_tointeger(L,2);

		btPersistentManifold* self=Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPersistentManifold::setNumContacts(int). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setNumContacts(cachedPoints);

		return 0;
	}

	// const btManifoldPoint & btPersistentManifold::getContactPoint(int index) const
	static int _bind_getContactPoint_overload_1(lua_State *L) {
		if (!_lg_typecheck_getContactPoint_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btManifoldPoint & btPersistentManifold::getContactPoint(int index) const function, expected prototype:\nconst btManifoldPoint & btPersistentManifold::getContactPoint(int index) const\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btPersistentManifold* self=Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btManifoldPoint & btPersistentManifold::getContactPoint(int) const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btManifoldPoint* lret = &self->getContactPoint(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btManifoldPoint >::push(L,lret,false);

		return 1;
	}

	// btManifoldPoint & btPersistentManifold::getContactPoint(int index)
	static int _bind_getContactPoint_overload_2(lua_State *L) {
		if (!_lg_typecheck_getContactPoint_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btManifoldPoint & btPersistentManifold::getContactPoint(int index) function, expected prototype:\nbtManifoldPoint & btPersistentManifold::getContactPoint(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btPersistentManifold* self=Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btManifoldPoint & btPersistentManifold::getContactPoint(int). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btManifoldPoint* lret = &self->getContactPoint(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btManifoldPoint >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btPersistentManifold::getContactPoint
	static int _bind_getContactPoint(lua_State *L) {
		if (_lg_typecheck_getContactPoint_overload_1(L)) return _bind_getContactPoint_overload_1(L);
		if (_lg_typecheck_getContactPoint_overload_2(L)) return _bind_getContactPoint_overload_2(L);

		luaL_error(L, "error in function getContactPoint, cannot match any of the overloads for function getContactPoint:\n  getContactPoint(int)\n  getContactPoint(int)\n");
		return 0;
	}

	// float btPersistentManifold::getContactBreakingThreshold() const
	static int _bind_getContactBreakingThreshold(lua_State *L) {
		if (!_lg_typecheck_getContactBreakingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btPersistentManifold::getContactBreakingThreshold() const function, expected prototype:\nfloat btPersistentManifold::getContactBreakingThreshold() const\nClass arguments details:\n");
		}


		btPersistentManifold* self=Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btPersistentManifold::getContactBreakingThreshold() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getContactBreakingThreshold();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btPersistentManifold::getContactProcessingThreshold() const
	static int _bind_getContactProcessingThreshold(lua_State *L) {
		if (!_lg_typecheck_getContactProcessingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btPersistentManifold::getContactProcessingThreshold() const function, expected prototype:\nfloat btPersistentManifold::getContactProcessingThreshold() const\nClass arguments details:\n");
		}


		btPersistentManifold* self=Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btPersistentManifold::getContactProcessingThreshold() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getContactProcessingThreshold();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btPersistentManifold::setContactBreakingThreshold(float contactBreakingThreshold)
	static int _bind_setContactBreakingThreshold(lua_State *L) {
		if (!_lg_typecheck_setContactBreakingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPersistentManifold::setContactBreakingThreshold(float contactBreakingThreshold) function, expected prototype:\nvoid btPersistentManifold::setContactBreakingThreshold(float contactBreakingThreshold)\nClass arguments details:\n");
		}

		float contactBreakingThreshold=(float)lua_tonumber(L,2);

		btPersistentManifold* self=Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPersistentManifold::setContactBreakingThreshold(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setContactBreakingThreshold(contactBreakingThreshold);

		return 0;
	}

	// void btPersistentManifold::setContactProcessingThreshold(float contactProcessingThreshold)
	static int _bind_setContactProcessingThreshold(lua_State *L) {
		if (!_lg_typecheck_setContactProcessingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPersistentManifold::setContactProcessingThreshold(float contactProcessingThreshold) function, expected prototype:\nvoid btPersistentManifold::setContactProcessingThreshold(float contactProcessingThreshold)\nClass arguments details:\n");
		}

		float contactProcessingThreshold=(float)lua_tonumber(L,2);

		btPersistentManifold* self=Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPersistentManifold::setContactProcessingThreshold(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setContactProcessingThreshold(contactProcessingThreshold);

		return 0;
	}

	// int btPersistentManifold::getCacheEntry(const btManifoldPoint & newPoint) const
	static int _bind_getCacheEntry(lua_State *L) {
		if (!_lg_typecheck_getCacheEntry(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btPersistentManifold::getCacheEntry(const btManifoldPoint & newPoint) const function, expected prototype:\nint btPersistentManifold::getCacheEntry(const btManifoldPoint & newPoint) const\nClass arguments details:\narg 1 ID = 55239733\n");
		}

		const btManifoldPoint* newPoint_ptr=(Luna< btManifoldPoint >::check(L,2));
		if( !newPoint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg newPoint in btPersistentManifold::getCacheEntry function");
		}
		const btManifoldPoint & newPoint=*newPoint_ptr;

		btPersistentManifold* self=Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btPersistentManifold::getCacheEntry(const btManifoldPoint &) const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->getCacheEntry(newPoint);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btPersistentManifold::addManifoldPoint(const btManifoldPoint & newPoint, bool isPredictive = false)
	static int _bind_addManifoldPoint(lua_State *L) {
		if (!_lg_typecheck_addManifoldPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btPersistentManifold::addManifoldPoint(const btManifoldPoint & newPoint, bool isPredictive = false) function, expected prototype:\nint btPersistentManifold::addManifoldPoint(const btManifoldPoint & newPoint, bool isPredictive = false)\nClass arguments details:\narg 1 ID = 55239733\n");
		}

		int luatop = lua_gettop(L);

		const btManifoldPoint* newPoint_ptr=(Luna< btManifoldPoint >::check(L,2));
		if( !newPoint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg newPoint in btPersistentManifold::addManifoldPoint function");
		}
		const btManifoldPoint & newPoint=*newPoint_ptr;
		bool isPredictive=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		btPersistentManifold* self=Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btPersistentManifold::addManifoldPoint(const btManifoldPoint &, bool). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->addManifoldPoint(newPoint, isPredictive);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btPersistentManifold::removeContactPoint(int index)
	static int _bind_removeContactPoint(lua_State *L) {
		if (!_lg_typecheck_removeContactPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPersistentManifold::removeContactPoint(int index) function, expected prototype:\nvoid btPersistentManifold::removeContactPoint(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btPersistentManifold* self=Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPersistentManifold::removeContactPoint(int). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->removeContactPoint(index);

		return 0;
	}

	// void btPersistentManifold::replaceContactPoint(const btManifoldPoint & newPoint, int insertIndex)
	static int _bind_replaceContactPoint(lua_State *L) {
		if (!_lg_typecheck_replaceContactPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPersistentManifold::replaceContactPoint(const btManifoldPoint & newPoint, int insertIndex) function, expected prototype:\nvoid btPersistentManifold::replaceContactPoint(const btManifoldPoint & newPoint, int insertIndex)\nClass arguments details:\narg 1 ID = 55239733\n");
		}

		const btManifoldPoint* newPoint_ptr=(Luna< btManifoldPoint >::check(L,2));
		if( !newPoint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg newPoint in btPersistentManifold::replaceContactPoint function");
		}
		const btManifoldPoint & newPoint=*newPoint_ptr;
		int insertIndex=(int)lua_tointeger(L,3);

		btPersistentManifold* self=Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPersistentManifold::replaceContactPoint(const btManifoldPoint &, int). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->replaceContactPoint(newPoint, insertIndex);

		return 0;
	}

	// bool btPersistentManifold::validContactDistance(const btManifoldPoint & pt) const
	static int _bind_validContactDistance(lua_State *L) {
		if (!_lg_typecheck_validContactDistance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btPersistentManifold::validContactDistance(const btManifoldPoint & pt) const function, expected prototype:\nbool btPersistentManifold::validContactDistance(const btManifoldPoint & pt) const\nClass arguments details:\narg 1 ID = 55239733\n");
		}

		const btManifoldPoint* pt_ptr=(Luna< btManifoldPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in btPersistentManifold::validContactDistance function");
		}
		const btManifoldPoint & pt=*pt_ptr;

		btPersistentManifold* self=Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btPersistentManifold::validContactDistance(const btManifoldPoint &) const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		bool lret = self->validContactDistance(pt);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btPersistentManifold::refreshContactPoints(const btTransform & trA, const btTransform & trB)
	static int _bind_refreshContactPoints(lua_State *L) {
		if (!_lg_typecheck_refreshContactPoints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPersistentManifold::refreshContactPoints(const btTransform & trA, const btTransform & trB) function, expected prototype:\nvoid btPersistentManifold::refreshContactPoints(const btTransform & trA, const btTransform & trB)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 13247377\n");
		}

		const btTransform* trA_ptr=(Luna< btTransform >::check(L,2));
		if( !trA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trA in btPersistentManifold::refreshContactPoints function");
		}
		const btTransform & trA=*trA_ptr;
		const btTransform* trB_ptr=(Luna< btTransform >::check(L,3));
		if( !trB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trB in btPersistentManifold::refreshContactPoints function");
		}
		const btTransform & trB=*trB_ptr;

		btPersistentManifold* self=Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPersistentManifold::refreshContactPoints(const btTransform &, const btTransform &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->refreshContactPoints(trA, trB);

		return 0;
	}

	// void btPersistentManifold::clearManifold()
	static int _bind_clearManifold(lua_State *L) {
		if (!_lg_typecheck_clearManifold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPersistentManifold::clearManifold() function, expected prototype:\nvoid btPersistentManifold::clearManifold()\nClass arguments details:\n");
		}


		btPersistentManifold* self=Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPersistentManifold::clearManifold(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->clearManifold();

		return 0;
	}

	// int btPersistentManifold::m_companionIdA()
	static int _bind_getCompanionIdA(lua_State *L) {
		if (!_lg_typecheck_getCompanionIdA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btPersistentManifold::m_companionIdA() function, expected prototype:\nint btPersistentManifold::m_companionIdA()\nClass arguments details:\n");
		}


		btPersistentManifold* self=Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btPersistentManifold::m_companionIdA(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->m_companionIdA;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btPersistentManifold::m_companionIdB()
	static int _bind_getCompanionIdB(lua_State *L) {
		if (!_lg_typecheck_getCompanionIdB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btPersistentManifold::m_companionIdB() function, expected prototype:\nint btPersistentManifold::m_companionIdB()\nClass arguments details:\n");
		}


		btPersistentManifold* self=Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btPersistentManifold::m_companionIdB(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->m_companionIdB;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btPersistentManifold::m_index1a()
	static int _bind_getIndex1a(lua_State *L) {
		if (!_lg_typecheck_getIndex1a(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btPersistentManifold::m_index1a() function, expected prototype:\nint btPersistentManifold::m_index1a()\nClass arguments details:\n");
		}


		btPersistentManifold* self=Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btPersistentManifold::m_index1a(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->m_index1a;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btPersistentManifold::m_companionIdA(int value)
	static int _bind_setCompanionIdA(lua_State *L) {
		if (!_lg_typecheck_setCompanionIdA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPersistentManifold::m_companionIdA(int value) function, expected prototype:\nvoid btPersistentManifold::m_companionIdA(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btPersistentManifold* self=Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPersistentManifold::m_companionIdA(int). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->m_companionIdA = value;

		return 0;
	}

	// void btPersistentManifold::m_companionIdB(int value)
	static int _bind_setCompanionIdB(lua_State *L) {
		if (!_lg_typecheck_setCompanionIdB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPersistentManifold::m_companionIdB(int value) function, expected prototype:\nvoid btPersistentManifold::m_companionIdB(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btPersistentManifold* self=Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPersistentManifold::m_companionIdB(int). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->m_companionIdB = value;

		return 0;
	}

	// void btPersistentManifold::m_index1a(int value)
	static int _bind_setIndex1a(lua_State *L) {
		if (!_lg_typecheck_setIndex1a(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPersistentManifold::m_index1a(int value) function, expected prototype:\nvoid btPersistentManifold::m_index1a(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btPersistentManifold* self=Luna< btTypedObject >::checkSubType< btPersistentManifold >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPersistentManifold::m_index1a(int). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->m_index1a = value;

		return 0;
	}


	// Operator binds:

};

btPersistentManifold* LunaTraits< btPersistentManifold >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btPersistentManifold::_bind_ctor(L);
}

void LunaTraits< btPersistentManifold >::_bind_dtor(btPersistentManifold* obj) {
	delete obj;
}

const char LunaTraits< btPersistentManifold >::className[] = "btPersistentManifold";
const char LunaTraits< btPersistentManifold >::fullName[] = "btPersistentManifold";
const char LunaTraits< btPersistentManifold >::moduleName[] = "bullet";
const char* LunaTraits< btPersistentManifold >::parents[] = {"bullet.btTypedObject", 0};
const int LunaTraits< btPersistentManifold >::hash = 3557693;
const int LunaTraits< btPersistentManifold >::uniqueIDs[] = {66271199,0};

luna_RegType LunaTraits< btPersistentManifold >::methods[] = {
	{"getBody0", &luna_wrapper_btPersistentManifold::_bind_getBody0},
	{"getBody1", &luna_wrapper_btPersistentManifold::_bind_getBody1},
	{"setBodies", &luna_wrapper_btPersistentManifold::_bind_setBodies},
	{"clearUserCache", &luna_wrapper_btPersistentManifold::_bind_clearUserCache},
	{"getNumContacts", &luna_wrapper_btPersistentManifold::_bind_getNumContacts},
	{"setNumContacts", &luna_wrapper_btPersistentManifold::_bind_setNumContacts},
	{"getContactPoint", &luna_wrapper_btPersistentManifold::_bind_getContactPoint},
	{"getContactBreakingThreshold", &luna_wrapper_btPersistentManifold::_bind_getContactBreakingThreshold},
	{"getContactProcessingThreshold", &luna_wrapper_btPersistentManifold::_bind_getContactProcessingThreshold},
	{"setContactBreakingThreshold", &luna_wrapper_btPersistentManifold::_bind_setContactBreakingThreshold},
	{"setContactProcessingThreshold", &luna_wrapper_btPersistentManifold::_bind_setContactProcessingThreshold},
	{"getCacheEntry", &luna_wrapper_btPersistentManifold::_bind_getCacheEntry},
	{"addManifoldPoint", &luna_wrapper_btPersistentManifold::_bind_addManifoldPoint},
	{"removeContactPoint", &luna_wrapper_btPersistentManifold::_bind_removeContactPoint},
	{"replaceContactPoint", &luna_wrapper_btPersistentManifold::_bind_replaceContactPoint},
	{"validContactDistance", &luna_wrapper_btPersistentManifold::_bind_validContactDistance},
	{"refreshContactPoints", &luna_wrapper_btPersistentManifold::_bind_refreshContactPoints},
	{"clearManifold", &luna_wrapper_btPersistentManifold::_bind_clearManifold},
	{"getCompanionIdA", &luna_wrapper_btPersistentManifold::_bind_getCompanionIdA},
	{"getCompanionIdB", &luna_wrapper_btPersistentManifold::_bind_getCompanionIdB},
	{"getIndex1a", &luna_wrapper_btPersistentManifold::_bind_getIndex1a},
	{"setCompanionIdA", &luna_wrapper_btPersistentManifold::_bind_setCompanionIdA},
	{"setCompanionIdB", &luna_wrapper_btPersistentManifold::_bind_setCompanionIdB},
	{"setIndex1a", &luna_wrapper_btPersistentManifold::_bind_setIndex1a},
	{"__eq", &luna_wrapper_btPersistentManifold::_bind___eq},
	{"fromVoid", &luna_wrapper_btPersistentManifold::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btPersistentManifold::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btPersistentManifold >::converters[] = {
	{"btTypedObject", &luna_wrapper_btPersistentManifold::_cast_from_btTypedObject},
	{0,0}
};

luna_RegEnumType LunaTraits< btPersistentManifold >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

#include <luna/wrappers/wrapper_btCharacterControllerInterface.h>

class luna_wrapper_btCharacterControllerInterface {
public:
	typedef Luna< btCharacterControllerInterface > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btActionInterface* self=(Luna< btActionInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btActionInterface,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91159321) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btActionInterface*)");
		}

		btActionInterface* rhs =(Luna< btActionInterface >::check(L,2));
		btActionInterface* self=(Luna< btActionInterface >::check(L,1));
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

		btCharacterControllerInterface* self= (btCharacterControllerInterface*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btCharacterControllerInterface >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91159321) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btActionInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btActionInterface(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btCharacterControllerInterface* ptr= dynamic_cast< btCharacterControllerInterface* >(Luna< btActionInterface >::check(L,1));
		btCharacterControllerInterface* ptr= luna_caster< btActionInterface, btCharacterControllerInterface >::cast(Luna< btActionInterface >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btCharacterControllerInterface >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setWalkDirection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVelocityForTimeInterval(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_warp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_preStep(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,62162664)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_playerStep(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,62162664)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_canJump(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_jump(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_onGround(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btCharacterControllerInterface::btCharacterControllerInterface(lua_Table * data)
	static btCharacterControllerInterface* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCharacterControllerInterface::btCharacterControllerInterface(lua_Table * data) function, expected prototype:\nbtCharacterControllerInterface::btCharacterControllerInterface(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btCharacterControllerInterface(L,NULL);
	}


	// Function binds:
	// void btCharacterControllerInterface::setWalkDirection(const btVector3 & walkDirection)
	static int _bind_setWalkDirection(lua_State *L) {
		if (!_lg_typecheck_setWalkDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCharacterControllerInterface::setWalkDirection(const btVector3 & walkDirection) function, expected prototype:\nvoid btCharacterControllerInterface::setWalkDirection(const btVector3 & walkDirection)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* walkDirection_ptr=(Luna< btVector3 >::check(L,2));
		if( !walkDirection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg walkDirection in btCharacterControllerInterface::setWalkDirection function");
		}
		const btVector3 & walkDirection=*walkDirection_ptr;

		btCharacterControllerInterface* self=Luna< btActionInterface >::checkSubType< btCharacterControllerInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCharacterControllerInterface::setWalkDirection(const btVector3 &). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->setWalkDirection(walkDirection);

		return 0;
	}

	// void btCharacterControllerInterface::setVelocityForTimeInterval(const btVector3 & velocity, float timeInterval)
	static int _bind_setVelocityForTimeInterval(lua_State *L) {
		if (!_lg_typecheck_setVelocityForTimeInterval(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCharacterControllerInterface::setVelocityForTimeInterval(const btVector3 & velocity, float timeInterval) function, expected prototype:\nvoid btCharacterControllerInterface::setVelocityForTimeInterval(const btVector3 & velocity, float timeInterval)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* velocity_ptr=(Luna< btVector3 >::check(L,2));
		if( !velocity_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg velocity in btCharacterControllerInterface::setVelocityForTimeInterval function");
		}
		const btVector3 & velocity=*velocity_ptr;
		float timeInterval=(float)lua_tonumber(L,3);

		btCharacterControllerInterface* self=Luna< btActionInterface >::checkSubType< btCharacterControllerInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCharacterControllerInterface::setVelocityForTimeInterval(const btVector3 &, float). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->setVelocityForTimeInterval(velocity, timeInterval);

		return 0;
	}

	// void btCharacterControllerInterface::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCharacterControllerInterface::reset() function, expected prototype:\nvoid btCharacterControllerInterface::reset()\nClass arguments details:\n");
		}


		btCharacterControllerInterface* self=Luna< btActionInterface >::checkSubType< btCharacterControllerInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCharacterControllerInterface::reset(). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->reset();

		return 0;
	}

	// void btCharacterControllerInterface::warp(const btVector3 & origin)
	static int _bind_warp(lua_State *L) {
		if (!_lg_typecheck_warp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCharacterControllerInterface::warp(const btVector3 & origin) function, expected prototype:\nvoid btCharacterControllerInterface::warp(const btVector3 & origin)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* origin_ptr=(Luna< btVector3 >::check(L,2));
		if( !origin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg origin in btCharacterControllerInterface::warp function");
		}
		const btVector3 & origin=*origin_ptr;

		btCharacterControllerInterface* self=Luna< btActionInterface >::checkSubType< btCharacterControllerInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCharacterControllerInterface::warp(const btVector3 &). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->warp(origin);

		return 0;
	}

	// void btCharacterControllerInterface::preStep(btCollisionWorld * collisionWorld)
	static int _bind_preStep(lua_State *L) {
		if (!_lg_typecheck_preStep(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCharacterControllerInterface::preStep(btCollisionWorld * collisionWorld) function, expected prototype:\nvoid btCharacterControllerInterface::preStep(btCollisionWorld * collisionWorld)\nClass arguments details:\narg 1 ID = 62162664\n");
		}

		btCollisionWorld* collisionWorld=(Luna< btCollisionWorld >::check(L,2));

		btCharacterControllerInterface* self=Luna< btActionInterface >::checkSubType< btCharacterControllerInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCharacterControllerInterface::preStep(btCollisionWorld *). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->preStep(collisionWorld);

		return 0;
	}

	// void btCharacterControllerInterface::playerStep(btCollisionWorld * collisionWorld, float dt)
	static int _bind_playerStep(lua_State *L) {
		if (!_lg_typecheck_playerStep(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCharacterControllerInterface::playerStep(btCollisionWorld * collisionWorld, float dt) function, expected prototype:\nvoid btCharacterControllerInterface::playerStep(btCollisionWorld * collisionWorld, float dt)\nClass arguments details:\narg 1 ID = 62162664\n");
		}

		btCollisionWorld* collisionWorld=(Luna< btCollisionWorld >::check(L,2));
		float dt=(float)lua_tonumber(L,3);

		btCharacterControllerInterface* self=Luna< btActionInterface >::checkSubType< btCharacterControllerInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCharacterControllerInterface::playerStep(btCollisionWorld *, float). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->playerStep(collisionWorld, dt);

		return 0;
	}

	// bool btCharacterControllerInterface::canJump() const
	static int _bind_canJump(lua_State *L) {
		if (!_lg_typecheck_canJump(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCharacterControllerInterface::canJump() const function, expected prototype:\nbool btCharacterControllerInterface::canJump() const\nClass arguments details:\n");
		}


		btCharacterControllerInterface* self=Luna< btActionInterface >::checkSubType< btCharacterControllerInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCharacterControllerInterface::canJump() const. Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		bool lret = self->canJump();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btCharacterControllerInterface::jump()
	static int _bind_jump(lua_State *L) {
		if (!_lg_typecheck_jump(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCharacterControllerInterface::jump() function, expected prototype:\nvoid btCharacterControllerInterface::jump()\nClass arguments details:\n");
		}


		btCharacterControllerInterface* self=Luna< btActionInterface >::checkSubType< btCharacterControllerInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCharacterControllerInterface::jump(). Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		self->jump();

		return 0;
	}

	// bool btCharacterControllerInterface::onGround() const
	static int _bind_onGround(lua_State *L) {
		if (!_lg_typecheck_onGround(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCharacterControllerInterface::onGround() const function, expected prototype:\nbool btCharacterControllerInterface::onGround() const\nClass arguments details:\n");
		}


		btCharacterControllerInterface* self=Luna< btActionInterface >::checkSubType< btCharacterControllerInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCharacterControllerInterface::onGround() const. Got : '%s'",typeid(Luna< btActionInterface >::check(L,1)).name());
		}
		bool lret = self->onGround();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

btCharacterControllerInterface* LunaTraits< btCharacterControllerInterface >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btCharacterControllerInterface::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void btCharacterControllerInterface::setWalkDirection(const btVector3 & walkDirection)
	// void btCharacterControllerInterface::setVelocityForTimeInterval(const btVector3 & velocity, float timeInterval)
	// void btCharacterControllerInterface::reset()
	// void btCharacterControllerInterface::warp(const btVector3 & origin)
	// void btCharacterControllerInterface::preStep(btCollisionWorld * collisionWorld)
	// void btCharacterControllerInterface::playerStep(btCollisionWorld * collisionWorld, float dt)
	// bool btCharacterControllerInterface::canJump() const
	// void btCharacterControllerInterface::jump()
	// bool btCharacterControllerInterface::onGround() const
	// void btActionInterface::updateAction(btCollisionWorld * collisionWorld, float deltaTimeStep)
	// void btActionInterface::debugDraw(btIDebugDraw * debugDrawer)
}

void LunaTraits< btCharacterControllerInterface >::_bind_dtor(btCharacterControllerInterface* obj) {
	delete obj;
}

const char LunaTraits< btCharacterControllerInterface >::className[] = "btCharacterControllerInterface";
const char LunaTraits< btCharacterControllerInterface >::fullName[] = "btCharacterControllerInterface";
const char LunaTraits< btCharacterControllerInterface >::moduleName[] = "bullet";
const char* LunaTraits< btCharacterControllerInterface >::parents[] = {"bullet.btActionInterface", 0};
const int LunaTraits< btCharacterControllerInterface >::hash = 57993710;
const int LunaTraits< btCharacterControllerInterface >::uniqueIDs[] = {91159321,0};

luna_RegType LunaTraits< btCharacterControllerInterface >::methods[] = {
	{"setWalkDirection", &luna_wrapper_btCharacterControllerInterface::_bind_setWalkDirection},
	{"setVelocityForTimeInterval", &luna_wrapper_btCharacterControllerInterface::_bind_setVelocityForTimeInterval},
	{"reset", &luna_wrapper_btCharacterControllerInterface::_bind_reset},
	{"warp", &luna_wrapper_btCharacterControllerInterface::_bind_warp},
	{"preStep", &luna_wrapper_btCharacterControllerInterface::_bind_preStep},
	{"playerStep", &luna_wrapper_btCharacterControllerInterface::_bind_playerStep},
	{"canJump", &luna_wrapper_btCharacterControllerInterface::_bind_canJump},
	{"jump", &luna_wrapper_btCharacterControllerInterface::_bind_jump},
	{"onGround", &luna_wrapper_btCharacterControllerInterface::_bind_onGround},
	{"__eq", &luna_wrapper_btCharacterControllerInterface::_bind___eq},
	{"fromVoid", &luna_wrapper_btCharacterControllerInterface::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btCharacterControllerInterface::_bind_asVoid},
	{"getTable", &luna_wrapper_btCharacterControllerInterface::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btCharacterControllerInterface >::converters[] = {
	{"btActionInterface", &luna_wrapper_btCharacterControllerInterface::_cast_from_btActionInterface},
	{0,0}
};

luna_RegEnumType LunaTraits< btCharacterControllerInterface >::enumValues[] = {
	{0,0}
};



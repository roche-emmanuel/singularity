#include <plug_common.h>

class luna_wrapper_btSolverBody {
public:
	typedef Luna< btSolverBody > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65712094) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btSolverBody*)");
		}

		btSolverBody* rhs =(Luna< btSolverBody >::check(L,2));
		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
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

		btSolverBody* self= (btSolverBody*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btSolverBody >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65712094) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
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

		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btSolverBody");
		
		return luna_dynamicCast(L,converters,"btSolverBody",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_setWorldTransform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWorldTransform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVelocityInLocalPointObsolete(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAngularVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_applyImpulse(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_internalApplyPushImpulse(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDeltaLinearVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDeltaAngularVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPushVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTurnVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_internalGetDeltaLinearVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_internalGetDeltaAngularVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_internalGetAngularFactor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_internalGetInvMass(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_internalSetInvMass(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_internalGetPushVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_internalGetTurnVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_internalGetVelocityInLocalPointObsolete(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_internalGetAngularVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_internalApplyImpulse(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writebackVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_writebackVelocityAndTransform(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAngularFactor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLinearFactor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInvMass(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLinearVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOriginalBody(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDeltaLinearVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDeltaAngularVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAngularFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLinearFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInvMass(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPushVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTurnVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLinearVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAngularVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOriginalBody(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void btSolverBody::setWorldTransform(const btTransform & worldTransform)
	static int _bind_setWorldTransform(lua_State *L) {
		if (!_lg_typecheck_setWorldTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverBody::setWorldTransform(const btTransform & worldTransform) function, expected prototype:\nvoid btSolverBody::setWorldTransform(const btTransform & worldTransform)\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		const btTransform* worldTransform_ptr=(Luna< btTransform >::check(L,2));
		if( !worldTransform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg worldTransform in btSolverBody::setWorldTransform function");
		}
		const btTransform & worldTransform=*worldTransform_ptr;

		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverBody::setWorldTransform(const btTransform &). Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		self->setWorldTransform(worldTransform);

		return 0;
	}

	// const btTransform & btSolverBody::getWorldTransform() const
	static int _bind_getWorldTransform(lua_State *L) {
		if (!_lg_typecheck_getWorldTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btTransform & btSolverBody::getWorldTransform() const function, expected prototype:\nconst btTransform & btSolverBody::getWorldTransform() const\nClass arguments details:\n");
		}


		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btTransform & btSolverBody::getWorldTransform() const. Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		const btTransform* lret = &self->getWorldTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// void btSolverBody::getVelocityInLocalPointObsolete(const btVector3 & rel_pos, btVector3 & velocity) const
	static int _bind_getVelocityInLocalPointObsolete(lua_State *L) {
		if (!_lg_typecheck_getVelocityInLocalPointObsolete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverBody::getVelocityInLocalPointObsolete(const btVector3 & rel_pos, btVector3 & velocity) const function, expected prototype:\nvoid btSolverBody::getVelocityInLocalPointObsolete(const btVector3 & rel_pos, btVector3 & velocity) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* rel_pos_ptr=(Luna< btVector3 >::check(L,2));
		if( !rel_pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rel_pos in btSolverBody::getVelocityInLocalPointObsolete function");
		}
		const btVector3 & rel_pos=*rel_pos_ptr;
		btVector3* velocity_ptr=(Luna< btVector3 >::check(L,3));
		if( !velocity_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg velocity in btSolverBody::getVelocityInLocalPointObsolete function");
		}
		btVector3 & velocity=*velocity_ptr;

		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverBody::getVelocityInLocalPointObsolete(const btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		self->getVelocityInLocalPointObsolete(rel_pos, velocity);

		return 0;
	}

	// void btSolverBody::getAngularVelocity(btVector3 & angVel) const
	static int _bind_getAngularVelocity(lua_State *L) {
		if (!_lg_typecheck_getAngularVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverBody::getAngularVelocity(btVector3 & angVel) const function, expected prototype:\nvoid btSolverBody::getAngularVelocity(btVector3 & angVel) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* angVel_ptr=(Luna< btVector3 >::check(L,2));
		if( !angVel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angVel in btSolverBody::getAngularVelocity function");
		}
		btVector3 & angVel=*angVel_ptr;

		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverBody::getAngularVelocity(btVector3 &) const. Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		self->getAngularVelocity(angVel);

		return 0;
	}

	// void btSolverBody::applyImpulse(const btVector3 & linearComponent, const btVector3 & angularComponent, const float impulseMagnitude)
	static int _bind_applyImpulse(lua_State *L) {
		if (!_lg_typecheck_applyImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverBody::applyImpulse(const btVector3 & linearComponent, const btVector3 & angularComponent, const float impulseMagnitude) function, expected prototype:\nvoid btSolverBody::applyImpulse(const btVector3 & linearComponent, const btVector3 & angularComponent, const float impulseMagnitude)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* linearComponent_ptr=(Luna< btVector3 >::check(L,2));
		if( !linearComponent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg linearComponent in btSolverBody::applyImpulse function");
		}
		const btVector3 & linearComponent=*linearComponent_ptr;
		const btVector3* angularComponent_ptr=(Luna< btVector3 >::check(L,3));
		if( !angularComponent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angularComponent in btSolverBody::applyImpulse function");
		}
		const btVector3 & angularComponent=*angularComponent_ptr;
		const float impulseMagnitude=(const float)lua_tonumber(L,4);

		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverBody::applyImpulse(const btVector3 &, const btVector3 &, const float). Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		self->applyImpulse(linearComponent, angularComponent, impulseMagnitude);

		return 0;
	}

	// void btSolverBody::internalApplyPushImpulse(const btVector3 & linearComponent, const btVector3 & angularComponent, float impulseMagnitude)
	static int _bind_internalApplyPushImpulse(lua_State *L) {
		if (!_lg_typecheck_internalApplyPushImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverBody::internalApplyPushImpulse(const btVector3 & linearComponent, const btVector3 & angularComponent, float impulseMagnitude) function, expected prototype:\nvoid btSolverBody::internalApplyPushImpulse(const btVector3 & linearComponent, const btVector3 & angularComponent, float impulseMagnitude)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* linearComponent_ptr=(Luna< btVector3 >::check(L,2));
		if( !linearComponent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg linearComponent in btSolverBody::internalApplyPushImpulse function");
		}
		const btVector3 & linearComponent=*linearComponent_ptr;
		const btVector3* angularComponent_ptr=(Luna< btVector3 >::check(L,3));
		if( !angularComponent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angularComponent in btSolverBody::internalApplyPushImpulse function");
		}
		const btVector3 & angularComponent=*angularComponent_ptr;
		float impulseMagnitude=(float)lua_tonumber(L,4);

		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverBody::internalApplyPushImpulse(const btVector3 &, const btVector3 &, float). Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		self->internalApplyPushImpulse(linearComponent, angularComponent, impulseMagnitude);

		return 0;
	}

	// const btVector3 & btSolverBody::getDeltaLinearVelocity() const
	static int _bind_getDeltaLinearVelocity(lua_State *L) {
		if (!_lg_typecheck_getDeltaLinearVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btSolverBody::getDeltaLinearVelocity() const function, expected prototype:\nconst btVector3 & btSolverBody::getDeltaLinearVelocity() const\nClass arguments details:\n");
		}


		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btSolverBody::getDeltaLinearVelocity() const. Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		const btVector3* lret = &self->getDeltaLinearVelocity();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const btVector3 & btSolverBody::getDeltaAngularVelocity() const
	static int _bind_getDeltaAngularVelocity(lua_State *L) {
		if (!_lg_typecheck_getDeltaAngularVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btSolverBody::getDeltaAngularVelocity() const function, expected prototype:\nconst btVector3 & btSolverBody::getDeltaAngularVelocity() const\nClass arguments details:\n");
		}


		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btSolverBody::getDeltaAngularVelocity() const. Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		const btVector3* lret = &self->getDeltaAngularVelocity();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const btVector3 & btSolverBody::getPushVelocity() const
	static int _bind_getPushVelocity(lua_State *L) {
		if (!_lg_typecheck_getPushVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btSolverBody::getPushVelocity() const function, expected prototype:\nconst btVector3 & btSolverBody::getPushVelocity() const\nClass arguments details:\n");
		}


		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btSolverBody::getPushVelocity() const. Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		const btVector3* lret = &self->getPushVelocity();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const btVector3 & btSolverBody::getTurnVelocity() const
	static int _bind_getTurnVelocity(lua_State *L) {
		if (!_lg_typecheck_getTurnVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btSolverBody::getTurnVelocity() const function, expected prototype:\nconst btVector3 & btSolverBody::getTurnVelocity() const\nClass arguments details:\n");
		}


		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btSolverBody::getTurnVelocity() const. Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		const btVector3* lret = &self->getTurnVelocity();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 & btSolverBody::internalGetDeltaLinearVelocity()
	static int _bind_internalGetDeltaLinearVelocity(lua_State *L) {
		if (!_lg_typecheck_internalGetDeltaLinearVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 & btSolverBody::internalGetDeltaLinearVelocity() function, expected prototype:\nbtVector3 & btSolverBody::internalGetDeltaLinearVelocity()\nClass arguments details:\n");
		}


		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 & btSolverBody::internalGetDeltaLinearVelocity(). Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		const btVector3* lret = &self->internalGetDeltaLinearVelocity();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 & btSolverBody::internalGetDeltaAngularVelocity()
	static int _bind_internalGetDeltaAngularVelocity(lua_State *L) {
		if (!_lg_typecheck_internalGetDeltaAngularVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 & btSolverBody::internalGetDeltaAngularVelocity() function, expected prototype:\nbtVector3 & btSolverBody::internalGetDeltaAngularVelocity()\nClass arguments details:\n");
		}


		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 & btSolverBody::internalGetDeltaAngularVelocity(). Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		const btVector3* lret = &self->internalGetDeltaAngularVelocity();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const btVector3 & btSolverBody::internalGetAngularFactor() const
	static int _bind_internalGetAngularFactor(lua_State *L) {
		if (!_lg_typecheck_internalGetAngularFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btSolverBody::internalGetAngularFactor() const function, expected prototype:\nconst btVector3 & btSolverBody::internalGetAngularFactor() const\nClass arguments details:\n");
		}


		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btSolverBody::internalGetAngularFactor() const. Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		const btVector3* lret = &self->internalGetAngularFactor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const btVector3 & btSolverBody::internalGetInvMass() const
	static int _bind_internalGetInvMass(lua_State *L) {
		if (!_lg_typecheck_internalGetInvMass(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btSolverBody::internalGetInvMass() const function, expected prototype:\nconst btVector3 & btSolverBody::internalGetInvMass() const\nClass arguments details:\n");
		}


		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btSolverBody::internalGetInvMass() const. Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		const btVector3* lret = &self->internalGetInvMass();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btSolverBody::internalSetInvMass(const btVector3 & invMass)
	static int _bind_internalSetInvMass(lua_State *L) {
		if (!_lg_typecheck_internalSetInvMass(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverBody::internalSetInvMass(const btVector3 & invMass) function, expected prototype:\nvoid btSolverBody::internalSetInvMass(const btVector3 & invMass)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* invMass_ptr=(Luna< btVector3 >::check(L,2));
		if( !invMass_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg invMass in btSolverBody::internalSetInvMass function");
		}
		const btVector3 & invMass=*invMass_ptr;

		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverBody::internalSetInvMass(const btVector3 &). Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		self->internalSetInvMass(invMass);

		return 0;
	}

	// btVector3 & btSolverBody::internalGetPushVelocity()
	static int _bind_internalGetPushVelocity(lua_State *L) {
		if (!_lg_typecheck_internalGetPushVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 & btSolverBody::internalGetPushVelocity() function, expected prototype:\nbtVector3 & btSolverBody::internalGetPushVelocity()\nClass arguments details:\n");
		}


		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 & btSolverBody::internalGetPushVelocity(). Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		const btVector3* lret = &self->internalGetPushVelocity();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 & btSolverBody::internalGetTurnVelocity()
	static int _bind_internalGetTurnVelocity(lua_State *L) {
		if (!_lg_typecheck_internalGetTurnVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 & btSolverBody::internalGetTurnVelocity() function, expected prototype:\nbtVector3 & btSolverBody::internalGetTurnVelocity()\nClass arguments details:\n");
		}


		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 & btSolverBody::internalGetTurnVelocity(). Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		const btVector3* lret = &self->internalGetTurnVelocity();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btSolverBody::internalGetVelocityInLocalPointObsolete(const btVector3 & rel_pos, btVector3 & velocity) const
	static int _bind_internalGetVelocityInLocalPointObsolete(lua_State *L) {
		if (!_lg_typecheck_internalGetVelocityInLocalPointObsolete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverBody::internalGetVelocityInLocalPointObsolete(const btVector3 & rel_pos, btVector3 & velocity) const function, expected prototype:\nvoid btSolverBody::internalGetVelocityInLocalPointObsolete(const btVector3 & rel_pos, btVector3 & velocity) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* rel_pos_ptr=(Luna< btVector3 >::check(L,2));
		if( !rel_pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rel_pos in btSolverBody::internalGetVelocityInLocalPointObsolete function");
		}
		const btVector3 & rel_pos=*rel_pos_ptr;
		btVector3* velocity_ptr=(Luna< btVector3 >::check(L,3));
		if( !velocity_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg velocity in btSolverBody::internalGetVelocityInLocalPointObsolete function");
		}
		btVector3 & velocity=*velocity_ptr;

		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverBody::internalGetVelocityInLocalPointObsolete(const btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		self->internalGetVelocityInLocalPointObsolete(rel_pos, velocity);

		return 0;
	}

	// void btSolverBody::internalGetAngularVelocity(btVector3 & angVel) const
	static int _bind_internalGetAngularVelocity(lua_State *L) {
		if (!_lg_typecheck_internalGetAngularVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverBody::internalGetAngularVelocity(btVector3 & angVel) const function, expected prototype:\nvoid btSolverBody::internalGetAngularVelocity(btVector3 & angVel) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* angVel_ptr=(Luna< btVector3 >::check(L,2));
		if( !angVel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angVel in btSolverBody::internalGetAngularVelocity function");
		}
		btVector3 & angVel=*angVel_ptr;

		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverBody::internalGetAngularVelocity(btVector3 &) const. Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		self->internalGetAngularVelocity(angVel);

		return 0;
	}

	// void btSolverBody::internalApplyImpulse(const btVector3 & linearComponent, const btVector3 & angularComponent, const float impulseMagnitude)
	static int _bind_internalApplyImpulse(lua_State *L) {
		if (!_lg_typecheck_internalApplyImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverBody::internalApplyImpulse(const btVector3 & linearComponent, const btVector3 & angularComponent, const float impulseMagnitude) function, expected prototype:\nvoid btSolverBody::internalApplyImpulse(const btVector3 & linearComponent, const btVector3 & angularComponent, const float impulseMagnitude)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* linearComponent_ptr=(Luna< btVector3 >::check(L,2));
		if( !linearComponent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg linearComponent in btSolverBody::internalApplyImpulse function");
		}
		const btVector3 & linearComponent=*linearComponent_ptr;
		const btVector3* angularComponent_ptr=(Luna< btVector3 >::check(L,3));
		if( !angularComponent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angularComponent in btSolverBody::internalApplyImpulse function");
		}
		const btVector3 & angularComponent=*angularComponent_ptr;
		const float impulseMagnitude=(const float)lua_tonumber(L,4);

		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverBody::internalApplyImpulse(const btVector3 &, const btVector3 &, const float). Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		self->internalApplyImpulse(linearComponent, angularComponent, impulseMagnitude);

		return 0;
	}

	// void btSolverBody::writebackVelocity()
	static int _bind_writebackVelocity(lua_State *L) {
		if (!_lg_typecheck_writebackVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverBody::writebackVelocity() function, expected prototype:\nvoid btSolverBody::writebackVelocity()\nClass arguments details:\n");
		}


		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverBody::writebackVelocity(). Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		self->writebackVelocity();

		return 0;
	}

	// void btSolverBody::writebackVelocityAndTransform(float timeStep, float splitImpulseTurnErp)
	static int _bind_writebackVelocityAndTransform(lua_State *L) {
		if (!_lg_typecheck_writebackVelocityAndTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverBody::writebackVelocityAndTransform(float timeStep, float splitImpulseTurnErp) function, expected prototype:\nvoid btSolverBody::writebackVelocityAndTransform(float timeStep, float splitImpulseTurnErp)\nClass arguments details:\n");
		}

		float timeStep=(float)lua_tonumber(L,2);
		float splitImpulseTurnErp=(float)lua_tonumber(L,3);

		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverBody::writebackVelocityAndTransform(float, float). Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		self->writebackVelocityAndTransform(timeStep, splitImpulseTurnErp);

		return 0;
	}

	// btVector3 btSolverBody::m_angularFactor()
	static int _bind_getAngularFactor(lua_State *L) {
		if (!_lg_typecheck_getAngularFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btSolverBody::m_angularFactor() function, expected prototype:\nbtVector3 btSolverBody::m_angularFactor()\nClass arguments details:\n");
		}


		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btSolverBody::m_angularFactor(). Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_angularFactor;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btSolverBody::m_linearFactor()
	static int _bind_getLinearFactor(lua_State *L) {
		if (!_lg_typecheck_getLinearFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btSolverBody::m_linearFactor() function, expected prototype:\nbtVector3 btSolverBody::m_linearFactor()\nClass arguments details:\n");
		}


		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btSolverBody::m_linearFactor(). Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_linearFactor;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btSolverBody::m_invMass()
	static int _bind_getInvMass(lua_State *L) {
		if (!_lg_typecheck_getInvMass(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btSolverBody::m_invMass() function, expected prototype:\nbtVector3 btSolverBody::m_invMass()\nClass arguments details:\n");
		}


		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btSolverBody::m_invMass(). Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_invMass;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btSolverBody::m_linearVelocity()
	static int _bind_getLinearVelocity(lua_State *L) {
		if (!_lg_typecheck_getLinearVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btSolverBody::m_linearVelocity() function, expected prototype:\nbtVector3 btSolverBody::m_linearVelocity()\nClass arguments details:\n");
		}


		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btSolverBody::m_linearVelocity(). Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_linearVelocity;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btRigidBody * btSolverBody::m_originalBody()
	static int _bind_getOriginalBody(lua_State *L) {
		if (!_lg_typecheck_getOriginalBody(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btRigidBody * btSolverBody::m_originalBody() function, expected prototype:\nbtRigidBody * btSolverBody::m_originalBody()\nClass arguments details:\n");
		}


		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btRigidBody * btSolverBody::m_originalBody(). Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		btRigidBody * lret = self->m_originalBody;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btRigidBody >::push(L,lret,false);

		return 1;
	}

	// void btSolverBody::m_deltaLinearVelocity(btVector3 value)
	static int _bind_setDeltaLinearVelocity(lua_State *L) {
		if (!_lg_typecheck_setDeltaLinearVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverBody::m_deltaLinearVelocity(btVector3 value) function, expected prototype:\nvoid btSolverBody::m_deltaLinearVelocity(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btSolverBody::m_deltaLinearVelocity function");
		}
		btVector3 value=*value_ptr;

		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverBody::m_deltaLinearVelocity(btVector3). Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		self->m_deltaLinearVelocity = value;

		return 0;
	}

	// void btSolverBody::m_deltaAngularVelocity(btVector3 value)
	static int _bind_setDeltaAngularVelocity(lua_State *L) {
		if (!_lg_typecheck_setDeltaAngularVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverBody::m_deltaAngularVelocity(btVector3 value) function, expected prototype:\nvoid btSolverBody::m_deltaAngularVelocity(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btSolverBody::m_deltaAngularVelocity function");
		}
		btVector3 value=*value_ptr;

		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverBody::m_deltaAngularVelocity(btVector3). Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		self->m_deltaAngularVelocity = value;

		return 0;
	}

	// void btSolverBody::m_angularFactor(btVector3 value)
	static int _bind_setAngularFactor(lua_State *L) {
		if (!_lg_typecheck_setAngularFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverBody::m_angularFactor(btVector3 value) function, expected prototype:\nvoid btSolverBody::m_angularFactor(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btSolverBody::m_angularFactor function");
		}
		btVector3 value=*value_ptr;

		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverBody::m_angularFactor(btVector3). Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		self->m_angularFactor = value;

		return 0;
	}

	// void btSolverBody::m_linearFactor(btVector3 value)
	static int _bind_setLinearFactor(lua_State *L) {
		if (!_lg_typecheck_setLinearFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverBody::m_linearFactor(btVector3 value) function, expected prototype:\nvoid btSolverBody::m_linearFactor(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btSolverBody::m_linearFactor function");
		}
		btVector3 value=*value_ptr;

		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverBody::m_linearFactor(btVector3). Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		self->m_linearFactor = value;

		return 0;
	}

	// void btSolverBody::m_invMass(btVector3 value)
	static int _bind_setInvMass(lua_State *L) {
		if (!_lg_typecheck_setInvMass(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverBody::m_invMass(btVector3 value) function, expected prototype:\nvoid btSolverBody::m_invMass(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btSolverBody::m_invMass function");
		}
		btVector3 value=*value_ptr;

		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverBody::m_invMass(btVector3). Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		self->m_invMass = value;

		return 0;
	}

	// void btSolverBody::m_pushVelocity(btVector3 value)
	static int _bind_setPushVelocity(lua_State *L) {
		if (!_lg_typecheck_setPushVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverBody::m_pushVelocity(btVector3 value) function, expected prototype:\nvoid btSolverBody::m_pushVelocity(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btSolverBody::m_pushVelocity function");
		}
		btVector3 value=*value_ptr;

		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverBody::m_pushVelocity(btVector3). Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		self->m_pushVelocity = value;

		return 0;
	}

	// void btSolverBody::m_turnVelocity(btVector3 value)
	static int _bind_setTurnVelocity(lua_State *L) {
		if (!_lg_typecheck_setTurnVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverBody::m_turnVelocity(btVector3 value) function, expected prototype:\nvoid btSolverBody::m_turnVelocity(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btSolverBody::m_turnVelocity function");
		}
		btVector3 value=*value_ptr;

		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverBody::m_turnVelocity(btVector3). Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		self->m_turnVelocity = value;

		return 0;
	}

	// void btSolverBody::m_linearVelocity(btVector3 value)
	static int _bind_setLinearVelocity(lua_State *L) {
		if (!_lg_typecheck_setLinearVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverBody::m_linearVelocity(btVector3 value) function, expected prototype:\nvoid btSolverBody::m_linearVelocity(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btSolverBody::m_linearVelocity function");
		}
		btVector3 value=*value_ptr;

		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverBody::m_linearVelocity(btVector3). Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		self->m_linearVelocity = value;

		return 0;
	}

	// void btSolverBody::m_angularVelocity(btVector3 value)
	static int _bind_setAngularVelocity(lua_State *L) {
		if (!_lg_typecheck_setAngularVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverBody::m_angularVelocity(btVector3 value) function, expected prototype:\nvoid btSolverBody::m_angularVelocity(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btSolverBody::m_angularVelocity function");
		}
		btVector3 value=*value_ptr;

		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverBody::m_angularVelocity(btVector3). Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		self->m_angularVelocity = value;

		return 0;
	}

	// void btSolverBody::m_originalBody(btRigidBody * value)
	static int _bind_setOriginalBody(lua_State *L) {
		if (!_lg_typecheck_setOriginalBody(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSolverBody::m_originalBody(btRigidBody * value) function, expected prototype:\nvoid btSolverBody::m_originalBody(btRigidBody * value)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		btRigidBody* value=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));

		btSolverBody* self=(Luna< btSolverBody >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSolverBody::m_originalBody(btRigidBody *). Got : '%s'",typeid(Luna< btSolverBody >::check(L,1)).name());
		}
		self->m_originalBody = value;

		return 0;
	}


	// Operator binds:

};

btSolverBody* LunaTraits< btSolverBody >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btSolverBody >::_bind_dtor(btSolverBody* obj) {
	delete obj;
}

const char LunaTraits< btSolverBody >::className[] = "btSolverBody";
const char LunaTraits< btSolverBody >::fullName[] = "btSolverBody";
const char LunaTraits< btSolverBody >::moduleName[] = "bullet";
const char* LunaTraits< btSolverBody >::parents[] = {0};
const int LunaTraits< btSolverBody >::hash = 65712094;
const int LunaTraits< btSolverBody >::uniqueIDs[] = {65712094,0};

luna_RegType LunaTraits< btSolverBody >::methods[] = {
	{"setWorldTransform", &luna_wrapper_btSolverBody::_bind_setWorldTransform},
	{"getWorldTransform", &luna_wrapper_btSolverBody::_bind_getWorldTransform},
	{"getVelocityInLocalPointObsolete", &luna_wrapper_btSolverBody::_bind_getVelocityInLocalPointObsolete},
	{"getAngularVelocity", &luna_wrapper_btSolverBody::_bind_getAngularVelocity},
	{"applyImpulse", &luna_wrapper_btSolverBody::_bind_applyImpulse},
	{"internalApplyPushImpulse", &luna_wrapper_btSolverBody::_bind_internalApplyPushImpulse},
	{"getDeltaLinearVelocity", &luna_wrapper_btSolverBody::_bind_getDeltaLinearVelocity},
	{"getDeltaAngularVelocity", &luna_wrapper_btSolverBody::_bind_getDeltaAngularVelocity},
	{"getPushVelocity", &luna_wrapper_btSolverBody::_bind_getPushVelocity},
	{"getTurnVelocity", &luna_wrapper_btSolverBody::_bind_getTurnVelocity},
	{"internalGetDeltaLinearVelocity", &luna_wrapper_btSolverBody::_bind_internalGetDeltaLinearVelocity},
	{"internalGetDeltaAngularVelocity", &luna_wrapper_btSolverBody::_bind_internalGetDeltaAngularVelocity},
	{"internalGetAngularFactor", &luna_wrapper_btSolverBody::_bind_internalGetAngularFactor},
	{"internalGetInvMass", &luna_wrapper_btSolverBody::_bind_internalGetInvMass},
	{"internalSetInvMass", &luna_wrapper_btSolverBody::_bind_internalSetInvMass},
	{"internalGetPushVelocity", &luna_wrapper_btSolverBody::_bind_internalGetPushVelocity},
	{"internalGetTurnVelocity", &luna_wrapper_btSolverBody::_bind_internalGetTurnVelocity},
	{"internalGetVelocityInLocalPointObsolete", &luna_wrapper_btSolverBody::_bind_internalGetVelocityInLocalPointObsolete},
	{"internalGetAngularVelocity", &luna_wrapper_btSolverBody::_bind_internalGetAngularVelocity},
	{"internalApplyImpulse", &luna_wrapper_btSolverBody::_bind_internalApplyImpulse},
	{"writebackVelocity", &luna_wrapper_btSolverBody::_bind_writebackVelocity},
	{"writebackVelocityAndTransform", &luna_wrapper_btSolverBody::_bind_writebackVelocityAndTransform},
	{"getAngularFactor", &luna_wrapper_btSolverBody::_bind_getAngularFactor},
	{"getLinearFactor", &luna_wrapper_btSolverBody::_bind_getLinearFactor},
	{"getInvMass", &luna_wrapper_btSolverBody::_bind_getInvMass},
	{"getLinearVelocity", &luna_wrapper_btSolverBody::_bind_getLinearVelocity},
	{"getOriginalBody", &luna_wrapper_btSolverBody::_bind_getOriginalBody},
	{"setDeltaLinearVelocity", &luna_wrapper_btSolverBody::_bind_setDeltaLinearVelocity},
	{"setDeltaAngularVelocity", &luna_wrapper_btSolverBody::_bind_setDeltaAngularVelocity},
	{"setAngularFactor", &luna_wrapper_btSolverBody::_bind_setAngularFactor},
	{"setLinearFactor", &luna_wrapper_btSolverBody::_bind_setLinearFactor},
	{"setInvMass", &luna_wrapper_btSolverBody::_bind_setInvMass},
	{"setPushVelocity", &luna_wrapper_btSolverBody::_bind_setPushVelocity},
	{"setTurnVelocity", &luna_wrapper_btSolverBody::_bind_setTurnVelocity},
	{"setLinearVelocity", &luna_wrapper_btSolverBody::_bind_setLinearVelocity},
	{"setAngularVelocity", &luna_wrapper_btSolverBody::_bind_setAngularVelocity},
	{"setOriginalBody", &luna_wrapper_btSolverBody::_bind_setOriginalBody},
	{"dynCast", &luna_wrapper_btSolverBody::_bind_dynCast},
	{"__eq", &luna_wrapper_btSolverBody::_bind___eq},
	{"fromVoid", &luna_wrapper_btSolverBody::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btSolverBody::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btSolverBody >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btSolverBody >::enumValues[] = {
	{0,0}
};



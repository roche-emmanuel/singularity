#include <plug_common.h>

class luna_wrapper_b2Body {
public:
	typedef Luna< b2Body > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53908778) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2Body*)");
		}

		b2Body* rhs =(Luna< b2Body >::check(L,2));
		b2Body* self=(Luna< b2Body >::check(L,1));
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

		b2Body* self= (b2Body*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2Body >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53908778) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< b2Body >::check(L,1));
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

		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2Body");
		
		return luna_dynamicCast(L,converters,"b2Body",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_CreateFixture_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50620191)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< b2FixtureDef >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CreateFixture_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,86660265)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< b2Shape >::check(L,2)) ) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DestroyFixture(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92969381)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTransform(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTransform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAngle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWorldCenter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLocalCenter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetLinearVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLinearVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAngularVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAngularVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ApplyForce(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ApplyForceToCenter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ApplyTorque(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ApplyLinearImpulse(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ApplyAngularImpulse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMass(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetInertia(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMassData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,24760292)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMassData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,24760292)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ResetMassData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWorldPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetWorldVector(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLocalPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLocalVector(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLinearVelocityFromWorldPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLinearVelocityFromLocalPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLinearDamping(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetLinearDamping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAngularDamping(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAngularDamping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetGravityScale(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetGravityScale(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetBullet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsBullet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetSleepingAllowed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsSleepingAllowed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAwake(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsAwake(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetActive(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsActive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFixedRotation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsFixedRotation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFixtureList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFixtureList_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetJointList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetJointList_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetContactList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetContactList_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNext_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNext_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUserData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetWorld_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWorld_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Dump(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// b2Fixture * b2Body::CreateFixture(const b2FixtureDef * def)
	static int _bind_CreateFixture_overload_1(lua_State *L) {
		if (!_lg_typecheck_CreateFixture_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Fixture * b2Body::CreateFixture(const b2FixtureDef * def) function, expected prototype:\nb2Fixture * b2Body::CreateFixture(const b2FixtureDef * def)\nClass arguments details:\narg 1 ID = 50620191\n");
		}

		const b2FixtureDef* def=(Luna< b2FixtureDef >::check(L,2));

		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Fixture * b2Body::CreateFixture(const b2FixtureDef *). Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		b2Fixture * lret = self->CreateFixture(def);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Fixture >::push(L,lret,false);

		return 1;
	}

	// b2Fixture * b2Body::CreateFixture(const b2Shape * shape, float density)
	static int _bind_CreateFixture_overload_2(lua_State *L) {
		if (!_lg_typecheck_CreateFixture_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Fixture * b2Body::CreateFixture(const b2Shape * shape, float density) function, expected prototype:\nb2Fixture * b2Body::CreateFixture(const b2Shape * shape, float density)\nClass arguments details:\narg 1 ID = 86660265\n");
		}

		const b2Shape* shape=(Luna< b2Shape >::check(L,2));
		float density=(float)lua_tonumber(L,3);

		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Fixture * b2Body::CreateFixture(const b2Shape *, float). Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		b2Fixture * lret = self->CreateFixture(shape, density);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Fixture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for b2Body::CreateFixture
	static int _bind_CreateFixture(lua_State *L) {
		if (_lg_typecheck_CreateFixture_overload_1(L)) return _bind_CreateFixture_overload_1(L);
		if (_lg_typecheck_CreateFixture_overload_2(L)) return _bind_CreateFixture_overload_2(L);

		luaL_error(L, "error in function CreateFixture, cannot match any of the overloads for function CreateFixture:\n  CreateFixture(const b2FixtureDef *)\n  CreateFixture(const b2Shape *, float)\n");
		return 0;
	}

	// void b2Body::DestroyFixture(b2Fixture * fixture)
	static int _bind_DestroyFixture(lua_State *L) {
		if (!_lg_typecheck_DestroyFixture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Body::DestroyFixture(b2Fixture * fixture) function, expected prototype:\nvoid b2Body::DestroyFixture(b2Fixture * fixture)\nClass arguments details:\narg 1 ID = 92969381\n");
		}

		b2Fixture* fixture=(Luna< b2Fixture >::check(L,2));

		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Body::DestroyFixture(b2Fixture *). Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		self->DestroyFixture(fixture);

		return 0;
	}

	// void b2Body::SetTransform(const b2Vec2 & position, float angle)
	static int _bind_SetTransform(lua_State *L) {
		if (!_lg_typecheck_SetTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Body::SetTransform(const b2Vec2 & position, float angle) function, expected prototype:\nvoid b2Body::SetTransform(const b2Vec2 & position, float angle)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		const b2Vec2* position_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in b2Body::SetTransform function");
		}
		const b2Vec2 & position=*position_ptr;
		float angle=(float)lua_tonumber(L,3);

		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Body::SetTransform(const b2Vec2 &, float). Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		self->SetTransform(position, angle);

		return 0;
	}

	// const b2Transform & b2Body::GetTransform() const
	static int _bind_GetTransform(lua_State *L) {
		if (!_lg_typecheck_GetTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Transform & b2Body::GetTransform() const function, expected prototype:\nconst b2Transform & b2Body::GetTransform() const\nClass arguments details:\n");
		}


		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Transform & b2Body::GetTransform() const. Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		const b2Transform* lret = &self->GetTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Transform >::push(L,lret,false);

		return 1;
	}

	// const b2Vec2 & b2Body::GetPosition() const
	static int _bind_GetPosition(lua_State *L) {
		if (!_lg_typecheck_GetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Vec2 & b2Body::GetPosition() const function, expected prototype:\nconst b2Vec2 & b2Body::GetPosition() const\nClass arguments details:\n");
		}


		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Vec2 & b2Body::GetPosition() const. Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->GetPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// float b2Body::GetAngle() const
	static int _bind_GetAngle(lua_State *L) {
		if (!_lg_typecheck_GetAngle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Body::GetAngle() const function, expected prototype:\nfloat b2Body::GetAngle() const\nClass arguments details:\n");
		}


		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Body::GetAngle() const. Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		float lret = self->GetAngle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const b2Vec2 & b2Body::GetWorldCenter() const
	static int _bind_GetWorldCenter(lua_State *L) {
		if (!_lg_typecheck_GetWorldCenter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Vec2 & b2Body::GetWorldCenter() const function, expected prototype:\nconst b2Vec2 & b2Body::GetWorldCenter() const\nClass arguments details:\n");
		}


		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Vec2 & b2Body::GetWorldCenter() const. Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->GetWorldCenter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// const b2Vec2 & b2Body::GetLocalCenter() const
	static int _bind_GetLocalCenter(lua_State *L) {
		if (!_lg_typecheck_GetLocalCenter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Vec2 & b2Body::GetLocalCenter() const function, expected prototype:\nconst b2Vec2 & b2Body::GetLocalCenter() const\nClass arguments details:\n");
		}


		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Vec2 & b2Body::GetLocalCenter() const. Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		const b2Vec2* lret = &self->GetLocalCenter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,false);

		return 1;
	}

	// void b2Body::SetLinearVelocity(const b2Vec2 & v)
	static int _bind_SetLinearVelocity(lua_State *L) {
		if (!_lg_typecheck_SetLinearVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Body::SetLinearVelocity(const b2Vec2 & v) function, expected prototype:\nvoid b2Body::SetLinearVelocity(const b2Vec2 & v)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		const b2Vec2* v_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in b2Body::SetLinearVelocity function");
		}
		const b2Vec2 & v=*v_ptr;

		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Body::SetLinearVelocity(const b2Vec2 &). Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		self->SetLinearVelocity(v);

		return 0;
	}

	// b2Vec2 b2Body::GetLinearVelocity() const
	static int _bind_GetLinearVelocity(lua_State *L) {
		if (!_lg_typecheck_GetLinearVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2Body::GetLinearVelocity() const function, expected prototype:\nb2Vec2 b2Body::GetLinearVelocity() const\nClass arguments details:\n");
		}


		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2Body::GetLinearVelocity() const. Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetLinearVelocity();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// void b2Body::SetAngularVelocity(float omega)
	static int _bind_SetAngularVelocity(lua_State *L) {
		if (!_lg_typecheck_SetAngularVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Body::SetAngularVelocity(float omega) function, expected prototype:\nvoid b2Body::SetAngularVelocity(float omega)\nClass arguments details:\n");
		}

		float omega=(float)lua_tonumber(L,2);

		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Body::SetAngularVelocity(float). Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		self->SetAngularVelocity(omega);

		return 0;
	}

	// float b2Body::GetAngularVelocity() const
	static int _bind_GetAngularVelocity(lua_State *L) {
		if (!_lg_typecheck_GetAngularVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Body::GetAngularVelocity() const function, expected prototype:\nfloat b2Body::GetAngularVelocity() const\nClass arguments details:\n");
		}


		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Body::GetAngularVelocity() const. Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		float lret = self->GetAngularVelocity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2Body::ApplyForce(const b2Vec2 & force, const b2Vec2 & point)
	static int _bind_ApplyForce(lua_State *L) {
		if (!_lg_typecheck_ApplyForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Body::ApplyForce(const b2Vec2 & force, const b2Vec2 & point) function, expected prototype:\nvoid b2Body::ApplyForce(const b2Vec2 & force, const b2Vec2 & point)\nClass arguments details:\narg 1 ID = 54494886\narg 2 ID = 54494886\n");
		}

		const b2Vec2* force_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !force_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg force in b2Body::ApplyForce function");
		}
		const b2Vec2 & force=*force_ptr;
		const b2Vec2* point_ptr=(Luna< b2Vec2 >::check(L,3));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in b2Body::ApplyForce function");
		}
		const b2Vec2 & point=*point_ptr;

		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Body::ApplyForce(const b2Vec2 &, const b2Vec2 &). Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		self->ApplyForce(force, point);

		return 0;
	}

	// void b2Body::ApplyForceToCenter(const b2Vec2 & force)
	static int _bind_ApplyForceToCenter(lua_State *L) {
		if (!_lg_typecheck_ApplyForceToCenter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Body::ApplyForceToCenter(const b2Vec2 & force) function, expected prototype:\nvoid b2Body::ApplyForceToCenter(const b2Vec2 & force)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		const b2Vec2* force_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !force_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg force in b2Body::ApplyForceToCenter function");
		}
		const b2Vec2 & force=*force_ptr;

		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Body::ApplyForceToCenter(const b2Vec2 &). Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		self->ApplyForceToCenter(force);

		return 0;
	}

	// void b2Body::ApplyTorque(float torque)
	static int _bind_ApplyTorque(lua_State *L) {
		if (!_lg_typecheck_ApplyTorque(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Body::ApplyTorque(float torque) function, expected prototype:\nvoid b2Body::ApplyTorque(float torque)\nClass arguments details:\n");
		}

		float torque=(float)lua_tonumber(L,2);

		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Body::ApplyTorque(float). Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		self->ApplyTorque(torque);

		return 0;
	}

	// void b2Body::ApplyLinearImpulse(const b2Vec2 & impulse, const b2Vec2 & point)
	static int _bind_ApplyLinearImpulse(lua_State *L) {
		if (!_lg_typecheck_ApplyLinearImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Body::ApplyLinearImpulse(const b2Vec2 & impulse, const b2Vec2 & point) function, expected prototype:\nvoid b2Body::ApplyLinearImpulse(const b2Vec2 & impulse, const b2Vec2 & point)\nClass arguments details:\narg 1 ID = 54494886\narg 2 ID = 54494886\n");
		}

		const b2Vec2* impulse_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !impulse_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg impulse in b2Body::ApplyLinearImpulse function");
		}
		const b2Vec2 & impulse=*impulse_ptr;
		const b2Vec2* point_ptr=(Luna< b2Vec2 >::check(L,3));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in b2Body::ApplyLinearImpulse function");
		}
		const b2Vec2 & point=*point_ptr;

		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Body::ApplyLinearImpulse(const b2Vec2 &, const b2Vec2 &). Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		self->ApplyLinearImpulse(impulse, point);

		return 0;
	}

	// void b2Body::ApplyAngularImpulse(float impulse)
	static int _bind_ApplyAngularImpulse(lua_State *L) {
		if (!_lg_typecheck_ApplyAngularImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Body::ApplyAngularImpulse(float impulse) function, expected prototype:\nvoid b2Body::ApplyAngularImpulse(float impulse)\nClass arguments details:\n");
		}

		float impulse=(float)lua_tonumber(L,2);

		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Body::ApplyAngularImpulse(float). Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		self->ApplyAngularImpulse(impulse);

		return 0;
	}

	// float b2Body::GetMass() const
	static int _bind_GetMass(lua_State *L) {
		if (!_lg_typecheck_GetMass(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Body::GetMass() const function, expected prototype:\nfloat b2Body::GetMass() const\nClass arguments details:\n");
		}


		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Body::GetMass() const. Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		float lret = self->GetMass();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2Body::GetInertia() const
	static int _bind_GetInertia(lua_State *L) {
		if (!_lg_typecheck_GetInertia(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Body::GetInertia() const function, expected prototype:\nfloat b2Body::GetInertia() const\nClass arguments details:\n");
		}


		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Body::GetInertia() const. Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		float lret = self->GetInertia();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2Body::GetMassData(b2MassData * data) const
	static int _bind_GetMassData(lua_State *L) {
		if (!_lg_typecheck_GetMassData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Body::GetMassData(b2MassData * data) const function, expected prototype:\nvoid b2Body::GetMassData(b2MassData * data) const\nClass arguments details:\narg 1 ID = 24760292\n");
		}

		b2MassData* data=(Luna< b2MassData >::check(L,2));

		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Body::GetMassData(b2MassData *) const. Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		self->GetMassData(data);

		return 0;
	}

	// void b2Body::SetMassData(const b2MassData * data)
	static int _bind_SetMassData(lua_State *L) {
		if (!_lg_typecheck_SetMassData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Body::SetMassData(const b2MassData * data) function, expected prototype:\nvoid b2Body::SetMassData(const b2MassData * data)\nClass arguments details:\narg 1 ID = 24760292\n");
		}

		const b2MassData* data=(Luna< b2MassData >::check(L,2));

		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Body::SetMassData(const b2MassData *). Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		self->SetMassData(data);

		return 0;
	}

	// void b2Body::ResetMassData()
	static int _bind_ResetMassData(lua_State *L) {
		if (!_lg_typecheck_ResetMassData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Body::ResetMassData() function, expected prototype:\nvoid b2Body::ResetMassData()\nClass arguments details:\n");
		}


		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Body::ResetMassData(). Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		self->ResetMassData();

		return 0;
	}

	// b2Vec2 b2Body::GetWorldPoint(const b2Vec2 & localPoint) const
	static int _bind_GetWorldPoint(lua_State *L) {
		if (!_lg_typecheck_GetWorldPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2Body::GetWorldPoint(const b2Vec2 & localPoint) const function, expected prototype:\nb2Vec2 b2Body::GetWorldPoint(const b2Vec2 & localPoint) const\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		const b2Vec2* localPoint_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !localPoint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localPoint in b2Body::GetWorldPoint function");
		}
		const b2Vec2 & localPoint=*localPoint_ptr;

		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2Body::GetWorldPoint(const b2Vec2 &) const. Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetWorldPoint(localPoint);
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2Body::GetWorldVector(const b2Vec2 & localVector) const
	static int _bind_GetWorldVector(lua_State *L) {
		if (!_lg_typecheck_GetWorldVector(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2Body::GetWorldVector(const b2Vec2 & localVector) const function, expected prototype:\nb2Vec2 b2Body::GetWorldVector(const b2Vec2 & localVector) const\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		const b2Vec2* localVector_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !localVector_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localVector in b2Body::GetWorldVector function");
		}
		const b2Vec2 & localVector=*localVector_ptr;

		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2Body::GetWorldVector(const b2Vec2 &) const. Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetWorldVector(localVector);
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2Body::GetLocalPoint(const b2Vec2 & worldPoint) const
	static int _bind_GetLocalPoint(lua_State *L) {
		if (!_lg_typecheck_GetLocalPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2Body::GetLocalPoint(const b2Vec2 & worldPoint) const function, expected prototype:\nb2Vec2 b2Body::GetLocalPoint(const b2Vec2 & worldPoint) const\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		const b2Vec2* worldPoint_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !worldPoint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg worldPoint in b2Body::GetLocalPoint function");
		}
		const b2Vec2 & worldPoint=*worldPoint_ptr;

		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2Body::GetLocalPoint(const b2Vec2 &) const. Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetLocalPoint(worldPoint);
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2Body::GetLocalVector(const b2Vec2 & worldVector) const
	static int _bind_GetLocalVector(lua_State *L) {
		if (!_lg_typecheck_GetLocalVector(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2Body::GetLocalVector(const b2Vec2 & worldVector) const function, expected prototype:\nb2Vec2 b2Body::GetLocalVector(const b2Vec2 & worldVector) const\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		const b2Vec2* worldVector_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !worldVector_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg worldVector in b2Body::GetLocalVector function");
		}
		const b2Vec2 & worldVector=*worldVector_ptr;

		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2Body::GetLocalVector(const b2Vec2 &) const. Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetLocalVector(worldVector);
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2Body::GetLinearVelocityFromWorldPoint(const b2Vec2 & worldPoint) const
	static int _bind_GetLinearVelocityFromWorldPoint(lua_State *L) {
		if (!_lg_typecheck_GetLinearVelocityFromWorldPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2Body::GetLinearVelocityFromWorldPoint(const b2Vec2 & worldPoint) const function, expected prototype:\nb2Vec2 b2Body::GetLinearVelocityFromWorldPoint(const b2Vec2 & worldPoint) const\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		const b2Vec2* worldPoint_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !worldPoint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg worldPoint in b2Body::GetLinearVelocityFromWorldPoint function");
		}
		const b2Vec2 & worldPoint=*worldPoint_ptr;

		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2Body::GetLinearVelocityFromWorldPoint(const b2Vec2 &) const. Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetLinearVelocityFromWorldPoint(worldPoint);
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// b2Vec2 b2Body::GetLinearVelocityFromLocalPoint(const b2Vec2 & localPoint) const
	static int _bind_GetLinearVelocityFromLocalPoint(lua_State *L) {
		if (!_lg_typecheck_GetLinearVelocityFromLocalPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2Body::GetLinearVelocityFromLocalPoint(const b2Vec2 & localPoint) const function, expected prototype:\nb2Vec2 b2Body::GetLinearVelocityFromLocalPoint(const b2Vec2 & localPoint) const\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		const b2Vec2* localPoint_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !localPoint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localPoint in b2Body::GetLinearVelocityFromLocalPoint function");
		}
		const b2Vec2 & localPoint=*localPoint_ptr;

		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2Body::GetLinearVelocityFromLocalPoint(const b2Vec2 &) const. Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetLinearVelocityFromLocalPoint(localPoint);
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// float b2Body::GetLinearDamping() const
	static int _bind_GetLinearDamping(lua_State *L) {
		if (!_lg_typecheck_GetLinearDamping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Body::GetLinearDamping() const function, expected prototype:\nfloat b2Body::GetLinearDamping() const\nClass arguments details:\n");
		}


		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Body::GetLinearDamping() const. Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		float lret = self->GetLinearDamping();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2Body::SetLinearDamping(float linearDamping)
	static int _bind_SetLinearDamping(lua_State *L) {
		if (!_lg_typecheck_SetLinearDamping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Body::SetLinearDamping(float linearDamping) function, expected prototype:\nvoid b2Body::SetLinearDamping(float linearDamping)\nClass arguments details:\n");
		}

		float linearDamping=(float)lua_tonumber(L,2);

		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Body::SetLinearDamping(float). Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		self->SetLinearDamping(linearDamping);

		return 0;
	}

	// float b2Body::GetAngularDamping() const
	static int _bind_GetAngularDamping(lua_State *L) {
		if (!_lg_typecheck_GetAngularDamping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Body::GetAngularDamping() const function, expected prototype:\nfloat b2Body::GetAngularDamping() const\nClass arguments details:\n");
		}


		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Body::GetAngularDamping() const. Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		float lret = self->GetAngularDamping();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2Body::SetAngularDamping(float angularDamping)
	static int _bind_SetAngularDamping(lua_State *L) {
		if (!_lg_typecheck_SetAngularDamping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Body::SetAngularDamping(float angularDamping) function, expected prototype:\nvoid b2Body::SetAngularDamping(float angularDamping)\nClass arguments details:\n");
		}

		float angularDamping=(float)lua_tonumber(L,2);

		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Body::SetAngularDamping(float). Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		self->SetAngularDamping(angularDamping);

		return 0;
	}

	// float b2Body::GetGravityScale() const
	static int _bind_GetGravityScale(lua_State *L) {
		if (!_lg_typecheck_GetGravityScale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Body::GetGravityScale() const function, expected prototype:\nfloat b2Body::GetGravityScale() const\nClass arguments details:\n");
		}


		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Body::GetGravityScale() const. Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		float lret = self->GetGravityScale();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2Body::SetGravityScale(float scale)
	static int _bind_SetGravityScale(lua_State *L) {
		if (!_lg_typecheck_SetGravityScale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Body::SetGravityScale(float scale) function, expected prototype:\nvoid b2Body::SetGravityScale(float scale)\nClass arguments details:\n");
		}

		float scale=(float)lua_tonumber(L,2);

		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Body::SetGravityScale(float). Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		self->SetGravityScale(scale);

		return 0;
	}

	// void b2Body::SetType(b2BodyType type)
	static int _bind_SetType(lua_State *L) {
		if (!_lg_typecheck_SetType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Body::SetType(b2BodyType type) function, expected prototype:\nvoid b2Body::SetType(b2BodyType type)\nClass arguments details:\n");
		}

		b2BodyType type=(b2BodyType)lua_tointeger(L,2);

		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Body::SetType(b2BodyType). Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		self->SetType(type);

		return 0;
	}

	// b2BodyType b2Body::GetType() const
	static int _bind_GetType(lua_State *L) {
		if (!_lg_typecheck_GetType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2BodyType b2Body::GetType() const function, expected prototype:\nb2BodyType b2Body::GetType() const\nClass arguments details:\n");
		}


		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2BodyType b2Body::GetType() const. Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		b2BodyType lret = self->GetType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2Body::SetBullet(bool flag)
	static int _bind_SetBullet(lua_State *L) {
		if (!_lg_typecheck_SetBullet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Body::SetBullet(bool flag) function, expected prototype:\nvoid b2Body::SetBullet(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Body::SetBullet(bool). Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		self->SetBullet(flag);

		return 0;
	}

	// bool b2Body::IsBullet() const
	static int _bind_IsBullet(lua_State *L) {
		if (!_lg_typecheck_IsBullet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2Body::IsBullet() const function, expected prototype:\nbool b2Body::IsBullet() const\nClass arguments details:\n");
		}


		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2Body::IsBullet() const. Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		bool lret = self->IsBullet();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void b2Body::SetSleepingAllowed(bool flag)
	static int _bind_SetSleepingAllowed(lua_State *L) {
		if (!_lg_typecheck_SetSleepingAllowed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Body::SetSleepingAllowed(bool flag) function, expected prototype:\nvoid b2Body::SetSleepingAllowed(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Body::SetSleepingAllowed(bool). Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		self->SetSleepingAllowed(flag);

		return 0;
	}

	// bool b2Body::IsSleepingAllowed() const
	static int _bind_IsSleepingAllowed(lua_State *L) {
		if (!_lg_typecheck_IsSleepingAllowed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2Body::IsSleepingAllowed() const function, expected prototype:\nbool b2Body::IsSleepingAllowed() const\nClass arguments details:\n");
		}


		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2Body::IsSleepingAllowed() const. Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		bool lret = self->IsSleepingAllowed();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void b2Body::SetAwake(bool flag)
	static int _bind_SetAwake(lua_State *L) {
		if (!_lg_typecheck_SetAwake(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Body::SetAwake(bool flag) function, expected prototype:\nvoid b2Body::SetAwake(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Body::SetAwake(bool). Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		self->SetAwake(flag);

		return 0;
	}

	// bool b2Body::IsAwake() const
	static int _bind_IsAwake(lua_State *L) {
		if (!_lg_typecheck_IsAwake(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2Body::IsAwake() const function, expected prototype:\nbool b2Body::IsAwake() const\nClass arguments details:\n");
		}


		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2Body::IsAwake() const. Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		bool lret = self->IsAwake();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void b2Body::SetActive(bool flag)
	static int _bind_SetActive(lua_State *L) {
		if (!_lg_typecheck_SetActive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Body::SetActive(bool flag) function, expected prototype:\nvoid b2Body::SetActive(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Body::SetActive(bool). Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		self->SetActive(flag);

		return 0;
	}

	// bool b2Body::IsActive() const
	static int _bind_IsActive(lua_State *L) {
		if (!_lg_typecheck_IsActive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2Body::IsActive() const function, expected prototype:\nbool b2Body::IsActive() const\nClass arguments details:\n");
		}


		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2Body::IsActive() const. Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		bool lret = self->IsActive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void b2Body::SetFixedRotation(bool flag)
	static int _bind_SetFixedRotation(lua_State *L) {
		if (!_lg_typecheck_SetFixedRotation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Body::SetFixedRotation(bool flag) function, expected prototype:\nvoid b2Body::SetFixedRotation(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Body::SetFixedRotation(bool). Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		self->SetFixedRotation(flag);

		return 0;
	}

	// bool b2Body::IsFixedRotation() const
	static int _bind_IsFixedRotation(lua_State *L) {
		if (!_lg_typecheck_IsFixedRotation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2Body::IsFixedRotation() const function, expected prototype:\nbool b2Body::IsFixedRotation() const\nClass arguments details:\n");
		}


		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2Body::IsFixedRotation() const. Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		bool lret = self->IsFixedRotation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// b2Fixture * b2Body::GetFixtureList()
	static int _bind_GetFixtureList_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetFixtureList_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Fixture * b2Body::GetFixtureList() function, expected prototype:\nb2Fixture * b2Body::GetFixtureList()\nClass arguments details:\n");
		}


		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Fixture * b2Body::GetFixtureList(). Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		b2Fixture * lret = self->GetFixtureList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Fixture >::push(L,lret,false);

		return 1;
	}

	// const b2Fixture * b2Body::GetFixtureList() const
	static int _bind_GetFixtureList_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetFixtureList_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Fixture * b2Body::GetFixtureList() const function, expected prototype:\nconst b2Fixture * b2Body::GetFixtureList() const\nClass arguments details:\n");
		}


		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Fixture * b2Body::GetFixtureList() const. Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		const b2Fixture * lret = self->GetFixtureList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Fixture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for b2Body::GetFixtureList
	static int _bind_GetFixtureList(lua_State *L) {
		if (_lg_typecheck_GetFixtureList_overload_1(L)) return _bind_GetFixtureList_overload_1(L);
		if (_lg_typecheck_GetFixtureList_overload_2(L)) return _bind_GetFixtureList_overload_2(L);

		luaL_error(L, "error in function GetFixtureList, cannot match any of the overloads for function GetFixtureList:\n  GetFixtureList()\n  GetFixtureList()\n");
		return 0;
	}

	// b2JointEdge * b2Body::GetJointList()
	static int _bind_GetJointList_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetJointList_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2JointEdge * b2Body::GetJointList() function, expected prototype:\nb2JointEdge * b2Body::GetJointList()\nClass arguments details:\n");
		}


		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2JointEdge * b2Body::GetJointList(). Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		b2JointEdge * lret = self->GetJointList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2JointEdge >::push(L,lret,false);

		return 1;
	}

	// const b2JointEdge * b2Body::GetJointList() const
	static int _bind_GetJointList_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetJointList_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2JointEdge * b2Body::GetJointList() const function, expected prototype:\nconst b2JointEdge * b2Body::GetJointList() const\nClass arguments details:\n");
		}


		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2JointEdge * b2Body::GetJointList() const. Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		const b2JointEdge * lret = self->GetJointList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2JointEdge >::push(L,lret,false);

		return 1;
	}

	// Overload binder for b2Body::GetJointList
	static int _bind_GetJointList(lua_State *L) {
		if (_lg_typecheck_GetJointList_overload_1(L)) return _bind_GetJointList_overload_1(L);
		if (_lg_typecheck_GetJointList_overload_2(L)) return _bind_GetJointList_overload_2(L);

		luaL_error(L, "error in function GetJointList, cannot match any of the overloads for function GetJointList:\n  GetJointList()\n  GetJointList()\n");
		return 0;
	}

	// b2ContactEdge * b2Body::GetContactList()
	static int _bind_GetContactList_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetContactList_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2ContactEdge * b2Body::GetContactList() function, expected prototype:\nb2ContactEdge * b2Body::GetContactList()\nClass arguments details:\n");
		}


		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2ContactEdge * b2Body::GetContactList(). Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		b2ContactEdge * lret = self->GetContactList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2ContactEdge >::push(L,lret,false);

		return 1;
	}

	// const b2ContactEdge * b2Body::GetContactList() const
	static int _bind_GetContactList_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetContactList_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2ContactEdge * b2Body::GetContactList() const function, expected prototype:\nconst b2ContactEdge * b2Body::GetContactList() const\nClass arguments details:\n");
		}


		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2ContactEdge * b2Body::GetContactList() const. Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		const b2ContactEdge * lret = self->GetContactList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2ContactEdge >::push(L,lret,false);

		return 1;
	}

	// Overload binder for b2Body::GetContactList
	static int _bind_GetContactList(lua_State *L) {
		if (_lg_typecheck_GetContactList_overload_1(L)) return _bind_GetContactList_overload_1(L);
		if (_lg_typecheck_GetContactList_overload_2(L)) return _bind_GetContactList_overload_2(L);

		luaL_error(L, "error in function GetContactList, cannot match any of the overloads for function GetContactList:\n  GetContactList()\n  GetContactList()\n");
		return 0;
	}

	// b2Body * b2Body::GetNext()
	static int _bind_GetNext_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetNext_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Body * b2Body::GetNext() function, expected prototype:\nb2Body * b2Body::GetNext()\nClass arguments details:\n");
		}


		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Body * b2Body::GetNext(). Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		b2Body * lret = self->GetNext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Body >::push(L,lret,false);

		return 1;
	}

	// const b2Body * b2Body::GetNext() const
	static int _bind_GetNext_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetNext_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Body * b2Body::GetNext() const function, expected prototype:\nconst b2Body * b2Body::GetNext() const\nClass arguments details:\n");
		}


		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Body * b2Body::GetNext() const. Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		const b2Body * lret = self->GetNext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Body >::push(L,lret,false);

		return 1;
	}

	// Overload binder for b2Body::GetNext
	static int _bind_GetNext(lua_State *L) {
		if (_lg_typecheck_GetNext_overload_1(L)) return _bind_GetNext_overload_1(L);
		if (_lg_typecheck_GetNext_overload_2(L)) return _bind_GetNext_overload_2(L);

		luaL_error(L, "error in function GetNext, cannot match any of the overloads for function GetNext:\n  GetNext()\n  GetNext()\n");
		return 0;
	}

	// void * b2Body::GetUserData() const
	static int _bind_GetUserData(lua_State *L) {
		if (!_lg_typecheck_GetUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * b2Body::GetUserData() const function, expected prototype:\nvoid * b2Body::GetUserData() const\nClass arguments details:\n");
		}


		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * b2Body::GetUserData() const. Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		void * lret = self->GetUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void b2Body::SetUserData(void * data)
	static int _bind_SetUserData(lua_State *L) {
		if (!_lg_typecheck_SetUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Body::SetUserData(void * data) function, expected prototype:\nvoid b2Body::SetUserData(void * data)\nClass arguments details:\n");
		}

		void* data=(Luna< void >::check(L,2));

		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Body::SetUserData(void *). Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		self->SetUserData(data);

		return 0;
	}

	// b2World * b2Body::GetWorld()
	static int _bind_GetWorld_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetWorld_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2World * b2Body::GetWorld() function, expected prototype:\nb2World * b2Body::GetWorld()\nClass arguments details:\n");
		}


		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2World * b2Body::GetWorld(). Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		b2World * lret = self->GetWorld();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2World >::push(L,lret,false);

		return 1;
	}

	// const b2World * b2Body::GetWorld() const
	static int _bind_GetWorld_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetWorld_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2World * b2Body::GetWorld() const function, expected prototype:\nconst b2World * b2Body::GetWorld() const\nClass arguments details:\n");
		}


		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2World * b2Body::GetWorld() const. Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		const b2World * lret = self->GetWorld();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2World >::push(L,lret,false);

		return 1;
	}

	// Overload binder for b2Body::GetWorld
	static int _bind_GetWorld(lua_State *L) {
		if (_lg_typecheck_GetWorld_overload_1(L)) return _bind_GetWorld_overload_1(L);
		if (_lg_typecheck_GetWorld_overload_2(L)) return _bind_GetWorld_overload_2(L);

		luaL_error(L, "error in function GetWorld, cannot match any of the overloads for function GetWorld:\n  GetWorld()\n  GetWorld()\n");
		return 0;
	}

	// void b2Body::Dump()
	static int _bind_Dump(lua_State *L) {
		if (!_lg_typecheck_Dump(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Body::Dump() function, expected prototype:\nvoid b2Body::Dump()\nClass arguments details:\n");
		}


		b2Body* self=(Luna< b2Body >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Body::Dump(). Got : '%s'",typeid(Luna< b2Body >::check(L,1)).name());
		}
		self->Dump();

		return 0;
	}


	// Operator binds:

};

b2Body* LunaTraits< b2Body >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2Body >::_bind_dtor(b2Body* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< b2Body >::className[] = "b2Body";
const char LunaTraits< b2Body >::fullName[] = "b2Body";
const char LunaTraits< b2Body >::moduleName[] = "box2d";
const char* LunaTraits< b2Body >::parents[] = {0};
const int LunaTraits< b2Body >::hash = 53908778;
const int LunaTraits< b2Body >::uniqueIDs[] = {53908778,0};

luna_RegType LunaTraits< b2Body >::methods[] = {
	{"CreateFixture", &luna_wrapper_b2Body::_bind_CreateFixture},
	{"DestroyFixture", &luna_wrapper_b2Body::_bind_DestroyFixture},
	{"SetTransform", &luna_wrapper_b2Body::_bind_SetTransform},
	{"GetTransform", &luna_wrapper_b2Body::_bind_GetTransform},
	{"GetPosition", &luna_wrapper_b2Body::_bind_GetPosition},
	{"GetAngle", &luna_wrapper_b2Body::_bind_GetAngle},
	{"GetWorldCenter", &luna_wrapper_b2Body::_bind_GetWorldCenter},
	{"GetLocalCenter", &luna_wrapper_b2Body::_bind_GetLocalCenter},
	{"SetLinearVelocity", &luna_wrapper_b2Body::_bind_SetLinearVelocity},
	{"GetLinearVelocity", &luna_wrapper_b2Body::_bind_GetLinearVelocity},
	{"SetAngularVelocity", &luna_wrapper_b2Body::_bind_SetAngularVelocity},
	{"GetAngularVelocity", &luna_wrapper_b2Body::_bind_GetAngularVelocity},
	{"ApplyForce", &luna_wrapper_b2Body::_bind_ApplyForce},
	{"ApplyForceToCenter", &luna_wrapper_b2Body::_bind_ApplyForceToCenter},
	{"ApplyTorque", &luna_wrapper_b2Body::_bind_ApplyTorque},
	{"ApplyLinearImpulse", &luna_wrapper_b2Body::_bind_ApplyLinearImpulse},
	{"ApplyAngularImpulse", &luna_wrapper_b2Body::_bind_ApplyAngularImpulse},
	{"GetMass", &luna_wrapper_b2Body::_bind_GetMass},
	{"GetInertia", &luna_wrapper_b2Body::_bind_GetInertia},
	{"GetMassData", &luna_wrapper_b2Body::_bind_GetMassData},
	{"SetMassData", &luna_wrapper_b2Body::_bind_SetMassData},
	{"ResetMassData", &luna_wrapper_b2Body::_bind_ResetMassData},
	{"GetWorldPoint", &luna_wrapper_b2Body::_bind_GetWorldPoint},
	{"GetWorldVector", &luna_wrapper_b2Body::_bind_GetWorldVector},
	{"GetLocalPoint", &luna_wrapper_b2Body::_bind_GetLocalPoint},
	{"GetLocalVector", &luna_wrapper_b2Body::_bind_GetLocalVector},
	{"GetLinearVelocityFromWorldPoint", &luna_wrapper_b2Body::_bind_GetLinearVelocityFromWorldPoint},
	{"GetLinearVelocityFromLocalPoint", &luna_wrapper_b2Body::_bind_GetLinearVelocityFromLocalPoint},
	{"GetLinearDamping", &luna_wrapper_b2Body::_bind_GetLinearDamping},
	{"SetLinearDamping", &luna_wrapper_b2Body::_bind_SetLinearDamping},
	{"GetAngularDamping", &luna_wrapper_b2Body::_bind_GetAngularDamping},
	{"SetAngularDamping", &luna_wrapper_b2Body::_bind_SetAngularDamping},
	{"GetGravityScale", &luna_wrapper_b2Body::_bind_GetGravityScale},
	{"SetGravityScale", &luna_wrapper_b2Body::_bind_SetGravityScale},
	{"SetType", &luna_wrapper_b2Body::_bind_SetType},
	{"GetType", &luna_wrapper_b2Body::_bind_GetType},
	{"SetBullet", &luna_wrapper_b2Body::_bind_SetBullet},
	{"IsBullet", &luna_wrapper_b2Body::_bind_IsBullet},
	{"SetSleepingAllowed", &luna_wrapper_b2Body::_bind_SetSleepingAllowed},
	{"IsSleepingAllowed", &luna_wrapper_b2Body::_bind_IsSleepingAllowed},
	{"SetAwake", &luna_wrapper_b2Body::_bind_SetAwake},
	{"IsAwake", &luna_wrapper_b2Body::_bind_IsAwake},
	{"SetActive", &luna_wrapper_b2Body::_bind_SetActive},
	{"IsActive", &luna_wrapper_b2Body::_bind_IsActive},
	{"SetFixedRotation", &luna_wrapper_b2Body::_bind_SetFixedRotation},
	{"IsFixedRotation", &luna_wrapper_b2Body::_bind_IsFixedRotation},
	{"GetFixtureList", &luna_wrapper_b2Body::_bind_GetFixtureList},
	{"GetJointList", &luna_wrapper_b2Body::_bind_GetJointList},
	{"GetContactList", &luna_wrapper_b2Body::_bind_GetContactList},
	{"GetNext", &luna_wrapper_b2Body::_bind_GetNext},
	{"GetUserData", &luna_wrapper_b2Body::_bind_GetUserData},
	{"SetUserData", &luna_wrapper_b2Body::_bind_SetUserData},
	{"GetWorld", &luna_wrapper_b2Body::_bind_GetWorld},
	{"Dump", &luna_wrapper_b2Body::_bind_Dump},
	{"dynCast", &luna_wrapper_b2Body::_bind_dynCast},
	{"__eq", &luna_wrapper_b2Body::_bind___eq},
	{"fromVoid", &luna_wrapper_b2Body::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2Body::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2Body >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2Body >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

class luna_wrapper_b2World {
public:
	typedef Luna< b2World > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,90579098) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2World*)");
		}

		b2World* rhs =(Luna< b2World >::check(L,2));
		b2World* self=(Luna< b2World >::check(L,1));
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

		b2World* self= (b2World*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2World >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,90579098) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< b2World >::check(L,1));
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

		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2World");
		
		return luna_dynamicCast(L,converters,"b2World",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,54494886) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SetDestructionListener(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,39920564)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetContactFilter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,7470542)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetContactListener(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,55252344)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDebugDraw(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,53971148)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CreateBody(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,96360882)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DestroyBody(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,53908778)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CreateJoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,22467414)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DestroyJoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,78564754)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Step(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ClearForces(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DrawDebugData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_QueryAABB(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,67660073)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,53833672) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RayCast(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,29620235)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,54494886) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBodyList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBodyList_overload_2(lua_State *L) {
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

	inline static bool _lg_typecheck_SetAllowSleeping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAllowSleeping(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetWarmStarting(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetWarmStarting(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetContinuousPhysics(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetContinuousPhysics(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetSubStepping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSubStepping(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetProxyCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBodyCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetJointCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetContactCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTreeHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTreeBalance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTreeQuality(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetGravity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetGravity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsLocked(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAutoClearForces(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAutoClearForces(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetContactManager(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetProfile(lua_State *L) {
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
	// b2World::b2World(const b2Vec2 & gravity)
	static b2World* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2World::b2World(const b2Vec2 & gravity) function, expected prototype:\nb2World::b2World(const b2Vec2 & gravity)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		const b2Vec2* gravity_ptr=(Luna< b2Vec2 >::check(L,1));
		if( !gravity_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg gravity in b2World::b2World function");
		}
		const b2Vec2 & gravity=*gravity_ptr;

		return new b2World(gravity);
	}


	// Function binds:
	// void b2World::SetDestructionListener(b2DestructionListener * listener)
	static int _bind_SetDestructionListener(lua_State *L) {
		if (!_lg_typecheck_SetDestructionListener(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2World::SetDestructionListener(b2DestructionListener * listener) function, expected prototype:\nvoid b2World::SetDestructionListener(b2DestructionListener * listener)\nClass arguments details:\narg 1 ID = 39920564\n");
		}

		b2DestructionListener* listener=(Luna< b2DestructionListener >::check(L,2));

		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2World::SetDestructionListener(b2DestructionListener *). Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		self->SetDestructionListener(listener);

		return 0;
	}

	// void b2World::SetContactFilter(b2ContactFilter * filter)
	static int _bind_SetContactFilter(lua_State *L) {
		if (!_lg_typecheck_SetContactFilter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2World::SetContactFilter(b2ContactFilter * filter) function, expected prototype:\nvoid b2World::SetContactFilter(b2ContactFilter * filter)\nClass arguments details:\narg 1 ID = 7470542\n");
		}

		b2ContactFilter* filter=(Luna< b2ContactFilter >::check(L,2));

		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2World::SetContactFilter(b2ContactFilter *). Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		self->SetContactFilter(filter);

		return 0;
	}

	// void b2World::SetContactListener(b2ContactListener * listener)
	static int _bind_SetContactListener(lua_State *L) {
		if (!_lg_typecheck_SetContactListener(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2World::SetContactListener(b2ContactListener * listener) function, expected prototype:\nvoid b2World::SetContactListener(b2ContactListener * listener)\nClass arguments details:\narg 1 ID = 55252344\n");
		}

		b2ContactListener* listener=(Luna< b2ContactListener >::check(L,2));

		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2World::SetContactListener(b2ContactListener *). Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		self->SetContactListener(listener);

		return 0;
	}

	// void b2World::SetDebugDraw(b2Draw * debugDraw)
	static int _bind_SetDebugDraw(lua_State *L) {
		if (!_lg_typecheck_SetDebugDraw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2World::SetDebugDraw(b2Draw * debugDraw) function, expected prototype:\nvoid b2World::SetDebugDraw(b2Draw * debugDraw)\nClass arguments details:\narg 1 ID = 53971148\n");
		}

		b2Draw* debugDraw=(Luna< b2Draw >::check(L,2));

		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2World::SetDebugDraw(b2Draw *). Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		self->SetDebugDraw(debugDraw);

		return 0;
	}

	// b2Body * b2World::CreateBody(const b2BodyDef * def)
	static int _bind_CreateBody(lua_State *L) {
		if (!_lg_typecheck_CreateBody(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Body * b2World::CreateBody(const b2BodyDef * def) function, expected prototype:\nb2Body * b2World::CreateBody(const b2BodyDef * def)\nClass arguments details:\narg 1 ID = 96360882\n");
		}

		const b2BodyDef* def=(Luna< b2BodyDef >::check(L,2));

		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Body * b2World::CreateBody(const b2BodyDef *). Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		b2Body * lret = self->CreateBody(def);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Body >::push(L,lret,false);

		return 1;
	}

	// void b2World::DestroyBody(b2Body * body)
	static int _bind_DestroyBody(lua_State *L) {
		if (!_lg_typecheck_DestroyBody(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2World::DestroyBody(b2Body * body) function, expected prototype:\nvoid b2World::DestroyBody(b2Body * body)\nClass arguments details:\narg 1 ID = 53908778\n");
		}

		b2Body* body=(Luna< b2Body >::check(L,2));

		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2World::DestroyBody(b2Body *). Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		self->DestroyBody(body);

		return 0;
	}

	// b2Joint * b2World::CreateJoint(const b2JointDef * def)
	static int _bind_CreateJoint(lua_State *L) {
		if (!_lg_typecheck_CreateJoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Joint * b2World::CreateJoint(const b2JointDef * def) function, expected prototype:\nb2Joint * b2World::CreateJoint(const b2JointDef * def)\nClass arguments details:\narg 1 ID = 22467414\n");
		}

		const b2JointDef* def=(Luna< b2JointDef >::check(L,2));

		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Joint * b2World::CreateJoint(const b2JointDef *). Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		b2Joint * lret = self->CreateJoint(def);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Joint >::push(L,lret,false);

		return 1;
	}

	// void b2World::DestroyJoint(b2Joint * joint)
	static int _bind_DestroyJoint(lua_State *L) {
		if (!_lg_typecheck_DestroyJoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2World::DestroyJoint(b2Joint * joint) function, expected prototype:\nvoid b2World::DestroyJoint(b2Joint * joint)\nClass arguments details:\narg 1 ID = 78564754\n");
		}

		b2Joint* joint=(Luna< b2Joint >::check(L,2));

		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2World::DestroyJoint(b2Joint *). Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		self->DestroyJoint(joint);

		return 0;
	}

	// void b2World::Step(float timeStep, signed int velocityIterations, signed int positionIterations)
	static int _bind_Step(lua_State *L) {
		if (!_lg_typecheck_Step(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2World::Step(float timeStep, signed int velocityIterations, signed int positionIterations) function, expected prototype:\nvoid b2World::Step(float timeStep, signed int velocityIterations, signed int positionIterations)\nClass arguments details:\n");
		}

		float timeStep=(float)lua_tonumber(L,2);
		signed int velocityIterations=(signed int)lua_tointeger(L,3);
		signed int positionIterations=(signed int)lua_tointeger(L,4);

		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2World::Step(float, signed int, signed int). Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		self->Step(timeStep, velocityIterations, positionIterations);

		return 0;
	}

	// void b2World::ClearForces()
	static int _bind_ClearForces(lua_State *L) {
		if (!_lg_typecheck_ClearForces(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2World::ClearForces() function, expected prototype:\nvoid b2World::ClearForces()\nClass arguments details:\n");
		}


		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2World::ClearForces(). Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		self->ClearForces();

		return 0;
	}

	// void b2World::DrawDebugData()
	static int _bind_DrawDebugData(lua_State *L) {
		if (!_lg_typecheck_DrawDebugData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2World::DrawDebugData() function, expected prototype:\nvoid b2World::DrawDebugData()\nClass arguments details:\n");
		}


		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2World::DrawDebugData(). Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		self->DrawDebugData();

		return 0;
	}

	// void b2World::QueryAABB(b2QueryCallback * callback, const b2AABB & aabb) const
	static int _bind_QueryAABB(lua_State *L) {
		if (!_lg_typecheck_QueryAABB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2World::QueryAABB(b2QueryCallback * callback, const b2AABB & aabb) const function, expected prototype:\nvoid b2World::QueryAABB(b2QueryCallback * callback, const b2AABB & aabb) const\nClass arguments details:\narg 1 ID = 67660073\narg 2 ID = 53833672\n");
		}

		b2QueryCallback* callback=(Luna< b2QueryCallback >::check(L,2));
		const b2AABB* aabb_ptr=(Luna< b2AABB >::check(L,3));
		if( !aabb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabb in b2World::QueryAABB function");
		}
		const b2AABB & aabb=*aabb_ptr;

		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2World::QueryAABB(b2QueryCallback *, const b2AABB &) const. Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		self->QueryAABB(callback, aabb);

		return 0;
	}

	// void b2World::RayCast(b2RayCastCallback * callback, const b2Vec2 & point1, const b2Vec2 & point2) const
	static int _bind_RayCast(lua_State *L) {
		if (!_lg_typecheck_RayCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2World::RayCast(b2RayCastCallback * callback, const b2Vec2 & point1, const b2Vec2 & point2) const function, expected prototype:\nvoid b2World::RayCast(b2RayCastCallback * callback, const b2Vec2 & point1, const b2Vec2 & point2) const\nClass arguments details:\narg 1 ID = 29620235\narg 2 ID = 54494886\narg 3 ID = 54494886\n");
		}

		b2RayCastCallback* callback=(Luna< b2RayCastCallback >::check(L,2));
		const b2Vec2* point1_ptr=(Luna< b2Vec2 >::check(L,3));
		if( !point1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point1 in b2World::RayCast function");
		}
		const b2Vec2 & point1=*point1_ptr;
		const b2Vec2* point2_ptr=(Luna< b2Vec2 >::check(L,4));
		if( !point2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point2 in b2World::RayCast function");
		}
		const b2Vec2 & point2=*point2_ptr;

		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2World::RayCast(b2RayCastCallback *, const b2Vec2 &, const b2Vec2 &) const. Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		self->RayCast(callback, point1, point2);

		return 0;
	}

	// b2Body * b2World::GetBodyList()
	static int _bind_GetBodyList_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetBodyList_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Body * b2World::GetBodyList() function, expected prototype:\nb2Body * b2World::GetBodyList()\nClass arguments details:\n");
		}


		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Body * b2World::GetBodyList(). Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		b2Body * lret = self->GetBodyList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Body >::push(L,lret,false);

		return 1;
	}

	// const b2Body * b2World::GetBodyList() const
	static int _bind_GetBodyList_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetBodyList_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Body * b2World::GetBodyList() const function, expected prototype:\nconst b2Body * b2World::GetBodyList() const\nClass arguments details:\n");
		}


		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Body * b2World::GetBodyList() const. Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		const b2Body * lret = self->GetBodyList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Body >::push(L,lret,false);

		return 1;
	}

	// Overload binder for b2World::GetBodyList
	static int _bind_GetBodyList(lua_State *L) {
		if (_lg_typecheck_GetBodyList_overload_1(L)) return _bind_GetBodyList_overload_1(L);
		if (_lg_typecheck_GetBodyList_overload_2(L)) return _bind_GetBodyList_overload_2(L);

		luaL_error(L, "error in function GetBodyList, cannot match any of the overloads for function GetBodyList:\n  GetBodyList()\n  GetBodyList()\n");
		return 0;
	}

	// b2Joint * b2World::GetJointList()
	static int _bind_GetJointList_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetJointList_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Joint * b2World::GetJointList() function, expected prototype:\nb2Joint * b2World::GetJointList()\nClass arguments details:\n");
		}


		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Joint * b2World::GetJointList(). Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		b2Joint * lret = self->GetJointList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Joint >::push(L,lret,false);

		return 1;
	}

	// const b2Joint * b2World::GetJointList() const
	static int _bind_GetJointList_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetJointList_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Joint * b2World::GetJointList() const function, expected prototype:\nconst b2Joint * b2World::GetJointList() const\nClass arguments details:\n");
		}


		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Joint * b2World::GetJointList() const. Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		const b2Joint * lret = self->GetJointList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Joint >::push(L,lret,false);

		return 1;
	}

	// Overload binder for b2World::GetJointList
	static int _bind_GetJointList(lua_State *L) {
		if (_lg_typecheck_GetJointList_overload_1(L)) return _bind_GetJointList_overload_1(L);
		if (_lg_typecheck_GetJointList_overload_2(L)) return _bind_GetJointList_overload_2(L);

		luaL_error(L, "error in function GetJointList, cannot match any of the overloads for function GetJointList:\n  GetJointList()\n  GetJointList()\n");
		return 0;
	}

	// b2Contact * b2World::GetContactList()
	static int _bind_GetContactList_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetContactList_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Contact * b2World::GetContactList() function, expected prototype:\nb2Contact * b2World::GetContactList()\nClass arguments details:\n");
		}


		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Contact * b2World::GetContactList(). Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		b2Contact * lret = self->GetContactList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Contact >::push(L,lret,false);

		return 1;
	}

	// const b2Contact * b2World::GetContactList() const
	static int _bind_GetContactList_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetContactList_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Contact * b2World::GetContactList() const function, expected prototype:\nconst b2Contact * b2World::GetContactList() const\nClass arguments details:\n");
		}


		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Contact * b2World::GetContactList() const. Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		const b2Contact * lret = self->GetContactList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Contact >::push(L,lret,false);

		return 1;
	}

	// Overload binder for b2World::GetContactList
	static int _bind_GetContactList(lua_State *L) {
		if (_lg_typecheck_GetContactList_overload_1(L)) return _bind_GetContactList_overload_1(L);
		if (_lg_typecheck_GetContactList_overload_2(L)) return _bind_GetContactList_overload_2(L);

		luaL_error(L, "error in function GetContactList, cannot match any of the overloads for function GetContactList:\n  GetContactList()\n  GetContactList()\n");
		return 0;
	}

	// void b2World::SetAllowSleeping(bool flag)
	static int _bind_SetAllowSleeping(lua_State *L) {
		if (!_lg_typecheck_SetAllowSleeping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2World::SetAllowSleeping(bool flag) function, expected prototype:\nvoid b2World::SetAllowSleeping(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2World::SetAllowSleeping(bool). Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		self->SetAllowSleeping(flag);

		return 0;
	}

	// bool b2World::GetAllowSleeping() const
	static int _bind_GetAllowSleeping(lua_State *L) {
		if (!_lg_typecheck_GetAllowSleeping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2World::GetAllowSleeping() const function, expected prototype:\nbool b2World::GetAllowSleeping() const\nClass arguments details:\n");
		}


		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2World::GetAllowSleeping() const. Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		bool lret = self->GetAllowSleeping();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void b2World::SetWarmStarting(bool flag)
	static int _bind_SetWarmStarting(lua_State *L) {
		if (!_lg_typecheck_SetWarmStarting(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2World::SetWarmStarting(bool flag) function, expected prototype:\nvoid b2World::SetWarmStarting(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2World::SetWarmStarting(bool). Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		self->SetWarmStarting(flag);

		return 0;
	}

	// bool b2World::GetWarmStarting() const
	static int _bind_GetWarmStarting(lua_State *L) {
		if (!_lg_typecheck_GetWarmStarting(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2World::GetWarmStarting() const function, expected prototype:\nbool b2World::GetWarmStarting() const\nClass arguments details:\n");
		}


		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2World::GetWarmStarting() const. Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		bool lret = self->GetWarmStarting();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void b2World::SetContinuousPhysics(bool flag)
	static int _bind_SetContinuousPhysics(lua_State *L) {
		if (!_lg_typecheck_SetContinuousPhysics(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2World::SetContinuousPhysics(bool flag) function, expected prototype:\nvoid b2World::SetContinuousPhysics(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2World::SetContinuousPhysics(bool). Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		self->SetContinuousPhysics(flag);

		return 0;
	}

	// bool b2World::GetContinuousPhysics() const
	static int _bind_GetContinuousPhysics(lua_State *L) {
		if (!_lg_typecheck_GetContinuousPhysics(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2World::GetContinuousPhysics() const function, expected prototype:\nbool b2World::GetContinuousPhysics() const\nClass arguments details:\n");
		}


		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2World::GetContinuousPhysics() const. Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		bool lret = self->GetContinuousPhysics();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void b2World::SetSubStepping(bool flag)
	static int _bind_SetSubStepping(lua_State *L) {
		if (!_lg_typecheck_SetSubStepping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2World::SetSubStepping(bool flag) function, expected prototype:\nvoid b2World::SetSubStepping(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2World::SetSubStepping(bool). Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		self->SetSubStepping(flag);

		return 0;
	}

	// bool b2World::GetSubStepping() const
	static int _bind_GetSubStepping(lua_State *L) {
		if (!_lg_typecheck_GetSubStepping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2World::GetSubStepping() const function, expected prototype:\nbool b2World::GetSubStepping() const\nClass arguments details:\n");
		}


		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2World::GetSubStepping() const. Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		bool lret = self->GetSubStepping();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// signed int b2World::GetProxyCount() const
	static int _bind_GetProxyCount(lua_State *L) {
		if (!_lg_typecheck_GetProxyCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2World::GetProxyCount() const function, expected prototype:\nsigned int b2World::GetProxyCount() const\nClass arguments details:\n");
		}


		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2World::GetProxyCount() const. Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		signed int lret = self->GetProxyCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed int b2World::GetBodyCount() const
	static int _bind_GetBodyCount(lua_State *L) {
		if (!_lg_typecheck_GetBodyCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2World::GetBodyCount() const function, expected prototype:\nsigned int b2World::GetBodyCount() const\nClass arguments details:\n");
		}


		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2World::GetBodyCount() const. Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		signed int lret = self->GetBodyCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed int b2World::GetJointCount() const
	static int _bind_GetJointCount(lua_State *L) {
		if (!_lg_typecheck_GetJointCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2World::GetJointCount() const function, expected prototype:\nsigned int b2World::GetJointCount() const\nClass arguments details:\n");
		}


		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2World::GetJointCount() const. Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		signed int lret = self->GetJointCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed int b2World::GetContactCount() const
	static int _bind_GetContactCount(lua_State *L) {
		if (!_lg_typecheck_GetContactCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2World::GetContactCount() const function, expected prototype:\nsigned int b2World::GetContactCount() const\nClass arguments details:\n");
		}


		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2World::GetContactCount() const. Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		signed int lret = self->GetContactCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed int b2World::GetTreeHeight() const
	static int _bind_GetTreeHeight(lua_State *L) {
		if (!_lg_typecheck_GetTreeHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2World::GetTreeHeight() const function, expected prototype:\nsigned int b2World::GetTreeHeight() const\nClass arguments details:\n");
		}


		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2World::GetTreeHeight() const. Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		signed int lret = self->GetTreeHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed int b2World::GetTreeBalance() const
	static int _bind_GetTreeBalance(lua_State *L) {
		if (!_lg_typecheck_GetTreeBalance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2World::GetTreeBalance() const function, expected prototype:\nsigned int b2World::GetTreeBalance() const\nClass arguments details:\n");
		}


		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2World::GetTreeBalance() const. Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		signed int lret = self->GetTreeBalance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2World::GetTreeQuality() const
	static int _bind_GetTreeQuality(lua_State *L) {
		if (!_lg_typecheck_GetTreeQuality(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2World::GetTreeQuality() const function, expected prototype:\nfloat b2World::GetTreeQuality() const\nClass arguments details:\n");
		}


		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2World::GetTreeQuality() const. Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		float lret = self->GetTreeQuality();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2World::SetGravity(const b2Vec2 & gravity)
	static int _bind_SetGravity(lua_State *L) {
		if (!_lg_typecheck_SetGravity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2World::SetGravity(const b2Vec2 & gravity) function, expected prototype:\nvoid b2World::SetGravity(const b2Vec2 & gravity)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		const b2Vec2* gravity_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !gravity_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg gravity in b2World::SetGravity function");
		}
		const b2Vec2 & gravity=*gravity_ptr;

		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2World::SetGravity(const b2Vec2 &). Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		self->SetGravity(gravity);

		return 0;
	}

	// b2Vec2 b2World::GetGravity() const
	static int _bind_GetGravity(lua_State *L) {
		if (!_lg_typecheck_GetGravity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2World::GetGravity() const function, expected prototype:\nb2Vec2 b2World::GetGravity() const\nClass arguments details:\n");
		}


		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2World::GetGravity() const. Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->GetGravity();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// bool b2World::IsLocked() const
	static int _bind_IsLocked(lua_State *L) {
		if (!_lg_typecheck_IsLocked(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2World::IsLocked() const function, expected prototype:\nbool b2World::IsLocked() const\nClass arguments details:\n");
		}


		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2World::IsLocked() const. Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		bool lret = self->IsLocked();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void b2World::SetAutoClearForces(bool flag)
	static int _bind_SetAutoClearForces(lua_State *L) {
		if (!_lg_typecheck_SetAutoClearForces(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2World::SetAutoClearForces(bool flag) function, expected prototype:\nvoid b2World::SetAutoClearForces(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2World::SetAutoClearForces(bool). Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		self->SetAutoClearForces(flag);

		return 0;
	}

	// bool b2World::GetAutoClearForces() const
	static int _bind_GetAutoClearForces(lua_State *L) {
		if (!_lg_typecheck_GetAutoClearForces(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2World::GetAutoClearForces() const function, expected prototype:\nbool b2World::GetAutoClearForces() const\nClass arguments details:\n");
		}


		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2World::GetAutoClearForces() const. Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		bool lret = self->GetAutoClearForces();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const b2ContactManager & b2World::GetContactManager() const
	static int _bind_GetContactManager(lua_State *L) {
		if (!_lg_typecheck_GetContactManager(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2ContactManager & b2World::GetContactManager() const function, expected prototype:\nconst b2ContactManager & b2World::GetContactManager() const\nClass arguments details:\n");
		}


		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2ContactManager & b2World::GetContactManager() const. Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		const b2ContactManager* lret = &self->GetContactManager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2ContactManager >::push(L,lret,false);

		return 1;
	}

	// const b2Profile & b2World::GetProfile() const
	static int _bind_GetProfile(lua_State *L) {
		if (!_lg_typecheck_GetProfile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2Profile & b2World::GetProfile() const function, expected prototype:\nconst b2Profile & b2World::GetProfile() const\nClass arguments details:\n");
		}


		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2Profile & b2World::GetProfile() const. Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		const b2Profile* lret = &self->GetProfile();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Profile >::push(L,lret,false);

		return 1;
	}

	// void b2World::Dump()
	static int _bind_Dump(lua_State *L) {
		if (!_lg_typecheck_Dump(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2World::Dump() function, expected prototype:\nvoid b2World::Dump()\nClass arguments details:\n");
		}


		b2World* self=(Luna< b2World >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2World::Dump(). Got : '%s'",typeid(Luna< b2World >::check(L,1)).name());
		}
		self->Dump();

		return 0;
	}


	// Operator binds:

};

b2World* LunaTraits< b2World >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2World::_bind_ctor(L);
}

void LunaTraits< b2World >::_bind_dtor(b2World* obj) {
	delete obj;
}

const char LunaTraits< b2World >::className[] = "b2World";
const char LunaTraits< b2World >::fullName[] = "b2World";
const char LunaTraits< b2World >::moduleName[] = "box2d";
const char* LunaTraits< b2World >::parents[] = {0};
const int LunaTraits< b2World >::hash = 90579098;
const int LunaTraits< b2World >::uniqueIDs[] = {90579098,0};

luna_RegType LunaTraits< b2World >::methods[] = {
	{"SetDestructionListener", &luna_wrapper_b2World::_bind_SetDestructionListener},
	{"SetContactFilter", &luna_wrapper_b2World::_bind_SetContactFilter},
	{"SetContactListener", &luna_wrapper_b2World::_bind_SetContactListener},
	{"SetDebugDraw", &luna_wrapper_b2World::_bind_SetDebugDraw},
	{"CreateBody", &luna_wrapper_b2World::_bind_CreateBody},
	{"DestroyBody", &luna_wrapper_b2World::_bind_DestroyBody},
	{"CreateJoint", &luna_wrapper_b2World::_bind_CreateJoint},
	{"DestroyJoint", &luna_wrapper_b2World::_bind_DestroyJoint},
	{"Step", &luna_wrapper_b2World::_bind_Step},
	{"ClearForces", &luna_wrapper_b2World::_bind_ClearForces},
	{"DrawDebugData", &luna_wrapper_b2World::_bind_DrawDebugData},
	{"QueryAABB", &luna_wrapper_b2World::_bind_QueryAABB},
	{"RayCast", &luna_wrapper_b2World::_bind_RayCast},
	{"GetBodyList", &luna_wrapper_b2World::_bind_GetBodyList},
	{"GetJointList", &luna_wrapper_b2World::_bind_GetJointList},
	{"GetContactList", &luna_wrapper_b2World::_bind_GetContactList},
	{"SetAllowSleeping", &luna_wrapper_b2World::_bind_SetAllowSleeping},
	{"GetAllowSleeping", &luna_wrapper_b2World::_bind_GetAllowSleeping},
	{"SetWarmStarting", &luna_wrapper_b2World::_bind_SetWarmStarting},
	{"GetWarmStarting", &luna_wrapper_b2World::_bind_GetWarmStarting},
	{"SetContinuousPhysics", &luna_wrapper_b2World::_bind_SetContinuousPhysics},
	{"GetContinuousPhysics", &luna_wrapper_b2World::_bind_GetContinuousPhysics},
	{"SetSubStepping", &luna_wrapper_b2World::_bind_SetSubStepping},
	{"GetSubStepping", &luna_wrapper_b2World::_bind_GetSubStepping},
	{"GetProxyCount", &luna_wrapper_b2World::_bind_GetProxyCount},
	{"GetBodyCount", &luna_wrapper_b2World::_bind_GetBodyCount},
	{"GetJointCount", &luna_wrapper_b2World::_bind_GetJointCount},
	{"GetContactCount", &luna_wrapper_b2World::_bind_GetContactCount},
	{"GetTreeHeight", &luna_wrapper_b2World::_bind_GetTreeHeight},
	{"GetTreeBalance", &luna_wrapper_b2World::_bind_GetTreeBalance},
	{"GetTreeQuality", &luna_wrapper_b2World::_bind_GetTreeQuality},
	{"SetGravity", &luna_wrapper_b2World::_bind_SetGravity},
	{"GetGravity", &luna_wrapper_b2World::_bind_GetGravity},
	{"IsLocked", &luna_wrapper_b2World::_bind_IsLocked},
	{"SetAutoClearForces", &luna_wrapper_b2World::_bind_SetAutoClearForces},
	{"GetAutoClearForces", &luna_wrapper_b2World::_bind_GetAutoClearForces},
	{"GetContactManager", &luna_wrapper_b2World::_bind_GetContactManager},
	{"GetProfile", &luna_wrapper_b2World::_bind_GetProfile},
	{"Dump", &luna_wrapper_b2World::_bind_Dump},
	{"dynCast", &luna_wrapper_b2World::_bind_dynCast},
	{"__eq", &luna_wrapper_b2World::_bind___eq},
	{"fromVoid", &luna_wrapper_b2World::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2World::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2World >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2World >::enumValues[] = {
	{0,0}
};



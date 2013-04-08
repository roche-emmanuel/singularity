#include <plug_common.h>

#include <luna/wrappers/wrapper_btGhostObject.h>

class luna_wrapper_btGhostObject {
public:
	typedef Luna< btGhostObject > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btCollisionObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85758361) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCollisionObject*)");
		}

		btCollisionObject* rhs =(Luna< btCollisionObject >::check(L,2));
		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
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

		btGhostObject* self= (btGhostObject*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btGhostObject >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85758361) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btCollisionObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btGhostObject* ptr= dynamic_cast< btGhostObject* >(Luna< btCollisionObject >::check(L,1));
		btGhostObject* ptr= luna_caster< btCollisionObject, btGhostObject >::cast(Luna< btCollisionObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btGhostObject >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_convexSweepTest(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,18279310) ) return false;
		if( luatop>5 && lua_isnumber(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_rayTest(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,44790882) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addOverlappingObjectInternal(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,44086089)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeOverlappingObjectInternal(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,71097681)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,44086089)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumOverlappingObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOverlappingObject_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOverlappingObject_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOverlappingPairs_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOverlappingPairs_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_upcast_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,85758361)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btCollisionObject >::check(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_upcast_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,85758361)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btCollisionObject >::check(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setCollisionShape(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_addOverlappingObjectInternal(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,44086089)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeOverlappingObjectInternal(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,71097681)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,44086089)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btGhostObject::btGhostObject()
	static btGhostObject* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGhostObject::btGhostObject() function, expected prototype:\nbtGhostObject::btGhostObject()\nClass arguments details:\n");
		}


		return new btGhostObject();
	}

	// btGhostObject::btGhostObject(lua_Table * data)
	static btGhostObject* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGhostObject::btGhostObject(lua_Table * data) function, expected prototype:\nbtGhostObject::btGhostObject(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btGhostObject(L,NULL);
	}

	// Overload binder for btGhostObject::btGhostObject
	static btGhostObject* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btGhostObject, cannot match any of the overloads for function btGhostObject:\n  btGhostObject()\n  btGhostObject(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void btGhostObject::convexSweepTest(const btConvexShape * castShape, const btTransform & convexFromWorld, const btTransform & convexToWorld, btCollisionWorld::ConvexResultCallback & resultCallback, float allowedCcdPenetration = 0.f) const
	static int _bind_convexSweepTest(lua_State *L) {
		if (!_lg_typecheck_convexSweepTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGhostObject::convexSweepTest(const btConvexShape * castShape, const btTransform & convexFromWorld, const btTransform & convexToWorld, btCollisionWorld::ConvexResultCallback & resultCallback, float allowedCcdPenetration = 0.f) const function, expected prototype:\nvoid btGhostObject::convexSweepTest(const btConvexShape * castShape, const btTransform & convexFromWorld, const btTransform & convexToWorld, btCollisionWorld::ConvexResultCallback & resultCallback, float allowedCcdPenetration = 0.f) const\nClass arguments details:\narg 1 ID = 58243831\narg 2 ID = 13247377\narg 3 ID = 13247377\narg 4 ID = 18279310\n");
		}

		int luatop = lua_gettop(L);

		const btConvexShape* castShape=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,2));
		const btTransform* convexFromWorld_ptr=(Luna< btTransform >::check(L,3));
		if( !convexFromWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg convexFromWorld in btGhostObject::convexSweepTest function");
		}
		const btTransform & convexFromWorld=*convexFromWorld_ptr;
		const btTransform* convexToWorld_ptr=(Luna< btTransform >::check(L,4));
		if( !convexToWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg convexToWorld in btGhostObject::convexSweepTest function");
		}
		const btTransform & convexToWorld=*convexToWorld_ptr;
		btCollisionWorld::ConvexResultCallback* resultCallback_ptr=(Luna< btCollisionWorld::ConvexResultCallback >::check(L,5));
		if( !resultCallback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg resultCallback in btGhostObject::convexSweepTest function");
		}
		btCollisionWorld::ConvexResultCallback & resultCallback=*resultCallback_ptr;
		float allowedCcdPenetration=luatop>5 ? (float)lua_tonumber(L,6) : (float)0.f;

		btGhostObject* self=Luna< btCollisionObject >::checkSubType< btGhostObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGhostObject::convexSweepTest(const btConvexShape *, const btTransform &, const btTransform &, btCollisionWorld::ConvexResultCallback &, float) const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->convexSweepTest(castShape, convexFromWorld, convexToWorld, resultCallback, allowedCcdPenetration);

		return 0;
	}

	// void btGhostObject::rayTest(const btVector3 & rayFromWorld, const btVector3 & rayToWorld, btCollisionWorld::RayResultCallback & resultCallback) const
	static int _bind_rayTest(lua_State *L) {
		if (!_lg_typecheck_rayTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGhostObject::rayTest(const btVector3 & rayFromWorld, const btVector3 & rayToWorld, btCollisionWorld::RayResultCallback & resultCallback) const function, expected prototype:\nvoid btGhostObject::rayTest(const btVector3 & rayFromWorld, const btVector3 & rayToWorld, btCollisionWorld::RayResultCallback & resultCallback) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 44790882\n");
		}

		const btVector3* rayFromWorld_ptr=(Luna< btVector3 >::check(L,2));
		if( !rayFromWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayFromWorld in btGhostObject::rayTest function");
		}
		const btVector3 & rayFromWorld=*rayFromWorld_ptr;
		const btVector3* rayToWorld_ptr=(Luna< btVector3 >::check(L,3));
		if( !rayToWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayToWorld in btGhostObject::rayTest function");
		}
		const btVector3 & rayToWorld=*rayToWorld_ptr;
		btCollisionWorld::RayResultCallback* resultCallback_ptr=(Luna< btCollisionWorld::RayResultCallback >::check(L,4));
		if( !resultCallback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg resultCallback in btGhostObject::rayTest function");
		}
		btCollisionWorld::RayResultCallback & resultCallback=*resultCallback_ptr;

		btGhostObject* self=Luna< btCollisionObject >::checkSubType< btGhostObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGhostObject::rayTest(const btVector3 &, const btVector3 &, btCollisionWorld::RayResultCallback &) const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->rayTest(rayFromWorld, rayToWorld, resultCallback);

		return 0;
	}

	// void btGhostObject::addOverlappingObjectInternal(btBroadphaseProxy * otherProxy, btBroadphaseProxy * thisProxy = 0)
	static int _bind_addOverlappingObjectInternal(lua_State *L) {
		if (!_lg_typecheck_addOverlappingObjectInternal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGhostObject::addOverlappingObjectInternal(btBroadphaseProxy * otherProxy, btBroadphaseProxy * thisProxy = 0) function, expected prototype:\nvoid btGhostObject::addOverlappingObjectInternal(btBroadphaseProxy * otherProxy, btBroadphaseProxy * thisProxy = 0)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\n");
		}

		int luatop = lua_gettop(L);

		btBroadphaseProxy* otherProxy=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* thisProxy=luatop>2 ? (Luna< btBroadphaseProxy >::check(L,3)) : (btBroadphaseProxy*)0;

		btGhostObject* self=Luna< btCollisionObject >::checkSubType< btGhostObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGhostObject::addOverlappingObjectInternal(btBroadphaseProxy *, btBroadphaseProxy *). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->addOverlappingObjectInternal(otherProxy, thisProxy);

		return 0;
	}

	// void btGhostObject::removeOverlappingObjectInternal(btBroadphaseProxy * otherProxy, btDispatcher * dispatcher, btBroadphaseProxy * thisProxy = 0)
	static int _bind_removeOverlappingObjectInternal(lua_State *L) {
		if (!_lg_typecheck_removeOverlappingObjectInternal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGhostObject::removeOverlappingObjectInternal(btBroadphaseProxy * otherProxy, btDispatcher * dispatcher, btBroadphaseProxy * thisProxy = 0) function, expected prototype:\nvoid btGhostObject::removeOverlappingObjectInternal(btBroadphaseProxy * otherProxy, btDispatcher * dispatcher, btBroadphaseProxy * thisProxy = 0)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 71097681\narg 3 ID = 44086089\n");
		}

		int luatop = lua_gettop(L);

		btBroadphaseProxy* otherProxy=(Luna< btBroadphaseProxy >::check(L,2));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));
		btBroadphaseProxy* thisProxy=luatop>3 ? (Luna< btBroadphaseProxy >::check(L,4)) : (btBroadphaseProxy*)0;

		btGhostObject* self=Luna< btCollisionObject >::checkSubType< btGhostObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGhostObject::removeOverlappingObjectInternal(btBroadphaseProxy *, btDispatcher *, btBroadphaseProxy *). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->removeOverlappingObjectInternal(otherProxy, dispatcher, thisProxy);

		return 0;
	}

	// int btGhostObject::getNumOverlappingObjects() const
	static int _bind_getNumOverlappingObjects(lua_State *L) {
		if (!_lg_typecheck_getNumOverlappingObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGhostObject::getNumOverlappingObjects() const function, expected prototype:\nint btGhostObject::getNumOverlappingObjects() const\nClass arguments details:\n");
		}


		btGhostObject* self=Luna< btCollisionObject >::checkSubType< btGhostObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGhostObject::getNumOverlappingObjects() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		int lret = self->getNumOverlappingObjects();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btCollisionObject * btGhostObject::getOverlappingObject(int index)
	static int _bind_getOverlappingObject_overload_1(lua_State *L) {
		if (!_lg_typecheck_getOverlappingObject_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionObject * btGhostObject::getOverlappingObject(int index) function, expected prototype:\nbtCollisionObject * btGhostObject::getOverlappingObject(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btGhostObject* self=Luna< btCollisionObject >::checkSubType< btGhostObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionObject * btGhostObject::getOverlappingObject(int). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		btCollisionObject * lret = self->getOverlappingObject(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionObject >::push(L,lret,false);

		return 1;
	}

	// const btCollisionObject * btGhostObject::getOverlappingObject(int index) const
	static int _bind_getOverlappingObject_overload_2(lua_State *L) {
		if (!_lg_typecheck_getOverlappingObject_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btCollisionObject * btGhostObject::getOverlappingObject(int index) const function, expected prototype:\nconst btCollisionObject * btGhostObject::getOverlappingObject(int index) const\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btGhostObject* self=Luna< btCollisionObject >::checkSubType< btGhostObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btCollisionObject * btGhostObject::getOverlappingObject(int) const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		const btCollisionObject * lret = self->getOverlappingObject(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionObject >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btGhostObject::getOverlappingObject
	static int _bind_getOverlappingObject(lua_State *L) {
		if (_lg_typecheck_getOverlappingObject_overload_1(L)) return _bind_getOverlappingObject_overload_1(L);
		if (_lg_typecheck_getOverlappingObject_overload_2(L)) return _bind_getOverlappingObject_overload_2(L);

		luaL_error(L, "error in function getOverlappingObject, cannot match any of the overloads for function getOverlappingObject:\n  getOverlappingObject(int)\n  getOverlappingObject(int)\n");
		return 0;
	}

	// btAlignedObjectArray< btCollisionObject * > & btGhostObject::getOverlappingPairs()
	static int _bind_getOverlappingPairs_overload_1(lua_State *L) {
		if (!_lg_typecheck_getOverlappingPairs_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btAlignedObjectArray< btCollisionObject * > & btGhostObject::getOverlappingPairs() function, expected prototype:\nbtAlignedObjectArray< btCollisionObject * > & btGhostObject::getOverlappingPairs()\nClass arguments details:\n");
		}


		btGhostObject* self=Luna< btCollisionObject >::checkSubType< btGhostObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btAlignedObjectArray< btCollisionObject * > & btGhostObject::getOverlappingPairs(). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		const btAlignedObjectArray< btCollisionObject * >* lret = &self->getOverlappingPairs();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btAlignedObjectArray< btCollisionObject * > >::push(L,lret,false);

		return 1;
	}

	// const btAlignedObjectArray< btCollisionObject * > btGhostObject::getOverlappingPairs() const
	static int _bind_getOverlappingPairs_overload_2(lua_State *L) {
		if (!_lg_typecheck_getOverlappingPairs_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btAlignedObjectArray< btCollisionObject * > btGhostObject::getOverlappingPairs() const function, expected prototype:\nconst btAlignedObjectArray< btCollisionObject * > btGhostObject::getOverlappingPairs() const\nClass arguments details:\n");
		}


		btGhostObject* self=Luna< btCollisionObject >::checkSubType< btGhostObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btAlignedObjectArray< btCollisionObject * > btGhostObject::getOverlappingPairs() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		const btAlignedObjectArray< btCollisionObject * > stack_lret = self->getOverlappingPairs();
		const btAlignedObjectArray< btCollisionObject * >* lret = new const btAlignedObjectArray< btCollisionObject * >(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btAlignedObjectArray< btCollisionObject * > >::push(L,lret,true);

		return 1;
	}

	// Overload binder for btGhostObject::getOverlappingPairs
	static int _bind_getOverlappingPairs(lua_State *L) {
		if (_lg_typecheck_getOverlappingPairs_overload_1(L)) return _bind_getOverlappingPairs_overload_1(L);
		if (_lg_typecheck_getOverlappingPairs_overload_2(L)) return _bind_getOverlappingPairs_overload_2(L);

		luaL_error(L, "error in function getOverlappingPairs, cannot match any of the overloads for function getOverlappingPairs:\n  getOverlappingPairs()\n  getOverlappingPairs()\n");
		return 0;
	}

	// static const btGhostObject * btGhostObject::upcast(const btCollisionObject * colObj)
	static int _bind_upcast_overload_1(lua_State *L) {
		if (!_lg_typecheck_upcast_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static const btGhostObject * btGhostObject::upcast(const btCollisionObject * colObj) function, expected prototype:\nstatic const btGhostObject * btGhostObject::upcast(const btCollisionObject * colObj)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		const btCollisionObject* colObj=(Luna< btCollisionObject >::check(L,1));

		const btGhostObject * lret = btGhostObject::upcast(colObj);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btGhostObject >::push(L,lret,false);

		return 1;
	}

	// static btGhostObject * btGhostObject::upcast(btCollisionObject * colObj)
	static int _bind_upcast_overload_2(lua_State *L) {
		if (!_lg_typecheck_upcast_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static btGhostObject * btGhostObject::upcast(btCollisionObject * colObj) function, expected prototype:\nstatic btGhostObject * btGhostObject::upcast(btCollisionObject * colObj)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		btCollisionObject* colObj=(Luna< btCollisionObject >::check(L,1));

		btGhostObject * lret = btGhostObject::upcast(colObj);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btGhostObject >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btGhostObject::upcast
	static int _bind_upcast(lua_State *L) {
		if (_lg_typecheck_upcast_overload_1(L)) return _bind_upcast_overload_1(L);
		if (_lg_typecheck_upcast_overload_2(L)) return _bind_upcast_overload_2(L);

		luaL_error(L, "error in function upcast, cannot match any of the overloads for function upcast:\n  upcast(const btCollisionObject *)\n  upcast(btCollisionObject *)\n");
		return 0;
	}

	// void btGhostObject::base_setCollisionShape(btCollisionShape * collisionShape)
	static int _bind_base_setCollisionShape(lua_State *L) {
		if (!_lg_typecheck_base_setCollisionShape(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGhostObject::base_setCollisionShape(btCollisionShape * collisionShape) function, expected prototype:\nvoid btGhostObject::base_setCollisionShape(btCollisionShape * collisionShape)\nClass arguments details:\narg 1 ID = 58243831\n");
		}

		btCollisionShape* collisionShape=(Luna< btCollisionShape >::check(L,2));

		btGhostObject* self=Luna< btCollisionObject >::checkSubType< btGhostObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGhostObject::base_setCollisionShape(btCollisionShape *). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->btGhostObject::setCollisionShape(collisionShape);

		return 0;
	}

	// int btGhostObject::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGhostObject::base_calculateSerializeBufferSize() const function, expected prototype:\nint btGhostObject::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btGhostObject* self=Luna< btCollisionObject >::checkSubType< btGhostObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGhostObject::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		int lret = self->btGhostObject::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGhostObject::base_addOverlappingObjectInternal(btBroadphaseProxy * otherProxy, btBroadphaseProxy * thisProxy = 0)
	static int _bind_base_addOverlappingObjectInternal(lua_State *L) {
		if (!_lg_typecheck_base_addOverlappingObjectInternal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGhostObject::base_addOverlappingObjectInternal(btBroadphaseProxy * otherProxy, btBroadphaseProxy * thisProxy = 0) function, expected prototype:\nvoid btGhostObject::base_addOverlappingObjectInternal(btBroadphaseProxy * otherProxy, btBroadphaseProxy * thisProxy = 0)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\n");
		}

		int luatop = lua_gettop(L);

		btBroadphaseProxy* otherProxy=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* thisProxy=luatop>2 ? (Luna< btBroadphaseProxy >::check(L,3)) : (btBroadphaseProxy*)0;

		btGhostObject* self=Luna< btCollisionObject >::checkSubType< btGhostObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGhostObject::base_addOverlappingObjectInternal(btBroadphaseProxy *, btBroadphaseProxy *). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->btGhostObject::addOverlappingObjectInternal(otherProxy, thisProxy);

		return 0;
	}

	// void btGhostObject::base_removeOverlappingObjectInternal(btBroadphaseProxy * otherProxy, btDispatcher * dispatcher, btBroadphaseProxy * thisProxy = 0)
	static int _bind_base_removeOverlappingObjectInternal(lua_State *L) {
		if (!_lg_typecheck_base_removeOverlappingObjectInternal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGhostObject::base_removeOverlappingObjectInternal(btBroadphaseProxy * otherProxy, btDispatcher * dispatcher, btBroadphaseProxy * thisProxy = 0) function, expected prototype:\nvoid btGhostObject::base_removeOverlappingObjectInternal(btBroadphaseProxy * otherProxy, btDispatcher * dispatcher, btBroadphaseProxy * thisProxy = 0)\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 71097681\narg 3 ID = 44086089\n");
		}

		int luatop = lua_gettop(L);

		btBroadphaseProxy* otherProxy=(Luna< btBroadphaseProxy >::check(L,2));
		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,3));
		btBroadphaseProxy* thisProxy=luatop>3 ? (Luna< btBroadphaseProxy >::check(L,4)) : (btBroadphaseProxy*)0;

		btGhostObject* self=Luna< btCollisionObject >::checkSubType< btGhostObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGhostObject::base_removeOverlappingObjectInternal(btBroadphaseProxy *, btDispatcher *, btBroadphaseProxy *). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->btGhostObject::removeOverlappingObjectInternal(otherProxy, dispatcher, thisProxy);

		return 0;
	}


	// Operator binds:

};

btGhostObject* LunaTraits< btGhostObject >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btGhostObject::_bind_ctor(L);
}

void LunaTraits< btGhostObject >::_bind_dtor(btGhostObject* obj) {
	delete obj;
}

const char LunaTraits< btGhostObject >::className[] = "btGhostObject";
const char LunaTraits< btGhostObject >::fullName[] = "btGhostObject";
const char LunaTraits< btGhostObject >::moduleName[] = "bullet";
const char* LunaTraits< btGhostObject >::parents[] = {"bullet.btCollisionObject", 0};
const int LunaTraits< btGhostObject >::hash = 28644936;
const int LunaTraits< btGhostObject >::uniqueIDs[] = {85758361,0};

luna_RegType LunaTraits< btGhostObject >::methods[] = {
	{"convexSweepTest", &luna_wrapper_btGhostObject::_bind_convexSweepTest},
	{"rayTest", &luna_wrapper_btGhostObject::_bind_rayTest},
	{"addOverlappingObjectInternal", &luna_wrapper_btGhostObject::_bind_addOverlappingObjectInternal},
	{"removeOverlappingObjectInternal", &luna_wrapper_btGhostObject::_bind_removeOverlappingObjectInternal},
	{"getNumOverlappingObjects", &luna_wrapper_btGhostObject::_bind_getNumOverlappingObjects},
	{"getOverlappingObject", &luna_wrapper_btGhostObject::_bind_getOverlappingObject},
	{"getOverlappingPairs", &luna_wrapper_btGhostObject::_bind_getOverlappingPairs},
	{"upcast", &luna_wrapper_btGhostObject::_bind_upcast},
	{"base_setCollisionShape", &luna_wrapper_btGhostObject::_bind_base_setCollisionShape},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btGhostObject::_bind_base_calculateSerializeBufferSize},
	{"base_addOverlappingObjectInternal", &luna_wrapper_btGhostObject::_bind_base_addOverlappingObjectInternal},
	{"base_removeOverlappingObjectInternal", &luna_wrapper_btGhostObject::_bind_base_removeOverlappingObjectInternal},
	{"__eq", &luna_wrapper_btGhostObject::_bind___eq},
	{"fromVoid", &luna_wrapper_btGhostObject::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btGhostObject::_bind_asVoid},
	{"getTable", &luna_wrapper_btGhostObject::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btGhostObject >::converters[] = {
	{"btCollisionObject", &luna_wrapper_btGhostObject::_cast_from_btCollisionObject},
	{0,0}
};

luna_RegEnumType LunaTraits< btGhostObject >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

#include <luna/wrappers/wrapper_btCollisionObject.h>

class luna_wrapper_btCollisionObject {
public:
	typedef Luna< btCollisionObject > luna_t;

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

		btCollisionObject* self= (btCollisionObject*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btCollisionObject >::push(L,self,false);
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

		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btCollisionObject");
		
		return luna_dynamicCast(L,converters,"btCollisionObject",name);
	}


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
	inline static bool _lg_typecheck_mergesSimulationIslands(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAnisotropicFriction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAnisotropicFriction(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_hasAnisotropicFriction(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setContactProcessingThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getContactProcessingThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isStaticObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isKinematicObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isStaticOrKinematicObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_hasContactResponse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCollisionShape(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCollisionShape_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCollisionShape_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_internalGetExtensionPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_internalSetExtensionPointer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getActivationState(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setActivationState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDeactivationTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDeactivationTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_forceActivationState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_activate(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isActive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRestitution(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRestitution(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFriction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFriction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRollingFriction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRollingFriction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInternalType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWorldTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWorldTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWorldTransform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBroadphaseHandle_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBroadphaseHandle_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBroadphaseHandle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInterpolationWorldTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInterpolationWorldTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setInterpolationWorldTransform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInterpolationLinearVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInterpolationAngularVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInterpolationLinearVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInterpolationAngularVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIslandTag(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setIslandTag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCompanionId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCompanionId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getHitFraction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setHitFraction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCollisionFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCollisionFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCcdSweptSphereRadius(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCcdSweptSphereRadius(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCcdMotionThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCcdSquareMotionThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCcdMotionThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUserPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUserPointer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_checkCollideWith(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btCollisionObject::btCollisionObject()
	static btCollisionObject* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionObject::btCollisionObject() function, expected prototype:\nbtCollisionObject::btCollisionObject()\nClass arguments details:\n");
		}


		return new btCollisionObject();
	}

	// btCollisionObject::btCollisionObject(lua_Table * data)
	static btCollisionObject* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionObject::btCollisionObject(lua_Table * data) function, expected prototype:\nbtCollisionObject::btCollisionObject(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btCollisionObject(L,NULL);
	}

	// Overload binder for btCollisionObject::btCollisionObject
	static btCollisionObject* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btCollisionObject, cannot match any of the overloads for function btCollisionObject:\n  btCollisionObject()\n  btCollisionObject(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// bool btCollisionObject::mergesSimulationIslands() const
	static int _bind_mergesSimulationIslands(lua_State *L) {
		if (!_lg_typecheck_mergesSimulationIslands(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionObject::mergesSimulationIslands() const function, expected prototype:\nbool btCollisionObject::mergesSimulationIslands() const\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionObject::mergesSimulationIslands() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		bool lret = self->mergesSimulationIslands();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const btVector3 & btCollisionObject::getAnisotropicFriction() const
	static int _bind_getAnisotropicFriction(lua_State *L) {
		if (!_lg_typecheck_getAnisotropicFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btCollisionObject::getAnisotropicFriction() const function, expected prototype:\nconst btVector3 & btCollisionObject::getAnisotropicFriction() const\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btCollisionObject::getAnisotropicFriction() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		const btVector3* lret = &self->getAnisotropicFriction();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btCollisionObject::setAnisotropicFriction(const btVector3 & anisotropicFriction, int frictionMode = btCollisionObject::CF_ANISOTROPIC_FRICTION)
	static int _bind_setAnisotropicFriction(lua_State *L) {
		if (!_lg_typecheck_setAnisotropicFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObject::setAnisotropicFriction(const btVector3 & anisotropicFriction, int frictionMode = btCollisionObject::CF_ANISOTROPIC_FRICTION) function, expected prototype:\nvoid btCollisionObject::setAnisotropicFriction(const btVector3 & anisotropicFriction, int frictionMode = btCollisionObject::CF_ANISOTROPIC_FRICTION)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		const btVector3* anisotropicFriction_ptr=(Luna< btVector3 >::check(L,2));
		if( !anisotropicFriction_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg anisotropicFriction in btCollisionObject::setAnisotropicFriction function");
		}
		const btVector3 & anisotropicFriction=*anisotropicFriction_ptr;
		int frictionMode=luatop>2 ? (int)lua_tointeger(L,3) : btCollisionObject::CF_ANISOTROPIC_FRICTION;

		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObject::setAnisotropicFriction(const btVector3 &, int). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setAnisotropicFriction(anisotropicFriction, frictionMode);

		return 0;
	}

	// bool btCollisionObject::hasAnisotropicFriction(int frictionMode = btCollisionObject::CF_ANISOTROPIC_FRICTION) const
	static int _bind_hasAnisotropicFriction(lua_State *L) {
		if (!_lg_typecheck_hasAnisotropicFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionObject::hasAnisotropicFriction(int frictionMode = btCollisionObject::CF_ANISOTROPIC_FRICTION) const function, expected prototype:\nbool btCollisionObject::hasAnisotropicFriction(int frictionMode = btCollisionObject::CF_ANISOTROPIC_FRICTION) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int frictionMode=luatop>1 ? (int)lua_tointeger(L,2) : btCollisionObject::CF_ANISOTROPIC_FRICTION;

		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionObject::hasAnisotropicFriction(int) const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		bool lret = self->hasAnisotropicFriction(frictionMode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btCollisionObject::setContactProcessingThreshold(float contactProcessingThreshold)
	static int _bind_setContactProcessingThreshold(lua_State *L) {
		if (!_lg_typecheck_setContactProcessingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObject::setContactProcessingThreshold(float contactProcessingThreshold) function, expected prototype:\nvoid btCollisionObject::setContactProcessingThreshold(float contactProcessingThreshold)\nClass arguments details:\n");
		}

		float contactProcessingThreshold=(float)lua_tonumber(L,2);

		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObject::setContactProcessingThreshold(float). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setContactProcessingThreshold(contactProcessingThreshold);

		return 0;
	}

	// float btCollisionObject::getContactProcessingThreshold() const
	static int _bind_getContactProcessingThreshold(lua_State *L) {
		if (!_lg_typecheck_getContactProcessingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionObject::getContactProcessingThreshold() const function, expected prototype:\nfloat btCollisionObject::getContactProcessingThreshold() const\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionObject::getContactProcessingThreshold() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		float lret = self->getContactProcessingThreshold();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btCollisionObject::isStaticObject() const
	static int _bind_isStaticObject(lua_State *L) {
		if (!_lg_typecheck_isStaticObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionObject::isStaticObject() const function, expected prototype:\nbool btCollisionObject::isStaticObject() const\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionObject::isStaticObject() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		bool lret = self->isStaticObject();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btCollisionObject::isKinematicObject() const
	static int _bind_isKinematicObject(lua_State *L) {
		if (!_lg_typecheck_isKinematicObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionObject::isKinematicObject() const function, expected prototype:\nbool btCollisionObject::isKinematicObject() const\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionObject::isKinematicObject() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		bool lret = self->isKinematicObject();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btCollisionObject::isStaticOrKinematicObject() const
	static int _bind_isStaticOrKinematicObject(lua_State *L) {
		if (!_lg_typecheck_isStaticOrKinematicObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionObject::isStaticOrKinematicObject() const function, expected prototype:\nbool btCollisionObject::isStaticOrKinematicObject() const\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionObject::isStaticOrKinematicObject() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		bool lret = self->isStaticOrKinematicObject();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btCollisionObject::hasContactResponse() const
	static int _bind_hasContactResponse(lua_State *L) {
		if (!_lg_typecheck_hasContactResponse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionObject::hasContactResponse() const function, expected prototype:\nbool btCollisionObject::hasContactResponse() const\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionObject::hasContactResponse() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		bool lret = self->hasContactResponse();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btCollisionObject::setCollisionShape(btCollisionShape * collisionShape)
	static int _bind_setCollisionShape(lua_State *L) {
		if (!_lg_typecheck_setCollisionShape(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObject::setCollisionShape(btCollisionShape * collisionShape) function, expected prototype:\nvoid btCollisionObject::setCollisionShape(btCollisionShape * collisionShape)\nClass arguments details:\narg 1 ID = 58243831\n");
		}

		btCollisionShape* collisionShape=(Luna< btCollisionShape >::check(L,2));

		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObject::setCollisionShape(btCollisionShape *). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setCollisionShape(collisionShape);

		return 0;
	}

	// const btCollisionShape * btCollisionObject::getCollisionShape() const
	static int _bind_getCollisionShape_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCollisionShape_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btCollisionShape * btCollisionObject::getCollisionShape() const function, expected prototype:\nconst btCollisionShape * btCollisionObject::getCollisionShape() const\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btCollisionShape * btCollisionObject::getCollisionShape() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		const btCollisionShape * lret = self->getCollisionShape();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShape >::push(L,lret,false);

		return 1;
	}

	// btCollisionShape * btCollisionObject::getCollisionShape()
	static int _bind_getCollisionShape_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCollisionShape_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionShape * btCollisionObject::getCollisionShape() function, expected prototype:\nbtCollisionShape * btCollisionObject::getCollisionShape()\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionShape * btCollisionObject::getCollisionShape(). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		btCollisionShape * lret = self->getCollisionShape();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShape >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btCollisionObject::getCollisionShape
	static int _bind_getCollisionShape(lua_State *L) {
		if (_lg_typecheck_getCollisionShape_overload_1(L)) return _bind_getCollisionShape_overload_1(L);
		if (_lg_typecheck_getCollisionShape_overload_2(L)) return _bind_getCollisionShape_overload_2(L);

		luaL_error(L, "error in function getCollisionShape, cannot match any of the overloads for function getCollisionShape:\n  getCollisionShape()\n  getCollisionShape()\n");
		return 0;
	}

	// void * btCollisionObject::internalGetExtensionPointer() const
	static int _bind_internalGetExtensionPointer(lua_State *L) {
		if (!_lg_typecheck_internalGetExtensionPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btCollisionObject::internalGetExtensionPointer() const function, expected prototype:\nvoid * btCollisionObject::internalGetExtensionPointer() const\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btCollisionObject::internalGetExtensionPointer() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		void * lret = self->internalGetExtensionPointer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void btCollisionObject::internalSetExtensionPointer(void * pointer)
	static int _bind_internalSetExtensionPointer(lua_State *L) {
		if (!_lg_typecheck_internalSetExtensionPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObject::internalSetExtensionPointer(void * pointer) function, expected prototype:\nvoid btCollisionObject::internalSetExtensionPointer(void * pointer)\nClass arguments details:\n");
		}

		void* pointer=(Luna< void >::check(L,2));

		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObject::internalSetExtensionPointer(void *). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->internalSetExtensionPointer(pointer);

		return 0;
	}

	// int btCollisionObject::getActivationState() const
	static int _bind_getActivationState(lua_State *L) {
		if (!_lg_typecheck_getActivationState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCollisionObject::getActivationState() const function, expected prototype:\nint btCollisionObject::getActivationState() const\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCollisionObject::getActivationState() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		int lret = self->getActivationState();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCollisionObject::setActivationState(int newState) const
	static int _bind_setActivationState(lua_State *L) {
		if (!_lg_typecheck_setActivationState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObject::setActivationState(int newState) const function, expected prototype:\nvoid btCollisionObject::setActivationState(int newState) const\nClass arguments details:\n");
		}

		int newState=(int)lua_tointeger(L,2);

		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObject::setActivationState(int) const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setActivationState(newState);

		return 0;
	}

	// void btCollisionObject::setDeactivationTime(float time)
	static int _bind_setDeactivationTime(lua_State *L) {
		if (!_lg_typecheck_setDeactivationTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObject::setDeactivationTime(float time) function, expected prototype:\nvoid btCollisionObject::setDeactivationTime(float time)\nClass arguments details:\n");
		}

		float time=(float)lua_tonumber(L,2);

		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObject::setDeactivationTime(float). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setDeactivationTime(time);

		return 0;
	}

	// float btCollisionObject::getDeactivationTime() const
	static int _bind_getDeactivationTime(lua_State *L) {
		if (!_lg_typecheck_getDeactivationTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionObject::getDeactivationTime() const function, expected prototype:\nfloat btCollisionObject::getDeactivationTime() const\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionObject::getDeactivationTime() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		float lret = self->getDeactivationTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCollisionObject::forceActivationState(int newState) const
	static int _bind_forceActivationState(lua_State *L) {
		if (!_lg_typecheck_forceActivationState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObject::forceActivationState(int newState) const function, expected prototype:\nvoid btCollisionObject::forceActivationState(int newState) const\nClass arguments details:\n");
		}

		int newState=(int)lua_tointeger(L,2);

		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObject::forceActivationState(int) const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->forceActivationState(newState);

		return 0;
	}

	// void btCollisionObject::activate(bool forceActivation = false) const
	static int _bind_activate(lua_State *L) {
		if (!_lg_typecheck_activate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObject::activate(bool forceActivation = false) const function, expected prototype:\nvoid btCollisionObject::activate(bool forceActivation = false) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool forceActivation=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : false;

		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObject::activate(bool) const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->activate(forceActivation);

		return 0;
	}

	// bool btCollisionObject::isActive() const
	static int _bind_isActive(lua_State *L) {
		if (!_lg_typecheck_isActive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionObject::isActive() const function, expected prototype:\nbool btCollisionObject::isActive() const\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionObject::isActive() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		bool lret = self->isActive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btCollisionObject::setRestitution(float rest)
	static int _bind_setRestitution(lua_State *L) {
		if (!_lg_typecheck_setRestitution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObject::setRestitution(float rest) function, expected prototype:\nvoid btCollisionObject::setRestitution(float rest)\nClass arguments details:\n");
		}

		float rest=(float)lua_tonumber(L,2);

		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObject::setRestitution(float). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setRestitution(rest);

		return 0;
	}

	// float btCollisionObject::getRestitution() const
	static int _bind_getRestitution(lua_State *L) {
		if (!_lg_typecheck_getRestitution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionObject::getRestitution() const function, expected prototype:\nfloat btCollisionObject::getRestitution() const\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionObject::getRestitution() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		float lret = self->getRestitution();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCollisionObject::setFriction(float frict)
	static int _bind_setFriction(lua_State *L) {
		if (!_lg_typecheck_setFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObject::setFriction(float frict) function, expected prototype:\nvoid btCollisionObject::setFriction(float frict)\nClass arguments details:\n");
		}

		float frict=(float)lua_tonumber(L,2);

		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObject::setFriction(float). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setFriction(frict);

		return 0;
	}

	// float btCollisionObject::getFriction() const
	static int _bind_getFriction(lua_State *L) {
		if (!_lg_typecheck_getFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionObject::getFriction() const function, expected prototype:\nfloat btCollisionObject::getFriction() const\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionObject::getFriction() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		float lret = self->getFriction();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCollisionObject::setRollingFriction(float frict)
	static int _bind_setRollingFriction(lua_State *L) {
		if (!_lg_typecheck_setRollingFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObject::setRollingFriction(float frict) function, expected prototype:\nvoid btCollisionObject::setRollingFriction(float frict)\nClass arguments details:\n");
		}

		float frict=(float)lua_tonumber(L,2);

		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObject::setRollingFriction(float). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setRollingFriction(frict);

		return 0;
	}

	// float btCollisionObject::getRollingFriction() const
	static int _bind_getRollingFriction(lua_State *L) {
		if (!_lg_typecheck_getRollingFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionObject::getRollingFriction() const function, expected prototype:\nfloat btCollisionObject::getRollingFriction() const\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionObject::getRollingFriction() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		float lret = self->getRollingFriction();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btCollisionObject::getInternalType() const
	static int _bind_getInternalType(lua_State *L) {
		if (!_lg_typecheck_getInternalType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCollisionObject::getInternalType() const function, expected prototype:\nint btCollisionObject::getInternalType() const\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCollisionObject::getInternalType() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		int lret = self->getInternalType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btTransform & btCollisionObject::getWorldTransform()
	static int _bind_getWorldTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_getWorldTransform_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform & btCollisionObject::getWorldTransform() function, expected prototype:\nbtTransform & btCollisionObject::getWorldTransform()\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform & btCollisionObject::getWorldTransform(). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		const btTransform* lret = &self->getWorldTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// const btTransform & btCollisionObject::getWorldTransform() const
	static int _bind_getWorldTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_getWorldTransform_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btTransform & btCollisionObject::getWorldTransform() const function, expected prototype:\nconst btTransform & btCollisionObject::getWorldTransform() const\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btTransform & btCollisionObject::getWorldTransform() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		const btTransform* lret = &self->getWorldTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btCollisionObject::getWorldTransform
	static int _bind_getWorldTransform(lua_State *L) {
		if (_lg_typecheck_getWorldTransform_overload_1(L)) return _bind_getWorldTransform_overload_1(L);
		if (_lg_typecheck_getWorldTransform_overload_2(L)) return _bind_getWorldTransform_overload_2(L);

		luaL_error(L, "error in function getWorldTransform, cannot match any of the overloads for function getWorldTransform:\n  getWorldTransform()\n  getWorldTransform()\n");
		return 0;
	}

	// void btCollisionObject::setWorldTransform(const btTransform & worldTrans)
	static int _bind_setWorldTransform(lua_State *L) {
		if (!_lg_typecheck_setWorldTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObject::setWorldTransform(const btTransform & worldTrans) function, expected prototype:\nvoid btCollisionObject::setWorldTransform(const btTransform & worldTrans)\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		const btTransform* worldTrans_ptr=(Luna< btTransform >::check(L,2));
		if( !worldTrans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg worldTrans in btCollisionObject::setWorldTransform function");
		}
		const btTransform & worldTrans=*worldTrans_ptr;

		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObject::setWorldTransform(const btTransform &). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setWorldTransform(worldTrans);

		return 0;
	}

	// btBroadphaseProxy * btCollisionObject::getBroadphaseHandle()
	static int _bind_getBroadphaseHandle_overload_1(lua_State *L) {
		if (!_lg_typecheck_getBroadphaseHandle_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphaseProxy * btCollisionObject::getBroadphaseHandle() function, expected prototype:\nbtBroadphaseProxy * btCollisionObject::getBroadphaseHandle()\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btBroadphaseProxy * btCollisionObject::getBroadphaseHandle(). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		btBroadphaseProxy * lret = self->getBroadphaseHandle();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphaseProxy >::push(L,lret,false);

		return 1;
	}

	// const btBroadphaseProxy * btCollisionObject::getBroadphaseHandle() const
	static int _bind_getBroadphaseHandle_overload_2(lua_State *L) {
		if (!_lg_typecheck_getBroadphaseHandle_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btBroadphaseProxy * btCollisionObject::getBroadphaseHandle() const function, expected prototype:\nconst btBroadphaseProxy * btCollisionObject::getBroadphaseHandle() const\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btBroadphaseProxy * btCollisionObject::getBroadphaseHandle() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		const btBroadphaseProxy * lret = self->getBroadphaseHandle();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btBroadphaseProxy >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btCollisionObject::getBroadphaseHandle
	static int _bind_getBroadphaseHandle(lua_State *L) {
		if (_lg_typecheck_getBroadphaseHandle_overload_1(L)) return _bind_getBroadphaseHandle_overload_1(L);
		if (_lg_typecheck_getBroadphaseHandle_overload_2(L)) return _bind_getBroadphaseHandle_overload_2(L);

		luaL_error(L, "error in function getBroadphaseHandle, cannot match any of the overloads for function getBroadphaseHandle:\n  getBroadphaseHandle()\n  getBroadphaseHandle()\n");
		return 0;
	}

	// void btCollisionObject::setBroadphaseHandle(btBroadphaseProxy * handle)
	static int _bind_setBroadphaseHandle(lua_State *L) {
		if (!_lg_typecheck_setBroadphaseHandle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObject::setBroadphaseHandle(btBroadphaseProxy * handle) function, expected prototype:\nvoid btCollisionObject::setBroadphaseHandle(btBroadphaseProxy * handle)\nClass arguments details:\narg 1 ID = 44086089\n");
		}

		btBroadphaseProxy* handle=(Luna< btBroadphaseProxy >::check(L,2));

		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObject::setBroadphaseHandle(btBroadphaseProxy *). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setBroadphaseHandle(handle);

		return 0;
	}

	// const btTransform & btCollisionObject::getInterpolationWorldTransform() const
	static int _bind_getInterpolationWorldTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_getInterpolationWorldTransform_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btTransform & btCollisionObject::getInterpolationWorldTransform() const function, expected prototype:\nconst btTransform & btCollisionObject::getInterpolationWorldTransform() const\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btTransform & btCollisionObject::getInterpolationWorldTransform() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		const btTransform* lret = &self->getInterpolationWorldTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// btTransform & btCollisionObject::getInterpolationWorldTransform()
	static int _bind_getInterpolationWorldTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_getInterpolationWorldTransform_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform & btCollisionObject::getInterpolationWorldTransform() function, expected prototype:\nbtTransform & btCollisionObject::getInterpolationWorldTransform()\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform & btCollisionObject::getInterpolationWorldTransform(). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		const btTransform* lret = &self->getInterpolationWorldTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btCollisionObject::getInterpolationWorldTransform
	static int _bind_getInterpolationWorldTransform(lua_State *L) {
		if (_lg_typecheck_getInterpolationWorldTransform_overload_1(L)) return _bind_getInterpolationWorldTransform_overload_1(L);
		if (_lg_typecheck_getInterpolationWorldTransform_overload_2(L)) return _bind_getInterpolationWorldTransform_overload_2(L);

		luaL_error(L, "error in function getInterpolationWorldTransform, cannot match any of the overloads for function getInterpolationWorldTransform:\n  getInterpolationWorldTransform()\n  getInterpolationWorldTransform()\n");
		return 0;
	}

	// void btCollisionObject::setInterpolationWorldTransform(const btTransform & trans)
	static int _bind_setInterpolationWorldTransform(lua_State *L) {
		if (!_lg_typecheck_setInterpolationWorldTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObject::setInterpolationWorldTransform(const btTransform & trans) function, expected prototype:\nvoid btCollisionObject::setInterpolationWorldTransform(const btTransform & trans)\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		const btTransform* trans_ptr=(Luna< btTransform >::check(L,2));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in btCollisionObject::setInterpolationWorldTransform function");
		}
		const btTransform & trans=*trans_ptr;

		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObject::setInterpolationWorldTransform(const btTransform &). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setInterpolationWorldTransform(trans);

		return 0;
	}

	// void btCollisionObject::setInterpolationLinearVelocity(const btVector3 & linvel)
	static int _bind_setInterpolationLinearVelocity(lua_State *L) {
		if (!_lg_typecheck_setInterpolationLinearVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObject::setInterpolationLinearVelocity(const btVector3 & linvel) function, expected prototype:\nvoid btCollisionObject::setInterpolationLinearVelocity(const btVector3 & linvel)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* linvel_ptr=(Luna< btVector3 >::check(L,2));
		if( !linvel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg linvel in btCollisionObject::setInterpolationLinearVelocity function");
		}
		const btVector3 & linvel=*linvel_ptr;

		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObject::setInterpolationLinearVelocity(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setInterpolationLinearVelocity(linvel);

		return 0;
	}

	// void btCollisionObject::setInterpolationAngularVelocity(const btVector3 & angvel)
	static int _bind_setInterpolationAngularVelocity(lua_State *L) {
		if (!_lg_typecheck_setInterpolationAngularVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObject::setInterpolationAngularVelocity(const btVector3 & angvel) function, expected prototype:\nvoid btCollisionObject::setInterpolationAngularVelocity(const btVector3 & angvel)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* angvel_ptr=(Luna< btVector3 >::check(L,2));
		if( !angvel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angvel in btCollisionObject::setInterpolationAngularVelocity function");
		}
		const btVector3 & angvel=*angvel_ptr;

		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObject::setInterpolationAngularVelocity(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setInterpolationAngularVelocity(angvel);

		return 0;
	}

	// const btVector3 & btCollisionObject::getInterpolationLinearVelocity() const
	static int _bind_getInterpolationLinearVelocity(lua_State *L) {
		if (!_lg_typecheck_getInterpolationLinearVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btCollisionObject::getInterpolationLinearVelocity() const function, expected prototype:\nconst btVector3 & btCollisionObject::getInterpolationLinearVelocity() const\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btCollisionObject::getInterpolationLinearVelocity() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		const btVector3* lret = &self->getInterpolationLinearVelocity();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const btVector3 & btCollisionObject::getInterpolationAngularVelocity() const
	static int _bind_getInterpolationAngularVelocity(lua_State *L) {
		if (!_lg_typecheck_getInterpolationAngularVelocity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btCollisionObject::getInterpolationAngularVelocity() const function, expected prototype:\nconst btVector3 & btCollisionObject::getInterpolationAngularVelocity() const\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btCollisionObject::getInterpolationAngularVelocity() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		const btVector3* lret = &self->getInterpolationAngularVelocity();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// int btCollisionObject::getIslandTag() const
	static int _bind_getIslandTag(lua_State *L) {
		if (!_lg_typecheck_getIslandTag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCollisionObject::getIslandTag() const function, expected prototype:\nint btCollisionObject::getIslandTag() const\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCollisionObject::getIslandTag() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		int lret = self->getIslandTag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCollisionObject::setIslandTag(int tag)
	static int _bind_setIslandTag(lua_State *L) {
		if (!_lg_typecheck_setIslandTag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObject::setIslandTag(int tag) function, expected prototype:\nvoid btCollisionObject::setIslandTag(int tag)\nClass arguments details:\n");
		}

		int tag=(int)lua_tointeger(L,2);

		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObject::setIslandTag(int). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setIslandTag(tag);

		return 0;
	}

	// int btCollisionObject::getCompanionId() const
	static int _bind_getCompanionId(lua_State *L) {
		if (!_lg_typecheck_getCompanionId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCollisionObject::getCompanionId() const function, expected prototype:\nint btCollisionObject::getCompanionId() const\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCollisionObject::getCompanionId() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		int lret = self->getCompanionId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCollisionObject::setCompanionId(int id)
	static int _bind_setCompanionId(lua_State *L) {
		if (!_lg_typecheck_setCompanionId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObject::setCompanionId(int id) function, expected prototype:\nvoid btCollisionObject::setCompanionId(int id)\nClass arguments details:\n");
		}

		int id=(int)lua_tointeger(L,2);

		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObject::setCompanionId(int). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setCompanionId(id);

		return 0;
	}

	// float btCollisionObject::getHitFraction() const
	static int _bind_getHitFraction(lua_State *L) {
		if (!_lg_typecheck_getHitFraction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionObject::getHitFraction() const function, expected prototype:\nfloat btCollisionObject::getHitFraction() const\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionObject::getHitFraction() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		float lret = self->getHitFraction();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCollisionObject::setHitFraction(float hitFraction)
	static int _bind_setHitFraction(lua_State *L) {
		if (!_lg_typecheck_setHitFraction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObject::setHitFraction(float hitFraction) function, expected prototype:\nvoid btCollisionObject::setHitFraction(float hitFraction)\nClass arguments details:\n");
		}

		float hitFraction=(float)lua_tonumber(L,2);

		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObject::setHitFraction(float). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setHitFraction(hitFraction);

		return 0;
	}

	// int btCollisionObject::getCollisionFlags() const
	static int _bind_getCollisionFlags(lua_State *L) {
		if (!_lg_typecheck_getCollisionFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCollisionObject::getCollisionFlags() const function, expected prototype:\nint btCollisionObject::getCollisionFlags() const\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCollisionObject::getCollisionFlags() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		int lret = self->getCollisionFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCollisionObject::setCollisionFlags(int flags)
	static int _bind_setCollisionFlags(lua_State *L) {
		if (!_lg_typecheck_setCollisionFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObject::setCollisionFlags(int flags) function, expected prototype:\nvoid btCollisionObject::setCollisionFlags(int flags)\nClass arguments details:\n");
		}

		int flags=(int)lua_tointeger(L,2);

		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObject::setCollisionFlags(int). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setCollisionFlags(flags);

		return 0;
	}

	// float btCollisionObject::getCcdSweptSphereRadius() const
	static int _bind_getCcdSweptSphereRadius(lua_State *L) {
		if (!_lg_typecheck_getCcdSweptSphereRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionObject::getCcdSweptSphereRadius() const function, expected prototype:\nfloat btCollisionObject::getCcdSweptSphereRadius() const\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionObject::getCcdSweptSphereRadius() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		float lret = self->getCcdSweptSphereRadius();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCollisionObject::setCcdSweptSphereRadius(float radius)
	static int _bind_setCcdSweptSphereRadius(lua_State *L) {
		if (!_lg_typecheck_setCcdSweptSphereRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObject::setCcdSweptSphereRadius(float radius) function, expected prototype:\nvoid btCollisionObject::setCcdSweptSphereRadius(float radius)\nClass arguments details:\n");
		}

		float radius=(float)lua_tonumber(L,2);

		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObject::setCcdSweptSphereRadius(float). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setCcdSweptSphereRadius(radius);

		return 0;
	}

	// float btCollisionObject::getCcdMotionThreshold() const
	static int _bind_getCcdMotionThreshold(lua_State *L) {
		if (!_lg_typecheck_getCcdMotionThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionObject::getCcdMotionThreshold() const function, expected prototype:\nfloat btCollisionObject::getCcdMotionThreshold() const\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionObject::getCcdMotionThreshold() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		float lret = self->getCcdMotionThreshold();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btCollisionObject::getCcdSquareMotionThreshold() const
	static int _bind_getCcdSquareMotionThreshold(lua_State *L) {
		if (!_lg_typecheck_getCcdSquareMotionThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionObject::getCcdSquareMotionThreshold() const function, expected prototype:\nfloat btCollisionObject::getCcdSquareMotionThreshold() const\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionObject::getCcdSquareMotionThreshold() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		float lret = self->getCcdSquareMotionThreshold();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCollisionObject::setCcdMotionThreshold(float ccdMotionThreshold)
	static int _bind_setCcdMotionThreshold(lua_State *L) {
		if (!_lg_typecheck_setCcdMotionThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObject::setCcdMotionThreshold(float ccdMotionThreshold) function, expected prototype:\nvoid btCollisionObject::setCcdMotionThreshold(float ccdMotionThreshold)\nClass arguments details:\n");
		}

		float ccdMotionThreshold=(float)lua_tonumber(L,2);

		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObject::setCcdMotionThreshold(float). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setCcdMotionThreshold(ccdMotionThreshold);

		return 0;
	}

	// void * btCollisionObject::getUserPointer() const
	static int _bind_getUserPointer(lua_State *L) {
		if (!_lg_typecheck_getUserPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btCollisionObject::getUserPointer() const function, expected prototype:\nvoid * btCollisionObject::getUserPointer() const\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btCollisionObject::getUserPointer() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		void * lret = self->getUserPointer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void btCollisionObject::setUserPointer(void * userPointer)
	static int _bind_setUserPointer(lua_State *L) {
		if (!_lg_typecheck_setUserPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObject::setUserPointer(void * userPointer) function, expected prototype:\nvoid btCollisionObject::setUserPointer(void * userPointer)\nClass arguments details:\n");
		}

		void* userPointer=(Luna< void >::check(L,2));

		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObject::setUserPointer(void *). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->setUserPointer(userPointer);

		return 0;
	}

	// bool btCollisionObject::checkCollideWith(const btCollisionObject * co) const
	static int _bind_checkCollideWith(lua_State *L) {
		if (!_lg_typecheck_checkCollideWith(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionObject::checkCollideWith(const btCollisionObject * co) const function, expected prototype:\nbool btCollisionObject::checkCollideWith(const btCollisionObject * co) const\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		const btCollisionObject* co=(Luna< btCollisionObject >::check(L,2));

		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionObject::checkCollideWith(const btCollisionObject *) const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		bool lret = self->checkCollideWith(co);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int btCollisionObject::calculateSerializeBufferSize() const
	static int _bind_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCollisionObject::calculateSerializeBufferSize() const function, expected prototype:\nint btCollisionObject::calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCollisionObject::calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		int lret = self->calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCollisionObject::base_setCollisionShape(btCollisionShape * collisionShape)
	static int _bind_base_setCollisionShape(lua_State *L) {
		if (!_lg_typecheck_base_setCollisionShape(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionObject::base_setCollisionShape(btCollisionShape * collisionShape) function, expected prototype:\nvoid btCollisionObject::base_setCollisionShape(btCollisionShape * collisionShape)\nClass arguments details:\narg 1 ID = 58243831\n");
		}

		btCollisionShape* collisionShape=(Luna< btCollisionShape >::check(L,2));

		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionObject::base_setCollisionShape(btCollisionShape *). Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		self->btCollisionObject::setCollisionShape(collisionShape);

		return 0;
	}

	// int btCollisionObject::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCollisionObject::base_calculateSerializeBufferSize() const function, expected prototype:\nint btCollisionObject::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btCollisionObject* self=(Luna< btCollisionObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCollisionObject::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionObject >::check(L,1)).name());
		}
		int lret = self->btCollisionObject::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btCollisionObject* LunaTraits< btCollisionObject >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btCollisionObject::_bind_ctor(L);
}

void LunaTraits< btCollisionObject >::_bind_dtor(btCollisionObject* obj) {
	delete obj;
}

const char LunaTraits< btCollisionObject >::className[] = "btCollisionObject";
const char LunaTraits< btCollisionObject >::fullName[] = "btCollisionObject";
const char LunaTraits< btCollisionObject >::moduleName[] = "bullet";
const char* LunaTraits< btCollisionObject >::parents[] = {0};
const int LunaTraits< btCollisionObject >::hash = 85758361;
const int LunaTraits< btCollisionObject >::uniqueIDs[] = {85758361,0};

luna_RegType LunaTraits< btCollisionObject >::methods[] = {
	{"mergesSimulationIslands", &luna_wrapper_btCollisionObject::_bind_mergesSimulationIslands},
	{"getAnisotropicFriction", &luna_wrapper_btCollisionObject::_bind_getAnisotropicFriction},
	{"setAnisotropicFriction", &luna_wrapper_btCollisionObject::_bind_setAnisotropicFriction},
	{"hasAnisotropicFriction", &luna_wrapper_btCollisionObject::_bind_hasAnisotropicFriction},
	{"setContactProcessingThreshold", &luna_wrapper_btCollisionObject::_bind_setContactProcessingThreshold},
	{"getContactProcessingThreshold", &luna_wrapper_btCollisionObject::_bind_getContactProcessingThreshold},
	{"isStaticObject", &luna_wrapper_btCollisionObject::_bind_isStaticObject},
	{"isKinematicObject", &luna_wrapper_btCollisionObject::_bind_isKinematicObject},
	{"isStaticOrKinematicObject", &luna_wrapper_btCollisionObject::_bind_isStaticOrKinematicObject},
	{"hasContactResponse", &luna_wrapper_btCollisionObject::_bind_hasContactResponse},
	{"setCollisionShape", &luna_wrapper_btCollisionObject::_bind_setCollisionShape},
	{"getCollisionShape", &luna_wrapper_btCollisionObject::_bind_getCollisionShape},
	{"internalGetExtensionPointer", &luna_wrapper_btCollisionObject::_bind_internalGetExtensionPointer},
	{"internalSetExtensionPointer", &luna_wrapper_btCollisionObject::_bind_internalSetExtensionPointer},
	{"getActivationState", &luna_wrapper_btCollisionObject::_bind_getActivationState},
	{"setActivationState", &luna_wrapper_btCollisionObject::_bind_setActivationState},
	{"setDeactivationTime", &luna_wrapper_btCollisionObject::_bind_setDeactivationTime},
	{"getDeactivationTime", &luna_wrapper_btCollisionObject::_bind_getDeactivationTime},
	{"forceActivationState", &luna_wrapper_btCollisionObject::_bind_forceActivationState},
	{"activate", &luna_wrapper_btCollisionObject::_bind_activate},
	{"isActive", &luna_wrapper_btCollisionObject::_bind_isActive},
	{"setRestitution", &luna_wrapper_btCollisionObject::_bind_setRestitution},
	{"getRestitution", &luna_wrapper_btCollisionObject::_bind_getRestitution},
	{"setFriction", &luna_wrapper_btCollisionObject::_bind_setFriction},
	{"getFriction", &luna_wrapper_btCollisionObject::_bind_getFriction},
	{"setRollingFriction", &luna_wrapper_btCollisionObject::_bind_setRollingFriction},
	{"getRollingFriction", &luna_wrapper_btCollisionObject::_bind_getRollingFriction},
	{"getInternalType", &luna_wrapper_btCollisionObject::_bind_getInternalType},
	{"getWorldTransform", &luna_wrapper_btCollisionObject::_bind_getWorldTransform},
	{"setWorldTransform", &luna_wrapper_btCollisionObject::_bind_setWorldTransform},
	{"getBroadphaseHandle", &luna_wrapper_btCollisionObject::_bind_getBroadphaseHandle},
	{"setBroadphaseHandle", &luna_wrapper_btCollisionObject::_bind_setBroadphaseHandle},
	{"getInterpolationWorldTransform", &luna_wrapper_btCollisionObject::_bind_getInterpolationWorldTransform},
	{"setInterpolationWorldTransform", &luna_wrapper_btCollisionObject::_bind_setInterpolationWorldTransform},
	{"setInterpolationLinearVelocity", &luna_wrapper_btCollisionObject::_bind_setInterpolationLinearVelocity},
	{"setInterpolationAngularVelocity", &luna_wrapper_btCollisionObject::_bind_setInterpolationAngularVelocity},
	{"getInterpolationLinearVelocity", &luna_wrapper_btCollisionObject::_bind_getInterpolationLinearVelocity},
	{"getInterpolationAngularVelocity", &luna_wrapper_btCollisionObject::_bind_getInterpolationAngularVelocity},
	{"getIslandTag", &luna_wrapper_btCollisionObject::_bind_getIslandTag},
	{"setIslandTag", &luna_wrapper_btCollisionObject::_bind_setIslandTag},
	{"getCompanionId", &luna_wrapper_btCollisionObject::_bind_getCompanionId},
	{"setCompanionId", &luna_wrapper_btCollisionObject::_bind_setCompanionId},
	{"getHitFraction", &luna_wrapper_btCollisionObject::_bind_getHitFraction},
	{"setHitFraction", &luna_wrapper_btCollisionObject::_bind_setHitFraction},
	{"getCollisionFlags", &luna_wrapper_btCollisionObject::_bind_getCollisionFlags},
	{"setCollisionFlags", &luna_wrapper_btCollisionObject::_bind_setCollisionFlags},
	{"getCcdSweptSphereRadius", &luna_wrapper_btCollisionObject::_bind_getCcdSweptSphereRadius},
	{"setCcdSweptSphereRadius", &luna_wrapper_btCollisionObject::_bind_setCcdSweptSphereRadius},
	{"getCcdMotionThreshold", &luna_wrapper_btCollisionObject::_bind_getCcdMotionThreshold},
	{"getCcdSquareMotionThreshold", &luna_wrapper_btCollisionObject::_bind_getCcdSquareMotionThreshold},
	{"setCcdMotionThreshold", &luna_wrapper_btCollisionObject::_bind_setCcdMotionThreshold},
	{"getUserPointer", &luna_wrapper_btCollisionObject::_bind_getUserPointer},
	{"setUserPointer", &luna_wrapper_btCollisionObject::_bind_setUserPointer},
	{"checkCollideWith", &luna_wrapper_btCollisionObject::_bind_checkCollideWith},
	{"calculateSerializeBufferSize", &luna_wrapper_btCollisionObject::_bind_calculateSerializeBufferSize},
	{"base_setCollisionShape", &luna_wrapper_btCollisionObject::_bind_base_setCollisionShape},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btCollisionObject::_bind_base_calculateSerializeBufferSize},
	{"dynCast", &luna_wrapper_btCollisionObject::_bind_dynCast},
	{"__eq", &luna_wrapper_btCollisionObject::_bind___eq},
	{"fromVoid", &luna_wrapper_btCollisionObject::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btCollisionObject::_bind_asVoid},
	{"getTable", &luna_wrapper_btCollisionObject::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btCollisionObject >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btCollisionObject >::enumValues[] = {
	{"CF_STATIC_OBJECT", btCollisionObject::CF_STATIC_OBJECT},
	{"CF_KINEMATIC_OBJECT", btCollisionObject::CF_KINEMATIC_OBJECT},
	{"CF_NO_CONTACT_RESPONSE", btCollisionObject::CF_NO_CONTACT_RESPONSE},
	{"CF_CUSTOM_MATERIAL_CALLBACK", btCollisionObject::CF_CUSTOM_MATERIAL_CALLBACK},
	{"CF_CHARACTER_OBJECT", btCollisionObject::CF_CHARACTER_OBJECT},
	{"CF_DISABLE_VISUALIZE_OBJECT", btCollisionObject::CF_DISABLE_VISUALIZE_OBJECT},
	{"CF_DISABLE_SPU_COLLISION_PROCESSING", btCollisionObject::CF_DISABLE_SPU_COLLISION_PROCESSING},
	{"CO_COLLISION_OBJECT", btCollisionObject::CO_COLLISION_OBJECT},
	{"CO_RIGID_BODY", btCollisionObject::CO_RIGID_BODY},
	{"CO_GHOST_OBJECT", btCollisionObject::CO_GHOST_OBJECT},
	{"CO_SOFT_BODY", btCollisionObject::CO_SOFT_BODY},
	{"CO_HF_FLUID", btCollisionObject::CO_HF_FLUID},
	{"CO_USER_TYPE", btCollisionObject::CO_USER_TYPE},
	{"CF_ANISOTROPIC_FRICTION_DISABLED", btCollisionObject::CF_ANISOTROPIC_FRICTION_DISABLED},
	{"CF_ANISOTROPIC_FRICTION", btCollisionObject::CF_ANISOTROPIC_FRICTION},
	{"CF_ANISOTROPIC_ROLLING_FRICTION", btCollisionObject::CF_ANISOTROPIC_ROLLING_FRICTION},
	{0,0}
};



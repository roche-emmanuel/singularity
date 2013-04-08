#include <plug_common.h>

#include <luna/wrappers/wrapper_btCollisionShape.h>

class luna_wrapper_btCollisionShape {
public:
	typedef Luna< btCollisionShape > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btCollisionShape,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58243831) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCollisionShape*)");
		}

		btCollisionShape* rhs =(Luna< btCollisionShape >::check(L,2));
		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
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

		btCollisionShape* self= (btCollisionShape*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btCollisionShape >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58243831) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btCollisionShape >::check(L,1));
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

		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btCollisionShape");
		
		return luna_dynamicCast(L,converters,"btCollisionShape",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getAabb(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBoundingSphere(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAngularMotionDisc(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getContactBreakingThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_calculateTemporalAabb(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isPolyhedral(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isConvex2d(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isConvex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isNonMoving(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isConcave(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isCompound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isSoftBody(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isInfinite(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_calculateLocalInertia(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getShapeType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUserPointer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUserPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getBoundingSphere(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getAngularMotionDisc(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getContactBreakingThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btCollisionShape::btCollisionShape(lua_Table * data)
	static btCollisionShape* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionShape::btCollisionShape(lua_Table * data) function, expected prototype:\nbtCollisionShape::btCollisionShape(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btCollisionShape(L,NULL);
	}


	// Function binds:
	// void btCollisionShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_getAabb(lua_State *L) {
		if (!_lg_typecheck_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btCollisionShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btCollisionShape::getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btCollisionShape::getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btCollisionShape::getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionShape::getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btCollisionShape::getBoundingSphere(btVector3 & center, float & radius) const
	static int _bind_getBoundingSphere(lua_State *L) {
		if (!_lg_typecheck_getBoundingSphere(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionShape::getBoundingSphere(btVector3 & center, float & radius) const function, expected prototype:\nvoid btCollisionShape::getBoundingSphere(btVector3 & center, float & radius) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btCollisionShape::getBoundingSphere function");
		}
		btVector3 & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionShape::getBoundingSphere(btVector3 &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getBoundingSphere(center, radius);

		return 0;
	}

	// float btCollisionShape::getAngularMotionDisc() const
	static int _bind_getAngularMotionDisc(lua_State *L) {
		if (!_lg_typecheck_getAngularMotionDisc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionShape::getAngularMotionDisc() const function, expected prototype:\nfloat btCollisionShape::getAngularMotionDisc() const\nClass arguments details:\n");
		}


		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionShape::getAngularMotionDisc() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->getAngularMotionDisc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btCollisionShape::getContactBreakingThreshold(float defaultContactThresholdFactor) const
	static int _bind_getContactBreakingThreshold(lua_State *L) {
		if (!_lg_typecheck_getContactBreakingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionShape::getContactBreakingThreshold(float defaultContactThresholdFactor) const function, expected prototype:\nfloat btCollisionShape::getContactBreakingThreshold(float defaultContactThresholdFactor) const\nClass arguments details:\n");
		}

		float defaultContactThresholdFactor=(float)lua_tonumber(L,2);

		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionShape::getContactBreakingThreshold(float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->getContactBreakingThreshold(defaultContactThresholdFactor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCollisionShape::calculateTemporalAabb(const btTransform & curTrans, const btVector3 & linvel, const btVector3 & angvel, float timeStep, btVector3 & temporalAabbMin, btVector3 & temporalAabbMax) const
	static int _bind_calculateTemporalAabb(lua_State *L) {
		if (!_lg_typecheck_calculateTemporalAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionShape::calculateTemporalAabb(const btTransform & curTrans, const btVector3 & linvel, const btVector3 & angvel, float timeStep, btVector3 & temporalAabbMin, btVector3 & temporalAabbMax) const function, expected prototype:\nvoid btCollisionShape::calculateTemporalAabb(const btTransform & curTrans, const btVector3 & linvel, const btVector3 & angvel, float timeStep, btVector3 & temporalAabbMin, btVector3 & temporalAabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 5 ID = 91544891\narg 6 ID = 91544891\n");
		}

		const btTransform* curTrans_ptr=(Luna< btTransform >::check(L,2));
		if( !curTrans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg curTrans in btCollisionShape::calculateTemporalAabb function");
		}
		const btTransform & curTrans=*curTrans_ptr;
		const btVector3* linvel_ptr=(Luna< btVector3 >::check(L,3));
		if( !linvel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg linvel in btCollisionShape::calculateTemporalAabb function");
		}
		const btVector3 & linvel=*linvel_ptr;
		const btVector3* angvel_ptr=(Luna< btVector3 >::check(L,4));
		if( !angvel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angvel in btCollisionShape::calculateTemporalAabb function");
		}
		const btVector3 & angvel=*angvel_ptr;
		float timeStep=(float)lua_tonumber(L,5);
		btVector3* temporalAabbMin_ptr=(Luna< btVector3 >::check(L,6));
		if( !temporalAabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg temporalAabbMin in btCollisionShape::calculateTemporalAabb function");
		}
		btVector3 & temporalAabbMin=*temporalAabbMin_ptr;
		btVector3* temporalAabbMax_ptr=(Luna< btVector3 >::check(L,7));
		if( !temporalAabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg temporalAabbMax in btCollisionShape::calculateTemporalAabb function");
		}
		btVector3 & temporalAabbMax=*temporalAabbMax_ptr;

		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionShape::calculateTemporalAabb(const btTransform &, const btVector3 &, const btVector3 &, float, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->calculateTemporalAabb(curTrans, linvel, angvel, timeStep, temporalAabbMin, temporalAabbMax);

		return 0;
	}

	// bool btCollisionShape::isPolyhedral() const
	static int _bind_isPolyhedral(lua_State *L) {
		if (!_lg_typecheck_isPolyhedral(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionShape::isPolyhedral() const function, expected prototype:\nbool btCollisionShape::isPolyhedral() const\nClass arguments details:\n");
		}


		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionShape::isPolyhedral() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->isPolyhedral();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btCollisionShape::isConvex2d() const
	static int _bind_isConvex2d(lua_State *L) {
		if (!_lg_typecheck_isConvex2d(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionShape::isConvex2d() const function, expected prototype:\nbool btCollisionShape::isConvex2d() const\nClass arguments details:\n");
		}


		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionShape::isConvex2d() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->isConvex2d();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btCollisionShape::isConvex() const
	static int _bind_isConvex(lua_State *L) {
		if (!_lg_typecheck_isConvex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionShape::isConvex() const function, expected prototype:\nbool btCollisionShape::isConvex() const\nClass arguments details:\n");
		}


		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionShape::isConvex() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->isConvex();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btCollisionShape::isNonMoving() const
	static int _bind_isNonMoving(lua_State *L) {
		if (!_lg_typecheck_isNonMoving(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionShape::isNonMoving() const function, expected prototype:\nbool btCollisionShape::isNonMoving() const\nClass arguments details:\n");
		}


		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionShape::isNonMoving() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->isNonMoving();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btCollisionShape::isConcave() const
	static int _bind_isConcave(lua_State *L) {
		if (!_lg_typecheck_isConcave(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionShape::isConcave() const function, expected prototype:\nbool btCollisionShape::isConcave() const\nClass arguments details:\n");
		}


		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionShape::isConcave() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->isConcave();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btCollisionShape::isCompound() const
	static int _bind_isCompound(lua_State *L) {
		if (!_lg_typecheck_isCompound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionShape::isCompound() const function, expected prototype:\nbool btCollisionShape::isCompound() const\nClass arguments details:\n");
		}


		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionShape::isCompound() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->isCompound();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btCollisionShape::isSoftBody() const
	static int _bind_isSoftBody(lua_State *L) {
		if (!_lg_typecheck_isSoftBody(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionShape::isSoftBody() const function, expected prototype:\nbool btCollisionShape::isSoftBody() const\nClass arguments details:\n");
		}


		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionShape::isSoftBody() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->isSoftBody();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btCollisionShape::isInfinite() const
	static int _bind_isInfinite(lua_State *L) {
		if (!_lg_typecheck_isInfinite(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btCollisionShape::isInfinite() const function, expected prototype:\nbool btCollisionShape::isInfinite() const\nClass arguments details:\n");
		}


		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btCollisionShape::isInfinite() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->isInfinite();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btCollisionShape::setLocalScaling(const btVector3 & scaling)
	static int _bind_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionShape::setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btCollisionShape::setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btCollisionShape::setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionShape::setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->setLocalScaling(scaling);

		return 0;
	}

	// const btVector3 & btCollisionShape::getLocalScaling() const
	static int _bind_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_getLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btCollisionShape::getLocalScaling() const function, expected prototype:\nconst btVector3 & btCollisionShape::getLocalScaling() const\nClass arguments details:\n");
		}


		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btCollisionShape::getLocalScaling() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btCollisionShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_calculateLocalInertia(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionShape::calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btCollisionShape::calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btCollisionShape::calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionShape::calculateLocalInertia(float, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->calculateLocalInertia(mass, inertia);

		return 0;
	}

	// const char * btCollisionShape::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btCollisionShape::getName() const function, expected prototype:\nconst char * btCollisionShape::getName() const\nClass arguments details:\n");
		}


		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btCollisionShape::getName() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const char * lret = self->getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// int btCollisionShape::getShapeType() const
	static int _bind_getShapeType(lua_State *L) {
		if (!_lg_typecheck_getShapeType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCollisionShape::getShapeType() const function, expected prototype:\nint btCollisionShape::getShapeType() const\nClass arguments details:\n");
		}


		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCollisionShape::getShapeType() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->getShapeType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btCollisionShape::getAnisotropicRollingFrictionDirection() const
	static int _bind_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if (!_lg_typecheck_getAnisotropicRollingFrictionDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btCollisionShape::getAnisotropicRollingFrictionDirection() const function, expected prototype:\nbtVector3 btCollisionShape::getAnisotropicRollingFrictionDirection() const\nClass arguments details:\n");
		}


		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btCollisionShape::getAnisotropicRollingFrictionDirection() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->getAnisotropicRollingFrictionDirection();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btCollisionShape::setMargin(float margin)
	static int _bind_setMargin(lua_State *L) {
		if (!_lg_typecheck_setMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionShape::setMargin(float margin) function, expected prototype:\nvoid btCollisionShape::setMargin(float margin)\nClass arguments details:\n");
		}

		float margin=(float)lua_tonumber(L,2);

		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionShape::setMargin(float). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->setMargin(margin);

		return 0;
	}

	// float btCollisionShape::getMargin() const
	static int _bind_getMargin(lua_State *L) {
		if (!_lg_typecheck_getMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionShape::getMargin() const function, expected prototype:\nfloat btCollisionShape::getMargin() const\nClass arguments details:\n");
		}


		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionShape::getMargin() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCollisionShape::setUserPointer(void * userPtr)
	static int _bind_setUserPointer(lua_State *L) {
		if (!_lg_typecheck_setUserPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionShape::setUserPointer(void * userPtr) function, expected prototype:\nvoid btCollisionShape::setUserPointer(void * userPtr)\nClass arguments details:\n");
		}

		void* userPtr=(Luna< void >::check(L,2));

		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionShape::setUserPointer(void *). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->setUserPointer(userPtr);

		return 0;
	}

	// void * btCollisionShape::getUserPointer() const
	static int _bind_getUserPointer(lua_State *L) {
		if (!_lg_typecheck_getUserPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btCollisionShape::getUserPointer() const function, expected prototype:\nvoid * btCollisionShape::getUserPointer() const\nClass arguments details:\n");
		}


		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btCollisionShape::getUserPointer() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		void * lret = self->getUserPointer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// int btCollisionShape::calculateSerializeBufferSize() const
	static int _bind_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCollisionShape::calculateSerializeBufferSize() const function, expected prototype:\nint btCollisionShape::calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCollisionShape::calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCollisionShape::base_getBoundingSphere(btVector3 & center, float & radius) const
	static int _bind_base_getBoundingSphere(lua_State *L) {
		if (!_lg_typecheck_base_getBoundingSphere(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCollisionShape::base_getBoundingSphere(btVector3 & center, float & radius) const function, expected prototype:\nvoid btCollisionShape::base_getBoundingSphere(btVector3 & center, float & radius) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btCollisionShape::base_getBoundingSphere function");
		}
		btVector3 & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCollisionShape::base_getBoundingSphere(btVector3 &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btCollisionShape::getBoundingSphere(center, radius);

		return 0;
	}

	// float btCollisionShape::base_getAngularMotionDisc() const
	static int _bind_base_getAngularMotionDisc(lua_State *L) {
		if (!_lg_typecheck_base_getAngularMotionDisc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionShape::base_getAngularMotionDisc() const function, expected prototype:\nfloat btCollisionShape::base_getAngularMotionDisc() const\nClass arguments details:\n");
		}


		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionShape::base_getAngularMotionDisc() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btCollisionShape::getAngularMotionDisc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btCollisionShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const
	static int _bind_base_getContactBreakingThreshold(lua_State *L) {
		if (!_lg_typecheck_base_getContactBreakingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCollisionShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const function, expected prototype:\nfloat btCollisionShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const\nClass arguments details:\n");
		}

		float defaultContactThresholdFactor=(float)lua_tonumber(L,2);

		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCollisionShape::base_getContactBreakingThreshold(float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btCollisionShape::getContactBreakingThreshold(defaultContactThresholdFactor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btCollisionShape::base_getAnisotropicRollingFrictionDirection() const
	static int _bind_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if (!_lg_typecheck_base_getAnisotropicRollingFrictionDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btCollisionShape::base_getAnisotropicRollingFrictionDirection() const function, expected prototype:\nbtVector3 btCollisionShape::base_getAnisotropicRollingFrictionDirection() const\nClass arguments details:\n");
		}


		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btCollisionShape::base_getAnisotropicRollingFrictionDirection() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btCollisionShape::getAnisotropicRollingFrictionDirection();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// int btCollisionShape::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCollisionShape::base_calculateSerializeBufferSize() const function, expected prototype:\nint btCollisionShape::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCollisionShape::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btCollisionShape::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btCollisionShape* LunaTraits< btCollisionShape >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btCollisionShape::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void btCollisionShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	// void btCollisionShape::setLocalScaling(const btVector3 & scaling)
	// const btVector3 & btCollisionShape::getLocalScaling() const
	// void btCollisionShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	// const char * btCollisionShape::getName() const
	// void btCollisionShape::setMargin(float margin)
	// float btCollisionShape::getMargin() const
}

void LunaTraits< btCollisionShape >::_bind_dtor(btCollisionShape* obj) {
	delete obj;
}

const char LunaTraits< btCollisionShape >::className[] = "btCollisionShape";
const char LunaTraits< btCollisionShape >::fullName[] = "btCollisionShape";
const char LunaTraits< btCollisionShape >::moduleName[] = "bullet";
const char* LunaTraits< btCollisionShape >::parents[] = {0};
const int LunaTraits< btCollisionShape >::hash = 58243831;
const int LunaTraits< btCollisionShape >::uniqueIDs[] = {58243831,0};

luna_RegType LunaTraits< btCollisionShape >::methods[] = {
	{"getAabb", &luna_wrapper_btCollisionShape::_bind_getAabb},
	{"getBoundingSphere", &luna_wrapper_btCollisionShape::_bind_getBoundingSphere},
	{"getAngularMotionDisc", &luna_wrapper_btCollisionShape::_bind_getAngularMotionDisc},
	{"getContactBreakingThreshold", &luna_wrapper_btCollisionShape::_bind_getContactBreakingThreshold},
	{"calculateTemporalAabb", &luna_wrapper_btCollisionShape::_bind_calculateTemporalAabb},
	{"isPolyhedral", &luna_wrapper_btCollisionShape::_bind_isPolyhedral},
	{"isConvex2d", &luna_wrapper_btCollisionShape::_bind_isConvex2d},
	{"isConvex", &luna_wrapper_btCollisionShape::_bind_isConvex},
	{"isNonMoving", &luna_wrapper_btCollisionShape::_bind_isNonMoving},
	{"isConcave", &luna_wrapper_btCollisionShape::_bind_isConcave},
	{"isCompound", &luna_wrapper_btCollisionShape::_bind_isCompound},
	{"isSoftBody", &luna_wrapper_btCollisionShape::_bind_isSoftBody},
	{"isInfinite", &luna_wrapper_btCollisionShape::_bind_isInfinite},
	{"setLocalScaling", &luna_wrapper_btCollisionShape::_bind_setLocalScaling},
	{"getLocalScaling", &luna_wrapper_btCollisionShape::_bind_getLocalScaling},
	{"calculateLocalInertia", &luna_wrapper_btCollisionShape::_bind_calculateLocalInertia},
	{"getName", &luna_wrapper_btCollisionShape::_bind_getName},
	{"getShapeType", &luna_wrapper_btCollisionShape::_bind_getShapeType},
	{"getAnisotropicRollingFrictionDirection", &luna_wrapper_btCollisionShape::_bind_getAnisotropicRollingFrictionDirection},
	{"setMargin", &luna_wrapper_btCollisionShape::_bind_setMargin},
	{"getMargin", &luna_wrapper_btCollisionShape::_bind_getMargin},
	{"setUserPointer", &luna_wrapper_btCollisionShape::_bind_setUserPointer},
	{"getUserPointer", &luna_wrapper_btCollisionShape::_bind_getUserPointer},
	{"calculateSerializeBufferSize", &luna_wrapper_btCollisionShape::_bind_calculateSerializeBufferSize},
	{"base_getBoundingSphere", &luna_wrapper_btCollisionShape::_bind_base_getBoundingSphere},
	{"base_getAngularMotionDisc", &luna_wrapper_btCollisionShape::_bind_base_getAngularMotionDisc},
	{"base_getContactBreakingThreshold", &luna_wrapper_btCollisionShape::_bind_base_getContactBreakingThreshold},
	{"base_getAnisotropicRollingFrictionDirection", &luna_wrapper_btCollisionShape::_bind_base_getAnisotropicRollingFrictionDirection},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btCollisionShape::_bind_base_calculateSerializeBufferSize},
	{"dynCast", &luna_wrapper_btCollisionShape::_bind_dynCast},
	{"__eq", &luna_wrapper_btCollisionShape::_bind___eq},
	{"fromVoid", &luna_wrapper_btCollisionShape::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btCollisionShape::_bind_asVoid},
	{"getTable", &luna_wrapper_btCollisionShape::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btCollisionShape >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btCollisionShape >::enumValues[] = {
	{0,0}
};



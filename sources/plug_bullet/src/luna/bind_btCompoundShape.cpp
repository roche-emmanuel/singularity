#include <plug_common.h>

#include <luna/wrappers/wrapper_btCompoundShape.h>

class luna_wrapper_btCompoundShape {
public:
	typedef Luna< btCompoundShape > luna_t;

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

		btCompoundShape* self= (btCompoundShape*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btCompoundShape >::push(L,self,false);
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

	// Derived class converters:
	static int _cast_from_btCollisionShape(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btCompoundShape* ptr= dynamic_cast< btCompoundShape* >(Luna< btCollisionShape >::check(L,1));
		btCompoundShape* ptr= luna_caster< btCollisionShape, btCompoundShape >::cast(Luna< btCollisionShape >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btCompoundShape >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && lua_isboolean(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_addChildShape(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,58243831)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeChildShape(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeChildShapeByIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumChildShapes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getChildShape_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getChildShape_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getChildTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getChildTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_updateChildTransform(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getChildList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAabb(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_recalculateLocalAabb(lua_State *L) {
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

	inline static bool _lg_typecheck_setMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDynamicAabbTree_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDynamicAabbTree_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_createAabbTreeFromChildren(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_calculatePrincipalAxisTransform(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUpdateRevision(lua_State *L) {
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

	inline static bool _lg_typecheck_base_removeChildShape(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getAabb(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_recalculateLocalAabb(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_calculateLocalInertia(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getName(lua_State *L) {
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
	// btCompoundShape::btCompoundShape(bool enableDynamicAabbTree = true)
	static btCompoundShape* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCompoundShape::btCompoundShape(bool enableDynamicAabbTree = true) function, expected prototype:\nbtCompoundShape::btCompoundShape(bool enableDynamicAabbTree = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool enableDynamicAabbTree=luatop>0 ? (bool)(lua_toboolean(L,1)==1) : true;

		return new btCompoundShape(enableDynamicAabbTree);
	}

	// btCompoundShape::btCompoundShape(lua_Table * data, bool enableDynamicAabbTree = true)
	static btCompoundShape* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCompoundShape::btCompoundShape(lua_Table * data, bool enableDynamicAabbTree = true) function, expected prototype:\nbtCompoundShape::btCompoundShape(lua_Table * data, bool enableDynamicAabbTree = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool enableDynamicAabbTree=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		return new wrapper_btCompoundShape(L,NULL, enableDynamicAabbTree);
	}

	// Overload binder for btCompoundShape::btCompoundShape
	static btCompoundShape* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btCompoundShape, cannot match any of the overloads for function btCompoundShape:\n  btCompoundShape(bool)\n  btCompoundShape(lua_Table *, bool)\n");
		return NULL;
	}


	// Function binds:
	// void btCompoundShape::addChildShape(const btTransform & localTransform, btCollisionShape * shape)
	static int _bind_addChildShape(lua_State *L) {
		if (!_lg_typecheck_addChildShape(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCompoundShape::addChildShape(const btTransform & localTransform, btCollisionShape * shape) function, expected prototype:\nvoid btCompoundShape::addChildShape(const btTransform & localTransform, btCollisionShape * shape)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 58243831\n");
		}

		const btTransform* localTransform_ptr=(Luna< btTransform >::check(L,2));
		if( !localTransform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localTransform in btCompoundShape::addChildShape function");
		}
		const btTransform & localTransform=*localTransform_ptr;
		btCollisionShape* shape=(Luna< btCollisionShape >::check(L,3));

		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCompoundShape::addChildShape(const btTransform &, btCollisionShape *). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->addChildShape(localTransform, shape);

		return 0;
	}

	// void btCompoundShape::removeChildShape(btCollisionShape * shape)
	static int _bind_removeChildShape(lua_State *L) {
		if (!_lg_typecheck_removeChildShape(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCompoundShape::removeChildShape(btCollisionShape * shape) function, expected prototype:\nvoid btCompoundShape::removeChildShape(btCollisionShape * shape)\nClass arguments details:\narg 1 ID = 58243831\n");
		}

		btCollisionShape* shape=(Luna< btCollisionShape >::check(L,2));

		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCompoundShape::removeChildShape(btCollisionShape *). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->removeChildShape(shape);

		return 0;
	}

	// void btCompoundShape::removeChildShapeByIndex(int childShapeindex)
	static int _bind_removeChildShapeByIndex(lua_State *L) {
		if (!_lg_typecheck_removeChildShapeByIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCompoundShape::removeChildShapeByIndex(int childShapeindex) function, expected prototype:\nvoid btCompoundShape::removeChildShapeByIndex(int childShapeindex)\nClass arguments details:\n");
		}

		int childShapeindex=(int)lua_tointeger(L,2);

		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCompoundShape::removeChildShapeByIndex(int). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->removeChildShapeByIndex(childShapeindex);

		return 0;
	}

	// int btCompoundShape::getNumChildShapes() const
	static int _bind_getNumChildShapes(lua_State *L) {
		if (!_lg_typecheck_getNumChildShapes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCompoundShape::getNumChildShapes() const function, expected prototype:\nint btCompoundShape::getNumChildShapes() const\nClass arguments details:\n");
		}


		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCompoundShape::getNumChildShapes() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->getNumChildShapes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btCollisionShape * btCompoundShape::getChildShape(int index)
	static int _bind_getChildShape_overload_1(lua_State *L) {
		if (!_lg_typecheck_getChildShape_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionShape * btCompoundShape::getChildShape(int index) function, expected prototype:\nbtCollisionShape * btCompoundShape::getChildShape(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionShape * btCompoundShape::getChildShape(int). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btCollisionShape * lret = self->getChildShape(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShape >::push(L,lret,false);

		return 1;
	}

	// const btCollisionShape * btCompoundShape::getChildShape(int index) const
	static int _bind_getChildShape_overload_2(lua_State *L) {
		if (!_lg_typecheck_getChildShape_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btCollisionShape * btCompoundShape::getChildShape(int index) const function, expected prototype:\nconst btCollisionShape * btCompoundShape::getChildShape(int index) const\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btCollisionShape * btCompoundShape::getChildShape(int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btCollisionShape * lret = self->getChildShape(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShape >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btCompoundShape::getChildShape
	static int _bind_getChildShape(lua_State *L) {
		if (_lg_typecheck_getChildShape_overload_1(L)) return _bind_getChildShape_overload_1(L);
		if (_lg_typecheck_getChildShape_overload_2(L)) return _bind_getChildShape_overload_2(L);

		luaL_error(L, "error in function getChildShape, cannot match any of the overloads for function getChildShape:\n  getChildShape(int)\n  getChildShape(int)\n");
		return 0;
	}

	// btTransform & btCompoundShape::getChildTransform(int index)
	static int _bind_getChildTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_getChildTransform_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform & btCompoundShape::getChildTransform(int index) function, expected prototype:\nbtTransform & btCompoundShape::getChildTransform(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform & btCompoundShape::getChildTransform(int). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btTransform* lret = &self->getChildTransform(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// const btTransform & btCompoundShape::getChildTransform(int index) const
	static int _bind_getChildTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_getChildTransform_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btTransform & btCompoundShape::getChildTransform(int index) const function, expected prototype:\nconst btTransform & btCompoundShape::getChildTransform(int index) const\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btTransform & btCompoundShape::getChildTransform(int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btTransform* lret = &self->getChildTransform(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btCompoundShape::getChildTransform
	static int _bind_getChildTransform(lua_State *L) {
		if (_lg_typecheck_getChildTransform_overload_1(L)) return _bind_getChildTransform_overload_1(L);
		if (_lg_typecheck_getChildTransform_overload_2(L)) return _bind_getChildTransform_overload_2(L);

		luaL_error(L, "error in function getChildTransform, cannot match any of the overloads for function getChildTransform:\n  getChildTransform(int)\n  getChildTransform(int)\n");
		return 0;
	}

	// void btCompoundShape::updateChildTransform(int childIndex, const btTransform & newChildTransform, bool shouldRecalculateLocalAabb = true)
	static int _bind_updateChildTransform(lua_State *L) {
		if (!_lg_typecheck_updateChildTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCompoundShape::updateChildTransform(int childIndex, const btTransform & newChildTransform, bool shouldRecalculateLocalAabb = true) function, expected prototype:\nvoid btCompoundShape::updateChildTransform(int childIndex, const btTransform & newChildTransform, bool shouldRecalculateLocalAabb = true)\nClass arguments details:\narg 2 ID = 13247377\n");
		}

		int luatop = lua_gettop(L);

		int childIndex=(int)lua_tointeger(L,2);
		const btTransform* newChildTransform_ptr=(Luna< btTransform >::check(L,3));
		if( !newChildTransform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg newChildTransform in btCompoundShape::updateChildTransform function");
		}
		const btTransform & newChildTransform=*newChildTransform_ptr;
		bool shouldRecalculateLocalAabb=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : true;

		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCompoundShape::updateChildTransform(int, const btTransform &, bool). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->updateChildTransform(childIndex, newChildTransform, shouldRecalculateLocalAabb);

		return 0;
	}

	// btCompoundShapeChild * btCompoundShape::getChildList()
	static int _bind_getChildList(lua_State *L) {
		if (!_lg_typecheck_getChildList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCompoundShapeChild * btCompoundShape::getChildList() function, expected prototype:\nbtCompoundShapeChild * btCompoundShape::getChildList()\nClass arguments details:\n");
		}


		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCompoundShapeChild * btCompoundShape::getChildList(). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btCompoundShapeChild * lret = self->getChildList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCompoundShapeChild >::push(L,lret,false);

		return 1;
	}

	// void btCompoundShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_getAabb(lua_State *L) {
		if (!_lg_typecheck_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCompoundShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btCompoundShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btCompoundShape::getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btCompoundShape::getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btCompoundShape::getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCompoundShape::getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btCompoundShape::recalculateLocalAabb()
	static int _bind_recalculateLocalAabb(lua_State *L) {
		if (!_lg_typecheck_recalculateLocalAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCompoundShape::recalculateLocalAabb() function, expected prototype:\nvoid btCompoundShape::recalculateLocalAabb()\nClass arguments details:\n");
		}


		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCompoundShape::recalculateLocalAabb(). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->recalculateLocalAabb();

		return 0;
	}

	// void btCompoundShape::setLocalScaling(const btVector3 & scaling)
	static int _bind_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCompoundShape::setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btCompoundShape::setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btCompoundShape::setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCompoundShape::setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->setLocalScaling(scaling);

		return 0;
	}

	// const btVector3 & btCompoundShape::getLocalScaling() const
	static int _bind_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_getLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btCompoundShape::getLocalScaling() const function, expected prototype:\nconst btVector3 & btCompoundShape::getLocalScaling() const\nClass arguments details:\n");
		}


		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btCompoundShape::getLocalScaling() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btCompoundShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_calculateLocalInertia(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCompoundShape::calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btCompoundShape::calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btCompoundShape::calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCompoundShape::calculateLocalInertia(float, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->calculateLocalInertia(mass, inertia);

		return 0;
	}

	// void btCompoundShape::setMargin(float margin)
	static int _bind_setMargin(lua_State *L) {
		if (!_lg_typecheck_setMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCompoundShape::setMargin(float margin) function, expected prototype:\nvoid btCompoundShape::setMargin(float margin)\nClass arguments details:\n");
		}

		float margin=(float)lua_tonumber(L,2);

		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCompoundShape::setMargin(float). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->setMargin(margin);

		return 0;
	}

	// float btCompoundShape::getMargin() const
	static int _bind_getMargin(lua_State *L) {
		if (!_lg_typecheck_getMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCompoundShape::getMargin() const function, expected prototype:\nfloat btCompoundShape::getMargin() const\nClass arguments details:\n");
		}


		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCompoundShape::getMargin() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * btCompoundShape::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btCompoundShape::getName() const function, expected prototype:\nconst char * btCompoundShape::getName() const\nClass arguments details:\n");
		}


		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btCompoundShape::getName() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const char * lret = self->getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const btDbvt * btCompoundShape::getDynamicAabbTree() const
	static int _bind_getDynamicAabbTree_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDynamicAabbTree_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btDbvt * btCompoundShape::getDynamicAabbTree() const function, expected prototype:\nconst btDbvt * btCompoundShape::getDynamicAabbTree() const\nClass arguments details:\n");
		}


		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btDbvt * btCompoundShape::getDynamicAabbTree() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btDbvt * lret = self->getDynamicAabbTree();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btDbvt >::push(L,lret,false);

		return 1;
	}

	// btDbvt * btCompoundShape::getDynamicAabbTree()
	static int _bind_getDynamicAabbTree_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDynamicAabbTree_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDbvt * btCompoundShape::getDynamicAabbTree() function, expected prototype:\nbtDbvt * btCompoundShape::getDynamicAabbTree()\nClass arguments details:\n");
		}


		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btDbvt * btCompoundShape::getDynamicAabbTree(). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btDbvt * lret = self->getDynamicAabbTree();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btDbvt >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btCompoundShape::getDynamicAabbTree
	static int _bind_getDynamicAabbTree(lua_State *L) {
		if (_lg_typecheck_getDynamicAabbTree_overload_1(L)) return _bind_getDynamicAabbTree_overload_1(L);
		if (_lg_typecheck_getDynamicAabbTree_overload_2(L)) return _bind_getDynamicAabbTree_overload_2(L);

		luaL_error(L, "error in function getDynamicAabbTree, cannot match any of the overloads for function getDynamicAabbTree:\n  getDynamicAabbTree()\n  getDynamicAabbTree()\n");
		return 0;
	}

	// void btCompoundShape::createAabbTreeFromChildren()
	static int _bind_createAabbTreeFromChildren(lua_State *L) {
		if (!_lg_typecheck_createAabbTreeFromChildren(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCompoundShape::createAabbTreeFromChildren() function, expected prototype:\nvoid btCompoundShape::createAabbTreeFromChildren()\nClass arguments details:\n");
		}


		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCompoundShape::createAabbTreeFromChildren(). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->createAabbTreeFromChildren();

		return 0;
	}

	// void btCompoundShape::calculatePrincipalAxisTransform(float * masses, btTransform & principal, btVector3 & inertia) const
	static int _bind_calculatePrincipalAxisTransform(lua_State *L) {
		if (!_lg_typecheck_calculatePrincipalAxisTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCompoundShape::calculatePrincipalAxisTransform(float * masses, btTransform & principal, btVector3 & inertia) const function, expected prototype:\nvoid btCompoundShape::calculatePrincipalAxisTransform(float * masses, btTransform & principal, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 13247377\narg 3 ID = 91544891\n");
		}

		float masses=(float)lua_tonumber(L,2);
		btTransform* principal_ptr=(Luna< btTransform >::check(L,3));
		if( !principal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg principal in btCompoundShape::calculatePrincipalAxisTransform function");
		}
		btTransform & principal=*principal_ptr;
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,4));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btCompoundShape::calculatePrincipalAxisTransform function");
		}
		btVector3 & inertia=*inertia_ptr;

		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCompoundShape::calculatePrincipalAxisTransform(float *, btTransform &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->calculatePrincipalAxisTransform(&masses, principal, inertia);

		return 0;
	}

	// int btCompoundShape::getUpdateRevision() const
	static int _bind_getUpdateRevision(lua_State *L) {
		if (!_lg_typecheck_getUpdateRevision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCompoundShape::getUpdateRevision() const function, expected prototype:\nint btCompoundShape::getUpdateRevision() const\nClass arguments details:\n");
		}


		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCompoundShape::getUpdateRevision() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->getUpdateRevision();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btCompoundShape::calculateSerializeBufferSize() const
	static int _bind_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCompoundShape::calculateSerializeBufferSize() const function, expected prototype:\nint btCompoundShape::calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCompoundShape::calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btCompoundShape::base_getBoundingSphere(btVector3 & center, float & radius) const
	static int _bind_base_getBoundingSphere(lua_State *L) {
		if (!_lg_typecheck_base_getBoundingSphere(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCompoundShape::base_getBoundingSphere(btVector3 & center, float & radius) const function, expected prototype:\nvoid btCompoundShape::base_getBoundingSphere(btVector3 & center, float & radius) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btCompoundShape::base_getBoundingSphere function");
		}
		btVector3 & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCompoundShape::base_getBoundingSphere(btVector3 &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btCompoundShape::getBoundingSphere(center, radius);

		return 0;
	}

	// float btCompoundShape::base_getAngularMotionDisc() const
	static int _bind_base_getAngularMotionDisc(lua_State *L) {
		if (!_lg_typecheck_base_getAngularMotionDisc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCompoundShape::base_getAngularMotionDisc() const function, expected prototype:\nfloat btCompoundShape::base_getAngularMotionDisc() const\nClass arguments details:\n");
		}


		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCompoundShape::base_getAngularMotionDisc() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btCompoundShape::getAngularMotionDisc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btCompoundShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const
	static int _bind_base_getContactBreakingThreshold(lua_State *L) {
		if (!_lg_typecheck_base_getContactBreakingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCompoundShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const function, expected prototype:\nfloat btCompoundShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const\nClass arguments details:\n");
		}

		float defaultContactThresholdFactor=(float)lua_tonumber(L,2);

		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCompoundShape::base_getContactBreakingThreshold(float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btCompoundShape::getContactBreakingThreshold(defaultContactThresholdFactor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btCompoundShape::base_getAnisotropicRollingFrictionDirection() const
	static int _bind_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if (!_lg_typecheck_base_getAnisotropicRollingFrictionDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btCompoundShape::base_getAnisotropicRollingFrictionDirection() const function, expected prototype:\nbtVector3 btCompoundShape::base_getAnisotropicRollingFrictionDirection() const\nClass arguments details:\n");
		}


		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btCompoundShape::base_getAnisotropicRollingFrictionDirection() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btCompoundShape::getAnisotropicRollingFrictionDirection();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btCompoundShape::base_removeChildShape(btCollisionShape * shape)
	static int _bind_base_removeChildShape(lua_State *L) {
		if (!_lg_typecheck_base_removeChildShape(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCompoundShape::base_removeChildShape(btCollisionShape * shape) function, expected prototype:\nvoid btCompoundShape::base_removeChildShape(btCollisionShape * shape)\nClass arguments details:\narg 1 ID = 58243831\n");
		}

		btCollisionShape* shape=(Luna< btCollisionShape >::check(L,2));

		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCompoundShape::base_removeChildShape(btCollisionShape *). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btCompoundShape::removeChildShape(shape);

		return 0;
	}

	// void btCompoundShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabb(lua_State *L) {
		if (!_lg_typecheck_base_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCompoundShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btCompoundShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btCompoundShape::base_getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btCompoundShape::base_getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btCompoundShape::base_getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCompoundShape::base_getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btCompoundShape::getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btCompoundShape::base_recalculateLocalAabb()
	static int _bind_base_recalculateLocalAabb(lua_State *L) {
		if (!_lg_typecheck_base_recalculateLocalAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCompoundShape::base_recalculateLocalAabb() function, expected prototype:\nvoid btCompoundShape::base_recalculateLocalAabb()\nClass arguments details:\n");
		}


		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCompoundShape::base_recalculateLocalAabb(). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btCompoundShape::recalculateLocalAabb();

		return 0;
	}

	// void btCompoundShape::base_setLocalScaling(const btVector3 & scaling)
	static int _bind_base_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCompoundShape::base_setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btCompoundShape::base_setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btCompoundShape::base_setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCompoundShape::base_setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btCompoundShape::setLocalScaling(scaling);

		return 0;
	}

	// const btVector3 & btCompoundShape::base_getLocalScaling() const
	static int _bind_base_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_getLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btCompoundShape::base_getLocalScaling() const function, expected prototype:\nconst btVector3 & btCompoundShape::base_getLocalScaling() const\nClass arguments details:\n");
		}


		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btCompoundShape::base_getLocalScaling() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->btCompoundShape::getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btCompoundShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_base_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_base_calculateLocalInertia(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCompoundShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btCompoundShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btCompoundShape::base_calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCompoundShape::base_calculateLocalInertia(float, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btCompoundShape::calculateLocalInertia(mass, inertia);

		return 0;
	}

	// void btCompoundShape::base_setMargin(float margin)
	static int _bind_base_setMargin(lua_State *L) {
		if (!_lg_typecheck_base_setMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btCompoundShape::base_setMargin(float margin) function, expected prototype:\nvoid btCompoundShape::base_setMargin(float margin)\nClass arguments details:\n");
		}

		float margin=(float)lua_tonumber(L,2);

		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btCompoundShape::base_setMargin(float). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btCompoundShape::setMargin(margin);

		return 0;
	}

	// float btCompoundShape::base_getMargin() const
	static int _bind_base_getMargin(lua_State *L) {
		if (!_lg_typecheck_base_getMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btCompoundShape::base_getMargin() const function, expected prototype:\nfloat btCompoundShape::base_getMargin() const\nClass arguments details:\n");
		}


		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btCompoundShape::base_getMargin() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btCompoundShape::getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * btCompoundShape::base_getName() const
	static int _bind_base_getName(lua_State *L) {
		if (!_lg_typecheck_base_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btCompoundShape::base_getName() const function, expected prototype:\nconst char * btCompoundShape::base_getName() const\nClass arguments details:\n");
		}


		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btCompoundShape::base_getName() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const char * lret = self->btCompoundShape::getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// int btCompoundShape::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btCompoundShape::base_calculateSerializeBufferSize() const function, expected prototype:\nint btCompoundShape::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btCompoundShape* self=Luna< btCollisionShape >::checkSubType< btCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btCompoundShape::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btCompoundShape::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btCompoundShape* LunaTraits< btCompoundShape >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btCompoundShape::_bind_ctor(L);
}

void LunaTraits< btCompoundShape >::_bind_dtor(btCompoundShape* obj) {
	delete obj;
}

const char LunaTraits< btCompoundShape >::className[] = "btCompoundShape";
const char LunaTraits< btCompoundShape >::fullName[] = "btCompoundShape";
const char LunaTraits< btCompoundShape >::moduleName[] = "bullet";
const char* LunaTraits< btCompoundShape >::parents[] = {"bullet.btCollisionShape", 0};
const int LunaTraits< btCompoundShape >::hash = 44824492;
const int LunaTraits< btCompoundShape >::uniqueIDs[] = {58243831,0};

luna_RegType LunaTraits< btCompoundShape >::methods[] = {
	{"addChildShape", &luna_wrapper_btCompoundShape::_bind_addChildShape},
	{"removeChildShape", &luna_wrapper_btCompoundShape::_bind_removeChildShape},
	{"removeChildShapeByIndex", &luna_wrapper_btCompoundShape::_bind_removeChildShapeByIndex},
	{"getNumChildShapes", &luna_wrapper_btCompoundShape::_bind_getNumChildShapes},
	{"getChildShape", &luna_wrapper_btCompoundShape::_bind_getChildShape},
	{"getChildTransform", &luna_wrapper_btCompoundShape::_bind_getChildTransform},
	{"updateChildTransform", &luna_wrapper_btCompoundShape::_bind_updateChildTransform},
	{"getChildList", &luna_wrapper_btCompoundShape::_bind_getChildList},
	{"getAabb", &luna_wrapper_btCompoundShape::_bind_getAabb},
	{"recalculateLocalAabb", &luna_wrapper_btCompoundShape::_bind_recalculateLocalAabb},
	{"setLocalScaling", &luna_wrapper_btCompoundShape::_bind_setLocalScaling},
	{"getLocalScaling", &luna_wrapper_btCompoundShape::_bind_getLocalScaling},
	{"calculateLocalInertia", &luna_wrapper_btCompoundShape::_bind_calculateLocalInertia},
	{"setMargin", &luna_wrapper_btCompoundShape::_bind_setMargin},
	{"getMargin", &luna_wrapper_btCompoundShape::_bind_getMargin},
	{"getName", &luna_wrapper_btCompoundShape::_bind_getName},
	{"getDynamicAabbTree", &luna_wrapper_btCompoundShape::_bind_getDynamicAabbTree},
	{"createAabbTreeFromChildren", &luna_wrapper_btCompoundShape::_bind_createAabbTreeFromChildren},
	{"calculatePrincipalAxisTransform", &luna_wrapper_btCompoundShape::_bind_calculatePrincipalAxisTransform},
	{"getUpdateRevision", &luna_wrapper_btCompoundShape::_bind_getUpdateRevision},
	{"calculateSerializeBufferSize", &luna_wrapper_btCompoundShape::_bind_calculateSerializeBufferSize},
	{"base_getBoundingSphere", &luna_wrapper_btCompoundShape::_bind_base_getBoundingSphere},
	{"base_getAngularMotionDisc", &luna_wrapper_btCompoundShape::_bind_base_getAngularMotionDisc},
	{"base_getContactBreakingThreshold", &luna_wrapper_btCompoundShape::_bind_base_getContactBreakingThreshold},
	{"base_getAnisotropicRollingFrictionDirection", &luna_wrapper_btCompoundShape::_bind_base_getAnisotropicRollingFrictionDirection},
	{"base_removeChildShape", &luna_wrapper_btCompoundShape::_bind_base_removeChildShape},
	{"base_getAabb", &luna_wrapper_btCompoundShape::_bind_base_getAabb},
	{"base_recalculateLocalAabb", &luna_wrapper_btCompoundShape::_bind_base_recalculateLocalAabb},
	{"base_setLocalScaling", &luna_wrapper_btCompoundShape::_bind_base_setLocalScaling},
	{"base_getLocalScaling", &luna_wrapper_btCompoundShape::_bind_base_getLocalScaling},
	{"base_calculateLocalInertia", &luna_wrapper_btCompoundShape::_bind_base_calculateLocalInertia},
	{"base_setMargin", &luna_wrapper_btCompoundShape::_bind_base_setMargin},
	{"base_getMargin", &luna_wrapper_btCompoundShape::_bind_base_getMargin},
	{"base_getName", &luna_wrapper_btCompoundShape::_bind_base_getName},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btCompoundShape::_bind_base_calculateSerializeBufferSize},
	{"__eq", &luna_wrapper_btCompoundShape::_bind___eq},
	{"fromVoid", &luna_wrapper_btCompoundShape::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btCompoundShape::_bind_asVoid},
	{"getTable", &luna_wrapper_btCompoundShape::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btCompoundShape >::converters[] = {
	{"btCollisionShape", &luna_wrapper_btCompoundShape::_cast_from_btCollisionShape},
	{0,0}
};

luna_RegEnumType LunaTraits< btCompoundShape >::enumValues[] = {
	{0,0}
};



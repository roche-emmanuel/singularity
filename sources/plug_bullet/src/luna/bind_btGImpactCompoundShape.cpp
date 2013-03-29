#include <plug_common.h>

#include <luna/wrappers/wrapper_btGImpactCompoundShape.h>

class luna_wrapper_btGImpactCompoundShape {
public:
	typedef Luna< btGImpactCompoundShape > luna_t;

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

		btGImpactCompoundShape* self= (btGImpactCompoundShape*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btGImpactCompoundShape >::push(L,self,false);
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
		//btGImpactCompoundShape* ptr= dynamic_cast< btGImpactCompoundShape* >(Luna< btCollisionShape >::check(L,1));
		btGImpactCompoundShape* ptr= luna_caster< btCollisionShape, btGImpactCompoundShape >::cast(Luna< btCollisionShape >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btGImpactCompoundShape >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_childrenHasTransform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPrimitiveManager(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCompoundPrimitiveManager(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumChildShapes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addChildShape_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,2))) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,58243831)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btCollisionShape >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addChildShape_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionShape >::check(L,2)) ) ) return false;
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

	inline static bool _lg_typecheck_getChildAabb(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getChildTransform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setChildTransform(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_needsRetrieveTriangles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_needsRetrieveTetrahedrons(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBulletTriangle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,58243831) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBulletTetrahedron(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,58243831) ) return false;
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

	inline static bool _lg_typecheck_getGImpactShapeType(lua_State *L) {
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

	inline static bool _lg_typecheck_base_getMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_lockChildShapes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_unlockChildShapes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getAabb(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_postUpdate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getShapeType(lua_State *L) {
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

	inline static bool _lg_typecheck_base_setMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_rayTest(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,44790882) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_processAllTriangles(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,46793426)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_childrenHasTransform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getPrimitiveManager(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getNumChildShapes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getChildShape_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getChildShape_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getChildAabb(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getChildTransform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setChildTransform(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_needsRetrieveTriangles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_needsRetrieveTetrahedrons(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getBulletTriangle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,58243831) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getBulletTetrahedron(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,58243831) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_calculateLocalInertia(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getGImpactShapeType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btGImpactCompoundShape::btGImpactCompoundShape(bool children_has_transform = true)
	static btGImpactCompoundShape* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGImpactCompoundShape::btGImpactCompoundShape(bool children_has_transform = true) function, expected prototype:\nbtGImpactCompoundShape::btGImpactCompoundShape(bool children_has_transform = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool children_has_transform=luatop>0 ? (bool)(lua_toboolean(L,1)==1) : (bool)true;

		return new btGImpactCompoundShape(children_has_transform);
	}

	// btGImpactCompoundShape::btGImpactCompoundShape(lua_Table * data, bool children_has_transform = true)
	static btGImpactCompoundShape* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGImpactCompoundShape::btGImpactCompoundShape(lua_Table * data, bool children_has_transform = true) function, expected prototype:\nbtGImpactCompoundShape::btGImpactCompoundShape(lua_Table * data, bool children_has_transform = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool children_has_transform=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		return new wrapper_btGImpactCompoundShape(L,NULL, children_has_transform);
	}

	// Overload binder for btGImpactCompoundShape::btGImpactCompoundShape
	static btGImpactCompoundShape* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btGImpactCompoundShape, cannot match any of the overloads for function btGImpactCompoundShape:\n  btGImpactCompoundShape(bool)\n  btGImpactCompoundShape(lua_Table *, bool)\n");
		return NULL;
	}


	// Function binds:
	// bool btGImpactCompoundShape::childrenHasTransform() const
	static int _bind_childrenHasTransform(lua_State *L) {
		if (!_lg_typecheck_childrenHasTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGImpactCompoundShape::childrenHasTransform() const function, expected prototype:\nbool btGImpactCompoundShape::childrenHasTransform() const\nClass arguments details:\n");
		}


		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGImpactCompoundShape::childrenHasTransform() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->childrenHasTransform();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const btPrimitiveManagerBase * btGImpactCompoundShape::getPrimitiveManager() const
	static int _bind_getPrimitiveManager(lua_State *L) {
		if (!_lg_typecheck_getPrimitiveManager(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btPrimitiveManagerBase * btGImpactCompoundShape::getPrimitiveManager() const function, expected prototype:\nconst btPrimitiveManagerBase * btGImpactCompoundShape::getPrimitiveManager() const\nClass arguments details:\n");
		}


		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btPrimitiveManagerBase * btGImpactCompoundShape::getPrimitiveManager() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btPrimitiveManagerBase * lret = self->getPrimitiveManager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPrimitiveManagerBase >::push(L,lret,false);

		return 1;
	}

	// btGImpactCompoundShape::CompoundPrimitiveManager * btGImpactCompoundShape::getCompoundPrimitiveManager()
	static int _bind_getCompoundPrimitiveManager(lua_State *L) {
		if (!_lg_typecheck_getCompoundPrimitiveManager(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGImpactCompoundShape::CompoundPrimitiveManager * btGImpactCompoundShape::getCompoundPrimitiveManager() function, expected prototype:\nbtGImpactCompoundShape::CompoundPrimitiveManager * btGImpactCompoundShape::getCompoundPrimitiveManager()\nClass arguments details:\n");
		}


		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btGImpactCompoundShape::CompoundPrimitiveManager * btGImpactCompoundShape::getCompoundPrimitiveManager(). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btGImpactCompoundShape::CompoundPrimitiveManager * lret = self->getCompoundPrimitiveManager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btGImpactCompoundShape::CompoundPrimitiveManager >::push(L,lret,false);

		return 1;
	}

	// int btGImpactCompoundShape::getNumChildShapes() const
	static int _bind_getNumChildShapes(lua_State *L) {
		if (!_lg_typecheck_getNumChildShapes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGImpactCompoundShape::getNumChildShapes() const function, expected prototype:\nint btGImpactCompoundShape::getNumChildShapes() const\nClass arguments details:\n");
		}


		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGImpactCompoundShape::getNumChildShapes() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->getNumChildShapes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGImpactCompoundShape::addChildShape(const btTransform & localTransform, btCollisionShape * shape)
	static int _bind_addChildShape_overload_1(lua_State *L) {
		if (!_lg_typecheck_addChildShape_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCompoundShape::addChildShape(const btTransform & localTransform, btCollisionShape * shape) function, expected prototype:\nvoid btGImpactCompoundShape::addChildShape(const btTransform & localTransform, btCollisionShape * shape)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 58243831\n");
		}

		const btTransform* localTransform_ptr=(Luna< btTransform >::check(L,2));
		if( !localTransform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localTransform in btGImpactCompoundShape::addChildShape function");
		}
		const btTransform & localTransform=*localTransform_ptr;
		btCollisionShape* shape=(Luna< btCollisionShape >::check(L,3));

		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCompoundShape::addChildShape(const btTransform &, btCollisionShape *). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->addChildShape(localTransform, shape);

		return 0;
	}

	// void btGImpactCompoundShape::addChildShape(btCollisionShape * shape)
	static int _bind_addChildShape_overload_2(lua_State *L) {
		if (!_lg_typecheck_addChildShape_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCompoundShape::addChildShape(btCollisionShape * shape) function, expected prototype:\nvoid btGImpactCompoundShape::addChildShape(btCollisionShape * shape)\nClass arguments details:\narg 1 ID = 58243831\n");
		}

		btCollisionShape* shape=(Luna< btCollisionShape >::check(L,2));

		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCompoundShape::addChildShape(btCollisionShape *). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->addChildShape(shape);

		return 0;
	}

	// Overload binder for btGImpactCompoundShape::addChildShape
	static int _bind_addChildShape(lua_State *L) {
		if (_lg_typecheck_addChildShape_overload_1(L)) return _bind_addChildShape_overload_1(L);
		if (_lg_typecheck_addChildShape_overload_2(L)) return _bind_addChildShape_overload_2(L);

		luaL_error(L, "error in function addChildShape, cannot match any of the overloads for function addChildShape:\n  addChildShape(const btTransform &, btCollisionShape *)\n  addChildShape(btCollisionShape *)\n");
		return 0;
	}

	// btCollisionShape * btGImpactCompoundShape::getChildShape(int index)
	static int _bind_getChildShape_overload_1(lua_State *L) {
		if (!_lg_typecheck_getChildShape_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionShape * btGImpactCompoundShape::getChildShape(int index) function, expected prototype:\nbtCollisionShape * btGImpactCompoundShape::getChildShape(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionShape * btGImpactCompoundShape::getChildShape(int). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btCollisionShape * lret = self->getChildShape(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShape >::push(L,lret,false);

		return 1;
	}

	// const btCollisionShape * btGImpactCompoundShape::getChildShape(int index) const
	static int _bind_getChildShape_overload_2(lua_State *L) {
		if (!_lg_typecheck_getChildShape_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btCollisionShape * btGImpactCompoundShape::getChildShape(int index) const function, expected prototype:\nconst btCollisionShape * btGImpactCompoundShape::getChildShape(int index) const\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btCollisionShape * btGImpactCompoundShape::getChildShape(int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btCollisionShape * lret = self->getChildShape(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShape >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btGImpactCompoundShape::getChildShape
	static int _bind_getChildShape(lua_State *L) {
		if (_lg_typecheck_getChildShape_overload_1(L)) return _bind_getChildShape_overload_1(L);
		if (_lg_typecheck_getChildShape_overload_2(L)) return _bind_getChildShape_overload_2(L);

		luaL_error(L, "error in function getChildShape, cannot match any of the overloads for function getChildShape:\n  getChildShape(int)\n  getChildShape(int)\n");
		return 0;
	}

	// void btGImpactCompoundShape::getChildAabb(int child_index, const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_getChildAabb(lua_State *L) {
		if (!_lg_typecheck_getChildAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCompoundShape::getChildAabb(int child_index, const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btGImpactCompoundShape::getChildAabb(int child_index, const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 2 ID = 13247377\narg 3 ID = 91544891\narg 4 ID = 91544891\n");
		}

		int child_index=(int)lua_tointeger(L,2);
		const btTransform* t_ptr=(Luna< btTransform >::check(L,3));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btGImpactCompoundShape::getChildAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btGImpactCompoundShape::getChildAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,5));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btGImpactCompoundShape::getChildAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCompoundShape::getChildAabb(int, const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getChildAabb(child_index, t, aabbMin, aabbMax);

		return 0;
	}

	// btTransform btGImpactCompoundShape::getChildTransform(int index) const
	static int _bind_getChildTransform(lua_State *L) {
		if (!_lg_typecheck_getChildTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform btGImpactCompoundShape::getChildTransform(int index) const function, expected prototype:\nbtTransform btGImpactCompoundShape::getChildTransform(int index) const\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform btGImpactCompoundShape::getChildTransform(int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btTransform stack_lret = self->getChildTransform(index);
		btTransform* lret = new btTransform(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,true);

		return 1;
	}

	// void btGImpactCompoundShape::setChildTransform(int index, const btTransform & transform)
	static int _bind_setChildTransform(lua_State *L) {
		if (!_lg_typecheck_setChildTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCompoundShape::setChildTransform(int index, const btTransform & transform) function, expected prototype:\nvoid btGImpactCompoundShape::setChildTransform(int index, const btTransform & transform)\nClass arguments details:\narg 2 ID = 13247377\n");
		}

		int index=(int)lua_tointeger(L,2);
		const btTransform* transform_ptr=(Luna< btTransform >::check(L,3));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in btGImpactCompoundShape::setChildTransform function");
		}
		const btTransform & transform=*transform_ptr;

		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCompoundShape::setChildTransform(int, const btTransform &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->setChildTransform(index, transform);

		return 0;
	}

	// bool btGImpactCompoundShape::needsRetrieveTriangles() const
	static int _bind_needsRetrieveTriangles(lua_State *L) {
		if (!_lg_typecheck_needsRetrieveTriangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGImpactCompoundShape::needsRetrieveTriangles() const function, expected prototype:\nbool btGImpactCompoundShape::needsRetrieveTriangles() const\nClass arguments details:\n");
		}


		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGImpactCompoundShape::needsRetrieveTriangles() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->needsRetrieveTriangles();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btGImpactCompoundShape::needsRetrieveTetrahedrons() const
	static int _bind_needsRetrieveTetrahedrons(lua_State *L) {
		if (!_lg_typecheck_needsRetrieveTetrahedrons(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGImpactCompoundShape::needsRetrieveTetrahedrons() const function, expected prototype:\nbool btGImpactCompoundShape::needsRetrieveTetrahedrons() const\nClass arguments details:\n");
		}


		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGImpactCompoundShape::needsRetrieveTetrahedrons() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->needsRetrieveTetrahedrons();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btGImpactCompoundShape::getBulletTriangle(int prim_index, btTriangleShapeEx & triangle) const
	static int _bind_getBulletTriangle(lua_State *L) {
		if (!_lg_typecheck_getBulletTriangle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCompoundShape::getBulletTriangle(int prim_index, btTriangleShapeEx & triangle) const function, expected prototype:\nvoid btGImpactCompoundShape::getBulletTriangle(int prim_index, btTriangleShapeEx & triangle) const\nClass arguments details:\narg 2 ID = 58243831\n");
		}

		int prim_index=(int)lua_tointeger(L,2);
		btTriangleShapeEx* triangle_ptr=(Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,3));
		if( !triangle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg triangle in btGImpactCompoundShape::getBulletTriangle function");
		}
		btTriangleShapeEx & triangle=*triangle_ptr;

		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCompoundShape::getBulletTriangle(int, btTriangleShapeEx &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getBulletTriangle(prim_index, triangle);

		return 0;
	}

	// void btGImpactCompoundShape::getBulletTetrahedron(int prim_index, btTetrahedronShapeEx & tetrahedron) const
	static int _bind_getBulletTetrahedron(lua_State *L) {
		if (!_lg_typecheck_getBulletTetrahedron(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCompoundShape::getBulletTetrahedron(int prim_index, btTetrahedronShapeEx & tetrahedron) const function, expected prototype:\nvoid btGImpactCompoundShape::getBulletTetrahedron(int prim_index, btTetrahedronShapeEx & tetrahedron) const\nClass arguments details:\narg 2 ID = 58243831\n");
		}

		int prim_index=(int)lua_tointeger(L,2);
		btTetrahedronShapeEx* tetrahedron_ptr=(Luna< btCollisionShape >::checkSubType< btTetrahedronShapeEx >(L,3));
		if( !tetrahedron_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tetrahedron in btGImpactCompoundShape::getBulletTetrahedron function");
		}
		btTetrahedronShapeEx & tetrahedron=*tetrahedron_ptr;

		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCompoundShape::getBulletTetrahedron(int, btTetrahedronShapeEx &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getBulletTetrahedron(prim_index, tetrahedron);

		return 0;
	}

	// void btGImpactCompoundShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_calculateLocalInertia(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCompoundShape::calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btGImpactCompoundShape::calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btGImpactCompoundShape::calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCompoundShape::calculateLocalInertia(float, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->calculateLocalInertia(mass, inertia);

		return 0;
	}

	// const char * btGImpactCompoundShape::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btGImpactCompoundShape::getName() const function, expected prototype:\nconst char * btGImpactCompoundShape::getName() const\nClass arguments details:\n");
		}


		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btGImpactCompoundShape::getName() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const char * lret = self->getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// eGIMPACT_SHAPE_TYPE btGImpactCompoundShape::getGImpactShapeType() const
	static int _bind_getGImpactShapeType(lua_State *L) {
		if (!_lg_typecheck_getGImpactShapeType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in eGIMPACT_SHAPE_TYPE btGImpactCompoundShape::getGImpactShapeType() const function, expected prototype:\neGIMPACT_SHAPE_TYPE btGImpactCompoundShape::getGImpactShapeType() const\nClass arguments details:\n");
		}


		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call eGIMPACT_SHAPE_TYPE btGImpactCompoundShape::getGImpactShapeType() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		eGIMPACT_SHAPE_TYPE lret = self->getGImpactShapeType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGImpactCompoundShape::base_getBoundingSphere(btVector3 & center, float & radius) const
	static int _bind_base_getBoundingSphere(lua_State *L) {
		if (!_lg_typecheck_base_getBoundingSphere(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCompoundShape::base_getBoundingSphere(btVector3 & center, float & radius) const function, expected prototype:\nvoid btGImpactCompoundShape::base_getBoundingSphere(btVector3 & center, float & radius) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btGImpactCompoundShape::base_getBoundingSphere function");
		}
		btVector3 & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCompoundShape::base_getBoundingSphere(btVector3 &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactCompoundShape::getBoundingSphere(center, radius);

		return 0;
	}

	// float btGImpactCompoundShape::base_getAngularMotionDisc() const
	static int _bind_base_getAngularMotionDisc(lua_State *L) {
		if (!_lg_typecheck_base_getAngularMotionDisc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btGImpactCompoundShape::base_getAngularMotionDisc() const function, expected prototype:\nfloat btGImpactCompoundShape::base_getAngularMotionDisc() const\nClass arguments details:\n");
		}


		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btGImpactCompoundShape::base_getAngularMotionDisc() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btGImpactCompoundShape::getAngularMotionDisc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btGImpactCompoundShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const
	static int _bind_base_getContactBreakingThreshold(lua_State *L) {
		if (!_lg_typecheck_base_getContactBreakingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btGImpactCompoundShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const function, expected prototype:\nfloat btGImpactCompoundShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const\nClass arguments details:\n");
		}

		float defaultContactThresholdFactor=(float)lua_tonumber(L,2);

		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btGImpactCompoundShape::base_getContactBreakingThreshold(float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btGImpactCompoundShape::getContactBreakingThreshold(defaultContactThresholdFactor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btGImpactCompoundShape::base_getAnisotropicRollingFrictionDirection() const
	static int _bind_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if (!_lg_typecheck_base_getAnisotropicRollingFrictionDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btGImpactCompoundShape::base_getAnisotropicRollingFrictionDirection() const function, expected prototype:\nbtVector3 btGImpactCompoundShape::base_getAnisotropicRollingFrictionDirection() const\nClass arguments details:\n");
		}


		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btGImpactCompoundShape::base_getAnisotropicRollingFrictionDirection() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btGImpactCompoundShape::getAnisotropicRollingFrictionDirection();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// int btGImpactCompoundShape::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGImpactCompoundShape::base_calculateSerializeBufferSize() const function, expected prototype:\nint btGImpactCompoundShape::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGImpactCompoundShape::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btGImpactCompoundShape::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btGImpactCompoundShape::base_getMargin() const
	static int _bind_base_getMargin(lua_State *L) {
		if (!_lg_typecheck_base_getMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btGImpactCompoundShape::base_getMargin() const function, expected prototype:\nfloat btGImpactCompoundShape::base_getMargin() const\nClass arguments details:\n");
		}


		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btGImpactCompoundShape::base_getMargin() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btGImpactCompoundShape::getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGImpactCompoundShape::base_lockChildShapes() const
	static int _bind_base_lockChildShapes(lua_State *L) {
		if (!_lg_typecheck_base_lockChildShapes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCompoundShape::base_lockChildShapes() const function, expected prototype:\nvoid btGImpactCompoundShape::base_lockChildShapes() const\nClass arguments details:\n");
		}


		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCompoundShape::base_lockChildShapes() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactCompoundShape::lockChildShapes();

		return 0;
	}

	// void btGImpactCompoundShape::base_unlockChildShapes() const
	static int _bind_base_unlockChildShapes(lua_State *L) {
		if (!_lg_typecheck_base_unlockChildShapes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCompoundShape::base_unlockChildShapes() const function, expected prototype:\nvoid btGImpactCompoundShape::base_unlockChildShapes() const\nClass arguments details:\n");
		}


		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCompoundShape::base_unlockChildShapes() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactCompoundShape::unlockChildShapes();

		return 0;
	}

	// void btGImpactCompoundShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabb(lua_State *L) {
		if (!_lg_typecheck_base_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCompoundShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btGImpactCompoundShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btGImpactCompoundShape::base_getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btGImpactCompoundShape::base_getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btGImpactCompoundShape::base_getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCompoundShape::base_getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactCompoundShape::getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btGImpactCompoundShape::base_postUpdate()
	static int _bind_base_postUpdate(lua_State *L) {
		if (!_lg_typecheck_base_postUpdate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCompoundShape::base_postUpdate() function, expected prototype:\nvoid btGImpactCompoundShape::base_postUpdate()\nClass arguments details:\n");
		}


		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCompoundShape::base_postUpdate(). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactCompoundShape::postUpdate();

		return 0;
	}

	// int btGImpactCompoundShape::base_getShapeType() const
	static int _bind_base_getShapeType(lua_State *L) {
		if (!_lg_typecheck_base_getShapeType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGImpactCompoundShape::base_getShapeType() const function, expected prototype:\nint btGImpactCompoundShape::base_getShapeType() const\nClass arguments details:\n");
		}


		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGImpactCompoundShape::base_getShapeType() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btGImpactCompoundShape::getShapeType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGImpactCompoundShape::base_setLocalScaling(const btVector3 & scaling)
	static int _bind_base_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCompoundShape::base_setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btGImpactCompoundShape::base_setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btGImpactCompoundShape::base_setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCompoundShape::base_setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactCompoundShape::setLocalScaling(scaling);

		return 0;
	}

	// const btVector3 & btGImpactCompoundShape::base_getLocalScaling() const
	static int _bind_base_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_getLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btGImpactCompoundShape::base_getLocalScaling() const function, expected prototype:\nconst btVector3 & btGImpactCompoundShape::base_getLocalScaling() const\nClass arguments details:\n");
		}


		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btGImpactCompoundShape::base_getLocalScaling() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->btGImpactCompoundShape::getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btGImpactCompoundShape::base_setMargin(float margin)
	static int _bind_base_setMargin(lua_State *L) {
		if (!_lg_typecheck_base_setMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCompoundShape::base_setMargin(float margin) function, expected prototype:\nvoid btGImpactCompoundShape::base_setMargin(float margin)\nClass arguments details:\n");
		}

		float margin=(float)lua_tonumber(L,2);

		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCompoundShape::base_setMargin(float). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactCompoundShape::setMargin(margin);

		return 0;
	}

	// void btGImpactCompoundShape::base_rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btCollisionWorld::RayResultCallback & resultCallback) const
	static int _bind_base_rayTest(lua_State *L) {
		if (!_lg_typecheck_base_rayTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCompoundShape::base_rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btCollisionWorld::RayResultCallback & resultCallback) const function, expected prototype:\nvoid btGImpactCompoundShape::base_rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btCollisionWorld::RayResultCallback & resultCallback) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 44790882\n");
		}

		const btVector3* rayFrom_ptr=(Luna< btVector3 >::check(L,2));
		if( !rayFrom_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayFrom in btGImpactCompoundShape::base_rayTest function");
		}
		const btVector3 & rayFrom=*rayFrom_ptr;
		const btVector3* rayTo_ptr=(Luna< btVector3 >::check(L,3));
		if( !rayTo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayTo in btGImpactCompoundShape::base_rayTest function");
		}
		const btVector3 & rayTo=*rayTo_ptr;
		btCollisionWorld::RayResultCallback* resultCallback_ptr=(Luna< btCollisionWorld::RayResultCallback >::check(L,4));
		if( !resultCallback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg resultCallback in btGImpactCompoundShape::base_rayTest function");
		}
		btCollisionWorld::RayResultCallback & resultCallback=*resultCallback_ptr;

		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCompoundShape::base_rayTest(const btVector3 &, const btVector3 &, btCollisionWorld::RayResultCallback &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactCompoundShape::rayTest(rayFrom, rayTo, resultCallback);

		return 0;
	}

	// void btGImpactCompoundShape::base_processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	static int _bind_base_processAllTriangles(lua_State *L) {
		if (!_lg_typecheck_base_processAllTriangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCompoundShape::base_processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const function, expected prototype:\nvoid btGImpactCompoundShape::base_processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 46793426\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		btTriangleCallback* callback=(Luna< btTriangleCallback >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btGImpactCompoundShape::base_processAllTriangles function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btGImpactCompoundShape::base_processAllTriangles function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCompoundShape::base_processAllTriangles(btTriangleCallback *, const btVector3 &, const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactCompoundShape::processAllTriangles(callback, aabbMin, aabbMax);

		return 0;
	}

	// bool btGImpactCompoundShape::base_childrenHasTransform() const
	static int _bind_base_childrenHasTransform(lua_State *L) {
		if (!_lg_typecheck_base_childrenHasTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGImpactCompoundShape::base_childrenHasTransform() const function, expected prototype:\nbool btGImpactCompoundShape::base_childrenHasTransform() const\nClass arguments details:\n");
		}


		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGImpactCompoundShape::base_childrenHasTransform() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->btGImpactCompoundShape::childrenHasTransform();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const btPrimitiveManagerBase * btGImpactCompoundShape::base_getPrimitiveManager() const
	static int _bind_base_getPrimitiveManager(lua_State *L) {
		if (!_lg_typecheck_base_getPrimitiveManager(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btPrimitiveManagerBase * btGImpactCompoundShape::base_getPrimitiveManager() const function, expected prototype:\nconst btPrimitiveManagerBase * btGImpactCompoundShape::base_getPrimitiveManager() const\nClass arguments details:\n");
		}


		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btPrimitiveManagerBase * btGImpactCompoundShape::base_getPrimitiveManager() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btPrimitiveManagerBase * lret = self->btGImpactCompoundShape::getPrimitiveManager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPrimitiveManagerBase >::push(L,lret,false);

		return 1;
	}

	// int btGImpactCompoundShape::base_getNumChildShapes() const
	static int _bind_base_getNumChildShapes(lua_State *L) {
		if (!_lg_typecheck_base_getNumChildShapes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGImpactCompoundShape::base_getNumChildShapes() const function, expected prototype:\nint btGImpactCompoundShape::base_getNumChildShapes() const\nClass arguments details:\n");
		}


		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGImpactCompoundShape::base_getNumChildShapes() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btGImpactCompoundShape::getNumChildShapes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btCollisionShape * btGImpactCompoundShape::base_getChildShape(int index)
	static int _bind_base_getChildShape_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getChildShape_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionShape * btGImpactCompoundShape::base_getChildShape(int index) function, expected prototype:\nbtCollisionShape * btGImpactCompoundShape::base_getChildShape(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionShape * btGImpactCompoundShape::base_getChildShape(int). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btCollisionShape * lret = self->btGImpactCompoundShape::getChildShape(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShape >::push(L,lret,false);

		return 1;
	}

	// const btCollisionShape * btGImpactCompoundShape::base_getChildShape(int index) const
	static int _bind_base_getChildShape_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getChildShape_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btCollisionShape * btGImpactCompoundShape::base_getChildShape(int index) const function, expected prototype:\nconst btCollisionShape * btGImpactCompoundShape::base_getChildShape(int index) const\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btCollisionShape * btGImpactCompoundShape::base_getChildShape(int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btCollisionShape * lret = self->btGImpactCompoundShape::getChildShape(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShape >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btGImpactCompoundShape::base_getChildShape
	static int _bind_base_getChildShape(lua_State *L) {
		if (_lg_typecheck_base_getChildShape_overload_1(L)) return _bind_base_getChildShape_overload_1(L);
		if (_lg_typecheck_base_getChildShape_overload_2(L)) return _bind_base_getChildShape_overload_2(L);

		luaL_error(L, "error in function base_getChildShape, cannot match any of the overloads for function base_getChildShape:\n  base_getChildShape(int)\n  base_getChildShape(int)\n");
		return 0;
	}

	// void btGImpactCompoundShape::base_getChildAabb(int child_index, const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getChildAabb(lua_State *L) {
		if (!_lg_typecheck_base_getChildAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCompoundShape::base_getChildAabb(int child_index, const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btGImpactCompoundShape::base_getChildAabb(int child_index, const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 2 ID = 13247377\narg 3 ID = 91544891\narg 4 ID = 91544891\n");
		}

		int child_index=(int)lua_tointeger(L,2);
		const btTransform* t_ptr=(Luna< btTransform >::check(L,3));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btGImpactCompoundShape::base_getChildAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btGImpactCompoundShape::base_getChildAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,5));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btGImpactCompoundShape::base_getChildAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCompoundShape::base_getChildAabb(int, const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactCompoundShape::getChildAabb(child_index, t, aabbMin, aabbMax);

		return 0;
	}

	// btTransform btGImpactCompoundShape::base_getChildTransform(int index) const
	static int _bind_base_getChildTransform(lua_State *L) {
		if (!_lg_typecheck_base_getChildTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform btGImpactCompoundShape::base_getChildTransform(int index) const function, expected prototype:\nbtTransform btGImpactCompoundShape::base_getChildTransform(int index) const\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform btGImpactCompoundShape::base_getChildTransform(int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btTransform stack_lret = self->btGImpactCompoundShape::getChildTransform(index);
		btTransform* lret = new btTransform(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,true);

		return 1;
	}

	// void btGImpactCompoundShape::base_setChildTransform(int index, const btTransform & transform)
	static int _bind_base_setChildTransform(lua_State *L) {
		if (!_lg_typecheck_base_setChildTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCompoundShape::base_setChildTransform(int index, const btTransform & transform) function, expected prototype:\nvoid btGImpactCompoundShape::base_setChildTransform(int index, const btTransform & transform)\nClass arguments details:\narg 2 ID = 13247377\n");
		}

		int index=(int)lua_tointeger(L,2);
		const btTransform* transform_ptr=(Luna< btTransform >::check(L,3));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in btGImpactCompoundShape::base_setChildTransform function");
		}
		const btTransform & transform=*transform_ptr;

		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCompoundShape::base_setChildTransform(int, const btTransform &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactCompoundShape::setChildTransform(index, transform);

		return 0;
	}

	// bool btGImpactCompoundShape::base_needsRetrieveTriangles() const
	static int _bind_base_needsRetrieveTriangles(lua_State *L) {
		if (!_lg_typecheck_base_needsRetrieveTriangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGImpactCompoundShape::base_needsRetrieveTriangles() const function, expected prototype:\nbool btGImpactCompoundShape::base_needsRetrieveTriangles() const\nClass arguments details:\n");
		}


		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGImpactCompoundShape::base_needsRetrieveTriangles() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->btGImpactCompoundShape::needsRetrieveTriangles();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btGImpactCompoundShape::base_needsRetrieveTetrahedrons() const
	static int _bind_base_needsRetrieveTetrahedrons(lua_State *L) {
		if (!_lg_typecheck_base_needsRetrieveTetrahedrons(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGImpactCompoundShape::base_needsRetrieveTetrahedrons() const function, expected prototype:\nbool btGImpactCompoundShape::base_needsRetrieveTetrahedrons() const\nClass arguments details:\n");
		}


		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGImpactCompoundShape::base_needsRetrieveTetrahedrons() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->btGImpactCompoundShape::needsRetrieveTetrahedrons();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btGImpactCompoundShape::base_getBulletTriangle(int prim_index, btTriangleShapeEx & triangle) const
	static int _bind_base_getBulletTriangle(lua_State *L) {
		if (!_lg_typecheck_base_getBulletTriangle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCompoundShape::base_getBulletTriangle(int prim_index, btTriangleShapeEx & triangle) const function, expected prototype:\nvoid btGImpactCompoundShape::base_getBulletTriangle(int prim_index, btTriangleShapeEx & triangle) const\nClass arguments details:\narg 2 ID = 58243831\n");
		}

		int prim_index=(int)lua_tointeger(L,2);
		btTriangleShapeEx* triangle_ptr=(Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,3));
		if( !triangle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg triangle in btGImpactCompoundShape::base_getBulletTriangle function");
		}
		btTriangleShapeEx & triangle=*triangle_ptr;

		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCompoundShape::base_getBulletTriangle(int, btTriangleShapeEx &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactCompoundShape::getBulletTriangle(prim_index, triangle);

		return 0;
	}

	// void btGImpactCompoundShape::base_getBulletTetrahedron(int prim_index, btTetrahedronShapeEx & tetrahedron) const
	static int _bind_base_getBulletTetrahedron(lua_State *L) {
		if (!_lg_typecheck_base_getBulletTetrahedron(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCompoundShape::base_getBulletTetrahedron(int prim_index, btTetrahedronShapeEx & tetrahedron) const function, expected prototype:\nvoid btGImpactCompoundShape::base_getBulletTetrahedron(int prim_index, btTetrahedronShapeEx & tetrahedron) const\nClass arguments details:\narg 2 ID = 58243831\n");
		}

		int prim_index=(int)lua_tointeger(L,2);
		btTetrahedronShapeEx* tetrahedron_ptr=(Luna< btCollisionShape >::checkSubType< btTetrahedronShapeEx >(L,3));
		if( !tetrahedron_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tetrahedron in btGImpactCompoundShape::base_getBulletTetrahedron function");
		}
		btTetrahedronShapeEx & tetrahedron=*tetrahedron_ptr;

		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCompoundShape::base_getBulletTetrahedron(int, btTetrahedronShapeEx &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactCompoundShape::getBulletTetrahedron(prim_index, tetrahedron);

		return 0;
	}

	// void btGImpactCompoundShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_base_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_base_calculateLocalInertia(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCompoundShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btGImpactCompoundShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btGImpactCompoundShape::base_calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCompoundShape::base_calculateLocalInertia(float, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactCompoundShape::calculateLocalInertia(mass, inertia);

		return 0;
	}

	// const char * btGImpactCompoundShape::base_getName() const
	static int _bind_base_getName(lua_State *L) {
		if (!_lg_typecheck_base_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btGImpactCompoundShape::base_getName() const function, expected prototype:\nconst char * btGImpactCompoundShape::base_getName() const\nClass arguments details:\n");
		}


		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btGImpactCompoundShape::base_getName() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const char * lret = self->btGImpactCompoundShape::getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// eGIMPACT_SHAPE_TYPE btGImpactCompoundShape::base_getGImpactShapeType() const
	static int _bind_base_getGImpactShapeType(lua_State *L) {
		if (!_lg_typecheck_base_getGImpactShapeType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in eGIMPACT_SHAPE_TYPE btGImpactCompoundShape::base_getGImpactShapeType() const function, expected prototype:\neGIMPACT_SHAPE_TYPE btGImpactCompoundShape::base_getGImpactShapeType() const\nClass arguments details:\n");
		}


		btGImpactCompoundShape* self=Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call eGIMPACT_SHAPE_TYPE btGImpactCompoundShape::base_getGImpactShapeType() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		eGIMPACT_SHAPE_TYPE lret = self->btGImpactCompoundShape::getGImpactShapeType();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btGImpactCompoundShape* LunaTraits< btGImpactCompoundShape >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btGImpactCompoundShape::_bind_ctor(L);
}

void LunaTraits< btGImpactCompoundShape >::_bind_dtor(btGImpactCompoundShape* obj) {
	delete obj;
}

const char LunaTraits< btGImpactCompoundShape >::className[] = "btGImpactCompoundShape";
const char LunaTraits< btGImpactCompoundShape >::fullName[] = "btGImpactCompoundShape";
const char LunaTraits< btGImpactCompoundShape >::moduleName[] = "bullet";
const char* LunaTraits< btGImpactCompoundShape >::parents[] = {"bullet.btGImpactShapeInterface", 0};
const int LunaTraits< btGImpactCompoundShape >::hash = 55656739;
const int LunaTraits< btGImpactCompoundShape >::uniqueIDs[] = {58243831,0};

luna_RegType LunaTraits< btGImpactCompoundShape >::methods[] = {
	{"childrenHasTransform", &luna_wrapper_btGImpactCompoundShape::_bind_childrenHasTransform},
	{"getPrimitiveManager", &luna_wrapper_btGImpactCompoundShape::_bind_getPrimitiveManager},
	{"getCompoundPrimitiveManager", &luna_wrapper_btGImpactCompoundShape::_bind_getCompoundPrimitiveManager},
	{"getNumChildShapes", &luna_wrapper_btGImpactCompoundShape::_bind_getNumChildShapes},
	{"addChildShape", &luna_wrapper_btGImpactCompoundShape::_bind_addChildShape},
	{"getChildShape", &luna_wrapper_btGImpactCompoundShape::_bind_getChildShape},
	{"getChildAabb", &luna_wrapper_btGImpactCompoundShape::_bind_getChildAabb},
	{"getChildTransform", &luna_wrapper_btGImpactCompoundShape::_bind_getChildTransform},
	{"setChildTransform", &luna_wrapper_btGImpactCompoundShape::_bind_setChildTransform},
	{"needsRetrieveTriangles", &luna_wrapper_btGImpactCompoundShape::_bind_needsRetrieveTriangles},
	{"needsRetrieveTetrahedrons", &luna_wrapper_btGImpactCompoundShape::_bind_needsRetrieveTetrahedrons},
	{"getBulletTriangle", &luna_wrapper_btGImpactCompoundShape::_bind_getBulletTriangle},
	{"getBulletTetrahedron", &luna_wrapper_btGImpactCompoundShape::_bind_getBulletTetrahedron},
	{"calculateLocalInertia", &luna_wrapper_btGImpactCompoundShape::_bind_calculateLocalInertia},
	{"getName", &luna_wrapper_btGImpactCompoundShape::_bind_getName},
	{"getGImpactShapeType", &luna_wrapper_btGImpactCompoundShape::_bind_getGImpactShapeType},
	{"base_getBoundingSphere", &luna_wrapper_btGImpactCompoundShape::_bind_base_getBoundingSphere},
	{"base_getAngularMotionDisc", &luna_wrapper_btGImpactCompoundShape::_bind_base_getAngularMotionDisc},
	{"base_getContactBreakingThreshold", &luna_wrapper_btGImpactCompoundShape::_bind_base_getContactBreakingThreshold},
	{"base_getAnisotropicRollingFrictionDirection", &luna_wrapper_btGImpactCompoundShape::_bind_base_getAnisotropicRollingFrictionDirection},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btGImpactCompoundShape::_bind_base_calculateSerializeBufferSize},
	{"base_getMargin", &luna_wrapper_btGImpactCompoundShape::_bind_base_getMargin},
	{"base_lockChildShapes", &luna_wrapper_btGImpactCompoundShape::_bind_base_lockChildShapes},
	{"base_unlockChildShapes", &luna_wrapper_btGImpactCompoundShape::_bind_base_unlockChildShapes},
	{"base_getAabb", &luna_wrapper_btGImpactCompoundShape::_bind_base_getAabb},
	{"base_postUpdate", &luna_wrapper_btGImpactCompoundShape::_bind_base_postUpdate},
	{"base_getShapeType", &luna_wrapper_btGImpactCompoundShape::_bind_base_getShapeType},
	{"base_setLocalScaling", &luna_wrapper_btGImpactCompoundShape::_bind_base_setLocalScaling},
	{"base_getLocalScaling", &luna_wrapper_btGImpactCompoundShape::_bind_base_getLocalScaling},
	{"base_setMargin", &luna_wrapper_btGImpactCompoundShape::_bind_base_setMargin},
	{"base_rayTest", &luna_wrapper_btGImpactCompoundShape::_bind_base_rayTest},
	{"base_processAllTriangles", &luna_wrapper_btGImpactCompoundShape::_bind_base_processAllTriangles},
	{"base_childrenHasTransform", &luna_wrapper_btGImpactCompoundShape::_bind_base_childrenHasTransform},
	{"base_getPrimitiveManager", &luna_wrapper_btGImpactCompoundShape::_bind_base_getPrimitiveManager},
	{"base_getNumChildShapes", &luna_wrapper_btGImpactCompoundShape::_bind_base_getNumChildShapes},
	{"base_getChildShape", &luna_wrapper_btGImpactCompoundShape::_bind_base_getChildShape},
	{"base_getChildAabb", &luna_wrapper_btGImpactCompoundShape::_bind_base_getChildAabb},
	{"base_getChildTransform", &luna_wrapper_btGImpactCompoundShape::_bind_base_getChildTransform},
	{"base_setChildTransform", &luna_wrapper_btGImpactCompoundShape::_bind_base_setChildTransform},
	{"base_needsRetrieveTriangles", &luna_wrapper_btGImpactCompoundShape::_bind_base_needsRetrieveTriangles},
	{"base_needsRetrieveTetrahedrons", &luna_wrapper_btGImpactCompoundShape::_bind_base_needsRetrieveTetrahedrons},
	{"base_getBulletTriangle", &luna_wrapper_btGImpactCompoundShape::_bind_base_getBulletTriangle},
	{"base_getBulletTetrahedron", &luna_wrapper_btGImpactCompoundShape::_bind_base_getBulletTetrahedron},
	{"base_calculateLocalInertia", &luna_wrapper_btGImpactCompoundShape::_bind_base_calculateLocalInertia},
	{"base_getName", &luna_wrapper_btGImpactCompoundShape::_bind_base_getName},
	{"base_getGImpactShapeType", &luna_wrapper_btGImpactCompoundShape::_bind_base_getGImpactShapeType},
	{"__eq", &luna_wrapper_btGImpactCompoundShape::_bind___eq},
	{"fromVoid", &luna_wrapper_btGImpactCompoundShape::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btGImpactCompoundShape::_bind_asVoid},
	{"getTable", &luna_wrapper_btGImpactCompoundShape::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btGImpactCompoundShape >::converters[] = {
	{"btCollisionShape", &luna_wrapper_btGImpactCompoundShape::_cast_from_btCollisionShape},
	{0,0}
};

luna_RegEnumType LunaTraits< btGImpactCompoundShape >::enumValues[] = {
	{0,0}
};



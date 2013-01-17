#include <plug_common.h>

#include <luna/wrappers/wrapper_btGImpactShapeInterface.h>

class luna_wrapper_btGImpactShapeInterface {
public:
	typedef Luna< btGImpactShapeInterface > luna_t;

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

	// Derived class converters:
	static int _cast_from_btCollisionShape(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btGImpactShapeInterface* ptr= dynamic_cast< btGImpactShapeInterface* >(Luna< btCollisionShape >::check(L,1));
		btGImpactShapeInterface* ptr= luna_caster< btCollisionShape, btGImpactShapeInterface >::cast(Luna< btCollisionShape >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btGImpactShapeInterface >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getGImpactShapeType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBoxSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_hasBoxSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPrimitiveManager(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumChildShapes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_childrenHasTransform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_lockChildShapes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_unlockChildShapes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPrimitiveTriangle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,79712881) ) return false;
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

	inline static bool _lg_typecheck_updateBound(lua_State *L) {
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

	inline static bool _lg_typecheck_postUpdate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalBox(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getShapeType(lua_State *L) {
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

	inline static bool _lg_typecheck_setMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_rayTest(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,44790882) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_processAllTriangles(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,46793426)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
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

	inline static bool _lg_typecheck_base_getChildAabb(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btGImpactShapeInterface::btGImpactShapeInterface(lua_Table * data)
	static btGImpactShapeInterface* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGImpactShapeInterface::btGImpactShapeInterface(lua_Table * data) function, expected prototype:\nbtGImpactShapeInterface::btGImpactShapeInterface(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btGImpactShapeInterface(L,NULL);
	}


	// Function binds:
	// eGIMPACT_SHAPE_TYPE btGImpactShapeInterface::getGImpactShapeType() const
	static int _bind_getGImpactShapeType(lua_State *L) {
		if (!_lg_typecheck_getGImpactShapeType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in eGIMPACT_SHAPE_TYPE btGImpactShapeInterface::getGImpactShapeType() const function, expected prototype:\neGIMPACT_SHAPE_TYPE btGImpactShapeInterface::getGImpactShapeType() const\nClass arguments details:\n");
		}


		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call eGIMPACT_SHAPE_TYPE btGImpactShapeInterface::getGImpactShapeType() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		eGIMPACT_SHAPE_TYPE lret = self->getGImpactShapeType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const btGImpactQuantizedBvh * btGImpactShapeInterface::getBoxSet() const
	static int _bind_getBoxSet(lua_State *L) {
		if (!_lg_typecheck_getBoxSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btGImpactQuantizedBvh * btGImpactShapeInterface::getBoxSet() const function, expected prototype:\nconst btGImpactQuantizedBvh * btGImpactShapeInterface::getBoxSet() const\nClass arguments details:\n");
		}


		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btGImpactQuantizedBvh * btGImpactShapeInterface::getBoxSet() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btGImpactQuantizedBvh * lret = self->getBoxSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btGImpactQuantizedBvh >::push(L,lret,false);

		return 1;
	}

	// bool btGImpactShapeInterface::hasBoxSet() const
	static int _bind_hasBoxSet(lua_State *L) {
		if (!_lg_typecheck_hasBoxSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGImpactShapeInterface::hasBoxSet() const function, expected prototype:\nbool btGImpactShapeInterface::hasBoxSet() const\nClass arguments details:\n");
		}


		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGImpactShapeInterface::hasBoxSet() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->hasBoxSet();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const btPrimitiveManagerBase * btGImpactShapeInterface::getPrimitiveManager() const
	static int _bind_getPrimitiveManager(lua_State *L) {
		if (!_lg_typecheck_getPrimitiveManager(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btPrimitiveManagerBase * btGImpactShapeInterface::getPrimitiveManager() const function, expected prototype:\nconst btPrimitiveManagerBase * btGImpactShapeInterface::getPrimitiveManager() const\nClass arguments details:\n");
		}


		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btPrimitiveManagerBase * btGImpactShapeInterface::getPrimitiveManager() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btPrimitiveManagerBase * lret = self->getPrimitiveManager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPrimitiveManagerBase >::push(L,lret,false);

		return 1;
	}

	// int btGImpactShapeInterface::getNumChildShapes() const
	static int _bind_getNumChildShapes(lua_State *L) {
		if (!_lg_typecheck_getNumChildShapes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGImpactShapeInterface::getNumChildShapes() const function, expected prototype:\nint btGImpactShapeInterface::getNumChildShapes() const\nClass arguments details:\n");
		}


		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGImpactShapeInterface::getNumChildShapes() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->getNumChildShapes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btGImpactShapeInterface::childrenHasTransform() const
	static int _bind_childrenHasTransform(lua_State *L) {
		if (!_lg_typecheck_childrenHasTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGImpactShapeInterface::childrenHasTransform() const function, expected prototype:\nbool btGImpactShapeInterface::childrenHasTransform() const\nClass arguments details:\n");
		}


		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGImpactShapeInterface::childrenHasTransform() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->childrenHasTransform();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btGImpactShapeInterface::needsRetrieveTriangles() const
	static int _bind_needsRetrieveTriangles(lua_State *L) {
		if (!_lg_typecheck_needsRetrieveTriangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGImpactShapeInterface::needsRetrieveTriangles() const function, expected prototype:\nbool btGImpactShapeInterface::needsRetrieveTriangles() const\nClass arguments details:\n");
		}


		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGImpactShapeInterface::needsRetrieveTriangles() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->needsRetrieveTriangles();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btGImpactShapeInterface::needsRetrieveTetrahedrons() const
	static int _bind_needsRetrieveTetrahedrons(lua_State *L) {
		if (!_lg_typecheck_needsRetrieveTetrahedrons(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGImpactShapeInterface::needsRetrieveTetrahedrons() const function, expected prototype:\nbool btGImpactShapeInterface::needsRetrieveTetrahedrons() const\nClass arguments details:\n");
		}


		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGImpactShapeInterface::needsRetrieveTetrahedrons() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->needsRetrieveTetrahedrons();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btGImpactShapeInterface::getBulletTriangle(int prim_index, btTriangleShapeEx & triangle) const
	static int _bind_getBulletTriangle(lua_State *L) {
		if (!_lg_typecheck_getBulletTriangle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactShapeInterface::getBulletTriangle(int prim_index, btTriangleShapeEx & triangle) const function, expected prototype:\nvoid btGImpactShapeInterface::getBulletTriangle(int prim_index, btTriangleShapeEx & triangle) const\nClass arguments details:\narg 2 ID = 58243831\n");
		}

		int prim_index=(int)lua_tointeger(L,2);
		btTriangleShapeEx* triangle_ptr=(Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,3));
		if( !triangle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg triangle in btGImpactShapeInterface::getBulletTriangle function");
		}
		btTriangleShapeEx & triangle=*triangle_ptr;

		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactShapeInterface::getBulletTriangle(int, btTriangleShapeEx &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getBulletTriangle(prim_index, triangle);

		return 0;
	}

	// void btGImpactShapeInterface::getBulletTetrahedron(int prim_index, btTetrahedronShapeEx & tetrahedron) const
	static int _bind_getBulletTetrahedron(lua_State *L) {
		if (!_lg_typecheck_getBulletTetrahedron(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactShapeInterface::getBulletTetrahedron(int prim_index, btTetrahedronShapeEx & tetrahedron) const function, expected prototype:\nvoid btGImpactShapeInterface::getBulletTetrahedron(int prim_index, btTetrahedronShapeEx & tetrahedron) const\nClass arguments details:\narg 2 ID = 58243831\n");
		}

		int prim_index=(int)lua_tointeger(L,2);
		btTetrahedronShapeEx* tetrahedron_ptr=(Luna< btCollisionShape >::checkSubType< btTetrahedronShapeEx >(L,3));
		if( !tetrahedron_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tetrahedron in btGImpactShapeInterface::getBulletTetrahedron function");
		}
		btTetrahedronShapeEx & tetrahedron=*tetrahedron_ptr;

		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactShapeInterface::getBulletTetrahedron(int, btTetrahedronShapeEx &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getBulletTetrahedron(prim_index, tetrahedron);

		return 0;
	}

	// void btGImpactShapeInterface::lockChildShapes() const
	static int _bind_lockChildShapes(lua_State *L) {
		if (!_lg_typecheck_lockChildShapes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactShapeInterface::lockChildShapes() const function, expected prototype:\nvoid btGImpactShapeInterface::lockChildShapes() const\nClass arguments details:\n");
		}


		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactShapeInterface::lockChildShapes() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->lockChildShapes();

		return 0;
	}

	// void btGImpactShapeInterface::unlockChildShapes() const
	static int _bind_unlockChildShapes(lua_State *L) {
		if (!_lg_typecheck_unlockChildShapes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactShapeInterface::unlockChildShapes() const function, expected prototype:\nvoid btGImpactShapeInterface::unlockChildShapes() const\nClass arguments details:\n");
		}


		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactShapeInterface::unlockChildShapes() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->unlockChildShapes();

		return 0;
	}

	// void btGImpactShapeInterface::getPrimitiveTriangle(int index, btPrimitiveTriangle & triangle) const
	static int _bind_getPrimitiveTriangle(lua_State *L) {
		if (!_lg_typecheck_getPrimitiveTriangle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactShapeInterface::getPrimitiveTriangle(int index, btPrimitiveTriangle & triangle) const function, expected prototype:\nvoid btGImpactShapeInterface::getPrimitiveTriangle(int index, btPrimitiveTriangle & triangle) const\nClass arguments details:\narg 2 ID = 79712881\n");
		}

		int index=(int)lua_tointeger(L,2);
		btPrimitiveTriangle* triangle_ptr=(Luna< btPrimitiveTriangle >::check(L,3));
		if( !triangle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg triangle in btGImpactShapeInterface::getPrimitiveTriangle function");
		}
		btPrimitiveTriangle & triangle=*triangle_ptr;

		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactShapeInterface::getPrimitiveTriangle(int, btPrimitiveTriangle &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getPrimitiveTriangle(index, triangle);

		return 0;
	}

	// void btGImpactShapeInterface::getChildAabb(int child_index, const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_getChildAabb(lua_State *L) {
		if (!_lg_typecheck_getChildAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactShapeInterface::getChildAabb(int child_index, const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btGImpactShapeInterface::getChildAabb(int child_index, const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 2 ID = 13247377\narg 3 ID = 91544891\narg 4 ID = 91544891\n");
		}

		int child_index=(int)lua_tointeger(L,2);
		const btTransform* t_ptr=(Luna< btTransform >::check(L,3));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btGImpactShapeInterface::getChildAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btGImpactShapeInterface::getChildAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,5));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btGImpactShapeInterface::getChildAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactShapeInterface::getChildAabb(int, const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getChildAabb(child_index, t, aabbMin, aabbMax);

		return 0;
	}

	// btCollisionShape * btGImpactShapeInterface::getChildShape(int index)
	static int _bind_getChildShape_overload_1(lua_State *L) {
		if (!_lg_typecheck_getChildShape_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionShape * btGImpactShapeInterface::getChildShape(int index) function, expected prototype:\nbtCollisionShape * btGImpactShapeInterface::getChildShape(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionShape * btGImpactShapeInterface::getChildShape(int). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btCollisionShape * lret = self->getChildShape(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShape >::push(L,lret,false);

		return 1;
	}

	// const btCollisionShape * btGImpactShapeInterface::getChildShape(int index) const
	static int _bind_getChildShape_overload_2(lua_State *L) {
		if (!_lg_typecheck_getChildShape_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btCollisionShape * btGImpactShapeInterface::getChildShape(int index) const function, expected prototype:\nconst btCollisionShape * btGImpactShapeInterface::getChildShape(int index) const\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btCollisionShape * btGImpactShapeInterface::getChildShape(int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btCollisionShape * lret = self->getChildShape(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShape >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btGImpactShapeInterface::getChildShape
	static int _bind_getChildShape(lua_State *L) {
		if (_lg_typecheck_getChildShape_overload_1(L)) return _bind_getChildShape_overload_1(L);
		if (_lg_typecheck_getChildShape_overload_2(L)) return _bind_getChildShape_overload_2(L);

		luaL_error(L, "error in function getChildShape, cannot match any of the overloads for function getChildShape:\n  getChildShape(int)\n  getChildShape(int)\n");
		return 0;
	}

	// btTransform btGImpactShapeInterface::getChildTransform(int index) const
	static int _bind_getChildTransform(lua_State *L) {
		if (!_lg_typecheck_getChildTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform btGImpactShapeInterface::getChildTransform(int index) const function, expected prototype:\nbtTransform btGImpactShapeInterface::getChildTransform(int index) const\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform btGImpactShapeInterface::getChildTransform(int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btTransform stack_lret = self->getChildTransform(index);
		btTransform* lret = new btTransform(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,true);

		return 1;
	}

	// void btGImpactShapeInterface::setChildTransform(int index, const btTransform & transform)
	static int _bind_setChildTransform(lua_State *L) {
		if (!_lg_typecheck_setChildTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactShapeInterface::setChildTransform(int index, const btTransform & transform) function, expected prototype:\nvoid btGImpactShapeInterface::setChildTransform(int index, const btTransform & transform)\nClass arguments details:\narg 2 ID = 13247377\n");
		}

		int index=(int)lua_tointeger(L,2);
		const btTransform* transform_ptr=(Luna< btTransform >::check(L,3));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in btGImpactShapeInterface::setChildTransform function");
		}
		const btTransform & transform=*transform_ptr;

		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactShapeInterface::setChildTransform(int, const btTransform &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->setChildTransform(index, transform);

		return 0;
	}

	// void btGImpactShapeInterface::updateBound()
	static int _bind_updateBound(lua_State *L) {
		if (!_lg_typecheck_updateBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactShapeInterface::updateBound() function, expected prototype:\nvoid btGImpactShapeInterface::updateBound()\nClass arguments details:\n");
		}


		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactShapeInterface::updateBound(). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->updateBound();

		return 0;
	}

	// void btGImpactShapeInterface::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_getAabb(lua_State *L) {
		if (!_lg_typecheck_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactShapeInterface::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btGImpactShapeInterface::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btGImpactShapeInterface::getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btGImpactShapeInterface::getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btGImpactShapeInterface::getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactShapeInterface::getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btGImpactShapeInterface::postUpdate()
	static int _bind_postUpdate(lua_State *L) {
		if (!_lg_typecheck_postUpdate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactShapeInterface::postUpdate() function, expected prototype:\nvoid btGImpactShapeInterface::postUpdate()\nClass arguments details:\n");
		}


		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactShapeInterface::postUpdate(). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->postUpdate();

		return 0;
	}

	// const btAABB & btGImpactShapeInterface::getLocalBox()
	static int _bind_getLocalBox(lua_State *L) {
		if (!_lg_typecheck_getLocalBox(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btAABB & btGImpactShapeInterface::getLocalBox() function, expected prototype:\nconst btAABB & btGImpactShapeInterface::getLocalBox()\nClass arguments details:\n");
		}


		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btAABB & btGImpactShapeInterface::getLocalBox(). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btAABB* lret = &self->getLocalBox();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btAABB >::push(L,lret,false);

		return 1;
	}

	// int btGImpactShapeInterface::getShapeType() const
	static int _bind_getShapeType(lua_State *L) {
		if (!_lg_typecheck_getShapeType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGImpactShapeInterface::getShapeType() const function, expected prototype:\nint btGImpactShapeInterface::getShapeType() const\nClass arguments details:\n");
		}


		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGImpactShapeInterface::getShapeType() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->getShapeType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGImpactShapeInterface::setLocalScaling(const btVector3 & scaling)
	static int _bind_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactShapeInterface::setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btGImpactShapeInterface::setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btGImpactShapeInterface::setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactShapeInterface::setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->setLocalScaling(scaling);

		return 0;
	}

	// const btVector3 & btGImpactShapeInterface::getLocalScaling() const
	static int _bind_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_getLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btGImpactShapeInterface::getLocalScaling() const function, expected prototype:\nconst btVector3 & btGImpactShapeInterface::getLocalScaling() const\nClass arguments details:\n");
		}


		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btGImpactShapeInterface::getLocalScaling() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btGImpactShapeInterface::setMargin(float margin)
	static int _bind_setMargin(lua_State *L) {
		if (!_lg_typecheck_setMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactShapeInterface::setMargin(float margin) function, expected prototype:\nvoid btGImpactShapeInterface::setMargin(float margin)\nClass arguments details:\n");
		}

		float margin=(float)lua_tonumber(L,2);

		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactShapeInterface::setMargin(float). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->setMargin(margin);

		return 0;
	}

	// void btGImpactShapeInterface::rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btCollisionWorld::RayResultCallback & resultCallback) const
	static int _bind_rayTest(lua_State *L) {
		if (!_lg_typecheck_rayTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactShapeInterface::rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btCollisionWorld::RayResultCallback & resultCallback) const function, expected prototype:\nvoid btGImpactShapeInterface::rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btCollisionWorld::RayResultCallback & resultCallback) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 44790882\n");
		}

		const btVector3* rayFrom_ptr=(Luna< btVector3 >::check(L,2));
		if( !rayFrom_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayFrom in btGImpactShapeInterface::rayTest function");
		}
		const btVector3 & rayFrom=*rayFrom_ptr;
		const btVector3* rayTo_ptr=(Luna< btVector3 >::check(L,3));
		if( !rayTo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayTo in btGImpactShapeInterface::rayTest function");
		}
		const btVector3 & rayTo=*rayTo_ptr;
		btCollisionWorld::RayResultCallback* resultCallback_ptr=(Luna< btCollisionWorld::RayResultCallback >::check(L,4));
		if( !resultCallback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg resultCallback in btGImpactShapeInterface::rayTest function");
		}
		btCollisionWorld::RayResultCallback & resultCallback=*resultCallback_ptr;

		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactShapeInterface::rayTest(const btVector3 &, const btVector3 &, btCollisionWorld::RayResultCallback &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->rayTest(rayFrom, rayTo, resultCallback);

		return 0;
	}

	// void btGImpactShapeInterface::processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	static int _bind_processAllTriangles(lua_State *L) {
		if (!_lg_typecheck_processAllTriangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactShapeInterface::processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const function, expected prototype:\nvoid btGImpactShapeInterface::processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 46793426\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		btTriangleCallback* callback=(Luna< btTriangleCallback >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btGImpactShapeInterface::processAllTriangles function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btGImpactShapeInterface::processAllTriangles function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactShapeInterface::processAllTriangles(btTriangleCallback *, const btVector3 &, const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->processAllTriangles(callback, aabbMin, aabbMax);

		return 0;
	}

	// void btGImpactShapeInterface::base_getBoundingSphere(btVector3 & center, float & radius) const
	static int _bind_base_getBoundingSphere(lua_State *L) {
		if (!_lg_typecheck_base_getBoundingSphere(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactShapeInterface::base_getBoundingSphere(btVector3 & center, float & radius) const function, expected prototype:\nvoid btGImpactShapeInterface::base_getBoundingSphere(btVector3 & center, float & radius) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btGImpactShapeInterface::base_getBoundingSphere function");
		}
		btVector3 & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactShapeInterface::base_getBoundingSphere(btVector3 &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactShapeInterface::getBoundingSphere(center, radius);

		return 0;
	}

	// float btGImpactShapeInterface::base_getAngularMotionDisc() const
	static int _bind_base_getAngularMotionDisc(lua_State *L) {
		if (!_lg_typecheck_base_getAngularMotionDisc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btGImpactShapeInterface::base_getAngularMotionDisc() const function, expected prototype:\nfloat btGImpactShapeInterface::base_getAngularMotionDisc() const\nClass arguments details:\n");
		}


		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btGImpactShapeInterface::base_getAngularMotionDisc() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btGImpactShapeInterface::getAngularMotionDisc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btGImpactShapeInterface::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const
	static int _bind_base_getContactBreakingThreshold(lua_State *L) {
		if (!_lg_typecheck_base_getContactBreakingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btGImpactShapeInterface::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const function, expected prototype:\nfloat btGImpactShapeInterface::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const\nClass arguments details:\n");
		}

		float defaultContactThresholdFactor=(float)lua_tonumber(L,2);

		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btGImpactShapeInterface::base_getContactBreakingThreshold(float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btGImpactShapeInterface::getContactBreakingThreshold(defaultContactThresholdFactor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btGImpactShapeInterface::base_getAnisotropicRollingFrictionDirection() const
	static int _bind_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if (!_lg_typecheck_base_getAnisotropicRollingFrictionDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btGImpactShapeInterface::base_getAnisotropicRollingFrictionDirection() const function, expected prototype:\nbtVector3 btGImpactShapeInterface::base_getAnisotropicRollingFrictionDirection() const\nClass arguments details:\n");
		}


		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btGImpactShapeInterface::base_getAnisotropicRollingFrictionDirection() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btGImpactShapeInterface::getAnisotropicRollingFrictionDirection();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// int btGImpactShapeInterface::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGImpactShapeInterface::base_calculateSerializeBufferSize() const function, expected prototype:\nint btGImpactShapeInterface::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGImpactShapeInterface::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btGImpactShapeInterface::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btGImpactShapeInterface::base_getMargin() const
	static int _bind_base_getMargin(lua_State *L) {
		if (!_lg_typecheck_base_getMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btGImpactShapeInterface::base_getMargin() const function, expected prototype:\nfloat btGImpactShapeInterface::base_getMargin() const\nClass arguments details:\n");
		}


		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btGImpactShapeInterface::base_getMargin() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btGImpactShapeInterface::getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGImpactShapeInterface::base_lockChildShapes() const
	static int _bind_base_lockChildShapes(lua_State *L) {
		if (!_lg_typecheck_base_lockChildShapes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactShapeInterface::base_lockChildShapes() const function, expected prototype:\nvoid btGImpactShapeInterface::base_lockChildShapes() const\nClass arguments details:\n");
		}


		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactShapeInterface::base_lockChildShapes() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactShapeInterface::lockChildShapes();

		return 0;
	}

	// void btGImpactShapeInterface::base_unlockChildShapes() const
	static int _bind_base_unlockChildShapes(lua_State *L) {
		if (!_lg_typecheck_base_unlockChildShapes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactShapeInterface::base_unlockChildShapes() const function, expected prototype:\nvoid btGImpactShapeInterface::base_unlockChildShapes() const\nClass arguments details:\n");
		}


		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactShapeInterface::base_unlockChildShapes() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactShapeInterface::unlockChildShapes();

		return 0;
	}

	// void btGImpactShapeInterface::base_getChildAabb(int child_index, const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getChildAabb(lua_State *L) {
		if (!_lg_typecheck_base_getChildAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactShapeInterface::base_getChildAabb(int child_index, const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btGImpactShapeInterface::base_getChildAabb(int child_index, const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 2 ID = 13247377\narg 3 ID = 91544891\narg 4 ID = 91544891\n");
		}

		int child_index=(int)lua_tointeger(L,2);
		const btTransform* t_ptr=(Luna< btTransform >::check(L,3));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btGImpactShapeInterface::base_getChildAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btGImpactShapeInterface::base_getChildAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,5));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btGImpactShapeInterface::base_getChildAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactShapeInterface::base_getChildAabb(int, const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactShapeInterface::getChildAabb(child_index, t, aabbMin, aabbMax);

		return 0;
	}

	// void btGImpactShapeInterface::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabb(lua_State *L) {
		if (!_lg_typecheck_base_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactShapeInterface::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btGImpactShapeInterface::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btGImpactShapeInterface::base_getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btGImpactShapeInterface::base_getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btGImpactShapeInterface::base_getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactShapeInterface::base_getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactShapeInterface::getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btGImpactShapeInterface::base_postUpdate()
	static int _bind_base_postUpdate(lua_State *L) {
		if (!_lg_typecheck_base_postUpdate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactShapeInterface::base_postUpdate() function, expected prototype:\nvoid btGImpactShapeInterface::base_postUpdate()\nClass arguments details:\n");
		}


		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactShapeInterface::base_postUpdate(). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactShapeInterface::postUpdate();

		return 0;
	}

	// int btGImpactShapeInterface::base_getShapeType() const
	static int _bind_base_getShapeType(lua_State *L) {
		if (!_lg_typecheck_base_getShapeType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGImpactShapeInterface::base_getShapeType() const function, expected prototype:\nint btGImpactShapeInterface::base_getShapeType() const\nClass arguments details:\n");
		}


		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGImpactShapeInterface::base_getShapeType() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btGImpactShapeInterface::getShapeType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGImpactShapeInterface::base_setLocalScaling(const btVector3 & scaling)
	static int _bind_base_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactShapeInterface::base_setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btGImpactShapeInterface::base_setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btGImpactShapeInterface::base_setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactShapeInterface::base_setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactShapeInterface::setLocalScaling(scaling);

		return 0;
	}

	// const btVector3 & btGImpactShapeInterface::base_getLocalScaling() const
	static int _bind_base_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_getLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btGImpactShapeInterface::base_getLocalScaling() const function, expected prototype:\nconst btVector3 & btGImpactShapeInterface::base_getLocalScaling() const\nClass arguments details:\n");
		}


		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btGImpactShapeInterface::base_getLocalScaling() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->btGImpactShapeInterface::getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btGImpactShapeInterface::base_setMargin(float margin)
	static int _bind_base_setMargin(lua_State *L) {
		if (!_lg_typecheck_base_setMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactShapeInterface::base_setMargin(float margin) function, expected prototype:\nvoid btGImpactShapeInterface::base_setMargin(float margin)\nClass arguments details:\n");
		}

		float margin=(float)lua_tonumber(L,2);

		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactShapeInterface::base_setMargin(float). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactShapeInterface::setMargin(margin);

		return 0;
	}

	// void btGImpactShapeInterface::base_rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btCollisionWorld::RayResultCallback & resultCallback) const
	static int _bind_base_rayTest(lua_State *L) {
		if (!_lg_typecheck_base_rayTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactShapeInterface::base_rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btCollisionWorld::RayResultCallback & resultCallback) const function, expected prototype:\nvoid btGImpactShapeInterface::base_rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btCollisionWorld::RayResultCallback & resultCallback) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 44790882\n");
		}

		const btVector3* rayFrom_ptr=(Luna< btVector3 >::check(L,2));
		if( !rayFrom_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayFrom in btGImpactShapeInterface::base_rayTest function");
		}
		const btVector3 & rayFrom=*rayFrom_ptr;
		const btVector3* rayTo_ptr=(Luna< btVector3 >::check(L,3));
		if( !rayTo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayTo in btGImpactShapeInterface::base_rayTest function");
		}
		const btVector3 & rayTo=*rayTo_ptr;
		btCollisionWorld::RayResultCallback* resultCallback_ptr=(Luna< btCollisionWorld::RayResultCallback >::check(L,4));
		if( !resultCallback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg resultCallback in btGImpactShapeInterface::base_rayTest function");
		}
		btCollisionWorld::RayResultCallback & resultCallback=*resultCallback_ptr;

		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactShapeInterface::base_rayTest(const btVector3 &, const btVector3 &, btCollisionWorld::RayResultCallback &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactShapeInterface::rayTest(rayFrom, rayTo, resultCallback);

		return 0;
	}

	// void btGImpactShapeInterface::base_processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	static int _bind_base_processAllTriangles(lua_State *L) {
		if (!_lg_typecheck_base_processAllTriangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactShapeInterface::base_processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const function, expected prototype:\nvoid btGImpactShapeInterface::base_processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 46793426\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		btTriangleCallback* callback=(Luna< btTriangleCallback >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btGImpactShapeInterface::base_processAllTriangles function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btGImpactShapeInterface::base_processAllTriangles function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btGImpactShapeInterface* self=Luna< btCollisionShape >::checkSubType< btGImpactShapeInterface >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactShapeInterface::base_processAllTriangles(btTriangleCallback *, const btVector3 &, const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactShapeInterface::processAllTriangles(callback, aabbMin, aabbMax);

		return 0;
	}


	// Operator binds:

};

btGImpactShapeInterface* LunaTraits< btGImpactShapeInterface >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btGImpactShapeInterface::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// eGIMPACT_SHAPE_TYPE btGImpactShapeInterface::getGImpactShapeType() const
	// const btPrimitiveManagerBase * btGImpactShapeInterface::getPrimitiveManager() const
	// int btGImpactShapeInterface::getNumChildShapes() const
	// bool btGImpactShapeInterface::childrenHasTransform() const
	// bool btGImpactShapeInterface::needsRetrieveTriangles() const
	// bool btGImpactShapeInterface::needsRetrieveTetrahedrons() const
	// void btGImpactShapeInterface::getBulletTriangle(int prim_index, btTriangleShapeEx & triangle) const
	// void btGImpactShapeInterface::getBulletTetrahedron(int prim_index, btTetrahedronShapeEx & tetrahedron) const
	// btCollisionShape * btGImpactShapeInterface::getChildShape(int index)
	// const btCollisionShape * btGImpactShapeInterface::getChildShape(int index) const
	// btTransform btGImpactShapeInterface::getChildTransform(int index) const
	// void btGImpactShapeInterface::setChildTransform(int index, const btTransform & transform)
	// void btCollisionShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	// const char * btCollisionShape::getName() const
}

void LunaTraits< btGImpactShapeInterface >::_bind_dtor(btGImpactShapeInterface* obj) {
	delete obj;
}

const char LunaTraits< btGImpactShapeInterface >::className[] = "btGImpactShapeInterface";
const char LunaTraits< btGImpactShapeInterface >::fullName[] = "btGImpactShapeInterface";
const char LunaTraits< btGImpactShapeInterface >::moduleName[] = "bullet";
const char* LunaTraits< btGImpactShapeInterface >::parents[] = {"bullet.btConcaveShape", 0};
const int LunaTraits< btGImpactShapeInterface >::hash = 67895008;
const int LunaTraits< btGImpactShapeInterface >::uniqueIDs[] = {58243831,0};

luna_RegType LunaTraits< btGImpactShapeInterface >::methods[] = {
	{"getGImpactShapeType", &luna_wrapper_btGImpactShapeInterface::_bind_getGImpactShapeType},
	{"getBoxSet", &luna_wrapper_btGImpactShapeInterface::_bind_getBoxSet},
	{"hasBoxSet", &luna_wrapper_btGImpactShapeInterface::_bind_hasBoxSet},
	{"getPrimitiveManager", &luna_wrapper_btGImpactShapeInterface::_bind_getPrimitiveManager},
	{"getNumChildShapes", &luna_wrapper_btGImpactShapeInterface::_bind_getNumChildShapes},
	{"childrenHasTransform", &luna_wrapper_btGImpactShapeInterface::_bind_childrenHasTransform},
	{"needsRetrieveTriangles", &luna_wrapper_btGImpactShapeInterface::_bind_needsRetrieveTriangles},
	{"needsRetrieveTetrahedrons", &luna_wrapper_btGImpactShapeInterface::_bind_needsRetrieveTetrahedrons},
	{"getBulletTriangle", &luna_wrapper_btGImpactShapeInterface::_bind_getBulletTriangle},
	{"getBulletTetrahedron", &luna_wrapper_btGImpactShapeInterface::_bind_getBulletTetrahedron},
	{"lockChildShapes", &luna_wrapper_btGImpactShapeInterface::_bind_lockChildShapes},
	{"unlockChildShapes", &luna_wrapper_btGImpactShapeInterface::_bind_unlockChildShapes},
	{"getPrimitiveTriangle", &luna_wrapper_btGImpactShapeInterface::_bind_getPrimitiveTriangle},
	{"getChildAabb", &luna_wrapper_btGImpactShapeInterface::_bind_getChildAabb},
	{"getChildShape", &luna_wrapper_btGImpactShapeInterface::_bind_getChildShape},
	{"getChildTransform", &luna_wrapper_btGImpactShapeInterface::_bind_getChildTransform},
	{"setChildTransform", &luna_wrapper_btGImpactShapeInterface::_bind_setChildTransform},
	{"updateBound", &luna_wrapper_btGImpactShapeInterface::_bind_updateBound},
	{"getAabb", &luna_wrapper_btGImpactShapeInterface::_bind_getAabb},
	{"postUpdate", &luna_wrapper_btGImpactShapeInterface::_bind_postUpdate},
	{"getLocalBox", &luna_wrapper_btGImpactShapeInterface::_bind_getLocalBox},
	{"getShapeType", &luna_wrapper_btGImpactShapeInterface::_bind_getShapeType},
	{"setLocalScaling", &luna_wrapper_btGImpactShapeInterface::_bind_setLocalScaling},
	{"getLocalScaling", &luna_wrapper_btGImpactShapeInterface::_bind_getLocalScaling},
	{"setMargin", &luna_wrapper_btGImpactShapeInterface::_bind_setMargin},
	{"rayTest", &luna_wrapper_btGImpactShapeInterface::_bind_rayTest},
	{"processAllTriangles", &luna_wrapper_btGImpactShapeInterface::_bind_processAllTriangles},
	{"base_getBoundingSphere", &luna_wrapper_btGImpactShapeInterface::_bind_base_getBoundingSphere},
	{"base_getAngularMotionDisc", &luna_wrapper_btGImpactShapeInterface::_bind_base_getAngularMotionDisc},
	{"base_getContactBreakingThreshold", &luna_wrapper_btGImpactShapeInterface::_bind_base_getContactBreakingThreshold},
	{"base_getAnisotropicRollingFrictionDirection", &luna_wrapper_btGImpactShapeInterface::_bind_base_getAnisotropicRollingFrictionDirection},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btGImpactShapeInterface::_bind_base_calculateSerializeBufferSize},
	{"base_getMargin", &luna_wrapper_btGImpactShapeInterface::_bind_base_getMargin},
	{"base_lockChildShapes", &luna_wrapper_btGImpactShapeInterface::_bind_base_lockChildShapes},
	{"base_unlockChildShapes", &luna_wrapper_btGImpactShapeInterface::_bind_base_unlockChildShapes},
	{"base_getChildAabb", &luna_wrapper_btGImpactShapeInterface::_bind_base_getChildAabb},
	{"base_getAabb", &luna_wrapper_btGImpactShapeInterface::_bind_base_getAabb},
	{"base_postUpdate", &luna_wrapper_btGImpactShapeInterface::_bind_base_postUpdate},
	{"base_getShapeType", &luna_wrapper_btGImpactShapeInterface::_bind_base_getShapeType},
	{"base_setLocalScaling", &luna_wrapper_btGImpactShapeInterface::_bind_base_setLocalScaling},
	{"base_getLocalScaling", &luna_wrapper_btGImpactShapeInterface::_bind_base_getLocalScaling},
	{"base_setMargin", &luna_wrapper_btGImpactShapeInterface::_bind_base_setMargin},
	{"base_rayTest", &luna_wrapper_btGImpactShapeInterface::_bind_base_rayTest},
	{"base_processAllTriangles", &luna_wrapper_btGImpactShapeInterface::_bind_base_processAllTriangles},
	{"__eq", &luna_wrapper_btGImpactShapeInterface::_bind___eq},
	{"getTable", &luna_wrapper_btGImpactShapeInterface::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btGImpactShapeInterface >::converters[] = {
	{"btCollisionShape", &luna_wrapper_btGImpactShapeInterface::_cast_from_btCollisionShape},
	{0,0}
};

luna_RegEnumType LunaTraits< btGImpactShapeInterface >::enumValues[] = {
	{0,0}
};



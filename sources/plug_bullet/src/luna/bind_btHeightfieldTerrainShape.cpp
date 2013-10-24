#include <plug_common.h>

#include <luna/wrappers/wrapper_btHeightfieldTerrainShape.h>

class luna_wrapper_btHeightfieldTerrainShape {
public:
	typedef Luna< btHeightfieldTerrainShape > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
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

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btHeightfieldTerrainShape* self= (btHeightfieldTerrainShape*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btHeightfieldTerrainShape >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58243831) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
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
		//btHeightfieldTerrainShape* ptr= dynamic_cast< btHeightfieldTerrainShape* >(Luna< btCollisionShape >::check(L,1));
		btHeightfieldTerrainShape* ptr= luna_caster< btCollisionShape, btHeightfieldTerrainShape >::cast(Luna< btCollisionShape >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btHeightfieldTerrainShape >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( lua_isboolean(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
		if( lua_isboolean(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=10 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( lua_isboolean(L,10)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( lua_isboolean(L,7)==0 ) return false;
		if( lua_isboolean(L,8)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setUseDiamondSubdivision(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUseZigzagSubdivision(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAabb(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_processAllTriangles(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,46793426)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_calculateLocalInertia(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
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

	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getBoundingSphere(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getAngularMotionDisc(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getContactBreakingThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
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

	inline static bool _lg_typecheck_base_setMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getAabb(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_processAllTriangles(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,46793426)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_calculateLocalInertia(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
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

	inline static bool _lg_typecheck_base_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btHeightfieldTerrainShape::btHeightfieldTerrainShape(int heightStickWidth, int heightStickLength, const void * heightfieldData, float heightScale, float minHeight, float maxHeight, int upAxis, PHY_ScalarType heightDataType, bool flipQuadEdges)
	static btHeightfieldTerrainShape* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in btHeightfieldTerrainShape::btHeightfieldTerrainShape(int heightStickWidth, int heightStickLength, const void * heightfieldData, float heightScale, float minHeight, float maxHeight, int upAxis, PHY_ScalarType heightDataType, bool flipQuadEdges) function, expected prototype:\nbtHeightfieldTerrainShape::btHeightfieldTerrainShape(int heightStickWidth, int heightStickLength, const void * heightfieldData, float heightScale, float minHeight, float maxHeight, int upAxis, PHY_ScalarType heightDataType, bool flipQuadEdges)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int heightStickWidth=(int)lua_tointeger(L,1);
		int heightStickLength=(int)lua_tointeger(L,2);
		const void* heightfieldData=(Luna< void >::check(L,3));
		float heightScale=(float)lua_tonumber(L,4);
		float minHeight=(float)lua_tonumber(L,5);
		float maxHeight=(float)lua_tonumber(L,6);
		int upAxis=(int)lua_tointeger(L,7);
		PHY_ScalarType heightDataType=(PHY_ScalarType)lua_tointeger(L,8);
		bool flipQuadEdges=(bool)(lua_toboolean(L,9)==1);

		return new btHeightfieldTerrainShape(heightStickWidth, heightStickLength, heightfieldData, heightScale, minHeight, maxHeight, upAxis, heightDataType, flipQuadEdges);
	}

	// btHeightfieldTerrainShape::btHeightfieldTerrainShape(int heightStickWidth, int heightStickLength, const void * heightfieldData, float maxHeight, int upAxis, bool useFloatData, bool flipQuadEdges)
	static btHeightfieldTerrainShape* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in btHeightfieldTerrainShape::btHeightfieldTerrainShape(int heightStickWidth, int heightStickLength, const void * heightfieldData, float maxHeight, int upAxis, bool useFloatData, bool flipQuadEdges) function, expected prototype:\nbtHeightfieldTerrainShape::btHeightfieldTerrainShape(int heightStickWidth, int heightStickLength, const void * heightfieldData, float maxHeight, int upAxis, bool useFloatData, bool flipQuadEdges)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int heightStickWidth=(int)lua_tointeger(L,1);
		int heightStickLength=(int)lua_tointeger(L,2);
		const void* heightfieldData=(Luna< void >::check(L,3));
		float maxHeight=(float)lua_tonumber(L,4);
		int upAxis=(int)lua_tointeger(L,5);
		bool useFloatData=(bool)(lua_toboolean(L,6)==1);
		bool flipQuadEdges=(bool)(lua_toboolean(L,7)==1);

		return new btHeightfieldTerrainShape(heightStickWidth, heightStickLength, heightfieldData, maxHeight, upAxis, useFloatData, flipQuadEdges);
	}

	// btHeightfieldTerrainShape::btHeightfieldTerrainShape(lua_Table * data, int heightStickWidth, int heightStickLength, const void * heightfieldData, float heightScale, float minHeight, float maxHeight, int upAxis, PHY_ScalarType heightDataType, bool flipQuadEdges)
	static btHeightfieldTerrainShape* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in btHeightfieldTerrainShape::btHeightfieldTerrainShape(lua_Table * data, int heightStickWidth, int heightStickLength, const void * heightfieldData, float heightScale, float minHeight, float maxHeight, int upAxis, PHY_ScalarType heightDataType, bool flipQuadEdges) function, expected prototype:\nbtHeightfieldTerrainShape::btHeightfieldTerrainShape(lua_Table * data, int heightStickWidth, int heightStickLength, const void * heightfieldData, float heightScale, float minHeight, float maxHeight, int upAxis, PHY_ScalarType heightDataType, bool flipQuadEdges)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int heightStickWidth=(int)lua_tointeger(L,2);
		int heightStickLength=(int)lua_tointeger(L,3);
		const void* heightfieldData=(Luna< void >::check(L,4));
		float heightScale=(float)lua_tonumber(L,5);
		float minHeight=(float)lua_tonumber(L,6);
		float maxHeight=(float)lua_tonumber(L,7);
		int upAxis=(int)lua_tointeger(L,8);
		PHY_ScalarType heightDataType=(PHY_ScalarType)lua_tointeger(L,9);
		bool flipQuadEdges=(bool)(lua_toboolean(L,10)==1);

		return new wrapper_btHeightfieldTerrainShape(L,NULL, heightStickWidth, heightStickLength, heightfieldData, heightScale, minHeight, maxHeight, upAxis, heightDataType, flipQuadEdges);
	}

	// btHeightfieldTerrainShape::btHeightfieldTerrainShape(lua_Table * data, int heightStickWidth, int heightStickLength, const void * heightfieldData, float maxHeight, int upAxis, bool useFloatData, bool flipQuadEdges)
	static btHeightfieldTerrainShape* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in btHeightfieldTerrainShape::btHeightfieldTerrainShape(lua_Table * data, int heightStickWidth, int heightStickLength, const void * heightfieldData, float maxHeight, int upAxis, bool useFloatData, bool flipQuadEdges) function, expected prototype:\nbtHeightfieldTerrainShape::btHeightfieldTerrainShape(lua_Table * data, int heightStickWidth, int heightStickLength, const void * heightfieldData, float maxHeight, int upAxis, bool useFloatData, bool flipQuadEdges)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int heightStickWidth=(int)lua_tointeger(L,2);
		int heightStickLength=(int)lua_tointeger(L,3);
		const void* heightfieldData=(Luna< void >::check(L,4));
		float maxHeight=(float)lua_tonumber(L,5);
		int upAxis=(int)lua_tointeger(L,6);
		bool useFloatData=(bool)(lua_toboolean(L,7)==1);
		bool flipQuadEdges=(bool)(lua_toboolean(L,8)==1);

		return new wrapper_btHeightfieldTerrainShape(L,NULL, heightStickWidth, heightStickLength, heightfieldData, maxHeight, upAxis, useFloatData, flipQuadEdges);
	}

	// Overload binder for btHeightfieldTerrainShape::btHeightfieldTerrainShape
	static btHeightfieldTerrainShape* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function btHeightfieldTerrainShape, cannot match any of the overloads for function btHeightfieldTerrainShape:\n  btHeightfieldTerrainShape(int, int, const void *, float, float, float, int, PHY_ScalarType, bool)\n  btHeightfieldTerrainShape(int, int, const void *, float, int, bool, bool)\n  btHeightfieldTerrainShape(lua_Table *, int, int, const void *, float, float, float, int, PHY_ScalarType, bool)\n  btHeightfieldTerrainShape(lua_Table *, int, int, const void *, float, int, bool, bool)\n");
		return NULL;
	}


	// Function binds:
	// void btHeightfieldTerrainShape::setUseDiamondSubdivision(bool useDiamondSubdivision = true)
	static int _bind_setUseDiamondSubdivision(lua_State *L) {
		if (!_lg_typecheck_setUseDiamondSubdivision(L)) {
			luaL_error(L, "luna typecheck failed in void btHeightfieldTerrainShape::setUseDiamondSubdivision(bool useDiamondSubdivision = true) function, expected prototype:\nvoid btHeightfieldTerrainShape::setUseDiamondSubdivision(bool useDiamondSubdivision = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool useDiamondSubdivision=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		btHeightfieldTerrainShape* self=Luna< btCollisionShape >::checkSubType< btHeightfieldTerrainShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btHeightfieldTerrainShape::setUseDiamondSubdivision(bool). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUseDiamondSubdivision(useDiamondSubdivision);

		return 0;
	}

	// void btHeightfieldTerrainShape::setUseZigzagSubdivision(bool useZigzagSubdivision = true)
	static int _bind_setUseZigzagSubdivision(lua_State *L) {
		if (!_lg_typecheck_setUseZigzagSubdivision(L)) {
			luaL_error(L, "luna typecheck failed in void btHeightfieldTerrainShape::setUseZigzagSubdivision(bool useZigzagSubdivision = true) function, expected prototype:\nvoid btHeightfieldTerrainShape::setUseZigzagSubdivision(bool useZigzagSubdivision = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool useZigzagSubdivision=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		btHeightfieldTerrainShape* self=Luna< btCollisionShape >::checkSubType< btHeightfieldTerrainShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btHeightfieldTerrainShape::setUseZigzagSubdivision(bool). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUseZigzagSubdivision(useZigzagSubdivision);

		return 0;
	}

	// void btHeightfieldTerrainShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_getAabb(lua_State *L) {
		if (!_lg_typecheck_getAabb(L)) {
			luaL_error(L, "luna typecheck failed in void btHeightfieldTerrainShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btHeightfieldTerrainShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btHeightfieldTerrainShape::getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btHeightfieldTerrainShape::getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btHeightfieldTerrainShape::getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btHeightfieldTerrainShape* self=Luna< btCollisionShape >::checkSubType< btHeightfieldTerrainShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btHeightfieldTerrainShape::getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btHeightfieldTerrainShape::processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	static int _bind_processAllTriangles(lua_State *L) {
		if (!_lg_typecheck_processAllTriangles(L)) {
			luaL_error(L, "luna typecheck failed in void btHeightfieldTerrainShape::processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const function, expected prototype:\nvoid btHeightfieldTerrainShape::processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 46793426\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btTriangleCallback* callback=(Luna< btTriangleCallback >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btHeightfieldTerrainShape::processAllTriangles function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btHeightfieldTerrainShape::processAllTriangles function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btHeightfieldTerrainShape* self=Luna< btCollisionShape >::checkSubType< btHeightfieldTerrainShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btHeightfieldTerrainShape::processAllTriangles(btTriangleCallback *, const btVector3 &, const btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->processAllTriangles(callback, aabbMin, aabbMax);

		return 0;
	}

	// void btHeightfieldTerrainShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_calculateLocalInertia(L)) {
			luaL_error(L, "luna typecheck failed in void btHeightfieldTerrainShape::calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btHeightfieldTerrainShape::calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btHeightfieldTerrainShape::calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btHeightfieldTerrainShape* self=Luna< btCollisionShape >::checkSubType< btHeightfieldTerrainShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btHeightfieldTerrainShape::calculateLocalInertia(float, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->calculateLocalInertia(mass, inertia);

		return 0;
	}

	// void btHeightfieldTerrainShape::setLocalScaling(const btVector3 & scaling)
	static int _bind_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_setLocalScaling(L)) {
			luaL_error(L, "luna typecheck failed in void btHeightfieldTerrainShape::setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btHeightfieldTerrainShape::setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btHeightfieldTerrainShape::setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btHeightfieldTerrainShape* self=Luna< btCollisionShape >::checkSubType< btHeightfieldTerrainShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btHeightfieldTerrainShape::setLocalScaling(const btVector3 &). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLocalScaling(scaling);

		return 0;
	}

	// const btVector3 & btHeightfieldTerrainShape::getLocalScaling() const
	static int _bind_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_getLocalScaling(L)) {
			luaL_error(L, "luna typecheck failed in const btVector3 & btHeightfieldTerrainShape::getLocalScaling() const function, expected prototype:\nconst btVector3 & btHeightfieldTerrainShape::getLocalScaling() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btHeightfieldTerrainShape* self=Luna< btCollisionShape >::checkSubType< btHeightfieldTerrainShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const btVector3 & btHeightfieldTerrainShape::getLocalScaling() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const char * btHeightfieldTerrainShape::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luaL_error(L, "luna typecheck failed in const char * btHeightfieldTerrainShape::getName() const function, expected prototype:\nconst char * btHeightfieldTerrainShape::getName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btHeightfieldTerrainShape* self=Luna< btCollisionShape >::checkSubType< btHeightfieldTerrainShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * btHeightfieldTerrainShape::getName() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void btHeightfieldTerrainShape::base_getBoundingSphere(btVector3 & center, float & radius) const
	static int _bind_base_getBoundingSphere(lua_State *L) {
		if (!_lg_typecheck_base_getBoundingSphere(L)) {
			luaL_error(L, "luna typecheck failed in void btHeightfieldTerrainShape::base_getBoundingSphere(btVector3 & center, float & radius) const function, expected prototype:\nvoid btHeightfieldTerrainShape::base_getBoundingSphere(btVector3 & center, float & radius) const\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btHeightfieldTerrainShape::base_getBoundingSphere function");
		}
		btVector3 & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		btHeightfieldTerrainShape* self=Luna< btCollisionShape >::checkSubType< btHeightfieldTerrainShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btHeightfieldTerrainShape::base_getBoundingSphere(btVector3 &, float &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btHeightfieldTerrainShape::getBoundingSphere(center, radius);

		lua_pushnumber(L,radius);
		return 1;
	}

	// float btHeightfieldTerrainShape::base_getAngularMotionDisc() const
	static int _bind_base_getAngularMotionDisc(lua_State *L) {
		if (!_lg_typecheck_base_getAngularMotionDisc(L)) {
			luaL_error(L, "luna typecheck failed in float btHeightfieldTerrainShape::base_getAngularMotionDisc() const function, expected prototype:\nfloat btHeightfieldTerrainShape::base_getAngularMotionDisc() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btHeightfieldTerrainShape* self=Luna< btCollisionShape >::checkSubType< btHeightfieldTerrainShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btHeightfieldTerrainShape::base_getAngularMotionDisc() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->btHeightfieldTerrainShape::getAngularMotionDisc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btHeightfieldTerrainShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const
	static int _bind_base_getContactBreakingThreshold(lua_State *L) {
		if (!_lg_typecheck_base_getContactBreakingThreshold(L)) {
			luaL_error(L, "luna typecheck failed in float btHeightfieldTerrainShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const function, expected prototype:\nfloat btHeightfieldTerrainShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float defaultContactThresholdFactor=(float)lua_tonumber(L,2);

		btHeightfieldTerrainShape* self=Luna< btCollisionShape >::checkSubType< btHeightfieldTerrainShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btHeightfieldTerrainShape::base_getContactBreakingThreshold(float) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->btHeightfieldTerrainShape::getContactBreakingThreshold(defaultContactThresholdFactor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btHeightfieldTerrainShape::base_getAnisotropicRollingFrictionDirection() const
	static int _bind_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if (!_lg_typecheck_base_getAnisotropicRollingFrictionDirection(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btHeightfieldTerrainShape::base_getAnisotropicRollingFrictionDirection() const function, expected prototype:\nbtVector3 btHeightfieldTerrainShape::base_getAnisotropicRollingFrictionDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btHeightfieldTerrainShape* self=Luna< btCollisionShape >::checkSubType< btHeightfieldTerrainShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btHeightfieldTerrainShape::base_getAnisotropicRollingFrictionDirection() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 stack_lret = self->btHeightfieldTerrainShape::getAnisotropicRollingFrictionDirection();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// int btHeightfieldTerrainShape::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luaL_error(L, "luna typecheck failed in int btHeightfieldTerrainShape::base_calculateSerializeBufferSize() const function, expected prototype:\nint btHeightfieldTerrainShape::base_calculateSerializeBufferSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btHeightfieldTerrainShape* self=Luna< btCollisionShape >::checkSubType< btHeightfieldTerrainShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btHeightfieldTerrainShape::base_calculateSerializeBufferSize() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->btHeightfieldTerrainShape::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btHeightfieldTerrainShape::base_getMargin() const
	static int _bind_base_getMargin(lua_State *L) {
		if (!_lg_typecheck_base_getMargin(L)) {
			luaL_error(L, "luna typecheck failed in float btHeightfieldTerrainShape::base_getMargin() const function, expected prototype:\nfloat btHeightfieldTerrainShape::base_getMargin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btHeightfieldTerrainShape* self=Luna< btCollisionShape >::checkSubType< btHeightfieldTerrainShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btHeightfieldTerrainShape::base_getMargin() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->btHeightfieldTerrainShape::getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btHeightfieldTerrainShape::base_setMargin(float collisionMargin)
	static int _bind_base_setMargin(lua_State *L) {
		if (!_lg_typecheck_base_setMargin(L)) {
			luaL_error(L, "luna typecheck failed in void btHeightfieldTerrainShape::base_setMargin(float collisionMargin) function, expected prototype:\nvoid btHeightfieldTerrainShape::base_setMargin(float collisionMargin)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float collisionMargin=(float)lua_tonumber(L,2);

		btHeightfieldTerrainShape* self=Luna< btCollisionShape >::checkSubType< btHeightfieldTerrainShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btHeightfieldTerrainShape::base_setMargin(float). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btHeightfieldTerrainShape::setMargin(collisionMargin);

		return 0;
	}

	// void btHeightfieldTerrainShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabb(lua_State *L) {
		if (!_lg_typecheck_base_getAabb(L)) {
			luaL_error(L, "luna typecheck failed in void btHeightfieldTerrainShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btHeightfieldTerrainShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btHeightfieldTerrainShape::base_getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btHeightfieldTerrainShape::base_getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btHeightfieldTerrainShape::base_getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btHeightfieldTerrainShape* self=Luna< btCollisionShape >::checkSubType< btHeightfieldTerrainShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btHeightfieldTerrainShape::base_getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btHeightfieldTerrainShape::getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btHeightfieldTerrainShape::base_processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	static int _bind_base_processAllTriangles(lua_State *L) {
		if (!_lg_typecheck_base_processAllTriangles(L)) {
			luaL_error(L, "luna typecheck failed in void btHeightfieldTerrainShape::base_processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const function, expected prototype:\nvoid btHeightfieldTerrainShape::base_processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 46793426\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btTriangleCallback* callback=(Luna< btTriangleCallback >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btHeightfieldTerrainShape::base_processAllTriangles function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btHeightfieldTerrainShape::base_processAllTriangles function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btHeightfieldTerrainShape* self=Luna< btCollisionShape >::checkSubType< btHeightfieldTerrainShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btHeightfieldTerrainShape::base_processAllTriangles(btTriangleCallback *, const btVector3 &, const btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btHeightfieldTerrainShape::processAllTriangles(callback, aabbMin, aabbMax);

		return 0;
	}

	// void btHeightfieldTerrainShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_base_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_base_calculateLocalInertia(L)) {
			luaL_error(L, "luna typecheck failed in void btHeightfieldTerrainShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btHeightfieldTerrainShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btHeightfieldTerrainShape::base_calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btHeightfieldTerrainShape* self=Luna< btCollisionShape >::checkSubType< btHeightfieldTerrainShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btHeightfieldTerrainShape::base_calculateLocalInertia(float, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btHeightfieldTerrainShape::calculateLocalInertia(mass, inertia);

		return 0;
	}

	// void btHeightfieldTerrainShape::base_setLocalScaling(const btVector3 & scaling)
	static int _bind_base_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_setLocalScaling(L)) {
			luaL_error(L, "luna typecheck failed in void btHeightfieldTerrainShape::base_setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btHeightfieldTerrainShape::base_setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btHeightfieldTerrainShape::base_setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btHeightfieldTerrainShape* self=Luna< btCollisionShape >::checkSubType< btHeightfieldTerrainShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btHeightfieldTerrainShape::base_setLocalScaling(const btVector3 &). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btHeightfieldTerrainShape::setLocalScaling(scaling);

		return 0;
	}

	// const btVector3 & btHeightfieldTerrainShape::base_getLocalScaling() const
	static int _bind_base_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_getLocalScaling(L)) {
			luaL_error(L, "luna typecheck failed in const btVector3 & btHeightfieldTerrainShape::base_getLocalScaling() const function, expected prototype:\nconst btVector3 & btHeightfieldTerrainShape::base_getLocalScaling() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btHeightfieldTerrainShape* self=Luna< btCollisionShape >::checkSubType< btHeightfieldTerrainShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const btVector3 & btHeightfieldTerrainShape::base_getLocalScaling() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->btHeightfieldTerrainShape::getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const char * btHeightfieldTerrainShape::base_getName() const
	static int _bind_base_getName(lua_State *L) {
		if (!_lg_typecheck_base_getName(L)) {
			luaL_error(L, "luna typecheck failed in const char * btHeightfieldTerrainShape::base_getName() const function, expected prototype:\nconst char * btHeightfieldTerrainShape::base_getName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btHeightfieldTerrainShape* self=Luna< btCollisionShape >::checkSubType< btHeightfieldTerrainShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * btHeightfieldTerrainShape::base_getName() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->btHeightfieldTerrainShape::getName();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

btHeightfieldTerrainShape* LunaTraits< btHeightfieldTerrainShape >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btHeightfieldTerrainShape::_bind_ctor(L);
}

void LunaTraits< btHeightfieldTerrainShape >::_bind_dtor(btHeightfieldTerrainShape* obj) {
	delete obj;
}

const char LunaTraits< btHeightfieldTerrainShape >::className[] = "btHeightfieldTerrainShape";
const char LunaTraits< btHeightfieldTerrainShape >::fullName[] = "btHeightfieldTerrainShape";
const char LunaTraits< btHeightfieldTerrainShape >::moduleName[] = "bullet";
const char* LunaTraits< btHeightfieldTerrainShape >::parents[] = {"bullet.btConcaveShape", 0};
const int LunaTraits< btHeightfieldTerrainShape >::hash = 73536509;
const int LunaTraits< btHeightfieldTerrainShape >::uniqueIDs[] = {58243831,0};

luna_RegType LunaTraits< btHeightfieldTerrainShape >::methods[] = {
	{"setUseDiamondSubdivision", &luna_wrapper_btHeightfieldTerrainShape::_bind_setUseDiamondSubdivision},
	{"setUseZigzagSubdivision", &luna_wrapper_btHeightfieldTerrainShape::_bind_setUseZigzagSubdivision},
	{"getAabb", &luna_wrapper_btHeightfieldTerrainShape::_bind_getAabb},
	{"processAllTriangles", &luna_wrapper_btHeightfieldTerrainShape::_bind_processAllTriangles},
	{"calculateLocalInertia", &luna_wrapper_btHeightfieldTerrainShape::_bind_calculateLocalInertia},
	{"setLocalScaling", &luna_wrapper_btHeightfieldTerrainShape::_bind_setLocalScaling},
	{"getLocalScaling", &luna_wrapper_btHeightfieldTerrainShape::_bind_getLocalScaling},
	{"getName", &luna_wrapper_btHeightfieldTerrainShape::_bind_getName},
	{"base_getBoundingSphere", &luna_wrapper_btHeightfieldTerrainShape::_bind_base_getBoundingSphere},
	{"base_getAngularMotionDisc", &luna_wrapper_btHeightfieldTerrainShape::_bind_base_getAngularMotionDisc},
	{"base_getContactBreakingThreshold", &luna_wrapper_btHeightfieldTerrainShape::_bind_base_getContactBreakingThreshold},
	{"base_getAnisotropicRollingFrictionDirection", &luna_wrapper_btHeightfieldTerrainShape::_bind_base_getAnisotropicRollingFrictionDirection},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btHeightfieldTerrainShape::_bind_base_calculateSerializeBufferSize},
	{"base_getMargin", &luna_wrapper_btHeightfieldTerrainShape::_bind_base_getMargin},
	{"base_setMargin", &luna_wrapper_btHeightfieldTerrainShape::_bind_base_setMargin},
	{"base_getAabb", &luna_wrapper_btHeightfieldTerrainShape::_bind_base_getAabb},
	{"base_processAllTriangles", &luna_wrapper_btHeightfieldTerrainShape::_bind_base_processAllTriangles},
	{"base_calculateLocalInertia", &luna_wrapper_btHeightfieldTerrainShape::_bind_base_calculateLocalInertia},
	{"base_setLocalScaling", &luna_wrapper_btHeightfieldTerrainShape::_bind_base_setLocalScaling},
	{"base_getLocalScaling", &luna_wrapper_btHeightfieldTerrainShape::_bind_base_getLocalScaling},
	{"base_getName", &luna_wrapper_btHeightfieldTerrainShape::_bind_base_getName},
	{"fromVoid", &luna_wrapper_btHeightfieldTerrainShape::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btHeightfieldTerrainShape::_bind_asVoid},
	{"getTable", &luna_wrapper_btHeightfieldTerrainShape::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btHeightfieldTerrainShape >::converters[] = {
	{"btCollisionShape", &luna_wrapper_btHeightfieldTerrainShape::_cast_from_btCollisionShape},
	{0,0}
};

luna_RegEnumType LunaTraits< btHeightfieldTerrainShape >::enumValues[] = {
	{0,0}
};



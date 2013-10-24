#include <plug_common.h>

#include <luna/wrappers/wrapper_btOptimizedBvh.h>

class luna_wrapper_btOptimizedBvh {
public:
	typedef Luna< btOptimizedBvh > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btQuantizedBvh* self=(Luna< btQuantizedBvh >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btQuantizedBvh,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		btOptimizedBvh* self= (btOptimizedBvh*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btOptimizedBvh >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63725098) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btQuantizedBvh >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btQuantizedBvh(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btOptimizedBvh* ptr= dynamic_cast< btOptimizedBvh* >(Luna< btQuantizedBvh >::check(L,1));
		btOptimizedBvh* ptr= luna_caster< btQuantizedBvh, btOptimizedBvh >::cast(Luna< btQuantizedBvh >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btOptimizedBvh >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_build(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56402633)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_refit(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56402633)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_refitPartial(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56402633)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_updateBvhNodes(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56402633)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_calculateSerializeBufferSizeNew(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btOptimizedBvh::btOptimizedBvh()
	static btOptimizedBvh* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in btOptimizedBvh::btOptimizedBvh() function, expected prototype:\nbtOptimizedBvh::btOptimizedBvh()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new btOptimizedBvh();
	}

	// btOptimizedBvh::btOptimizedBvh(lua_Table * data)
	static btOptimizedBvh* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in btOptimizedBvh::btOptimizedBvh(lua_Table * data) function, expected prototype:\nbtOptimizedBvh::btOptimizedBvh(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_btOptimizedBvh(L,NULL);
	}

	// Overload binder for btOptimizedBvh::btOptimizedBvh
	static btOptimizedBvh* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btOptimizedBvh, cannot match any of the overloads for function btOptimizedBvh:\n  btOptimizedBvh()\n  btOptimizedBvh(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void btOptimizedBvh::build(btStridingMeshInterface * triangles, bool useQuantizedAabbCompression, const btVector3 & bvhAabbMin, const btVector3 & bvhAabbMax)
	static int _bind_build(lua_State *L) {
		if (!_lg_typecheck_build(L)) {
			luaL_error(L, "luna typecheck failed in void btOptimizedBvh::build(btStridingMeshInterface * triangles, bool useQuantizedAabbCompression, const btVector3 & bvhAabbMin, const btVector3 & bvhAabbMax) function, expected prototype:\nvoid btOptimizedBvh::build(btStridingMeshInterface * triangles, bool useQuantizedAabbCompression, const btVector3 & bvhAabbMin, const btVector3 & bvhAabbMax)\nClass arguments details:\narg 1 ID = 56402633\narg 3 ID = 91544891\narg 4 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btStridingMeshInterface* triangles=(Luna< btStridingMeshInterface >::check(L,2));
		bool useQuantizedAabbCompression=(bool)(lua_toboolean(L,3)==1);
		const btVector3* bvhAabbMin_ptr=(Luna< btVector3 >::check(L,4));
		if( !bvhAabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bvhAabbMin in btOptimizedBvh::build function");
		}
		const btVector3 & bvhAabbMin=*bvhAabbMin_ptr;
		const btVector3* bvhAabbMax_ptr=(Luna< btVector3 >::check(L,5));
		if( !bvhAabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bvhAabbMax in btOptimizedBvh::build function");
		}
		const btVector3 & bvhAabbMax=*bvhAabbMax_ptr;

		btOptimizedBvh* self=Luna< btQuantizedBvh >::checkSubType< btOptimizedBvh >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btOptimizedBvh::build(btStridingMeshInterface *, bool, const btVector3 &, const btVector3 &). Got : '%s'\n%s",typeid(Luna< btQuantizedBvh >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->build(triangles, useQuantizedAabbCompression, bvhAabbMin, bvhAabbMax);

		return 0;
	}

	// void btOptimizedBvh::refit(btStridingMeshInterface * triangles, const btVector3 & aabbMin, const btVector3 & aabbMax)
	static int _bind_refit(lua_State *L) {
		if (!_lg_typecheck_refit(L)) {
			luaL_error(L, "luna typecheck failed in void btOptimizedBvh::refit(btStridingMeshInterface * triangles, const btVector3 & aabbMin, const btVector3 & aabbMax) function, expected prototype:\nvoid btOptimizedBvh::refit(btStridingMeshInterface * triangles, const btVector3 & aabbMin, const btVector3 & aabbMax)\nClass arguments details:\narg 1 ID = 56402633\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btStridingMeshInterface* triangles=(Luna< btStridingMeshInterface >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btOptimizedBvh::refit function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btOptimizedBvh::refit function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btOptimizedBvh* self=Luna< btQuantizedBvh >::checkSubType< btOptimizedBvh >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btOptimizedBvh::refit(btStridingMeshInterface *, const btVector3 &, const btVector3 &). Got : '%s'\n%s",typeid(Luna< btQuantizedBvh >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->refit(triangles, aabbMin, aabbMax);

		return 0;
	}

	// void btOptimizedBvh::refitPartial(btStridingMeshInterface * triangles, const btVector3 & aabbMin, const btVector3 & aabbMax)
	static int _bind_refitPartial(lua_State *L) {
		if (!_lg_typecheck_refitPartial(L)) {
			luaL_error(L, "luna typecheck failed in void btOptimizedBvh::refitPartial(btStridingMeshInterface * triangles, const btVector3 & aabbMin, const btVector3 & aabbMax) function, expected prototype:\nvoid btOptimizedBvh::refitPartial(btStridingMeshInterface * triangles, const btVector3 & aabbMin, const btVector3 & aabbMax)\nClass arguments details:\narg 1 ID = 56402633\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btStridingMeshInterface* triangles=(Luna< btStridingMeshInterface >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btOptimizedBvh::refitPartial function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btOptimizedBvh::refitPartial function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btOptimizedBvh* self=Luna< btQuantizedBvh >::checkSubType< btOptimizedBvh >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btOptimizedBvh::refitPartial(btStridingMeshInterface *, const btVector3 &, const btVector3 &). Got : '%s'\n%s",typeid(Luna< btQuantizedBvh >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->refitPartial(triangles, aabbMin, aabbMax);

		return 0;
	}

	// void btOptimizedBvh::updateBvhNodes(btStridingMeshInterface * meshInterface, int firstNode, int endNode, int index)
	static int _bind_updateBvhNodes(lua_State *L) {
		if (!_lg_typecheck_updateBvhNodes(L)) {
			luaL_error(L, "luna typecheck failed in void btOptimizedBvh::updateBvhNodes(btStridingMeshInterface * meshInterface, int firstNode, int endNode, int index) function, expected prototype:\nvoid btOptimizedBvh::updateBvhNodes(btStridingMeshInterface * meshInterface, int firstNode, int endNode, int index)\nClass arguments details:\narg 1 ID = 56402633\n\n%s",luna_dumpStack(L).c_str());
		}

		btStridingMeshInterface* meshInterface=(Luna< btStridingMeshInterface >::check(L,2));
		int firstNode=(int)lua_tointeger(L,3);
		int endNode=(int)lua_tointeger(L,4);
		int index=(int)lua_tointeger(L,5);

		btOptimizedBvh* self=Luna< btQuantizedBvh >::checkSubType< btOptimizedBvh >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btOptimizedBvh::updateBvhNodes(btStridingMeshInterface *, int, int, int). Got : '%s'\n%s",typeid(Luna< btQuantizedBvh >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->updateBvhNodes(meshInterface, firstNode, endNode, index);

		return 0;
	}

	// int btOptimizedBvh::base_calculateSerializeBufferSizeNew() const
	static int _bind_base_calculateSerializeBufferSizeNew(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSizeNew(L)) {
			luaL_error(L, "luna typecheck failed in int btOptimizedBvh::base_calculateSerializeBufferSizeNew() const function, expected prototype:\nint btOptimizedBvh::base_calculateSerializeBufferSizeNew() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btOptimizedBvh* self=Luna< btQuantizedBvh >::checkSubType< btOptimizedBvh >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btOptimizedBvh::base_calculateSerializeBufferSizeNew() const. Got : '%s'\n%s",typeid(Luna< btQuantizedBvh >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->btOptimizedBvh::calculateSerializeBufferSizeNew();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btOptimizedBvh* LunaTraits< btOptimizedBvh >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btOptimizedBvh::_bind_ctor(L);
}

void LunaTraits< btOptimizedBvh >::_bind_dtor(btOptimizedBvh* obj) {
	delete obj;
}

const char LunaTraits< btOptimizedBvh >::className[] = "btOptimizedBvh";
const char LunaTraits< btOptimizedBvh >::fullName[] = "btOptimizedBvh";
const char LunaTraits< btOptimizedBvh >::moduleName[] = "bullet";
const char* LunaTraits< btOptimizedBvh >::parents[] = {"bullet.btQuantizedBvh", 0};
const int LunaTraits< btOptimizedBvh >::hash = 23144238;
const int LunaTraits< btOptimizedBvh >::uniqueIDs[] = {63725098,0};

luna_RegType LunaTraits< btOptimizedBvh >::methods[] = {
	{"build", &luna_wrapper_btOptimizedBvh::_bind_build},
	{"refit", &luna_wrapper_btOptimizedBvh::_bind_refit},
	{"refitPartial", &luna_wrapper_btOptimizedBvh::_bind_refitPartial},
	{"updateBvhNodes", &luna_wrapper_btOptimizedBvh::_bind_updateBvhNodes},
	{"base_calculateSerializeBufferSizeNew", &luna_wrapper_btOptimizedBvh::_bind_base_calculateSerializeBufferSizeNew},
	{"fromVoid", &luna_wrapper_btOptimizedBvh::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btOptimizedBvh::_bind_asVoid},
	{"getTable", &luna_wrapper_btOptimizedBvh::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btOptimizedBvh >::converters[] = {
	{"btQuantizedBvh", &luna_wrapper_btOptimizedBvh::_cast_from_btQuantizedBvh},
	{0,0}
};

luna_RegEnumType LunaTraits< btOptimizedBvh >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

#include <luna/wrappers/wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager.h>

class luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager {
public:
	typedef Luna< btGImpactMeshShapePart::TrimeshPrimitiveManager > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btPrimitiveManagerBase* self=(Luna< btPrimitiveManagerBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btPrimitiveManagerBase,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		btGImpactMeshShapePart::TrimeshPrimitiveManager* self= (btGImpactMeshShapePart::TrimeshPrimitiveManager*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btGImpactMeshShapePart::TrimeshPrimitiveManager >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85935800) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btPrimitiveManagerBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btPrimitiveManagerBase(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btGImpactMeshShapePart::TrimeshPrimitiveManager* ptr= dynamic_cast< btGImpactMeshShapePart::TrimeshPrimitiveManager* >(Luna< btPrimitiveManagerBase >::check(L,1));
		btGImpactMeshShapePart::TrimeshPrimitiveManager* ptr= luna_caster< btPrimitiveManagerBase, btGImpactMeshShapePart::TrimeshPrimitiveManager >::cast(Luna< btPrimitiveManagerBase >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btGImpactMeshShapePart::TrimeshPrimitiveManager >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85935800) ) return false;
		if( (!(Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56402633)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btStridingMeshInterface >::check(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,85935800) ) return false;
		if( (!(Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56402633)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btStridingMeshInterface >::check(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_lock(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_unlock(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_is_trimesh(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_primitive_count(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_vertex_count(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_indices(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_vertex(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_primitive_box(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,14786052) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_primitive_triangle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,79712881) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_bullet_triangle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,58243831) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMeshInterface(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getScale(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPart(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_lock_count(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertexbase(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumverts(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStride(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIndexbase(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIndexstride(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumfaces(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIndicestype(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMeshInterface(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56402633)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setScale(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPart(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_lock_count(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumverts(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStride(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIndexstride(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumfaces(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIndicestype(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_is_trimesh(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_get_primitive_count(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_get_primitive_box(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,14786052) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_get_primitive_triangle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,79712881) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btGImpactMeshShapePart::TrimeshPrimitiveManager::TrimeshPrimitiveManager()
	static btGImpactMeshShapePart::TrimeshPrimitiveManager* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in btGImpactMeshShapePart::TrimeshPrimitiveManager::TrimeshPrimitiveManager() function, expected prototype:\nbtGImpactMeshShapePart::TrimeshPrimitiveManager::TrimeshPrimitiveManager()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new btGImpactMeshShapePart::TrimeshPrimitiveManager();
	}

	// btGImpactMeshShapePart::TrimeshPrimitiveManager::TrimeshPrimitiveManager(const btGImpactMeshShapePart::TrimeshPrimitiveManager & manager)
	static btGImpactMeshShapePart::TrimeshPrimitiveManager* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in btGImpactMeshShapePart::TrimeshPrimitiveManager::TrimeshPrimitiveManager(const btGImpactMeshShapePart::TrimeshPrimitiveManager & manager) function, expected prototype:\nbtGImpactMeshShapePart::TrimeshPrimitiveManager::TrimeshPrimitiveManager(const btGImpactMeshShapePart::TrimeshPrimitiveManager & manager)\nClass arguments details:\narg 1 ID = 85935800\n\n%s",luna_dumpStack(L).c_str());
		}

		const btGImpactMeshShapePart::TrimeshPrimitiveManager* manager_ptr=(Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1));
		if( !manager_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg manager in btGImpactMeshShapePart::TrimeshPrimitiveManager::TrimeshPrimitiveManager function");
		}
		const btGImpactMeshShapePart::TrimeshPrimitiveManager & manager=*manager_ptr;

		return new btGImpactMeshShapePart::TrimeshPrimitiveManager(manager);
	}

	// btGImpactMeshShapePart::TrimeshPrimitiveManager::TrimeshPrimitiveManager(btStridingMeshInterface * meshInterface, int part)
	static btGImpactMeshShapePart::TrimeshPrimitiveManager* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in btGImpactMeshShapePart::TrimeshPrimitiveManager::TrimeshPrimitiveManager(btStridingMeshInterface * meshInterface, int part) function, expected prototype:\nbtGImpactMeshShapePart::TrimeshPrimitiveManager::TrimeshPrimitiveManager(btStridingMeshInterface * meshInterface, int part)\nClass arguments details:\narg 1 ID = 56402633\n\n%s",luna_dumpStack(L).c_str());
		}

		btStridingMeshInterface* meshInterface=(Luna< btStridingMeshInterface >::check(L,1));
		int part=(int)lua_tointeger(L,2);

		return new btGImpactMeshShapePart::TrimeshPrimitiveManager(meshInterface, part);
	}

	// btGImpactMeshShapePart::TrimeshPrimitiveManager::TrimeshPrimitiveManager(lua_Table * data)
	static btGImpactMeshShapePart::TrimeshPrimitiveManager* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in btGImpactMeshShapePart::TrimeshPrimitiveManager::TrimeshPrimitiveManager(lua_Table * data) function, expected prototype:\nbtGImpactMeshShapePart::TrimeshPrimitiveManager::TrimeshPrimitiveManager(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager(L,NULL);
	}

	// btGImpactMeshShapePart::TrimeshPrimitiveManager::TrimeshPrimitiveManager(lua_Table * data, const btGImpactMeshShapePart::TrimeshPrimitiveManager & manager)
	static btGImpactMeshShapePart::TrimeshPrimitiveManager* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in btGImpactMeshShapePart::TrimeshPrimitiveManager::TrimeshPrimitiveManager(lua_Table * data, const btGImpactMeshShapePart::TrimeshPrimitiveManager & manager) function, expected prototype:\nbtGImpactMeshShapePart::TrimeshPrimitiveManager::TrimeshPrimitiveManager(lua_Table * data, const btGImpactMeshShapePart::TrimeshPrimitiveManager & manager)\nClass arguments details:\narg 2 ID = 85935800\n\n%s",luna_dumpStack(L).c_str());
		}

		const btGImpactMeshShapePart::TrimeshPrimitiveManager* manager_ptr=(Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,2));
		if( !manager_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg manager in btGImpactMeshShapePart::TrimeshPrimitiveManager::TrimeshPrimitiveManager function");
		}
		const btGImpactMeshShapePart::TrimeshPrimitiveManager & manager=*manager_ptr;

		return new wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager(L,NULL, manager);
	}

	// btGImpactMeshShapePart::TrimeshPrimitiveManager::TrimeshPrimitiveManager(lua_Table * data, btStridingMeshInterface * meshInterface, int part)
	static btGImpactMeshShapePart::TrimeshPrimitiveManager* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in btGImpactMeshShapePart::TrimeshPrimitiveManager::TrimeshPrimitiveManager(lua_Table * data, btStridingMeshInterface * meshInterface, int part) function, expected prototype:\nbtGImpactMeshShapePart::TrimeshPrimitiveManager::TrimeshPrimitiveManager(lua_Table * data, btStridingMeshInterface * meshInterface, int part)\nClass arguments details:\narg 2 ID = 56402633\n\n%s",luna_dumpStack(L).c_str());
		}

		btStridingMeshInterface* meshInterface=(Luna< btStridingMeshInterface >::check(L,2));
		int part=(int)lua_tointeger(L,3);

		return new wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager(L,NULL, meshInterface, part);
	}

	// Overload binder for btGImpactMeshShapePart::TrimeshPrimitiveManager::TrimeshPrimitiveManager
	static btGImpactMeshShapePart::TrimeshPrimitiveManager* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function TrimeshPrimitiveManager, cannot match any of the overloads for function TrimeshPrimitiveManager:\n  TrimeshPrimitiveManager()\n  TrimeshPrimitiveManager(const btGImpactMeshShapePart::TrimeshPrimitiveManager &)\n  TrimeshPrimitiveManager(btStridingMeshInterface *, int)\n  TrimeshPrimitiveManager(lua_Table *)\n  TrimeshPrimitiveManager(lua_Table *, const btGImpactMeshShapePart::TrimeshPrimitiveManager &)\n  TrimeshPrimitiveManager(lua_Table *, btStridingMeshInterface *, int)\n");
		return NULL;
	}


	// Function binds:
	// void btGImpactMeshShapePart::TrimeshPrimitiveManager::lock()
	static int _bind_lock(lua_State *L) {
		if (!_lg_typecheck_lock(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::TrimeshPrimitiveManager::lock() function, expected prototype:\nvoid btGImpactMeshShapePart::TrimeshPrimitiveManager::lock()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::TrimeshPrimitiveManager::lock(). Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->lock();

		return 0;
	}

	// void btGImpactMeshShapePart::TrimeshPrimitiveManager::unlock()
	static int _bind_unlock(lua_State *L) {
		if (!_lg_typecheck_unlock(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::TrimeshPrimitiveManager::unlock() function, expected prototype:\nvoid btGImpactMeshShapePart::TrimeshPrimitiveManager::unlock()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::TrimeshPrimitiveManager::unlock(). Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->unlock();

		return 0;
	}

	// bool btGImpactMeshShapePart::TrimeshPrimitiveManager::is_trimesh() const
	static int _bind_is_trimesh(lua_State *L) {
		if (!_lg_typecheck_is_trimesh(L)) {
			luaL_error(L, "luna typecheck failed in bool btGImpactMeshShapePart::TrimeshPrimitiveManager::is_trimesh() const function, expected prototype:\nbool btGImpactMeshShapePart::TrimeshPrimitiveManager::is_trimesh() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btGImpactMeshShapePart::TrimeshPrimitiveManager::is_trimesh() const. Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->is_trimesh();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int btGImpactMeshShapePart::TrimeshPrimitiveManager::get_primitive_count() const
	static int _bind_get_primitive_count(lua_State *L) {
		if (!_lg_typecheck_get_primitive_count(L)) {
			luaL_error(L, "luna typecheck failed in int btGImpactMeshShapePart::TrimeshPrimitiveManager::get_primitive_count() const function, expected prototype:\nint btGImpactMeshShapePart::TrimeshPrimitiveManager::get_primitive_count() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btGImpactMeshShapePart::TrimeshPrimitiveManager::get_primitive_count() const. Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->get_primitive_count();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btGImpactMeshShapePart::TrimeshPrimitiveManager::get_vertex_count() const
	static int _bind_get_vertex_count(lua_State *L) {
		if (!_lg_typecheck_get_vertex_count(L)) {
			luaL_error(L, "luna typecheck failed in int btGImpactMeshShapePart::TrimeshPrimitiveManager::get_vertex_count() const function, expected prototype:\nint btGImpactMeshShapePart::TrimeshPrimitiveManager::get_vertex_count() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btGImpactMeshShapePart::TrimeshPrimitiveManager::get_vertex_count() const. Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->get_vertex_count();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGImpactMeshShapePart::TrimeshPrimitiveManager::get_indices(int face_index, int & i0, int & i1, int & i2) const
	static int _bind_get_indices(lua_State *L) {
		if (!_lg_typecheck_get_indices(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::TrimeshPrimitiveManager::get_indices(int face_index, int & i0, int & i1, int & i2) const function, expected prototype:\nvoid btGImpactMeshShapePart::TrimeshPrimitiveManager::get_indices(int face_index, int & i0, int & i1, int & i2) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int face_index=(int)lua_tointeger(L,2);
		int i0=(int)lua_tointeger(L,3);
		int i1=(int)lua_tointeger(L,4);
		int i2=(int)lua_tointeger(L,5);

		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::TrimeshPrimitiveManager::get_indices(int, int &, int &, int &) const. Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->get_indices(face_index, i0, i1, i2);

		lua_pushnumber(L,i0);
		lua_pushnumber(L,i1);
		lua_pushnumber(L,i2);
		return 3;
	}

	// void btGImpactMeshShapePart::TrimeshPrimitiveManager::get_vertex(int vertex_index, btVector3 & vertex) const
	static int _bind_get_vertex(lua_State *L) {
		if (!_lg_typecheck_get_vertex(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::TrimeshPrimitiveManager::get_vertex(int vertex_index, btVector3 & vertex) const function, expected prototype:\nvoid btGImpactMeshShapePart::TrimeshPrimitiveManager::get_vertex(int vertex_index, btVector3 & vertex) const\nClass arguments details:\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		int vertex_index=(int)lua_tointeger(L,2);
		btVector3* vertex_ptr=(Luna< btVector3 >::check(L,3));
		if( !vertex_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vertex in btGImpactMeshShapePart::TrimeshPrimitiveManager::get_vertex function");
		}
		btVector3 & vertex=*vertex_ptr;

		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::TrimeshPrimitiveManager::get_vertex(int, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->get_vertex(vertex_index, vertex);

		return 0;
	}

	// void btGImpactMeshShapePart::TrimeshPrimitiveManager::get_primitive_box(int prim_index, btAABB & primbox) const
	static int _bind_get_primitive_box(lua_State *L) {
		if (!_lg_typecheck_get_primitive_box(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::TrimeshPrimitiveManager::get_primitive_box(int prim_index, btAABB & primbox) const function, expected prototype:\nvoid btGImpactMeshShapePart::TrimeshPrimitiveManager::get_primitive_box(int prim_index, btAABB & primbox) const\nClass arguments details:\narg 2 ID = 14786052\n\n%s",luna_dumpStack(L).c_str());
		}

		int prim_index=(int)lua_tointeger(L,2);
		btAABB* primbox_ptr=(Luna< btAABB >::check(L,3));
		if( !primbox_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg primbox in btGImpactMeshShapePart::TrimeshPrimitiveManager::get_primitive_box function");
		}
		btAABB & primbox=*primbox_ptr;

		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::TrimeshPrimitiveManager::get_primitive_box(int, btAABB &) const. Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->get_primitive_box(prim_index, primbox);

		return 0;
	}

	// void btGImpactMeshShapePart::TrimeshPrimitiveManager::get_primitive_triangle(int prim_index, btPrimitiveTriangle & triangle) const
	static int _bind_get_primitive_triangle(lua_State *L) {
		if (!_lg_typecheck_get_primitive_triangle(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::TrimeshPrimitiveManager::get_primitive_triangle(int prim_index, btPrimitiveTriangle & triangle) const function, expected prototype:\nvoid btGImpactMeshShapePart::TrimeshPrimitiveManager::get_primitive_triangle(int prim_index, btPrimitiveTriangle & triangle) const\nClass arguments details:\narg 2 ID = 79712881\n\n%s",luna_dumpStack(L).c_str());
		}

		int prim_index=(int)lua_tointeger(L,2);
		btPrimitiveTriangle* triangle_ptr=(Luna< btPrimitiveTriangle >::check(L,3));
		if( !triangle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg triangle in btGImpactMeshShapePart::TrimeshPrimitiveManager::get_primitive_triangle function");
		}
		btPrimitiveTriangle & triangle=*triangle_ptr;

		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::TrimeshPrimitiveManager::get_primitive_triangle(int, btPrimitiveTriangle &) const. Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->get_primitive_triangle(prim_index, triangle);

		return 0;
	}

	// void btGImpactMeshShapePart::TrimeshPrimitiveManager::get_bullet_triangle(int prim_index, btTriangleShapeEx & triangle) const
	static int _bind_get_bullet_triangle(lua_State *L) {
		if (!_lg_typecheck_get_bullet_triangle(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::TrimeshPrimitiveManager::get_bullet_triangle(int prim_index, btTriangleShapeEx & triangle) const function, expected prototype:\nvoid btGImpactMeshShapePart::TrimeshPrimitiveManager::get_bullet_triangle(int prim_index, btTriangleShapeEx & triangle) const\nClass arguments details:\narg 2 ID = 58243831\n\n%s",luna_dumpStack(L).c_str());
		}

		int prim_index=(int)lua_tointeger(L,2);
		btTriangleShapeEx* triangle_ptr=(Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,3));
		if( !triangle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg triangle in btGImpactMeshShapePart::TrimeshPrimitiveManager::get_bullet_triangle function");
		}
		btTriangleShapeEx & triangle=*triangle_ptr;

		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::TrimeshPrimitiveManager::get_bullet_triangle(int, btTriangleShapeEx &) const. Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->get_bullet_triangle(prim_index, triangle);

		return 0;
	}

	// float btGImpactMeshShapePart::TrimeshPrimitiveManager::m_margin()
	static int _bind_getMargin(lua_State *L) {
		if (!_lg_typecheck_getMargin(L)) {
			luaL_error(L, "luna typecheck failed in float btGImpactMeshShapePart::TrimeshPrimitiveManager::m_margin() function, expected prototype:\nfloat btGImpactMeshShapePart::TrimeshPrimitiveManager::m_margin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btGImpactMeshShapePart::TrimeshPrimitiveManager::m_margin(). Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->m_margin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// btStridingMeshInterface * btGImpactMeshShapePart::TrimeshPrimitiveManager::m_meshInterface()
	static int _bind_getMeshInterface(lua_State *L) {
		if (!_lg_typecheck_getMeshInterface(L)) {
			luaL_error(L, "luna typecheck failed in btStridingMeshInterface * btGImpactMeshShapePart::TrimeshPrimitiveManager::m_meshInterface() function, expected prototype:\nbtStridingMeshInterface * btGImpactMeshShapePart::TrimeshPrimitiveManager::m_meshInterface()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btStridingMeshInterface * btGImpactMeshShapePart::TrimeshPrimitiveManager::m_meshInterface(). Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btStridingMeshInterface * lret = self->m_meshInterface;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btStridingMeshInterface >::push(L,lret,false);

		return 1;
	}

	// btVector3 btGImpactMeshShapePart::TrimeshPrimitiveManager::m_scale()
	static int _bind_getScale(lua_State *L) {
		if (!_lg_typecheck_getScale(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btGImpactMeshShapePart::TrimeshPrimitiveManager::m_scale() function, expected prototype:\nbtVector3 btGImpactMeshShapePart::TrimeshPrimitiveManager::m_scale()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btGImpactMeshShapePart::TrimeshPrimitiveManager::m_scale(). Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->m_scale;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// int btGImpactMeshShapePart::TrimeshPrimitiveManager::m_part()
	static int _bind_getPart(lua_State *L) {
		if (!_lg_typecheck_getPart(L)) {
			luaL_error(L, "luna typecheck failed in int btGImpactMeshShapePart::TrimeshPrimitiveManager::m_part() function, expected prototype:\nint btGImpactMeshShapePart::TrimeshPrimitiveManager::m_part()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btGImpactMeshShapePart::TrimeshPrimitiveManager::m_part(). Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_part;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btGImpactMeshShapePart::TrimeshPrimitiveManager::m_lock_count()
	static int _bind_get_lock_count(lua_State *L) {
		if (!_lg_typecheck_get_lock_count(L)) {
			luaL_error(L, "luna typecheck failed in int btGImpactMeshShapePart::TrimeshPrimitiveManager::m_lock_count() function, expected prototype:\nint btGImpactMeshShapePart::TrimeshPrimitiveManager::m_lock_count()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btGImpactMeshShapePart::TrimeshPrimitiveManager::m_lock_count(). Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_lock_count;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const unsigned char * btGImpactMeshShapePart::TrimeshPrimitiveManager::vertexbase()
	static int _bind_getVertexbase(lua_State *L) {
		if (!_lg_typecheck_getVertexbase(L)) {
			luaL_error(L, "luna typecheck failed in const unsigned char * btGImpactMeshShapePart::TrimeshPrimitiveManager::vertexbase() function, expected prototype:\nconst unsigned char * btGImpactMeshShapePart::TrimeshPrimitiveManager::vertexbase()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const unsigned char * btGImpactMeshShapePart::TrimeshPrimitiveManager::vertexbase(). Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const unsigned char * lret = self->vertexbase;
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// int btGImpactMeshShapePart::TrimeshPrimitiveManager::numverts()
	static int _bind_getNumverts(lua_State *L) {
		if (!_lg_typecheck_getNumverts(L)) {
			luaL_error(L, "luna typecheck failed in int btGImpactMeshShapePart::TrimeshPrimitiveManager::numverts() function, expected prototype:\nint btGImpactMeshShapePart::TrimeshPrimitiveManager::numverts()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btGImpactMeshShapePart::TrimeshPrimitiveManager::numverts(). Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->numverts;
		lua_pushnumber(L,lret);

		return 1;
	}

	// PHY_ScalarType btGImpactMeshShapePart::TrimeshPrimitiveManager::type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in PHY_ScalarType btGImpactMeshShapePart::TrimeshPrimitiveManager::type() function, expected prototype:\nPHY_ScalarType btGImpactMeshShapePart::TrimeshPrimitiveManager::type()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call PHY_ScalarType btGImpactMeshShapePart::TrimeshPrimitiveManager::type(). Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		PHY_ScalarType lret = self->type;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btGImpactMeshShapePart::TrimeshPrimitiveManager::stride()
	static int _bind_getStride(lua_State *L) {
		if (!_lg_typecheck_getStride(L)) {
			luaL_error(L, "luna typecheck failed in int btGImpactMeshShapePart::TrimeshPrimitiveManager::stride() function, expected prototype:\nint btGImpactMeshShapePart::TrimeshPrimitiveManager::stride()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btGImpactMeshShapePart::TrimeshPrimitiveManager::stride(). Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->stride;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const unsigned char * btGImpactMeshShapePart::TrimeshPrimitiveManager::indexbase()
	static int _bind_getIndexbase(lua_State *L) {
		if (!_lg_typecheck_getIndexbase(L)) {
			luaL_error(L, "luna typecheck failed in const unsigned char * btGImpactMeshShapePart::TrimeshPrimitiveManager::indexbase() function, expected prototype:\nconst unsigned char * btGImpactMeshShapePart::TrimeshPrimitiveManager::indexbase()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const unsigned char * btGImpactMeshShapePart::TrimeshPrimitiveManager::indexbase(). Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const unsigned char * lret = self->indexbase;
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// int btGImpactMeshShapePart::TrimeshPrimitiveManager::indexstride()
	static int _bind_getIndexstride(lua_State *L) {
		if (!_lg_typecheck_getIndexstride(L)) {
			luaL_error(L, "luna typecheck failed in int btGImpactMeshShapePart::TrimeshPrimitiveManager::indexstride() function, expected prototype:\nint btGImpactMeshShapePart::TrimeshPrimitiveManager::indexstride()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btGImpactMeshShapePart::TrimeshPrimitiveManager::indexstride(). Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->indexstride;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btGImpactMeshShapePart::TrimeshPrimitiveManager::numfaces()
	static int _bind_getNumfaces(lua_State *L) {
		if (!_lg_typecheck_getNumfaces(L)) {
			luaL_error(L, "luna typecheck failed in int btGImpactMeshShapePart::TrimeshPrimitiveManager::numfaces() function, expected prototype:\nint btGImpactMeshShapePart::TrimeshPrimitiveManager::numfaces()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btGImpactMeshShapePart::TrimeshPrimitiveManager::numfaces(). Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->numfaces;
		lua_pushnumber(L,lret);

		return 1;
	}

	// PHY_ScalarType btGImpactMeshShapePart::TrimeshPrimitiveManager::indicestype()
	static int _bind_getIndicestype(lua_State *L) {
		if (!_lg_typecheck_getIndicestype(L)) {
			luaL_error(L, "luna typecheck failed in PHY_ScalarType btGImpactMeshShapePart::TrimeshPrimitiveManager::indicestype() function, expected prototype:\nPHY_ScalarType btGImpactMeshShapePart::TrimeshPrimitiveManager::indicestype()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call PHY_ScalarType btGImpactMeshShapePart::TrimeshPrimitiveManager::indicestype(). Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		PHY_ScalarType lret = self->indicestype;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGImpactMeshShapePart::TrimeshPrimitiveManager::m_margin(float value)
	static int _bind_setMargin(lua_State *L) {
		if (!_lg_typecheck_setMargin(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::TrimeshPrimitiveManager::m_margin(float value) function, expected prototype:\nvoid btGImpactMeshShapePart::TrimeshPrimitiveManager::m_margin(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::TrimeshPrimitiveManager::m_margin(float). Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_margin = value;

		return 0;
	}

	// void btGImpactMeshShapePart::TrimeshPrimitiveManager::m_meshInterface(btStridingMeshInterface * value)
	static int _bind_setMeshInterface(lua_State *L) {
		if (!_lg_typecheck_setMeshInterface(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::TrimeshPrimitiveManager::m_meshInterface(btStridingMeshInterface * value) function, expected prototype:\nvoid btGImpactMeshShapePart::TrimeshPrimitiveManager::m_meshInterface(btStridingMeshInterface * value)\nClass arguments details:\narg 1 ID = 56402633\n\n%s",luna_dumpStack(L).c_str());
		}

		btStridingMeshInterface* value=(Luna< btStridingMeshInterface >::check(L,2));

		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::TrimeshPrimitiveManager::m_meshInterface(btStridingMeshInterface *). Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_meshInterface = value;

		return 0;
	}

	// void btGImpactMeshShapePart::TrimeshPrimitiveManager::m_scale(btVector3 value)
	static int _bind_setScale(lua_State *L) {
		if (!_lg_typecheck_setScale(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::TrimeshPrimitiveManager::m_scale(btVector3 value) function, expected prototype:\nvoid btGImpactMeshShapePart::TrimeshPrimitiveManager::m_scale(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btGImpactMeshShapePart::TrimeshPrimitiveManager::m_scale function");
		}
		btVector3 value=*value_ptr;

		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::TrimeshPrimitiveManager::m_scale(btVector3). Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_scale = value;

		return 0;
	}

	// void btGImpactMeshShapePart::TrimeshPrimitiveManager::m_part(int value)
	static int _bind_setPart(lua_State *L) {
		if (!_lg_typecheck_setPart(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::TrimeshPrimitiveManager::m_part(int value) function, expected prototype:\nvoid btGImpactMeshShapePart::TrimeshPrimitiveManager::m_part(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::TrimeshPrimitiveManager::m_part(int). Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_part = value;

		return 0;
	}

	// void btGImpactMeshShapePart::TrimeshPrimitiveManager::m_lock_count(int value)
	static int _bind_set_lock_count(lua_State *L) {
		if (!_lg_typecheck_set_lock_count(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::TrimeshPrimitiveManager::m_lock_count(int value) function, expected prototype:\nvoid btGImpactMeshShapePart::TrimeshPrimitiveManager::m_lock_count(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::TrimeshPrimitiveManager::m_lock_count(int). Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_lock_count = value;

		return 0;
	}

	// void btGImpactMeshShapePart::TrimeshPrimitiveManager::numverts(int value)
	static int _bind_setNumverts(lua_State *L) {
		if (!_lg_typecheck_setNumverts(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::TrimeshPrimitiveManager::numverts(int value) function, expected prototype:\nvoid btGImpactMeshShapePart::TrimeshPrimitiveManager::numverts(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::TrimeshPrimitiveManager::numverts(int). Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->numverts = value;

		return 0;
	}

	// void btGImpactMeshShapePart::TrimeshPrimitiveManager::type(PHY_ScalarType value)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::TrimeshPrimitiveManager::type(PHY_ScalarType value) function, expected prototype:\nvoid btGImpactMeshShapePart::TrimeshPrimitiveManager::type(PHY_ScalarType value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		PHY_ScalarType value=(PHY_ScalarType)lua_tointeger(L,2);

		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::TrimeshPrimitiveManager::type(PHY_ScalarType). Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->type = value;

		return 0;
	}

	// void btGImpactMeshShapePart::TrimeshPrimitiveManager::stride(int value)
	static int _bind_setStride(lua_State *L) {
		if (!_lg_typecheck_setStride(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::TrimeshPrimitiveManager::stride(int value) function, expected prototype:\nvoid btGImpactMeshShapePart::TrimeshPrimitiveManager::stride(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::TrimeshPrimitiveManager::stride(int). Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->stride = value;

		return 0;
	}

	// void btGImpactMeshShapePart::TrimeshPrimitiveManager::indexstride(int value)
	static int _bind_setIndexstride(lua_State *L) {
		if (!_lg_typecheck_setIndexstride(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::TrimeshPrimitiveManager::indexstride(int value) function, expected prototype:\nvoid btGImpactMeshShapePart::TrimeshPrimitiveManager::indexstride(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::TrimeshPrimitiveManager::indexstride(int). Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->indexstride = value;

		return 0;
	}

	// void btGImpactMeshShapePart::TrimeshPrimitiveManager::numfaces(int value)
	static int _bind_setNumfaces(lua_State *L) {
		if (!_lg_typecheck_setNumfaces(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::TrimeshPrimitiveManager::numfaces(int value) function, expected prototype:\nvoid btGImpactMeshShapePart::TrimeshPrimitiveManager::numfaces(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::TrimeshPrimitiveManager::numfaces(int). Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->numfaces = value;

		return 0;
	}

	// void btGImpactMeshShapePart::TrimeshPrimitiveManager::indicestype(PHY_ScalarType value)
	static int _bind_setIndicestype(lua_State *L) {
		if (!_lg_typecheck_setIndicestype(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::TrimeshPrimitiveManager::indicestype(PHY_ScalarType value) function, expected prototype:\nvoid btGImpactMeshShapePart::TrimeshPrimitiveManager::indicestype(PHY_ScalarType value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		PHY_ScalarType value=(PHY_ScalarType)lua_tointeger(L,2);

		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::TrimeshPrimitiveManager::indicestype(PHY_ScalarType). Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->indicestype = value;

		return 0;
	}

	// bool btGImpactMeshShapePart::TrimeshPrimitiveManager::base_is_trimesh() const
	static int _bind_base_is_trimesh(lua_State *L) {
		if (!_lg_typecheck_base_is_trimesh(L)) {
			luaL_error(L, "luna typecheck failed in bool btGImpactMeshShapePart::TrimeshPrimitiveManager::base_is_trimesh() const function, expected prototype:\nbool btGImpactMeshShapePart::TrimeshPrimitiveManager::base_is_trimesh() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btGImpactMeshShapePart::TrimeshPrimitiveManager::base_is_trimesh() const. Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TrimeshPrimitiveManager::is_trimesh();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int btGImpactMeshShapePart::TrimeshPrimitiveManager::base_get_primitive_count() const
	static int _bind_base_get_primitive_count(lua_State *L) {
		if (!_lg_typecheck_base_get_primitive_count(L)) {
			luaL_error(L, "luna typecheck failed in int btGImpactMeshShapePart::TrimeshPrimitiveManager::base_get_primitive_count() const function, expected prototype:\nint btGImpactMeshShapePart::TrimeshPrimitiveManager::base_get_primitive_count() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btGImpactMeshShapePart::TrimeshPrimitiveManager::base_get_primitive_count() const. Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->TrimeshPrimitiveManager::get_primitive_count();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGImpactMeshShapePart::TrimeshPrimitiveManager::base_get_primitive_box(int prim_index, btAABB & primbox) const
	static int _bind_base_get_primitive_box(lua_State *L) {
		if (!_lg_typecheck_base_get_primitive_box(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::TrimeshPrimitiveManager::base_get_primitive_box(int prim_index, btAABB & primbox) const function, expected prototype:\nvoid btGImpactMeshShapePart::TrimeshPrimitiveManager::base_get_primitive_box(int prim_index, btAABB & primbox) const\nClass arguments details:\narg 2 ID = 14786052\n\n%s",luna_dumpStack(L).c_str());
		}

		int prim_index=(int)lua_tointeger(L,2);
		btAABB* primbox_ptr=(Luna< btAABB >::check(L,3));
		if( !primbox_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg primbox in btGImpactMeshShapePart::TrimeshPrimitiveManager::base_get_primitive_box function");
		}
		btAABB & primbox=*primbox_ptr;

		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::TrimeshPrimitiveManager::base_get_primitive_box(int, btAABB &) const. Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrimeshPrimitiveManager::get_primitive_box(prim_index, primbox);

		return 0;
	}

	// void btGImpactMeshShapePart::TrimeshPrimitiveManager::base_get_primitive_triangle(int prim_index, btPrimitiveTriangle & triangle) const
	static int _bind_base_get_primitive_triangle(lua_State *L) {
		if (!_lg_typecheck_base_get_primitive_triangle(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::TrimeshPrimitiveManager::base_get_primitive_triangle(int prim_index, btPrimitiveTriangle & triangle) const function, expected prototype:\nvoid btGImpactMeshShapePart::TrimeshPrimitiveManager::base_get_primitive_triangle(int prim_index, btPrimitiveTriangle & triangle) const\nClass arguments details:\narg 2 ID = 79712881\n\n%s",luna_dumpStack(L).c_str());
		}

		int prim_index=(int)lua_tointeger(L,2);
		btPrimitiveTriangle* triangle_ptr=(Luna< btPrimitiveTriangle >::check(L,3));
		if( !triangle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg triangle in btGImpactMeshShapePart::TrimeshPrimitiveManager::base_get_primitive_triangle function");
		}
		btPrimitiveTriangle & triangle=*triangle_ptr;

		btGImpactMeshShapePart::TrimeshPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactMeshShapePart::TrimeshPrimitiveManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::TrimeshPrimitiveManager::base_get_primitive_triangle(int, btPrimitiveTriangle &) const. Got : '%s'\n%s",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TrimeshPrimitiveManager::get_primitive_triangle(prim_index, triangle);

		return 0;
	}


	// Operator binds:

};

btGImpactMeshShapePart::TrimeshPrimitiveManager* LunaTraits< btGImpactMeshShapePart::TrimeshPrimitiveManager >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_ctor(L);
}

void LunaTraits< btGImpactMeshShapePart::TrimeshPrimitiveManager >::_bind_dtor(btGImpactMeshShapePart::TrimeshPrimitiveManager* obj) {
	delete obj;
}

const char LunaTraits< btGImpactMeshShapePart::TrimeshPrimitiveManager >::className[] = "btGImpactMeshShapePart_TrimeshPrimitiveManager";
const char LunaTraits< btGImpactMeshShapePart::TrimeshPrimitiveManager >::fullName[] = "btGImpactMeshShapePart::TrimeshPrimitiveManager";
const char LunaTraits< btGImpactMeshShapePart::TrimeshPrimitiveManager >::moduleName[] = "bullet";
const char* LunaTraits< btGImpactMeshShapePart::TrimeshPrimitiveManager >::parents[] = {"bullet.btPrimitiveManagerBase", 0};
const int LunaTraits< btGImpactMeshShapePart::TrimeshPrimitiveManager >::hash = 7355871;
const int LunaTraits< btGImpactMeshShapePart::TrimeshPrimitiveManager >::uniqueIDs[] = {85935800,0};

luna_RegType LunaTraits< btGImpactMeshShapePart::TrimeshPrimitiveManager >::methods[] = {
	{"lock", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_lock},
	{"unlock", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_unlock},
	{"is_trimesh", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_is_trimesh},
	{"get_primitive_count", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_get_primitive_count},
	{"get_vertex_count", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_get_vertex_count},
	{"get_indices", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_get_indices},
	{"get_vertex", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_get_vertex},
	{"get_primitive_box", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_get_primitive_box},
	{"get_primitive_triangle", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_get_primitive_triangle},
	{"get_bullet_triangle", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_get_bullet_triangle},
	{"getMargin", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_getMargin},
	{"getMeshInterface", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_getMeshInterface},
	{"getScale", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_getScale},
	{"getPart", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_getPart},
	{"get_lock_count", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_get_lock_count},
	{"getVertexbase", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_getVertexbase},
	{"getNumverts", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_getNumverts},
	{"getType", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_getType},
	{"getStride", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_getStride},
	{"getIndexbase", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_getIndexbase},
	{"getIndexstride", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_getIndexstride},
	{"getNumfaces", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_getNumfaces},
	{"getIndicestype", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_getIndicestype},
	{"setMargin", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_setMargin},
	{"setMeshInterface", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_setMeshInterface},
	{"setScale", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_setScale},
	{"setPart", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_setPart},
	{"set_lock_count", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_set_lock_count},
	{"setNumverts", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_setNumverts},
	{"setType", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_setType},
	{"setStride", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_setStride},
	{"setIndexstride", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_setIndexstride},
	{"setNumfaces", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_setNumfaces},
	{"setIndicestype", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_setIndicestype},
	{"base_is_trimesh", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_base_is_trimesh},
	{"base_get_primitive_count", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_base_get_primitive_count},
	{"base_get_primitive_box", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_base_get_primitive_box},
	{"base_get_primitive_triangle", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_base_get_primitive_triangle},
	{"fromVoid", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_asVoid},
	{"getTable", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btGImpactMeshShapePart::TrimeshPrimitiveManager >::converters[] = {
	{"btPrimitiveManagerBase", &luna_wrapper_btGImpactMeshShapePart_TrimeshPrimitiveManager::_cast_from_btPrimitiveManagerBase},
	{0,0}
};

luna_RegEnumType LunaTraits< btGImpactMeshShapePart::TrimeshPrimitiveManager >::enumValues[] = {
	{0,0}
};



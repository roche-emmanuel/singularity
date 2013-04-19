#include <plug_common.h>

#include <luna/wrappers/wrapper_sgt_TileCache.h>

class luna_wrapper_sgt_TileCache {
public:
	typedef Luna< sgt::TileCache > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		sgt::TileCache* self= (sgt::TileCache*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::TileCache >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Object(lua_State *L) {
		// all checked are already performed before reaching this point.
		//sgt::TileCache* ptr= dynamic_cast< sgt::TileCache* >(Luna< osg::Referenced >::check(L,1));
		sgt::TileCache* ptr= luna_caster< osg::Referenced, sgt::TileCache >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::TileCache >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< sgt::TileStorage >(L,1)) ) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< sgt::Scheduler >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< sgt::TileStorage >(L,2)) ) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< sgt::Scheduler >(L,4)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getStorage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getScheduler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUsedTiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUnusedTiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_findTile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>7 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_prefetchTile(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_putTile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,38575498)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_invalidateTiles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_invalidateTile(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::TileCache::TileCache(sgt::TileStorage * storage, std::string name, sgt::Scheduler * scheduler = NULL)
	static sgt::TileCache* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TileCache::TileCache(sgt::TileStorage * storage, std::string name, sgt::Scheduler * scheduler = NULL) function, expected prototype:\nsgt::TileCache::TileCache(sgt::TileStorage * storage, std::string name, sgt::Scheduler * scheduler = NULL)\nClass arguments details:\narg 1 ID = 44367388\narg 3 ID = 44367388\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		sgt::TileStorage* storage=(Luna< osg::Referenced >::checkSubType< sgt::TileStorage >(L,1));
		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		sgt::Scheduler* scheduler=luatop>2 ? (Luna< osg::Referenced >::checkSubType< sgt::Scheduler >(L,3)) : (sgt::Scheduler*)NULL;

		return new sgt::TileCache(storage, name, scheduler);
	}

	// sgt::TileCache::TileCache(lua_Table * data, sgt::TileStorage * storage, std::string name, sgt::Scheduler * scheduler = NULL)
	static sgt::TileCache* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TileCache::TileCache(lua_Table * data, sgt::TileStorage * storage, std::string name, sgt::Scheduler * scheduler = NULL) function, expected prototype:\nsgt::TileCache::TileCache(lua_Table * data, sgt::TileStorage * storage, std::string name, sgt::Scheduler * scheduler = NULL)\nClass arguments details:\narg 2 ID = 44367388\narg 4 ID = 44367388\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		sgt::TileStorage* storage=(Luna< osg::Referenced >::checkSubType< sgt::TileStorage >(L,2));
		std::string name(lua_tostring(L,3),lua_objlen(L,3));
		sgt::Scheduler* scheduler=luatop>3 ? (Luna< osg::Referenced >::checkSubType< sgt::Scheduler >(L,4)) : (sgt::Scheduler*)NULL;

		return new wrapper_sgt_TileCache(L,NULL, storage, name, scheduler);
	}

	// Overload binder for sgt::TileCache::TileCache
	static sgt::TileCache* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TileCache, cannot match any of the overloads for function TileCache:\n  TileCache(sgt::TileStorage *, std::string, sgt::Scheduler *)\n  TileCache(lua_Table *, sgt::TileStorage *, std::string, sgt::Scheduler *)\n");
		return NULL;
	}


	// Function binds:
	// sgt::TileStorage * sgt::TileCache::getStorage()
	static int _bind_getStorage(lua_State *L) {
		if (!_lg_typecheck_getStorage(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TileStorage * sgt::TileCache::getStorage() function, expected prototype:\nsgt::TileStorage * sgt::TileCache::getStorage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileCache* self=Luna< osg::Referenced >::checkSubType< sgt::TileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::TileStorage * sgt::TileCache::getStorage(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::TileStorage * lret = self->getStorage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::TileStorage >::push(L,lret,false);

		return 1;
	}

	// sgt::Scheduler * sgt::TileCache::getScheduler()
	static int _bind_getScheduler(lua_State *L) {
		if (!_lg_typecheck_getScheduler(L)) {
			luaL_error(L, "luna typecheck failed in sgt::Scheduler * sgt::TileCache::getScheduler() function, expected prototype:\nsgt::Scheduler * sgt::TileCache::getScheduler()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileCache* self=Luna< osg::Referenced >::checkSubType< sgt::TileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::Scheduler * sgt::TileCache::getScheduler(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::Scheduler * lret = self->getScheduler();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::Scheduler >::push(L,lret,false);

		return 1;
	}

	// int sgt::TileCache::getUsedTiles()
	static int _bind_getUsedTiles(lua_State *L) {
		if (!_lg_typecheck_getUsedTiles(L)) {
			luaL_error(L, "luna typecheck failed in int sgt::TileCache::getUsedTiles() function, expected prototype:\nint sgt::TileCache::getUsedTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileCache* self=Luna< osg::Referenced >::checkSubType< sgt::TileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int sgt::TileCache::getUsedTiles(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getUsedTiles();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int sgt::TileCache::getUnusedTiles()
	static int _bind_getUnusedTiles(lua_State *L) {
		if (!_lg_typecheck_getUnusedTiles(L)) {
			luaL_error(L, "luna typecheck failed in int sgt::TileCache::getUnusedTiles() function, expected prototype:\nint sgt::TileCache::getUnusedTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileCache* self=Luna< osg::Referenced >::checkSubType< sgt::TileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int sgt::TileCache::getUnusedTiles(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getUnusedTiles();
		lua_pushnumber(L,lret);

		return 1;
	}

	// sgt::TileCache::Tile * sgt::TileCache::findTile(int producerId, int level, int tx, int ty, bool includeCache = false)
	static int _bind_findTile(lua_State *L) {
		if (!_lg_typecheck_findTile(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TileCache::Tile * sgt::TileCache::findTile(int producerId, int level, int tx, int ty, bool includeCache = false) function, expected prototype:\nsgt::TileCache::Tile * sgt::TileCache::findTile(int producerId, int level, int tx, int ty, bool includeCache = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int producerId=(int)lua_tointeger(L,2);
		int level=(int)lua_tointeger(L,3);
		int tx=(int)lua_tointeger(L,4);
		int ty=(int)lua_tointeger(L,5);
		bool includeCache=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)false;

		sgt::TileCache* self=Luna< osg::Referenced >::checkSubType< sgt::TileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::TileCache::Tile * sgt::TileCache::findTile(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::TileCache::Tile * lret = self->findTile(producerId, level, tx, ty, includeCache);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::TileCache::Tile >::push(L,lret,false);

		return 1;
	}

	// sgt::TileCache::Tile * sgt::TileCache::getTile(int producerId, int level, int tx, int ty, unsigned int deadline, int * users = NULL)
	static int _bind_getTile(lua_State *L) {
		if (!_lg_typecheck_getTile(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TileCache::Tile * sgt::TileCache::getTile(int producerId, int level, int tx, int ty, unsigned int deadline, int * users = NULL) function, expected prototype:\nsgt::TileCache::Tile * sgt::TileCache::getTile(int producerId, int level, int tx, int ty, unsigned int deadline, int * users = NULL)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int producerId=(int)lua_tointeger(L,2);
		int level=(int)lua_tointeger(L,3);
		int tx=(int)lua_tointeger(L,4);
		int ty=(int)lua_tointeger(L,5);
		unsigned int deadline=(unsigned int)lua_tointeger(L,6);
		int* users=luatop>6 ? (int*)Luna< void >::check(L,7) : (int*)NULL;

		sgt::TileCache* self=Luna< osg::Referenced >::checkSubType< sgt::TileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::TileCache::Tile * sgt::TileCache::getTile(int, int, int, int, unsigned int, int *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::TileCache::Tile * lret = self->getTile(producerId, level, tx, ty, deadline, users);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::TileCache::Tile >::push(L,lret,false);

		return 1;
	}

	// sgtPtr< sgt::Task > sgt::TileCache::prefetchTile(int producerId, int level, int tx, int ty)
	static int _bind_prefetchTile(lua_State *L) {
		if (!_lg_typecheck_prefetchTile(L)) {
			luaL_error(L, "luna typecheck failed in sgtPtr< sgt::Task > sgt::TileCache::prefetchTile(int producerId, int level, int tx, int ty) function, expected prototype:\nsgtPtr< sgt::Task > sgt::TileCache::prefetchTile(int producerId, int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int producerId=(int)lua_tointeger(L,2);
		int level=(int)lua_tointeger(L,3);
		int tx=(int)lua_tointeger(L,4);
		int ty=(int)lua_tointeger(L,5);

		sgt::TileCache* self=Luna< osg::Referenced >::checkSubType< sgt::TileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgtPtr< sgt::Task > sgt::TileCache::prefetchTile(int, int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgtPtr< sgt::Task > stack_lret = self->prefetchTile(producerId, level, tx, ty);
		sgtPtr< sgt::Task >* lret = new sgtPtr< sgt::Task >(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgtPtr< sgt::Task > >::push(L,lret,true);

		return 1;
	}

	// int sgt::TileCache::putTile(sgt::TileCache::Tile * t)
	static int _bind_putTile(lua_State *L) {
		if (!_lg_typecheck_putTile(L)) {
			luaL_error(L, "luna typecheck failed in int sgt::TileCache::putTile(sgt::TileCache::Tile * t) function, expected prototype:\nint sgt::TileCache::putTile(sgt::TileCache::Tile * t)\nClass arguments details:\narg 1 ID = 38575498\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::TileCache::Tile* t=(Luna< sgt::TileCache::Tile >::check(L,2));

		sgt::TileCache* self=Luna< osg::Referenced >::checkSubType< sgt::TileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int sgt::TileCache::putTile(sgt::TileCache::Tile *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->putTile(t);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::TileCache::invalidateTiles(int producerId)
	static int _bind_invalidateTiles(lua_State *L) {
		if (!_lg_typecheck_invalidateTiles(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileCache::invalidateTiles(int producerId) function, expected prototype:\nvoid sgt::TileCache::invalidateTiles(int producerId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int producerId=(int)lua_tointeger(L,2);

		sgt::TileCache* self=Luna< osg::Referenced >::checkSubType< sgt::TileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileCache::invalidateTiles(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->invalidateTiles(producerId);

		return 0;
	}

	// void sgt::TileCache::invalidateTile(int producerId, int level, int tx, int ty)
	static int _bind_invalidateTile(lua_State *L) {
		if (!_lg_typecheck_invalidateTile(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileCache::invalidateTile(int producerId, int level, int tx, int ty) function, expected prototype:\nvoid sgt::TileCache::invalidateTile(int producerId, int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int producerId=(int)lua_tointeger(L,2);
		int level=(int)lua_tointeger(L,3);
		int tx=(int)lua_tointeger(L,4);
		int ty=(int)lua_tointeger(L,5);

		sgt::TileCache* self=Luna< osg::Referenced >::checkSubType< sgt::TileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileCache::invalidateTile(int, int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->invalidateTile(producerId, level, tx, ty);

		return 0;
	}


	// Operator binds:

};

sgt::TileCache* LunaTraits< sgt::TileCache >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_TileCache::_bind_ctor(L);
}

void LunaTraits< sgt::TileCache >::_bind_dtor(sgt::TileCache* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< sgt::TileCache >::className[] = "TileCache";
const char LunaTraits< sgt::TileCache >::fullName[] = "sgt::TileCache";
const char LunaTraits< sgt::TileCache >::moduleName[] = "sgt";
const char* LunaTraits< sgt::TileCache >::parents[] = {"sgt.Object", 0};
const int LunaTraits< sgt::TileCache >::hash = 36664980;
const int LunaTraits< sgt::TileCache >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< sgt::TileCache >::methods[] = {
	{"getStorage", &luna_wrapper_sgt_TileCache::_bind_getStorage},
	{"getScheduler", &luna_wrapper_sgt_TileCache::_bind_getScheduler},
	{"getUsedTiles", &luna_wrapper_sgt_TileCache::_bind_getUsedTiles},
	{"getUnusedTiles", &luna_wrapper_sgt_TileCache::_bind_getUnusedTiles},
	{"findTile", &luna_wrapper_sgt_TileCache::_bind_findTile},
	{"getTile", &luna_wrapper_sgt_TileCache::_bind_getTile},
	{"prefetchTile", &luna_wrapper_sgt_TileCache::_bind_prefetchTile},
	{"putTile", &luna_wrapper_sgt_TileCache::_bind_putTile},
	{"invalidateTiles", &luna_wrapper_sgt_TileCache::_bind_invalidateTiles},
	{"invalidateTile", &luna_wrapper_sgt_TileCache::_bind_invalidateTile},
	{"fromVoid", &luna_wrapper_sgt_TileCache::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_TileCache::_bind_asVoid},
	{"getTable", &luna_wrapper_sgt_TileCache::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::TileCache >::converters[] = {
	{"sgt::Object", &luna_wrapper_sgt_TileCache::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::TileCache >::enumValues[] = {
	{0,0}
};



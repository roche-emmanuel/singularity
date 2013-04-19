#include <plug_common.h>

#include <luna/wrappers/wrapper_sgt_TileProducer.h>

class luna_wrapper_sgt_TileProducer {
public:
	typedef Luna< sgt::TileProducer > luna_t;

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

		sgt::TileProducer* self= (sgt::TileProducer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::TileProducer >::push(L,self,false);
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
		//sgt::TileProducer* ptr= dynamic_cast< sgt::TileProducer* >(Luna< osg::Referenced >::check(L,1));
		sgt::TileProducer* ptr= luna_caster< osg::Referenced, sgt::TileProducer >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::TileProducer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< sgt::TileCache >(L,3)) ) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< sgt::TileCache >(L,4)) ) ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getRootQuadSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRootQuadSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCache(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isGpuProducer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBorder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_hasTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_hasChildren(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_findTile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTile(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_prefetchTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_putTile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,38575498)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_invalidateTiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_invalidateTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_updateTileMap(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,76239271) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReferencedProducers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,23986170) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLayerCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLayer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_hasLayers(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addLayer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setRootQuadSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getCache(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getBorder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_hasTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_findTile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getTile(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_prefetchTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_putTile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,38575498)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_invalidateTiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_invalidateTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_update(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getReferencedProducers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,23986170) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::TileProducer::TileProducer(const char * type, const char * taskType, sgt::TileCache * cache, bool gpuProducer)
	static sgt::TileProducer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TileProducer::TileProducer(const char * type, const char * taskType, sgt::TileCache * cache, bool gpuProducer) function, expected prototype:\nsgt::TileProducer::TileProducer(const char * type, const char * taskType, sgt::TileCache * cache, bool gpuProducer)\nClass arguments details:\narg 3 ID = 44367388\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * type=(const char *)lua_tostring(L,1);
		const char * taskType=(const char *)lua_tostring(L,2);
		sgt::TileCache* cache=(Luna< osg::Referenced >::checkSubType< sgt::TileCache >(L,3));
		bool gpuProducer=(bool)(lua_toboolean(L,4)==1);

		return new sgt::TileProducer(type, taskType, cache, gpuProducer);
	}

	// sgt::TileProducer::TileProducer(lua_Table * data, const char * type, const char * taskType, sgt::TileCache * cache, bool gpuProducer)
	static sgt::TileProducer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TileProducer::TileProducer(lua_Table * data, const char * type, const char * taskType, sgt::TileCache * cache, bool gpuProducer) function, expected prototype:\nsgt::TileProducer::TileProducer(lua_Table * data, const char * type, const char * taskType, sgt::TileCache * cache, bool gpuProducer)\nClass arguments details:\narg 4 ID = 44367388\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * type=(const char *)lua_tostring(L,2);
		const char * taskType=(const char *)lua_tostring(L,3);
		sgt::TileCache* cache=(Luna< osg::Referenced >::checkSubType< sgt::TileCache >(L,4));
		bool gpuProducer=(bool)(lua_toboolean(L,5)==1);

		return new wrapper_sgt_TileProducer(L,NULL, type, taskType, cache, gpuProducer);
	}

	// Overload binder for sgt::TileProducer::TileProducer
	static sgt::TileProducer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TileProducer, cannot match any of the overloads for function TileProducer:\n  TileProducer(const char *, const char *, sgt::TileCache *, bool)\n  TileProducer(lua_Table *, const char *, const char *, sgt::TileCache *, bool)\n");
		return NULL;
	}


	// Function binds:
	// float sgt::TileProducer::getRootQuadSize()
	static int _bind_getRootQuadSize(lua_State *L) {
		if (!_lg_typecheck_getRootQuadSize(L)) {
			luaL_error(L, "luna typecheck failed in float sgt::TileProducer::getRootQuadSize() function, expected prototype:\nfloat sgt::TileProducer::getRootQuadSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float sgt::TileProducer::getRootQuadSize(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getRootQuadSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::TileProducer::setRootQuadSize(float size)
	static int _bind_setRootQuadSize(lua_State *L) {
		if (!_lg_typecheck_setRootQuadSize(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileProducer::setRootQuadSize(float size) function, expected prototype:\nvoid sgt::TileProducer::setRootQuadSize(float size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float size=(float)lua_tonumber(L,2);

		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileProducer::setRootQuadSize(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRootQuadSize(size);

		return 0;
	}

	// int sgt::TileProducer::getId()
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in int sgt::TileProducer::getId() function, expected prototype:\nint sgt::TileProducer::getId()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int sgt::TileProducer::getId(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// sgt::TileCache * sgt::TileProducer::getCache()
	static int _bind_getCache(lua_State *L) {
		if (!_lg_typecheck_getCache(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TileCache * sgt::TileProducer::getCache() function, expected prototype:\nsgt::TileCache * sgt::TileProducer::getCache()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::TileCache * sgt::TileProducer::getCache(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::TileCache * lret = self->getCache();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::TileCache >::push(L,lret,false);

		return 1;
	}

	// bool sgt::TileProducer::isGpuProducer()
	static int _bind_isGpuProducer(lua_State *L) {
		if (!_lg_typecheck_isGpuProducer(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::TileProducer::isGpuProducer() function, expected prototype:\nbool sgt::TileProducer::isGpuProducer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::TileProducer::isGpuProducer(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isGpuProducer();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int sgt::TileProducer::getBorder()
	static int _bind_getBorder(lua_State *L) {
		if (!_lg_typecheck_getBorder(L)) {
			luaL_error(L, "luna typecheck failed in int sgt::TileProducer::getBorder() function, expected prototype:\nint sgt::TileProducer::getBorder()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int sgt::TileProducer::getBorder(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getBorder();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool sgt::TileProducer::hasTile(int level, int tx, int ty)
	static int _bind_hasTile(lua_State *L) {
		if (!_lg_typecheck_hasTile(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::TileProducer::hasTile(int level, int tx, int ty) function, expected prototype:\nbool sgt::TileProducer::hasTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::TileProducer::hasTile(int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->hasTile(level, tx, ty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool sgt::TileProducer::hasChildren(int level, int tx, int ty)
	static int _bind_hasChildren(lua_State *L) {
		if (!_lg_typecheck_hasChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::TileProducer::hasChildren(int level, int tx, int ty) function, expected prototype:\nbool sgt::TileProducer::hasChildren(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::TileProducer::hasChildren(int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->hasChildren(level, tx, ty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// sgt::TileCache::Tile * sgt::TileProducer::findTile(int level, int tx, int ty, bool includeCache = false, bool done = false)
	static int _bind_findTile(lua_State *L) {
		if (!_lg_typecheck_findTile(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TileCache::Tile * sgt::TileProducer::findTile(int level, int tx, int ty, bool includeCache = false, bool done = false) function, expected prototype:\nsgt::TileCache::Tile * sgt::TileProducer::findTile(int level, int tx, int ty, bool includeCache = false, bool done = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		bool includeCache=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;
		bool done=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)false;

		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::TileCache::Tile * sgt::TileProducer::findTile(int, int, int, bool, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::TileCache::Tile * lret = self->findTile(level, tx, ty, includeCache, done);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::TileCache::Tile >::push(L,lret,false);

		return 1;
	}

	// sgt::TileCache::Tile * sgt::TileProducer::getTile(int level, int tx, int ty, unsigned int deadline)
	static int _bind_getTile(lua_State *L) {
		if (!_lg_typecheck_getTile(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TileCache::Tile * sgt::TileProducer::getTile(int level, int tx, int ty, unsigned int deadline) function, expected prototype:\nsgt::TileCache::Tile * sgt::TileProducer::getTile(int level, int tx, int ty, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);

		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::TileCache::Tile * sgt::TileProducer::getTile(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::TileCache::Tile * lret = self->getTile(level, tx, ty, deadline);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::TileCache::Tile >::push(L,lret,false);

		return 1;
	}

	// bool sgt::TileProducer::prefetchTile(int level, int tx, int ty)
	static int _bind_prefetchTile(lua_State *L) {
		if (!_lg_typecheck_prefetchTile(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::TileProducer::prefetchTile(int level, int tx, int ty) function, expected prototype:\nbool sgt::TileProducer::prefetchTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::TileProducer::prefetchTile(int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->prefetchTile(level, tx, ty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void sgt::TileProducer::putTile(sgt::TileCache::Tile * t)
	static int _bind_putTile(lua_State *L) {
		if (!_lg_typecheck_putTile(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileProducer::putTile(sgt::TileCache::Tile * t) function, expected prototype:\nvoid sgt::TileProducer::putTile(sgt::TileCache::Tile * t)\nClass arguments details:\narg 1 ID = 38575498\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::TileCache::Tile* t=(Luna< sgt::TileCache::Tile >::check(L,2));

		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileProducer::putTile(sgt::TileCache::Tile *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->putTile(t);

		return 0;
	}

	// void sgt::TileProducer::invalidateTiles()
	static int _bind_invalidateTiles(lua_State *L) {
		if (!_lg_typecheck_invalidateTiles(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileProducer::invalidateTiles() function, expected prototype:\nvoid sgt::TileProducer::invalidateTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileProducer::invalidateTiles(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->invalidateTiles();

		return 0;
	}

	// void sgt::TileProducer::invalidateTile(int level, int tx, int ty)
	static int _bind_invalidateTile(lua_State *L) {
		if (!_lg_typecheck_invalidateTile(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileProducer::invalidateTile(int level, int tx, int ty) function, expected prototype:\nvoid sgt::TileProducer::invalidateTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileProducer::invalidateTile(int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->invalidateTile(level, tx, ty);

		return 0;
	}

	// void sgt::TileProducer::update()
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileProducer::update() function, expected prototype:\nvoid sgt::TileProducer::update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileProducer::update(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->update();

		return 0;
	}

	// bool sgt::TileProducer::updateTileMap(float splitDistance, sgt::vec2f camera, int maxLevel)
	static int _bind_updateTileMap(lua_State *L) {
		if (!_lg_typecheck_updateTileMap(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::TileProducer::updateTileMap(float splitDistance, sgt::vec2f camera, int maxLevel) function, expected prototype:\nbool sgt::TileProducer::updateTileMap(float splitDistance, sgt::vec2f camera, int maxLevel)\nClass arguments details:\narg 2 ID = 76239271\n\n%s",luna_dumpStack(L).c_str());
		}

		float splitDistance=(float)lua_tonumber(L,2);
		sgt::vec2f* camera_ptr=(Luna< sgt::vec2f >::check(L,3));
		if( !camera_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg camera in sgt::TileProducer::updateTileMap function");
		}
		sgt::vec2f camera=*camera_ptr;
		int maxLevel=(int)lua_tointeger(L,4);

		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::TileProducer::updateTileMap(float, sgt::vec2f, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->updateTileMap(splitDistance, camera, maxLevel);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void sgt::TileProducer::getReferencedProducers(std::vector< sgtPtr< sgt::TileProducer > > & producers) const
	static int _bind_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileProducer::getReferencedProducers(std::vector< sgtPtr< sgt::TileProducer > > & producers) const function, expected prototype:\nvoid sgt::TileProducer::getReferencedProducers(std::vector< sgtPtr< sgt::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< sgtPtr< sgt::TileProducer > >* producers_ptr=(Luna< std::vector< sgtPtr< sgt::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in sgt::TileProducer::getReferencedProducers function");
		}
		std::vector< sgtPtr< sgt::TileProducer > > & producers=*producers_ptr;

		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileProducer::getReferencedProducers(std::vector< sgtPtr< sgt::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getReferencedProducers(producers);

		return 0;
	}

	// int sgt::TileProducer::getLayerCount() const
	static int _bind_getLayerCount(lua_State *L) {
		if (!_lg_typecheck_getLayerCount(L)) {
			luaL_error(L, "luna typecheck failed in int sgt::TileProducer::getLayerCount() const function, expected prototype:\nint sgt::TileProducer::getLayerCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int sgt::TileProducer::getLayerCount() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getLayerCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// sgt::TileLayer * sgt::TileProducer::getLayer(int index) const
	static int _bind_getLayer(lua_State *L) {
		if (!_lg_typecheck_getLayer(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TileLayer * sgt::TileProducer::getLayer(int index) const function, expected prototype:\nsgt::TileLayer * sgt::TileProducer::getLayer(int index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::TileLayer * sgt::TileProducer::getLayer(int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::TileLayer * lret = self->getLayer(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::TileLayer >::push(L,lret,false);

		return 1;
	}

	// bool sgt::TileProducer::hasLayers() const
	static int _bind_hasLayers(lua_State *L) {
		if (!_lg_typecheck_hasLayers(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::TileProducer::hasLayers() const function, expected prototype:\nbool sgt::TileProducer::hasLayers() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::TileProducer::hasLayers() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->hasLayers();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void sgt::TileProducer::addLayer(sgt::TileLayer * l)
	static int _bind_addLayer(lua_State *L) {
		if (!_lg_typecheck_addLayer(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileProducer::addLayer(sgt::TileLayer * l) function, expected prototype:\nvoid sgt::TileProducer::addLayer(sgt::TileLayer * l)\nClass arguments details:\narg 1 ID = 44367388\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::TileLayer* l=(Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,2));

		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileProducer::addLayer(sgt::TileLayer *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addLayer(l);

		return 0;
	}

	// void sgt::TileProducer::base_setRootQuadSize(float size)
	static int _bind_base_setRootQuadSize(lua_State *L) {
		if (!_lg_typecheck_base_setRootQuadSize(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileProducer::base_setRootQuadSize(float size) function, expected prototype:\nvoid sgt::TileProducer::base_setRootQuadSize(float size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float size=(float)lua_tonumber(L,2);

		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileProducer::base_setRootQuadSize(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileProducer::setRootQuadSize(size);

		return 0;
	}

	// sgt::TileCache * sgt::TileProducer::base_getCache()
	static int _bind_base_getCache(lua_State *L) {
		if (!_lg_typecheck_base_getCache(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TileCache * sgt::TileProducer::base_getCache() function, expected prototype:\nsgt::TileCache * sgt::TileProducer::base_getCache()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::TileCache * sgt::TileProducer::base_getCache(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::TileCache * lret = self->TileProducer::getCache();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::TileCache >::push(L,lret,false);

		return 1;
	}

	// int sgt::TileProducer::base_getBorder()
	static int _bind_base_getBorder(lua_State *L) {
		if (!_lg_typecheck_base_getBorder(L)) {
			luaL_error(L, "luna typecheck failed in int sgt::TileProducer::base_getBorder() function, expected prototype:\nint sgt::TileProducer::base_getBorder()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int sgt::TileProducer::base_getBorder(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->TileProducer::getBorder();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool sgt::TileProducer::base_hasTile(int level, int tx, int ty)
	static int _bind_base_hasTile(lua_State *L) {
		if (!_lg_typecheck_base_hasTile(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::TileProducer::base_hasTile(int level, int tx, int ty) function, expected prototype:\nbool sgt::TileProducer::base_hasTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::TileProducer::base_hasTile(int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TileProducer::hasTile(level, tx, ty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// sgt::TileCache::Tile * sgt::TileProducer::base_findTile(int level, int tx, int ty, bool includeCache = false, bool done = false)
	static int _bind_base_findTile(lua_State *L) {
		if (!_lg_typecheck_base_findTile(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TileCache::Tile * sgt::TileProducer::base_findTile(int level, int tx, int ty, bool includeCache = false, bool done = false) function, expected prototype:\nsgt::TileCache::Tile * sgt::TileProducer::base_findTile(int level, int tx, int ty, bool includeCache = false, bool done = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		bool includeCache=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;
		bool done=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)false;

		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::TileCache::Tile * sgt::TileProducer::base_findTile(int, int, int, bool, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::TileCache::Tile * lret = self->TileProducer::findTile(level, tx, ty, includeCache, done);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::TileCache::Tile >::push(L,lret,false);

		return 1;
	}

	// sgt::TileCache::Tile * sgt::TileProducer::base_getTile(int level, int tx, int ty, unsigned int deadline)
	static int _bind_base_getTile(lua_State *L) {
		if (!_lg_typecheck_base_getTile(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TileCache::Tile * sgt::TileProducer::base_getTile(int level, int tx, int ty, unsigned int deadline) function, expected prototype:\nsgt::TileCache::Tile * sgt::TileProducer::base_getTile(int level, int tx, int ty, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);

		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::TileCache::Tile * sgt::TileProducer::base_getTile(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::TileCache::Tile * lret = self->TileProducer::getTile(level, tx, ty, deadline);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::TileCache::Tile >::push(L,lret,false);

		return 1;
	}

	// bool sgt::TileProducer::base_prefetchTile(int level, int tx, int ty)
	static int _bind_base_prefetchTile(lua_State *L) {
		if (!_lg_typecheck_base_prefetchTile(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::TileProducer::base_prefetchTile(int level, int tx, int ty) function, expected prototype:\nbool sgt::TileProducer::base_prefetchTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::TileProducer::base_prefetchTile(int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TileProducer::prefetchTile(level, tx, ty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void sgt::TileProducer::base_putTile(sgt::TileCache::Tile * t)
	static int _bind_base_putTile(lua_State *L) {
		if (!_lg_typecheck_base_putTile(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileProducer::base_putTile(sgt::TileCache::Tile * t) function, expected prototype:\nvoid sgt::TileProducer::base_putTile(sgt::TileCache::Tile * t)\nClass arguments details:\narg 1 ID = 38575498\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::TileCache::Tile* t=(Luna< sgt::TileCache::Tile >::check(L,2));

		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileProducer::base_putTile(sgt::TileCache::Tile *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileProducer::putTile(t);

		return 0;
	}

	// void sgt::TileProducer::base_invalidateTiles()
	static int _bind_base_invalidateTiles(lua_State *L) {
		if (!_lg_typecheck_base_invalidateTiles(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileProducer::base_invalidateTiles() function, expected prototype:\nvoid sgt::TileProducer::base_invalidateTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileProducer::base_invalidateTiles(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileProducer::invalidateTiles();

		return 0;
	}

	// void sgt::TileProducer::base_invalidateTile(int level, int tx, int ty)
	static int _bind_base_invalidateTile(lua_State *L) {
		if (!_lg_typecheck_base_invalidateTile(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileProducer::base_invalidateTile(int level, int tx, int ty) function, expected prototype:\nvoid sgt::TileProducer::base_invalidateTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileProducer::base_invalidateTile(int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileProducer::invalidateTile(level, tx, ty);

		return 0;
	}

	// void sgt::TileProducer::base_update()
	static int _bind_base_update(lua_State *L) {
		if (!_lg_typecheck_base_update(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileProducer::base_update() function, expected prototype:\nvoid sgt::TileProducer::base_update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileProducer::base_update(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileProducer::update();

		return 0;
	}

	// void sgt::TileProducer::base_getReferencedProducers(std::vector< sgtPtr< sgt::TileProducer > > & producers) const
	static int _bind_base_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_base_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileProducer::base_getReferencedProducers(std::vector< sgtPtr< sgt::TileProducer > > & producers) const function, expected prototype:\nvoid sgt::TileProducer::base_getReferencedProducers(std::vector< sgtPtr< sgt::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< sgtPtr< sgt::TileProducer > >* producers_ptr=(Luna< std::vector< sgtPtr< sgt::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in sgt::TileProducer::base_getReferencedProducers function");
		}
		std::vector< sgtPtr< sgt::TileProducer > > & producers=*producers_ptr;

		sgt::TileProducer* self=Luna< osg::Referenced >::checkSubType< sgt::TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileProducer::base_getReferencedProducers(std::vector< sgtPtr< sgt::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileProducer::getReferencedProducers(producers);

		return 0;
	}


	// Operator binds:

};

sgt::TileProducer* LunaTraits< sgt::TileProducer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_TileProducer::_bind_ctor(L);
}

void LunaTraits< sgt::TileProducer >::_bind_dtor(sgt::TileProducer* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< sgt::TileProducer >::className[] = "TileProducer";
const char LunaTraits< sgt::TileProducer >::fullName[] = "sgt::TileProducer";
const char LunaTraits< sgt::TileProducer >::moduleName[] = "sgt";
const char* LunaTraits< sgt::TileProducer >::parents[] = {"sgt.Object", 0};
const int LunaTraits< sgt::TileProducer >::hash = 78175914;
const int LunaTraits< sgt::TileProducer >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< sgt::TileProducer >::methods[] = {
	{"getRootQuadSize", &luna_wrapper_sgt_TileProducer::_bind_getRootQuadSize},
	{"setRootQuadSize", &luna_wrapper_sgt_TileProducer::_bind_setRootQuadSize},
	{"getId", &luna_wrapper_sgt_TileProducer::_bind_getId},
	{"getCache", &luna_wrapper_sgt_TileProducer::_bind_getCache},
	{"isGpuProducer", &luna_wrapper_sgt_TileProducer::_bind_isGpuProducer},
	{"getBorder", &luna_wrapper_sgt_TileProducer::_bind_getBorder},
	{"hasTile", &luna_wrapper_sgt_TileProducer::_bind_hasTile},
	{"hasChildren", &luna_wrapper_sgt_TileProducer::_bind_hasChildren},
	{"findTile", &luna_wrapper_sgt_TileProducer::_bind_findTile},
	{"getTile", &luna_wrapper_sgt_TileProducer::_bind_getTile},
	{"prefetchTile", &luna_wrapper_sgt_TileProducer::_bind_prefetchTile},
	{"putTile", &luna_wrapper_sgt_TileProducer::_bind_putTile},
	{"invalidateTiles", &luna_wrapper_sgt_TileProducer::_bind_invalidateTiles},
	{"invalidateTile", &luna_wrapper_sgt_TileProducer::_bind_invalidateTile},
	{"update", &luna_wrapper_sgt_TileProducer::_bind_update},
	{"updateTileMap", &luna_wrapper_sgt_TileProducer::_bind_updateTileMap},
	{"getReferencedProducers", &luna_wrapper_sgt_TileProducer::_bind_getReferencedProducers},
	{"getLayerCount", &luna_wrapper_sgt_TileProducer::_bind_getLayerCount},
	{"getLayer", &luna_wrapper_sgt_TileProducer::_bind_getLayer},
	{"hasLayers", &luna_wrapper_sgt_TileProducer::_bind_hasLayers},
	{"addLayer", &luna_wrapper_sgt_TileProducer::_bind_addLayer},
	{"base_setRootQuadSize", &luna_wrapper_sgt_TileProducer::_bind_base_setRootQuadSize},
	{"base_getCache", &luna_wrapper_sgt_TileProducer::_bind_base_getCache},
	{"base_getBorder", &luna_wrapper_sgt_TileProducer::_bind_base_getBorder},
	{"base_hasTile", &luna_wrapper_sgt_TileProducer::_bind_base_hasTile},
	{"base_findTile", &luna_wrapper_sgt_TileProducer::_bind_base_findTile},
	{"base_getTile", &luna_wrapper_sgt_TileProducer::_bind_base_getTile},
	{"base_prefetchTile", &luna_wrapper_sgt_TileProducer::_bind_base_prefetchTile},
	{"base_putTile", &luna_wrapper_sgt_TileProducer::_bind_base_putTile},
	{"base_invalidateTiles", &luna_wrapper_sgt_TileProducer::_bind_base_invalidateTiles},
	{"base_invalidateTile", &luna_wrapper_sgt_TileProducer::_bind_base_invalidateTile},
	{"base_update", &luna_wrapper_sgt_TileProducer::_bind_base_update},
	{"base_getReferencedProducers", &luna_wrapper_sgt_TileProducer::_bind_base_getReferencedProducers},
	{"fromVoid", &luna_wrapper_sgt_TileProducer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_TileProducer::_bind_asVoid},
	{"getTable", &luna_wrapper_sgt_TileProducer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::TileProducer >::converters[] = {
	{"sgt::Object", &luna_wrapper_sgt_TileProducer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::TileProducer >::enumValues[] = {
	{0,0}
};



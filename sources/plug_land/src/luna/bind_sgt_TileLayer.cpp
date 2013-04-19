#include <plug_common.h>

#include <luna/wrappers/wrapper_sgt_TileLayer.h>

class luna_wrapper_sgt_TileLayer {
public:
	typedef Luna< sgt::TileLayer > luna_t;

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

		sgt::TileLayer* self= (sgt::TileLayer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::TileLayer >::push(L,self,false);
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
		//sgt::TileLayer* ptr= dynamic_cast< sgt::TileLayer* >(Luna< osg::Referenced >::check(L,1));
		sgt::TileLayer* ptr= luna_caster< osg::Referenced, sgt::TileLayer >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::TileLayer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getCache(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProducerId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTileSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTileBorder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRootQuadSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTileCoords(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isDeformed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDeformParameters(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239300) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,76239269) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,76239269) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,76239269) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,76239269) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setIsEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCache(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReferencedProducers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,23986170) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTileSize(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_useTile(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_unuseTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_prefetchTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_startCreateTile(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,6988042) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,63812206) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_beginCreateTile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_doCreateTile(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,84645042)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_endCreateTile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_stopCreateTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_invalidateTiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setCache(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getReferencedProducers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,23986170) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setTileSize(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_useTile(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_unuseTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_prefetchTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_startCreateTile(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,6988042) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,63812206) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_beginCreateTile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_endCreateTile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_stopCreateTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_invalidateTiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::TileLayer::TileLayer(lua_Table * data, const char * type, bool deform = false)
	static sgt::TileLayer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TileLayer::TileLayer(lua_Table * data, const char * type, bool deform = false) function, expected prototype:\nsgt::TileLayer::TileLayer(lua_Table * data, const char * type, bool deform = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const char * type=(const char *)lua_tostring(L,2);
		bool deform=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		return new wrapper_sgt_TileLayer(L,NULL, type, deform);
	}


	// Function binds:
	// sgt::TileCache * sgt::TileLayer::getCache()
	static int _bind_getCache(lua_State *L) {
		if (!_lg_typecheck_getCache(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TileCache * sgt::TileLayer::getCache() function, expected prototype:\nsgt::TileCache * sgt::TileLayer::getCache()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::TileCache * sgt::TileLayer::getCache(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::TileCache * lret = self->getCache();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::TileCache >::push(L,lret,false);

		return 1;
	}

	// int sgt::TileLayer::getProducerId()
	static int _bind_getProducerId(lua_State *L) {
		if (!_lg_typecheck_getProducerId(L)) {
			luaL_error(L, "luna typecheck failed in int sgt::TileLayer::getProducerId() function, expected prototype:\nint sgt::TileLayer::getProducerId()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int sgt::TileLayer::getProducerId(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getProducerId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int sgt::TileLayer::getTileSize()
	static int _bind_getTileSize(lua_State *L) {
		if (!_lg_typecheck_getTileSize(L)) {
			luaL_error(L, "luna typecheck failed in int sgt::TileLayer::getTileSize() function, expected prototype:\nint sgt::TileLayer::getTileSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int sgt::TileLayer::getTileSize(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getTileSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int sgt::TileLayer::getTileBorder()
	static int _bind_getTileBorder(lua_State *L) {
		if (!_lg_typecheck_getTileBorder(L)) {
			luaL_error(L, "luna typecheck failed in int sgt::TileLayer::getTileBorder() function, expected prototype:\nint sgt::TileLayer::getTileBorder()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int sgt::TileLayer::getTileBorder(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getTileBorder();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float sgt::TileLayer::getRootQuadSize()
	static int _bind_getRootQuadSize(lua_State *L) {
		if (!_lg_typecheck_getRootQuadSize(L)) {
			luaL_error(L, "luna typecheck failed in float sgt::TileLayer::getRootQuadSize() function, expected prototype:\nfloat sgt::TileLayer::getRootQuadSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float sgt::TileLayer::getRootQuadSize(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getRootQuadSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// sgt::vec3d sgt::TileLayer::getTileCoords(int level, int tx, int ty)
	static int _bind_getTileCoords(lua_State *L) {
		if (!_lg_typecheck_getTileCoords(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec3d sgt::TileLayer::getTileCoords(int level, int tx, int ty) function, expected prototype:\nsgt::vec3d sgt::TileLayer::getTileCoords(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec3d sgt::TileLayer::getTileCoords(int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec3d stack_lret = self->getTileCoords(level, tx, ty);
		sgt::vec3d* lret = new sgt::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3d >::push(L,lret,true);

		return 1;
	}

	// bool sgt::TileLayer::isDeformed()
	static int _bind_isDeformed(lua_State *L) {
		if (!_lg_typecheck_isDeformed(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::TileLayer::isDeformed() function, expected prototype:\nbool sgt::TileLayer::isDeformed()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::TileLayer::isDeformed(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isDeformed();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void sgt::TileLayer::getDeformParameters(sgt::vec3d tileCoords, sgt::vec2d & nx, sgt::vec2d & ny, sgt::vec2d & lx, sgt::vec2d & ly)
	static int _bind_getDeformParameters(lua_State *L) {
		if (!_lg_typecheck_getDeformParameters(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileLayer::getDeformParameters(sgt::vec3d tileCoords, sgt::vec2d & nx, sgt::vec2d & ny, sgt::vec2d & lx, sgt::vec2d & ly) function, expected prototype:\nvoid sgt::TileLayer::getDeformParameters(sgt::vec3d tileCoords, sgt::vec2d & nx, sgt::vec2d & ny, sgt::vec2d & lx, sgt::vec2d & ly)\nClass arguments details:\narg 1 ID = 76239300\narg 2 ID = 76239269\narg 3 ID = 76239269\narg 4 ID = 76239269\narg 5 ID = 76239269\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::vec3d* tileCoords_ptr=(Luna< sgt::vec3d >::check(L,2));
		if( !tileCoords_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tileCoords in sgt::TileLayer::getDeformParameters function");
		}
		sgt::vec3d tileCoords=*tileCoords_ptr;
		sgt::vec2d* nx_ptr=(Luna< sgt::vec2d >::check(L,3));
		if( !nx_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nx in sgt::TileLayer::getDeformParameters function");
		}
		sgt::vec2d & nx=*nx_ptr;
		sgt::vec2d* ny_ptr=(Luna< sgt::vec2d >::check(L,4));
		if( !ny_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ny in sgt::TileLayer::getDeformParameters function");
		}
		sgt::vec2d & ny=*ny_ptr;
		sgt::vec2d* lx_ptr=(Luna< sgt::vec2d >::check(L,5));
		if( !lx_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg lx in sgt::TileLayer::getDeformParameters function");
		}
		sgt::vec2d & lx=*lx_ptr;
		sgt::vec2d* ly_ptr=(Luna< sgt::vec2d >::check(L,6));
		if( !ly_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ly in sgt::TileLayer::getDeformParameters function");
		}
		sgt::vec2d & ly=*ly_ptr;

		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileLayer::getDeformParameters(sgt::vec3d, sgt::vec2d &, sgt::vec2d &, sgt::vec2d &, sgt::vec2d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getDeformParameters(tileCoords, nx, ny, lx, ly);

		return 0;
	}

	// bool sgt::TileLayer::isEnabled()
	static int _bind_isEnabled(lua_State *L) {
		if (!_lg_typecheck_isEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::TileLayer::isEnabled() function, expected prototype:\nbool sgt::TileLayer::isEnabled()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::TileLayer::isEnabled(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void sgt::TileLayer::setIsEnabled(bool enabled)
	static int _bind_setIsEnabled(lua_State *L) {
		if (!_lg_typecheck_setIsEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileLayer::setIsEnabled(bool enabled) function, expected prototype:\nvoid sgt::TileLayer::setIsEnabled(bool enabled)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enabled=(bool)(lua_toboolean(L,2)==1);

		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileLayer::setIsEnabled(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setIsEnabled(enabled);

		return 0;
	}

	// void sgt::TileLayer::setCache(sgt::TileCache * cache, int producerId)
	static int _bind_setCache(lua_State *L) {
		if (!_lg_typecheck_setCache(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileLayer::setCache(sgt::TileCache * cache, int producerId) function, expected prototype:\nvoid sgt::TileLayer::setCache(sgt::TileCache * cache, int producerId)\nClass arguments details:\narg 1 ID = 44367388\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::TileCache* cache=(Luna< osg::Referenced >::checkSubType< sgt::TileCache >(L,2));
		int producerId=(int)lua_tointeger(L,3);

		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileLayer::setCache(sgt::TileCache *, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCache(cache, producerId);

		return 0;
	}

	// void sgt::TileLayer::getReferencedProducers(std::vector< sgtPtr< sgt::TileProducer > > & producers) const
	static int _bind_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileLayer::getReferencedProducers(std::vector< sgtPtr< sgt::TileProducer > > & producers) const function, expected prototype:\nvoid sgt::TileLayer::getReferencedProducers(std::vector< sgtPtr< sgt::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< sgtPtr< sgt::TileProducer > >* producers_ptr=(Luna< std::vector< sgtPtr< sgt::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in sgt::TileLayer::getReferencedProducers function");
		}
		std::vector< sgtPtr< sgt::TileProducer > > & producers=*producers_ptr;

		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileLayer::getReferencedProducers(std::vector< sgtPtr< sgt::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getReferencedProducers(producers);

		return 0;
	}

	// void sgt::TileLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize)
	static int _bind_setTileSize(lua_State *L) {
		if (!_lg_typecheck_setTileSize(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize) function, expected prototype:\nvoid sgt::TileLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int tileSize=(int)lua_tointeger(L,2);
		int tileBorder=(int)lua_tointeger(L,3);
		float rootQuadSize=(float)lua_tonumber(L,4);

		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileLayer::setTileSize(int, int, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTileSize(tileSize, tileBorder, rootQuadSize);

		return 0;
	}

	// void sgt::TileLayer::useTile(int level, int tx, int ty, unsigned int deadline)
	static int _bind_useTile(lua_State *L) {
		if (!_lg_typecheck_useTile(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileLayer::useTile(int level, int tx, int ty, unsigned int deadline) function, expected prototype:\nvoid sgt::TileLayer::useTile(int level, int tx, int ty, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);

		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileLayer::useTile(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->useTile(level, tx, ty, deadline);

		return 0;
	}

	// void sgt::TileLayer::unuseTile(int level, int tx, int ty)
	static int _bind_unuseTile(lua_State *L) {
		if (!_lg_typecheck_unuseTile(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileLayer::unuseTile(int level, int tx, int ty) function, expected prototype:\nvoid sgt::TileLayer::unuseTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileLayer::unuseTile(int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->unuseTile(level, tx, ty);

		return 0;
	}

	// void sgt::TileLayer::prefetchTile(int level, int tx, int ty)
	static int _bind_prefetchTile(lua_State *L) {
		if (!_lg_typecheck_prefetchTile(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileLayer::prefetchTile(int level, int tx, int ty) function, expected prototype:\nvoid sgt::TileLayer::prefetchTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileLayer::prefetchTile(int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->prefetchTile(level, tx, ty);

		return 0;
	}

	// void sgt::TileLayer::startCreateTile(int level, int tx, int ty, unsigned int deadline, sgtPtr< sgt::Task > task, sgtPtr< sgt::TaskGraph > owner)
	static int _bind_startCreateTile(lua_State *L) {
		if (!_lg_typecheck_startCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileLayer::startCreateTile(int level, int tx, int ty, unsigned int deadline, sgtPtr< sgt::Task > task, sgtPtr< sgt::TaskGraph > owner) function, expected prototype:\nvoid sgt::TileLayer::startCreateTile(int level, int tx, int ty, unsigned int deadline, sgtPtr< sgt::Task > task, sgtPtr< sgt::TaskGraph > owner)\nClass arguments details:\narg 5 ID = [unknown]\narg 6 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);
		sgtPtr< sgt::Task >* task_ptr=(Luna< sgtPtr< sgt::Task > >::check(L,6));
		if( !task_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg task in sgt::TileLayer::startCreateTile function");
		}
		sgtPtr< sgt::Task > task=*task_ptr;
		sgtPtr< sgt::TaskGraph >* owner_ptr=(Luna< sgtPtr< sgt::TaskGraph > >::check(L,7));
		if( !owner_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg owner in sgt::TileLayer::startCreateTile function");
		}
		sgtPtr< sgt::TaskGraph > owner=*owner_ptr;

		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileLayer::startCreateTile(int, int, int, unsigned int, sgtPtr< sgt::Task >, sgtPtr< sgt::TaskGraph >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->startCreateTile(level, tx, ty, deadline, task, owner);

		return 0;
	}

	// void sgt::TileLayer::beginCreateTile()
	static int _bind_beginCreateTile(lua_State *L) {
		if (!_lg_typecheck_beginCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileLayer::beginCreateTile() function, expected prototype:\nvoid sgt::TileLayer::beginCreateTile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileLayer::beginCreateTile(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->beginCreateTile();

		return 0;
	}

	// bool sgt::TileLayer::doCreateTile(int level, int tx, int ty, sgt::TileStorage::Slot * data)
	static int _bind_doCreateTile(lua_State *L) {
		if (!_lg_typecheck_doCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::TileLayer::doCreateTile(int level, int tx, int ty, sgt::TileStorage::Slot * data) function, expected prototype:\nbool sgt::TileLayer::doCreateTile(int level, int tx, int ty, sgt::TileStorage::Slot * data)\nClass arguments details:\narg 4 ID = 84645042\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		sgt::TileStorage::Slot* data=(Luna< sgt::TileStorage::Slot >::check(L,5));

		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::TileLayer::doCreateTile(int, int, int, sgt::TileStorage::Slot *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->doCreateTile(level, tx, ty, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void sgt::TileLayer::endCreateTile()
	static int _bind_endCreateTile(lua_State *L) {
		if (!_lg_typecheck_endCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileLayer::endCreateTile() function, expected prototype:\nvoid sgt::TileLayer::endCreateTile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileLayer::endCreateTile(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->endCreateTile();

		return 0;
	}

	// void sgt::TileLayer::stopCreateTile(int level, int tx, int ty)
	static int _bind_stopCreateTile(lua_State *L) {
		if (!_lg_typecheck_stopCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileLayer::stopCreateTile(int level, int tx, int ty) function, expected prototype:\nvoid sgt::TileLayer::stopCreateTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileLayer::stopCreateTile(int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->stopCreateTile(level, tx, ty);

		return 0;
	}

	// void sgt::TileLayer::invalidateTiles()
	static int _bind_invalidateTiles(lua_State *L) {
		if (!_lg_typecheck_invalidateTiles(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileLayer::invalidateTiles() function, expected prototype:\nvoid sgt::TileLayer::invalidateTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileLayer::invalidateTiles(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->invalidateTiles();

		return 0;
	}

	// void sgt::TileLayer::base_setCache(sgt::TileCache * cache, int producerId)
	static int _bind_base_setCache(lua_State *L) {
		if (!_lg_typecheck_base_setCache(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileLayer::base_setCache(sgt::TileCache * cache, int producerId) function, expected prototype:\nvoid sgt::TileLayer::base_setCache(sgt::TileCache * cache, int producerId)\nClass arguments details:\narg 1 ID = 44367388\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::TileCache* cache=(Luna< osg::Referenced >::checkSubType< sgt::TileCache >(L,2));
		int producerId=(int)lua_tointeger(L,3);

		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileLayer::base_setCache(sgt::TileCache *, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileLayer::setCache(cache, producerId);

		return 0;
	}

	// void sgt::TileLayer::base_getReferencedProducers(std::vector< sgtPtr< sgt::TileProducer > > & producers) const
	static int _bind_base_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_base_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileLayer::base_getReferencedProducers(std::vector< sgtPtr< sgt::TileProducer > > & producers) const function, expected prototype:\nvoid sgt::TileLayer::base_getReferencedProducers(std::vector< sgtPtr< sgt::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< sgtPtr< sgt::TileProducer > >* producers_ptr=(Luna< std::vector< sgtPtr< sgt::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in sgt::TileLayer::base_getReferencedProducers function");
		}
		std::vector< sgtPtr< sgt::TileProducer > > & producers=*producers_ptr;

		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileLayer::base_getReferencedProducers(std::vector< sgtPtr< sgt::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileLayer::getReferencedProducers(producers);

		return 0;
	}

	// void sgt::TileLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize)
	static int _bind_base_setTileSize(lua_State *L) {
		if (!_lg_typecheck_base_setTileSize(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize) function, expected prototype:\nvoid sgt::TileLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int tileSize=(int)lua_tointeger(L,2);
		int tileBorder=(int)lua_tointeger(L,3);
		float rootQuadSize=(float)lua_tonumber(L,4);

		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileLayer::base_setTileSize(int, int, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileLayer::setTileSize(tileSize, tileBorder, rootQuadSize);

		return 0;
	}

	// void sgt::TileLayer::base_useTile(int level, int tx, int ty, unsigned int deadline)
	static int _bind_base_useTile(lua_State *L) {
		if (!_lg_typecheck_base_useTile(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileLayer::base_useTile(int level, int tx, int ty, unsigned int deadline) function, expected prototype:\nvoid sgt::TileLayer::base_useTile(int level, int tx, int ty, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);

		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileLayer::base_useTile(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileLayer::useTile(level, tx, ty, deadline);

		return 0;
	}

	// void sgt::TileLayer::base_unuseTile(int level, int tx, int ty)
	static int _bind_base_unuseTile(lua_State *L) {
		if (!_lg_typecheck_base_unuseTile(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileLayer::base_unuseTile(int level, int tx, int ty) function, expected prototype:\nvoid sgt::TileLayer::base_unuseTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileLayer::base_unuseTile(int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileLayer::unuseTile(level, tx, ty);

		return 0;
	}

	// void sgt::TileLayer::base_prefetchTile(int level, int tx, int ty)
	static int _bind_base_prefetchTile(lua_State *L) {
		if (!_lg_typecheck_base_prefetchTile(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileLayer::base_prefetchTile(int level, int tx, int ty) function, expected prototype:\nvoid sgt::TileLayer::base_prefetchTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileLayer::base_prefetchTile(int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileLayer::prefetchTile(level, tx, ty);

		return 0;
	}

	// void sgt::TileLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, sgtPtr< sgt::Task > task, sgtPtr< sgt::TaskGraph > owner)
	static int _bind_base_startCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_startCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, sgtPtr< sgt::Task > task, sgtPtr< sgt::TaskGraph > owner) function, expected prototype:\nvoid sgt::TileLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, sgtPtr< sgt::Task > task, sgtPtr< sgt::TaskGraph > owner)\nClass arguments details:\narg 5 ID = [unknown]\narg 6 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);
		sgtPtr< sgt::Task >* task_ptr=(Luna< sgtPtr< sgt::Task > >::check(L,6));
		if( !task_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg task in sgt::TileLayer::base_startCreateTile function");
		}
		sgtPtr< sgt::Task > task=*task_ptr;
		sgtPtr< sgt::TaskGraph >* owner_ptr=(Luna< sgtPtr< sgt::TaskGraph > >::check(L,7));
		if( !owner_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg owner in sgt::TileLayer::base_startCreateTile function");
		}
		sgtPtr< sgt::TaskGraph > owner=*owner_ptr;

		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileLayer::base_startCreateTile(int, int, int, unsigned int, sgtPtr< sgt::Task >, sgtPtr< sgt::TaskGraph >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileLayer::startCreateTile(level, tx, ty, deadline, task, owner);

		return 0;
	}

	// void sgt::TileLayer::base_beginCreateTile()
	static int _bind_base_beginCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_beginCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileLayer::base_beginCreateTile() function, expected prototype:\nvoid sgt::TileLayer::base_beginCreateTile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileLayer::base_beginCreateTile(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileLayer::beginCreateTile();

		return 0;
	}

	// void sgt::TileLayer::base_endCreateTile()
	static int _bind_base_endCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_endCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileLayer::base_endCreateTile() function, expected prototype:\nvoid sgt::TileLayer::base_endCreateTile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileLayer::base_endCreateTile(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileLayer::endCreateTile();

		return 0;
	}

	// void sgt::TileLayer::base_stopCreateTile(int level, int tx, int ty)
	static int _bind_base_stopCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_stopCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileLayer::base_stopCreateTile(int level, int tx, int ty) function, expected prototype:\nvoid sgt::TileLayer::base_stopCreateTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileLayer::base_stopCreateTile(int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileLayer::stopCreateTile(level, tx, ty);

		return 0;
	}

	// void sgt::TileLayer::base_invalidateTiles()
	static int _bind_base_invalidateTiles(lua_State *L) {
		if (!_lg_typecheck_base_invalidateTiles(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileLayer::base_invalidateTiles() function, expected prototype:\nvoid sgt::TileLayer::base_invalidateTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TileLayer* self=Luna< osg::Referenced >::checkSubType< sgt::TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileLayer::base_invalidateTiles(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TileLayer::invalidateTiles();

		return 0;
	}


	// Operator binds:

};

sgt::TileLayer* LunaTraits< sgt::TileLayer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_TileLayer::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool sgt::TileLayer::doCreateTile(int level, int tx, int ty, sgt::TileStorage::Slot * data)
}

void LunaTraits< sgt::TileLayer >::_bind_dtor(sgt::TileLayer* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< sgt::TileLayer >::className[] = "TileLayer";
const char LunaTraits< sgt::TileLayer >::fullName[] = "sgt::TileLayer";
const char LunaTraits< sgt::TileLayer >::moduleName[] = "sgt";
const char* LunaTraits< sgt::TileLayer >::parents[] = {"sgt.Object", 0};
const int LunaTraits< sgt::TileLayer >::hash = 44997731;
const int LunaTraits< sgt::TileLayer >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< sgt::TileLayer >::methods[] = {
	{"getCache", &luna_wrapper_sgt_TileLayer::_bind_getCache},
	{"getProducerId", &luna_wrapper_sgt_TileLayer::_bind_getProducerId},
	{"getTileSize", &luna_wrapper_sgt_TileLayer::_bind_getTileSize},
	{"getTileBorder", &luna_wrapper_sgt_TileLayer::_bind_getTileBorder},
	{"getRootQuadSize", &luna_wrapper_sgt_TileLayer::_bind_getRootQuadSize},
	{"getTileCoords", &luna_wrapper_sgt_TileLayer::_bind_getTileCoords},
	{"isDeformed", &luna_wrapper_sgt_TileLayer::_bind_isDeformed},
	{"getDeformParameters", &luna_wrapper_sgt_TileLayer::_bind_getDeformParameters},
	{"isEnabled", &luna_wrapper_sgt_TileLayer::_bind_isEnabled},
	{"setIsEnabled", &luna_wrapper_sgt_TileLayer::_bind_setIsEnabled},
	{"setCache", &luna_wrapper_sgt_TileLayer::_bind_setCache},
	{"getReferencedProducers", &luna_wrapper_sgt_TileLayer::_bind_getReferencedProducers},
	{"setTileSize", &luna_wrapper_sgt_TileLayer::_bind_setTileSize},
	{"useTile", &luna_wrapper_sgt_TileLayer::_bind_useTile},
	{"unuseTile", &luna_wrapper_sgt_TileLayer::_bind_unuseTile},
	{"prefetchTile", &luna_wrapper_sgt_TileLayer::_bind_prefetchTile},
	{"startCreateTile", &luna_wrapper_sgt_TileLayer::_bind_startCreateTile},
	{"beginCreateTile", &luna_wrapper_sgt_TileLayer::_bind_beginCreateTile},
	{"doCreateTile", &luna_wrapper_sgt_TileLayer::_bind_doCreateTile},
	{"endCreateTile", &luna_wrapper_sgt_TileLayer::_bind_endCreateTile},
	{"stopCreateTile", &luna_wrapper_sgt_TileLayer::_bind_stopCreateTile},
	{"invalidateTiles", &luna_wrapper_sgt_TileLayer::_bind_invalidateTiles},
	{"base_setCache", &luna_wrapper_sgt_TileLayer::_bind_base_setCache},
	{"base_getReferencedProducers", &luna_wrapper_sgt_TileLayer::_bind_base_getReferencedProducers},
	{"base_setTileSize", &luna_wrapper_sgt_TileLayer::_bind_base_setTileSize},
	{"base_useTile", &luna_wrapper_sgt_TileLayer::_bind_base_useTile},
	{"base_unuseTile", &luna_wrapper_sgt_TileLayer::_bind_base_unuseTile},
	{"base_prefetchTile", &luna_wrapper_sgt_TileLayer::_bind_base_prefetchTile},
	{"base_startCreateTile", &luna_wrapper_sgt_TileLayer::_bind_base_startCreateTile},
	{"base_beginCreateTile", &luna_wrapper_sgt_TileLayer::_bind_base_beginCreateTile},
	{"base_endCreateTile", &luna_wrapper_sgt_TileLayer::_bind_base_endCreateTile},
	{"base_stopCreateTile", &luna_wrapper_sgt_TileLayer::_bind_base_stopCreateTile},
	{"base_invalidateTiles", &luna_wrapper_sgt_TileLayer::_bind_base_invalidateTiles},
	{"fromVoid", &luna_wrapper_sgt_TileLayer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_TileLayer::_bind_asVoid},
	{"getTable", &luna_wrapper_sgt_TileLayer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::TileLayer >::converters[] = {
	{"sgt::Object", &luna_wrapper_sgt_TileLayer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::TileLayer >::enumValues[] = {
	{0,0}
};



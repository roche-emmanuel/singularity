#include <plug_common.h>

#include <luna/wrappers/wrapper_sgt_GPUTileStorage.h>

class luna_wrapper_sgt_GPUTileStorage {
public:
	typedef Luna< sgt::GPUTileStorage > luna_t;

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

		sgt::GPUTileStorage* self= (sgt::GPUTileStorage*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::GPUTileStorage >::push(L,self,false);
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
		//sgt::GPUTileStorage* ptr= dynamic_cast< sgt::GPUTileStorage* >(Luna< osg::Referenced >::check(L,1));
		sgt::GPUTileStorage* ptr= luna_caster< osg::Referenced, sgt::GPUTileStorage >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::GPUTileStorage >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>7 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isboolean(L,7)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getTextureCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTexture(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTileMap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_notifyChange(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,34060158)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_generateMipMap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::GPUTileStorage::GPUTileStorage(int tileSize, int nTiles, int internalf, int f, int t, bool useTileMap = false)
	static sgt::GPUTileStorage* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in sgt::GPUTileStorage::GPUTileStorage(int tileSize, int nTiles, int internalf, int f, int t, bool useTileMap = false) function, expected prototype:\nsgt::GPUTileStorage::GPUTileStorage(int tileSize, int nTiles, int internalf, int f, int t, bool useTileMap = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int tileSize=(int)lua_tointeger(L,1);
		int nTiles=(int)lua_tointeger(L,2);
		int internalf=(int)lua_tointeger(L,3);
		int f=(int)lua_tointeger(L,4);
		int t=(int)lua_tointeger(L,5);
		bool useTileMap=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)false;

		return new sgt::GPUTileStorage(tileSize, nTiles, internalf, f, t, useTileMap);
	}

	// sgt::GPUTileStorage::GPUTileStorage(lua_Table * data, int tileSize, int nTiles, int internalf, int f, int t, bool useTileMap = false)
	static sgt::GPUTileStorage* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::GPUTileStorage::GPUTileStorage(lua_Table * data, int tileSize, int nTiles, int internalf, int f, int t, bool useTileMap = false) function, expected prototype:\nsgt::GPUTileStorage::GPUTileStorage(lua_Table * data, int tileSize, int nTiles, int internalf, int f, int t, bool useTileMap = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int tileSize=(int)lua_tointeger(L,2);
		int nTiles=(int)lua_tointeger(L,3);
		int internalf=(int)lua_tointeger(L,4);
		int f=(int)lua_tointeger(L,5);
		int t=(int)lua_tointeger(L,6);
		bool useTileMap=luatop>6 ? (bool)(lua_toboolean(L,7)==1) : (bool)false;

		return new wrapper_sgt_GPUTileStorage(L,NULL, tileSize, nTiles, internalf, f, t, useTileMap);
	}

	// Overload binder for sgt::GPUTileStorage::GPUTileStorage
	static sgt::GPUTileStorage* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function GPUTileStorage, cannot match any of the overloads for function GPUTileStorage:\n  GPUTileStorage(int, int, int, int, int, bool)\n  GPUTileStorage(lua_Table *, int, int, int, int, int, bool)\n");
		return NULL;
	}


	// Function binds:
	// int sgt::GPUTileStorage::getTextureCount()
	static int _bind_getTextureCount(lua_State *L) {
		if (!_lg_typecheck_getTextureCount(L)) {
			luaL_error(L, "luna typecheck failed in int sgt::GPUTileStorage::getTextureCount() function, expected prototype:\nint sgt::GPUTileStorage::getTextureCount()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::GPUTileStorage* self=Luna< osg::Referenced >::checkSubType< sgt::GPUTileStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int sgt::GPUTileStorage::getTextureCount(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getTextureCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// sgtPtr< osg::Texture2DArray > sgt::GPUTileStorage::getTexture(int index)
	static int _bind_getTexture(lua_State *L) {
		if (!_lg_typecheck_getTexture(L)) {
			luaL_error(L, "luna typecheck failed in sgtPtr< osg::Texture2DArray > sgt::GPUTileStorage::getTexture(int index) function, expected prototype:\nsgtPtr< osg::Texture2DArray > sgt::GPUTileStorage::getTexture(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		sgt::GPUTileStorage* self=Luna< osg::Referenced >::checkSubType< sgt::GPUTileStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgtPtr< osg::Texture2DArray > sgt::GPUTileStorage::getTexture(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgtPtr< osg::Texture2DArray > stack_lret = self->getTexture(index);
		sgtPtr< osg::Texture2DArray >* lret = new sgtPtr< osg::Texture2DArray >(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgtPtr< osg::Texture2DArray > >::push(L,lret,true);

		return 1;
	}

	// osg::Texture2D * sgt::GPUTileStorage::getTileMap()
	static int _bind_getTileMap(lua_State *L) {
		if (!_lg_typecheck_getTileMap(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture2D * sgt::GPUTileStorage::getTileMap() function, expected prototype:\nosg::Texture2D * sgt::GPUTileStorage::getTileMap()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::GPUTileStorage* self=Luna< osg::Referenced >::checkSubType< sgt::GPUTileStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture2D * sgt::GPUTileStorage::getTileMap(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture2D * lret = self->getTileMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture2D >::push(L,lret,false);

		return 1;
	}

	// void sgt::GPUTileStorage::notifyChange(sgt::GPUTileStorage::GPUSlot * s)
	static int _bind_notifyChange(lua_State *L) {
		if (!_lg_typecheck_notifyChange(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::GPUTileStorage::notifyChange(sgt::GPUTileStorage::GPUSlot * s) function, expected prototype:\nvoid sgt::GPUTileStorage::notifyChange(sgt::GPUTileStorage::GPUSlot * s)\nClass arguments details:\narg 1 ID = 34060158\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::GPUTileStorage::GPUSlot* s=(Luna< sgt::GPUTileStorage::GPUSlot >::check(L,2));

		sgt::GPUTileStorage* self=Luna< osg::Referenced >::checkSubType< sgt::GPUTileStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::GPUTileStorage::notifyChange(sgt::GPUTileStorage::GPUSlot *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->notifyChange(s);

		return 0;
	}

	// void sgt::GPUTileStorage::generateMipMap()
	static int _bind_generateMipMap(lua_State *L) {
		if (!_lg_typecheck_generateMipMap(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::GPUTileStorage::generateMipMap() function, expected prototype:\nvoid sgt::GPUTileStorage::generateMipMap()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::GPUTileStorage* self=Luna< osg::Referenced >::checkSubType< sgt::GPUTileStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::GPUTileStorage::generateMipMap(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->generateMipMap();

		return 0;
	}


	// Operator binds:

};

sgt::GPUTileStorage* LunaTraits< sgt::GPUTileStorage >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_GPUTileStorage::_bind_ctor(L);
}

void LunaTraits< sgt::GPUTileStorage >::_bind_dtor(sgt::GPUTileStorage* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< sgt::GPUTileStorage >::className[] = "GPUTileStorage";
const char LunaTraits< sgt::GPUTileStorage >::fullName[] = "sgt::GPUTileStorage";
const char LunaTraits< sgt::GPUTileStorage >::moduleName[] = "sgt";
const char* LunaTraits< sgt::GPUTileStorage >::parents[] = {"sgt.TileStorage", 0};
const int LunaTraits< sgt::GPUTileStorage >::hash = 56990285;
const int LunaTraits< sgt::GPUTileStorage >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< sgt::GPUTileStorage >::methods[] = {
	{"getTextureCount", &luna_wrapper_sgt_GPUTileStorage::_bind_getTextureCount},
	{"getTexture", &luna_wrapper_sgt_GPUTileStorage::_bind_getTexture},
	{"getTileMap", &luna_wrapper_sgt_GPUTileStorage::_bind_getTileMap},
	{"notifyChange", &luna_wrapper_sgt_GPUTileStorage::_bind_notifyChange},
	{"generateMipMap", &luna_wrapper_sgt_GPUTileStorage::_bind_generateMipMap},
	{"fromVoid", &luna_wrapper_sgt_GPUTileStorage::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_GPUTileStorage::_bind_asVoid},
	{"getTable", &luna_wrapper_sgt_GPUTileStorage::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::GPUTileStorage >::converters[] = {
	{"sgt::Object", &luna_wrapper_sgt_GPUTileStorage::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::GPUTileStorage >::enumValues[] = {
	{0,0}
};



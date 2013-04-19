#ifndef _WRAPPERS_WRAPPER_SGT_GPUTILESTORAGE_H_
#define _WRAPPERS_WRAPPER_SGT_GPUTILESTORAGE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <producer/GPUTileStorage.h>

class wrapper_sgt_GPUTileStorage : public sgt::GPUTileStorage, public luna_wrapper_base {

public:
		

	~wrapper_sgt_GPUTileStorage() {
		logDEBUG3("Calling delete function for wrapper sgt_GPUTileStorage");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((sgt::GPUTileStorage*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_sgt_GPUTileStorage(lua_State* L, lua_Table* dum, int tileSize, int nTiles, int internalf, int f, int t, bool useTileMap = false) 
		: sgt::GPUTileStorage(tileSize, nTiles, internalf, f, t, useTileMap), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((sgt::GPUTileStorage*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_sgt_GPUTileStorage(lua_State* L, lua_Table* dum) 
		: sgt::GPUTileStorage(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((sgt::GPUTileStorage*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:

	// Protected non-virtual methods:
	// void sgt::GPUTileStorage::init(int tileSize, int nTiles, int internalf, int f, int t, bool useTileMap = false)
	void public_init(int tileSize, int nTiles, int internalf, int f, int t, bool useTileMap = false) {
		return sgt::GPUTileStorage::init(tileSize, nTiles, internalf, f, t, useTileMap);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>7 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isboolean(L,7)==0 ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void sgt::GPUTileStorage::public_init(int tileSize, int nTiles, int internalf, int f, int t, bool useTileMap = false)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::GPUTileStorage::public_init(int tileSize, int nTiles, int internalf, int f, int t, bool useTileMap = false) function, expected prototype:\nvoid sgt::GPUTileStorage::public_init(int tileSize, int nTiles, int internalf, int f, int t, bool useTileMap = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int tileSize=(int)lua_tointeger(L,2);
		int nTiles=(int)lua_tointeger(L,3);
		int internalf=(int)lua_tointeger(L,4);
		int f=(int)lua_tointeger(L,5);
		int t=(int)lua_tointeger(L,6);
		bool useTileMap=luatop>6 ? (bool)(lua_toboolean(L,7)==1) : (bool)false;

		wrapper_sgt_GPUTileStorage* self=Luna< osg::Referenced >::checkSubType< wrapper_sgt_GPUTileStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::GPUTileStorage::public_init(int, int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(tileSize, nTiles, internalf, f, t, useTileMap);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"init",_bind_public_init},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif


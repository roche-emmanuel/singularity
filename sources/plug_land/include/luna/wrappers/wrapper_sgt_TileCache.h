#ifndef _WRAPPERS_WRAPPER_SGT_TILECACHE_H_
#define _WRAPPERS_WRAPPER_SGT_TILECACHE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <producer/TileCache.h>

class wrapper_sgt_TileCache : public sgt::TileCache, public luna_wrapper_base {

public:
		

	~wrapper_sgt_TileCache() {
		logDEBUG3("Calling delete function for wrapper sgt_TileCache");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((sgt::TileCache*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_sgt_TileCache(lua_State* L, lua_Table* dum, sgt::TileStorage * storage, std::string name, sgt::Scheduler * scheduler = NULL) 
		: sgt::TileCache(storage, name, scheduler), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((sgt::TileCache*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_sgt_TileCache(lua_State* L, lua_Table* dum) 
		: sgt::TileCache(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((sgt::TileCache*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:

	// Protected non-virtual methods:
	// void sgt::TileCache::init(sgt::TileStorage * storage, std::string name, sgt::Scheduler * scheduler = NULL)
	void public_init(sgt::TileStorage * storage, std::string name, sgt::Scheduler * scheduler = NULL) {
		return sgt::TileCache::init(storage, name, scheduler);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void sgt::TileCache::public_init(sgt::TileStorage * storage, std::string name, sgt::Scheduler * scheduler = NULL)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileCache::public_init(sgt::TileStorage * storage, std::string name, sgt::Scheduler * scheduler = NULL) function, expected prototype:\nvoid sgt::TileCache::public_init(sgt::TileStorage * storage, std::string name, sgt::Scheduler * scheduler = NULL)\nClass arguments details:\narg 1 ID = 44367388\narg 3 ID = 44367388\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		sgt::TileStorage* storage=(Luna< osg::Referenced >::checkSubType< sgt::TileStorage >(L,2));
		std::string name(lua_tostring(L,3),lua_objlen(L,3));
		sgt::Scheduler* scheduler=luatop>3 ? (Luna< osg::Referenced >::checkSubType< sgt::Scheduler >(L,4)) : (sgt::Scheduler*)NULL;

		wrapper_sgt_TileCache* self=Luna< osg::Referenced >::checkSubType< wrapper_sgt_TileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileCache::public_init(sgt::TileStorage *, std::string, sgt::Scheduler *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(storage, name, scheduler);

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


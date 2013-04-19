#ifndef _WRAPPERS_WRAPPER_SGT_TILEPRODUCER_H_
#define _WRAPPERS_WRAPPER_SGT_TILEPRODUCER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <producer/TileProducer.h>

class wrapper_sgt_TileProducer : public sgt::TileProducer, public luna_wrapper_base {

public:
		

	~wrapper_sgt_TileProducer() {
		logDEBUG3("Calling delete function for wrapper sgt_TileProducer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((sgt::TileProducer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_sgt_TileProducer(lua_State* L, lua_Table* dum, const char * type, const char * taskType, sgt::TileCache * cache, bool gpuProducer) 
		: sgt::TileProducer(type, taskType, cache, gpuProducer), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((sgt::TileProducer*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_sgt_TileProducer(lua_State* L, lua_Table* dum, const char * type, const char * taskType) 
		: sgt::TileProducer(type, taskType), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((sgt::TileProducer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void * sgt::TileProducer::getContext() const
	void * getContext() const {
		if(_obj.pushFunction("getContext")) {
			_obj.pushArg((sgt::TileProducer*)this);
			return (_obj.callFunction<void*>());
		}

		return TileProducer::getContext();
	};

	// sgtPtr< sgt::Task > sgt::TileProducer::startCreateTile(int level, int tx, int ty, unsigned int deadline, sgtPtr< sgt::Task > task, sgtPtr< sgt::TaskGraph > owner)
	sgtPtr< sgt::Task > startCreateTile(int level, int tx, int ty, unsigned int deadline, sgtPtr< sgt::Task > task, sgtPtr< sgt::TaskGraph > owner) {
		if(_obj.pushFunction("startCreateTile")) {
			_obj.pushArg((sgt::TileProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(deadline);
			_obj.pushArg(&task);
			_obj.pushArg(&owner);
			return *(_obj.callFunction<sgtPtr< sgt::Task >*>());
		}

		return TileProducer::startCreateTile(level, tx, ty, deadline, task, owner);
	};

	// void sgt::TileProducer::beginCreateTile()
	void beginCreateTile() {
		if(_obj.pushFunction("beginCreateTile")) {
			_obj.pushArg((sgt::TileProducer*)this);
			return (_obj.callFunction<void>());
		}

		return TileProducer::beginCreateTile();
	};

	// bool sgt::TileProducer::doCreateTile(int level, int tx, int ty, sgt::TileStorage::Slot * data)
	bool doCreateTile(int level, int tx, int ty, sgt::TileStorage::Slot * data) {
		if(_obj.pushFunction("doCreateTile")) {
			_obj.pushArg((sgt::TileProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(data);
			return (_obj.callFunction<bool>());
		}

		return TileProducer::doCreateTile(level, tx, ty, data);
	};

	// void sgt::TileProducer::endCreateTile()
	void endCreateTile() {
		if(_obj.pushFunction("endCreateTile")) {
			_obj.pushArg((sgt::TileProducer*)this);
			return (_obj.callFunction<void>());
		}

		return TileProducer::endCreateTile();
	};

	// void sgt::TileProducer::stopCreateTile(int level, int tx, int ty)
	void stopCreateTile(int level, int tx, int ty) {
		if(_obj.pushFunction("stopCreateTile")) {
			_obj.pushArg((sgt::TileProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return TileProducer::stopCreateTile(level, tx, ty);
	};

public:
	// Public virtual methods:
	// void sgt::TileProducer::setRootQuadSize(float size)
	void setRootQuadSize(float size) {
		if(_obj.pushFunction("setRootQuadSize")) {
			_obj.pushArg((sgt::TileProducer*)this);
			_obj.pushArg(size);
			return (_obj.callFunction<void>());
		}

		return TileProducer::setRootQuadSize(size);
	};

	// sgt::TileCache * sgt::TileProducer::getCache()
	sgt::TileCache * getCache() {
		if(_obj.pushFunction("getCache")) {
			_obj.pushArg((sgt::TileProducer*)this);
			return (_obj.callFunction<sgt::TileCache*>());
		}

		return TileProducer::getCache();
	};

	// int sgt::TileProducer::getBorder()
	int getBorder() {
		if(_obj.pushFunction("getBorder")) {
			_obj.pushArg((sgt::TileProducer*)this);
			return (_obj.callFunction<int>());
		}

		return TileProducer::getBorder();
	};

	// bool sgt::TileProducer::hasTile(int level, int tx, int ty)
	bool hasTile(int level, int tx, int ty) {
		if(_obj.pushFunction("hasTile")) {
			_obj.pushArg((sgt::TileProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<bool>());
		}

		return TileProducer::hasTile(level, tx, ty);
	};

	// sgt::TileCache::Tile * sgt::TileProducer::findTile(int level, int tx, int ty, bool includeCache = false, bool done = false)
	sgt::TileCache::Tile * findTile(int level, int tx, int ty, bool includeCache = false, bool done = false) {
		if(_obj.pushFunction("findTile")) {
			_obj.pushArg((sgt::TileProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(includeCache);
			_obj.pushArg(done);
			return (_obj.callFunction<sgt::TileCache::Tile*>());
		}

		return TileProducer::findTile(level, tx, ty, includeCache, done);
	};

	// sgt::TileCache::Tile * sgt::TileProducer::getTile(int level, int tx, int ty, unsigned int deadline)
	sgt::TileCache::Tile * getTile(int level, int tx, int ty, unsigned int deadline) {
		if(_obj.pushFunction("getTile")) {
			_obj.pushArg((sgt::TileProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(deadline);
			return (_obj.callFunction<sgt::TileCache::Tile*>());
		}

		return TileProducer::getTile(level, tx, ty, deadline);
	};

	// bool sgt::TileProducer::prefetchTile(int level, int tx, int ty)
	bool prefetchTile(int level, int tx, int ty) {
		if(_obj.pushFunction("prefetchTile")) {
			_obj.pushArg((sgt::TileProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<bool>());
		}

		return TileProducer::prefetchTile(level, tx, ty);
	};

	// void sgt::TileProducer::putTile(sgt::TileCache::Tile * t)
	void putTile(sgt::TileCache::Tile * t) {
		if(_obj.pushFunction("putTile")) {
			_obj.pushArg((sgt::TileProducer*)this);
			_obj.pushArg(t);
			return (_obj.callFunction<void>());
		}

		return TileProducer::putTile(t);
	};

	// void sgt::TileProducer::invalidateTiles()
	void invalidateTiles() {
		if(_obj.pushFunction("invalidateTiles")) {
			_obj.pushArg((sgt::TileProducer*)this);
			return (_obj.callFunction<void>());
		}

		return TileProducer::invalidateTiles();
	};

	// void sgt::TileProducer::invalidateTile(int level, int tx, int ty)
	void invalidateTile(int level, int tx, int ty) {
		if(_obj.pushFunction("invalidateTile")) {
			_obj.pushArg((sgt::TileProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return TileProducer::invalidateTile(level, tx, ty);
	};

	// void sgt::TileProducer::update()
	void update() {
		if(_obj.pushFunction("update")) {
			_obj.pushArg((sgt::TileProducer*)this);
			return (_obj.callFunction<void>());
		}

		return TileProducer::update();
	};

	// void sgt::TileProducer::getReferencedProducers(std::vector< sgtPtr< sgt::TileProducer > > & producers) const
	void getReferencedProducers(std::vector< sgtPtr< sgt::TileProducer > > & producers) const {
		if(_obj.pushFunction("getReferencedProducers")) {
			_obj.pushArg((sgt::TileProducer*)this);
			_obj.pushArg(&producers);
			return (_obj.callFunction<void>());
		}

		return TileProducer::getReferencedProducers(producers);
	};


	// Protected non-virtual methods:
	// void sgt::TileProducer::init(sgt::TileCache * cache, bool gpuProducer)
	void public_init(sgt::TileCache * cache, bool gpuProducer) {
		return sgt::TileProducer::init(cache, gpuProducer);
	};

	// void sgt::TileProducer::removeCreateTile(sgt::Task * t)
	void public_removeCreateTile(sgt::Task * t) {
		return sgt::TileProducer::removeCreateTile(t);
	};

	// sgtPtr< sgt::TaskGraph > sgt::TileProducer::createTaskGraph(sgtPtr< sgt::Task > task)
	sgtPtr< sgt::TaskGraph > public_createTaskGraph(sgtPtr< sgt::Task > task) {
		return sgt::TileProducer::createTaskGraph(task);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_removeCreateTile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_createTaskGraph(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,6988042) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void sgt::TileProducer::public_init(sgt::TileCache * cache, bool gpuProducer)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileProducer::public_init(sgt::TileCache * cache, bool gpuProducer) function, expected prototype:\nvoid sgt::TileProducer::public_init(sgt::TileCache * cache, bool gpuProducer)\nClass arguments details:\narg 1 ID = 44367388\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::TileCache* cache=(Luna< osg::Referenced >::checkSubType< sgt::TileCache >(L,2));
		bool gpuProducer=(bool)(lua_toboolean(L,3)==1);

		wrapper_sgt_TileProducer* self=Luna< osg::Referenced >::checkSubType< wrapper_sgt_TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileProducer::public_init(sgt::TileCache *, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(cache, gpuProducer);

		return 0;
	}

	// void sgt::TileProducer::public_removeCreateTile(sgt::Task * t)
	static int _bind_public_removeCreateTile(lua_State *L) {
		if (!_lg_typecheck_public_removeCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileProducer::public_removeCreateTile(sgt::Task * t) function, expected prototype:\nvoid sgt::TileProducer::public_removeCreateTile(sgt::Task * t)\nClass arguments details:\narg 1 ID = 44367388\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::Task* t=(Luna< osg::Referenced >::checkSubType< sgt::Task >(L,2));

		wrapper_sgt_TileProducer* self=Luna< osg::Referenced >::checkSubType< wrapper_sgt_TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileProducer::public_removeCreateTile(sgt::Task *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_removeCreateTile(t);

		return 0;
	}

	// sgtPtr< sgt::TaskGraph > sgt::TileProducer::public_createTaskGraph(sgtPtr< sgt::Task > task)
	static int _bind_public_createTaskGraph(lua_State *L) {
		if (!_lg_typecheck_public_createTaskGraph(L)) {
			luaL_error(L, "luna typecheck failed in sgtPtr< sgt::TaskGraph > sgt::TileProducer::public_createTaskGraph(sgtPtr< sgt::Task > task) function, expected prototype:\nsgtPtr< sgt::TaskGraph > sgt::TileProducer::public_createTaskGraph(sgtPtr< sgt::Task > task)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		sgtPtr< sgt::Task >* task_ptr=(Luna< sgtPtr< sgt::Task > >::check(L,2));
		if( !task_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg task in sgt::TileProducer::public_createTaskGraph function");
		}
		sgtPtr< sgt::Task > task=*task_ptr;

		wrapper_sgt_TileProducer* self=Luna< osg::Referenced >::checkSubType< wrapper_sgt_TileProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call sgtPtr< sgt::TaskGraph > sgt::TileProducer::public_createTaskGraph(sgtPtr< sgt::Task >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgtPtr< sgt::TaskGraph > stack_lret = self->public_createTaskGraph(task);
		sgtPtr< sgt::TaskGraph >* lret = new sgtPtr< sgt::TaskGraph >(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgtPtr< sgt::TaskGraph > >::push(L,lret,true);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"init",_bind_public_init},
		{"removeCreateTile",_bind_public_removeCreateTile},
		{"createTaskGraph",_bind_public_createTaskGraph},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif


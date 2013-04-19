#ifndef _WRAPPERS_WRAPPER_SGT_TILELAYER_H_
#define _WRAPPERS_WRAPPER_SGT_TILELAYER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <producer/TileLayer.h>

class wrapper_sgt_TileLayer : public sgt::TileLayer, public luna_wrapper_base {

public:
		

	~wrapper_sgt_TileLayer() {
		logDEBUG3("Calling delete function for wrapper sgt_TileLayer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((sgt::TileLayer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_sgt_TileLayer(lua_State* L, lua_Table* dum, const char * type, bool deform = false) 
		: sgt::TileLayer(type, deform), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((sgt::TileLayer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void sgt::TileLayer::setCache(sgt::TileCache * cache, int producerId)
	void setCache(sgt::TileCache * cache, int producerId) {
		if(_obj.pushFunction("setCache")) {
			_obj.pushArg((sgt::TileLayer*)this);
			_obj.pushArg(cache);
			_obj.pushArg(producerId);
			return (_obj.callFunction<void>());
		}

		return TileLayer::setCache(cache, producerId);
	};

	// void sgt::TileLayer::getReferencedProducers(std::vector< sgtPtr< sgt::TileProducer > > & producers) const
	void getReferencedProducers(std::vector< sgtPtr< sgt::TileProducer > > & producers) const {
		if(_obj.pushFunction("getReferencedProducers")) {
			_obj.pushArg((sgt::TileLayer*)this);
			_obj.pushArg(&producers);
			return (_obj.callFunction<void>());
		}

		return TileLayer::getReferencedProducers(producers);
	};

	// void sgt::TileLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize)
	void setTileSize(int tileSize, int tileBorder, float rootQuadSize) {
		if(_obj.pushFunction("setTileSize")) {
			_obj.pushArg((sgt::TileLayer*)this);
			_obj.pushArg(tileSize);
			_obj.pushArg(tileBorder);
			_obj.pushArg(rootQuadSize);
			return (_obj.callFunction<void>());
		}

		return TileLayer::setTileSize(tileSize, tileBorder, rootQuadSize);
	};

	// void sgt::TileLayer::useTile(int level, int tx, int ty, unsigned int deadline)
	void useTile(int level, int tx, int ty, unsigned int deadline) {
		if(_obj.pushFunction("useTile")) {
			_obj.pushArg((sgt::TileLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(deadline);
			return (_obj.callFunction<void>());
		}

		return TileLayer::useTile(level, tx, ty, deadline);
	};

	// void sgt::TileLayer::unuseTile(int level, int tx, int ty)
	void unuseTile(int level, int tx, int ty) {
		if(_obj.pushFunction("unuseTile")) {
			_obj.pushArg((sgt::TileLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return TileLayer::unuseTile(level, tx, ty);
	};

	// void sgt::TileLayer::prefetchTile(int level, int tx, int ty)
	void prefetchTile(int level, int tx, int ty) {
		if(_obj.pushFunction("prefetchTile")) {
			_obj.pushArg((sgt::TileLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return TileLayer::prefetchTile(level, tx, ty);
	};

	// void sgt::TileLayer::startCreateTile(int level, int tx, int ty, unsigned int deadline, sgtPtr< sgt::Task > task, sgtPtr< sgt::TaskGraph > owner)
	void startCreateTile(int level, int tx, int ty, unsigned int deadline, sgtPtr< sgt::Task > task, sgtPtr< sgt::TaskGraph > owner) {
		if(_obj.pushFunction("startCreateTile")) {
			_obj.pushArg((sgt::TileLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(deadline);
			_obj.pushArg(&task);
			_obj.pushArg(&owner);
			return (_obj.callFunction<void>());
		}

		return TileLayer::startCreateTile(level, tx, ty, deadline, task, owner);
	};

	// void sgt::TileLayer::beginCreateTile()
	void beginCreateTile() {
		if(_obj.pushFunction("beginCreateTile")) {
			_obj.pushArg((sgt::TileLayer*)this);
			return (_obj.callFunction<void>());
		}

		return TileLayer::beginCreateTile();
	};

	// bool sgt::TileLayer::doCreateTile(int level, int tx, int ty, sgt::TileStorage::Slot * data)
	bool doCreateTile(int level, int tx, int ty, sgt::TileStorage::Slot * data) {
		THROW_IF(!_obj.pushFunction("doCreateTile"),"No implementation for abstract function sgt::TileLayer::doCreateTile");
		_obj.pushArg((sgt::TileLayer*)this);
		_obj.pushArg(level);
		_obj.pushArg(tx);
		_obj.pushArg(ty);
		_obj.pushArg(data);
		return (_obj.callFunction<bool>());
	};

	// void sgt::TileLayer::endCreateTile()
	void endCreateTile() {
		if(_obj.pushFunction("endCreateTile")) {
			_obj.pushArg((sgt::TileLayer*)this);
			return (_obj.callFunction<void>());
		}

		return TileLayer::endCreateTile();
	};

	// void sgt::TileLayer::stopCreateTile(int level, int tx, int ty)
	void stopCreateTile(int level, int tx, int ty) {
		if(_obj.pushFunction("stopCreateTile")) {
			_obj.pushArg((sgt::TileLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return TileLayer::stopCreateTile(level, tx, ty);
	};

	// void sgt::TileLayer::invalidateTiles()
	void invalidateTiles() {
		if(_obj.pushFunction("invalidateTiles")) {
			_obj.pushArg((sgt::TileLayer*)this);
			return (_obj.callFunction<void>());
		}

		return TileLayer::invalidateTiles();
	};


	// Protected non-virtual methods:
	// void sgt::TileLayer::init(bool deform = false)
	void public_init(bool deform = false) {
		return sgt::TileLayer::init(deform);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void sgt::TileLayer::public_init(bool deform = false)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::TileLayer::public_init(bool deform = false) function, expected prototype:\nvoid sgt::TileLayer::public_init(bool deform = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool deform=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		wrapper_sgt_TileLayer* self=Luna< osg::Referenced >::checkSubType< wrapper_sgt_TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::TileLayer::public_init(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(deform);

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


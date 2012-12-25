#ifndef _WRAPPERS_WRAPPER_OSGDB_DATABASEPAGER_H_
#define _WRAPPERS_WRAPPER_OSGDB_DATABASEPAGER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/DatabasePager>

class wrapper_osgDB_DatabasePager : public osgDB::DatabasePager, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_DatabasePager() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_DatabasePager(lua_State* L, lua_Table* dum) : osgDB::DatabasePager(), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osgDB_DatabasePager(lua_State* L, lua_Table* dum, const osgDB::DatabasePager & rhs) : osgDB::DatabasePager(rhs), luna_wrapper_base(L) { register_protected_methods(L); };

	// Public virtual methods:
	// const char * osgDB::DatabasePager::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return DatabasePager::className();
	};

	// osgDB::DatabasePager * osgDB::DatabasePager::clone() const
	osgDB::DatabasePager * clone() const {
		if(_obj.pushFunction("clone")) {
			return (_obj.callFunction<osgDB::DatabasePager*>());
		}

		return DatabasePager::clone();
	};

	// void osgDB::DatabasePager::requestNodeFile(const std::string & fileName, osg::NodePath & nodePath, float priority, const osg::FrameStamp * framestamp, osg::ref_ptr< osg::Referenced > & databaseRequest, const osg::Referenced * options)
	void requestNodeFile(const std::string & fileName, osg::NodePath & nodePath, float priority, const osg::FrameStamp * framestamp, osg::ref_ptr< osg::Referenced > & databaseRequest, const osg::Referenced * options) {
		if(_obj.pushFunction("requestNodeFile")) {
			_obj.pushArg(fileName);
			_obj.pushArg(&nodePath);
			_obj.pushArg(priority);
			_obj.pushArg(framestamp);
			_obj.pushArg(databaseRequest);
			_obj.pushArg(options);
			return (_obj.callFunction<void>());
		}

		return DatabasePager::requestNodeFile(fileName, nodePath, priority, framestamp, databaseRequest, options);
	};

	// int osgDB::DatabasePager::cancel()
	int cancel() {
		if(_obj.pushFunction("cancel")) {
			return (_obj.callFunction<int>());
		}

		return DatabasePager::cancel();
	};

	// bool osgDB::DatabasePager::isRunning() const
	bool isRunning() const {
		if(_obj.pushFunction("isRunning")) {
			return (_obj.callFunction<bool>());
		}

		return DatabasePager::isRunning();
	};

	// void osgDB::DatabasePager::clear()
	void clear() {
		if(_obj.pushFunction("clear")) {
			return (_obj.callFunction<void>());
		}

		return DatabasePager::clear();
	};

	// void osgDB::DatabasePager::signalBeginFrame(const osg::FrameStamp * framestamp)
	void signalBeginFrame(const osg::FrameStamp * framestamp) {
		if(_obj.pushFunction("signalBeginFrame")) {
			_obj.pushArg(framestamp);
			return (_obj.callFunction<void>());
		}

		return DatabasePager::signalBeginFrame(framestamp);
	};

	// void osgDB::DatabasePager::signalEndFrame()
	void signalEndFrame() {
		if(_obj.pushFunction("signalEndFrame")) {
			return (_obj.callFunction<void>());
		}

		return DatabasePager::signalEndFrame();
	};

	// void osgDB::DatabasePager::registerPagedLODs(osg::Node * subgraph, unsigned int frameNumber = 0)
	void registerPagedLODs(osg::Node * subgraph, unsigned int frameNumber = 0) {
		if(_obj.pushFunction("registerPagedLODs")) {
			_obj.pushArg(subgraph);
			_obj.pushArg(frameNumber);
			return (_obj.callFunction<void>());
		}

		return DatabasePager::registerPagedLODs(subgraph, frameNumber);
	};

	// void osgDB::DatabasePager::updateSceneGraph(const osg::FrameStamp & frameStamp)
	void updateSceneGraph(const osg::FrameStamp & frameStamp) {
		if(_obj.pushFunction("updateSceneGraph")) {
			_obj.pushArg(&frameStamp);
			return (_obj.callFunction<void>());
		}

		return DatabasePager::updateSceneGraph(frameStamp);
	};


protected:
	// Protected virtual methods:
	// void osgDB::DatabasePager::removeExpiredSubgraphs(const osg::FrameStamp & frameStamp)
	void removeExpiredSubgraphs(const osg::FrameStamp & frameStamp) {
		if(_obj.pushFunction("removeExpiredSubgraphs")) {
			_obj.pushArg(&frameStamp);
			return (_obj.callFunction<void>());
		}

		return DatabasePager::removeExpiredSubgraphs(frameStamp);
	};

public:
	// Protected non-virtual methods:
	// void osgDB::DatabasePager::compileCompleted(osgDB::DatabasePager::DatabaseRequest * databaseRequest)
	void public_compileCompleted(osgDB::DatabasePager::DatabaseRequest * databaseRequest) {
		return osgDB::DatabasePager::compileCompleted(databaseRequest);
	};

	// void osgDB::DatabasePager::addLoadedDataToSceneGraph(const osg::FrameStamp & frameStamp)
	void public_addLoadedDataToSceneGraph(const osg::FrameStamp & frameStamp) {
		return osgDB::DatabasePager::addLoadedDataToSceneGraph(frameStamp);
	};

	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_compileCompleted(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_addLoadedDataToSceneGraph(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_signalObserversAndDelete(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_deleteUsingDeleteHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// void osgDB::DatabasePager::public_compileCompleted(osgDB::DatabasePager::DatabaseRequest * databaseRequest)
	static int _bind_public_compileCompleted(lua_State *L) {
		if (!_lg_typecheck_public_compileCompleted(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::public_compileCompleted(osgDB::DatabasePager::DatabaseRequest * databaseRequest) function, expected prototype:\nvoid osgDB::DatabasePager::public_compileCompleted(osgDB::DatabasePager::DatabaseRequest * databaseRequest)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgDB::DatabasePager::DatabaseRequest* databaseRequest=(Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager::DatabaseRequest >(L,2));

		wrapper_osgDB_DatabasePager* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_DatabasePager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::public_compileCompleted(osgDB::DatabasePager::DatabaseRequest *)");
		}
		self->public_compileCompleted(databaseRequest);

		return 0;
	}

	// void osgDB::DatabasePager::public_addLoadedDataToSceneGraph(const osg::FrameStamp & frameStamp)
	static int _bind_public_addLoadedDataToSceneGraph(lua_State *L) {
		if (!_lg_typecheck_public_addLoadedDataToSceneGraph(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::DatabasePager::public_addLoadedDataToSceneGraph(const osg::FrameStamp & frameStamp) function, expected prototype:\nvoid osgDB::DatabasePager::public_addLoadedDataToSceneGraph(const osg::FrameStamp & frameStamp)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::FrameStamp* frameStamp_ptr=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,2));
		if( !frameStamp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameStamp in osgDB::DatabasePager::public_addLoadedDataToSceneGraph function");
		}
		const osg::FrameStamp & frameStamp=*frameStamp_ptr;

		wrapper_osgDB_DatabasePager* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_DatabasePager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::DatabasePager::public_addLoadedDataToSceneGraph(const osg::FrameStamp &)");
		}
		self->public_addLoadedDataToSceneGraph(frameStamp);

		return 0;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n");
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgDB_DatabasePager* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_DatabasePager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_signalObserversAndDelete(bool, bool) const");
		}
		self->public_signalObserversAndDelete(signalDelete, doDelete);

		return 0;
	}

	// void osg::Referenced::public_deleteUsingDeleteHandler() const
	static int _bind_public_deleteUsingDeleteHandler(lua_State *L) {
		if (!_lg_typecheck_public_deleteUsingDeleteHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_deleteUsingDeleteHandler() const function, expected prototype:\nvoid osg::Referenced::public_deleteUsingDeleteHandler() const\nClass arguments details:\n");
		}


		wrapper_osgDB_DatabasePager* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_DatabasePager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const");
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"compileCompleted",_bind_public_compileCompleted},
		{"addLoadedDataToSceneGraph",_bind_public_addLoadedDataToSceneGraph},
		{"signalObserversAndDelete",_bind_public_signalObserversAndDelete},
		{"deleteUsingDeleteHandler",_bind_public_deleteUsingDeleteHandler},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif


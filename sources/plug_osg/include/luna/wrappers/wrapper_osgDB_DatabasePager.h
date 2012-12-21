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
	
	wrapper_osgDB_DatabasePager(lua_State* L, lua_Table* dum) : osgDB::DatabasePager(), luna_wrapper_base(L) {};
	wrapper_osgDB_DatabasePager(lua_State* L, lua_Table* dum, const osgDB::DatabasePager & rhs) : osgDB::DatabasePager(rhs), luna_wrapper_base(L) {};

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
	// void osgDB::DatabasePager::removeExpiredSubgraphs(const osg::FrameStamp & frameStamp)
	void removeExpiredSubgraphs(const osg::FrameStamp & frameStamp) {
		if(_obj.pushFunction("removeExpiredSubgraphs")) {
			_obj.pushArg(&frameStamp);
			return (_obj.callFunction<void>());
		}

		return DatabasePager::removeExpiredSubgraphs(frameStamp);
	};

public:
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


};




#endif


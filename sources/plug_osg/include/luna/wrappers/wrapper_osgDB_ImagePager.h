#ifndef _WRAPPERS_WRAPPER_OSGDB_IMAGEPAGER_H_
#define _WRAPPERS_WRAPPER_OSGDB_IMAGEPAGER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/ImagePager>

class wrapper_osgDB_ImagePager : public osgDB::ImagePager, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_ImagePager() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_ImagePager(lua_State* L, lua_Table* dum) : osgDB::ImagePager(), luna_wrapper_base(L) {};

	// double osgDB::ImagePager::getPreLoadTime() const
	double getPreLoadTime() const {
		if(_obj.pushFunction("getPreLoadTime")) {
			return (_obj.callFunction<double>());
		}

		return ImagePager::getPreLoadTime();
	};

	// osg::Image * osgDB::ImagePager::readImageFile(const std::string & fileName)
	osg::Image * readImageFile(const std::string & fileName) {
		if(_obj.pushFunction("readImageFile")) {
			_obj.pushArg(fileName);
			return (_obj.callFunction<osg::Image*>());
		}

		return ImagePager::readImageFile(fileName);
	};

	// void osgDB::ImagePager::requestImageFile(const std::string & fileName, osg::Object * attachmentPoint, int attachmentIndex, double timeToMergeBy, const osg::FrameStamp * framestamp)
	void requestImageFile(const std::string & fileName, osg::Object * attachmentPoint, int attachmentIndex, double timeToMergeBy, const osg::FrameStamp * framestamp) {
		if(_obj.pushFunction("requestImageFile")) {
			_obj.pushArg(fileName);
			_obj.pushArg(attachmentPoint);
			_obj.pushArg(attachmentIndex);
			_obj.pushArg(timeToMergeBy);
			_obj.pushArg(framestamp);
			return (_obj.callFunction<void>());
		}

		return ImagePager::requestImageFile(fileName, attachmentPoint, attachmentIndex, timeToMergeBy, framestamp);
	};

	// bool osgDB::ImagePager::requiresUpdateSceneGraph() const
	bool requiresUpdateSceneGraph() const {
		if(_obj.pushFunction("requiresUpdateSceneGraph")) {
			return (_obj.callFunction<bool>());
		}

		return ImagePager::requiresUpdateSceneGraph();
	};

	// void osgDB::ImagePager::updateSceneGraph(const osg::FrameStamp & frameStamp)
	void updateSceneGraph(const osg::FrameStamp & frameStamp) {
		if(_obj.pushFunction("updateSceneGraph")) {
			_obj.pushArg(&frameStamp);
			return (_obj.callFunction<void>());
		}

		return ImagePager::updateSceneGraph(frameStamp);
	};




};




#endif


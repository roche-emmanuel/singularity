#ifndef _WRAPPERS_WRAPPER_OSG_NODEVISITOR_IMAGEREQUESTHANDLER_H_
#define _WRAPPERS_WRAPPER_OSG_NODEVISITOR_IMAGEREQUESTHANDLER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/NodeVisitor>

class wrapper_osg_NodeVisitor_ImageRequestHandler : public osg::NodeVisitor::ImageRequestHandler, public luna_wrapper_base {

public:
		

	~wrapper_osg_NodeVisitor_ImageRequestHandler() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_NodeVisitor_ImageRequestHandler(lua_State* L, lua_Table* dum) : osg::NodeVisitor::ImageRequestHandler(), luna_wrapper_base(L) {};

	// double osg::NodeVisitor::ImageRequestHandler::getPreLoadTime() const
	double getPreLoadTime() const {
		THROW_IF(!_obj.pushFunction("getPreLoadTime"),"No implementation for abstract function osg::NodeVisitor::ImageRequestHandler::getPreLoadTime");
		return (_obj.callFunction<double>());
	};

	// osg::Image * osg::NodeVisitor::ImageRequestHandler::readImageFile(const std::string & fileName)
	osg::Image * readImageFile(const std::string & fileName) {
		THROW_IF(!_obj.pushFunction("readImageFile"),"No implementation for abstract function osg::NodeVisitor::ImageRequestHandler::readImageFile");
		_obj.pushArg(fileName);
		return (_obj.callFunction<osg::Image*>());
	};

	// void osg::NodeVisitor::ImageRequestHandler::requestImageFile(const std::string & fileName, osg::Object * attachmentPoint, int attachmentIndex, double timeToMergeBy, const osg::FrameStamp * framestamp)
	void requestImageFile(const std::string & fileName, osg::Object * attachmentPoint, int attachmentIndex, double timeToMergeBy, const osg::FrameStamp * framestamp) {
		THROW_IF(!_obj.pushFunction("requestImageFile"),"No implementation for abstract function osg::NodeVisitor::ImageRequestHandler::requestImageFile");
		_obj.pushArg(fileName);
		_obj.pushArg(attachmentPoint);
		_obj.pushArg(attachmentIndex);
		_obj.pushArg(timeToMergeBy);
		_obj.pushArg(framestamp);
		return (_obj.callFunction<void>());
	};




};




#endif


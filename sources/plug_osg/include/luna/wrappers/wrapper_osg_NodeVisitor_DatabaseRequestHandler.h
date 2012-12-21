#ifndef _WRAPPERS_WRAPPER_OSG_NODEVISITOR_DATABASEREQUESTHANDLER_H_
#define _WRAPPERS_WRAPPER_OSG_NODEVISITOR_DATABASEREQUESTHANDLER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/NodeVisitor>

class wrapper_osg_NodeVisitor_DatabaseRequestHandler : public osg::NodeVisitor::DatabaseRequestHandler, public luna_wrapper_base {

public:
		

	~wrapper_osg_NodeVisitor_DatabaseRequestHandler() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_NodeVisitor_DatabaseRequestHandler(lua_State* L, lua_Table* dum) : osg::NodeVisitor::DatabaseRequestHandler(), luna_wrapper_base(L) {};

	// void osg::NodeVisitor::DatabaseRequestHandler::requestNodeFile(const std::string & fileName, osg::NodePath & nodePath, float priority, const osg::FrameStamp * framestamp, osg::ref_ptr< osg::Referenced > & databaseRequest, const osg::Referenced * options = 0)
	void requestNodeFile(const std::string & fileName, osg::NodePath & nodePath, float priority, const osg::FrameStamp * framestamp, osg::ref_ptr< osg::Referenced > & databaseRequest, const osg::Referenced * options = 0) {
		THROW_IF(!_obj.pushFunction("requestNodeFile"),"No implementation for abstract function osg::NodeVisitor::DatabaseRequestHandler::requestNodeFile");
		_obj.pushArg(fileName);
		_obj.pushArg(&nodePath);
		_obj.pushArg(priority);
		_obj.pushArg(framestamp);
		_obj.pushArg(databaseRequest);
		_obj.pushArg(options);
		return (_obj.callFunction<void>());
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


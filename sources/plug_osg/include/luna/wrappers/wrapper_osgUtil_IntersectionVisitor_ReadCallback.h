#ifndef _WRAPPERS_WRAPPER_OSGUTIL_INTERSECTIONVISITOR_READCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_INTERSECTIONVISITOR_READCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/IntersectionVisitor>

class wrapper_osgUtil_IntersectionVisitor_ReadCallback : public osgUtil::IntersectionVisitor::ReadCallback {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgUtil_IntersectionVisitor_ReadCallback(lua_State* L, lua_Table* dum) : osgUtil::IntersectionVisitor::ReadCallback(), _obj(L,-1) {};

	// osg::Node * osgUtil::IntersectionVisitor::ReadCallback::readNodeFile(const std::string & filename)
	osg::Node * readNodeFile(const std::string & filename) {
		THROW_IF(!_obj.pushFunction("readNodeFile"),"No implementation for abstract function osgUtil::IntersectionVisitor::ReadCallback::readNodeFile");
		_obj.pushArg(filename);
		return (_obj.callFunction<osg::Node*>());
	};




};




#endif


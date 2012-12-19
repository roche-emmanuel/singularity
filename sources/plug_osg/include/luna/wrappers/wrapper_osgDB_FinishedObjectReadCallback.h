#ifndef _WRAPPERS_WRAPPER_OSGDB_FINISHEDOBJECTREADCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSGDB_FINISHEDOBJECTREADCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/ObjectWrapper>

class wrapper_osgDB_FinishedObjectReadCallback : public osgDB::FinishedObjectReadCallback, public luna_wrapper_base {

public:
	


	// void osgDB::FinishedObjectReadCallback::objectRead(osgDB::InputStream & is, osg::Object & obj)
	void objectRead(osgDB::InputStream & is, osg::Object & obj) {
		THROW_IF(!_obj.pushFunction("objectRead"),"No implementation for abstract function osgDB::FinishedObjectReadCallback::objectRead");
		_obj.pushArg(&is);
		_obj.pushArg(&obj);
		return (_obj.callFunction<void>());
	};




};




#endif


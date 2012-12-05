#ifndef _WRAPPERS_WRAPPER_OSG_STATE_DYNAMICOBJECTRENDERINGCOMPLETEDCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSG_STATE_DYNAMICOBJECTRENDERINGCOMPLETEDCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/State>

class wrapper_osg_State_DynamicObjectRenderingCompletedCallback : public osg::State::DynamicObjectRenderingCompletedCallback {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_State_DynamicObjectRenderingCompletedCallback(lua_State* L, lua_Table* dum) : osg::State::DynamicObjectRenderingCompletedCallback(), _obj(L,-1) {};

	// void osg::State::DynamicObjectRenderingCompletedCallback::completed(osg::State * arg1)
	void completed(osg::State * arg1) {
		THROW_IF(!_obj.pushFunction("completed"),"No implementation for abstract function osg::State::DynamicObjectRenderingCompletedCallback::completed");
		_obj.pushArg(arg1);
		return (_obj.callFunction<void>());
	};




};




#endif


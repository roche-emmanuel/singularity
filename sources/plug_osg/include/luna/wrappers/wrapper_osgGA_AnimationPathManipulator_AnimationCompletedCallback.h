#ifndef _WRAPPERS_WRAPPER_OSGGA_ANIMATIONPATHMANIPULATOR_ANIMATIONCOMPLETEDCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSGGA_ANIMATIONPATHMANIPULATOR_ANIMATIONCOMPLETEDCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgGA/AnimationPathManipulator>

class wrapper_osgGA_AnimationPathManipulator_AnimationCompletedCallback : public osgGA::AnimationPathManipulator::AnimationCompletedCallback {
protected:
	sgt::LuaObject _obj;
	
public:
	


	// void osgGA::AnimationPathManipulator::AnimationCompletedCallback::completed(const osgGA::AnimationPathManipulator * apm)
	void completed(const osgGA::AnimationPathManipulator * apm) {
		THROW_IF(!_obj.pushFunction("completed"),"No implementation for abstract function osgGA::AnimationPathManipulator::AnimationCompletedCallback::completed");
		_obj.pushArg(apm);
		return (_obj.callFunction<void>());
	};




};




#endif


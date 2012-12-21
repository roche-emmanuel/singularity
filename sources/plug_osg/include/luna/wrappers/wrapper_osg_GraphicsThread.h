#ifndef _WRAPPERS_WRAPPER_OSG_GRAPHICSTHREAD_H_
#define _WRAPPERS_WRAPPER_OSG_GRAPHICSTHREAD_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/GraphicsThread>

class wrapper_osg_GraphicsThread : public osg::GraphicsThread, public luna_wrapper_base {

public:
		

	~wrapper_osg_GraphicsThread() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	




};




#endif


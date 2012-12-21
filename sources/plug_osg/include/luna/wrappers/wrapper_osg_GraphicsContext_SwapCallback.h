#ifndef _WRAPPERS_WRAPPER_OSG_GRAPHICSCONTEXT_SWAPCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSG_GRAPHICSCONTEXT_SWAPCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/GraphicsContext>

class wrapper_osg_GraphicsContext_SwapCallback : public osg::GraphicsContext::SwapCallback, public luna_wrapper_base {

public:
		

	~wrapper_osg_GraphicsContext_SwapCallback() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	

	// void osg::GraphicsContext::SwapCallback::swapBuffersImplementation(osg::GraphicsContext * gc)
	void swapBuffersImplementation(osg::GraphicsContext * gc) {
		THROW_IF(!_obj.pushFunction("swapBuffersImplementation"),"No implementation for abstract function osg::GraphicsContext::SwapCallback::swapBuffersImplementation");
		_obj.pushArg(gc);
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


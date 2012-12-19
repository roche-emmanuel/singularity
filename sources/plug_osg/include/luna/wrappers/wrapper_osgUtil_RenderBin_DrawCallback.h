#ifndef _WRAPPERS_WRAPPER_OSGUTIL_RENDERBIN_DRAWCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_RENDERBIN_DRAWCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/RenderBin>

class wrapper_osgUtil_RenderBin_DrawCallback : public osgUtil::RenderBin::DrawCallback, public luna_wrapper_base {

public:
	


	// void osgUtil::RenderBin::DrawCallback::drawImplementation(osgUtil::RenderBin * bin, osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)
	void drawImplementation(osgUtil::RenderBin * bin, osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous) {
		THROW_IF(!_obj.pushFunction("drawImplementation"),"No implementation for abstract function osgUtil::RenderBin::DrawCallback::drawImplementation");
		_obj.pushArg(bin);
		_obj.pushArg(&renderInfo);
		_obj.pushArg(previous);
		return (_obj.callFunction<void>());
	};




};




#endif


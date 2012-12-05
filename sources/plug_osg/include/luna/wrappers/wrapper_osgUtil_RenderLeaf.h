#ifndef _WRAPPERS_WRAPPER_OSGUTIL_RENDERLEAF_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_RENDERLEAF_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/RenderLeaf>

class wrapper_osgUtil_RenderLeaf : public osgUtil::RenderLeaf {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgUtil_RenderLeaf(lua_State* L, lua_Table* dum, osg::Drawable * drawable, osg::RefMatrixd * projection, osg::RefMatrixd * modelview, float depth = 0.0f, unsigned int traversalNumber = 0) : osgUtil::RenderLeaf(drawable, projection, modelview, depth, traversalNumber), _obj(L,-1) {};

	// void osgUtil::RenderLeaf::render(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf * previous)
	void render(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf * previous) {
		if(_obj.pushFunction("render")) {
			_obj.pushArg(&renderInfo);
			_obj.pushArg(previous);
			return (_obj.callFunction<void>());
		}

		return osgUtil::RenderLeaf::render(renderInfo, previous);
	};




};




#endif

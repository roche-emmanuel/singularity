#ifndef _WRAPPERS_WRAPPER_OSGUTIL_SCENEVIEW_COMPUTESTEREOMATRICESCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_SCENEVIEW_COMPUTESTEREOMATRICESCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/SceneView>

class wrapper_osgUtil_SceneView_ComputeStereoMatricesCallback : public osgUtil::SceneView::ComputeStereoMatricesCallback {
protected:
	sgt::LuaObject _obj;
	
public:
	


	// osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeLeftEyeProjection(const osg::Matrixd & projection) const
	osg::Matrixd computeLeftEyeProjection(const osg::Matrixd & projection) const {
		THROW_IF(!_obj.pushFunction("computeLeftEyeProjection"),"No implementation for abstract function osgUtil::SceneView::ComputeStereoMatricesCallback::computeLeftEyeProjection");
		_obj.pushArg(&projection);
		return *(_obj.callFunction<osg::Matrixd*>());
	};

	// osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeLeftEyeView(const osg::Matrixd & view) const
	osg::Matrixd computeLeftEyeView(const osg::Matrixd & view) const {
		THROW_IF(!_obj.pushFunction("computeLeftEyeView"),"No implementation for abstract function osgUtil::SceneView::ComputeStereoMatricesCallback::computeLeftEyeView");
		_obj.pushArg(&view);
		return *(_obj.callFunction<osg::Matrixd*>());
	};

	// osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeRightEyeProjection(const osg::Matrixd & projection) const
	osg::Matrixd computeRightEyeProjection(const osg::Matrixd & projection) const {
		THROW_IF(!_obj.pushFunction("computeRightEyeProjection"),"No implementation for abstract function osgUtil::SceneView::ComputeStereoMatricesCallback::computeRightEyeProjection");
		_obj.pushArg(&projection);
		return *(_obj.callFunction<osg::Matrixd*>());
	};

	// osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeRightEyeView(const osg::Matrixd & view) const
	osg::Matrixd computeRightEyeView(const osg::Matrixd & view) const {
		THROW_IF(!_obj.pushFunction("computeRightEyeView"),"No implementation for abstract function osgUtil::SceneView::ComputeStereoMatricesCallback::computeRightEyeView");
		_obj.pushArg(&view);
		return *(_obj.callFunction<osg::Matrixd*>());
	};




};




#endif


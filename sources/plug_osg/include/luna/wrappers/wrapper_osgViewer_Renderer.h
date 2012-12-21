#ifndef _WRAPPERS_WRAPPER_OSGVIEWER_RENDERER_H_
#define _WRAPPERS_WRAPPER_OSGVIEWER_RENDERER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgViewer/Renderer>

class wrapper_osgViewer_Renderer : public osgViewer::Renderer, public luna_wrapper_base {

public:
		

	~wrapper_osgViewer_Renderer() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgViewer_Renderer(lua_State* L, lua_Table* dum, osg::Camera * camera) : osgViewer::Renderer(camera), luna_wrapper_base(L) {};

	// void osgViewer::Renderer::cull()
	void cull() {
		if(_obj.pushFunction("cull")) {
			return (_obj.callFunction<void>());
		}

		return Renderer::cull();
	};

	// void osgViewer::Renderer::draw()
	void draw() {
		if(_obj.pushFunction("draw")) {
			return (_obj.callFunction<void>());
		}

		return Renderer::draw();
	};

	// void osgViewer::Renderer::cull_draw()
	void cull_draw() {
		if(_obj.pushFunction("cull_draw")) {
			return (_obj.callFunction<void>());
		}

		return Renderer::cull_draw();
	};

	// void osgViewer::Renderer::compile()
	void compile() {
		if(_obj.pushFunction("compile")) {
			return (_obj.callFunction<void>());
		}

		return Renderer::compile();
	};

	// void osgViewer::Renderer::release()
	void release() {
		if(_obj.pushFunction("release")) {
			return (_obj.callFunction<void>());
		}

		return Renderer::release();
	};

	// void osgViewer::Renderer::operator()(osg::Object * object)
	void operator()(osg::Object * object) {
		if(_obj.pushFunction("op_call")) {
			_obj.pushArg(object);
			return (_obj.callFunction<void>());
		}

		return Renderer::operator()(object);
	};

	// void osgViewer::Renderer::operator()(osg::GraphicsContext * context)
	void operator()(osg::GraphicsContext * context) {
		if(_obj.pushFunction("op_call")) {
			_obj.pushArg(context);
			return (_obj.callFunction<void>());
		}

		return Renderer::operator()(context);
	};


protected:
	// void osgViewer::Renderer::updateSceneView(osgUtil::SceneView * sceneView)
	void updateSceneView(osgUtil::SceneView * sceneView) {
		if(_obj.pushFunction("updateSceneView")) {
			_obj.pushArg(sceneView);
			return (_obj.callFunction<void>());
		}

		return Renderer::updateSceneView(sceneView);
	};

public:
// void osgViewer::Renderer::initialize(osg::State * state)
void public_initialize(osg::State * state) {
	return osgViewer::Renderer::initialize(state);
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


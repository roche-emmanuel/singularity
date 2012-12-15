#ifndef _WRAPPERS_WRAPPER_OSGVIEWER_RENDERER_H_
#define _WRAPPERS_WRAPPER_OSGVIEWER_RENDERER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgViewer/Renderer>

class wrapper_osgViewer_Renderer : public osgViewer::Renderer {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgViewer_Renderer(lua_State* L, lua_Table* dum, osg::Camera * camera) : osgViewer::Renderer(camera), _obj(L,-1) {};

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
		if(_obj.pushFunction("operator()")) {
			_obj.pushArg(object);
			return (_obj.callFunction<void>());
		}

		return Renderer::operator()(object);
	};

	// void osgViewer::Renderer::operator()(osg::GraphicsContext * context)
	void operator()(osg::GraphicsContext * context) {
		if(_obj.pushFunction("operator()")) {
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


};




#endif


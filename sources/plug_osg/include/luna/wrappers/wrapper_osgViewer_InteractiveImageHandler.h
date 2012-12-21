#ifndef _WRAPPERS_WRAPPER_OSGVIEWER_INTERACTIVEIMAGEHANDLER_H_
#define _WRAPPERS_WRAPPER_OSGVIEWER_INTERACTIVEIMAGEHANDLER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgViewer/ViewerEventHandlers>

class wrapper_osgViewer_InteractiveImageHandler : public osgViewer::InteractiveImageHandler, public luna_wrapper_base {

public:
		

	~wrapper_osgViewer_InteractiveImageHandler() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgViewer_InteractiveImageHandler(lua_State* L, lua_Table* dum, osg::Image * image) : osgViewer::InteractiveImageHandler(image), luna_wrapper_base(L) {};
	wrapper_osgViewer_InteractiveImageHandler(lua_State* L, lua_Table* dum, osg::Image * image, osg::Texture2D * texture, osg::Camera * camera) : osgViewer::InteractiveImageHandler(image, texture, camera), luna_wrapper_base(L) {};
	wrapper_osgViewer_InteractiveImageHandler(lua_State* L, lua_Table* dum) : osgViewer::InteractiveImageHandler(), luna_wrapper_base(L) {};
	wrapper_osgViewer_InteractiveImageHandler(lua_State* L, lua_Table* dum, const osgViewer::InteractiveImageHandler & arg1, const osg::CopyOp & arg2 = osg::CopyOp::SHALLOW_COPY) : osgViewer::InteractiveImageHandler(arg1, arg2), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return InteractiveImageHandler::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return InteractiveImageHandler::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return InteractiveImageHandler::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return InteractiveImageHandler::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return InteractiveImageHandler::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return InteractiveImageHandler::releaseGLObjects(arg1);
	};

	// void osgGA::GUIEventHandler::event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	void event(osg::NodeVisitor * nv, osg::Drawable * drawable) {
		if(_obj.pushFunction("event")) {
			_obj.pushArg(nv);
			_obj.pushArg(drawable);
			return (_obj.callFunction<void>());
		}

		return InteractiveImageHandler::event(nv, drawable);
	};

	// void osgGA::GUIEventHandler::getUsage(osg::ApplicationUsage & arg1) const
	void getUsage(osg::ApplicationUsage & arg1) const {
		if(_obj.pushFunction("getUsage")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return InteractiveImageHandler::getUsage(arg1);
	};

	// void osgGA::GUIEventHandler::operator()(osg::Node * node, osg::NodeVisitor * nv)
	void operator()(osg::Node * node, osg::NodeVisitor * nv) {
		if(_obj.pushFunction("op_call")) {
			_obj.pushArg(node);
			_obj.pushArg(nv);
			return (_obj.callFunction<void>());
		}

		return InteractiveImageHandler::operator()(node, nv);
	};

	// osg::Object * osgViewer::InteractiveImageHandler::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return InteractiveImageHandler::cloneType();
	};

	// osg::Object * osgViewer::InteractiveImageHandler::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return InteractiveImageHandler::clone(arg1);
	};

	// bool osgViewer::InteractiveImageHandler::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return InteractiveImageHandler::isSameKindAs(obj);
	};

	// const char * osgViewer::InteractiveImageHandler::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return InteractiveImageHandler::libraryName();
	};

	// const char * osgViewer::InteractiveImageHandler::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return InteractiveImageHandler::className();
	};

	// bool osgViewer::InteractiveImageHandler::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa, osg::Object * arg3, osg::NodeVisitor * arg4)
	bool handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa, osg::Object * arg3, osg::NodeVisitor * arg4) {
		if(_obj.pushFunction("handle")) {
			_obj.pushArg(&ea);
			_obj.pushArg(&aa);
			_obj.pushArg(arg3);
			_obj.pushArg(arg4);
			return (_obj.callFunction<bool>());
		}

		return InteractiveImageHandler::handle(ea, aa, arg3, arg4);
	};

	// bool osgViewer::InteractiveImageHandler::cull(osg::NodeVisitor * nv, osg::Drawable * drawable, osg::RenderInfo * renderInfo) const
	bool cull(osg::NodeVisitor * nv, osg::Drawable * drawable, osg::RenderInfo * renderInfo) const {
		if(_obj.pushFunction("cull")) {
			_obj.pushArg(nv);
			_obj.pushArg(drawable);
			_obj.pushArg(renderInfo);
			return (_obj.callFunction<bool>());
		}

		return InteractiveImageHandler::cull(nv, drawable, renderInfo);
	};




// bool osgViewer::InteractiveImageHandler::mousePosition(osgViewer::View * view, osg::NodeVisitor * nv, const osgGA::GUIEventAdapter & ea, int & x, int & y) const
bool public_mousePosition(osgViewer::View * view, osg::NodeVisitor * nv, const osgGA::GUIEventAdapter & ea, int & x, int & y) const {
	return osgViewer::InteractiveImageHandler::mousePosition(view, nv, ea, x, y);
};

// bool osgViewer::InteractiveImageHandler::computeIntersections(osgViewer::View * view, float x, float y, const osg::NodePath & nodePath, osgUtil::LineSegmentIntersector::Intersections & intersections, unsigned int traversalMask = 0xffffffff) const
bool public_computeIntersections(osgViewer::View * view, float x, float y, const osg::NodePath & nodePath, osgUtil::LineSegmentIntersector::Intersections & intersections, unsigned int traversalMask = 0xffffffff) const {
	return osgViewer::InteractiveImageHandler::computeIntersections(view, x, y, nodePath, intersections, traversalMask);
};

// void osgViewer::InteractiveImageHandler::resize(int width, int height)
void public_resize(int width, int height) {
	return osgViewer::InteractiveImageHandler::resize(width, height);
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


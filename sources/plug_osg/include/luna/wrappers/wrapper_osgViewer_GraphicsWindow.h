#ifndef _WRAPPERS_WRAPPER_OSGVIEWER_GRAPHICSWINDOW_H_
#define _WRAPPERS_WRAPPER_OSGVIEWER_GRAPHICSWINDOW_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgViewer/GraphicsWindow>

class wrapper_osgViewer_GraphicsWindow : public osgViewer::GraphicsWindow, public luna_wrapper_base {

public:
		

	~wrapper_osgViewer_GraphicsWindow() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgViewer_GraphicsWindow(lua_State* L, lua_Table* dum) : osgViewer::GraphicsWindow(), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return GraphicsWindow::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return GraphicsWindow::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::releaseGLObjects(arg1);
	};

	// void osg::GraphicsContext::clear()
	void clear() {
		if(_obj.pushFunction("clear")) {
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::clear();
	};

	// void osg::GraphicsContext::resizedImplementation(int x, int y, int width, int height)
	void resizedImplementation(int x, int y, int width, int height) {
		if(_obj.pushFunction("resizedImplementation")) {
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(width);
			_obj.pushArg(height);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::resizedImplementation(x, y, width, height);
	};

	// osg::View * osgGA::GUIActionAdapter::asView()
	osg::View * asView() {
		if(_obj.pushFunction("asView")) {
			return (_obj.callFunction<osg::View*>());
		}

		return GraphicsWindow::asView();
	};

	// const char * osgViewer::GraphicsWindow::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return GraphicsWindow::libraryName();
	};

	// const char * osgViewer::GraphicsWindow::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return GraphicsWindow::className();
	};

	// void osgViewer::GraphicsWindow::checkEvents()
	void checkEvents() {
		if(_obj.pushFunction("checkEvents")) {
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::checkEvents();
	};

	// bool osgViewer::GraphicsWindow::setWindowRectangleImplementation(int arg1, int arg2, int arg3, int arg4)
	bool setWindowRectangleImplementation(int arg1, int arg2, int arg3, int arg4) {
		if(_obj.pushFunction("setWindowRectangleImplementation")) {
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			_obj.pushArg(arg3);
			_obj.pushArg(arg4);
			return (_obj.callFunction<bool>());
		}

		return GraphicsWindow::setWindowRectangleImplementation(arg1, arg2, arg3, arg4);
	};

	// void osgViewer::GraphicsWindow::getWindowRectangle(int & x, int & y, int & width, int & height)
	void getWindowRectangle(int & x, int & y, int & width, int & height) {
		if(_obj.pushFunction("getWindowRectangle")) {
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(width);
			_obj.pushArg(height);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::getWindowRectangle(x, y, width, height);
	};

	// bool osgViewer::GraphicsWindow::setWindowDecorationImplementation(bool arg1)
	bool setWindowDecorationImplementation(bool arg1) {
		if(_obj.pushFunction("setWindowDecorationImplementation")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<bool>());
		}

		return GraphicsWindow::setWindowDecorationImplementation(arg1);
	};

	// bool osgViewer::GraphicsWindow::getWindowDecoration() const
	bool getWindowDecoration() const {
		if(_obj.pushFunction("getWindowDecoration")) {
			return (_obj.callFunction<bool>());
		}

		return GraphicsWindow::getWindowDecoration();
	};

	// void osgViewer::GraphicsWindow::grabFocus()
	void grabFocus() {
		if(_obj.pushFunction("grabFocus")) {
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::grabFocus();
	};

	// void osgViewer::GraphicsWindow::grabFocusIfPointerInWindow()
	void grabFocusIfPointerInWindow() {
		if(_obj.pushFunction("grabFocusIfPointerInWindow")) {
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::grabFocusIfPointerInWindow();
	};

	// void osgViewer::GraphicsWindow::raiseWindow()
	void raiseWindow() {
		if(_obj.pushFunction("raiseWindow")) {
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::raiseWindow();
	};

	// void osgViewer::GraphicsWindow::setWindowName(const std::string & arg1)
	void setWindowName(const std::string & arg1) {
		if(_obj.pushFunction("setWindowName")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::setWindowName(arg1);
	};

	// std::string osgViewer::GraphicsWindow::getWindowName()
	std::string getWindowName() {
		if(_obj.pushFunction("getWindowName")) {
			return (_obj.callFunction<std::string>());
		}

		return GraphicsWindow::getWindowName();
	};

	// void osgViewer::GraphicsWindow::useCursor(bool cursorOn)
	void useCursor(bool cursorOn) {
		if(_obj.pushFunction("useCursor")) {
			_obj.pushArg(cursorOn);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::useCursor(cursorOn);
	};

	// void osgViewer::GraphicsWindow::setCursor(osgViewer::GraphicsWindow::MouseCursor arg1)
	void setCursor(osgViewer::GraphicsWindow::MouseCursor arg1) {
		if(_obj.pushFunction("setCursor")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::setCursor(arg1);
	};

	// void osgViewer::GraphicsWindow::setSyncToVBlank(bool on)
	void setSyncToVBlank(bool on) {
		if(_obj.pushFunction("setSyncToVBlank")) {
			_obj.pushArg(on);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::setSyncToVBlank(on);
	};

	// void osgViewer::GraphicsWindow::setSwapGroup(bool on, unsigned int group, unsigned int barrier)
	void setSwapGroup(bool on, unsigned int group, unsigned int barrier) {
		if(_obj.pushFunction("setSwapGroup")) {
			_obj.pushArg(on);
			_obj.pushArg(group);
			_obj.pushArg(barrier);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::setSwapGroup(on, group, barrier);
	};

	// bool osgViewer::GraphicsWindow::valid() const
	bool valid() const {
		if(_obj.pushFunction("valid")) {
			return (_obj.callFunction<bool>());
		}

		return GraphicsWindow::valid();
	};

	// bool osgViewer::GraphicsWindow::realizeImplementation()
	bool realizeImplementation() {
		if(_obj.pushFunction("realizeImplementation")) {
			return (_obj.callFunction<bool>());
		}

		return GraphicsWindow::realizeImplementation();
	};

	// bool osgViewer::GraphicsWindow::isRealizedImplementation() const
	bool isRealizedImplementation() const {
		if(_obj.pushFunction("isRealizedImplementation")) {
			return (_obj.callFunction<bool>());
		}

		return GraphicsWindow::isRealizedImplementation();
	};

	// void osgViewer::GraphicsWindow::closeImplementation()
	void closeImplementation() {
		if(_obj.pushFunction("closeImplementation")) {
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::closeImplementation();
	};

	// bool osgViewer::GraphicsWindow::makeCurrentImplementation()
	bool makeCurrentImplementation() {
		if(_obj.pushFunction("makeCurrentImplementation")) {
			return (_obj.callFunction<bool>());
		}

		return GraphicsWindow::makeCurrentImplementation();
	};

	// bool osgViewer::GraphicsWindow::releaseContextImplementation()
	bool releaseContextImplementation() {
		if(_obj.pushFunction("releaseContextImplementation")) {
			return (_obj.callFunction<bool>());
		}

		return GraphicsWindow::releaseContextImplementation();
	};

	// void osgViewer::GraphicsWindow::bindPBufferToTextureImplementation(unsigned int arg1)
	void bindPBufferToTextureImplementation(unsigned int arg1) {
		if(_obj.pushFunction("bindPBufferToTextureImplementation")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::bindPBufferToTextureImplementation(arg1);
	};

	// void osgViewer::GraphicsWindow::swapBuffersImplementation()
	void swapBuffersImplementation() {
		if(_obj.pushFunction("swapBuffersImplementation")) {
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::swapBuffersImplementation();
	};

	// void osgViewer::GraphicsWindow::requestRedraw()
	void requestRedraw() {
		if(_obj.pushFunction("requestRedraw")) {
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::requestRedraw();
	};

	// void osgViewer::GraphicsWindow::requestContinuousUpdate(bool needed = true)
	void requestContinuousUpdate(bool needed = true) {
		if(_obj.pushFunction("requestContinuousUpdate")) {
			_obj.pushArg(needed);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::requestContinuousUpdate(needed);
	};

	// void osgViewer::GraphicsWindow::requestWarpPointer(float x, float y)
	void requestWarpPointer(float x, float y) {
		if(_obj.pushFunction("requestWarpPointer")) {
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::requestWarpPointer(x, y);
	};


protected:
	// osg::Object * osg::GraphicsContext::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return GraphicsWindow::cloneType();
	};

	// osg::Object * osg::GraphicsContext::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return GraphicsWindow::clone(arg1);
	};

public:
// void osg::GraphicsContext::addCamera(osg::Camera * camera)
void public_addCamera(osg::Camera * camera) {
	return osg::GraphicsContext::addCamera(camera);
};

// void osg::GraphicsContext::removeCamera(osg::Camera * camera)
void public_removeCamera(osg::Camera * camera) {
	return osg::GraphicsContext::removeCamera(camera);
};

// static void osg::GraphicsContext::registerGraphicsContext(osg::GraphicsContext * gc)
static void public_registerGraphicsContext(osg::GraphicsContext * gc) {
	return osg::GraphicsContext::registerGraphicsContext(gc);
};

// static void osg::GraphicsContext::unregisterGraphicsContext(osg::GraphicsContext * gc)
static void public_unregisterGraphicsContext(osg::GraphicsContext * gc) {
	return osg::GraphicsContext::unregisterGraphicsContext(gc);
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


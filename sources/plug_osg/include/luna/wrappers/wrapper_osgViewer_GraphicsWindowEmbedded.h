#ifndef _WRAPPERS_WRAPPER_OSGVIEWER_GRAPHICSWINDOWEMBEDDED_H_
#define _WRAPPERS_WRAPPER_OSGVIEWER_GRAPHICSWINDOWEMBEDDED_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgViewer/GraphicsWindow>

class wrapper_osgViewer_GraphicsWindowEmbedded : public osgViewer::GraphicsWindowEmbedded {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgViewer_GraphicsWindowEmbedded(lua_State* L, lua_Table* dum, osg::GraphicsContext::Traits * traits = 0) : osgViewer::GraphicsWindowEmbedded(traits), _obj(L,-1) {};
	wrapper_osgViewer_GraphicsWindowEmbedded(lua_State* L, lua_Table* dum, int x, int y, int width, int height) : osgViewer::GraphicsWindowEmbedded(x, y, width, height), _obj(L,-1) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindowEmbedded::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return GraphicsWindowEmbedded::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindowEmbedded::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return GraphicsWindowEmbedded::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return GraphicsWindowEmbedded::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindowEmbedded::releaseGLObjects(arg1);
	};

	// void osg::GraphicsContext::clear()
	void clear() {
		if(_obj.pushFunction("clear")) {
			return (_obj.callFunction<void>());
		}

		return GraphicsWindowEmbedded::clear();
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

		return GraphicsWindowEmbedded::resizedImplementation(x, y, width, height);
	};

	// osg::View * osgGA::GUIActionAdapter::asView()
	osg::View * asView() {
		if(_obj.pushFunction("asView")) {
			return (_obj.callFunction<osg::View*>());
		}

		return GraphicsWindowEmbedded::asView();
	};

	// void osgViewer::GraphicsWindow::checkEvents()
	void checkEvents() {
		if(_obj.pushFunction("checkEvents")) {
			return (_obj.callFunction<void>());
		}

		return GraphicsWindowEmbedded::checkEvents();
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

		return GraphicsWindowEmbedded::setWindowRectangleImplementation(arg1, arg2, arg3, arg4);
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

		return GraphicsWindowEmbedded::getWindowRectangle(x, y, width, height);
	};

	// bool osgViewer::GraphicsWindow::setWindowDecorationImplementation(bool arg1)
	bool setWindowDecorationImplementation(bool arg1) {
		if(_obj.pushFunction("setWindowDecorationImplementation")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<bool>());
		}

		return GraphicsWindowEmbedded::setWindowDecorationImplementation(arg1);
	};

	// bool osgViewer::GraphicsWindow::getWindowDecoration() const
	bool getWindowDecoration() const {
		if(_obj.pushFunction("getWindowDecoration")) {
			return (_obj.callFunction<bool>());
		}

		return GraphicsWindowEmbedded::getWindowDecoration();
	};

	// void osgViewer::GraphicsWindow::setWindowName(const std::string & arg1)
	void setWindowName(const std::string & arg1) {
		if(_obj.pushFunction("setWindowName")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindowEmbedded::setWindowName(arg1);
	};

	// std::string osgViewer::GraphicsWindow::getWindowName()
	std::string getWindowName() {
		if(_obj.pushFunction("getWindowName")) {
			return (_obj.callFunction<std::string>());
		}

		return GraphicsWindowEmbedded::getWindowName();
	};

	// void osgViewer::GraphicsWindow::useCursor(bool cursorOn)
	void useCursor(bool cursorOn) {
		if(_obj.pushFunction("useCursor")) {
			_obj.pushArg(cursorOn);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindowEmbedded::useCursor(cursorOn);
	};

	// void osgViewer::GraphicsWindow::setCursor(osgViewer::GraphicsWindow::MouseCursor arg1)
	void setCursor(osgViewer::GraphicsWindow::MouseCursor arg1) {
		if(_obj.pushFunction("setCursor")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindowEmbedded::setCursor(arg1);
	};

	// void osgViewer::GraphicsWindow::setSyncToVBlank(bool on)
	void setSyncToVBlank(bool on) {
		if(_obj.pushFunction("setSyncToVBlank")) {
			_obj.pushArg(on);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindowEmbedded::setSyncToVBlank(on);
	};

	// void osgViewer::GraphicsWindow::setSwapGroup(bool on, unsigned int group, unsigned int barrier)
	void setSwapGroup(bool on, unsigned int group, unsigned int barrier) {
		if(_obj.pushFunction("setSwapGroup")) {
			_obj.pushArg(on);
			_obj.pushArg(group);
			_obj.pushArg(barrier);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindowEmbedded::setSwapGroup(on, group, barrier);
	};

	// void osgViewer::GraphicsWindow::bindPBufferToTextureImplementation(unsigned int arg1)
	void bindPBufferToTextureImplementation(unsigned int arg1) {
		if(_obj.pushFunction("bindPBufferToTextureImplementation")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindowEmbedded::bindPBufferToTextureImplementation(arg1);
	};

	// void osgViewer::GraphicsWindow::requestRedraw()
	void requestRedraw() {
		if(_obj.pushFunction("requestRedraw")) {
			return (_obj.callFunction<void>());
		}

		return GraphicsWindowEmbedded::requestRedraw();
	};

	// void osgViewer::GraphicsWindow::requestContinuousUpdate(bool needed = true)
	void requestContinuousUpdate(bool needed = true) {
		if(_obj.pushFunction("requestContinuousUpdate")) {
			_obj.pushArg(needed);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindowEmbedded::requestContinuousUpdate(needed);
	};

	// void osgViewer::GraphicsWindow::requestWarpPointer(float x, float y)
	void requestWarpPointer(float x, float y) {
		if(_obj.pushFunction("requestWarpPointer")) {
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindowEmbedded::requestWarpPointer(x, y);
	};

	// const char * osgViewer::GraphicsWindowEmbedded::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return GraphicsWindowEmbedded::libraryName();
	};

	// const char * osgViewer::GraphicsWindowEmbedded::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return GraphicsWindowEmbedded::className();
	};

	// bool osgViewer::GraphicsWindowEmbedded::valid() const
	bool valid() const {
		if(_obj.pushFunction("valid")) {
			return (_obj.callFunction<bool>());
		}

		return GraphicsWindowEmbedded::valid();
	};

	// bool osgViewer::GraphicsWindowEmbedded::realizeImplementation()
	bool realizeImplementation() {
		if(_obj.pushFunction("realizeImplementation")) {
			return (_obj.callFunction<bool>());
		}

		return GraphicsWindowEmbedded::realizeImplementation();
	};

	// bool osgViewer::GraphicsWindowEmbedded::isRealizedImplementation() const
	bool isRealizedImplementation() const {
		if(_obj.pushFunction("isRealizedImplementation")) {
			return (_obj.callFunction<bool>());
		}

		return GraphicsWindowEmbedded::isRealizedImplementation();
	};

	// void osgViewer::GraphicsWindowEmbedded::closeImplementation()
	void closeImplementation() {
		if(_obj.pushFunction("closeImplementation")) {
			return (_obj.callFunction<void>());
		}

		return GraphicsWindowEmbedded::closeImplementation();
	};

	// bool osgViewer::GraphicsWindowEmbedded::makeCurrentImplementation()
	bool makeCurrentImplementation() {
		if(_obj.pushFunction("makeCurrentImplementation")) {
			return (_obj.callFunction<bool>());
		}

		return GraphicsWindowEmbedded::makeCurrentImplementation();
	};

	// bool osgViewer::GraphicsWindowEmbedded::releaseContextImplementation()
	bool releaseContextImplementation() {
		if(_obj.pushFunction("releaseContextImplementation")) {
			return (_obj.callFunction<bool>());
		}

		return GraphicsWindowEmbedded::releaseContextImplementation();
	};

	// void osgViewer::GraphicsWindowEmbedded::swapBuffersImplementation()
	void swapBuffersImplementation() {
		if(_obj.pushFunction("swapBuffersImplementation")) {
			return (_obj.callFunction<void>());
		}

		return GraphicsWindowEmbedded::swapBuffersImplementation();
	};

	// void osgViewer::GraphicsWindowEmbedded::grabFocus()
	void grabFocus() {
		if(_obj.pushFunction("grabFocus")) {
			return (_obj.callFunction<void>());
		}

		return GraphicsWindowEmbedded::grabFocus();
	};

	// void osgViewer::GraphicsWindowEmbedded::grabFocusIfPointerInWindow()
	void grabFocusIfPointerInWindow() {
		if(_obj.pushFunction("grabFocusIfPointerInWindow")) {
			return (_obj.callFunction<void>());
		}

		return GraphicsWindowEmbedded::grabFocusIfPointerInWindow();
	};

	// void osgViewer::GraphicsWindowEmbedded::raiseWindow()
	void raiseWindow() {
		if(_obj.pushFunction("raiseWindow")) {
			return (_obj.callFunction<void>());
		}

		return GraphicsWindowEmbedded::raiseWindow();
	};


protected:
	// osg::Object * osg::GraphicsContext::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return GraphicsWindowEmbedded::cloneType();
	};

	// osg::Object * osg::GraphicsContext::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return GraphicsWindowEmbedded::clone(arg1);
	};


};




#endif


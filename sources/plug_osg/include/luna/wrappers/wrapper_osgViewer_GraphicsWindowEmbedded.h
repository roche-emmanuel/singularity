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

		return osg::Object::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return osg::Object::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return osg::Object::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return osg::Object::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return osg::Object::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return osg::Object::releaseGLObjects(arg1);
	};

	// void osg::GraphicsContext::clear()
	void clear() {
		if(_obj.pushFunction("clear")) {
			return (_obj.callFunction<void>());
		}

		return osg::GraphicsContext::clear();
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

		return osg::GraphicsContext::resizedImplementation(x, y, width, height);
	};

	// osg::View * osgGA::GUIActionAdapter::asView()
	osg::View * asView() {
		if(_obj.pushFunction("asView")) {
			return (_obj.callFunction<osg::View*>());
		}

		return osgGA::GUIActionAdapter::asView();
	};

	// void osgViewer::GraphicsWindow::checkEvents()
	void checkEvents() {
		if(_obj.pushFunction("checkEvents")) {
			return (_obj.callFunction<void>());
		}

		return osgViewer::GraphicsWindow::checkEvents();
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

		return osgViewer::GraphicsWindow::setWindowRectangleImplementation(arg1, arg2, arg3, arg4);
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

		return osgViewer::GraphicsWindow::getWindowRectangle(x, y, width, height);
	};

	// bool osgViewer::GraphicsWindow::setWindowDecorationImplementation(bool arg1)
	bool setWindowDecorationImplementation(bool arg1) {
		if(_obj.pushFunction("setWindowDecorationImplementation")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<bool>());
		}

		return osgViewer::GraphicsWindow::setWindowDecorationImplementation(arg1);
	};

	// bool osgViewer::GraphicsWindow::getWindowDecoration() const
	bool getWindowDecoration() const {
		if(_obj.pushFunction("getWindowDecoration")) {
			return (_obj.callFunction<bool>());
		}

		return osgViewer::GraphicsWindow::getWindowDecoration();
	};

	// void osgViewer::GraphicsWindow::setWindowName(const std::string & arg1)
	void setWindowName(const std::string & arg1) {
		if(_obj.pushFunction("setWindowName")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return osgViewer::GraphicsWindow::setWindowName(arg1);
	};

	// std::string osgViewer::GraphicsWindow::getWindowName()
	std::string getWindowName() {
		if(_obj.pushFunction("getWindowName")) {
			return (_obj.callFunction<std::string>());
		}

		return osgViewer::GraphicsWindow::getWindowName();
	};

	// void osgViewer::GraphicsWindow::useCursor(bool cursorOn)
	void useCursor(bool cursorOn) {
		if(_obj.pushFunction("useCursor")) {
			_obj.pushArg(cursorOn);
			return (_obj.callFunction<void>());
		}

		return osgViewer::GraphicsWindow::useCursor(cursorOn);
	};

	// void osgViewer::GraphicsWindow::setCursor(osgViewer::GraphicsWindow::MouseCursor arg1)
	void setCursor(osgViewer::GraphicsWindow::MouseCursor arg1) {
		if(_obj.pushFunction("setCursor")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return osgViewer::GraphicsWindow::setCursor(arg1);
	};

	// void osgViewer::GraphicsWindow::setSyncToVBlank(bool on)
	void setSyncToVBlank(bool on) {
		if(_obj.pushFunction("setSyncToVBlank")) {
			_obj.pushArg(on);
			return (_obj.callFunction<void>());
		}

		return osgViewer::GraphicsWindow::setSyncToVBlank(on);
	};

	// void osgViewer::GraphicsWindow::setSwapGroup(bool on, unsigned int group, unsigned int barrier)
	void setSwapGroup(bool on, unsigned int group, unsigned int barrier) {
		if(_obj.pushFunction("setSwapGroup")) {
			_obj.pushArg(on);
			_obj.pushArg(group);
			_obj.pushArg(barrier);
			return (_obj.callFunction<void>());
		}

		return osgViewer::GraphicsWindow::setSwapGroup(on, group, barrier);
	};

	// void osgViewer::GraphicsWindow::bindPBufferToTextureImplementation(unsigned int arg1)
	void bindPBufferToTextureImplementation(unsigned int arg1) {
		if(_obj.pushFunction("bindPBufferToTextureImplementation")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return osgViewer::GraphicsWindow::bindPBufferToTextureImplementation(arg1);
	};

	// void osgViewer::GraphicsWindow::requestRedraw()
	void requestRedraw() {
		if(_obj.pushFunction("requestRedraw")) {
			return (_obj.callFunction<void>());
		}

		return osgViewer::GraphicsWindow::requestRedraw();
	};

	// void osgViewer::GraphicsWindow::requestContinuousUpdate(bool needed = true)
	void requestContinuousUpdate(bool needed = true) {
		if(_obj.pushFunction("requestContinuousUpdate")) {
			_obj.pushArg(needed);
			return (_obj.callFunction<void>());
		}

		return osgViewer::GraphicsWindow::requestContinuousUpdate(needed);
	};

	// void osgViewer::GraphicsWindow::requestWarpPointer(float x, float y)
	void requestWarpPointer(float x, float y) {
		if(_obj.pushFunction("requestWarpPointer")) {
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return osgViewer::GraphicsWindow::requestWarpPointer(x, y);
	};

	// const char * osgViewer::GraphicsWindowEmbedded::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osgViewer::GraphicsWindowEmbedded::libraryName();
	};

	// const char * osgViewer::GraphicsWindowEmbedded::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osgViewer::GraphicsWindowEmbedded::className();
	};

	// bool osgViewer::GraphicsWindowEmbedded::valid() const
	bool valid() const {
		if(_obj.pushFunction("valid")) {
			return (_obj.callFunction<bool>());
		}

		return osgViewer::GraphicsWindowEmbedded::valid();
	};

	// bool osgViewer::GraphicsWindowEmbedded::realizeImplementation()
	bool realizeImplementation() {
		if(_obj.pushFunction("realizeImplementation")) {
			return (_obj.callFunction<bool>());
		}

		return osgViewer::GraphicsWindowEmbedded::realizeImplementation();
	};

	// bool osgViewer::GraphicsWindowEmbedded::isRealizedImplementation() const
	bool isRealizedImplementation() const {
		if(_obj.pushFunction("isRealizedImplementation")) {
			return (_obj.callFunction<bool>());
		}

		return osgViewer::GraphicsWindowEmbedded::isRealizedImplementation();
	};

	// void osgViewer::GraphicsWindowEmbedded::closeImplementation()
	void closeImplementation() {
		if(_obj.pushFunction("closeImplementation")) {
			return (_obj.callFunction<void>());
		}

		return osgViewer::GraphicsWindowEmbedded::closeImplementation();
	};

	// bool osgViewer::GraphicsWindowEmbedded::makeCurrentImplementation()
	bool makeCurrentImplementation() {
		if(_obj.pushFunction("makeCurrentImplementation")) {
			return (_obj.callFunction<bool>());
		}

		return osgViewer::GraphicsWindowEmbedded::makeCurrentImplementation();
	};

	// bool osgViewer::GraphicsWindowEmbedded::releaseContextImplementation()
	bool releaseContextImplementation() {
		if(_obj.pushFunction("releaseContextImplementation")) {
			return (_obj.callFunction<bool>());
		}

		return osgViewer::GraphicsWindowEmbedded::releaseContextImplementation();
	};

	// void osgViewer::GraphicsWindowEmbedded::swapBuffersImplementation()
	void swapBuffersImplementation() {
		if(_obj.pushFunction("swapBuffersImplementation")) {
			return (_obj.callFunction<void>());
		}

		return osgViewer::GraphicsWindowEmbedded::swapBuffersImplementation();
	};

	// void osgViewer::GraphicsWindowEmbedded::grabFocus()
	void grabFocus() {
		if(_obj.pushFunction("grabFocus")) {
			return (_obj.callFunction<void>());
		}

		return osgViewer::GraphicsWindowEmbedded::grabFocus();
	};

	// void osgViewer::GraphicsWindowEmbedded::grabFocusIfPointerInWindow()
	void grabFocusIfPointerInWindow() {
		if(_obj.pushFunction("grabFocusIfPointerInWindow")) {
			return (_obj.callFunction<void>());
		}

		return osgViewer::GraphicsWindowEmbedded::grabFocusIfPointerInWindow();
	};

	// void osgViewer::GraphicsWindowEmbedded::raiseWindow()
	void raiseWindow() {
		if(_obj.pushFunction("raiseWindow")) {
			return (_obj.callFunction<void>());
		}

		return osgViewer::GraphicsWindowEmbedded::raiseWindow();
	};


protected:
	// osg::Object * osg::GraphicsContext::cloneType() const
	// osg::Object * osg::GraphicsContext::clone(const osg::CopyOp & arg1) const

};




#endif


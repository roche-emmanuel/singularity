#ifndef _WRAPPERS_WRAPPER_OSGGA_GUIACTIONADAPTER_H_
#define _WRAPPERS_WRAPPER_OSGGA_GUIACTIONADAPTER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgGA/GUIActionAdapter>

class wrapper_osgGA_GUIActionAdapter : public osgGA::GUIActionAdapter {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgGA_GUIActionAdapter(lua_State* L, lua_Table* dum) : osgGA::GUIActionAdapter(), _obj(L,-1) {};

	// osg::View * osgGA::GUIActionAdapter::asView()
	osg::View * asView() {
		if(_obj.pushFunction("asView")) {
			return (_obj.callFunction<osg::View*>());
		}

		return osgGA::GUIActionAdapter::asView();
	};

	// void osgGA::GUIActionAdapter::requestRedraw()
	void requestRedraw() {
		THROW_IF(!_obj.pushFunction("requestRedraw"),"No implementation for abstract function osgGA::GUIActionAdapter::requestRedraw");
		return (_obj.callFunction<void>());
	};

	// void osgGA::GUIActionAdapter::requestContinuousUpdate(bool needed = true)
	void requestContinuousUpdate(bool needed = true) {
		THROW_IF(!_obj.pushFunction("requestContinuousUpdate"),"No implementation for abstract function osgGA::GUIActionAdapter::requestContinuousUpdate");
		_obj.pushArg(needed);
		return (_obj.callFunction<void>());
	};

	// void osgGA::GUIActionAdapter::requestWarpPointer(float x, float y)
	void requestWarpPointer(float x, float y) {
		THROW_IF(!_obj.pushFunction("requestWarpPointer"),"No implementation for abstract function osgGA::GUIActionAdapter::requestWarpPointer");
		_obj.pushArg(x);
		_obj.pushArg(y);
		return (_obj.callFunction<void>());
	};




};




#endif


#ifndef _WRAPPERS_WRAPPER_OSGVIEWER_SCENE_H_
#define _WRAPPERS_WRAPPER_OSGVIEWER_SCENE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgViewer/Scene>

class wrapper_osgViewer_Scene : public osgViewer::Scene {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgViewer_Scene(lua_State* L, lua_Table* dum) : osgViewer::Scene(), _obj(L,-1) {};

	// const char * osgViewer::Scene::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osgViewer::Scene::className();
	};




};




#endif


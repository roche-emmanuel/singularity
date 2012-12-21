#ifndef _WRAPPERS_WRAPPER_OSGVIEWER_SCENE_H_
#define _WRAPPERS_WRAPPER_OSGVIEWER_SCENE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgViewer/Scene>

class wrapper_osgViewer_Scene : public osgViewer::Scene, public luna_wrapper_base {

public:
		

	~wrapper_osgViewer_Scene() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgViewer_Scene(lua_State* L, lua_Table* dum) : osgViewer::Scene(), luna_wrapper_base(L) {};

	// const char * osgViewer::Scene::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return Scene::className();
	};




// static osgViewer::Scene * osgViewer::Scene::getOrCreateScene(osg::Node * node)
static osgViewer::Scene * public_getOrCreateScene(osg::Node * node) {
	return osgViewer::Scene::getOrCreateScene(node);
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


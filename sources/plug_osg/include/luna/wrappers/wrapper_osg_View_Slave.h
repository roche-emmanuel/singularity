#ifndef _WRAPPERS_WRAPPER_OSG_VIEW_SLAVE_H_
#define _WRAPPERS_WRAPPER_OSG_VIEW_SLAVE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/View>

class wrapper_osg_View_Slave : public osg::View::Slave {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_View_Slave(lua_State* L, lua_Table* dum, bool useMastersSceneData = true) : osg::View::Slave(useMastersSceneData), _obj(L,-1) {};
	wrapper_osg_View_Slave(lua_State* L, lua_Table* dum, osg::Camera * camera, const osg::Matrixd & projectionOffset, const osg::Matrixd & viewOffset, bool useMastersSceneData = true) : osg::View::Slave(camera, projectionOffset, viewOffset, useMastersSceneData), _obj(L,-1) {};
	wrapper_osg_View_Slave(lua_State* L, lua_Table* dum, const osg::View::Slave & rhs) : osg::View::Slave(rhs), _obj(L,-1) {};

	// void osg::View::Slave::updateSlaveImplementation(osg::View & view)
	void updateSlaveImplementation(osg::View & view) {
		if(_obj.pushFunction("updateSlaveImplementation")) {
			_obj.pushArg(&view);
			return (_obj.callFunction<void>());
		}

		return Slave::updateSlaveImplementation(view);
	};




};




#endif


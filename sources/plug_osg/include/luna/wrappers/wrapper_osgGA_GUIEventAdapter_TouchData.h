#ifndef _WRAPPERS_WRAPPER_OSGGA_GUIEVENTADAPTER_TOUCHDATA_H_
#define _WRAPPERS_WRAPPER_OSGGA_GUIEVENTADAPTER_TOUCHDATA_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgGA/GUIEventAdapter>

class wrapper_osgGA_GUIEventAdapter_TouchData : public osgGA::GUIEventAdapter::TouchData, public luna_wrapper_base {

public:
		

	~wrapper_osgGA_GUIEventAdapter_TouchData() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgGA_GUIEventAdapter_TouchData(lua_State* L, lua_Table* dum) : osgGA::GUIEventAdapter::TouchData(), luna_wrapper_base(L) {};




// void osgGA::GUIEventAdapter::TouchData::addTouchPoint(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y, unsigned int tap_count)
void public_addTouchPoint(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y, unsigned int tap_count) {
	return osgGA::GUIEventAdapter::TouchData::addTouchPoint(id, phase, x, y, tap_count);
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


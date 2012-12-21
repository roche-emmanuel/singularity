#ifndef _WRAPPERS_WRAPPER_OSGGA_EVENTQUEUE_H_
#define _WRAPPERS_WRAPPER_OSGGA_EVENTQUEUE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgGA/EventQueue>

class wrapper_osgGA_EventQueue : public osgGA::EventQueue, public luna_wrapper_base {

public:
		

	~wrapper_osgGA_EventQueue() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgGA_EventQueue(lua_State* L, lua_Table* dum, osgGA::GUIEventAdapter::MouseYOrientation mouseYOrientation = osgGA::GUIEventAdapter::Y_INCREASING_DOWNWARDS) : osgGA::EventQueue(mouseYOrientation), luna_wrapper_base(L) {};




// osgGA::EventQueue & osgGA::EventQueue::operator=(const osgGA::EventQueue & arg1)
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


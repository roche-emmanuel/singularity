#ifndef _WRAPPERS_WRAPPER_OSGGA_EVENTQUEUE_H_
#define _WRAPPERS_WRAPPER_OSGGA_EVENTQUEUE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgGA/EventQueue>

class wrapper_osgGA_EventQueue : public osgGA::EventQueue {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgGA_EventQueue(lua_State* L, lua_Table* dum, osgGA::GUIEventAdapter::MouseYOrientation mouseYOrientation = osgGA::GUIEventAdapter::Y_INCREASING_DOWNWARDS) : osgGA::EventQueue(mouseYOrientation), _obj(L,-1) {};




};




#endif


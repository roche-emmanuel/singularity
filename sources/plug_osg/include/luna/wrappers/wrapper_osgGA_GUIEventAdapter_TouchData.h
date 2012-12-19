#ifndef _WRAPPERS_WRAPPER_OSGGA_GUIEVENTADAPTER_TOUCHDATA_H_
#define _WRAPPERS_WRAPPER_OSGGA_GUIEVENTADAPTER_TOUCHDATA_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgGA/GUIEventAdapter>

class wrapper_osgGA_GUIEventAdapter_TouchData : public osgGA::GUIEventAdapter::TouchData, public luna_wrapper_base {

public:
	

	wrapper_osgGA_GUIEventAdapter_TouchData(lua_State* L, lua_Table* dum) : osgGA::GUIEventAdapter::TouchData(), luna_wrapper_base(L) {};




};




#endif


#ifndef _WRAPPERS_WRAPPER_OSG_DISPLAYSETTINGS_H_
#define _WRAPPERS_WRAPPER_OSG_DISPLAYSETTINGS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/DisplaySettings>

class wrapper_osg_DisplaySettings : public osg::DisplaySettings, public luna_wrapper_base {

public:
	

	wrapper_osg_DisplaySettings(lua_State* L, lua_Table* dum) : osg::DisplaySettings(), luna_wrapper_base(L) {};
	wrapper_osg_DisplaySettings(lua_State* L, lua_Table* dum, osg::ArgumentParser & arguments) : osg::DisplaySettings(arguments), luna_wrapper_base(L) {};
	wrapper_osg_DisplaySettings(lua_State* L, lua_Table* dum, const osg::DisplaySettings & vs) : osg::DisplaySettings(vs), luna_wrapper_base(L) {};




};




#endif


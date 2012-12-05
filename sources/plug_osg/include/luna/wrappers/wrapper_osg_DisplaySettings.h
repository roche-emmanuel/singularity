#ifndef _WRAPPERS_WRAPPER_OSG_DISPLAYSETTINGS_H_
#define _WRAPPERS_WRAPPER_OSG_DISPLAYSETTINGS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/DisplaySettings>

class wrapper_osg_DisplaySettings : public osg::DisplaySettings {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_DisplaySettings(lua_State* L, lua_Table* dum) : osg::DisplaySettings(), _obj(L,-1) {};
	wrapper_osg_DisplaySettings(lua_State* L, lua_Table* dum, osg::ArgumentParser & arguments) : osg::DisplaySettings(arguments), _obj(L,-1) {};
	wrapper_osg_DisplaySettings(lua_State* L, lua_Table* dum, const osg::DisplaySettings & vs) : osg::DisplaySettings(vs), _obj(L,-1) {};




};




#endif


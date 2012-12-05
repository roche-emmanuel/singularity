#ifndef _WRAPPERS_WRAPPER_OSG_STATS_H_
#define _WRAPPERS_WRAPPER_OSG_STATS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Stats>

class wrapper_osg_Stats : public osg::Stats {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_Stats(lua_State* L, lua_Table* dum, const std::string & name) : osg::Stats(name), _obj(L,-1) {};
	wrapper_osg_Stats(lua_State* L, lua_Table* dum, const std::string & name, unsigned int numberOfFrames) : osg::Stats(name, numberOfFrames), _obj(L,-1) {};




};




#endif


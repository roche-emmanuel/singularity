#ifndef _WRAPPERS_WRAPPER_OSG_STATS_H_
#define _WRAPPERS_WRAPPER_OSG_STATS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Stats>

class wrapper_osg_Stats : public osg::Stats, public luna_wrapper_base {

public:
		

	~wrapper_osg_Stats() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_Stats(lua_State* L, lua_Table* dum, const std::string & name) : osg::Stats(name), luna_wrapper_base(L) {};
	wrapper_osg_Stats(lua_State* L, lua_Table* dum, const std::string & name, unsigned int numberOfFrames) : osg::Stats(name, numberOfFrames), luna_wrapper_base(L) {};




};




#endif


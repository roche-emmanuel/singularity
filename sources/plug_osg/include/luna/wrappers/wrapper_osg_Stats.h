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




// int osg::Stats::getIndex(unsigned int frameNumber) const
int public_getIndex(unsigned int frameNumber) const {
	return osg::Stats::getIndex(frameNumber);
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


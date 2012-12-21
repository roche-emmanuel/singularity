#ifndef _WRAPPERS_WRAPPER_OSG_APPLICATIONUSAGE_H_
#define _WRAPPERS_WRAPPER_OSG_APPLICATIONUSAGE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/ApplicationUsage>

class wrapper_osg_ApplicationUsage : public osg::ApplicationUsage, public luna_wrapper_base {

public:
		

	~wrapper_osg_ApplicationUsage() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_ApplicationUsage(lua_State* L, lua_Table* dum) : osg::ApplicationUsage(), luna_wrapper_base(L) {};
	wrapper_osg_ApplicationUsage(lua_State* L, lua_Table* dum, const std::string & commandLineUsage) : osg::ApplicationUsage(commandLineUsage), luna_wrapper_base(L) {};




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


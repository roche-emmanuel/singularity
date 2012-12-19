#ifndef _WRAPPERS_WRAPPER_OSG_REFERENCED_H_
#define _WRAPPERS_WRAPPER_OSG_REFERENCED_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Referenced>

class wrapper_osg_Referenced : public osg::Referenced, public luna_wrapper_base {

public:
	

	wrapper_osg_Referenced(lua_State* L, lua_Table* dum) : osg::Referenced(), luna_wrapper_base(L) {};
	wrapper_osg_Referenced(lua_State* L, lua_Table* dum, bool threadSafeRefUnref) : osg::Referenced(threadSafeRefUnref), luna_wrapper_base(L) {};
	wrapper_osg_Referenced(lua_State* L, lua_Table* dum, const osg::Referenced & arg1) : osg::Referenced(arg1), luna_wrapper_base(L) {};

	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return Referenced::setThreadSafeRefUnref(threadSafe);
	};




};




#endif


#ifndef _WRAPPERS_WRAPPER_OSG_REFERENCED_H_
#define _WRAPPERS_WRAPPER_OSG_REFERENCED_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Referenced>

class wrapper_osg_Referenced : public osg::Referenced {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_Referenced(lua_State* L, lua_Table* dum) : osg::Referenced(), _obj(L,-1) {};
	wrapper_osg_Referenced(lua_State* L, lua_Table* dum, bool threadSafeRefUnref) : osg::Referenced(threadSafeRefUnref), _obj(L,-1) {};
	wrapper_osg_Referenced(lua_State* L, lua_Table* dum, const osg::Referenced & arg1) : osg::Referenced(arg1), _obj(L,-1) {};

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


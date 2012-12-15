#ifndef _WRAPPERS_WRAPPER_SGT_REFERENCED_H_
#define _WRAPPERS_WRAPPER_SGT_REFERENCED_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <base/Referenced.h>

class wrapper_sgt_Referenced : public sgt::Referenced {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_sgt_Referenced(lua_State* L, lua_Table* dum) : sgt::Referenced(), _obj(L,-1) {};

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


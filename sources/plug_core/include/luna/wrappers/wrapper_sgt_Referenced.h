#ifndef _WRAPPERS_WRAPPER_SGT_REFERENCED_H_
#define _WRAPPERS_WRAPPER_SGT_REFERENCED_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <base/Referenced.h>

class wrapper_sgt_Referenced : public sgt::Referenced, public luna_wrapper_base {

public:
		

	~wrapper_sgt_Referenced() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_sgt_Referenced(lua_State* L, lua_Table* dum) : sgt::Referenced(), luna_wrapper_base(L) {};

	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return Referenced::setThreadSafeRefUnref(threadSafe);
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


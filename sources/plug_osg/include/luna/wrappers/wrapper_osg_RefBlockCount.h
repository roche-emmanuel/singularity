#ifndef _WRAPPERS_WRAPPER_OSG_REFBLOCKCOUNT_H_
#define _WRAPPERS_WRAPPER_OSG_REFBLOCKCOUNT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/OperationThread>

class wrapper_osg_RefBlockCount : public osg::RefBlockCount, public luna_wrapper_base {

public:
		

	~wrapper_osg_RefBlockCount() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_RefBlockCount(lua_State* L, lua_Table* dum, unsigned int blockCount) : osg::RefBlockCount(blockCount), luna_wrapper_base(L) {};




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


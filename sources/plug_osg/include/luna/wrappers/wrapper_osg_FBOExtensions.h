#ifndef _WRAPPERS_WRAPPER_OSG_FBOEXTENSIONS_H_
#define _WRAPPERS_WRAPPER_OSG_FBOEXTENSIONS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/FrameBufferObject>

class wrapper_osg_FBOExtensions : public osg::FBOExtensions, public luna_wrapper_base {

public:
		

	~wrapper_osg_FBOExtensions() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_FBOExtensions(lua_State* L, lua_Table* dum, unsigned int contextID) : osg::FBOExtensions(contextID), luna_wrapper_base(L) {};




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


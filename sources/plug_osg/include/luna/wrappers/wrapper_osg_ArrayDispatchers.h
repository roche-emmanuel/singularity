#ifndef _WRAPPERS_WRAPPER_OSG_ARRAYDISPATCHERS_H_
#define _WRAPPERS_WRAPPER_OSG_ARRAYDISPATCHERS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/ArrayDispatchers>

class wrapper_osg_ArrayDispatchers : public osg::ArrayDispatchers, public luna_wrapper_base {

public:
		

	~wrapper_osg_ArrayDispatchers() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_ArrayDispatchers(lua_State* L, lua_Table* dum) : osg::ArrayDispatchers(), luna_wrapper_base(L) {};




// void osg::ArrayDispatchers::init()
void public_init() {
	return osg::ArrayDispatchers::init();
};

// void osg::ArrayDispatchers::assignTexCoordDispatchers(unsigned int unit)
void public_assignTexCoordDispatchers(unsigned int unit) {
	return osg::ArrayDispatchers::assignTexCoordDispatchers(unit);
};

// void osg::ArrayDispatchers::assignVertexAttribDispatchers(unsigned int unit)
void public_assignVertexAttribDispatchers(unsigned int unit) {
	return osg::ArrayDispatchers::assignVertexAttribDispatchers(unit);
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


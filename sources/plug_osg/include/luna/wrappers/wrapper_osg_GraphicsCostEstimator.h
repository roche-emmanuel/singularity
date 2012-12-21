#ifndef _WRAPPERS_WRAPPER_OSG_GRAPHICSCOSTESTIMATOR_H_
#define _WRAPPERS_WRAPPER_OSG_GRAPHICSCOSTESTIMATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/GraphicsCostEstimator>

class wrapper_osg_GraphicsCostEstimator : public osg::GraphicsCostEstimator, public luna_wrapper_base {

public:
		

	~wrapper_osg_GraphicsCostEstimator() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_GraphicsCostEstimator(lua_State* L, lua_Table* dum) : osg::GraphicsCostEstimator(), luna_wrapper_base(L) {};




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


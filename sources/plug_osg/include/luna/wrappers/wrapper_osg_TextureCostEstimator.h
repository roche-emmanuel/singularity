#ifndef _WRAPPERS_WRAPPER_OSG_TEXTURECOSTESTIMATOR_H_
#define _WRAPPERS_WRAPPER_OSG_TEXTURECOSTESTIMATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/GraphicsCostEstimator>

class wrapper_osg_TextureCostEstimator : public osg::TextureCostEstimator, public luna_wrapper_base {

public:
		

	~wrapper_osg_TextureCostEstimator() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_TextureCostEstimator(lua_State* L, lua_Table* dum) : osg::TextureCostEstimator(), luna_wrapper_base(L) {};




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


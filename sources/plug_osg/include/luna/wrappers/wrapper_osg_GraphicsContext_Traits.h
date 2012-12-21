#ifndef _WRAPPERS_WRAPPER_OSG_GRAPHICSCONTEXT_TRAITS_H_
#define _WRAPPERS_WRAPPER_OSG_GRAPHICSCONTEXT_TRAITS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/GraphicsContext>

class wrapper_osg_GraphicsContext_Traits : public osg::GraphicsContext::Traits, public luna_wrapper_base {

public:
		

	~wrapper_osg_GraphicsContext_Traits() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_GraphicsContext_Traits(lua_State* L, lua_Table* dum, osg::DisplaySettings * ds = 0) : osg::GraphicsContext::Traits(ds), luna_wrapper_base(L) {};




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


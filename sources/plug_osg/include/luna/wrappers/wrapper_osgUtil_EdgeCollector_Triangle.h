#ifndef _WRAPPERS_WRAPPER_OSGUTIL_EDGECOLLECTOR_TRIANGLE_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_EDGECOLLECTOR_TRIANGLE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/EdgeCollector>

class wrapper_osgUtil_EdgeCollector_Triangle : public osgUtil::EdgeCollector::Triangle, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_EdgeCollector_Triangle() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_EdgeCollector_Triangle(lua_State* L, lua_Table* dum) : osgUtil::EdgeCollector::Triangle(), luna_wrapper_base(L) {};




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


#ifndef _WRAPPERS_WRAPPER_OSGUTIL_EDGECOLLECTOR_EDGE_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_EDGECOLLECTOR_EDGE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/EdgeCollector>

class wrapper_osgUtil_EdgeCollector_Edge : public osgUtil::EdgeCollector::Edge, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_EdgeCollector_Edge() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	




};




#endif


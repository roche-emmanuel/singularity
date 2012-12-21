#ifndef _WRAPPERS_WRAPPER_OSG_OBSERVER_H_
#define _WRAPPERS_WRAPPER_OSG_OBSERVER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Observer>

class wrapper_osg_Observer : public osg::Observer, public luna_wrapper_base {

public:
		

	~wrapper_osg_Observer() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_Observer(lua_State* L, lua_Table* dum) : osg::Observer(), luna_wrapper_base(L) {};

	// void osg::Observer::objectDeleted(void * arg1)
	void objectDeleted(void * arg1) {
		if(_obj.pushFunction("objectDeleted")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return Observer::objectDeleted(arg1);
	};





};




#endif


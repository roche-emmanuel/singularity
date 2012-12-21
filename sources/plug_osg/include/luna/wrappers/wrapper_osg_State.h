#ifndef _WRAPPERS_WRAPPER_OSG_STATE_H_
#define _WRAPPERS_WRAPPER_OSG_STATE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/State>

class wrapper_osg_State : public osg::State, public luna_wrapper_base {

public:
		

	~wrapper_osg_State() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_State(lua_State* L, lua_Table* dum) : osg::State(), luna_wrapper_base(L) {};

	// void osg::State::objectDeleted(void * arg1)
	void objectDeleted(void * arg1) {
		if(_obj.pushFunction("objectDeleted")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return State::objectDeleted(arg1);
	};

	// void osg::State::frameCompleted()
	void frameCompleted() {
		if(_obj.pushFunction("frameCompleted")) {
			return (_obj.callFunction<void>());
		}

		return State::frameCompleted();
	};




};




#endif


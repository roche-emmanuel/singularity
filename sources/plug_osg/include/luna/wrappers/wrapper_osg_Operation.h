#ifndef _WRAPPERS_WRAPPER_OSG_OPERATION_H_
#define _WRAPPERS_WRAPPER_OSG_OPERATION_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/OperationThread>

class wrapper_osg_Operation : public osg::Operation, public luna_wrapper_base {

public:
		

	~wrapper_osg_Operation() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_Operation(lua_State* L, lua_Table* dum, const std::string & name, bool keep) : osg::Operation(name, keep), luna_wrapper_base(L) {};
	wrapper_osg_Operation(lua_State* L, lua_Table* dum) : osg::Operation(), luna_wrapper_base(L) {};
	wrapper_osg_Operation(lua_State* L, lua_Table* dum, const osg::Operation & op) : osg::Operation(op), luna_wrapper_base(L) {};

	// void osg::Operation::release()
	void release() {
		if(_obj.pushFunction("release")) {
			return (_obj.callFunction<void>());
		}

		return Operation::release();
	};

	// void osg::Operation::operator()(osg::Object * arg1)
	void operator()(osg::Object * arg1) {
		THROW_IF(!_obj.pushFunction("op_call"),"No implementation for abstract function osg::Operation::operator()");
		_obj.pushArg(arg1);
		return (_obj.callFunction<void>());
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


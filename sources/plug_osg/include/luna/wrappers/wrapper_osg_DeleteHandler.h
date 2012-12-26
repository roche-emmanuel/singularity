#ifndef _WRAPPERS_WRAPPER_OSG_DELETEHANDLER_H_
#define _WRAPPERS_WRAPPER_OSG_DELETEHANDLER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/DeleteHandler>

class wrapper_osg_DeleteHandler : public osg::DeleteHandler, public luna_wrapper_base {

public:
		

	~wrapper_osg_DeleteHandler() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_DeleteHandler(lua_State* L, lua_Table* dum, int numberOfFramesToRetainObjects = 0) : osg::DeleteHandler(numberOfFramesToRetainObjects), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osg_DeleteHandler(lua_State* L, lua_Table* dum, const osg::DeleteHandler & arg1) : osg::DeleteHandler(arg1), luna_wrapper_base(L) { register_protected_methods(L); };

	// Public virtual methods:
	// void osg::DeleteHandler::flush()
	void flush() {
		if(_obj.pushFunction("flush")) {
			return (_obj.callFunction<void>());
		}

		return DeleteHandler::flush();
	};

	// void osg::DeleteHandler::flushAll()
	void flushAll() {
		if(_obj.pushFunction("flushAll")) {
			return (_obj.callFunction<void>());
		}

		return DeleteHandler::flushAll();
	};

	// void osg::DeleteHandler::requestDelete(const osg::Referenced * object)
	void requestDelete(const osg::Referenced * object) {
		if(_obj.pushFunction("requestDelete")) {
			_obj.pushArg(object);
			return (_obj.callFunction<void>());
		}

		return DeleteHandler::requestDelete(object);
	};



	// Protected virtual methods:

	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


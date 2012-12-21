#ifndef _WRAPPERS_WRAPPER_OSGDB_INPUTEXCEPTION_H_
#define _WRAPPERS_WRAPPER_OSGDB_INPUTEXCEPTION_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/InputStream>

class wrapper_osgDB_InputException : public osgDB::InputException, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_InputException() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	




};




#endif


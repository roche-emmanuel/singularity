#ifndef _WRAPPERS_WRAPPER_OSGDB_OUTPUTEXCEPTION_H_
#define _WRAPPERS_WRAPPER_OSGDB_OUTPUTEXCEPTION_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/OutputStream>

class wrapper_osgDB_OutputException : public osgDB::OutputException, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_OutputException() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
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


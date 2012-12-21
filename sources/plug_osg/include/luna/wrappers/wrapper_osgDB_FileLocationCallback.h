#ifndef _WRAPPERS_WRAPPER_OSGDB_FILELOCATIONCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSGDB_FILELOCATIONCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/Callbacks>

class wrapper_osgDB_FileLocationCallback : public osgDB::FileLocationCallback, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_FileLocationCallback() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	

	// osgDB::FileLocationCallback::Location osgDB::FileLocationCallback::fileLocation(const std::string & filename, const osgDB::Options * options)
	osgDB::FileLocationCallback::Location fileLocation(const std::string & filename, const osgDB::Options * options) {
		THROW_IF(!_obj.pushFunction("fileLocation"),"No implementation for abstract function osgDB::FileLocationCallback::fileLocation");
		_obj.pushArg(filename);
		_obj.pushArg(options);
		return (osgDB::FileLocationCallback::Location)(_obj.callFunction<int>());
	};

	// bool osgDB::FileLocationCallback::useFileCache() const
	bool useFileCache() const {
		THROW_IF(!_obj.pushFunction("useFileCache"),"No implementation for abstract function osgDB::FileLocationCallback::useFileCache");
		return (_obj.callFunction<bool>());
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


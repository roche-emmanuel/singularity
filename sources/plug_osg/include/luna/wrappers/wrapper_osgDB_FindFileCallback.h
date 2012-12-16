#ifndef _WRAPPERS_WRAPPER_OSGDB_FINDFILECALLBACK_H_
#define _WRAPPERS_WRAPPER_OSGDB_FINDFILECALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/Callbacks>

class wrapper_osgDB_FindFileCallback : public osgDB::FindFileCallback, public luna_wrapper_base {

public:
	


	// std::string osgDB::FindFileCallback::findDataFile(const std::string & filename, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity)
	std::string findDataFile(const std::string & filename, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity) {
		if(_obj.pushFunction("findDataFile")) {
			_obj.pushArg(filename);
			_obj.pushArg(options);
			_obj.pushArg(caseSensitivity);
			return (_obj.callFunction<std::string>());
		}

		return FindFileCallback::findDataFile(filename, options, caseSensitivity);
	};

	// std::string osgDB::FindFileCallback::findLibraryFile(const std::string & filename, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity)
	std::string findLibraryFile(const std::string & filename, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity) {
		if(_obj.pushFunction("findLibraryFile")) {
			_obj.pushArg(filename);
			_obj.pushArg(options);
			_obj.pushArg(caseSensitivity);
			return (_obj.callFunction<std::string>());
		}

		return FindFileCallback::findLibraryFile(filename, options, caseSensitivity);
	};




};




#endif


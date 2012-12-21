#ifndef _WRAPPERS_WRAPPER_OSGDB_READFILECALLBACK_H_
#define _WRAPPERS_WRAPPER_OSGDB_READFILECALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/Callbacks>

class wrapper_osgDB_ReadFileCallback : public osgDB::ReadFileCallback, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_ReadFileCallback() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	

	// osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::openArchive(const std::string & filename, osgDB::ReaderWriter::ArchiveStatus status, unsigned int indexBlockSizeHint, const osgDB::Options * useObjectCache)
	osgDB::ReaderWriter::ReadResult openArchive(const std::string & filename, osgDB::ReaderWriter::ArchiveStatus status, unsigned int indexBlockSizeHint, const osgDB::Options * useObjectCache) {
		if(_obj.pushFunction("openArchive")) {
			_obj.pushArg(filename);
			_obj.pushArg(status);
			_obj.pushArg(indexBlockSizeHint);
			_obj.pushArg(useObjectCache);
			return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
		}

		return ReadFileCallback::openArchive(filename, status, indexBlockSizeHint, useObjectCache);
	};

	// osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::readObject(const std::string & filename, const osgDB::Options * options)
	osgDB::ReaderWriter::ReadResult readObject(const std::string & filename, const osgDB::Options * options) {
		if(_obj.pushFunction("readObject")) {
			_obj.pushArg(filename);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
		}

		return ReadFileCallback::readObject(filename, options);
	};

	// osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::readImage(const std::string & filename, const osgDB::Options * options)
	osgDB::ReaderWriter::ReadResult readImage(const std::string & filename, const osgDB::Options * options) {
		if(_obj.pushFunction("readImage")) {
			_obj.pushArg(filename);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
		}

		return ReadFileCallback::readImage(filename, options);
	};

	// osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::readHeightField(const std::string & filename, const osgDB::Options * options)
	osgDB::ReaderWriter::ReadResult readHeightField(const std::string & filename, const osgDB::Options * options) {
		if(_obj.pushFunction("readHeightField")) {
			_obj.pushArg(filename);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
		}

		return ReadFileCallback::readHeightField(filename, options);
	};

	// osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::readNode(const std::string & filename, const osgDB::Options * options)
	osgDB::ReaderWriter::ReadResult readNode(const std::string & filename, const osgDB::Options * options) {
		if(_obj.pushFunction("readNode")) {
			_obj.pushArg(filename);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
		}

		return ReadFileCallback::readNode(filename, options);
	};

	// osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::readShader(const std::string & filename, const osgDB::Options * options)
	osgDB::ReaderWriter::ReadResult readShader(const std::string & filename, const osgDB::Options * options) {
		if(_obj.pushFunction("readShader")) {
			_obj.pushArg(filename);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
		}

		return ReadFileCallback::readShader(filename, options);
	};




};




#endif


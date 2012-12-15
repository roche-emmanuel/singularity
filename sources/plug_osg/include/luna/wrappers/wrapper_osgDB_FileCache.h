#ifndef _WRAPPERS_WRAPPER_OSGDB_FILECACHE_H_
#define _WRAPPERS_WRAPPER_OSGDB_FILECACHE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/FileCache>

class wrapper_osgDB_FileCache : public osgDB::FileCache {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgDB_FileCache(lua_State* L, lua_Table* dum, const std::string & path) : osgDB::FileCache(path), _obj(L,-1) {};

	// bool osgDB::FileCache::isFileAppropriateForFileCache(const std::string & originalFileName) const
	bool isFileAppropriateForFileCache(const std::string & originalFileName) const {
		if(_obj.pushFunction("isFileAppropriateForFileCache")) {
			_obj.pushArg(originalFileName);
			return (_obj.callFunction<bool>());
		}

		return FileCache::isFileAppropriateForFileCache(originalFileName);
	};

	// std::string osgDB::FileCache::createCacheFileName(const std::string & originalFileName) const
	std::string createCacheFileName(const std::string & originalFileName) const {
		if(_obj.pushFunction("createCacheFileName")) {
			_obj.pushArg(originalFileName);
			return (_obj.callFunction<std::string>());
		}

		return FileCache::createCacheFileName(originalFileName);
	};

	// bool osgDB::FileCache::existsInCache(const std::string & originalFileName) const
	bool existsInCache(const std::string & originalFileName) const {
		if(_obj.pushFunction("existsInCache")) {
			_obj.pushArg(originalFileName);
			return (_obj.callFunction<bool>());
		}

		return FileCache::existsInCache(originalFileName);
	};

	// osgDB::ReaderWriter::ReadResult osgDB::FileCache::readImage(const std::string & originalFileName, const osgDB::Options * options) const
	osgDB::ReaderWriter::ReadResult readImage(const std::string & originalFileName, const osgDB::Options * options) const {
		if(_obj.pushFunction("readImage")) {
			_obj.pushArg(originalFileName);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
		}

		return FileCache::readImage(originalFileName, options);
	};

	// osgDB::ReaderWriter::WriteResult osgDB::FileCache::writeImage(const osg::Image & image, const std::string & originalFileName, const osgDB::Options * options) const
	osgDB::ReaderWriter::WriteResult writeImage(const osg::Image & image, const std::string & originalFileName, const osgDB::Options * options) const {
		if(_obj.pushFunction("writeImage")) {
			_obj.pushArg(&image);
			_obj.pushArg(originalFileName);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::WriteResult*>());
		}

		return FileCache::writeImage(image, originalFileName, options);
	};

	// osgDB::ReaderWriter::ReadResult osgDB::FileCache::readObject(const std::string & originalFileName, const osgDB::Options * options) const
	osgDB::ReaderWriter::ReadResult readObject(const std::string & originalFileName, const osgDB::Options * options) const {
		if(_obj.pushFunction("readObject")) {
			_obj.pushArg(originalFileName);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
		}

		return FileCache::readObject(originalFileName, options);
	};

	// osgDB::ReaderWriter::WriteResult osgDB::FileCache::writeObject(const osg::Object & object, const std::string & originalFileName, const osgDB::Options * options) const
	osgDB::ReaderWriter::WriteResult writeObject(const osg::Object & object, const std::string & originalFileName, const osgDB::Options * options) const {
		if(_obj.pushFunction("writeObject")) {
			_obj.pushArg(&object);
			_obj.pushArg(originalFileName);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::WriteResult*>());
		}

		return FileCache::writeObject(object, originalFileName, options);
	};

	// osgDB::ReaderWriter::ReadResult osgDB::FileCache::readHeightField(const std::string & originalFileName, const osgDB::Options * options) const
	osgDB::ReaderWriter::ReadResult readHeightField(const std::string & originalFileName, const osgDB::Options * options) const {
		if(_obj.pushFunction("readHeightField")) {
			_obj.pushArg(originalFileName);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
		}

		return FileCache::readHeightField(originalFileName, options);
	};

	// osgDB::ReaderWriter::WriteResult osgDB::FileCache::writeHeightField(const osg::HeightField & hf, const std::string & originalFileName, const osgDB::Options * options) const
	osgDB::ReaderWriter::WriteResult writeHeightField(const osg::HeightField & hf, const std::string & originalFileName, const osgDB::Options * options) const {
		if(_obj.pushFunction("writeHeightField")) {
			_obj.pushArg(&hf);
			_obj.pushArg(originalFileName);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::WriteResult*>());
		}

		return FileCache::writeHeightField(hf, originalFileName, options);
	};

	// osgDB::ReaderWriter::ReadResult osgDB::FileCache::readNode(const std::string & originalFileName, const osgDB::Options * options, bool buildKdTreeIfRequired = true) const
	osgDB::ReaderWriter::ReadResult readNode(const std::string & originalFileName, const osgDB::Options * options, bool buildKdTreeIfRequired = true) const {
		if(_obj.pushFunction("readNode")) {
			_obj.pushArg(originalFileName);
			_obj.pushArg(options);
			_obj.pushArg(buildKdTreeIfRequired);
			return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
		}

		return FileCache::readNode(originalFileName, options, buildKdTreeIfRequired);
	};

	// osgDB::ReaderWriter::WriteResult osgDB::FileCache::writeNode(const osg::Node & node, const std::string & originalFileName, const osgDB::Options * options) const
	osgDB::ReaderWriter::WriteResult writeNode(const osg::Node & node, const std::string & originalFileName, const osgDB::Options * options) const {
		if(_obj.pushFunction("writeNode")) {
			_obj.pushArg(&node);
			_obj.pushArg(originalFileName);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::WriteResult*>());
		}

		return FileCache::writeNode(node, originalFileName, options);
	};

	// osgDB::ReaderWriter::ReadResult osgDB::FileCache::readShader(const std::string & originalFileName, const osgDB::Options * options) const
	osgDB::ReaderWriter::ReadResult readShader(const std::string & originalFileName, const osgDB::Options * options) const {
		if(_obj.pushFunction("readShader")) {
			_obj.pushArg(originalFileName);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
		}

		return FileCache::readShader(originalFileName, options);
	};

	// osgDB::ReaderWriter::WriteResult osgDB::FileCache::writeShader(const osg::Shader & shader, const std::string & originalFileName, const osgDB::Options * options) const
	osgDB::ReaderWriter::WriteResult writeShader(const osg::Shader & shader, const std::string & originalFileName, const osgDB::Options * options) const {
		if(_obj.pushFunction("writeShader")) {
			_obj.pushArg(&shader);
			_obj.pushArg(originalFileName);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::WriteResult*>());
		}

		return FileCache::writeShader(shader, originalFileName, options);
	};




};




#endif


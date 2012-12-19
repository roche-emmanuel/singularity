#ifndef _WRAPPERS_WRAPPER_OSGDB_WRITEFILECALLBACK_H_
#define _WRAPPERS_WRAPPER_OSGDB_WRITEFILECALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/Callbacks>

class wrapper_osgDB_WriteFileCallback : public osgDB::WriteFileCallback, public luna_wrapper_base {

public:
	


	// osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeObject(const osg::Object & obj, const std::string & fileName, const osgDB::Options * options)
	osgDB::ReaderWriter::WriteResult writeObject(const osg::Object & obj, const std::string & fileName, const osgDB::Options * options) {
		if(_obj.pushFunction("writeObject")) {
			_obj.pushArg(&obj);
			_obj.pushArg(fileName);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::WriteResult*>());
		}

		return WriteFileCallback::writeObject(obj, fileName, options);
	};

	// osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeImage(const osg::Image & obj, const std::string & fileName, const osgDB::Options * options)
	osgDB::ReaderWriter::WriteResult writeImage(const osg::Image & obj, const std::string & fileName, const osgDB::Options * options) {
		if(_obj.pushFunction("writeImage")) {
			_obj.pushArg(&obj);
			_obj.pushArg(fileName);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::WriteResult*>());
		}

		return WriteFileCallback::writeImage(obj, fileName, options);
	};

	// osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeHeightField(const osg::HeightField & obj, const std::string & fileName, const osgDB::Options * options)
	osgDB::ReaderWriter::WriteResult writeHeightField(const osg::HeightField & obj, const std::string & fileName, const osgDB::Options * options) {
		if(_obj.pushFunction("writeHeightField")) {
			_obj.pushArg(&obj);
			_obj.pushArg(fileName);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::WriteResult*>());
		}

		return WriteFileCallback::writeHeightField(obj, fileName, options);
	};

	// osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeNode(const osg::Node & obj, const std::string & fileName, const osgDB::Options * options)
	osgDB::ReaderWriter::WriteResult writeNode(const osg::Node & obj, const std::string & fileName, const osgDB::Options * options) {
		if(_obj.pushFunction("writeNode")) {
			_obj.pushArg(&obj);
			_obj.pushArg(fileName);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::WriteResult*>());
		}

		return WriteFileCallback::writeNode(obj, fileName, options);
	};

	// osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeShader(const osg::Shader & obj, const std::string & fileName, const osgDB::Options * options)
	osgDB::ReaderWriter::WriteResult writeShader(const osg::Shader & obj, const std::string & fileName, const osgDB::Options * options) {
		if(_obj.pushFunction("writeShader")) {
			_obj.pushArg(&obj);
			_obj.pushArg(fileName);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::WriteResult*>());
		}

		return WriteFileCallback::writeShader(obj, fileName, options);
	};




};




#endif


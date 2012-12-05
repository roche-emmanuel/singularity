#ifndef _WRAPPERS_WRAPPER_OSGDB_READERWRITER_H_
#define _WRAPPERS_WRAPPER_OSGDB_READERWRITER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/ReaderWriter>

class wrapper_osgDB_ReaderWriter : public osgDB::ReaderWriter {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgDB_ReaderWriter(lua_State* L, lua_Table* dum) : osgDB::ReaderWriter(), _obj(L,-1) {};
	wrapper_osgDB_ReaderWriter(lua_State* L, lua_Table* dum, const osgDB::ReaderWriter & rw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgDB::ReaderWriter(rw, copyop), _obj(L,-1) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return osg::Object::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return osg::Object::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return osg::Object::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return osg::Object::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return osg::Object::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return osg::Object::releaseGLObjects(arg1);
	};

	// osg::Object * osgDB::ReaderWriter::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return osgDB::ReaderWriter::cloneType();
	};

	// osg::Object * osgDB::ReaderWriter::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return osgDB::ReaderWriter::clone(arg1);
	};

	// bool osgDB::ReaderWriter::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return osgDB::ReaderWriter::isSameKindAs(obj);
	};

	// const char * osgDB::ReaderWriter::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osgDB::ReaderWriter::libraryName();
	};

	// const char * osgDB::ReaderWriter::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osgDB::ReaderWriter::className();
	};

	// const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedProtocols() const
	const osgDB::ReaderWriter::FormatDescriptionMap & supportedProtocols() const {
		if(_obj.pushFunction("supportedProtocols")) {
			return *(_obj.callFunction<osgDB::ReaderWriter::FormatDescriptionMap*>());
		}

		return osgDB::ReaderWriter::supportedProtocols();
	};

	// const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedExtensions() const
	const osgDB::ReaderWriter::FormatDescriptionMap & supportedExtensions() const {
		if(_obj.pushFunction("supportedExtensions")) {
			return *(_obj.callFunction<osgDB::ReaderWriter::FormatDescriptionMap*>());
		}

		return osgDB::ReaderWriter::supportedExtensions();
	};

	// const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedOptions() const
	const osgDB::ReaderWriter::FormatDescriptionMap & supportedOptions() const {
		if(_obj.pushFunction("supportedOptions")) {
			return *(_obj.callFunction<osgDB::ReaderWriter::FormatDescriptionMap*>());
		}

		return osgDB::ReaderWriter::supportedOptions();
	};

	// bool osgDB::ReaderWriter::acceptsExtension(const std::string & arg1) const
	bool acceptsExtension(const std::string & arg1) const {
		if(_obj.pushFunction("acceptsExtension")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<bool>());
		}

		return osgDB::ReaderWriter::acceptsExtension(arg1);
	};

	// osgDB::ReaderWriter::Features osgDB::ReaderWriter::supportedFeatures() const
	osgDB::ReaderWriter::Features supportedFeatures() const {
		if(_obj.pushFunction("supportedFeatures")) {
			return (osgDB::ReaderWriter::Features)(_obj.callFunction<int>());
		}

		return osgDB::ReaderWriter::supportedFeatures();
	};

	// bool osgDB::ReaderWriter::fileExists(const std::string & filename, const osgDB::Options * options) const
	bool fileExists(const std::string & filename, const osgDB::Options * options) const {
		if(_obj.pushFunction("fileExists")) {
			_obj.pushArg(filename);
			_obj.pushArg(options);
			return (_obj.callFunction<bool>());
		}

		return osgDB::ReaderWriter::fileExists(filename, options);
	};

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::openArchive(const std::string & arg1, osgDB::ReaderWriter::ArchiveStatus arg2, unsigned int arg3 = 4096, const osgDB::Options * arg4 = NULL) const
	osgDB::ReaderWriter::ReadResult openArchive(const std::string & arg1, osgDB::ReaderWriter::ArchiveStatus arg2, unsigned int arg3 = 4096, const osgDB::Options * arg4 = NULL) const {
		if(_obj.pushFunction("openArchive")) {
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			_obj.pushArg(arg3);
			_obj.pushArg(arg4);
			return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
		}

		return osgDB::ReaderWriter::openArchive(arg1, arg2, arg3, arg4);
	};

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readObject(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	osgDB::ReaderWriter::ReadResult readObject(const std::string & arg1, const osgDB::Options * arg2 = NULL) const {
		if(_obj.pushFunction("readObject")) {
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
		}

		return osgDB::ReaderWriter::readObject(arg1, arg2);
	};

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readImage(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	osgDB::ReaderWriter::ReadResult readImage(const std::string & arg1, const osgDB::Options * arg2 = NULL) const {
		if(_obj.pushFunction("readImage")) {
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
		}

		return osgDB::ReaderWriter::readImage(arg1, arg2);
	};

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readHeightField(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	osgDB::ReaderWriter::ReadResult readHeightField(const std::string & arg1, const osgDB::Options * arg2 = NULL) const {
		if(_obj.pushFunction("readHeightField")) {
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
		}

		return osgDB::ReaderWriter::readHeightField(arg1, arg2);
	};

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readNode(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	osgDB::ReaderWriter::ReadResult readNode(const std::string & arg1, const osgDB::Options * arg2 = NULL) const {
		if(_obj.pushFunction("readNode")) {
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
		}

		return osgDB::ReaderWriter::readNode(arg1, arg2);
	};

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readShader(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	osgDB::ReaderWriter::ReadResult readShader(const std::string & arg1, const osgDB::Options * arg2 = NULL) const {
		if(_obj.pushFunction("readShader")) {
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
		}

		return osgDB::ReaderWriter::readShader(arg1, arg2);
	};

	// osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeObject(const osg::Object & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	osgDB::ReaderWriter::WriteResult writeObject(const osg::Object & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const {
		if(_obj.pushFunction("writeObject")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			_obj.pushArg(arg3);
			return *(_obj.callFunction<osgDB::ReaderWriter::WriteResult*>());
		}

		return osgDB::ReaderWriter::writeObject(arg1, arg2, arg3);
	};

	// osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeImage(const osg::Image & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	osgDB::ReaderWriter::WriteResult writeImage(const osg::Image & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const {
		if(_obj.pushFunction("writeImage")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			_obj.pushArg(arg3);
			return *(_obj.callFunction<osgDB::ReaderWriter::WriteResult*>());
		}

		return osgDB::ReaderWriter::writeImage(arg1, arg2, arg3);
	};

	// osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeHeightField(const osg::HeightField & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	osgDB::ReaderWriter::WriteResult writeHeightField(const osg::HeightField & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const {
		if(_obj.pushFunction("writeHeightField")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			_obj.pushArg(arg3);
			return *(_obj.callFunction<osgDB::ReaderWriter::WriteResult*>());
		}

		return osgDB::ReaderWriter::writeHeightField(arg1, arg2, arg3);
	};

	// osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeNode(const osg::Node & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	osgDB::ReaderWriter::WriteResult writeNode(const osg::Node & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const {
		if(_obj.pushFunction("writeNode")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			_obj.pushArg(arg3);
			return *(_obj.callFunction<osgDB::ReaderWriter::WriteResult*>());
		}

		return osgDB::ReaderWriter::writeNode(arg1, arg2, arg3);
	};

	// osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeShader(const osg::Shader & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	osgDB::ReaderWriter::WriteResult writeShader(const osg::Shader & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const {
		if(_obj.pushFunction("writeShader")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			_obj.pushArg(arg3);
			return *(_obj.callFunction<osgDB::ReaderWriter::WriteResult*>());
		}

		return osgDB::ReaderWriter::writeShader(arg1, arg2, arg3);
	};




};




#endif


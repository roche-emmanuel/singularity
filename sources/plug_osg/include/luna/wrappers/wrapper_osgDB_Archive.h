#ifndef _WRAPPERS_WRAPPER_OSGDB_ARCHIVE_H_
#define _WRAPPERS_WRAPPER_OSGDB_ARCHIVE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/Archive>

class wrapper_osgDB_Archive : public osgDB::Archive, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_Archive() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_Archive(lua_State* L, lua_Table* dum) : osgDB::Archive(), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return Archive::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return Archive::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return Archive::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Archive::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Archive::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return Archive::releaseGLObjects(arg1);
	};

	// osg::Object * osgDB::ReaderWriter::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return Archive::cloneType();
	};

	// osg::Object * osgDB::ReaderWriter::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return Archive::clone(arg1);
	};

	// bool osgDB::ReaderWriter::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return Archive::isSameKindAs(obj);
	};

	// const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedProtocols() const
	const osgDB::ReaderWriter::FormatDescriptionMap & supportedProtocols() const {
		if(_obj.pushFunction("supportedProtocols")) {
			return *(_obj.callFunction<osgDB::ReaderWriter::FormatDescriptionMap*>());
		}

		return Archive::supportedProtocols();
	};

	// const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedExtensions() const
	const osgDB::ReaderWriter::FormatDescriptionMap & supportedExtensions() const {
		if(_obj.pushFunction("supportedExtensions")) {
			return *(_obj.callFunction<osgDB::ReaderWriter::FormatDescriptionMap*>());
		}

		return Archive::supportedExtensions();
	};

	// const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedOptions() const
	const osgDB::ReaderWriter::FormatDescriptionMap & supportedOptions() const {
		if(_obj.pushFunction("supportedOptions")) {
			return *(_obj.callFunction<osgDB::ReaderWriter::FormatDescriptionMap*>());
		}

		return Archive::supportedOptions();
	};

	// osgDB::ReaderWriter::Features osgDB::ReaderWriter::supportedFeatures() const
	osgDB::ReaderWriter::Features supportedFeatures() const {
		if(_obj.pushFunction("supportedFeatures")) {
			return (osgDB::ReaderWriter::Features)(_obj.callFunction<int>());
		}

		return Archive::supportedFeatures();
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

		return Archive::openArchive(arg1, arg2, arg3, arg4);
	};

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::openArchive(std::istream & arg1, const osgDB::Options * arg2 = NULL) const
	osgDB::ReaderWriter::ReadResult openArchive(std::istream & arg1, const osgDB::Options * arg2 = NULL) const {
		if(_obj.pushFunction("openArchive")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
		}

		return Archive::openArchive(arg1, arg2);
	};

	// const char * osgDB::Archive::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return Archive::libraryName();
	};

	// const char * osgDB::Archive::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return Archive::className();
	};

	// bool osgDB::Archive::acceptsExtension(const std::string & arg1) const
	bool acceptsExtension(const std::string & arg1) const {
		if(_obj.pushFunction("acceptsExtension")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<bool>());
		}

		return Archive::acceptsExtension(arg1);
	};

	// void osgDB::Archive::close()
	void close() {
		THROW_IF(!_obj.pushFunction("close"),"No implementation for abstract function osgDB::Archive::close");
		return (_obj.callFunction<void>());
	};

	// std::string osgDB::Archive::getArchiveFileName() const
	std::string getArchiveFileName() const {
		THROW_IF(!_obj.pushFunction("getArchiveFileName"),"No implementation for abstract function osgDB::Archive::getArchiveFileName");
		return (_obj.callFunction<std::string>());
	};

	// std::string osgDB::Archive::getMasterFileName() const
	std::string getMasterFileName() const {
		THROW_IF(!_obj.pushFunction("getMasterFileName"),"No implementation for abstract function osgDB::Archive::getMasterFileName");
		return (_obj.callFunction<std::string>());
	};

	// bool osgDB::Archive::fileExists(const std::string & filename) const
	bool fileExists(const std::string & filename) const {
		THROW_IF(!_obj.pushFunction("fileExists"),"No implementation for abstract function osgDB::Archive::fileExists");
		_obj.pushArg(filename);
		return (_obj.callFunction<bool>());
	};

	// osgDB::FileType osgDB::Archive::getFileType(const std::string & filename) const
	osgDB::FileType getFileType(const std::string & filename) const {
		THROW_IF(!_obj.pushFunction("getFileType"),"No implementation for abstract function osgDB::Archive::getFileType");
		_obj.pushArg(filename);
		return (osgDB::FileType)(_obj.callFunction<int>());
	};

	// bool osgDB::Archive::getFileNames(osgDB::DirectoryContents & fileNames) const
	bool getFileNames(osgDB::DirectoryContents & fileNames) const {
		THROW_IF(!_obj.pushFunction("getFileNames"),"No implementation for abstract function osgDB::Archive::getFileNames");
		_obj.pushArg(&fileNames);
		return (_obj.callFunction<bool>());
	};

	// osgDB::DirectoryContents osgDB::Archive::getDirectoryContents(const std::string & dirName) const
	osgDB::DirectoryContents getDirectoryContents(const std::string & dirName) const {
		if(_obj.pushFunction("getDirectoryContents")) {
			_obj.pushArg(dirName);
			return *(_obj.callFunction<osgDB::DirectoryContents*>());
		}

		return Archive::getDirectoryContents(dirName);
	};

	// osgDB::ReaderWriter::ReadResult osgDB::Archive::readObject(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	osgDB::ReaderWriter::ReadResult readObject(const std::string & arg1, const osgDB::Options * arg2 = NULL) const {
		THROW_IF(!_obj.pushFunction("readObject"),"No implementation for abstract function osgDB::Archive::readObject");
		_obj.pushArg(arg1);
		_obj.pushArg(arg2);
		return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
	};

	// osgDB::ReaderWriter::ReadResult osgDB::Archive::readImage(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	osgDB::ReaderWriter::ReadResult readImage(const std::string & arg1, const osgDB::Options * arg2 = NULL) const {
		THROW_IF(!_obj.pushFunction("readImage"),"No implementation for abstract function osgDB::Archive::readImage");
		_obj.pushArg(arg1);
		_obj.pushArg(arg2);
		return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
	};

	// osgDB::ReaderWriter::ReadResult osgDB::Archive::readHeightField(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	osgDB::ReaderWriter::ReadResult readHeightField(const std::string & arg1, const osgDB::Options * arg2 = NULL) const {
		THROW_IF(!_obj.pushFunction("readHeightField"),"No implementation for abstract function osgDB::Archive::readHeightField");
		_obj.pushArg(arg1);
		_obj.pushArg(arg2);
		return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
	};

	// osgDB::ReaderWriter::ReadResult osgDB::Archive::readNode(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	osgDB::ReaderWriter::ReadResult readNode(const std::string & arg1, const osgDB::Options * arg2 = NULL) const {
		THROW_IF(!_obj.pushFunction("readNode"),"No implementation for abstract function osgDB::Archive::readNode");
		_obj.pushArg(arg1);
		_obj.pushArg(arg2);
		return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
	};

	// osgDB::ReaderWriter::ReadResult osgDB::Archive::readShader(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	osgDB::ReaderWriter::ReadResult readShader(const std::string & arg1, const osgDB::Options * arg2 = NULL) const {
		THROW_IF(!_obj.pushFunction("readShader"),"No implementation for abstract function osgDB::Archive::readShader");
		_obj.pushArg(arg1);
		_obj.pushArg(arg2);
		return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
	};

	// osgDB::ReaderWriter::WriteResult osgDB::Archive::writeObject(const osg::Object & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	osgDB::ReaderWriter::WriteResult writeObject(const osg::Object & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const {
		THROW_IF(!_obj.pushFunction("writeObject"),"No implementation for abstract function osgDB::Archive::writeObject");
		_obj.pushArg(&arg1);
		_obj.pushArg(arg2);
		_obj.pushArg(arg3);
		return *(_obj.callFunction<osgDB::ReaderWriter::WriteResult*>());
	};

	// osgDB::ReaderWriter::WriteResult osgDB::Archive::writeImage(const osg::Image & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	osgDB::ReaderWriter::WriteResult writeImage(const osg::Image & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const {
		THROW_IF(!_obj.pushFunction("writeImage"),"No implementation for abstract function osgDB::Archive::writeImage");
		_obj.pushArg(&arg1);
		_obj.pushArg(arg2);
		_obj.pushArg(arg3);
		return *(_obj.callFunction<osgDB::ReaderWriter::WriteResult*>());
	};

	// osgDB::ReaderWriter::WriteResult osgDB::Archive::writeHeightField(const osg::HeightField & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	osgDB::ReaderWriter::WriteResult writeHeightField(const osg::HeightField & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const {
		THROW_IF(!_obj.pushFunction("writeHeightField"),"No implementation for abstract function osgDB::Archive::writeHeightField");
		_obj.pushArg(&arg1);
		_obj.pushArg(arg2);
		_obj.pushArg(arg3);
		return *(_obj.callFunction<osgDB::ReaderWriter::WriteResult*>());
	};

	// osgDB::ReaderWriter::WriteResult osgDB::Archive::writeNode(const osg::Node & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	osgDB::ReaderWriter::WriteResult writeNode(const osg::Node & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const {
		THROW_IF(!_obj.pushFunction("writeNode"),"No implementation for abstract function osgDB::Archive::writeNode");
		_obj.pushArg(&arg1);
		_obj.pushArg(arg2);
		_obj.pushArg(arg3);
		return *(_obj.callFunction<osgDB::ReaderWriter::WriteResult*>());
	};

	// osgDB::ReaderWriter::WriteResult osgDB::Archive::writeShader(const osg::Shader & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	osgDB::ReaderWriter::WriteResult writeShader(const osg::Shader & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const {
		THROW_IF(!_obj.pushFunction("writeShader"),"No implementation for abstract function osgDB::Archive::writeShader");
		_obj.pushArg(&arg1);
		_obj.pushArg(arg2);
		_obj.pushArg(arg3);
		return *(_obj.callFunction<osgDB::ReaderWriter::WriteResult*>());
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


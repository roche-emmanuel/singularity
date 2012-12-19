#ifndef _WRAPPERS_WRAPPER_OSGDB_IMAGEPROCESSOR_H_
#define _WRAPPERS_WRAPPER_OSGDB_IMAGEPROCESSOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/ImageProcessor>

class wrapper_osgDB_ImageProcessor : public osgDB::ImageProcessor, public luna_wrapper_base {

public:
	

	wrapper_osgDB_ImageProcessor(lua_State* L, lua_Table* dum) : osgDB::ImageProcessor(), luna_wrapper_base(L) {};
	wrapper_osgDB_ImageProcessor(lua_State* L, lua_Table* dum, const osgDB::ImageProcessor & rw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgDB::ImageProcessor(rw, copyop), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return ImageProcessor::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return ImageProcessor::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return ImageProcessor::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ImageProcessor::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ImageProcessor::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ImageProcessor::releaseGLObjects(arg1);
	};

	// osg::Object * osgDB::ImageProcessor::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return ImageProcessor::cloneType();
	};

	// osg::Object * osgDB::ImageProcessor::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return ImageProcessor::clone(arg1);
	};

	// bool osgDB::ImageProcessor::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return ImageProcessor::isSameKindAs(obj);
	};

	// const char * osgDB::ImageProcessor::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return ImageProcessor::libraryName();
	};

	// const char * osgDB::ImageProcessor::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return ImageProcessor::className();
	};

	// void osgDB::ImageProcessor::compress(osg::Image & arg1, osg::Texture::InternalFormatMode arg2, bool arg3, bool arg4, osgDB::ImageProcessor::CompressionMethod arg5, osgDB::ImageProcessor::CompressionQuality arg6)
	void compress(osg::Image & arg1, osg::Texture::InternalFormatMode arg2, bool arg3, bool arg4, osgDB::ImageProcessor::CompressionMethod arg5, osgDB::ImageProcessor::CompressionQuality arg6) {
		if(_obj.pushFunction("compress")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			_obj.pushArg(arg3);
			_obj.pushArg(arg4);
			_obj.pushArg(arg5);
			_obj.pushArg(arg6);
			return (_obj.callFunction<void>());
		}

		return ImageProcessor::compress(arg1, arg2, arg3, arg4, arg5, arg6);
	};

	// void osgDB::ImageProcessor::generateMipMap(osg::Image & arg1, bool arg2, osgDB::ImageProcessor::CompressionMethod arg3)
	void generateMipMap(osg::Image & arg1, bool arg2, osgDB::ImageProcessor::CompressionMethod arg3) {
		if(_obj.pushFunction("generateMipMap")) {
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			_obj.pushArg(arg3);
			return (_obj.callFunction<void>());
		}

		return ImageProcessor::generateMipMap(arg1, arg2, arg3);
	};




};




#endif


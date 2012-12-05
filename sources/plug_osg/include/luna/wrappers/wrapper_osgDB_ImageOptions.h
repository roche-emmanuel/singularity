#ifndef _WRAPPERS_WRAPPER_OSGDB_IMAGEOPTIONS_H_
#define _WRAPPERS_WRAPPER_OSGDB_IMAGEOPTIONS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/ImageOptions>

class wrapper_osgDB_ImageOptions : public osgDB::ImageOptions {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgDB_ImageOptions(lua_State* L, lua_Table* dum) : osgDB::ImageOptions(), _obj(L,-1) {};
	wrapper_osgDB_ImageOptions(lua_State* L, lua_Table* dum, const std::string & str) : osgDB::ImageOptions(str), _obj(L,-1) {};
	wrapper_osgDB_ImageOptions(lua_State* L, lua_Table* dum, const osgDB::ImageOptions & options, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgDB::ImageOptions(options, copyop), _obj(L,-1) {};

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

	// osg::Object * osgDB::ImageOptions::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return osgDB::ImageOptions::cloneType();
	};

	// osg::Object * osgDB::ImageOptions::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return osgDB::ImageOptions::clone(arg1);
	};

	// bool osgDB::ImageOptions::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return osgDB::ImageOptions::isSameKindAs(obj);
	};

	// const char * osgDB::ImageOptions::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osgDB::ImageOptions::libraryName();
	};

	// const char * osgDB::ImageOptions::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osgDB::ImageOptions::className();
	};




};




#endif


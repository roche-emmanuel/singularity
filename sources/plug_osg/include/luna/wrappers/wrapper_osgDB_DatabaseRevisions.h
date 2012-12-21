#ifndef _WRAPPERS_WRAPPER_OSGDB_DATABASEREVISIONS_H_
#define _WRAPPERS_WRAPPER_OSGDB_DATABASEREVISIONS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/DatabaseRevisions>

class wrapper_osgDB_DatabaseRevisions : public osgDB::DatabaseRevisions, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_DatabaseRevisions() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_DatabaseRevisions(lua_State* L, lua_Table* dum) : osgDB::DatabaseRevisions(), luna_wrapper_base(L) {};
	wrapper_osgDB_DatabaseRevisions(lua_State* L, lua_Table* dum, const osgDB::DatabaseRevisions & revisions, const osg::CopyOp arg2 = osg::CopyOp::SHALLOW_COPY) : osgDB::DatabaseRevisions(revisions, arg2), luna_wrapper_base(L) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return DatabaseRevisions::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return DatabaseRevisions::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return DatabaseRevisions::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return DatabaseRevisions::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return DatabaseRevisions::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return DatabaseRevisions::releaseGLObjects(arg1);
	};

	// osg::Object * osgDB::DatabaseRevisions::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return DatabaseRevisions::cloneType();
	};

	// osg::Object * osgDB::DatabaseRevisions::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return DatabaseRevisions::clone(arg1);
	};

	// bool osgDB::DatabaseRevisions::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return DatabaseRevisions::isSameKindAs(obj);
	};

	// const char * osgDB::DatabaseRevisions::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return DatabaseRevisions::libraryName();
	};

	// const char * osgDB::DatabaseRevisions::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return DatabaseRevisions::className();
	};




};




#endif


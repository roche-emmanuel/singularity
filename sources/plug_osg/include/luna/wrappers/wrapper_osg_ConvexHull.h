#ifndef _WRAPPERS_WRAPPER_OSG_CONVEXHULL_H_
#define _WRAPPERS_WRAPPER_OSG_CONVEXHULL_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Shape>

class wrapper_osg_ConvexHull : public osg::ConvexHull {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_ConvexHull(lua_State* L, lua_Table* dum) : osg::ConvexHull(), _obj(L,-1) {};
	wrapper_osg_ConvexHull(lua_State* L, lua_Table* dum, const osg::ConvexHull & hull, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::ConvexHull(hull, copyop), _obj(L,-1) {};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return ConvexHull::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return ConvexHull::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return ConvexHull::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ConvexHull::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ConvexHull::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ConvexHull::releaseGLObjects(arg1);
	};

	// osg::Object * osg::ConvexHull::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return ConvexHull::cloneType();
	};

	// osg::Object * osg::ConvexHull::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return ConvexHull::clone(arg1);
	};

	// bool osg::ConvexHull::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return ConvexHull::isSameKindAs(obj);
	};

	// const char * osg::ConvexHull::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return ConvexHull::libraryName();
	};

	// const char * osg::ConvexHull::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return ConvexHull::className();
	};

	// void osg::ConvexHull::accept(osg::ShapeVisitor & arg1)
	void accept(osg::ShapeVisitor & arg1) {
		if(_obj.pushFunction("accept")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConvexHull::accept(arg1);
	};

	// void osg::ConvexHull::accept(osg::ConstShapeVisitor & arg1) const
	void accept(osg::ConstShapeVisitor & arg1) const {
		if(_obj.pushFunction("accept")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return ConvexHull::accept(arg1);
	};




};




#endif


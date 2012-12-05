#ifndef _WRAPPERS_WRAPPER_OSG_KDTREE_H_
#define _WRAPPERS_WRAPPER_OSG_KDTREE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/KdTree>

class wrapper_osg_KdTree : public osg::KdTree {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_KdTree(lua_State* L, lua_Table* dum) : osg::KdTree(), _obj(L,-1) {};
	wrapper_osg_KdTree(lua_State* L, lua_Table* dum, const osg::KdTree & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::KdTree(rhs, copyop), _obj(L,-1) {};

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

	// osg::Object * osg::KdTree::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::KdTree::cloneType();
	};

	// osg::Object * osg::KdTree::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return osg::KdTree::clone(arg1);
	};

	// bool osg::KdTree::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return osg::KdTree::isSameKindAs(obj);
	};

	// const char * osg::KdTree::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::KdTree::libraryName();
	};

	// const char * osg::KdTree::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return osg::KdTree::className();
	};

	// void osg::KdTree::accept(osg::ShapeVisitor & arg1)
	void accept(osg::ShapeVisitor & arg1) {
		if(_obj.pushFunction("accept")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::KdTree::accept(arg1);
	};

	// void osg::KdTree::accept(osg::ConstShapeVisitor & arg1) const
	void accept(osg::ConstShapeVisitor & arg1) const {
		if(_obj.pushFunction("accept")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::KdTree::accept(arg1);
	};

	// bool osg::KdTree::intersect(const osg::Vec3d & start, const osg::Vec3d & end, osg::KdTree::LineSegmentIntersections & intersections) const
	bool intersect(const osg::Vec3d & start, const osg::Vec3d & end, osg::KdTree::LineSegmentIntersections & intersections) const {
		if(_obj.pushFunction("intersect")) {
			_obj.pushArg(&start);
			_obj.pushArg(&end);
			_obj.pushArg(&intersections);
			return (_obj.callFunction<bool>());
		}

		return osg::KdTree::intersect(start, end, intersections);
	};




};




#endif


#ifndef _WRAPPERS_WRAPPER_OSG_CONSTSHAPEVISITOR_H_
#define _WRAPPERS_WRAPPER_OSG_CONSTSHAPEVISITOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Shape>

class wrapper_osg_ConstShapeVisitor : public osg::ConstShapeVisitor {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_ConstShapeVisitor(lua_State* L, lua_Table* dum) : osg::ConstShapeVisitor(), _obj(L,-1) {};

	// void osg::ConstShapeVisitor::apply(const osg::Shape & arg1)
	void apply(const osg::Shape & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstShapeVisitor::apply(arg1);
	};

	// void osg::ConstShapeVisitor::apply(const osg::Sphere & arg1)
	void apply(const osg::Sphere & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstShapeVisitor::apply(arg1);
	};

	// void osg::ConstShapeVisitor::apply(const osg::Box & arg1)
	void apply(const osg::Box & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstShapeVisitor::apply(arg1);
	};

	// void osg::ConstShapeVisitor::apply(const osg::Cone & arg1)
	void apply(const osg::Cone & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstShapeVisitor::apply(arg1);
	};

	// void osg::ConstShapeVisitor::apply(const osg::Cylinder & arg1)
	void apply(const osg::Cylinder & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstShapeVisitor::apply(arg1);
	};

	// void osg::ConstShapeVisitor::apply(const osg::Capsule & arg1)
	void apply(const osg::Capsule & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstShapeVisitor::apply(arg1);
	};

	// void osg::ConstShapeVisitor::apply(const osg::InfinitePlane & arg1)
	void apply(const osg::InfinitePlane & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstShapeVisitor::apply(arg1);
	};

	// void osg::ConstShapeVisitor::apply(const osg::TriangleMesh & arg1)
	void apply(const osg::TriangleMesh & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstShapeVisitor::apply(arg1);
	};

	// void osg::ConstShapeVisitor::apply(const osg::ConvexHull & arg1)
	void apply(const osg::ConvexHull & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstShapeVisitor::apply(arg1);
	};

	// void osg::ConstShapeVisitor::apply(const osg::HeightField & arg1)
	void apply(const osg::HeightField & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstShapeVisitor::apply(arg1);
	};

	// void osg::ConstShapeVisitor::apply(const osg::CompositeShape & arg1)
	void apply(const osg::CompositeShape & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstShapeVisitor::apply(arg1);
	};




};




#endif

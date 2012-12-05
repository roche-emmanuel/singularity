#ifndef _WRAPPERS_WRAPPER_OSG_SHAPEVISITOR_H_
#define _WRAPPERS_WRAPPER_OSG_SHAPEVISITOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Shape>

class wrapper_osg_ShapeVisitor : public osg::ShapeVisitor {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_ShapeVisitor(lua_State* L, lua_Table* dum) : osg::ShapeVisitor(), _obj(L,-1) {};

	// void osg::ShapeVisitor::apply(osg::Shape & arg1)
	void apply(osg::Shape & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ShapeVisitor::apply(arg1);
	};

	// void osg::ShapeVisitor::apply(osg::Sphere & arg1)
	void apply(osg::Sphere & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ShapeVisitor::apply(arg1);
	};

	// void osg::ShapeVisitor::apply(osg::Box & arg1)
	void apply(osg::Box & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ShapeVisitor::apply(arg1);
	};

	// void osg::ShapeVisitor::apply(osg::Cone & arg1)
	void apply(osg::Cone & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ShapeVisitor::apply(arg1);
	};

	// void osg::ShapeVisitor::apply(osg::Cylinder & arg1)
	void apply(osg::Cylinder & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ShapeVisitor::apply(arg1);
	};

	// void osg::ShapeVisitor::apply(osg::Capsule & arg1)
	void apply(osg::Capsule & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ShapeVisitor::apply(arg1);
	};

	// void osg::ShapeVisitor::apply(osg::InfinitePlane & arg1)
	void apply(osg::InfinitePlane & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ShapeVisitor::apply(arg1);
	};

	// void osg::ShapeVisitor::apply(osg::TriangleMesh & arg1)
	void apply(osg::TriangleMesh & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ShapeVisitor::apply(arg1);
	};

	// void osg::ShapeVisitor::apply(osg::ConvexHull & arg1)
	void apply(osg::ConvexHull & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ShapeVisitor::apply(arg1);
	};

	// void osg::ShapeVisitor::apply(osg::HeightField & arg1)
	void apply(osg::HeightField & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ShapeVisitor::apply(arg1);
	};

	// void osg::ShapeVisitor::apply(osg::CompositeShape & arg1)
	void apply(osg::CompositeShape & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ShapeVisitor::apply(arg1);
	};




};




#endif


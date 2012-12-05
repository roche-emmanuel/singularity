#ifndef _WRAPPERS_WRAPPER_OSG_VALUEVISITOR_H_
#define _WRAPPERS_WRAPPER_OSG_VALUEVISITOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Array>

class wrapper_osg_ValueVisitor : public osg::ValueVisitor {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_ValueVisitor(lua_State* L, lua_Table* dum) : osg::ValueVisitor(), _obj(L,-1) {};

	// void osg::ValueVisitor::apply(signed char & arg1)
	void apply(signed char & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ValueVisitor::apply(arg1);
	};

	// void osg::ValueVisitor::apply(short & arg1)
	void apply(short & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ValueVisitor::apply(arg1);
	};

	// void osg::ValueVisitor::apply(int & arg1)
	void apply(int & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ValueVisitor::apply(arg1);
	};

	// void osg::ValueVisitor::apply(unsigned short & arg1)
	void apply(unsigned short & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ValueVisitor::apply(arg1);
	};

	// void osg::ValueVisitor::apply(unsigned char & arg1)
	void apply(unsigned char & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ValueVisitor::apply(arg1);
	};

	// void osg::ValueVisitor::apply(unsigned int & arg1)
	void apply(unsigned int & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ValueVisitor::apply(arg1);
	};

	// void osg::ValueVisitor::apply(float & arg1)
	void apply(float & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ValueVisitor::apply(arg1);
	};

	// void osg::ValueVisitor::apply(double & arg1)
	void apply(double & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ValueVisitor::apply(arg1);
	};

	// void osg::ValueVisitor::apply(osg::Vec2f & arg1)
	void apply(osg::Vec2f & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ValueVisitor::apply(arg1);
	};

	// void osg::ValueVisitor::apply(osg::Vec3f & arg1)
	void apply(osg::Vec3f & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ValueVisitor::apply(arg1);
	};

	// void osg::ValueVisitor::apply(osg::Vec4f & arg1)
	void apply(osg::Vec4f & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ValueVisitor::apply(arg1);
	};

	// void osg::ValueVisitor::apply(osg::Vec4ub & arg1)
	void apply(osg::Vec4ub & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ValueVisitor::apply(arg1);
	};

	// void osg::ValueVisitor::apply(osg::Vec2b & arg1)
	void apply(osg::Vec2b & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ValueVisitor::apply(arg1);
	};

	// void osg::ValueVisitor::apply(osg::Vec3b & arg1)
	void apply(osg::Vec3b & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ValueVisitor::apply(arg1);
	};

	// void osg::ValueVisitor::apply(osg::Vec4b & arg1)
	void apply(osg::Vec4b & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ValueVisitor::apply(arg1);
	};

	// void osg::ValueVisitor::apply(osg::Vec2s & arg1)
	void apply(osg::Vec2s & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ValueVisitor::apply(arg1);
	};

	// void osg::ValueVisitor::apply(osg::Vec3s & arg1)
	void apply(osg::Vec3s & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ValueVisitor::apply(arg1);
	};

	// void osg::ValueVisitor::apply(osg::Vec4s & arg1)
	void apply(osg::Vec4s & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ValueVisitor::apply(arg1);
	};

	// void osg::ValueVisitor::apply(osg::Vec2d & arg1)
	void apply(osg::Vec2d & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ValueVisitor::apply(arg1);
	};

	// void osg::ValueVisitor::apply(osg::Vec3d & arg1)
	void apply(osg::Vec3d & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ValueVisitor::apply(arg1);
	};

	// void osg::ValueVisitor::apply(osg::Vec4d & arg1)
	void apply(osg::Vec4d & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ValueVisitor::apply(arg1);
	};

	// void osg::ValueVisitor::apply(osg::Matrixf & arg1)
	void apply(osg::Matrixf & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ValueVisitor::apply(arg1);
	};




};




#endif


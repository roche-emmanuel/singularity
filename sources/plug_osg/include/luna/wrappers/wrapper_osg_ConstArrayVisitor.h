#ifndef _WRAPPERS_WRAPPER_OSG_CONSTARRAYVISITOR_H_
#define _WRAPPERS_WRAPPER_OSG_CONSTARRAYVISITOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Array>

class wrapper_osg_ConstArrayVisitor : public osg::ConstArrayVisitor {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_ConstArrayVisitor(lua_State* L, lua_Table* dum) : osg::ConstArrayVisitor(), _obj(L,-1) {};

	// void osg::ConstArrayVisitor::apply(const osg::Array & arg1)
	void apply(const osg::Array & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::ByteArray & arg1)
	void apply(const osg::ByteArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::ShortArray & arg1)
	void apply(const osg::ShortArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::IntArray & arg1)
	void apply(const osg::IntArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::UByteArray & arg1)
	void apply(const osg::UByteArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::UShortArray & arg1)
	void apply(const osg::UShortArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::UIntArray & arg1)
	void apply(const osg::UIntArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::FloatArray & arg1)
	void apply(const osg::FloatArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::DoubleArray & arg1)
	void apply(const osg::DoubleArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::Vec2Array & arg1)
	void apply(const osg::Vec2Array & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::Vec3Array & arg1)
	void apply(const osg::Vec3Array & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::Vec4Array & arg1)
	void apply(const osg::Vec4Array & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::Vec4ubArray & arg1)
	void apply(const osg::Vec4ubArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::Vec2bArray & arg1)
	void apply(const osg::Vec2bArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::Vec3bArray & arg1)
	void apply(const osg::Vec3bArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::Vec4bArray & arg1)
	void apply(const osg::Vec4bArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::Vec2sArray & arg1)
	void apply(const osg::Vec2sArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::Vec3sArray & arg1)
	void apply(const osg::Vec3sArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::Vec4sArray & arg1)
	void apply(const osg::Vec4sArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::Vec2dArray & arg1)
	void apply(const osg::Vec2dArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::Vec3dArray & arg1)
	void apply(const osg::Vec3dArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::Vec4dArray & arg1)
	void apply(const osg::Vec4dArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstArrayVisitor::apply(arg1);
	};

	// void osg::ConstArrayVisitor::apply(const osg::MatrixfArray & arg1)
	void apply(const osg::MatrixfArray & arg1) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return osg::ConstArrayVisitor::apply(arg1);
	};




};




#endif


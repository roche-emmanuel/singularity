#ifndef _WRAPPERS_WRAPPER_OSG_ATTRIBUTEDISPATCH_H_
#define _WRAPPERS_WRAPPER_OSG_ATTRIBUTEDISPATCH_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/ArrayDispatchers>

class wrapper_osg_AttributeDispatch : public osg::AttributeDispatch {
protected:
	sgt::LuaObject _obj;
	
public:
	


	// void osg::AttributeDispatch::assign(const void * arg1, const osg::IndexArray * arg2)
	void assign(const void * arg1, const osg::IndexArray * arg2) {
		if(_obj.pushFunction("assign")) {
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<void>());
		}

		return AttributeDispatch::assign(arg1, arg2);
	};

	// void osg::AttributeDispatch::operator()(unsigned int arg1)
	void operator()(unsigned int arg1) {
		if(_obj.pushFunction("operator()")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return AttributeDispatch::operator()(arg1);
	};




};




#endif


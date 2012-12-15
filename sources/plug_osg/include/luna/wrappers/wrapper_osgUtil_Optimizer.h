#ifndef _WRAPPERS_WRAPPER_OSGUTIL_OPTIMIZER_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_OPTIMIZER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/Optimizer>

class wrapper_osgUtil_Optimizer : public osgUtil::Optimizer {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgUtil_Optimizer(lua_State* L, lua_Table* dum) : osgUtil::Optimizer(), _obj(L,-1) {};

	// void osgUtil::Optimizer::optimize(osg::Node * node, unsigned int options)
	void optimize(osg::Node * node, unsigned int options) {
		if(_obj.pushFunction("optimize")) {
			_obj.pushArg(node);
			_obj.pushArg(options);
			return (_obj.callFunction<void>());
		}

		return Optimizer::optimize(node, options);
	};




};




#endif


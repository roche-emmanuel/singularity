#ifndef _WRAPPERS_WRAPPER_OSGUTIL_RENDERBIN_SORTCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_RENDERBIN_SORTCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/RenderBin>

class wrapper_osgUtil_RenderBin_SortCallback : public osgUtil::RenderBin::SortCallback {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgUtil_RenderBin_SortCallback(lua_State* L, lua_Table* dum) : osgUtil::RenderBin::SortCallback(), _obj(L,-1) {};

	// void osgUtil::RenderBin::SortCallback::sortImplementation(osgUtil::RenderBin * arg1)
	void sortImplementation(osgUtil::RenderBin * arg1) {
		THROW_IF(!_obj.pushFunction("sortImplementation"),"No implementation for abstract function osgUtil::RenderBin::SortCallback::sortImplementation");
		_obj.pushArg(arg1);
		return (_obj.callFunction<void>());
	};




};




#endif

#ifndef _WRAPPERS_WRAPPER_OSGUTIL_SHADERGENCACHE_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_SHADERGENCACHE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/ShaderGen>

class wrapper_osgUtil_ShaderGenCache : public osgUtil::ShaderGenCache, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_ShaderGenCache() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_ShaderGenCache(lua_State* L, lua_Table* dum) : osgUtil::ShaderGenCache(), luna_wrapper_base(L) {};




};




#endif


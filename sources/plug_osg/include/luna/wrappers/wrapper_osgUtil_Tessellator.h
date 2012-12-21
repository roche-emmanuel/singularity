#ifndef _WRAPPERS_WRAPPER_OSGUTIL_TESSELLATOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_TESSELLATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/Tessellator>

class wrapper_osgUtil_Tessellator : public osgUtil::Tessellator, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_Tessellator() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_Tessellator(lua_State* L, lua_Table* dum) : osgUtil::Tessellator(), luna_wrapper_base(L) {};




};




#endif


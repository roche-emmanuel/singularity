#ifndef _WRAPPERS_WRAPPER_OSG_CULLINGSET_H_
#define _WRAPPERS_WRAPPER_OSG_CULLINGSET_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/CullingSet>

class wrapper_osg_CullingSet : public osg::CullingSet, public luna_wrapper_base {

public:
		

	~wrapper_osg_CullingSet() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_CullingSet(lua_State* L, lua_Table* dum) : osg::CullingSet(), luna_wrapper_base(L) {};
	wrapper_osg_CullingSet(lua_State* L, lua_Table* dum, const osg::CullingSet & cs) : osg::CullingSet(cs), luna_wrapper_base(L) {};
	wrapper_osg_CullingSet(lua_State* L, lua_Table* dum, const osg::CullingSet & cs, const osg::Matrixd & matrix, const osg::Vec4f & pixelSizeVector) : osg::CullingSet(cs, matrix, pixelSizeVector), luna_wrapper_base(L) {};




};




#endif


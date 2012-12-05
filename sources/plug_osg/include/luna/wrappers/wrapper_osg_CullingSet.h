#ifndef _WRAPPERS_WRAPPER_OSG_CULLINGSET_H_
#define _WRAPPERS_WRAPPER_OSG_CULLINGSET_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/CullingSet>

class wrapper_osg_CullingSet : public osg::CullingSet {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_CullingSet(lua_State* L, lua_Table* dum) : osg::CullingSet(), _obj(L,-1) {};
	wrapper_osg_CullingSet(lua_State* L, lua_Table* dum, const osg::CullingSet & cs) : osg::CullingSet(cs), _obj(L,-1) {};
	wrapper_osg_CullingSet(lua_State* L, lua_Table* dum, const osg::CullingSet & cs, const osg::Matrixd & matrix, const osg::Vec4f & pixelSizeVector) : osg::CullingSet(cs, matrix, pixelSizeVector), _obj(L,-1) {};




};




#endif


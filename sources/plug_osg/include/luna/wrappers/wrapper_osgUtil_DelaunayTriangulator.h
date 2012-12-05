#ifndef _WRAPPERS_WRAPPER_OSGUTIL_DELAUNAYTRIANGULATOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_DELAUNAYTRIANGULATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/DelaunayTriangulator>

class wrapper_osgUtil_DelaunayTriangulator : public osgUtil::DelaunayTriangulator {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgUtil_DelaunayTriangulator(lua_State* L, lua_Table* dum) : osgUtil::DelaunayTriangulator(), _obj(L,-1) {};
	wrapper_osgUtil_DelaunayTriangulator(lua_State* L, lua_Table* dum, osg::Vec3Array * points, osg::Vec3Array * normals = 0) : osgUtil::DelaunayTriangulator(points, normals), _obj(L,-1) {};
	wrapper_osgUtil_DelaunayTriangulator(lua_State* L, lua_Table* dum, const osgUtil::DelaunayTriangulator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgUtil::DelaunayTriangulator(copy, copyop), _obj(L,-1) {};




};




#endif


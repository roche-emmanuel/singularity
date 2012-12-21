#ifndef _WRAPPERS_WRAPPER_OSGUTIL_DELAUNAYTRIANGULATOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_DELAUNAYTRIANGULATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/DelaunayTriangulator>

class wrapper_osgUtil_DelaunayTriangulator : public osgUtil::DelaunayTriangulator, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_DelaunayTriangulator() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_DelaunayTriangulator(lua_State* L, lua_Table* dum) : osgUtil::DelaunayTriangulator(), luna_wrapper_base(L) {};
	wrapper_osgUtil_DelaunayTriangulator(lua_State* L, lua_Table* dum, osg::Vec3Array * points, osg::Vec3Array * normals = 0) : osgUtil::DelaunayTriangulator(points, normals), luna_wrapper_base(L) {};
	wrapper_osgUtil_DelaunayTriangulator(lua_State* L, lua_Table* dum, const osgUtil::DelaunayTriangulator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgUtil::DelaunayTriangulator(copy, copyop), luna_wrapper_base(L) {};




// int osgUtil::DelaunayTriangulator::getindex(const osg::Vec3f & pt, const osg::Vec3Array * points)
int public_getindex(const osg::Vec3f & pt, const osg::Vec3Array * points) {
	return osgUtil::DelaunayTriangulator::getindex(pt, points);
};

// osgUtil::DelaunayTriangulator & osgUtil::DelaunayTriangulator::operator=(const osgUtil::DelaunayTriangulator & arg1)
// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
	return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
};

// void osg::Referenced::deleteUsingDeleteHandler() const
void public_deleteUsingDeleteHandler() const {
	return osg::Referenced::deleteUsingDeleteHandler();
};


};




#endif


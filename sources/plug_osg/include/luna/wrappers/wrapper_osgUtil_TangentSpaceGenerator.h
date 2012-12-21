#ifndef _WRAPPERS_WRAPPER_OSGUTIL_TANGENTSPACEGENERATOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_TANGENTSPACEGENERATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/TangentSpaceGenerator>

class wrapper_osgUtil_TangentSpaceGenerator : public osgUtil::TangentSpaceGenerator, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_TangentSpaceGenerator() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_TangentSpaceGenerator(lua_State* L, lua_Table* dum) : osgUtil::TangentSpaceGenerator(), luna_wrapper_base(L) {};
	wrapper_osgUtil_TangentSpaceGenerator(lua_State* L, lua_Table* dum, const osgUtil::TangentSpaceGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgUtil::TangentSpaceGenerator(copy, copyop), luna_wrapper_base(L) {};




// void osgUtil::TangentSpaceGenerator::compute(osg::PrimitiveSet * pset, const osg::Array * vx, const osg::Array * nx, const osg::Array * tx, int iA, int iB, int iC)
void public_compute(osg::PrimitiveSet * pset, const osg::Array * vx, const osg::Array * nx, const osg::Array * tx, int iA, int iB, int iC) {
	return osgUtil::TangentSpaceGenerator::compute(pset, vx, nx, tx, iA, iB, iC);
};

// osgUtil::TangentSpaceGenerator & osgUtil::TangentSpaceGenerator::operator=(const osgUtil::TangentSpaceGenerator & arg1)
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


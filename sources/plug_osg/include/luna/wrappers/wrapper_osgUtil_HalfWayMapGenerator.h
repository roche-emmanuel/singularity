#ifndef _WRAPPERS_WRAPPER_OSGUTIL_HALFWAYMAPGENERATOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_HALFWAYMAPGENERATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/HalfWayMapGenerator>

class wrapper_osgUtil_HalfWayMapGenerator : public osgUtil::HalfWayMapGenerator, public luna_wrapper_base {

public:
	

	wrapper_osgUtil_HalfWayMapGenerator(lua_State* L, lua_Table* dum, const osg::Vec3f & light_direction, int texture_size = 64) : osgUtil::HalfWayMapGenerator(light_direction, texture_size), luna_wrapper_base(L) {};
	wrapper_osgUtil_HalfWayMapGenerator(lua_State* L, lua_Table* dum, const osgUtil::HalfWayMapGenerator & copy, const osg::CopyOp & copyop) : osgUtil::HalfWayMapGenerator(copy, copyop), luna_wrapper_base(L) {};


protected:
	// osg::Vec4f osgUtil::HalfWayMapGenerator::compute_color(const osg::Vec3f & R) const
	osg::Vec4f compute_color(const osg::Vec3f & R) const {
		if(_obj.pushFunction("compute_color")) {
			_obj.pushArg(&R);
			return *(_obj.callFunction<osg::Vec4f*>());
		}

		return HalfWayMapGenerator::compute_color(R);
	};


};




#endif


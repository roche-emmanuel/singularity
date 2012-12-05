#ifndef _WRAPPERS_WRAPPER_OSGUTIL_HIGHLIGHTMAPGENERATOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_HIGHLIGHTMAPGENERATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/HighlightMapGenerator>

class wrapper_osgUtil_HighlightMapGenerator : public osgUtil::HighlightMapGenerator {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgUtil_HighlightMapGenerator(lua_State* L, lua_Table* dum, const osg::Vec3f & light_direction, const osg::Vec4f & light_color, float specular_exponent, int texture_size = 64) : osgUtil::HighlightMapGenerator(light_direction, light_color, specular_exponent, texture_size), _obj(L,-1) {};
	wrapper_osgUtil_HighlightMapGenerator(lua_State* L, lua_Table* dum, const osgUtil::HighlightMapGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgUtil::HighlightMapGenerator(copy, copyop), _obj(L,-1) {};


protected:
	// osg::Vec4f osgUtil::HighlightMapGenerator::compute_color(const osg::Vec3f & R) const

};




#endif


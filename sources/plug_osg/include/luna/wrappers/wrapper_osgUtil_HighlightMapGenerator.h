#ifndef _WRAPPERS_WRAPPER_OSGUTIL_HIGHLIGHTMAPGENERATOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_HIGHLIGHTMAPGENERATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/HighlightMapGenerator>

class wrapper_osgUtil_HighlightMapGenerator : public osgUtil::HighlightMapGenerator, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_HighlightMapGenerator() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_HighlightMapGenerator(lua_State* L, lua_Table* dum, const osg::Vec3f & light_direction, const osg::Vec4f & light_color, float specular_exponent, int texture_size = 64) : osgUtil::HighlightMapGenerator(light_direction, light_color, specular_exponent, texture_size), luna_wrapper_base(L) {};
	wrapper_osgUtil_HighlightMapGenerator(lua_State* L, lua_Table* dum, const osgUtil::HighlightMapGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgUtil::HighlightMapGenerator(copy, copyop), luna_wrapper_base(L) {};


protected:
	// osg::Vec4f osgUtil::HighlightMapGenerator::compute_color(const osg::Vec3f & R) const
	osg::Vec4f compute_color(const osg::Vec3f & R) const {
		if(_obj.pushFunction("compute_color")) {
			_obj.pushArg(&R);
			return *(_obj.callFunction<osg::Vec4f*>());
		}

		return HighlightMapGenerator::compute_color(R);
	};

public:
// osgUtil::HighlightMapGenerator & osgUtil::HighlightMapGenerator::operator=(const osgUtil::HighlightMapGenerator & arg1)
// void osgUtil::CubeMapGenerator::set_pixel(int index, int c, int r, const osg::Vec4f & color)
void public_set_pixel(int index, int c, int r, const osg::Vec4f & color) {
	return osgUtil::CubeMapGenerator::set_pixel(index, c, r, color);
};

// static osg::Vec4f osgUtil::CubeMapGenerator::vector_to_color(const osg::Vec3f & vec)
static osg::Vec4f public_vector_to_color(const osg::Vec3f & vec) {
	return osgUtil::CubeMapGenerator::vector_to_color(vec);
};

// osgUtil::CubeMapGenerator & osgUtil::CubeMapGenerator::operator=(const osgUtil::CubeMapGenerator & arg1)
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


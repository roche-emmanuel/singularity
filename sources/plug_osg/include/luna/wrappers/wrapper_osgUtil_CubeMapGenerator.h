#ifndef _WRAPPERS_WRAPPER_OSGUTIL_CUBEMAPGENERATOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_CUBEMAPGENERATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/CubeMapGenerator>

class wrapper_osgUtil_CubeMapGenerator : public osgUtil::CubeMapGenerator, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_CubeMapGenerator() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_CubeMapGenerator(lua_State* L, lua_Table* dum, int texture_size = 64) : osgUtil::CubeMapGenerator(texture_size), luna_wrapper_base(L) {};
	wrapper_osgUtil_CubeMapGenerator(lua_State* L, lua_Table* dum, const osgUtil::CubeMapGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgUtil::CubeMapGenerator(copy, copyop), luna_wrapper_base(L) {};


protected:
	// osg::Vec4f osgUtil::CubeMapGenerator::compute_color(const osg::Vec3f & R) const
	osg::Vec4f compute_color(const osg::Vec3f & R) const {
		THROW_IF(!_obj.pushFunction("compute_color"),"No implementation for abstract function osgUtil::CubeMapGenerator::compute_color");
		_obj.pushArg(&R);
		return *(_obj.callFunction<osg::Vec4f*>());
	};


};




#endif


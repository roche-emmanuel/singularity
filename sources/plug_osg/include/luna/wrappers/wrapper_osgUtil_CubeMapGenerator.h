#ifndef _WRAPPERS_WRAPPER_OSGUTIL_CUBEMAPGENERATOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_CUBEMAPGENERATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/CubeMapGenerator>

class wrapper_osgUtil_CubeMapGenerator : public osgUtil::CubeMapGenerator {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgUtil_CubeMapGenerator(lua_State* L, lua_Table* dum, int texture_size = 64) : osgUtil::CubeMapGenerator(texture_size), _obj(L,-1) {};
	wrapper_osgUtil_CubeMapGenerator(lua_State* L, lua_Table* dum, const osgUtil::CubeMapGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgUtil::CubeMapGenerator(copy, copyop), _obj(L,-1) {};


protected:
	// osg::Vec4f osgUtil::CubeMapGenerator::compute_color(const osg::Vec3f & R) const
	osg::Vec4f compute_color(const osg::Vec3f & R) const {
		THROW_IF(!_obj.pushFunction("compute_color"),"No implementation for abstract function osgUtil::CubeMapGenerator::compute_color");
		_obj.pushArg(&R);
		return *(_obj.callFunction<osg::Vec4f*>());
	};


};




#endif


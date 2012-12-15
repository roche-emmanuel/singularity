#ifndef _WRAPPERS_WRAPPER_OSGUTIL_REFLECTIONMAPGENERATOR_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_REFLECTIONMAPGENERATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgUtil/ReflectionMapGenerator>

class wrapper_osgUtil_ReflectionMapGenerator : public osgUtil::ReflectionMapGenerator {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osgUtil_ReflectionMapGenerator(lua_State* L, lua_Table* dum, int texture_size = 64) : osgUtil::ReflectionMapGenerator(texture_size), _obj(L,-1) {};
	wrapper_osgUtil_ReflectionMapGenerator(lua_State* L, lua_Table* dum, const osgUtil::ReflectionMapGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osgUtil::ReflectionMapGenerator(copy, copyop), _obj(L,-1) {};


protected:
	// osg::Vec4f osgUtil::ReflectionMapGenerator::compute_color(const osg::Vec3f & R) const
	osg::Vec4f compute_color(const osg::Vec3f & R) const {
		if(_obj.pushFunction("compute_color")) {
			_obj.pushArg(&R);
			return *(_obj.callFunction<osg::Vec4f*>());
		}

		return ReflectionMapGenerator::compute_color(R);
	};


};




#endif


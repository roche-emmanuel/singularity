#ifndef _WRAPPERS_WRAPPER_OSG_SHADER_PERCONTEXTSHADER_H_
#define _WRAPPERS_WRAPPER_OSG_SHADER_PERCONTEXTSHADER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Shader>

class wrapper_osg_Shader_PerContextShader : public osg::Shader::PerContextShader {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_Shader_PerContextShader(lua_State* L, lua_Table* dum, const osg::Shader * shader, unsigned int contextID) : osg::Shader::PerContextShader(shader, contextID), _obj(L,-1) {};




};




#endif


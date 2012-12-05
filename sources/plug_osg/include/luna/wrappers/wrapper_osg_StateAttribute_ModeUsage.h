#ifndef _WRAPPERS_WRAPPER_OSG_STATEATTRIBUTE_MODEUSAGE_H_
#define _WRAPPERS_WRAPPER_OSG_STATEATTRIBUTE_MODEUSAGE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/StateAttribute>

class wrapper_osg_StateAttribute_ModeUsage : public osg::StateAttribute::ModeUsage {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_StateAttribute_ModeUsage(lua_State* L, lua_Table* dum) : osg::StateAttribute::ModeUsage(), _obj(L,-1) {};

	// void osg::StateAttribute::ModeUsage::usesMode(unsigned int mode)
	void usesMode(unsigned int mode) {
		THROW_IF(!_obj.pushFunction("usesMode"),"No implementation for abstract function osg::StateAttribute::ModeUsage::usesMode");
		_obj.pushArg(mode);
		return (_obj.callFunction<void>());
	};

	// void osg::StateAttribute::ModeUsage::usesTextureMode(unsigned int mode)
	void usesTextureMode(unsigned int mode) {
		THROW_IF(!_obj.pushFunction("usesTextureMode"),"No implementation for abstract function osg::StateAttribute::ModeUsage::usesTextureMode");
		_obj.pushArg(mode);
		return (_obj.callFunction<void>());
	};




};




#endif

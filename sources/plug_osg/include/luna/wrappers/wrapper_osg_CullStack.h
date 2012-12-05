#ifndef _WRAPPERS_WRAPPER_OSG_CULLSTACK_H_
#define _WRAPPERS_WRAPPER_OSG_CULLSTACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/CullStack>

class wrapper_osg_CullStack : public osg::CullStack {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_CullStack(lua_State* L, lua_Table* dum) : osg::CullStack(), _obj(L,-1) {};
	wrapper_osg_CullStack(lua_State* L, lua_Table* dum, const osg::CullStack & cs) : osg::CullStack(cs), _obj(L,-1) {};

	// void osg::CullSettings::setDefaults()
	void setDefaults() {
		if(_obj.pushFunction("setDefaults")) {
			return (_obj.callFunction<void>());
		}

		return osg::CullSettings::setDefaults();
	};

	// void osg::CullSettings::inheritCullSettings(const osg::CullSettings & settings)
	void inheritCullSettings(const osg::CullSettings & settings) {
		if(_obj.pushFunction("inheritCullSettings")) {
			_obj.pushArg(&settings);
			return (_obj.callFunction<void>());
		}

		return osg::CullSettings::inheritCullSettings(settings);
	};

	// void osg::CullSettings::inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask)
	void inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask) {
		if(_obj.pushFunction("inheritCullSettings")) {
			_obj.pushArg(&settings);
			_obj.pushArg(inheritanceMask);
			return (_obj.callFunction<void>());
		}

		return osg::CullSettings::inheritCullSettings(settings, inheritanceMask);
	};




};




#endif


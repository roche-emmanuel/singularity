#ifndef _WRAPPERS_WRAPPER_OSG_CULLSTACK_H_
#define _WRAPPERS_WRAPPER_OSG_CULLSTACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/CullStack>

class wrapper_osg_CullStack : public osg::CullStack, public luna_wrapper_base {

public:
	

	wrapper_osg_CullStack(lua_State* L, lua_Table* dum) : osg::CullStack(), luna_wrapper_base(L) {};
	wrapper_osg_CullStack(lua_State* L, lua_Table* dum, const osg::CullStack & cs) : osg::CullStack(cs), luna_wrapper_base(L) {};

	// void osg::CullSettings::setDefaults()
	void setDefaults() {
		if(_obj.pushFunction("setDefaults")) {
			return (_obj.callFunction<void>());
		}

		return CullStack::setDefaults();
	};

	// void osg::CullSettings::inheritCullSettings(const osg::CullSettings & settings)
	void inheritCullSettings(const osg::CullSettings & settings) {
		if(_obj.pushFunction("inheritCullSettings")) {
			_obj.pushArg(&settings);
			return (_obj.callFunction<void>());
		}

		return CullStack::inheritCullSettings(settings);
	};

	// void osg::CullSettings::inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask)
	void inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask) {
		if(_obj.pushFunction("inheritCullSettings")) {
			_obj.pushArg(&settings);
			_obj.pushArg(inheritanceMask);
			return (_obj.callFunction<void>());
		}

		return CullStack::inheritCullSettings(settings, inheritanceMask);
	};




};




#endif


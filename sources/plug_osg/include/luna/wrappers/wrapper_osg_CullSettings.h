#ifndef _WRAPPERS_WRAPPER_OSG_CULLSETTINGS_H_
#define _WRAPPERS_WRAPPER_OSG_CULLSETTINGS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/CullSettings>

class wrapper_osg_CullSettings : public osg::CullSettings {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_osg_CullSettings(lua_State* L, lua_Table* dum) : osg::CullSettings(), _obj(L,-1) {};
	wrapper_osg_CullSettings(lua_State* L, lua_Table* dum, osg::ArgumentParser & arguments) : osg::CullSettings(arguments), _obj(L,-1) {};
	wrapper_osg_CullSettings(lua_State* L, lua_Table* dum, const osg::CullSettings & cs) : osg::CullSettings(cs), _obj(L,-1) {};

	// void osg::CullSettings::setDefaults()
	void setDefaults() {
		if(_obj.pushFunction("setDefaults")) {
			return (_obj.callFunction<void>());
		}

		return CullSettings::setDefaults();
	};

	// void osg::CullSettings::inheritCullSettings(const osg::CullSettings & settings)
	void inheritCullSettings(const osg::CullSettings & settings) {
		if(_obj.pushFunction("inheritCullSettings")) {
			_obj.pushArg(&settings);
			return (_obj.callFunction<void>());
		}

		return CullSettings::inheritCullSettings(settings);
	};

	// void osg::CullSettings::inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask)
	void inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask) {
		if(_obj.pushFunction("inheritCullSettings")) {
			_obj.pushArg(&settings);
			_obj.pushArg(inheritanceMask);
			return (_obj.callFunction<void>());
		}

		return CullSettings::inheritCullSettings(settings, inheritanceMask);
	};




};




#endif


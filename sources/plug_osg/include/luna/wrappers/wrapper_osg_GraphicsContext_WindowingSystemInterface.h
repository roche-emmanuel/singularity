#ifndef _WRAPPERS_WRAPPER_OSG_GRAPHICSCONTEXT_WINDOWINGSYSTEMINTERFACE_H_
#define _WRAPPERS_WRAPPER_OSG_GRAPHICSCONTEXT_WINDOWINGSYSTEMINTERFACE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/GraphicsContext>

class wrapper_osg_GraphicsContext_WindowingSystemInterface : public osg::GraphicsContext::WindowingSystemInterface, public luna_wrapper_base {

public:
	


	// osg::GraphicsContext * osg::GraphicsContext::WindowingSystemInterface::createGraphicsContext(osg::GraphicsContext::Traits * traits)
	osg::GraphicsContext * createGraphicsContext(osg::GraphicsContext::Traits * traits) {
		THROW_IF(!_obj.pushFunction("createGraphicsContext"),"No implementation for abstract function osg::GraphicsContext::WindowingSystemInterface::createGraphicsContext");
		_obj.pushArg(traits);
		return (_obj.callFunction<osg::GraphicsContext*>());
	};




public:
// unsigned int osg::GraphicsContext::WindowingSystemInterface::getNumScreens(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier = osg::GraphicsContext::ScreenIdentifier ())
unsigned int getNumScreens(const osg::GraphicsContext::ScreenIdentifier &) {
	THROW_IF(true,"The function call unsigned int osg::GraphicsContext::WindowingSystemInterface::getNumScreens(const osg::GraphicsContext::ScreenIdentifier &) is not implemented in wrapper.");
	return unsigned int();
};

public:
// void osg::GraphicsContext::WindowingSystemInterface::getScreenSettings(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier, osg::GraphicsContext::ScreenSettings & resolution)
void getScreenSettings(const osg::GraphicsContext::ScreenIdentifier &, osg::GraphicsContext::ScreenSettings &) {
	THROW_IF(true,"The function call void osg::GraphicsContext::WindowingSystemInterface::getScreenSettings(const osg::GraphicsContext::ScreenIdentifier &, osg::GraphicsContext::ScreenSettings &) is not implemented in wrapper.");
};

public:
// void osg::GraphicsContext::WindowingSystemInterface::enumerateScreenSettings(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier, osg::GraphicsContext::ScreenSettingsList & resolutionList)
void enumerateScreenSettings(const osg::GraphicsContext::ScreenIdentifier &, osg::GraphicsContext::ScreenSettingsList &) {
	THROW_IF(true,"The function call void osg::GraphicsContext::WindowingSystemInterface::enumerateScreenSettings(const osg::GraphicsContext::ScreenIdentifier &, osg::GraphicsContext::ScreenSettingsList &) is not implemented in wrapper.");
};

};




#endif


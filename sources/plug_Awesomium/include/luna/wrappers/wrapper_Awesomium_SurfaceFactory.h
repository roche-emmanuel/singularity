#ifndef _WRAPPERS_WRAPPER_AWESOMIUM_SURFACEFACTORY_H_
#define _WRAPPERS_WRAPPER_AWESOMIUM_SURFACEFACTORY_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Awesomium/Surface.h>

class wrapper_Awesomium_SurfaceFactory : public Awesomium::SurfaceFactory {
protected:
	sgt::LuaObject _obj;
	
public:
	


	// Awesomium::Surface * Awesomium::SurfaceFactory::CreateSurface(Awesomium::WebView * view, int width, int height)
	Awesomium::Surface * CreateSurface(Awesomium::WebView * view, int width, int height) {
		THROW_IF(!_obj.pushFunction("CreateSurface"),"No implementation for abstract function Awesomium::SurfaceFactory::CreateSurface");
		_obj.pushArg(view);
		_obj.pushArg(width);
		_obj.pushArg(height);
		return (_obj.callFunction<Awesomium::Surface*>());
	};

	// void Awesomium::SurfaceFactory::DestroySurface(Awesomium::Surface * surface)
	void DestroySurface(Awesomium::Surface * surface) {
		THROW_IF(!_obj.pushFunction("DestroySurface"),"No implementation for abstract function Awesomium::SurfaceFactory::DestroySurface");
		_obj.pushArg(surface);
		return (_obj.callFunction<void>());
	};




};




#endif


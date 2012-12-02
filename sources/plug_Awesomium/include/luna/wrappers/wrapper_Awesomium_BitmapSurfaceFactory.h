#ifndef _WRAPPERS_WRAPPER_AWESOMIUM_BITMAPSURFACEFACTORY_H_
#define _WRAPPERS_WRAPPER_AWESOMIUM_BITMAPSURFACEFACTORY_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Awesomium/BitmapSurface.h>

class wrapper_Awesomium_BitmapSurfaceFactory : public Awesomium::BitmapSurfaceFactory {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_Awesomium_BitmapSurfaceFactory(lua_State* L, lua_Table* dum) : Awesomium::BitmapSurfaceFactory(), _obj(L,-1) {};

	// Awesomium::Surface * Awesomium::BitmapSurfaceFactory::CreateSurface(Awesomium::WebView * view, int width, int height)
	Awesomium::Surface * CreateSurface(Awesomium::WebView * view, int width, int height) {
		if(_obj.pushFunction("CreateSurface")) {
			_obj.pushArg(view);
			_obj.pushArg(width);
			_obj.pushArg(height);
			return (_obj.callFunction<Awesomium::Surface*>());
		}

		return Awesomium::BitmapSurfaceFactory::CreateSurface(view, width, height);
	};

	// void Awesomium::BitmapSurfaceFactory::DestroySurface(Awesomium::Surface * surface)
	void DestroySurface(Awesomium::Surface * surface) {
		if(_obj.pushFunction("DestroySurface")) {
			_obj.pushArg(surface);
			return (_obj.callFunction<void>());
		}

		return Awesomium::BitmapSurfaceFactory::DestroySurface(surface);
	};




};




#endif


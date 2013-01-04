#ifndef _WRAPPERS_WRAPPER_AWESOMIUM_BITMAPSURFACEFACTORY_H_
#define _WRAPPERS_WRAPPER_AWESOMIUM_BITMAPSURFACEFACTORY_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Awesomium/BitmapSurface.h>

class wrapper_Awesomium_BitmapSurfaceFactory : public Awesomium::BitmapSurfaceFactory, public luna_wrapper_base {

public:
		

	~wrapper_Awesomium_BitmapSurfaceFactory() {
		logDEBUG3("Calling delete function for wrapper Awesomium_BitmapSurfaceFactory");
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_Awesomium_BitmapSurfaceFactory(lua_State* L, lua_Table* dum) : Awesomium::BitmapSurfaceFactory(), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// Awesomium::Surface * Awesomium::BitmapSurfaceFactory::CreateSurface(Awesomium::WebView * view, int width, int height)
	Awesomium::Surface * CreateSurface(Awesomium::WebView * view, int width, int height) {
		if(_obj.pushFunction("CreateSurface")) {
			_obj.pushArg(view);
			_obj.pushArg(width);
			_obj.pushArg(height);
			return (_obj.callFunction<Awesomium::Surface*>());
		}

		return BitmapSurfaceFactory::CreateSurface(view, width, height);
	};

	// void Awesomium::BitmapSurfaceFactory::DestroySurface(Awesomium::Surface * surface)
	void DestroySurface(Awesomium::Surface * surface) {
		if(_obj.pushFunction("DestroySurface")) {
			_obj.pushArg(surface);
			return (_obj.callFunction<void>());
		}

		return BitmapSurfaceFactory::DestroySurface(surface);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


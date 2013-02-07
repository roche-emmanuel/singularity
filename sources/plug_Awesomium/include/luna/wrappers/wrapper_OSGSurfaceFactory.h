#ifndef _WRAPPERS_WRAPPER_OSGSURFACEFACTORY_H_
#define _WRAPPERS_WRAPPER_OSGSURFACEFACTORY_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <OSGSurfaceFactory.h>

class wrapper_OSGSurfaceFactory : public OSGSurfaceFactory, public luna_wrapper_base {

public:
		

	~wrapper_OSGSurfaceFactory() {
		logDEBUG3("Calling delete function for wrapper OSGSurfaceFactory");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((OSGSurfaceFactory*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_OSGSurfaceFactory(lua_State* L, lua_Table* dum) 
		: OSGSurfaceFactory(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((OSGSurfaceFactory*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// Awesomium::Surface * OSGSurfaceFactory::CreateSurface(Awesomium::WebView * view, int width, int height)
	Awesomium::Surface * CreateSurface(Awesomium::WebView * view, int width, int height) {
		if(_obj.pushFunction("CreateSurface")) {
			_obj.pushArg((OSGSurfaceFactory*)this);
			_obj.pushArg(view);
			_obj.pushArg(width);
			_obj.pushArg(height);
			return (_obj.callFunction<Awesomium::Surface*>());
		}

		return OSGSurfaceFactory::CreateSurface(view, width, height);
	};

	// void OSGSurfaceFactory::DestroySurface(Awesomium::Surface * surface)
	void DestroySurface(Awesomium::Surface * surface) {
		if(_obj.pushFunction("DestroySurface")) {
			_obj.pushArg((OSGSurfaceFactory*)this);
			_obj.pushArg(surface);
			return (_obj.callFunction<void>());
		}

		return OSGSurfaceFactory::DestroySurface(surface);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


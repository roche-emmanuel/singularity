#ifndef _WRAPPERS_WRAPPER_AWESOMIUM_SURFACEFACTORY_H_
#define _WRAPPERS_WRAPPER_AWESOMIUM_SURFACEFACTORY_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Awesomium/Surface.h>

class wrapper_Awesomium_SurfaceFactory : public Awesomium::SurfaceFactory, public luna_wrapper_base {

public:
		

	~wrapper_Awesomium_SurfaceFactory() {
		logDEBUG3("Calling delete function for wrapper Awesomium_SurfaceFactory");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((Awesomium::SurfaceFactory*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_Awesomium_SurfaceFactory(lua_State* L, lua_Table* dum) 
		: Awesomium::SurfaceFactory(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((Awesomium::SurfaceFactory*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// Awesomium::Surface * Awesomium::SurfaceFactory::CreateSurface(Awesomium::WebView * view, int width, int height)
	Awesomium::Surface * CreateSurface(Awesomium::WebView * view, int width, int height) {
		THROW_IF(!_obj.pushFunction("CreateSurface"),"No implementation for abstract function Awesomium::SurfaceFactory::CreateSurface");
		_obj.pushArg((Awesomium::SurfaceFactory*)this);
		_obj.pushArg(view);
		_obj.pushArg(width);
		_obj.pushArg(height);
		return (_obj.callFunction<Awesomium::Surface*>());
	};

	// void Awesomium::SurfaceFactory::DestroySurface(Awesomium::Surface * surface)
	void DestroySurface(Awesomium::Surface * surface) {
		THROW_IF(!_obj.pushFunction("DestroySurface"),"No implementation for abstract function Awesomium::SurfaceFactory::DestroySurface");
		_obj.pushArg((Awesomium::SurfaceFactory*)this);
		_obj.pushArg(surface);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


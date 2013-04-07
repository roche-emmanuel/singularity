#ifndef _WRAPPERS_WRAPPER_AWESOMIUM_WEBCORE_H_
#define _WRAPPERS_WRAPPER_AWESOMIUM_WEBCORE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <Awesomium/WebCore.h>

class wrapper_Awesomium_WebCore : public Awesomium::WebCore, public luna_wrapper_base {

public:
		

	~wrapper_Awesomium_WebCore() {
		logDEBUG3("Calling delete function for wrapper Awesomium_WebCore");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((Awesomium::WebCore*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_Awesomium_WebCore(lua_State* L, lua_Table* dum) 
		: Awesomium::WebCore(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((Awesomium::WebCore*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// Awesomium::WebSession * Awesomium::WebCore::CreateWebSession(const Awesomium::WebString & path, const Awesomium::WebPreferences & prefs)
	Awesomium::WebSession * CreateWebSession(const Awesomium::WebString & path, const Awesomium::WebPreferences & prefs) {
		THROW_IF(!_obj.pushFunction("CreateWebSession"),"No implementation for abstract function Awesomium::WebCore::CreateWebSession");
		_obj.pushArg((Awesomium::WebCore*)this);
		_obj.pushArg(&path);
		_obj.pushArg(&prefs);
		return (_obj.callFunction<Awesomium::WebSession*>());
	};

	// Awesomium::WebView * Awesomium::WebCore::CreateWebView(int width, int height, Awesomium::WebSession * session = 0, Awesomium::WebViewType type = Awesomium::kWebViewType_Offscreen)
	Awesomium::WebView * CreateWebView(int width, int height, Awesomium::WebSession * session = 0, Awesomium::WebViewType type = Awesomium::kWebViewType_Offscreen) {
		THROW_IF(!_obj.pushFunction("CreateWebView"),"No implementation for abstract function Awesomium::WebCore::CreateWebView");
		_obj.pushArg((Awesomium::WebCore*)this);
		_obj.pushArg(width);
		_obj.pushArg(height);
		_obj.pushArg(session);
		_obj.pushArg((int)type);
		return (_obj.callFunction<Awesomium::WebView*>());
	};

	// void Awesomium::WebCore::set_surface_factory(Awesomium::SurfaceFactory * factory)
	void set_surface_factory(Awesomium::SurfaceFactory * factory) {
		THROW_IF(!_obj.pushFunction("set_surface_factory"),"No implementation for abstract function Awesomium::WebCore::set_surface_factory");
		_obj.pushArg((Awesomium::WebCore*)this);
		_obj.pushArg(factory);
		return (_obj.callFunction<void>());
	};

	// Awesomium::SurfaceFactory * Awesomium::WebCore::surface_factory() const
	Awesomium::SurfaceFactory * surface_factory() const {
		THROW_IF(!_obj.pushFunction("surface_factory"),"No implementation for abstract function Awesomium::WebCore::surface_factory");
		_obj.pushArg((Awesomium::WebCore*)this);
		return (_obj.callFunction<Awesomium::SurfaceFactory*>());
	};

	// void Awesomium::WebCore::set_resource_interceptor(Awesomium::ResourceInterceptor * interceptor)
	void set_resource_interceptor(Awesomium::ResourceInterceptor * interceptor) {
		THROW_IF(!_obj.pushFunction("set_resource_interceptor"),"No implementation for abstract function Awesomium::WebCore::set_resource_interceptor");
		_obj.pushArg((Awesomium::WebCore*)this);
		_obj.pushArg(interceptor);
		return (_obj.callFunction<void>());
	};

	// Awesomium::ResourceInterceptor * Awesomium::WebCore::resource_interceptor() const
	Awesomium::ResourceInterceptor * resource_interceptor() const {
		THROW_IF(!_obj.pushFunction("resource_interceptor"),"No implementation for abstract function Awesomium::WebCore::resource_interceptor");
		_obj.pushArg((Awesomium::WebCore*)this);
		return (_obj.callFunction<Awesomium::ResourceInterceptor*>());
	};

	// void Awesomium::WebCore::Update()
	void Update() {
		THROW_IF(!_obj.pushFunction("Update"),"No implementation for abstract function Awesomium::WebCore::Update");
		_obj.pushArg((Awesomium::WebCore*)this);
		return (_obj.callFunction<void>());
	};

	// const char * Awesomium::WebCore::version_string() const
	const char * version_string() const {
		THROW_IF(!_obj.pushFunction("version_string"),"No implementation for abstract function Awesomium::WebCore::version_string");
		_obj.pushArg((Awesomium::WebCore*)this);
		return (_obj.callFunction<const char*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


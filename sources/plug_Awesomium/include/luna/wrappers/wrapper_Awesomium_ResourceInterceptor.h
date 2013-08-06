#ifndef _WRAPPERS_WRAPPER_AWESOMIUM_RESOURCEINTERCEPTOR_H_
#define _WRAPPERS_WRAPPER_AWESOMIUM_RESOURCEINTERCEPTOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <Awesomium/ResourceInterceptor.h>

class wrapper_Awesomium_ResourceInterceptor : public Awesomium::ResourceInterceptor, public luna_wrapper_base {

public:
		

	~wrapper_Awesomium_ResourceInterceptor() {
		logDEBUG3("Calling delete function for wrapper Awesomium_ResourceInterceptor");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((Awesomium::ResourceInterceptor*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_Awesomium_ResourceInterceptor(lua_State* L, lua_Table* dum) 
		: Awesomium::ResourceInterceptor(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((Awesomium::ResourceInterceptor*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// Awesomium::ResourceResponse * Awesomium::ResourceInterceptor::OnRequest(Awesomium::ResourceRequest * request)
	Awesomium::ResourceResponse * OnRequest(Awesomium::ResourceRequest * request) {
		if(_obj.pushFunction("OnRequest")) {
			_obj.pushArg((Awesomium::ResourceInterceptor*)this);
			_obj.pushArg(request);
			return (_obj.callFunction<Awesomium::ResourceResponse*>());
		}

		return ResourceInterceptor::OnRequest(request);
	};

	// bool Awesomium::ResourceInterceptor::OnFilterNavigation(int origin_process_id, int origin_routing_id, const Awesomium::WebString & method, const Awesomium::WebURL & url, bool is_main_frame)
	bool OnFilterNavigation(int origin_process_id, int origin_routing_id, const Awesomium::WebString & method, const Awesomium::WebURL & url, bool is_main_frame) {
		if(_obj.pushFunction("OnFilterNavigation")) {
			_obj.pushArg((Awesomium::ResourceInterceptor*)this);
			_obj.pushArg(origin_process_id);
			_obj.pushArg(origin_routing_id);
			_obj.pushArg(&method);
			_obj.pushArg(&url);
			_obj.pushArg(is_main_frame);
			return (_obj.callFunction<bool>());
		}

		return ResourceInterceptor::OnFilterNavigation(origin_process_id, origin_routing_id, method, url, is_main_frame);
	};

	// void Awesomium::ResourceInterceptor::OnWillDownload(int origin_process_id, int origin_routing_id, const Awesomium::WebURL & url)
	void OnWillDownload(int origin_process_id, int origin_routing_id, const Awesomium::WebURL & url) {
		if(_obj.pushFunction("OnWillDownload")) {
			_obj.pushArg((Awesomium::ResourceInterceptor*)this);
			_obj.pushArg(origin_process_id);
			_obj.pushArg(origin_routing_id);
			_obj.pushArg(&url);
			return (_obj.callFunction<void>());
		}

		return ResourceInterceptor::OnWillDownload(origin_process_id, origin_routing_id, url);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


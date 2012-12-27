#ifndef _WRAPPERS_WRAPPER_AWESOMIUM_RESOURCEINTERCEPTOR_H_
#define _WRAPPERS_WRAPPER_AWESOMIUM_RESOURCEINTERCEPTOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Awesomium/ResourceInterceptor.h>

class wrapper_Awesomium_ResourceInterceptor : public Awesomium::ResourceInterceptor, public luna_wrapper_base {

public:
		

	~wrapper_Awesomium_ResourceInterceptor() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	

	// Public virtual methods:
	// Awesomium::ResourceResponse * Awesomium::ResourceInterceptor::OnRequest(Awesomium::ResourceRequest * request)
	Awesomium::ResourceResponse * OnRequest(Awesomium::ResourceRequest * request) {
		if(_obj.pushFunction("OnRequest")) {
			_obj.pushArg(request);
			return (_obj.callFunction<Awesomium::ResourceResponse*>());
		}

		return ResourceInterceptor::OnRequest(request);
	};



	// Protected virtual methods:

	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


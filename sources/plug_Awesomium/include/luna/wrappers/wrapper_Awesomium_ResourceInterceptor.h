#ifndef _WRAPPERS_WRAPPER_AWESOMIUM_RESOURCEINTERCEPTOR_H_
#define _WRAPPERS_WRAPPER_AWESOMIUM_RESOURCEINTERCEPTOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
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


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


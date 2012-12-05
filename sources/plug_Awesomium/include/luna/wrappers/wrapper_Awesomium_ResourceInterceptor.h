#ifndef _WRAPPERS_WRAPPER_AWESOMIUM_RESOURCEINTERCEPTOR_H_
#define _WRAPPERS_WRAPPER_AWESOMIUM_RESOURCEINTERCEPTOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Awesomium/ResourceInterceptor.h>

class wrapper_Awesomium_ResourceInterceptor : public Awesomium::ResourceInterceptor {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_Awesomium_ResourceInterceptor(lua_State* L, lua_Table* dum) : Awesomium::ResourceInterceptor(), _obj(L,-1) {};

	// Awesomium::ResourceResponse * Awesomium::ResourceInterceptor::OnRequest(Awesomium::ResourceRequest * request)
	Awesomium::ResourceResponse * OnRequest(Awesomium::ResourceRequest * request) {
		if(_obj.pushFunction("OnRequest")) {
			_obj.pushArg(request);
			return (_obj.callFunction<Awesomium::ResourceResponse*>());
		}

		return Awesomium::ResourceInterceptor::OnRequest(request);
	};




};




#endif


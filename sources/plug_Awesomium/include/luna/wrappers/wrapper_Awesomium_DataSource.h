#ifndef _WRAPPERS_WRAPPER_AWESOMIUM_DATASOURCE_H_
#define _WRAPPERS_WRAPPER_AWESOMIUM_DATASOURCE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Awesomium/DataSource.h>

class wrapper_Awesomium_DataSource : public Awesomium::DataSource {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_Awesomium_DataSource(lua_State* L, lua_Table* dum) : Awesomium::DataSource(), _obj(L,-1) {};

	// void Awesomium::DataSource::OnRequest(int request_id, const Awesomium::WebString & path)
	void OnRequest(int request_id, const Awesomium::WebString & path) {
		THROW_IF(!_obj.pushFunction("OnRequest"),"No implementation for abstract function Awesomium::DataSource::OnRequest");
		_obj.pushArg(request_id);
		_obj.pushArg(&path);
		return (_obj.callFunction<void>());
	};




};




#endif


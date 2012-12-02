#ifndef _WRAPPERS_WRAPPER_AWESOMIUM_DATAPAKSOURCE_H_
#define _WRAPPERS_WRAPPER_AWESOMIUM_DATAPAKSOURCE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Awesomium/DataPak.h>

class wrapper_Awesomium_DataPakSource : public Awesomium::DataPakSource {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_Awesomium_DataPakSource(lua_State* L, lua_Table* dum, const Awesomium::WebString & pak_path) : Awesomium::DataPakSource(pak_path), _obj(L,-1) {};

	// void Awesomium::DataPakSource::OnRequest(int request_id, const Awesomium::WebString & path)
	void OnRequest(int request_id, const Awesomium::WebString & path) {
		if(_obj.pushFunction("OnRequest")) {
			_obj.pushArg(request_id);
			_obj.pushArg(&path);
			return (_obj.callFunction<void>());
		}

		return Awesomium::DataPakSource::OnRequest(request_id, path);
	};




};




#endif


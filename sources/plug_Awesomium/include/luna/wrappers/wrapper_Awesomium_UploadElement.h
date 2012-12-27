#ifndef _WRAPPERS_WRAPPER_AWESOMIUM_UPLOADELEMENT_H_
#define _WRAPPERS_WRAPPER_AWESOMIUM_UPLOADELEMENT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Awesomium/ResourceInterceptor.h>

class wrapper_Awesomium_UploadElement : public Awesomium::UploadElement, public luna_wrapper_base {

public:
		

	~wrapper_Awesomium_UploadElement() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	

	// Public virtual methods:
	// bool Awesomium::UploadElement::IsFilePath() const
	bool IsFilePath() const {
		THROW_IF(!_obj.pushFunction("IsFilePath"),"No implementation for abstract function Awesomium::UploadElement::IsFilePath");
		return (_obj.callFunction<bool>());
	};

	// bool Awesomium::UploadElement::IsBytes() const
	bool IsBytes() const {
		THROW_IF(!_obj.pushFunction("IsBytes"),"No implementation for abstract function Awesomium::UploadElement::IsBytes");
		return (_obj.callFunction<bool>());
	};

	// unsigned int Awesomium::UploadElement::num_bytes() const
	unsigned int num_bytes() const {
		THROW_IF(!_obj.pushFunction("num_bytes"),"No implementation for abstract function Awesomium::UploadElement::num_bytes");
		return (_obj.callFunction<unsigned int>());
	};

	// const unsigned char * Awesomium::UploadElement::bytes() const
	const unsigned char * bytes() const {
		THROW_IF(!_obj.pushFunction("bytes"),"No implementation for abstract function Awesomium::UploadElement::bytes");
		return (_obj.callFunction<unsigned char*>());
	};

	// Awesomium::WebString Awesomium::UploadElement::file_path() const
	Awesomium::WebString file_path() const {
		THROW_IF(!_obj.pushFunction("file_path"),"No implementation for abstract function Awesomium::UploadElement::file_path");
		return *(_obj.callFunction<Awesomium::WebString*>());
	};



	// Protected virtual methods:

	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


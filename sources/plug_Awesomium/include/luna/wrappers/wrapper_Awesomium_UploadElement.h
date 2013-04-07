#ifndef _WRAPPERS_WRAPPER_AWESOMIUM_UPLOADELEMENT_H_
#define _WRAPPERS_WRAPPER_AWESOMIUM_UPLOADELEMENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <Awesomium/ResourceInterceptor.h>

class wrapper_Awesomium_UploadElement : public Awesomium::UploadElement, public luna_wrapper_base {

public:
		

	~wrapper_Awesomium_UploadElement() {
		logDEBUG3("Calling delete function for wrapper Awesomium_UploadElement");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((Awesomium::UploadElement*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_Awesomium_UploadElement(lua_State* L, lua_Table* dum) 
		: Awesomium::UploadElement(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((Awesomium::UploadElement*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool Awesomium::UploadElement::IsFilePath() const
	bool IsFilePath() const {
		THROW_IF(!_obj.pushFunction("IsFilePath"),"No implementation for abstract function Awesomium::UploadElement::IsFilePath");
		_obj.pushArg((Awesomium::UploadElement*)this);
		return (_obj.callFunction<bool>());
	};

	// bool Awesomium::UploadElement::IsBytes() const
	bool IsBytes() const {
		THROW_IF(!_obj.pushFunction("IsBytes"),"No implementation for abstract function Awesomium::UploadElement::IsBytes");
		_obj.pushArg((Awesomium::UploadElement*)this);
		return (_obj.callFunction<bool>());
	};

	// unsigned int Awesomium::UploadElement::num_bytes() const
	unsigned int num_bytes() const {
		THROW_IF(!_obj.pushFunction("num_bytes"),"No implementation for abstract function Awesomium::UploadElement::num_bytes");
		_obj.pushArg((Awesomium::UploadElement*)this);
		return (_obj.callFunction<unsigned int>());
	};

	// const unsigned char * Awesomium::UploadElement::bytes() const
	const unsigned char * bytes() const {
		THROW_IF(!_obj.pushFunction("bytes"),"No implementation for abstract function Awesomium::UploadElement::bytes");
		_obj.pushArg((Awesomium::UploadElement*)this);
		return (unsigned char*)(_obj.callFunction<void*>());
	};

	// Awesomium::WebString Awesomium::UploadElement::file_path() const
	Awesomium::WebString file_path() const {
		THROW_IF(!_obj.pushFunction("file_path"),"No implementation for abstract function Awesomium::UploadElement::file_path");
		_obj.pushArg((Awesomium::UploadElement*)this);
		return *(_obj.callFunction<Awesomium::WebString*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


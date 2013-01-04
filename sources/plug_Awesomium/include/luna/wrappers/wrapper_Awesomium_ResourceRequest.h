#ifndef _WRAPPERS_WRAPPER_AWESOMIUM_RESOURCEREQUEST_H_
#define _WRAPPERS_WRAPPER_AWESOMIUM_RESOURCEREQUEST_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Awesomium/ResourceInterceptor.h>

class wrapper_Awesomium_ResourceRequest : public Awesomium::ResourceRequest, public luna_wrapper_base {

public:
		

	~wrapper_Awesomium_ResourceRequest() {
		logDEBUG3("Calling delete function for wrapper Awesomium_ResourceRequest");
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_Awesomium_ResourceRequest(lua_State* L, lua_Table* dum) : Awesomium::ResourceRequest(), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void Awesomium::ResourceRequest::Cancel()
	void Cancel() {
		THROW_IF(!_obj.pushFunction("Cancel"),"No implementation for abstract function Awesomium::ResourceRequest::Cancel");
		return (_obj.callFunction<void>());
	};

	// int Awesomium::ResourceRequest::origin_process_id()
	int origin_process_id() {
		THROW_IF(!_obj.pushFunction("origin_process_id"),"No implementation for abstract function Awesomium::ResourceRequest::origin_process_id");
		return (_obj.callFunction<int>());
	};

	// Awesomium::WebURL Awesomium::ResourceRequest::url()
	Awesomium::WebURL url() {
		THROW_IF(!_obj.pushFunction("url"),"No implementation for abstract function Awesomium::ResourceRequest::url");
		return *(_obj.callFunction<Awesomium::WebURL*>());
	};

	// Awesomium::WebString Awesomium::ResourceRequest::method()
	Awesomium::WebString method() {
		THROW_IF(!_obj.pushFunction("method"),"No implementation for abstract function Awesomium::ResourceRequest::method");
		return *(_obj.callFunction<Awesomium::WebString*>());
	};

	// void Awesomium::ResourceRequest::set_method(const Awesomium::WebString & method)
	void set_method(const Awesomium::WebString & method) {
		THROW_IF(!_obj.pushFunction("set_method"),"No implementation for abstract function Awesomium::ResourceRequest::set_method");
		_obj.pushArg(&method);
		return (_obj.callFunction<void>());
	};

	// Awesomium::WebString Awesomium::ResourceRequest::referrer()
	Awesomium::WebString referrer() {
		THROW_IF(!_obj.pushFunction("referrer"),"No implementation for abstract function Awesomium::ResourceRequest::referrer");
		return *(_obj.callFunction<Awesomium::WebString*>());
	};

	// void Awesomium::ResourceRequest::set_referrer(const Awesomium::WebString & referrer)
	void set_referrer(const Awesomium::WebString & referrer) {
		THROW_IF(!_obj.pushFunction("set_referrer"),"No implementation for abstract function Awesomium::ResourceRequest::set_referrer");
		_obj.pushArg(&referrer);
		return (_obj.callFunction<void>());
	};

	// Awesomium::WebString Awesomium::ResourceRequest::extra_headers()
	Awesomium::WebString extra_headers() {
		THROW_IF(!_obj.pushFunction("extra_headers"),"No implementation for abstract function Awesomium::ResourceRequest::extra_headers");
		return *(_obj.callFunction<Awesomium::WebString*>());
	};

	// void Awesomium::ResourceRequest::set_extra_headers(const Awesomium::WebString & headers)
	void set_extra_headers(const Awesomium::WebString & headers) {
		THROW_IF(!_obj.pushFunction("set_extra_headers"),"No implementation for abstract function Awesomium::ResourceRequest::set_extra_headers");
		_obj.pushArg(&headers);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::ResourceRequest::AppendExtraHeader(const Awesomium::WebString & name, const Awesomium::WebString & value)
	void AppendExtraHeader(const Awesomium::WebString & name, const Awesomium::WebString & value) {
		THROW_IF(!_obj.pushFunction("AppendExtraHeader"),"No implementation for abstract function Awesomium::ResourceRequest::AppendExtraHeader");
		_obj.pushArg(&name);
		_obj.pushArg(&value);
		return (_obj.callFunction<void>());
	};

	// unsigned int Awesomium::ResourceRequest::num_upload_elements()
	unsigned int num_upload_elements() {
		THROW_IF(!_obj.pushFunction("num_upload_elements"),"No implementation for abstract function Awesomium::ResourceRequest::num_upload_elements");
		return (_obj.callFunction<unsigned int>());
	};

	// const Awesomium::UploadElement * Awesomium::ResourceRequest::GetUploadElement(unsigned int idx)
	const Awesomium::UploadElement * GetUploadElement(unsigned int idx) {
		THROW_IF(!_obj.pushFunction("GetUploadElement"),"No implementation for abstract function Awesomium::ResourceRequest::GetUploadElement");
		_obj.pushArg(idx);
		return (_obj.callFunction<Awesomium::UploadElement*>());
	};

	// void Awesomium::ResourceRequest::ClearUploadElements()
	void ClearUploadElements() {
		THROW_IF(!_obj.pushFunction("ClearUploadElements"),"No implementation for abstract function Awesomium::ResourceRequest::ClearUploadElements");
		return (_obj.callFunction<void>());
	};

	// void Awesomium::ResourceRequest::AppendUploadFilePath(const Awesomium::WebString & path)
	void AppendUploadFilePath(const Awesomium::WebString & path) {
		THROW_IF(!_obj.pushFunction("AppendUploadFilePath"),"No implementation for abstract function Awesomium::ResourceRequest::AppendUploadFilePath");
		_obj.pushArg(&path);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::ResourceRequest::AppendUploadBytes(const char * bytes, unsigned int num_bytes)
	void AppendUploadBytes(const char * bytes, unsigned int num_bytes) {
		THROW_IF(!_obj.pushFunction("AppendUploadBytes"),"No implementation for abstract function Awesomium::ResourceRequest::AppendUploadBytes");
		_obj.pushArg(bytes);
		_obj.pushArg(num_bytes);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


#ifndef _WRAPPERS_WRAPPER_AWESOMIUM_WEBSESSION_H_
#define _WRAPPERS_WRAPPER_AWESOMIUM_WEBSESSION_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Awesomium/WebSession.h>

class wrapper_Awesomium_WebSession : public Awesomium::WebSession, public luna_wrapper_base {

public:
	


	// void Awesomium::WebSession::Release() const
	void Release() const {
		THROW_IF(!_obj.pushFunction("Release"),"No implementation for abstract function Awesomium::WebSession::Release");
		return (_obj.callFunction<void>());
	};

	// bool Awesomium::WebSession::IsOnDisk() const
	bool IsOnDisk() const {
		THROW_IF(!_obj.pushFunction("IsOnDisk"),"No implementation for abstract function Awesomium::WebSession::IsOnDisk");
		return (_obj.callFunction<bool>());
	};

	// Awesomium::WebString Awesomium::WebSession::data_path() const
	Awesomium::WebString data_path() const {
		THROW_IF(!_obj.pushFunction("data_path"),"No implementation for abstract function Awesomium::WebSession::data_path");
		return *(_obj.callFunction<Awesomium::WebString*>());
	};

	// const Awesomium::WebPreferences & Awesomium::WebSession::preferences() const
	const Awesomium::WebPreferences & preferences() const {
		THROW_IF(!_obj.pushFunction("preferences"),"No implementation for abstract function Awesomium::WebSession::preferences");
		return *(_obj.callFunction<Awesomium::WebPreferences*>());
	};

	// void Awesomium::WebSession::AddDataSource(const Awesomium::WebString & asset_host, Awesomium::DataSource * source)
	void AddDataSource(const Awesomium::WebString & asset_host, Awesomium::DataSource * source) {
		THROW_IF(!_obj.pushFunction("AddDataSource"),"No implementation for abstract function Awesomium::WebSession::AddDataSource");
		_obj.pushArg(&asset_host);
		_obj.pushArg(source);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebSession::SetCookie(const Awesomium::WebURL & url, const Awesomium::WebString & cookie_string, bool is_http_only, bool force_session_cookie)
	void SetCookie(const Awesomium::WebURL & url, const Awesomium::WebString & cookie_string, bool is_http_only, bool force_session_cookie) {
		THROW_IF(!_obj.pushFunction("SetCookie"),"No implementation for abstract function Awesomium::WebSession::SetCookie");
		_obj.pushArg(&url);
		_obj.pushArg(&cookie_string);
		_obj.pushArg(is_http_only);
		_obj.pushArg(force_session_cookie);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebSession::ClearCookies()
	void ClearCookies() {
		THROW_IF(!_obj.pushFunction("ClearCookies"),"No implementation for abstract function Awesomium::WebSession::ClearCookies");
		return (_obj.callFunction<void>());
	};




};




#endif


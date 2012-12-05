#ifndef _WRAPPERS_WRAPPER_WXDIALUPMANAGER_H_
#define _WRAPPERS_WRAPPER_WXDIALUPMANAGER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/dialup.h>

class wrapper_wxDialUpManager : public wxDialUpManager {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxDialUpManager(lua_State* L, lua_Table* dum) : wxDialUpManager(), _obj(L,-1) {};

	// bool wxDialUpManager::CancelDialing()
	bool CancelDialing() {
		THROW_IF(!_obj.pushFunction("CancelDialing"),"No implementation for abstract function wxDialUpManager::CancelDialing");
		return (_obj.callFunction<bool>());
	};

	// bool wxDialUpManager::Dial(const wxString & nameOfISP = wxEmptyString, const wxString & username = wxEmptyString, const wxString & password = wxEmptyString, bool async = true)
	bool Dial(const wxString & nameOfISP = wxEmptyString, const wxString & username = wxEmptyString, const wxString & password = wxEmptyString, bool async = true) {
		THROW_IF(!_obj.pushFunction("Dial"),"No implementation for abstract function wxDialUpManager::Dial");
		_obj.pushArg(nameOfISP);
		_obj.pushArg(username);
		_obj.pushArg(password);
		_obj.pushArg(async);
		return (_obj.callFunction<bool>());
	};

	// void wxDialUpManager::DisableAutoCheckOnlineStatus()
	void DisableAutoCheckOnlineStatus() {
		THROW_IF(!_obj.pushFunction("DisableAutoCheckOnlineStatus"),"No implementation for abstract function wxDialUpManager::DisableAutoCheckOnlineStatus");
		return (_obj.callFunction<void>());
	};

	// bool wxDialUpManager::EnableAutoCheckOnlineStatus(size_t nSeconds = 60)
	bool EnableAutoCheckOnlineStatus(size_t nSeconds = 60) {
		THROW_IF(!_obj.pushFunction("EnableAutoCheckOnlineStatus"),"No implementation for abstract function wxDialUpManager::EnableAutoCheckOnlineStatus");
		_obj.pushArg(nSeconds);
		return (_obj.callFunction<bool>());
	};

	// size_t wxDialUpManager::GetISPNames(wxArrayString & names) const
	size_t GetISPNames(wxArrayString & names) const {
		THROW_IF(!_obj.pushFunction("GetISPNames"),"No implementation for abstract function wxDialUpManager::GetISPNames");
		_obj.pushArg(&names);
		return (_obj.callFunction<size_t>());
	};

	// bool wxDialUpManager::HangUp()
	bool HangUp() {
		THROW_IF(!_obj.pushFunction("HangUp"),"No implementation for abstract function wxDialUpManager::HangUp");
		return (_obj.callFunction<bool>());
	};

	// bool wxDialUpManager::IsAlwaysOnline() const
	bool IsAlwaysOnline() const {
		THROW_IF(!_obj.pushFunction("IsAlwaysOnline"),"No implementation for abstract function wxDialUpManager::IsAlwaysOnline");
		return (_obj.callFunction<bool>());
	};

	// bool wxDialUpManager::IsDialing() const
	bool IsDialing() const {
		THROW_IF(!_obj.pushFunction("IsDialing"),"No implementation for abstract function wxDialUpManager::IsDialing");
		return (_obj.callFunction<bool>());
	};

	// bool wxDialUpManager::IsOk() const
	bool IsOk() const {
		THROW_IF(!_obj.pushFunction("IsOk"),"No implementation for abstract function wxDialUpManager::IsOk");
		return (_obj.callFunction<bool>());
	};

	// bool wxDialUpManager::IsOnline() const
	bool IsOnline() const {
		THROW_IF(!_obj.pushFunction("IsOnline"),"No implementation for abstract function wxDialUpManager::IsOnline");
		return (_obj.callFunction<bool>());
	};

	// void wxDialUpManager::SetConnectCommand(const wxString & commandDial = "/usr/bin/pon", const wxString & commandHangup = "/usr/bin/poff")
	void SetConnectCommand(const wxString & commandDial = "/usr/bin/pon", const wxString & commandHangup = "/usr/bin/poff") {
		THROW_IF(!_obj.pushFunction("SetConnectCommand"),"No implementation for abstract function wxDialUpManager::SetConnectCommand");
		_obj.pushArg(commandDial);
		_obj.pushArg(commandHangup);
		return (_obj.callFunction<void>());
	};

	// void wxDialUpManager::SetOnlineStatus(bool isOnline = true)
	void SetOnlineStatus(bool isOnline = true) {
		THROW_IF(!_obj.pushFunction("SetOnlineStatus"),"No implementation for abstract function wxDialUpManager::SetOnlineStatus");
		_obj.pushArg(isOnline);
		return (_obj.callFunction<void>());
	};

	// void wxDialUpManager::SetWellKnownHost(const wxString & hostname, int portno = 80)
	void SetWellKnownHost(const wxString & hostname, int portno = 80) {
		THROW_IF(!_obj.pushFunction("SetWellKnownHost"),"No implementation for abstract function wxDialUpManager::SetWellKnownHost");
		_obj.pushArg(hostname);
		_obj.pushArg(portno);
		return (_obj.callFunction<void>());
	};




};




#endif


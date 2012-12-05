#ifndef _WRAPPERS_WRAPPER_WXPROTOCOL_H_
#define _WRAPPERS_WRAPPER_WXPROTOCOL_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/protocol/protocol.h>

class wrapper_wxProtocol : public wxProtocol {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxProtocol(lua_State* L, lua_Table* dum) : wxProtocol(), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxObject::GetClassInfo();
	};

	// bool wxSocketBase::GetLocal(wxSockAddress & addr) const
	bool GetLocal(wxSockAddress & addr) const {
		if(_obj.pushFunction("GetLocal")) {
			_obj.pushArg(&addr);
			return (_obj.callFunction<bool>());
		}

		return wxSocketBase::GetLocal(addr);
	};

	// bool wxSocketBase::GetPeer(wxSockAddress & addr) const
	bool GetPeer(wxSockAddress & addr) const {
		if(_obj.pushFunction("GetPeer")) {
			_obj.pushArg(&addr);
			return (_obj.callFunction<bool>());
		}

		return wxSocketBase::GetPeer(addr);
	};

	// bool wxSocketBase::Close()
	bool Close() {
		if(_obj.pushFunction("Close")) {
			return (_obj.callFunction<bool>());
		}

		return wxSocketBase::Close();
	};

	// bool wxSocketBase::SetLocal(const wxIPV4address & local)
	bool SetLocal(const wxIPV4address & local) {
		if(_obj.pushFunction("SetLocal")) {
			_obj.pushArg(&local);
			return (_obj.callFunction<bool>());
		}

		return wxSocketBase::SetLocal(local);
	};

	// bool wxSocketClient::Connect(const wxSockAddress & address, bool wait = true)
	bool Connect(const wxSockAddress & address, bool wait = true) {
		if(_obj.pushFunction("Connect")) {
			_obj.pushArg(&address);
			_obj.pushArg(wait);
			return (_obj.callFunction<bool>());
		}

		return wxSocketClient::Connect(address, wait);
	};

	// bool wxProtocol::Abort()
	bool Abort() {
		THROW_IF(!_obj.pushFunction("Abort"),"No implementation for abstract function wxProtocol::Abort");
		return (_obj.callFunction<bool>());
	};

	// wxString wxProtocol::GetContentType() const
	wxString GetContentType() const {
		if(_obj.pushFunction("GetContentType")) {
			return *(_obj.callFunction<wxString*>());
		}

		return wxProtocol::GetContentType();
	};

	// wxProtocolError wxProtocol::GetError() const
	wxProtocolError GetError() const {
		if(_obj.pushFunction("GetError")) {
			return (wxProtocolError)(_obj.callFunction<int>());
		}

		return wxProtocol::GetError();
	};

	// wxInputStream * wxProtocol::GetInputStream(const wxString & path)
	wxInputStream * GetInputStream(const wxString & path) {
		THROW_IF(!_obj.pushFunction("GetInputStream"),"No implementation for abstract function wxProtocol::GetInputStream");
		_obj.pushArg(path);
		return (_obj.callFunction<wxInputStream*>());
	};

	// void wxProtocol::SetPassword(const wxString & user)
	void SetPassword(const wxString & user) {
		if(_obj.pushFunction("SetPassword")) {
			_obj.pushArg(user);
			return (_obj.callFunction<void>());
		}

		return wxProtocol::SetPassword(user);
	};

	// void wxProtocol::SetUser(const wxString & user)
	void SetUser(const wxString & user) {
		if(_obj.pushFunction("SetUser")) {
			_obj.pushArg(user);
			return (_obj.callFunction<void>());
		}

		return wxProtocol::SetUser(user);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif


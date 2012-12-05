#ifndef _WRAPPERS_WRAPPER_WXFTP_H_
#define _WRAPPERS_WRAPPER_WXFTP_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/protocol/ftp.h>

class wrapper_wxFTP : public wxFTP {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxFTP(lua_State* L, lua_Table* dum) : wxFTP(), _obj(L,-1) {};

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

	// bool wxSocketBase::SetLocal(const wxIPV4address & local)
	bool SetLocal(const wxIPV4address & local) {
		if(_obj.pushFunction("SetLocal")) {
			_obj.pushArg(&local);
			return (_obj.callFunction<bool>());
		}

		return wxSocketBase::SetLocal(local);
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

	// bool wxFTP::Connect(const wxString & host)
	bool Connect(const wxString & host) {
		if(_obj.pushFunction("Connect")) {
			_obj.pushArg(host);
			return (_obj.callFunction<bool>());
		}

		return wxFTP::Connect(host);
	};

	// bool wxFTP::Connect(const wxString & host, unsigned short port)
	bool Connect(const wxString & host, unsigned short port) {
		if(_obj.pushFunction("Connect")) {
			_obj.pushArg(host);
			_obj.pushArg(port);
			return (_obj.callFunction<bool>());
		}

		return wxFTP::Connect(host, port);
	};

	// bool wxFTP::Abort()
	bool Abort() {
		if(_obj.pushFunction("Abort")) {
			return (_obj.callFunction<bool>());
		}

		return wxFTP::Abort();
	};

	// bool wxFTP::Close()
	bool Close() {
		if(_obj.pushFunction("Close")) {
			return (_obj.callFunction<bool>());
		}

		return wxFTP::Close();
	};

	// void wxFTP::SetPassword(const wxString & passwd)
	void SetPassword(const wxString & passwd) {
		if(_obj.pushFunction("SetPassword")) {
			_obj.pushArg(passwd);
			return (_obj.callFunction<void>());
		}

		return wxFTP::SetPassword(passwd);
	};

	// void wxFTP::SetUser(const wxString & user)
	void SetUser(const wxString & user) {
		if(_obj.pushFunction("SetUser")) {
			_obj.pushArg(user);
			return (_obj.callFunction<void>());
		}

		return wxFTP::SetUser(user);
	};

	// wxInputStream * wxFTP::GetInputStream(const wxString & path)
	wxInputStream * GetInputStream(const wxString & path) {
		if(_obj.pushFunction("GetInputStream")) {
			_obj.pushArg(path);
			return (_obj.callFunction<wxInputStream*>());
		}

		return wxFTP::GetInputStream(path);
	};

	// wxOutputStream * wxFTP::GetOutputStream(const wxString & file)
	wxOutputStream * GetOutputStream(const wxString & file) {
		if(_obj.pushFunction("GetOutputStream")) {
			_obj.pushArg(file);
			return (_obj.callFunction<wxOutputStream*>());
		}

		return wxFTP::GetOutputStream(file);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif


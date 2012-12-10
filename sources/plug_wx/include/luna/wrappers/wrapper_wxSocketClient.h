#ifndef _WRAPPERS_WRAPPER_WXSOCKETCLIENT_H_
#define _WRAPPERS_WRAPPER_WXSOCKETCLIENT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/socket.h>

class wrapper_wxSocketClient : public wxSocketClient {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxSocketClient(lua_State* L, lua_Table* dum, int flags = ::wxSOCKET_NONE) : wxSocketClient(flags), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxSocketClient::GetClassInfo();
	};

	// bool wxSocketBase::GetLocal(wxSockAddress & addr) const
	bool GetLocal(wxSockAddress & addr) const {
		if(_obj.pushFunction("GetLocal")) {
			_obj.pushArg(&addr);
			return (_obj.callFunction<bool>());
		}

		return wxSocketClient::GetLocal(addr);
	};

	// bool wxSocketBase::GetPeer(wxSockAddress & addr) const
	bool GetPeer(wxSockAddress & addr) const {
		if(_obj.pushFunction("GetPeer")) {
			_obj.pushArg(&addr);
			return (_obj.callFunction<bool>());
		}

		return wxSocketClient::GetPeer(addr);
	};

	// bool wxSocketBase::Close()
	bool Close() {
		if(_obj.pushFunction("Close")) {
			return (_obj.callFunction<bool>());
		}

		return wxSocketClient::Close();
	};

	// bool wxSocketBase::SetLocal(const wxIPV4address & local)
	bool SetLocal(const wxIPV4address & local) {
		if(_obj.pushFunction("SetLocal")) {
			_obj.pushArg(&local);
			return (_obj.callFunction<bool>());
		}

		return wxSocketClient::SetLocal(local);
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


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSocketClient::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSocketClient::CloneRefData(data);
	};


};




#endif


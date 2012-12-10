#ifndef _WRAPPERS_WRAPPER_WXTCPCLIENT_H_
#define _WRAPPERS_WRAPPER_WXTCPCLIENT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/sckipc.h>

class wrapper_wxTCPClient : public wxTCPClient {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxTCPClient(lua_State* L, lua_Table* dum) : wxTCPClient(), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxTCPClient::GetClassInfo();
	};

	// wxConnectionBase * wxTCPClient::MakeConnection(const wxString & host, const wxString & service, const wxString & topic)
	wxConnectionBase * MakeConnection(const wxString & host, const wxString & service, const wxString & topic) {
		if(_obj.pushFunction("MakeConnection")) {
			_obj.pushArg(host);
			_obj.pushArg(service);
			_obj.pushArg(topic);
			return (_obj.callFunction<wxConnectionBase*>());
		}

		return wxTCPClient::MakeConnection(host, service, topic);
	};

	// wxConnectionBase * wxTCPClient::OnMakeConnection()
	wxConnectionBase * OnMakeConnection() {
		if(_obj.pushFunction("OnMakeConnection")) {
			return (_obj.callFunction<wxConnectionBase*>());
		}

		return wxTCPClient::OnMakeConnection();
	};

	// bool wxTCPClient::ValidHost(const wxString & host)
	bool ValidHost(const wxString & host) {
		if(_obj.pushFunction("ValidHost")) {
			_obj.pushArg(host);
			return (_obj.callFunction<bool>());
		}

		return wxTCPClient::ValidHost(host);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxTCPClient::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxTCPClient::CloneRefData(data);
	};


};




#endif


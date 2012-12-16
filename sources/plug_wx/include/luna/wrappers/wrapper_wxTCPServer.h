#ifndef _WRAPPERS_WRAPPER_WXTCPSERVER_H_
#define _WRAPPERS_WRAPPER_WXTCPSERVER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/sckipc.h>

class wrapper_wxTCPServer : public wxTCPServer, public luna_wrapper_base {

public:
	

	wrapper_wxTCPServer(lua_State* L, lua_Table* dum) : wxTCPServer(), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxTCPServer::GetClassInfo();
	};

	// bool wxTCPServer::Create(const wxString & service)
	bool Create(const wxString & service) {
		if(_obj.pushFunction("Create")) {
			_obj.pushArg(service);
			return (_obj.callFunction<bool>());
		}

		return wxTCPServer::Create(service);
	};

	// wxConnectionBase * wxTCPServer::OnAcceptConnection(const wxString & topic)
	wxConnectionBase * OnAcceptConnection(const wxString & topic) {
		if(_obj.pushFunction("OnAcceptConnection")) {
			_obj.pushArg(topic);
			return (_obj.callFunction<wxConnectionBase*>());
		}

		return wxTCPServer::OnAcceptConnection(topic);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxTCPServer::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxTCPServer::CloneRefData(data);
	};


};




#endif


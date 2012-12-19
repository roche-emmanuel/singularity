#ifndef _WRAPPERS_WRAPPER_WXTCPCONNECTION_H_
#define _WRAPPERS_WRAPPER_WXTCPCONNECTION_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/sckipc.h>

class wrapper_wxTCPConnection : public wxTCPConnection, public luna_wrapper_base {

public:
	

	wrapper_wxTCPConnection(lua_State* L, lua_Table* dum) : wxTCPConnection(), luna_wrapper_base(L) {};
	wrapper_wxTCPConnection(lua_State* L, lua_Table* dum, void * buffer, size_t size) : wxTCPConnection(buffer, size), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxTCPConnection::GetClassInfo();
	};

	// bool wxTCPConnection::Disconnect()
	bool Disconnect() {
		if(_obj.pushFunction("Disconnect")) {
			return (_obj.callFunction<bool>());
		}

		return wxTCPConnection::Disconnect();
	};

	// bool wxTCPConnection::OnAdvise(const wxString & topic, const wxString & item, const void * data, size_t size, wxIPCFormat format)
	bool OnAdvise(const wxString & topic, const wxString & item, const void * data, size_t size, wxIPCFormat format) {
		if(_obj.pushFunction("OnAdvise")) {
			_obj.pushArg(topic);
			_obj.pushArg(item);
			_obj.pushArg(data);
			_obj.pushArg(size);
			_obj.pushArg(format);
			return (_obj.callFunction<bool>());
		}

		return wxTCPConnection::OnAdvise(topic, item, data, size, format);
	};

	// bool wxTCPConnection::OnDisconnect()
	bool OnDisconnect() {
		if(_obj.pushFunction("OnDisconnect")) {
			return (_obj.callFunction<bool>());
		}

		return wxTCPConnection::OnDisconnect();
	};

	// bool wxTCPConnection::OnExecute(const wxString & topic, const void * data, size_t size, wxIPCFormat format)
	bool OnExecute(const wxString & topic, const void * data, size_t size, wxIPCFormat format) {
		if(_obj.pushFunction("OnExecute")) {
			_obj.pushArg(topic);
			_obj.pushArg(data);
			_obj.pushArg(size);
			_obj.pushArg(format);
			return (_obj.callFunction<bool>());
		}

		return wxTCPConnection::OnExecute(topic, data, size, format);
	};

	// bool wxTCPConnection::OnPoke(const wxString & topic, const wxString & item, const void * data, size_t size, wxIPCFormat format)
	bool OnPoke(const wxString & topic, const wxString & item, const void * data, size_t size, wxIPCFormat format) {
		if(_obj.pushFunction("OnPoke")) {
			_obj.pushArg(topic);
			_obj.pushArg(item);
			_obj.pushArg(data);
			_obj.pushArg(size);
			_obj.pushArg(format);
			return (_obj.callFunction<bool>());
		}

		return wxTCPConnection::OnPoke(topic, item, data, size, format);
	};

	// const void * wxTCPConnection::OnRequest(const wxString & topic, const wxString & item, size_t * size, wxIPCFormat format)
	const void * OnRequest(const wxString & topic, const wxString & item, size_t * size, wxIPCFormat format) {
		if(_obj.pushFunction("OnRequest")) {
			_obj.pushArg(topic);
			_obj.pushArg(item);
			_obj.pushArg(size);
			_obj.pushArg(format);
			return (_obj.callFunction<void*>());
		}

		return wxTCPConnection::OnRequest(topic, item, size, format);
	};

	// bool wxTCPConnection::OnStartAdvise(const wxString & topic, const wxString & item)
	bool OnStartAdvise(const wxString & topic, const wxString & item) {
		if(_obj.pushFunction("OnStartAdvise")) {
			_obj.pushArg(topic);
			_obj.pushArg(item);
			return (_obj.callFunction<bool>());
		}

		return wxTCPConnection::OnStartAdvise(topic, item);
	};

	// bool wxTCPConnection::OnStopAdvise(const wxString & topic, const wxString & item)
	bool OnStopAdvise(const wxString & topic, const wxString & item) {
		if(_obj.pushFunction("OnStopAdvise")) {
			_obj.pushArg(topic);
			_obj.pushArg(item);
			return (_obj.callFunction<bool>());
		}

		return wxTCPConnection::OnStopAdvise(topic, item);
	};

	// const void * wxTCPConnection::Request(const wxString & item, size_t * size = 0, wxIPCFormat format = ::wxIPC_TEXT)
	const void * Request(const wxString & item, size_t * size = 0, wxIPCFormat format = ::wxIPC_TEXT) {
		if(_obj.pushFunction("Request")) {
			_obj.pushArg(item);
			_obj.pushArg(size);
			_obj.pushArg(format);
			return (_obj.callFunction<void*>());
		}

		return wxTCPConnection::Request(item, size, format);
	};

	// bool wxTCPConnection::StartAdvise(const wxString & item)
	bool StartAdvise(const wxString & item) {
		if(_obj.pushFunction("StartAdvise")) {
			_obj.pushArg(item);
			return (_obj.callFunction<bool>());
		}

		return wxTCPConnection::StartAdvise(item);
	};

	// bool wxTCPConnection::StopAdvise(const wxString & item)
	bool StopAdvise(const wxString & item) {
		if(_obj.pushFunction("StopAdvise")) {
			_obj.pushArg(item);
			return (_obj.callFunction<bool>());
		}

		return wxTCPConnection::StopAdvise(item);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxTCPConnection::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxTCPConnection::CloneRefData(data);
	};


};




#endif


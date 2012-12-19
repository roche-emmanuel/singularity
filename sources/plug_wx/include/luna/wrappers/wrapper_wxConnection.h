#ifndef _WRAPPERS_WRAPPER_WXCONNECTION_H_
#define _WRAPPERS_WRAPPER_WXCONNECTION_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/ipc.h>

class wrapper_wxConnection : public wxConnection, public luna_wrapper_base {

public:
	

	wrapper_wxConnection(lua_State* L, lua_Table* dum) : wxConnection(), luna_wrapper_base(L) {};
	wrapper_wxConnection(lua_State* L, lua_Table* dum, void * buffer, size_t size) : wxConnection(buffer, size), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxConnection::GetClassInfo();
	};

	// bool wxConnection::OnAdvise(const wxString & topic, const wxString & item, const void * data, size_t size, wxIPCFormat format)
	bool OnAdvise(const wxString & topic, const wxString & item, const void * data, size_t size, wxIPCFormat format) {
		if(_obj.pushFunction("OnAdvise")) {
			_obj.pushArg(topic);
			_obj.pushArg(item);
			_obj.pushArg(data);
			_obj.pushArg(size);
			_obj.pushArg(format);
			return (_obj.callFunction<bool>());
		}

		return wxConnection::OnAdvise(topic, item, data, size, format);
	};

	// bool wxConnection::OnDisconnect()
	bool OnDisconnect() {
		if(_obj.pushFunction("OnDisconnect")) {
			return (_obj.callFunction<bool>());
		}

		return wxConnection::OnDisconnect();
	};

	// bool wxConnection::OnExec(const wxString & topic, const wxString & data)
	bool OnExec(const wxString & topic, const wxString & data) {
		if(_obj.pushFunction("OnExec")) {
			_obj.pushArg(topic);
			_obj.pushArg(data);
			return (_obj.callFunction<bool>());
		}

		return wxConnection::OnExec(topic, data);
	};

	// bool wxConnection::OnPoke(const wxString & topic, const wxString & item, const void * data, size_t size, wxIPCFormat format)
	bool OnPoke(const wxString & topic, const wxString & item, const void * data, size_t size, wxIPCFormat format) {
		if(_obj.pushFunction("OnPoke")) {
			_obj.pushArg(topic);
			_obj.pushArg(item);
			_obj.pushArg(data);
			_obj.pushArg(size);
			_obj.pushArg(format);
			return (_obj.callFunction<bool>());
		}

		return wxConnection::OnPoke(topic, item, data, size, format);
	};

	// const void * wxConnection::OnRequest(const wxString & topic, const wxString & item, size_t * size, wxIPCFormat format)
	const void * OnRequest(const wxString & topic, const wxString & item, size_t * size, wxIPCFormat format) {
		if(_obj.pushFunction("OnRequest")) {
			_obj.pushArg(topic);
			_obj.pushArg(item);
			_obj.pushArg(size);
			_obj.pushArg(format);
			return (_obj.callFunction<void*>());
		}

		return wxConnection::OnRequest(topic, item, size, format);
	};

	// bool wxConnection::OnStartAdvise(const wxString & topic, const wxString & item)
	bool OnStartAdvise(const wxString & topic, const wxString & item) {
		if(_obj.pushFunction("OnStartAdvise")) {
			_obj.pushArg(topic);
			_obj.pushArg(item);
			return (_obj.callFunction<bool>());
		}

		return wxConnection::OnStartAdvise(topic, item);
	};

	// bool wxConnection::OnStopAdvise(const wxString & topic, const wxString & item)
	bool OnStopAdvise(const wxString & topic, const wxString & item) {
		if(_obj.pushFunction("OnStopAdvise")) {
			_obj.pushArg(topic);
			_obj.pushArg(item);
			return (_obj.callFunction<bool>());
		}

		return wxConnection::OnStopAdvise(topic, item);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxConnection::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxConnection::CloneRefData(data);
	};


};




#endif


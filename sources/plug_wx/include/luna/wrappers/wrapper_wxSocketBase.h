#ifndef _WRAPPERS_WRAPPER_WXSOCKETBASE_H_
#define _WRAPPERS_WRAPPER_WXSOCKETBASE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/socket.h>

class wrapper_wxSocketBase : public wxSocketBase {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxSocketBase(lua_State* L, lua_Table* dum) : wxSocketBase(), _obj(L,-1) {};

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


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif


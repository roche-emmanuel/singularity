#ifndef _WRAPPERS_WRAPPER_WXIPV_ADDRESS_H_
#define _WRAPPERS_WRAPPER_WXIPV_ADDRESS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/socket.h>

class wrapper_wxIPV4address : public wxIPV4address {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxIPV4address(lua_State* L, lua_Table* dum) : wxIPV4address(), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxObject::GetClassInfo();
	};

	// void wxSockAddress::Clear()
	void Clear() {
		THROW_IF(!_obj.pushFunction("Clear"),"No implementation for abstract function wxSockAddress::Clear");
		return (_obj.callFunction<void>());
	};

	// bool wxIPaddress::IsLocalHost() const
	bool IsLocalHost() const {
		THROW_IF(!_obj.pushFunction("IsLocalHost"),"No implementation for abstract function wxIPaddress::IsLocalHost");
		return (_obj.callFunction<bool>());
	};

	// wxString wxIPV4address::Hostname() const
	wxString Hostname() const {
		if(_obj.pushFunction("Hostname")) {
			return *(_obj.callFunction<wxString*>());
		}

		return wxIPV4address::Hostname();
	};

	// wxString wxIPV4address::IPAddress() const
	wxString IPAddress() const {
		if(_obj.pushFunction("IPAddress")) {
			return *(_obj.callFunction<wxString*>());
		}

		return wxIPV4address::IPAddress();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif


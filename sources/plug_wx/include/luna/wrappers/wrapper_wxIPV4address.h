#ifndef _WRAPPERS_WRAPPER_WXIPV_ADDRESS_H_
#define _WRAPPERS_WRAPPER_WXIPV_ADDRESS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/socket.h>

class wrapper_wxIPV4address : public wxIPV4address, public luna_wrapper_base {

public:
	


	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxIPV4address::GetClassInfo();
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
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxIPV4address::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxIPV4address::CloneRefData(data);
	};


};




#endif


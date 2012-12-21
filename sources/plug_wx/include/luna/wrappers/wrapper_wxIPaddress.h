#ifndef _WRAPPERS_WRAPPER_WXIPADDRESS_H_
#define _WRAPPERS_WRAPPER_WXIPADDRESS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/socket.h>

class wrapper_wxIPaddress : public wxIPaddress, public luna_wrapper_base {

public:
		

	~wrapper_wxIPaddress() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxIPaddress::GetClassInfo();
	};

	// void wxSockAddress::Clear()
	void Clear() {
		THROW_IF(!_obj.pushFunction("Clear"),"No implementation for abstract function wxSockAddress::Clear");
		return (_obj.callFunction<void>());
	};

	// wxSockAddress::Family wxSockAddress::Type()
	wxSockAddress::Family Type() {
		THROW_IF(!_obj.pushFunction("Type"),"No implementation for abstract function wxSockAddress::Type");
		return (wxSockAddress::Family)(_obj.callFunction<int>());
	};

	// wxSockAddress * wxSockAddress::Clone() const
	wxSockAddress * Clone() const {
		THROW_IF(!_obj.pushFunction("Clone"),"No implementation for abstract function wxSockAddress::Clone");
		return (_obj.callFunction<wxSockAddress*>());
	};

	// wxString wxIPaddress::IPAddress() const
	wxString IPAddress() const {
		THROW_IF(!_obj.pushFunction("IPAddress"),"No implementation for abstract function wxIPaddress::IPAddress");
		return *(_obj.callFunction<wxString*>());
	};

	// bool wxIPaddress::IsLocalHost() const
	bool IsLocalHost() const {
		THROW_IF(!_obj.pushFunction("IsLocalHost"),"No implementation for abstract function wxIPaddress::IsLocalHost");
		return (_obj.callFunction<bool>());
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxIPaddress::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxIPaddress::CloneRefData(data);
	};


public:
// bool wxIPaddress::BroadcastAddress()
bool BroadcastAddress() {
	THROW_IF(true,"The function call bool wxIPaddress::BroadcastAddress() is not implemented in wrapper.");
	return bool();
};

};




#endif


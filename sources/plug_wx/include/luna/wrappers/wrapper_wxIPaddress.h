#ifndef _WRAPPERS_WRAPPER_WXIPADDRESS_H_
#define _WRAPPERS_WRAPPER_WXIPADDRESS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/socket.h>

class wrapper_wxIPaddress : public wxIPaddress {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxIPaddress(lua_State* L, lua_Table* dum) : wxIPaddress(), _obj(L,-1) {};

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
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif


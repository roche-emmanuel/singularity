#ifndef _WRAPPERS_WRAPPER_WXURI_H_
#define _WRAPPERS_WRAPPER_WXURI_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/uri.h>

class wrapper_wxURI : public wxURI, public luna_wrapper_base {

public:
		

	~wrapper_wxURI() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxURI(lua_State* L, lua_Table* dum) : wxURI(), luna_wrapper_base(L) {};
	wrapper_wxURI(lua_State* L, lua_Table* dum, const wxString & uri) : wxURI(uri), luna_wrapper_base(L) {};
	wrapper_wxURI(lua_State* L, lua_Table* dum, const wxURI & uri) : wxURI(uri), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxURI::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxURI::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxURI::CloneRefData(data);
	};


};




#endif


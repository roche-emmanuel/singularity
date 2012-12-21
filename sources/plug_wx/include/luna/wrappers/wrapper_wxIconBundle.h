#ifndef _WRAPPERS_WRAPPER_WXICONBUNDLE_H_
#define _WRAPPERS_WRAPPER_WXICONBUNDLE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/iconbndl.h>

class wrapper_wxIconBundle : public wxIconBundle, public luna_wrapper_base {

public:
		

	~wrapper_wxIconBundle() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxIconBundle(lua_State* L, lua_Table* dum) : wxIconBundle(), luna_wrapper_base(L) {};
	wrapper_wxIconBundle(lua_State* L, lua_Table* dum, const wxString & file, wxBitmapType type = ::wxBITMAP_TYPE_ANY) : wxIconBundle(file, type), luna_wrapper_base(L) {};
	wrapper_wxIconBundle(lua_State* L, lua_Table* dum, wxInputStream & stream, wxBitmapType type = ::wxBITMAP_TYPE_ANY) : wxIconBundle(stream, type), luna_wrapper_base(L) {};
	wrapper_wxIconBundle(lua_State* L, lua_Table* dum, const wxIcon & icon) : wxIconBundle(icon), luna_wrapper_base(L) {};
	wrapper_wxIconBundle(lua_State* L, lua_Table* dum, const wxIconBundle & ic) : wxIconBundle(ic), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxIconBundle::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxIconBundle::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxIconBundle::CloneRefData(data);
	};


};




#endif

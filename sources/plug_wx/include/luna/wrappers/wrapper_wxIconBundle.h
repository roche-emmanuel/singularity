#ifndef _WRAPPERS_WRAPPER_WXICONBUNDLE_H_
#define _WRAPPERS_WRAPPER_WXICONBUNDLE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/iconbndl.h>

class wrapper_wxIconBundle : public wxIconBundle {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxIconBundle(lua_State* L, lua_Table* dum) : wxIconBundle(), _obj(L,-1) {};
	wrapper_wxIconBundle(lua_State* L, lua_Table* dum, const wxString & file, wxBitmapType type = ::wxBITMAP_TYPE_ANY) : wxIconBundle(file, type), _obj(L,-1) {};
	wrapper_wxIconBundle(lua_State* L, lua_Table* dum, wxInputStream & stream, wxBitmapType type = ::wxBITMAP_TYPE_ANY) : wxIconBundle(stream, type), _obj(L,-1) {};
	wrapper_wxIconBundle(lua_State* L, lua_Table* dum, const wxIcon & icon) : wxIconBundle(icon), _obj(L,-1) {};
	wrapper_wxIconBundle(lua_State* L, lua_Table* dum, const wxIconBundle & ic) : wxIconBundle(ic), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxObject::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif


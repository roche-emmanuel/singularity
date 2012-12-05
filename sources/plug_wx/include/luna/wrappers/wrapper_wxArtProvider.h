#ifndef _WRAPPERS_WRAPPER_WXARTPROVIDER_H_
#define _WRAPPERS_WRAPPER_WXARTPROVIDER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/artprov.h>

class wrapper_wxArtProvider : public wxArtProvider {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxArtProvider(lua_State* L, lua_Table* dum) : wxArtProvider(), _obj(L,-1) {};

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
	// wxBitmap wxArtProvider::CreateBitmap(const class wxString & id, const class wxString & client, const wxSize & size)
	// wxIconBundle wxArtProvider::CreateIconBundle(const class wxString & id, const class wxString & client)

};




#endif


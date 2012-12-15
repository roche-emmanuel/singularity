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
	


	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxArtProvider::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxArtProvider::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxArtProvider::CloneRefData(data);
	};

	// wxBitmap wxArtProvider::CreateBitmap(const class wxString & id, const class wxString & client, const wxSize & size)
	wxBitmap CreateBitmap(const class wxString & id, const class wxString & client, const wxSize & size) {
		if(_obj.pushFunction("CreateBitmap")) {
			_obj.pushArg(&id);
			_obj.pushArg(&client);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxBitmap*>());
		}

		return wxArtProvider::CreateBitmap(id, client, size);
	};

	// wxIconBundle wxArtProvider::CreateIconBundle(const class wxString & id, const class wxString & client)
	wxIconBundle CreateIconBundle(const class wxString & id, const class wxString & client) {
		if(_obj.pushFunction("CreateIconBundle")) {
			_obj.pushArg(&id);
			_obj.pushArg(&client);
			return *(_obj.callFunction<wxIconBundle*>());
		}

		return wxArtProvider::CreateIconBundle(id, client);
	};


};




#endif


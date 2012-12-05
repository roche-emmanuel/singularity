#ifndef _WRAPPERS_WRAPPER_WXDOCTEMPLATE_H_
#define _WRAPPERS_WRAPPER_WXDOCTEMPLATE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/docview.h>

class wrapper_wxDocTemplate : public wxDocTemplate {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxDocTemplate(lua_State* L, lua_Table* dum, wxDocManager * manager, const wxString & descr, const wxString & filter, const wxString & dir, const wxString & ext, const wxString & docTypeName, const wxString & viewTypeName, wxClassInfo * docClassInfo = 0, wxClassInfo * viewClassInfo = 0, long flags = ::wxTEMPLATE_VISIBLE) : wxDocTemplate(manager, descr, filter, dir, ext, docTypeName, viewTypeName, docClassInfo, viewClassInfo, flags), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxObject::GetClassInfo();
	};

	// wxDocument * wxDocTemplate::CreateDocument(const wxString & path, long flags = 0)
	wxDocument * CreateDocument(const wxString & path, long flags = 0) {
		if(_obj.pushFunction("CreateDocument")) {
			_obj.pushArg(path);
			_obj.pushArg(flags);
			return (_obj.callFunction<wxDocument*>());
		}

		return wxDocTemplate::CreateDocument(path, flags);
	};

	// wxView * wxDocTemplate::CreateView(wxDocument * doc, long flags = 0)
	wxView * CreateView(wxDocument * doc, long flags = 0) {
		if(_obj.pushFunction("CreateView")) {
			_obj.pushArg(doc);
			_obj.pushArg(flags);
			return (_obj.callFunction<wxView*>());
		}

		return wxDocTemplate::CreateView(doc, flags);
	};

	// bool wxDocTemplate::FileMatchesTemplate(const wxString & path)
	bool FileMatchesTemplate(const wxString & path) {
		if(_obj.pushFunction("FileMatchesTemplate")) {
			_obj.pushArg(path);
			return (_obj.callFunction<bool>());
		}

		return wxDocTemplate::FileMatchesTemplate(path);
	};

	// wxString wxDocTemplate::GetDocumentName() const
	wxString GetDocumentName() const {
		if(_obj.pushFunction("GetDocumentName")) {
			return *(_obj.callFunction<wxString*>());
		}

		return wxDocTemplate::GetDocumentName();
	};

	// wxString wxDocTemplate::GetViewName() const
	wxString GetViewName() const {
		if(_obj.pushFunction("GetViewName")) {
			return *(_obj.callFunction<wxString*>());
		}

		return wxDocTemplate::GetViewName();
	};

	// bool wxDocTemplate::InitDocument(wxDocument * doc, const wxString & path, long flags = 0)
	bool InitDocument(wxDocument * doc, const wxString & path, long flags = 0) {
		if(_obj.pushFunction("InitDocument")) {
			_obj.pushArg(doc);
			_obj.pushArg(path);
			_obj.pushArg(flags);
			return (_obj.callFunction<bool>());
		}

		return wxDocTemplate::InitDocument(doc, path, flags);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif


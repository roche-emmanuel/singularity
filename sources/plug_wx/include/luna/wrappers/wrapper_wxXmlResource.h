#ifndef _WRAPPERS_WRAPPER_WXXMLRESOURCE_H_
#define _WRAPPERS_WRAPPER_WXXMLRESOURCE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/xrc/xmlres.h>

class wrapper_wxXmlResource : public wxXmlResource, public luna_wrapper_base {

public:
		

	~wrapper_wxXmlResource() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxXmlResource::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxXmlResource::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxXmlResource::CloneRefData(data);
	};

	// void wxXmlResource::DoReportError(const wxString & xrcFile, const wxXmlNode * position, const wxString & message)
	void DoReportError(const wxString & xrcFile, const wxXmlNode * position, const wxString & message) {
		if(_obj.pushFunction("DoReportError")) {
			_obj.pushArg(xrcFile);
			_obj.pushArg(position);
			_obj.pushArg(message);
			return (_obj.callFunction<void>());
		}

		return wxXmlResource::DoReportError(xrcFile, position, message);
	};


};




#endif


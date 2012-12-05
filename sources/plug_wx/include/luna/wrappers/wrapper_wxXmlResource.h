#ifndef _WRAPPERS_WRAPPER_WXXMLRESOURCE_H_
#define _WRAPPERS_WRAPPER_WXXMLRESOURCE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/xrc/xmlres.h>

class wrapper_wxXmlResource : public wxXmlResource {
protected:
	sgt::LuaObject _obj;
	
public:
	


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
	// void wxXmlResource::DoReportError(const wxString & xrcFile, const wxXmlNode * position, const wxString & message)

};




#endif


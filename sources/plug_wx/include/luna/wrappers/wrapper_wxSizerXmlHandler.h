#ifndef _WRAPPERS_WRAPPER_WXSIZERXMLHANDLER_H_
#define _WRAPPERS_WRAPPER_WXSIZERXMLHANDLER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/xrc/xh_sizer.h>

class wrapper_wxSizerXmlHandler : public wxSizerXmlHandler {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxSizerXmlHandler(lua_State* L, lua_Table* dum) : wxSizerXmlHandler(), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxObject::GetClassInfo();
	};

	// wxObject * wxSizerXmlHandler::DoCreateResource()
	wxObject * DoCreateResource() {
		if(_obj.pushFunction("DoCreateResource")) {
			return (_obj.callFunction<wxObject*>());
		}

		return wxSizerXmlHandler::DoCreateResource();
	};

	// bool wxSizerXmlHandler::CanHandle(wxXmlNode * node)
	bool CanHandle(wxXmlNode * node) {
		if(_obj.pushFunction("CanHandle")) {
			_obj.pushArg(node);
			return (_obj.callFunction<bool>());
		}

		return wxSizerXmlHandler::CanHandle(node);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	// wxSizer * wxSizerXmlHandler::DoCreateSizer(const wxString & name)
	// bool wxSizerXmlHandler::IsSizerNode(wxXmlNode * node) const

};




#endif


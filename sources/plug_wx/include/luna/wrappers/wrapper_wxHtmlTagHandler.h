#ifndef _WRAPPERS_WRAPPER_WXHTMLTAGHANDLER_H_
#define _WRAPPERS_WRAPPER_WXHTMLTAGHANDLER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/html/htmlpars.h>

class wrapper_wxHtmlTagHandler : public wxHtmlTagHandler {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxHtmlTagHandler(lua_State* L, lua_Table* dum) : wxHtmlTagHandler(), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxObject::GetClassInfo();
	};

	// wxString wxHtmlTagHandler::GetSupportedTags()
	wxString GetSupportedTags() {
		THROW_IF(!_obj.pushFunction("GetSupportedTags"),"No implementation for abstract function wxHtmlTagHandler::GetSupportedTags");
		return *(_obj.callFunction<wxString*>());
	};

	// bool wxHtmlTagHandler::HandleTag(const wxHtmlTag & tag)
	bool HandleTag(const wxHtmlTag & tag) {
		THROW_IF(!_obj.pushFunction("HandleTag"),"No implementation for abstract function wxHtmlTagHandler::HandleTag");
		_obj.pushArg(&tag);
		return (_obj.callFunction<bool>());
	};

	// void wxHtmlTagHandler::SetParser(wxHtmlParser * parser)
	void SetParser(wxHtmlParser * parser) {
		if(_obj.pushFunction("SetParser")) {
			_obj.pushArg(parser);
			return (_obj.callFunction<void>());
		}

		return wxHtmlTagHandler::SetParser(parser);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif


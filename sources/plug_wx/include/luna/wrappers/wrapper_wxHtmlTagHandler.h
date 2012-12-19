#ifndef _WRAPPERS_WRAPPER_WXHTMLTAGHANDLER_H_
#define _WRAPPERS_WRAPPER_WXHTMLTAGHANDLER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/html/htmlpars.h>

class wrapper_wxHtmlTagHandler : public wxHtmlTagHandler, public luna_wrapper_base {

public:
	

	wrapper_wxHtmlTagHandler(lua_State* L, lua_Table* dum) : wxHtmlTagHandler(), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxHtmlTagHandler::GetClassInfo();
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
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlTagHandler::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlTagHandler::CloneRefData(data);
	};


};




#endif


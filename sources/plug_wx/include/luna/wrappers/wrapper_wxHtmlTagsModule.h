#ifndef _WRAPPERS_WRAPPER_WXHTMLTAGSMODULE_H_
#define _WRAPPERS_WRAPPER_WXHTMLTAGSMODULE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/html/winpars.h>

class wrapper_wxHtmlTagsModule : public wxHtmlTagsModule {
protected:
	sgt::LuaObject _obj;
	
public:
	


	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxHtmlTagsModule::GetClassInfo();
	};

	// void wxModule::OnExit()
	void OnExit() {
		THROW_IF(!_obj.pushFunction("OnExit"),"No implementation for abstract function wxModule::OnExit");
		return (_obj.callFunction<void>());
	};

	// bool wxModule::OnInit()
	bool OnInit() {
		THROW_IF(!_obj.pushFunction("OnInit"),"No implementation for abstract function wxModule::OnInit");
		return (_obj.callFunction<bool>());
	};

	// void wxHtmlTagsModule::FillHandlersTable(wxHtmlWinParser * parser)
	void FillHandlersTable(wxHtmlWinParser * parser) {
		if(_obj.pushFunction("FillHandlersTable")) {
			_obj.pushArg(parser);
			return (_obj.callFunction<void>());
		}

		return wxHtmlTagsModule::FillHandlersTable(parser);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlTagsModule::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlTagsModule::CloneRefData(data);
	};


};




#endif


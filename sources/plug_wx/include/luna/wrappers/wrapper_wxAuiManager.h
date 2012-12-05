#ifndef _WRAPPERS_WRAPPER_WXAUIMANAGER_H_
#define _WRAPPERS_WRAPPER_WXAUIMANAGER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/aui/framemanager.h>

class wrapper_wxAuiManager : public wxAuiManager {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxAuiManager(lua_State* L, lua_Table* dum, wxWindow * managed_wnd = NULL, unsigned int flags = ::wxAUI_MGR_DEFAULT) : wxAuiManager(managed_wnd, flags), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxObject::GetClassInfo();
	};

	// void wxEvtHandler::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxEvtHandler::QueueEvent(event);
	};

	// void wxEvtHandler::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxEvtHandler::AddPendingEvent(event);
	};

	// bool wxEvtHandler::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxEvtHandler::ProcessEvent(event);
	};

	// void wxEvtHandler::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxEvtHandler::SetNextHandler(handler);
	};

	// void wxEvtHandler::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxEvtHandler::SetPreviousHandler(handler);
	};

	// void wxAuiManager::HideHint()
	void HideHint() {
		if(_obj.pushFunction("HideHint")) {
			return (_obj.callFunction<void>());
		}

		return wxAuiManager::HideHint();
	};

	// void wxAuiManager::ShowHint(const wxRect & rect)
	void ShowHint(const wxRect & rect) {
		if(_obj.pushFunction("ShowHint")) {
			_obj.pushArg(&rect);
			return (_obj.callFunction<void>());
		}

		return wxAuiManager::ShowHint(rect);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	// bool wxEvtHandler::TryBefore(wxEvent & event)
	// bool wxEvtHandler::TryAfter(wxEvent & event)
	// bool wxAuiManager::ProcessDockResult(wxAuiPaneInfo & target, const wxAuiPaneInfo & new_pos)

};




#endif


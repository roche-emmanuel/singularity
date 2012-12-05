#ifndef _WRAPPERS_WRAPPER_WXMOUSEEVENTSMANAGER_H_
#define _WRAPPERS_WRAPPER_WXMOUSEEVENTSMANAGER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/mousemanager.h>

class wrapper_wxMouseEventsManager : public wxMouseEventsManager {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxMouseEventsManager(lua_State* L, lua_Table* dum) : wxMouseEventsManager(), _obj(L,-1) {};
	wrapper_wxMouseEventsManager(lua_State* L, lua_Table* dum, wxWindow * win) : wxMouseEventsManager(win), _obj(L,-1) {};

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


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	// bool wxEvtHandler::TryBefore(wxEvent & event)
	// bool wxEvtHandler::TryAfter(wxEvent & event)
	// int wxMouseEventsManager::MouseHitTest(const wxPoint & pos)
	// bool wxMouseEventsManager::MouseClicked(int item)
	// bool wxMouseEventsManager::MouseDragBegin(int item, const wxPoint & pos)
	// void wxMouseEventsManager::MouseDragging(int item, const wxPoint & pos)
	// void wxMouseEventsManager::MouseDragEnd(int item, const wxPoint & pos)
	// void wxMouseEventsManager::MouseDragCancelled(int item)
	// void wxMouseEventsManager::MouseClickBegin(int item)
	// void wxMouseEventsManager::MouseClickCancelled(int item)

};




#endif


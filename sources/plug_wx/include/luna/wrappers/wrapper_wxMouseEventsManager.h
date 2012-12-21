#ifndef _WRAPPERS_WRAPPER_WXMOUSEEVENTSMANAGER_H_
#define _WRAPPERS_WRAPPER_WXMOUSEEVENTSMANAGER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/mousemanager.h>

class wrapper_wxMouseEventsManager : public wxMouseEventsManager, public luna_wrapper_base {

public:
		

	~wrapper_wxMouseEventsManager() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxMouseEventsManager(lua_State* L, lua_Table* dum) : wxMouseEventsManager(), luna_wrapper_base(L) {};
	wrapper_wxMouseEventsManager(lua_State* L, lua_Table* dum, wxWindow * win) : wxMouseEventsManager(win), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxMouseEventsManager::GetClassInfo();
	};

	// void wxEvtHandler::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxMouseEventsManager::QueueEvent(event);
	};

	// void wxEvtHandler::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxMouseEventsManager::AddPendingEvent(event);
	};

	// bool wxEvtHandler::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxMouseEventsManager::ProcessEvent(event);
	};

	// void wxEvtHandler::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxMouseEventsManager::SetNextHandler(handler);
	};

	// void wxEvtHandler::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxMouseEventsManager::SetPreviousHandler(handler);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxMouseEventsManager::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxMouseEventsManager::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxMouseEventsManager::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxMouseEventsManager::TryAfter(event);
	};

	// int wxMouseEventsManager::MouseHitTest(const wxPoint & pos)
	int MouseHitTest(const wxPoint & pos) {
		THROW_IF(!_obj.pushFunction("MouseHitTest"),"No implementation for abstract function wxMouseEventsManager::MouseHitTest");
		_obj.pushArg(&pos);
		return (_obj.callFunction<int>());
	};

	// bool wxMouseEventsManager::MouseClicked(int item)
	bool MouseClicked(int item) {
		THROW_IF(!_obj.pushFunction("MouseClicked"),"No implementation for abstract function wxMouseEventsManager::MouseClicked");
		_obj.pushArg(item);
		return (_obj.callFunction<bool>());
	};

	// bool wxMouseEventsManager::MouseDragBegin(int item, const wxPoint & pos)
	bool MouseDragBegin(int item, const wxPoint & pos) {
		THROW_IF(!_obj.pushFunction("MouseDragBegin"),"No implementation for abstract function wxMouseEventsManager::MouseDragBegin");
		_obj.pushArg(item);
		_obj.pushArg(&pos);
		return (_obj.callFunction<bool>());
	};

	// void wxMouseEventsManager::MouseDragging(int item, const wxPoint & pos)
	void MouseDragging(int item, const wxPoint & pos) {
		THROW_IF(!_obj.pushFunction("MouseDragging"),"No implementation for abstract function wxMouseEventsManager::MouseDragging");
		_obj.pushArg(item);
		_obj.pushArg(&pos);
		return (_obj.callFunction<void>());
	};

	// void wxMouseEventsManager::MouseDragEnd(int item, const wxPoint & pos)
	void MouseDragEnd(int item, const wxPoint & pos) {
		THROW_IF(!_obj.pushFunction("MouseDragEnd"),"No implementation for abstract function wxMouseEventsManager::MouseDragEnd");
		_obj.pushArg(item);
		_obj.pushArg(&pos);
		return (_obj.callFunction<void>());
	};

	// void wxMouseEventsManager::MouseDragCancelled(int item)
	void MouseDragCancelled(int item) {
		THROW_IF(!_obj.pushFunction("MouseDragCancelled"),"No implementation for abstract function wxMouseEventsManager::MouseDragCancelled");
		_obj.pushArg(item);
		return (_obj.callFunction<void>());
	};

	// void wxMouseEventsManager::MouseClickBegin(int item)
	void MouseClickBegin(int item) {
		if(_obj.pushFunction("MouseClickBegin")) {
			_obj.pushArg(item);
			return (_obj.callFunction<void>());
		}

		return wxMouseEventsManager::MouseClickBegin(item);
	};

	// void wxMouseEventsManager::MouseClickCancelled(int item)
	void MouseClickCancelled(int item) {
		if(_obj.pushFunction("MouseClickCancelled")) {
			_obj.pushArg(item);
			return (_obj.callFunction<void>());
		}

		return wxMouseEventsManager::MouseClickCancelled(item);
	};


};




#endif

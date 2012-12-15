#ifndef _WRAPPERS_WRAPPER_WXTIMER_H_
#define _WRAPPERS_WRAPPER_WXTIMER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/timer.h>

class wrapper_wxTimer : public wxTimer {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxTimer(lua_State* L, lua_Table* dum) : wxTimer(), _obj(L,-1) {};
	wrapper_wxTimer(lua_State* L, lua_Table* dum, wxEvtHandler * owner, int id = -1) : wxTimer(owner, id), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxTimer::GetClassInfo();
	};

	// void wxEvtHandler::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxTimer::QueueEvent(event);
	};

	// void wxEvtHandler::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxTimer::AddPendingEvent(event);
	};

	// bool wxEvtHandler::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxTimer::ProcessEvent(event);
	};

	// void wxEvtHandler::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxTimer::SetNextHandler(handler);
	};

	// void wxEvtHandler::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxTimer::SetPreviousHandler(handler);
	};

	// void wxTimer::Notify()
	void Notify() {
		if(_obj.pushFunction("Notify")) {
			return (_obj.callFunction<void>());
		}

		return wxTimer::Notify();
	};

	// bool wxTimer::Start(int milliseconds = -1, bool oneShot = false)
	bool Start(int milliseconds = -1, bool oneShot = false) {
		if(_obj.pushFunction("Start")) {
			_obj.pushArg(milliseconds);
			_obj.pushArg(oneShot);
			return (_obj.callFunction<bool>());
		}

		return wxTimer::Start(milliseconds, oneShot);
	};

	// void wxTimer::Stop()
	void Stop() {
		if(_obj.pushFunction("Stop")) {
			return (_obj.callFunction<void>());
		}

		return wxTimer::Stop();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxTimer::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxTimer::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxTimer::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxTimer::TryAfter(event);
	};


};




#endif


#ifndef _WRAPPERS_WRAPPER_WXFILESYSTEMWATCHER_H_
#define _WRAPPERS_WRAPPER_WXFILESYSTEMWATCHER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/fswatcher.h>

class wrapper_wxFileSystemWatcher : public wxFileSystemWatcher {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxFileSystemWatcher(lua_State* L, lua_Table* dum) : wxFileSystemWatcher(), _obj(L,-1) {};

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

	// bool wxFileSystemWatcher::Add(const wxFileName & path, int events = ::wxFSW_EVENT_ALL)
	bool Add(const wxFileName & path, int events = ::wxFSW_EVENT_ALL) {
		if(_obj.pushFunction("Add")) {
			_obj.pushArg(&path);
			_obj.pushArg(events);
			return (_obj.callFunction<bool>());
		}

		return wxFileSystemWatcher::Add(path, events);
	};

	// bool wxFileSystemWatcher::AddTree(const wxFileName & path, int events = ::wxFSW_EVENT_ALL, const wxString & filter = wxEmptyString)
	bool AddTree(const wxFileName & path, int events = ::wxFSW_EVENT_ALL, const wxString & filter = wxEmptyString) {
		if(_obj.pushFunction("AddTree")) {
			_obj.pushArg(&path);
			_obj.pushArg(events);
			_obj.pushArg(filter);
			return (_obj.callFunction<bool>());
		}

		return wxFileSystemWatcher::AddTree(path, events, filter);
	};

	// bool wxFileSystemWatcher::Remove(const wxFileName & path)
	bool Remove(const wxFileName & path) {
		if(_obj.pushFunction("Remove")) {
			_obj.pushArg(&path);
			return (_obj.callFunction<bool>());
		}

		return wxFileSystemWatcher::Remove(path);
	};

	// bool wxFileSystemWatcher::RemoveTree(const wxFileName & path)
	bool RemoveTree(const wxFileName & path) {
		if(_obj.pushFunction("RemoveTree")) {
			_obj.pushArg(&path);
			return (_obj.callFunction<bool>());
		}

		return wxFileSystemWatcher::RemoveTree(path);
	};

	// bool wxFileSystemWatcher::RemoveAll()
	bool RemoveAll() {
		if(_obj.pushFunction("RemoveAll")) {
			return (_obj.callFunction<bool>());
		}

		return wxFileSystemWatcher::RemoveAll();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	// bool wxEvtHandler::TryBefore(wxEvent & event)
	// bool wxEvtHandler::TryAfter(wxEvent & event)

};




#endif


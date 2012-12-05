#ifndef _WRAPPERS_WRAPPER_WXAPPCONSOLE_H_
#define _WRAPPERS_WRAPPER_WXAPPCONSOLE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/app.h>

class wrapper_wxAppConsole : public wxAppConsole {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxAppConsole(lua_State* L, lua_Table* dum) : wxAppConsole(), _obj(L,-1) {};

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

	// int wxAppConsole::MainLoop()
	int MainLoop() {
		if(_obj.pushFunction("MainLoop")) {
			return (_obj.callFunction<int>());
		}

		return wxAppConsole::MainLoop();
	};

	// void wxAppConsole::ExitMainLoop()
	void ExitMainLoop() {
		if(_obj.pushFunction("ExitMainLoop")) {
			return (_obj.callFunction<void>());
		}

		return wxAppConsole::ExitMainLoop();
	};

	// int wxAppConsole::FilterEvent(wxEvent & event)
	int FilterEvent(wxEvent & event) {
		if(_obj.pushFunction("FilterEvent")) {
			_obj.pushArg(&event);
			return (_obj.callFunction<int>());
		}

		return wxAppConsole::FilterEvent(event);
	};

	// bool wxAppConsole::UsesEventLoop() const
	bool UsesEventLoop() const {
		if(_obj.pushFunction("UsesEventLoop")) {
			return (_obj.callFunction<bool>());
		}

		return wxAppConsole::UsesEventLoop();
	};

	// void wxAppConsole::ProcessPendingEvents()
	void ProcessPendingEvents() {
		if(_obj.pushFunction("ProcessPendingEvents")) {
			return (_obj.callFunction<void>());
		}

		return wxAppConsole::ProcessPendingEvents();
	};

	// bool wxAppConsole::OnCmdLineError(wxCmdLineParser & parser)
	bool OnCmdLineError(wxCmdLineParser & parser) {
		if(_obj.pushFunction("OnCmdLineError")) {
			_obj.pushArg(&parser);
			return (_obj.callFunction<bool>());
		}

		return wxAppConsole::OnCmdLineError(parser);
	};

	// bool wxAppConsole::OnCmdLineHelp(wxCmdLineParser & parser)
	bool OnCmdLineHelp(wxCmdLineParser & parser) {
		if(_obj.pushFunction("OnCmdLineHelp")) {
			_obj.pushArg(&parser);
			return (_obj.callFunction<bool>());
		}

		return wxAppConsole::OnCmdLineHelp(parser);
	};

	// bool wxAppConsole::OnCmdLineParsed(wxCmdLineParser & parser)
	bool OnCmdLineParsed(wxCmdLineParser & parser) {
		if(_obj.pushFunction("OnCmdLineParsed")) {
			_obj.pushArg(&parser);
			return (_obj.callFunction<bool>());
		}

		return wxAppConsole::OnCmdLineParsed(parser);
	};

	// void wxAppConsole::OnEventLoopEnter(wxEventLoopBase * loop)
	void OnEventLoopEnter(wxEventLoopBase * loop) {
		if(_obj.pushFunction("OnEventLoopEnter")) {
			_obj.pushArg(loop);
			return (_obj.callFunction<void>());
		}

		return wxAppConsole::OnEventLoopEnter(loop);
	};

	// void wxAppConsole::OnEventLoopExit(wxEventLoopBase * loop)
	void OnEventLoopExit(wxEventLoopBase * loop) {
		if(_obj.pushFunction("OnEventLoopExit")) {
			_obj.pushArg(loop);
			return (_obj.callFunction<void>());
		}

		return wxAppConsole::OnEventLoopExit(loop);
	};

	// bool wxAppConsole::OnExceptionInMainLoop()
	bool OnExceptionInMainLoop() {
		if(_obj.pushFunction("OnExceptionInMainLoop")) {
			return (_obj.callFunction<bool>());
		}

		return wxAppConsole::OnExceptionInMainLoop();
	};

	// int wxAppConsole::OnExit()
	int OnExit() {
		if(_obj.pushFunction("OnExit")) {
			return (_obj.callFunction<int>());
		}

		return wxAppConsole::OnExit();
	};

	// void wxAppConsole::OnFatalException()
	void OnFatalException() {
		if(_obj.pushFunction("OnFatalException")) {
			return (_obj.callFunction<void>());
		}

		return wxAppConsole::OnFatalException();
	};

	// bool wxAppConsole::OnInit()
	bool OnInit() {
		if(_obj.pushFunction("OnInit")) {
			return (_obj.callFunction<bool>());
		}

		return wxAppConsole::OnInit();
	};

	// void wxAppConsole::OnInitCmdLine(wxCmdLineParser & parser)
	void OnInitCmdLine(wxCmdLineParser & parser) {
		if(_obj.pushFunction("OnInitCmdLine")) {
			_obj.pushArg(&parser);
			return (_obj.callFunction<void>());
		}

		return wxAppConsole::OnInitCmdLine(parser);
	};

	// int wxAppConsole::OnRun()
	int OnRun() {
		if(_obj.pushFunction("OnRun")) {
			return (_obj.callFunction<int>());
		}

		return wxAppConsole::OnRun();
	};

	// void wxAppConsole::OnUnhandledException()
	void OnUnhandledException() {
		if(_obj.pushFunction("OnUnhandledException")) {
			return (_obj.callFunction<void>());
		}

		return wxAppConsole::OnUnhandledException();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	// bool wxEvtHandler::TryBefore(wxEvent & event)
	// bool wxEvtHandler::TryAfter(wxEvent & event)
	// wxAppTraits * wxAppConsole::CreateTraits()

};




#endif


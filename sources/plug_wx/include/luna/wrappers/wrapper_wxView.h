#ifndef _WRAPPERS_WRAPPER_WXVIEW_H_
#define _WRAPPERS_WRAPPER_WXVIEW_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/docview.h>

class wrapper_wxView : public wxView {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxView(lua_State* L, lua_Table* dum) : wxView(), _obj(L,-1) {};

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

	// void wxView::Activate(bool activate)
	void Activate(bool activate) {
		if(_obj.pushFunction("Activate")) {
			_obj.pushArg(activate);
			return (_obj.callFunction<void>());
		}

		return wxView::Activate(activate);
	};

	// bool wxView::Close(bool deleteWindow = true)
	bool Close(bool deleteWindow = true) {
		if(_obj.pushFunction("Close")) {
			_obj.pushArg(deleteWindow);
			return (_obj.callFunction<bool>());
		}

		return wxView::Close(deleteWindow);
	};

	// void wxView::OnActivateView(bool activate, wxView * activeView, wxView * deactiveView)
	void OnActivateView(bool activate, wxView * activeView, wxView * deactiveView) {
		if(_obj.pushFunction("OnActivateView")) {
			_obj.pushArg(activate);
			_obj.pushArg(activeView);
			_obj.pushArg(deactiveView);
			return (_obj.callFunction<void>());
		}

		return wxView::OnActivateView(activate, activeView, deactiveView);
	};

	// void wxView::OnChangeFilename()
	void OnChangeFilename() {
		if(_obj.pushFunction("OnChangeFilename")) {
			return (_obj.callFunction<void>());
		}

		return wxView::OnChangeFilename();
	};

	// bool wxView::OnClose(bool deleteWindow)
	bool OnClose(bool deleteWindow) {
		if(_obj.pushFunction("OnClose")) {
			_obj.pushArg(deleteWindow);
			return (_obj.callFunction<bool>());
		}

		return wxView::OnClose(deleteWindow);
	};

	// void wxView::OnClosingDocument()
	void OnClosingDocument() {
		if(_obj.pushFunction("OnClosingDocument")) {
			return (_obj.callFunction<void>());
		}

		return wxView::OnClosingDocument();
	};

	// bool wxView::OnCreate(wxDocument * doc, long flags)
	bool OnCreate(wxDocument * doc, long flags) {
		if(_obj.pushFunction("OnCreate")) {
			_obj.pushArg(doc);
			_obj.pushArg(flags);
			return (_obj.callFunction<bool>());
		}

		return wxView::OnCreate(doc, flags);
	};

	// void wxView::OnDraw(wxDC * dc)
	void OnDraw(wxDC * dc) {
		THROW_IF(!_obj.pushFunction("OnDraw"),"No implementation for abstract function wxView::OnDraw");
		_obj.pushArg(dc);
		return (_obj.callFunction<void>());
	};

	// void wxView::OnUpdate(wxView * sender, wxObject * hint = 0)
	void OnUpdate(wxView * sender, wxObject * hint = 0) {
		if(_obj.pushFunction("OnUpdate")) {
			_obj.pushArg(sender);
			_obj.pushArg(hint);
			return (_obj.callFunction<void>());
		}

		return wxView::OnUpdate(sender, hint);
	};

	// void wxView::SetDocument(wxDocument * doc)
	void SetDocument(wxDocument * doc) {
		if(_obj.pushFunction("SetDocument")) {
			_obj.pushArg(doc);
			return (_obj.callFunction<void>());
		}

		return wxView::SetDocument(doc);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	// bool wxEvtHandler::TryBefore(wxEvent & event)
	// bool wxEvtHandler::TryAfter(wxEvent & event)

};




#endif


#ifndef _WRAPPERS_WRAPPER_WXLOGWINDOW_H_
#define _WRAPPERS_WRAPPER_WXLOGWINDOW_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/log.h>

class wrapper_wxLogWindow : public wxLogWindow {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxLogWindow(lua_State* L, lua_Table* dum, wxWindow * pParent, const wxString & szTitle, bool show = true, bool passToOld = true) : wxLogWindow(pParent, szTitle, show, passToOld), _obj(L,-1) {};

	// void wxLog::Flush()
	void Flush() {
		if(_obj.pushFunction("Flush")) {
			return (_obj.callFunction<void>());
		}

		return wxLog::Flush();
	};

	// bool wxLogWindow::OnFrameClose(wxFrame * frame)
	bool OnFrameClose(wxFrame * frame) {
		if(_obj.pushFunction("OnFrameClose")) {
			_obj.pushArg(frame);
			return (_obj.callFunction<bool>());
		}

		return wxLogWindow::OnFrameClose(frame);
	};

	// void wxLogWindow::OnFrameCreate(wxFrame * frame)
	void OnFrameCreate(wxFrame * frame) {
		if(_obj.pushFunction("OnFrameCreate")) {
			_obj.pushArg(frame);
			return (_obj.callFunction<void>());
		}

		return wxLogWindow::OnFrameCreate(frame);
	};

	// void wxLogWindow::OnFrameDelete(wxFrame * frame)
	void OnFrameDelete(wxFrame * frame) {
		if(_obj.pushFunction("OnFrameDelete")) {
			_obj.pushArg(frame);
			return (_obj.callFunction<void>());
		}

		return wxLogWindow::OnFrameDelete(frame);
	};


protected:
	// void wxLog::DoLogRecord(unsigned long level, const wxString & msg, const wxLogRecordInfo & info)
	// void wxLog::DoLogTextAtLevel(unsigned long level, const wxString & msg)
	// void wxLog::DoLogText(const wxString & msg)

};




#endif


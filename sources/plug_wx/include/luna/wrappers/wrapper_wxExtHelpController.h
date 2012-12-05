#ifndef _WRAPPERS_WRAPPER_WXEXTHELPCONTROLLER_H_
#define _WRAPPERS_WRAPPER_WXEXTHELPCONTROLLER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/generic/helpext.h>

class wrapper_wxExtHelpController : public wxExtHelpController {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxExtHelpController(lua_State* L, lua_Table* dum, wxWindow * parentWindow = NULL) : wxExtHelpController(parentWindow), _obj(L,-1) {};

	// bool wxHelpController::DisplayContextPopup(int contextId)
	bool DisplayContextPopup(int contextId) {
		if(_obj.pushFunction("DisplayContextPopup")) {
			_obj.pushArg(contextId);
			return (_obj.callFunction<bool>());
		}

		return wxHelpController::DisplayContextPopup(contextId);
	};

	// bool wxHelpController::DisplayTextPopup(const wxString & text, const wxPoint & pos)
	bool DisplayTextPopup(const wxString & text, const wxPoint & pos) {
		if(_obj.pushFunction("DisplayTextPopup")) {
			_obj.pushArg(text);
			_obj.pushArg(&pos);
			return (_obj.callFunction<bool>());
		}

		return wxHelpController::DisplayTextPopup(text, pos);
	};

	// wxWindow * wxHelpController::GetParentWindow() const
	wxWindow * GetParentWindow() const {
		if(_obj.pushFunction("GetParentWindow")) {
			return (_obj.callFunction<wxWindow*>());
		}

		return wxHelpController::GetParentWindow();
	};

	// void wxHelpController::SetParentWindow(wxWindow * parentWindow)
	void SetParentWindow(wxWindow * parentWindow) {
		if(_obj.pushFunction("SetParentWindow")) {
			_obj.pushArg(parentWindow);
			return (_obj.callFunction<void>());
		}

		return wxHelpController::SetParentWindow(parentWindow);
	};

	// void wxExtHelpController::SetViewer(const wxString & viewer = wxEmptyString, long flags = wxHELP_NETSCAPE)
	void SetViewer(const wxString & viewer = wxEmptyString, long flags = wxHELP_NETSCAPE) {
		if(_obj.pushFunction("SetViewer")) {
			_obj.pushArg(viewer);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxExtHelpController::SetViewer(viewer, flags);
	};

	// bool wxExtHelpController::Initialize(const wxString & dir)
	bool Initialize(const wxString & dir) {
		if(_obj.pushFunction("Initialize")) {
			_obj.pushArg(dir);
			return (_obj.callFunction<bool>());
		}

		return wxExtHelpController::Initialize(dir);
	};

	// bool wxExtHelpController::LoadFile(const wxString & file = wxEmptyString)
	bool LoadFile(const wxString & file = wxEmptyString) {
		if(_obj.pushFunction("LoadFile")) {
			_obj.pushArg(file);
			return (_obj.callFunction<bool>());
		}

		return wxExtHelpController::LoadFile(file);
	};

	// bool wxExtHelpController::DisplaySection(int sectionNo)
	bool DisplaySection(int sectionNo) {
		if(_obj.pushFunction("DisplaySection")) {
			_obj.pushArg(sectionNo);
			return (_obj.callFunction<bool>());
		}

		return wxExtHelpController::DisplaySection(sectionNo);
	};

	// bool wxExtHelpController::DisplaySection(const wxString & section)
	bool DisplaySection(const wxString & section) {
		if(_obj.pushFunction("DisplaySection")) {
			_obj.pushArg(section);
			return (_obj.callFunction<bool>());
		}

		return wxExtHelpController::DisplaySection(section);
	};

	// bool wxExtHelpController::DisplayBlock(long blockNo)
	bool DisplayBlock(long blockNo) {
		if(_obj.pushFunction("DisplayBlock")) {
			_obj.pushArg(blockNo);
			return (_obj.callFunction<bool>());
		}

		return wxExtHelpController::DisplayBlock(blockNo);
	};

	// bool wxExtHelpController::KeywordSearch(const wxString & k, wxHelpSearchMode mode = ::wxHELP_SEARCH_ALL)
	bool KeywordSearch(const wxString & k, wxHelpSearchMode mode = ::wxHELP_SEARCH_ALL) {
		if(_obj.pushFunction("KeywordSearch")) {
			_obj.pushArg(k);
			_obj.pushArg(mode);
			return (_obj.callFunction<bool>());
		}

		return wxExtHelpController::KeywordSearch(k, mode);
	};

	// bool wxExtHelpController::Quit()
	bool Quit() {
		if(_obj.pushFunction("Quit")) {
			return (_obj.callFunction<bool>());
		}

		return wxExtHelpController::Quit();
	};

	// void wxExtHelpController::OnQuit()
	void OnQuit() {
		if(_obj.pushFunction("OnQuit")) {
			return (_obj.callFunction<void>());
		}

		return wxExtHelpController::OnQuit();
	};

	// bool wxExtHelpController::DisplayHelp(const wxString & arg1)
	bool DisplayHelp(const wxString & arg1) {
		if(_obj.pushFunction("DisplayHelp")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<bool>());
		}

		return wxExtHelpController::DisplayHelp(arg1);
	};

	// void wxExtHelpController::SetFrameParameters(const wxString & title, const wxSize & size, const wxPoint & pos = wxDefaultPosition, bool newFrameEachTime = false)
	void SetFrameParameters(const wxString & title, const wxSize & size, const wxPoint & pos = wxDefaultPosition, bool newFrameEachTime = false) {
		if(_obj.pushFunction("SetFrameParameters")) {
			_obj.pushArg(title);
			_obj.pushArg(&size);
			_obj.pushArg(&pos);
			_obj.pushArg(newFrameEachTime);
			return (_obj.callFunction<void>());
		}

		return wxExtHelpController::SetFrameParameters(title, size, pos, newFrameEachTime);
	};

	// wxFrame * wxExtHelpController::GetFrameParameters(wxSize * size = NULL, wxPoint * pos = NULL, bool * newFrameEachTime = NULL)
	wxFrame * GetFrameParameters(wxSize * size = NULL, wxPoint * pos = NULL, bool * newFrameEachTime = NULL) {
		if(_obj.pushFunction("GetFrameParameters")) {
			_obj.pushArg(size);
			_obj.pushArg(pos);
			_obj.pushArg(newFrameEachTime);
			return (_obj.callFunction<wxFrame*>());
		}

		return wxExtHelpController::GetFrameParameters(size, pos, newFrameEachTime);
	};




};




#endif


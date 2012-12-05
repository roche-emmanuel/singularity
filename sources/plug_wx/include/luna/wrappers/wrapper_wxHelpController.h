#ifndef _WRAPPERS_WRAPPER_WXHELPCONTROLLER_H_
#define _WRAPPERS_WRAPPER_WXHELPCONTROLLER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/help.h>

class wrapper_wxHelpController : public wxHelpController {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxHelpController(lua_State* L, lua_Table* dum, wxWindow * parentWindow = NULL) : wxHelpController(parentWindow), _obj(L,-1) {};

	// bool wxHelpController::DisplayBlock(long blockNo)
	bool DisplayBlock(long blockNo) {
		if(_obj.pushFunction("DisplayBlock")) {
			_obj.pushArg(blockNo);
			return (_obj.callFunction<bool>());
		}

		return wxHelpController::DisplayBlock(blockNo);
	};

	// bool wxHelpController::DisplayContents()
	bool DisplayContents() {
		if(_obj.pushFunction("DisplayContents")) {
			return (_obj.callFunction<bool>());
		}

		return wxHelpController::DisplayContents();
	};

	// bool wxHelpController::DisplayContextPopup(int contextId)
	bool DisplayContextPopup(int contextId) {
		if(_obj.pushFunction("DisplayContextPopup")) {
			_obj.pushArg(contextId);
			return (_obj.callFunction<bool>());
		}

		return wxHelpController::DisplayContextPopup(contextId);
	};

	// bool wxHelpController::DisplaySection(const wxString & section)
	bool DisplaySection(const wxString & section) {
		if(_obj.pushFunction("DisplaySection")) {
			_obj.pushArg(section);
			return (_obj.callFunction<bool>());
		}

		return wxHelpController::DisplaySection(section);
	};

	// bool wxHelpController::DisplaySection(int sectionNo)
	bool DisplaySection(int sectionNo) {
		if(_obj.pushFunction("DisplaySection")) {
			_obj.pushArg(sectionNo);
			return (_obj.callFunction<bool>());
		}

		return wxHelpController::DisplaySection(sectionNo);
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

	// wxFrame * wxHelpController::GetFrameParameters(wxSize * size = NULL, wxPoint * pos = NULL, bool * newFrameEachTime = NULL)
	wxFrame * GetFrameParameters(wxSize * size = NULL, wxPoint * pos = NULL, bool * newFrameEachTime = NULL) {
		if(_obj.pushFunction("GetFrameParameters")) {
			_obj.pushArg(size);
			_obj.pushArg(pos);
			_obj.pushArg(newFrameEachTime);
			return (_obj.callFunction<wxFrame*>());
		}

		return wxHelpController::GetFrameParameters(size, pos, newFrameEachTime);
	};

	// wxWindow * wxHelpController::GetParentWindow() const
	wxWindow * GetParentWindow() const {
		if(_obj.pushFunction("GetParentWindow")) {
			return (_obj.callFunction<wxWindow*>());
		}

		return wxHelpController::GetParentWindow();
	};

	// bool wxHelpController::Initialize(const wxString & file)
	bool Initialize(const wxString & file) {
		if(_obj.pushFunction("Initialize")) {
			_obj.pushArg(file);
			return (_obj.callFunction<bool>());
		}

		return wxHelpController::Initialize(file);
	};

	// bool wxHelpController::Initialize(const wxString & file, int server)
	bool Initialize(const wxString & file, int server) {
		if(_obj.pushFunction("Initialize")) {
			_obj.pushArg(file);
			_obj.pushArg(server);
			return (_obj.callFunction<bool>());
		}

		return wxHelpController::Initialize(file, server);
	};

	// bool wxHelpController::KeywordSearch(const wxString & keyWord, wxHelpSearchMode mode = ::wxHELP_SEARCH_ALL)
	bool KeywordSearch(const wxString & keyWord, wxHelpSearchMode mode = ::wxHELP_SEARCH_ALL) {
		if(_obj.pushFunction("KeywordSearch")) {
			_obj.pushArg(keyWord);
			_obj.pushArg(mode);
			return (_obj.callFunction<bool>());
		}

		return wxHelpController::KeywordSearch(keyWord, mode);
	};

	// bool wxHelpController::LoadFile(const wxString & file = wxEmptyString)
	bool LoadFile(const wxString & file = wxEmptyString) {
		if(_obj.pushFunction("LoadFile")) {
			_obj.pushArg(file);
			return (_obj.callFunction<bool>());
		}

		return wxHelpController::LoadFile(file);
	};

	// bool wxHelpController::Quit()
	bool Quit() {
		if(_obj.pushFunction("Quit")) {
			return (_obj.callFunction<bool>());
		}

		return wxHelpController::Quit();
	};

	// void wxHelpController::SetFrameParameters(const wxString & title, const wxSize & size, const wxPoint & pos = wxDefaultPosition, bool newFrameEachTime = false)
	void SetFrameParameters(const wxString & title, const wxSize & size, const wxPoint & pos = wxDefaultPosition, bool newFrameEachTime = false) {
		if(_obj.pushFunction("SetFrameParameters")) {
			_obj.pushArg(title);
			_obj.pushArg(&size);
			_obj.pushArg(&pos);
			_obj.pushArg(newFrameEachTime);
			return (_obj.callFunction<void>());
		}

		return wxHelpController::SetFrameParameters(title, size, pos, newFrameEachTime);
	};

	// void wxHelpController::SetParentWindow(wxWindow * parentWindow)
	void SetParentWindow(wxWindow * parentWindow) {
		if(_obj.pushFunction("SetParentWindow")) {
			_obj.pushArg(parentWindow);
			return (_obj.callFunction<void>());
		}

		return wxHelpController::SetParentWindow(parentWindow);
	};

	// void wxHelpController::SetViewer(const wxString & viewer, long flags)
	void SetViewer(const wxString & viewer, long flags) {
		if(_obj.pushFunction("SetViewer")) {
			_obj.pushArg(viewer);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxHelpController::SetViewer(viewer, flags);
	};




};




#endif


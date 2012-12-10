#ifndef _WRAPPERS_WRAPPER_WXSTANDARDPATHS_H_
#define _WRAPPERS_WRAPPER_WXSTANDARDPATHS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/stdpaths.h>

class wrapper_wxStandardPaths : public wxStandardPaths {
protected:
	sgt::LuaObject _obj;
	
public:
	


	// wxString wxStandardPaths::GetAppDocumentsDir() const
	wxString GetAppDocumentsDir() const {
		if(_obj.pushFunction("GetAppDocumentsDir")) {
			return *(_obj.callFunction<wxString*>());
		}

		return wxStandardPaths::GetAppDocumentsDir();
	};

	// wxString wxStandardPaths::GetConfigDir() const
	wxString GetConfigDir() const {
		if(_obj.pushFunction("GetConfigDir")) {
			return *(_obj.callFunction<wxString*>());
		}

		return wxStandardPaths::GetConfigDir();
	};

	// wxString wxStandardPaths::GetDataDir() const
	wxString GetDataDir() const {
		if(_obj.pushFunction("GetDataDir")) {
			return *(_obj.callFunction<wxString*>());
		}

		return wxStandardPaths::GetDataDir();
	};

	// wxString wxStandardPaths::GetDocumentsDir() const
	wxString GetDocumentsDir() const {
		if(_obj.pushFunction("GetDocumentsDir")) {
			return *(_obj.callFunction<wxString*>());
		}

		return wxStandardPaths::GetDocumentsDir();
	};

	// wxString wxStandardPaths::GetExecutablePath() const
	wxString GetExecutablePath() const {
		if(_obj.pushFunction("GetExecutablePath")) {
			return *(_obj.callFunction<wxString*>());
		}

		return wxStandardPaths::GetExecutablePath();
	};

	// wxString wxStandardPaths::GetLocalDataDir() const
	wxString GetLocalDataDir() const {
		if(_obj.pushFunction("GetLocalDataDir")) {
			return *(_obj.callFunction<wxString*>());
		}

		return wxStandardPaths::GetLocalDataDir();
	};

	// wxString wxStandardPaths::GetLocalizedResourcesDir(const wxString & lang, wxStandardPaths::ResourceCat category = wxStandardPaths::ResourceCat_None) const
	wxString GetLocalizedResourcesDir(const wxString & lang, wxStandardPaths::ResourceCat category = wxStandardPaths::ResourceCat_None) const {
		if(_obj.pushFunction("GetLocalizedResourcesDir")) {
			_obj.pushArg(lang);
			_obj.pushArg(category);
			return *(_obj.callFunction<wxString*>());
		}

		return wxStandardPaths::GetLocalizedResourcesDir(lang, category);
	};

	// wxString wxStandardPaths::GetPluginsDir() const
	wxString GetPluginsDir() const {
		if(_obj.pushFunction("GetPluginsDir")) {
			return *(_obj.callFunction<wxString*>());
		}

		return wxStandardPaths::GetPluginsDir();
	};

	// wxString wxStandardPaths::GetResourcesDir() const
	wxString GetResourcesDir() const {
		if(_obj.pushFunction("GetResourcesDir")) {
			return *(_obj.callFunction<wxString*>());
		}

		return wxStandardPaths::GetResourcesDir();
	};

	// wxString wxStandardPaths::GetTempDir() const
	wxString GetTempDir() const {
		if(_obj.pushFunction("GetTempDir")) {
			return *(_obj.callFunction<wxString*>());
		}

		return wxStandardPaths::GetTempDir();
	};

	// wxString wxStandardPaths::GetUserConfigDir() const
	wxString GetUserConfigDir() const {
		if(_obj.pushFunction("GetUserConfigDir")) {
			return *(_obj.callFunction<wxString*>());
		}

		return wxStandardPaths::GetUserConfigDir();
	};

	// wxString wxStandardPaths::GetUserDataDir() const
	wxString GetUserDataDir() const {
		if(_obj.pushFunction("GetUserDataDir")) {
			return *(_obj.callFunction<wxString*>());
		}

		return wxStandardPaths::GetUserDataDir();
	};

	// wxString wxStandardPaths::GetUserLocalDataDir() const
	wxString GetUserLocalDataDir() const {
		if(_obj.pushFunction("GetUserLocalDataDir")) {
			return *(_obj.callFunction<wxString*>());
		}

		return wxStandardPaths::GetUserLocalDataDir();
	};




};




#endif


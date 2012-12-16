#ifndef _WRAPPERS_WRAPPER_WXRESOURCETRANSLATIONSLOADER_H_
#define _WRAPPERS_WRAPPER_WXRESOURCETRANSLATIONSLOADER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/translation.h>

class wrapper_wxResourceTranslationsLoader : public wxResourceTranslationsLoader, public luna_wrapper_base {

public:
	


	// wxMsgCatalog * wxTranslationsLoader::LoadCatalog(const wxString & domain, const wxString & lang)
	wxMsgCatalog * LoadCatalog(const wxString & domain, const wxString & lang) {
		THROW_IF(!_obj.pushFunction("LoadCatalog"),"No implementation for abstract function wxTranslationsLoader::LoadCatalog");
		_obj.pushArg(domain);
		_obj.pushArg(lang);
		return (_obj.callFunction<wxMsgCatalog*>());
	};

	// wxArrayString wxTranslationsLoader::GetAvailableTranslations(const wxString & domain) const
	wxArrayString GetAvailableTranslations(const wxString & domain) const {
		THROW_IF(!_obj.pushFunction("GetAvailableTranslations"),"No implementation for abstract function wxTranslationsLoader::GetAvailableTranslations");
		_obj.pushArg(domain);
		return *(_obj.callFunction<wxArrayString*>());
	};


protected:
	// wxString wxResourceTranslationsLoader::GetResourceType() const
	wxString GetResourceType() const {
		if(_obj.pushFunction("GetResourceType")) {
			return *(_obj.callFunction<wxString*>());
		}

		return wxResourceTranslationsLoader::GetResourceType();
	};


};




#endif


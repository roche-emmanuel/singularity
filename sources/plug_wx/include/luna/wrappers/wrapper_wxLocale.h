#ifndef _WRAPPERS_WRAPPER_WXLOCALE_H_
#define _WRAPPERS_WRAPPER_WXLOCALE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/intl.h>

class wrapper_wxLocale : public wxLocale {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxLocale(lua_State* L, lua_Table* dum) : wxLocale(), _obj(L,-1) {};
	wrapper_wxLocale(lua_State* L, lua_Table* dum, int language, int flags = ::wxLOCALE_LOAD_DEFAULT) : wxLocale(language, flags), _obj(L,-1) {};
	wrapper_wxLocale(lua_State* L, lua_Table* dum, const wxString & name, const wxString & shortName = wxEmptyString, const wxString & locale = wxEmptyString, bool bLoadDefault = true) : wxLocale(name, shortName, locale, bLoadDefault), _obj(L,-1) {};

	// const wxString & wxLocale::GetString(const wxString & origString, const wxString & domain = wxEmptyString) const
	const wxString & GetString(const wxString & origString, const wxString & domain = wxEmptyString) const {
		if(_obj.pushFunction("GetString")) {
			_obj.pushArg(origString);
			_obj.pushArg(domain);
			return *(_obj.callFunction<wxString*>());
		}

		return wxLocale::GetString(origString, domain);
	};

	// const wxString & wxLocale::GetString(const wxString & origString, const wxString & origString2, unsigned int n, const wxString & domain = wxEmptyString) const
	const wxString & GetString(const wxString & origString, const wxString & origString2, unsigned int n, const wxString & domain = wxEmptyString) const {
		if(_obj.pushFunction("GetString")) {
			_obj.pushArg(origString);
			_obj.pushArg(origString2);
			_obj.pushArg(n);
			_obj.pushArg(domain);
			return *(_obj.callFunction<wxString*>());
		}

		return wxLocale::GetString(origString, origString2, n, domain);
	};




};




#endif


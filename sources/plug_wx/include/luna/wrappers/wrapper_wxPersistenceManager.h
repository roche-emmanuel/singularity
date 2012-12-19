#ifndef _WRAPPERS_WRAPPER_WXPERSISTENCEMANAGER_H_
#define _WRAPPERS_WRAPPER_WXPERSISTENCEMANAGER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/persist.h>

class wrapper_wxPersistenceManager : public wxPersistenceManager, public luna_wrapper_base {

public:
	

	wrapper_wxPersistenceManager(lua_State* L, lua_Table* dum) : wxPersistenceManager(), luna_wrapper_base(L) {};


protected:
	// wxConfigBase * wxPersistenceManager::GetConfig() const
	wxConfigBase * GetConfig() const {
		if(_obj.pushFunction("GetConfig")) {
			return (_obj.callFunction<wxConfigBase*>());
		}

		return wxPersistenceManager::GetConfig();
	};

	// wxString wxPersistenceManager::GetKey(const wxPersistentObject & who, const wxString & name) const
	wxString GetKey(const wxPersistentObject & who, const wxString & name) const {
		if(_obj.pushFunction("GetKey")) {
			_obj.pushArg(&who);
			_obj.pushArg(name);
			return *(_obj.callFunction<wxString*>());
		}

		return wxPersistenceManager::GetKey(who, name);
	};


};




#endif


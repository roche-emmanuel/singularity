#ifndef _WRAPPERS_WRAPPER_WXPERSISTENCEMANAGER_H_
#define _WRAPPERS_WRAPPER_WXPERSISTENCEMANAGER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/persist.h>

class wrapper_wxPersistenceManager : public wxPersistenceManager {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxPersistenceManager(lua_State* L, lua_Table* dum) : wxPersistenceManager(), _obj(L,-1) {};


protected:
	// wxConfigBase * wxPersistenceManager::GetConfig() const
	// wxString wxPersistenceManager::GetKey(const wxPersistentObject & who, const wxString & name) const

};




#endif


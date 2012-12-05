#ifndef _WRAPPERS_WRAPPER_WXTARENTRY_H_
#define _WRAPPERS_WRAPPER_WXTARENTRY_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/tarstrm.h>

class wrapper_wxTarEntry : public wxTarEntry {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxTarEntry(lua_State* L, lua_Table* dum, const wxString & name = wxEmptyString, const wxDateTime & dt = wxDateTime::Now (), long size = wxInvalidOffset) : wxTarEntry(name, dt, size), _obj(L,-1) {};
	wrapper_wxTarEntry(lua_State* L, lua_Table* dum, const wxTarEntry & entry) : wxTarEntry(entry), _obj(L,-1) {};

	// void wxTarEntry::SetSize(long size)
	void SetSize(long size) {
		if(_obj.pushFunction("SetSize")) {
			_obj.pushArg(size);
			return (_obj.callFunction<void>());
		}

		return wxTarEntry::SetSize(size);
	};

	// long wxTarEntry::GetSize() const
	long GetSize() const {
		if(_obj.pushFunction("GetSize")) {
			return (_obj.callFunction<long>());
		}

		return wxTarEntry::GetSize();
	};

	// wxString wxTarEntry::GetInternalName() const
	wxString GetInternalName() const {
		if(_obj.pushFunction("GetInternalName")) {
			return *(_obj.callFunction<wxString*>());
		}

		return wxTarEntry::GetInternalName();
	};




};




#endif


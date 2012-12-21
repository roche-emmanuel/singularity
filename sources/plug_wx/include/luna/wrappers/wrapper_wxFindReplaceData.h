#ifndef _WRAPPERS_WRAPPER_WXFINDREPLACEDATA_H_
#define _WRAPPERS_WRAPPER_WXFINDREPLACEDATA_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/fdrepdlg.h>

class wrapper_wxFindReplaceData : public wxFindReplaceData, public luna_wrapper_base {

public:
		

	~wrapper_wxFindReplaceData() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxFindReplaceData(lua_State* L, lua_Table* dum, unsigned int flags = 0) : wxFindReplaceData(flags), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxFindReplaceData::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFindReplaceData::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFindReplaceData::CloneRefData(data);
	};


};




#endif

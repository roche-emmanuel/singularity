#ifndef _WRAPPERS_WRAPPER_WXHTMLHELPDATA_H_
#define _WRAPPERS_WRAPPER_WXHTMLHELPDATA_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/html/helpdata.h>

class wrapper_wxHtmlHelpData : public wxHtmlHelpData {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxHtmlHelpData(lua_State* L, lua_Table* dum) : wxHtmlHelpData(), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxHtmlHelpData::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlHelpData::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlHelpData::CloneRefData(data);
	};


};




#endif


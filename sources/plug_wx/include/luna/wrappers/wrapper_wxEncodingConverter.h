#ifndef _WRAPPERS_WRAPPER_WXENCODINGCONVERTER_H_
#define _WRAPPERS_WRAPPER_WXENCODINGCONVERTER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/encconv.h>

class wrapper_wxEncodingConverter : public wxEncodingConverter {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxEncodingConverter(lua_State* L, lua_Table* dum) : wxEncodingConverter(), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxObject::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif


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

		return wxEncodingConverter::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxEncodingConverter::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxEncodingConverter::CloneRefData(data);
	};


};




#endif


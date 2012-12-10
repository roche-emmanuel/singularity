#ifndef _WRAPPERS_WRAPPER_WXPGCHOICEENTRY_H_
#define _WRAPPERS_WRAPPER_WXPGCHOICEENTRY_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"



class wrapper_wxPGChoiceEntry : public wxPGChoiceEntry {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxPGChoiceEntry(lua_State* L, lua_Table* dum) : wxPGChoiceEntry(), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxPGChoiceEntry::GetClassInfo();
	};




};




#endif


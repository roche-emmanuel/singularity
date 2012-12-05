#ifndef _WRAPPERS_WRAPPER_WXMASK_H_
#define _WRAPPERS_WRAPPER_WXMASK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/bitmap.h>

class wrapper_wxMask : public wxMask {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxMask(lua_State* L, lua_Table* dum) : wxMask(), _obj(L,-1) {};
	wrapper_wxMask(lua_State* L, lua_Table* dum, const wxBitmap & bitmap, int index) : wxMask(bitmap, index), _obj(L,-1) {};
	wrapper_wxMask(lua_State* L, lua_Table* dum, const wxBitmap & bitmap) : wxMask(bitmap), _obj(L,-1) {};
	wrapper_wxMask(lua_State* L, lua_Table* dum, const wxBitmap & bitmap, const wxColour & colour) : wxMask(bitmap, colour), _obj(L,-1) {};

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


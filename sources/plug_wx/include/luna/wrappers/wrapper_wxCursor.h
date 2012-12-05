#ifndef _WRAPPERS_WRAPPER_WXCURSOR_H_
#define _WRAPPERS_WRAPPER_WXCURSOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/cursor.h>

class wrapper_wxCursor : public wxCursor {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxCursor(lua_State* L, lua_Table* dum) : wxCursor(), _obj(L,-1) {};
	wrapper_wxCursor(lua_State* L, lua_Table* dum, const wxString & cursorName, wxBitmapType type = wxCURSOR_DEFAULT_TYPE, int hotSpotX = 0, int hotSpotY = 0) : wxCursor(cursorName, type, hotSpotX, hotSpotY), _obj(L,-1) {};
	wrapper_wxCursor(lua_State* L, lua_Table* dum, wxStockCursor cursorId) : wxCursor(cursorId), _obj(L,-1) {};
	wrapper_wxCursor(lua_State* L, lua_Table* dum, const wxImage & image) : wxCursor(image), _obj(L,-1) {};
	wrapper_wxCursor(lua_State* L, lua_Table* dum, const wxCursor & cursor) : wxCursor(cursor), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxObject::GetClassInfo();
	};

	// bool wxCursor::IsOk() const
	bool IsOk() const {
		if(_obj.pushFunction("IsOk")) {
			return (_obj.callFunction<bool>());
		}

		return wxCursor::IsOk();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif


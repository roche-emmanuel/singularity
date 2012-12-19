#ifndef _WRAPPERS_WRAPPER_WXPGCELL_H_
#define _WRAPPERS_WRAPPER_WXPGCELL_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/propgrid/property.h>

class wrapper_wxPGCell : public wxPGCell, public luna_wrapper_base {

public:
	

	wrapper_wxPGCell(lua_State* L, lua_Table* dum) : wxPGCell(), luna_wrapper_base(L) {};
	wrapper_wxPGCell(lua_State* L, lua_Table* dum, const wxPGCell & other) : wxPGCell(other), luna_wrapper_base(L) {};
	wrapper_wxPGCell(lua_State* L, lua_Table* dum, const wxString & text, const wxBitmap & bitmap = wxNullBitmap, const wxColour & fgCol = wxNullColour, const wxColour & bgCol = wxNullColour) : wxPGCell(text, bitmap, fgCol, bgCol), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxPGCell::GetClassInfo();
	};




};




#endif


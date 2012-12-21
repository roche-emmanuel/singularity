#ifndef _WRAPPERS_WRAPPER_WXDRAGIMAGE_H_
#define _WRAPPERS_WRAPPER_WXDRAGIMAGE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/dragimag.h>

class wrapper_wxDragImage : public wxDragImage, public luna_wrapper_base {

public:
		

	~wrapper_wxDragImage() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxDragImage(lua_State* L, lua_Table* dum) : wxDragImage(), luna_wrapper_base(L) {};
	wrapper_wxDragImage(lua_State* L, lua_Table* dum, const wxBitmap & image, const wxCursor & cursor = wxNullCursor, const wxPoint & cursorHotspot = wxPoint (0, 0)) : wxDragImage(image, cursor, cursorHotspot), luna_wrapper_base(L) {};
	wrapper_wxDragImage(lua_State* L, lua_Table* dum, const wxIcon & image, const wxCursor & cursor = wxNullCursor, const wxPoint & cursorHotspot = wxPoint (0, 0)) : wxDragImage(image, cursor, cursorHotspot), luna_wrapper_base(L) {};
	wrapper_wxDragImage(lua_State* L, lua_Table* dum, const wxString & text, const wxCursor & cursor = wxNullCursor, const wxPoint & cursorHotspot = wxPoint (0, 0)) : wxDragImage(text, cursor, cursorHotspot), luna_wrapper_base(L) {};
	wrapper_wxDragImage(lua_State* L, lua_Table* dum, const wxTreeCtrl & treeCtrl, wxTreeItemId & id) : wxDragImage(treeCtrl, id), luna_wrapper_base(L) {};
	wrapper_wxDragImage(lua_State* L, lua_Table* dum, const wxListCtrl & listCtrl, long id) : wxDragImage(listCtrl, id), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxDragImage::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDragImage::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDragImage::CloneRefData(data);
	};


};




#endif


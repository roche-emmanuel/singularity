#ifndef _WRAPPERS_WRAPPER_WXDRAGIMAGE_H_
#define _WRAPPERS_WRAPPER_WXDRAGIMAGE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/dragimag.h>

class wrapper_wxDragImage : public wxDragImage {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxDragImage(lua_State* L, lua_Table* dum) : wxDragImage(), _obj(L,-1) {};
	wrapper_wxDragImage(lua_State* L, lua_Table* dum, const wxBitmap & image, const wxCursor & cursor = wxNullCursor, const wxPoint & cursorHotspot = wxPoint (0, 0)) : wxDragImage(image, cursor, cursorHotspot), _obj(L,-1) {};
	wrapper_wxDragImage(lua_State* L, lua_Table* dum, const wxIcon & image, const wxCursor & cursor = wxNullCursor, const wxPoint & cursorHotspot = wxPoint (0, 0)) : wxDragImage(image, cursor, cursorHotspot), _obj(L,-1) {};
	wrapper_wxDragImage(lua_State* L, lua_Table* dum, const wxString & text, const wxCursor & cursor = wxNullCursor, const wxPoint & cursorHotspot = wxPoint (0, 0)) : wxDragImage(text, cursor, cursorHotspot), _obj(L,-1) {};
	wrapper_wxDragImage(lua_State* L, lua_Table* dum, const wxTreeCtrl & treeCtrl, wxTreeItemId & id) : wxDragImage(treeCtrl, id), _obj(L,-1) {};
	wrapper_wxDragImage(lua_State* L, lua_Table* dum, const wxListCtrl & listCtrl, long id) : wxDragImage(listCtrl, id), _obj(L,-1) {};

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


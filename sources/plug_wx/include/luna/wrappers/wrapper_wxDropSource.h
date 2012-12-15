#ifndef _WRAPPERS_WRAPPER_WXDROPSOURCE_H_
#define _WRAPPERS_WRAPPER_WXDROPSOURCE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/dnd.h>

class wrapper_wxDropSource : public wxDropSource {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxDropSource(lua_State* L, lua_Table* dum, wxWindow * win = NULL, const wxCursor & iconCopy = wxNullCursor, const wxCursor & iconMove = wxNullCursor, const wxCursor & iconNone = wxNullCursor) : wxDropSource(win, iconCopy, iconMove, iconNone), _obj(L,-1) {};
	wrapper_wxDropSource(lua_State* L, lua_Table* dum, wxDataObject & data, wxWindow * win = NULL, const wxCursor & iconCopy = wxNullCursor, const wxCursor & iconMove = wxNullCursor, const wxCursor & iconNone = wxNullCursor) : wxDropSource(data, win, iconCopy, iconMove, iconNone), _obj(L,-1) {};

	// wxDragResult wxDropSource::DoDragDrop(int flags = ::wxDrag_CopyOnly)
	wxDragResult DoDragDrop(int flags = ::wxDrag_CopyOnly) {
		if(_obj.pushFunction("DoDragDrop")) {
			_obj.pushArg(flags);
			return (wxDragResult)(_obj.callFunction<int>());
		}

		return wxDropSource::DoDragDrop(flags);
	};

	// bool wxDropSource::GiveFeedback(wxDragResult effect)
	bool GiveFeedback(wxDragResult effect) {
		if(_obj.pushFunction("GiveFeedback")) {
			_obj.pushArg(effect);
			return (_obj.callFunction<bool>());
		}

		return wxDropSource::GiveFeedback(effect);
	};




};




#endif


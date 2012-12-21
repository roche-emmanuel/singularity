#ifndef _WRAPPERS_WRAPPER_WXDROPSOURCE_H_
#define _WRAPPERS_WRAPPER_WXDROPSOURCE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/dnd.h>

class wrapper_wxDropSource : public wxDropSource, public luna_wrapper_base {

public:
		

	~wrapper_wxDropSource() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxDropSource(lua_State* L, lua_Table* dum, wxWindow * win = NULL, const wxCursor & iconCopy = wxNullCursor, const wxCursor & iconMove = wxNullCursor, const wxCursor & iconNone = wxNullCursor) : wxDropSource(win, iconCopy, iconMove, iconNone), luna_wrapper_base(L) {};
	wrapper_wxDropSource(lua_State* L, lua_Table* dum, wxDataObject & data, wxWindow * win = NULL, const wxCursor & iconCopy = wxNullCursor, const wxCursor & iconMove = wxNullCursor, const wxCursor & iconNone = wxNullCursor) : wxDropSource(data, win, iconCopy, iconMove, iconNone), luna_wrapper_base(L) {};

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


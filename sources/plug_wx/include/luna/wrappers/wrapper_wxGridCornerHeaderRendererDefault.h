#ifndef _WRAPPERS_WRAPPER_WXGRIDCORNERHEADERRENDERERDEFAULT_H_
#define _WRAPPERS_WRAPPER_WXGRIDCORNERHEADERRENDERERDEFAULT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/grid.h>

class wrapper_wxGridCornerHeaderRendererDefault : public wxGridCornerHeaderRendererDefault, public luna_wrapper_base {

public:
	


	// void wxGridCornerHeaderRendererDefault::DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const
	void DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const {
		if(_obj.pushFunction("DrawBorder")) {
			_obj.pushArg(&grid);
			_obj.pushArg(&dc);
			_obj.pushArg(&rect);
			return (_obj.callFunction<void>());
		}

		return wxGridCornerHeaderRendererDefault::DrawBorder(grid, dc, rect);
	};




};




#endif


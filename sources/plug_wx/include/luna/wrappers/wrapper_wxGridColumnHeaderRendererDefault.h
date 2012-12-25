#ifndef _WRAPPERS_WRAPPER_WXGRIDCOLUMNHEADERRENDERERDEFAULT_H_
#define _WRAPPERS_WRAPPER_WXGRIDCOLUMNHEADERRENDERERDEFAULT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/grid.h>

class wrapper_wxGridColumnHeaderRendererDefault : public wxGridColumnHeaderRendererDefault, public luna_wrapper_base {

public:
		

	~wrapper_wxGridColumnHeaderRendererDefault() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	

	// Public virtual methods:
	// void wxGridHeaderLabelsRenderer::DrawLabel(const wxGrid & grid, wxDC & dc, const wxString & value, const wxRect & rect, int horizAlign, int vertAlign, int textOrientation) const
	void DrawLabel(const wxGrid & grid, wxDC & dc, const wxString & value, const wxRect & rect, int horizAlign, int vertAlign, int textOrientation) const {
		if(_obj.pushFunction("DrawLabel")) {
			_obj.pushArg(&grid);
			_obj.pushArg(&dc);
			_obj.pushArg(value);
			_obj.pushArg(&rect);
			_obj.pushArg(horizAlign);
			_obj.pushArg(vertAlign);
			_obj.pushArg(textOrientation);
			return (_obj.callFunction<void>());
		}

		return wxGridColumnHeaderRendererDefault::DrawLabel(grid, dc, value, rect, horizAlign, vertAlign, textOrientation);
	};

	// void wxGridColumnHeaderRendererDefault::DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const
	void DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const {
		if(_obj.pushFunction("DrawBorder")) {
			_obj.pushArg(&grid);
			_obj.pushArg(&dc);
			_obj.pushArg(&rect);
			return (_obj.callFunction<void>());
		}

		return wxGridColumnHeaderRendererDefault::DrawBorder(grid, dc, rect);
	};



	// Protected virtual methods:

	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


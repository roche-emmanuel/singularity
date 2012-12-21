#ifndef _WRAPPERS_WRAPPER_WXGRIDHEADERLABELSRENDERER_H_
#define _WRAPPERS_WRAPPER_WXGRIDHEADERLABELSRENDERER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/grid.h>

class wrapper_wxGridHeaderLabelsRenderer : public wxGridHeaderLabelsRenderer, public luna_wrapper_base {

public:
		

	~wrapper_wxGridHeaderLabelsRenderer() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	

	// void wxGridCornerHeaderRenderer::DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const
	void DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const {
		THROW_IF(!_obj.pushFunction("DrawBorder"),"No implementation for abstract function wxGridCornerHeaderRenderer::DrawBorder");
		_obj.pushArg(&grid);
		_obj.pushArg(&dc);
		_obj.pushArg(&rect);
		return (_obj.callFunction<void>());
	};

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

		return wxGridHeaderLabelsRenderer::DrawLabel(grid, dc, value, rect, horizAlign, vertAlign, textOrientation);
	};




};




#endif

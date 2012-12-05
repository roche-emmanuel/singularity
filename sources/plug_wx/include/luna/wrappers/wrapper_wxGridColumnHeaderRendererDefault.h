#ifndef _WRAPPERS_WRAPPER_WXGRIDCOLUMNHEADERRENDERERDEFAULT_H_
#define _WRAPPERS_WRAPPER_WXGRIDCOLUMNHEADERRENDERERDEFAULT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/grid.h>

class wrapper_wxGridColumnHeaderRendererDefault : public wxGridColumnHeaderRendererDefault {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxGridColumnHeaderRendererDefault(lua_State* L, lua_Table* dum) : wxGridColumnHeaderRendererDefault(), _obj(L,-1) {};

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




};




#endif


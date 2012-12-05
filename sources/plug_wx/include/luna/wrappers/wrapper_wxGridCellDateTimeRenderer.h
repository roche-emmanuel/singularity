#ifndef _WRAPPERS_WRAPPER_WXGRIDCELLDATETIMERENDERER_H_
#define _WRAPPERS_WRAPPER_WXGRIDCELLDATETIMERENDERER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/grid.h>

class wrapper_wxGridCellDateTimeRenderer : public wxGridCellDateTimeRenderer {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxGridCellDateTimeRenderer(lua_State* L, lua_Table* dum, const wxString & outformat = wxDefaultDateTimeFormat, const wxString & informat = wxDefaultDateTimeFormat) : wxGridCellDateTimeRenderer(outformat, informat), _obj(L,-1) {};

	// wxGridCellRenderer * wxGridCellRenderer::Clone() const
	wxGridCellRenderer * Clone() const {
		THROW_IF(!_obj.pushFunction("Clone"),"No implementation for abstract function wxGridCellRenderer::Clone");
		return (_obj.callFunction<wxGridCellRenderer*>());
	};

	// void wxGridCellRenderer::Draw(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, const wxRect & rect, int row, int col, bool isSelected)
	void Draw(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, const wxRect & rect, int row, int col, bool isSelected) {
		THROW_IF(!_obj.pushFunction("Draw"),"No implementation for abstract function wxGridCellRenderer::Draw");
		_obj.pushArg(&grid);
		_obj.pushArg(&attr);
		_obj.pushArg(&dc);
		_obj.pushArg(&rect);
		_obj.pushArg(row);
		_obj.pushArg(col);
		_obj.pushArg(isSelected);
		return (_obj.callFunction<void>());
	};

	// wxSize wxGridCellRenderer::GetBestSize(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, int row, int col)
	wxSize GetBestSize(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, int row, int col) {
		THROW_IF(!_obj.pushFunction("GetBestSize"),"No implementation for abstract function wxGridCellRenderer::GetBestSize");
		_obj.pushArg(&grid);
		_obj.pushArg(&attr);
		_obj.pushArg(&dc);
		_obj.pushArg(row);
		_obj.pushArg(col);
		return *(_obj.callFunction<wxSize*>());
	};

	// void wxGridCellDateTimeRenderer::SetParameters(const wxString & params)
	void SetParameters(const wxString & params) {
		if(_obj.pushFunction("SetParameters")) {
			_obj.pushArg(params);
			return (_obj.callFunction<void>());
		}

		return wxGridCellDateTimeRenderer::SetParameters(params);
	};




};




#endif


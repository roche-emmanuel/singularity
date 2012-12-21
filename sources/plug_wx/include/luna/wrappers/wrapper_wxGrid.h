#ifndef _WRAPPERS_WRAPPER_WXGRID_H_
#define _WRAPPERS_WRAPPER_WXGRID_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/grid.h>

class wrapper_wxGrid : public wxGrid, public luna_wrapper_base {

public:
		

	~wrapper_wxGrid() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxGrid(lua_State* L, lua_Table* dum) : wxGrid(), luna_wrapper_base(L) {};
	wrapper_wxGrid(lua_State* L, lua_Table* dum, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxWANTS_CHARS, const wxString & name = wxGridNameStr) : wxGrid(parent, id, pos, size, style, name), luna_wrapper_base(L) {};

	// wxPen wxGrid::GetColGridLinePen(int col)
	wxPen GetColGridLinePen(int col) {
		if(_obj.pushFunction("GetColGridLinePen")) {
			_obj.pushArg(col);
			return *(_obj.callFunction<wxPen*>());
		}

		return wxGrid::GetColGridLinePen(col);
	};

	// wxPen wxGrid::GetDefaultGridLinePen()
	wxPen GetDefaultGridLinePen() {
		if(_obj.pushFunction("GetDefaultGridLinePen")) {
			return *(_obj.callFunction<wxPen*>());
		}

		return wxGrid::GetDefaultGridLinePen();
	};

	// wxPen wxGrid::GetRowGridLinePen(int row)
	wxPen GetRowGridLinePen(int row) {
		if(_obj.pushFunction("GetRowGridLinePen")) {
			_obj.pushArg(row);
			return *(_obj.callFunction<wxPen*>());
		}

		return wxGrid::GetRowGridLinePen(row);
	};

	// wxGridCellEditor * wxGrid::GetDefaultEditorForCell(int row, int col) const
	wxGridCellEditor * GetDefaultEditorForCell(int row, int col) const {
		if(_obj.pushFunction("GetDefaultEditorForCell")) {
			_obj.pushArg(row);
			_obj.pushArg(col);
			return (_obj.callFunction<wxGridCellEditor*>());
		}

		return wxGrid::GetDefaultEditorForCell(row, col);
	};

	// wxGridCellEditor * wxGrid::GetDefaultEditorForType(const wxString & typeName) const
	wxGridCellEditor * GetDefaultEditorForType(const wxString & typeName) const {
		if(_obj.pushFunction("GetDefaultEditorForType")) {
			_obj.pushArg(typeName);
			return (_obj.callFunction<wxGridCellEditor*>());
		}

		return wxGrid::GetDefaultEditorForType(typeName);
	};

	// wxGridCellRenderer * wxGrid::GetDefaultRendererForCell(int row, int col) const
	wxGridCellRenderer * GetDefaultRendererForCell(int row, int col) const {
		if(_obj.pushFunction("GetDefaultRendererForCell")) {
			_obj.pushArg(row);
			_obj.pushArg(col);
			return (_obj.callFunction<wxGridCellRenderer*>());
		}

		return wxGrid::GetDefaultRendererForCell(row, col);
	};

	// wxGridCellRenderer * wxGrid::GetDefaultRendererForType(const wxString & typeName) const
	wxGridCellRenderer * GetDefaultRendererForType(const wxString & typeName) const {
		if(_obj.pushFunction("GetDefaultRendererForType")) {
			_obj.pushArg(typeName);
			return (_obj.callFunction<wxGridCellRenderer*>());
		}

		return wxGrid::GetDefaultRendererForType(typeName);
	};

	// void wxGrid::Fit()
	void Fit() {
		if(_obj.pushFunction("Fit")) {
			return (_obj.callFunction<void>());
		}

		return wxGrid::Fit();
	};




};




#endif


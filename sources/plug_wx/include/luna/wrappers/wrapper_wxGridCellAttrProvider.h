#ifndef _WRAPPERS_WRAPPER_WXGRIDCELLATTRPROVIDER_H_
#define _WRAPPERS_WRAPPER_WXGRIDCELLATTRPROVIDER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/grid.h>

class wrapper_wxGridCellAttrProvider : public wxGridCellAttrProvider, public luna_wrapper_base {

public:
		

	~wrapper_wxGridCellAttrProvider() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxGridCellAttrProvider(lua_State* L, lua_Table* dum) : wxGridCellAttrProvider(), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// wxGridCellAttr * wxGridCellAttrProvider::GetAttr(int row, int col, wxGridCellAttr::wxAttrKind kind) const
	wxGridCellAttr * GetAttr(int row, int col, wxGridCellAttr::wxAttrKind kind) const {
		if(_obj.pushFunction("GetAttr")) {
			_obj.pushArg(row);
			_obj.pushArg(col);
			_obj.pushArg(kind);
			return (_obj.callFunction<wxGridCellAttr*>());
		}

		return wxGridCellAttrProvider::GetAttr(row, col, kind);
	};

	// void wxGridCellAttrProvider::SetAttr(wxGridCellAttr * attr, int row, int col)
	void SetAttr(wxGridCellAttr * attr, int row, int col) {
		if(_obj.pushFunction("SetAttr")) {
			_obj.pushArg(attr);
			_obj.pushArg(row);
			_obj.pushArg(col);
			return (_obj.callFunction<void>());
		}

		return wxGridCellAttrProvider::SetAttr(attr, row, col);
	};

	// void wxGridCellAttrProvider::SetRowAttr(wxGridCellAttr * attr, int row)
	void SetRowAttr(wxGridCellAttr * attr, int row) {
		if(_obj.pushFunction("SetRowAttr")) {
			_obj.pushArg(attr);
			_obj.pushArg(row);
			return (_obj.callFunction<void>());
		}

		return wxGridCellAttrProvider::SetRowAttr(attr, row);
	};

	// void wxGridCellAttrProvider::SetColAttr(wxGridCellAttr * attr, int col)
	void SetColAttr(wxGridCellAttr * attr, int col) {
		if(_obj.pushFunction("SetColAttr")) {
			_obj.pushArg(attr);
			_obj.pushArg(col);
			return (_obj.callFunction<void>());
		}

		return wxGridCellAttrProvider::SetColAttr(attr, col);
	};

	// const wxGridColumnHeaderRenderer & wxGridCellAttrProvider::GetColumnHeaderRenderer(int col)
	const wxGridColumnHeaderRenderer & GetColumnHeaderRenderer(int col) {
		if(_obj.pushFunction("GetColumnHeaderRenderer")) {
			_obj.pushArg(col);
			return *(_obj.callFunction<wxGridColumnHeaderRenderer*>());
		}

		return wxGridCellAttrProvider::GetColumnHeaderRenderer(col);
	};

	// const wxGridRowHeaderRenderer & wxGridCellAttrProvider::GetRowHeaderRenderer(int row)
	const wxGridRowHeaderRenderer & GetRowHeaderRenderer(int row) {
		if(_obj.pushFunction("GetRowHeaderRenderer")) {
			_obj.pushArg(row);
			return *(_obj.callFunction<wxGridRowHeaderRenderer*>());
		}

		return wxGridCellAttrProvider::GetRowHeaderRenderer(row);
	};

	// const wxGridCornerHeaderRenderer & wxGridCellAttrProvider::GetCornerRenderer()
	const wxGridCornerHeaderRenderer & GetCornerRenderer() {
		if(_obj.pushFunction("GetCornerRenderer")) {
			return *(_obj.callFunction<wxGridCornerHeaderRenderer*>());
		}

		return wxGridCellAttrProvider::GetCornerRenderer();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


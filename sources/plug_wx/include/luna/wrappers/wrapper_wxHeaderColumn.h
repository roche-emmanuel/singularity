#ifndef _WRAPPERS_WRAPPER_WXHEADERCOLUMN_H_
#define _WRAPPERS_WRAPPER_WXHEADERCOLUMN_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/headercol.h>

class wrapper_wxHeaderColumn : public wxHeaderColumn {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxHeaderColumn(lua_State* L, lua_Table* dum) : wxHeaderColumn(), _obj(L,-1) {};

	// wxString wxHeaderColumn::GetTitle() const
	wxString GetTitle() const {
		THROW_IF(!_obj.pushFunction("GetTitle"),"No implementation for abstract function wxHeaderColumn::GetTitle");
		return *(_obj.callFunction<wxString*>());
	};

	// wxBitmap wxHeaderColumn::GetBitmap() const
	wxBitmap GetBitmap() const {
		THROW_IF(!_obj.pushFunction("GetBitmap"),"No implementation for abstract function wxHeaderColumn::GetBitmap");
		return *(_obj.callFunction<wxBitmap*>());
	};

	// int wxHeaderColumn::GetWidth() const
	int GetWidth() const {
		THROW_IF(!_obj.pushFunction("GetWidth"),"No implementation for abstract function wxHeaderColumn::GetWidth");
		return (_obj.callFunction<int>());
	};

	// int wxHeaderColumn::GetMinWidth() const
	int GetMinWidth() const {
		THROW_IF(!_obj.pushFunction("GetMinWidth"),"No implementation for abstract function wxHeaderColumn::GetMinWidth");
		return (_obj.callFunction<int>());
	};

	// wxAlignment wxHeaderColumn::GetAlignment() const
	wxAlignment GetAlignment() const {
		THROW_IF(!_obj.pushFunction("GetAlignment"),"No implementation for abstract function wxHeaderColumn::GetAlignment");
		return (wxAlignment)(_obj.callFunction<int>());
	};

	// int wxHeaderColumn::GetFlags() const
	int GetFlags() const {
		THROW_IF(!_obj.pushFunction("GetFlags"),"No implementation for abstract function wxHeaderColumn::GetFlags");
		return (_obj.callFunction<int>());
	};

	// bool wxHeaderColumn::IsResizeable() const
	bool IsResizeable() const {
		if(_obj.pushFunction("IsResizeable")) {
			return (_obj.callFunction<bool>());
		}

		return wxHeaderColumn::IsResizeable();
	};

	// bool wxHeaderColumn::IsSortable() const
	bool IsSortable() const {
		if(_obj.pushFunction("IsSortable")) {
			return (_obj.callFunction<bool>());
		}

		return wxHeaderColumn::IsSortable();
	};

	// bool wxHeaderColumn::IsReorderable() const
	bool IsReorderable() const {
		if(_obj.pushFunction("IsReorderable")) {
			return (_obj.callFunction<bool>());
		}

		return wxHeaderColumn::IsReorderable();
	};

	// bool wxHeaderColumn::IsHidden() const
	bool IsHidden() const {
		if(_obj.pushFunction("IsHidden")) {
			return (_obj.callFunction<bool>());
		}

		return wxHeaderColumn::IsHidden();
	};

	// bool wxHeaderColumn::IsSortKey() const
	bool IsSortKey() const {
		THROW_IF(!_obj.pushFunction("IsSortKey"),"No implementation for abstract function wxHeaderColumn::IsSortKey");
		return (_obj.callFunction<bool>());
	};

	// bool wxHeaderColumn::IsSortOrderAscending() const
	bool IsSortOrderAscending() const {
		THROW_IF(!_obj.pushFunction("IsSortOrderAscending"),"No implementation for abstract function wxHeaderColumn::IsSortOrderAscending");
		return (_obj.callFunction<bool>());
	};




};




#endif


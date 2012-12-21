#ifndef _WRAPPERS_WRAPPER_WXHEADERCOLUMNSIMPLE_H_
#define _WRAPPERS_WRAPPER_WXHEADERCOLUMNSIMPLE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/headercol.h>

class wrapper_wxHeaderColumnSimple : public wxHeaderColumnSimple, public luna_wrapper_base {

public:
		

	~wrapper_wxHeaderColumnSimple() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxHeaderColumnSimple(lua_State* L, lua_Table* dum, const wxString & title, int width = ::wxCOL_WIDTH_DEFAULT, wxAlignment align = ::wxALIGN_NOT, int flags = ::wxCOL_DEFAULT_FLAGS) : wxHeaderColumnSimple(title, width, align, flags), luna_wrapper_base(L) {};
	wrapper_wxHeaderColumnSimple(lua_State* L, lua_Table* dum, const wxBitmap & bitmap, int width = ::wxCOL_WIDTH_DEFAULT, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxCOL_DEFAULT_FLAGS) : wxHeaderColumnSimple(bitmap, width, align, flags), luna_wrapper_base(L) {};

	// bool wxHeaderColumn::IsResizeable() const
	bool IsResizeable() const {
		if(_obj.pushFunction("IsResizeable")) {
			return (_obj.callFunction<bool>());
		}

		return wxHeaderColumnSimple::IsResizeable();
	};

	// bool wxHeaderColumn::IsSortable() const
	bool IsSortable() const {
		if(_obj.pushFunction("IsSortable")) {
			return (_obj.callFunction<bool>());
		}

		return wxHeaderColumnSimple::IsSortable();
	};

	// bool wxHeaderColumn::IsReorderable() const
	bool IsReorderable() const {
		if(_obj.pushFunction("IsReorderable")) {
			return (_obj.callFunction<bool>());
		}

		return wxHeaderColumnSimple::IsReorderable();
	};

	// bool wxHeaderColumn::IsHidden() const
	bool IsHidden() const {
		if(_obj.pushFunction("IsHidden")) {
			return (_obj.callFunction<bool>());
		}

		return wxHeaderColumnSimple::IsHidden();
	};

	// void wxSettableHeaderColumn::SetResizeable(bool resizable)
	void SetResizeable(bool resizable) {
		if(_obj.pushFunction("SetResizeable")) {
			_obj.pushArg(resizable);
			return (_obj.callFunction<void>());
		}

		return wxHeaderColumnSimple::SetResizeable(resizable);
	};

	// void wxSettableHeaderColumn::SetSortable(bool sortable)
	void SetSortable(bool sortable) {
		if(_obj.pushFunction("SetSortable")) {
			_obj.pushArg(sortable);
			return (_obj.callFunction<void>());
		}

		return wxHeaderColumnSimple::SetSortable(sortable);
	};

	// void wxSettableHeaderColumn::SetReorderable(bool reorderable)
	void SetReorderable(bool reorderable) {
		if(_obj.pushFunction("SetReorderable")) {
			_obj.pushArg(reorderable);
			return (_obj.callFunction<void>());
		}

		return wxHeaderColumnSimple::SetReorderable(reorderable);
	};

	// void wxSettableHeaderColumn::SetHidden(bool hidden)
	void SetHidden(bool hidden) {
		if(_obj.pushFunction("SetHidden")) {
			_obj.pushArg(hidden);
			return (_obj.callFunction<void>());
		}

		return wxHeaderColumnSimple::SetHidden(hidden);
	};

	// void wxHeaderColumnSimple::SetTitle(const wxString & title)
	void SetTitle(const wxString & title) {
		if(_obj.pushFunction("SetTitle")) {
			_obj.pushArg(title);
			return (_obj.callFunction<void>());
		}

		return wxHeaderColumnSimple::SetTitle(title);
	};

	// wxString wxHeaderColumnSimple::GetTitle() const
	wxString GetTitle() const {
		if(_obj.pushFunction("GetTitle")) {
			return *(_obj.callFunction<wxString*>());
		}

		return wxHeaderColumnSimple::GetTitle();
	};

	// void wxHeaderColumnSimple::SetBitmap(const wxBitmap & bitmap)
	void SetBitmap(const wxBitmap & bitmap) {
		if(_obj.pushFunction("SetBitmap")) {
			_obj.pushArg(&bitmap);
			return (_obj.callFunction<void>());
		}

		return wxHeaderColumnSimple::SetBitmap(bitmap);
	};

	// wxBitmap wxHeaderColumnSimple::GetBitmap() const
	wxBitmap GetBitmap() const {
		if(_obj.pushFunction("GetBitmap")) {
			return *(_obj.callFunction<wxBitmap*>());
		}

		return wxHeaderColumnSimple::GetBitmap();
	};

	// void wxHeaderColumnSimple::SetWidth(int width)
	void SetWidth(int width) {
		if(_obj.pushFunction("SetWidth")) {
			_obj.pushArg(width);
			return (_obj.callFunction<void>());
		}

		return wxHeaderColumnSimple::SetWidth(width);
	};

	// int wxHeaderColumnSimple::GetWidth() const
	int GetWidth() const {
		if(_obj.pushFunction("GetWidth")) {
			return (_obj.callFunction<int>());
		}

		return wxHeaderColumnSimple::GetWidth();
	};

	// void wxHeaderColumnSimple::SetMinWidth(int minWidth)
	void SetMinWidth(int minWidth) {
		if(_obj.pushFunction("SetMinWidth")) {
			_obj.pushArg(minWidth);
			return (_obj.callFunction<void>());
		}

		return wxHeaderColumnSimple::SetMinWidth(minWidth);
	};

	// int wxHeaderColumnSimple::GetMinWidth() const
	int GetMinWidth() const {
		if(_obj.pushFunction("GetMinWidth")) {
			return (_obj.callFunction<int>());
		}

		return wxHeaderColumnSimple::GetMinWidth();
	};

	// void wxHeaderColumnSimple::SetAlignment(wxAlignment align)
	void SetAlignment(wxAlignment align) {
		if(_obj.pushFunction("SetAlignment")) {
			_obj.pushArg(align);
			return (_obj.callFunction<void>());
		}

		return wxHeaderColumnSimple::SetAlignment(align);
	};

	// wxAlignment wxHeaderColumnSimple::GetAlignment() const
	wxAlignment GetAlignment() const {
		if(_obj.pushFunction("GetAlignment")) {
			return (wxAlignment)(_obj.callFunction<int>());
		}

		return wxHeaderColumnSimple::GetAlignment();
	};

	// void wxHeaderColumnSimple::SetFlags(int flags)
	void SetFlags(int flags) {
		if(_obj.pushFunction("SetFlags")) {
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxHeaderColumnSimple::SetFlags(flags);
	};

	// int wxHeaderColumnSimple::GetFlags() const
	int GetFlags() const {
		if(_obj.pushFunction("GetFlags")) {
			return (_obj.callFunction<int>());
		}

		return wxHeaderColumnSimple::GetFlags();
	};

	// bool wxHeaderColumnSimple::IsSortKey() const
	bool IsSortKey() const {
		if(_obj.pushFunction("IsSortKey")) {
			return (_obj.callFunction<bool>());
		}

		return wxHeaderColumnSimple::IsSortKey();
	};

	// void wxHeaderColumnSimple::SetSortOrder(bool ascending)
	void SetSortOrder(bool ascending) {
		if(_obj.pushFunction("SetSortOrder")) {
			_obj.pushArg(ascending);
			return (_obj.callFunction<void>());
		}

		return wxHeaderColumnSimple::SetSortOrder(ascending);
	};

	// bool wxHeaderColumnSimple::IsSortOrderAscending() const
	bool IsSortOrderAscending() const {
		if(_obj.pushFunction("IsSortOrderAscending")) {
			return (_obj.callFunction<bool>());
		}

		return wxHeaderColumnSimple::IsSortOrderAscending();
	};




};




#endif


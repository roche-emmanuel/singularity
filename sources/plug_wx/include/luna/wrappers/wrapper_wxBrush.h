#ifndef _WRAPPERS_WRAPPER_WXBRUSH_H_
#define _WRAPPERS_WRAPPER_WXBRUSH_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/brush.h>

class wrapper_wxBrush : public wxBrush, public luna_wrapper_base {

public:
		

	~wrapper_wxBrush() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxBrush(lua_State* L, lua_Table* dum) : wxBrush(), luna_wrapper_base(L) {};
	wrapper_wxBrush(lua_State* L, lua_Table* dum, const wxColour & colour, wxBrushStyle style = ::wxBRUSHSTYLE_SOLID) : wxBrush(colour, style), luna_wrapper_base(L) {};
	wrapper_wxBrush(lua_State* L, lua_Table* dum, const wxBitmap & stippleBitmap) : wxBrush(stippleBitmap), luna_wrapper_base(L) {};
	wrapper_wxBrush(lua_State* L, lua_Table* dum, const wxBrush & brush) : wxBrush(brush), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxBrush::GetClassInfo();
	};

	// wxColour wxBrush::GetColour() const
	wxColour GetColour() const {
		if(_obj.pushFunction("GetColour")) {
			return *(_obj.callFunction<wxColour*>());
		}

		return wxBrush::GetColour();
	};

	// wxBitmap * wxBrush::GetStipple() const
	wxBitmap * GetStipple() const {
		if(_obj.pushFunction("GetStipple")) {
			return (_obj.callFunction<wxBitmap*>());
		}

		return wxBrush::GetStipple();
	};

	// wxBrushStyle wxBrush::GetStyle() const
	wxBrushStyle GetStyle() const {
		if(_obj.pushFunction("GetStyle")) {
			return (wxBrushStyle)(_obj.callFunction<int>());
		}

		return wxBrush::GetStyle();
	};

	// bool wxBrush::IsHatch() const
	bool IsHatch() const {
		if(_obj.pushFunction("IsHatch")) {
			return (_obj.callFunction<bool>());
		}

		return wxBrush::IsHatch();
	};

	// bool wxBrush::IsOk() const
	bool IsOk() const {
		if(_obj.pushFunction("IsOk")) {
			return (_obj.callFunction<bool>());
		}

		return wxBrush::IsOk();
	};

	// void wxBrush::SetColour(const wxColour & colour)
	void SetColour(const wxColour & colour) {
		if(_obj.pushFunction("SetColour")) {
			_obj.pushArg(&colour);
			return (_obj.callFunction<void>());
		}

		return wxBrush::SetColour(colour);
	};

	// void wxBrush::SetColour(unsigned char red, unsigned char green, unsigned char blue)
	void SetColour(unsigned char red, unsigned char green, unsigned char blue) {
		if(_obj.pushFunction("SetColour")) {
			_obj.pushArg(red);
			_obj.pushArg(green);
			_obj.pushArg(blue);
			return (_obj.callFunction<void>());
		}

		return wxBrush::SetColour(red, green, blue);
	};

	// void wxBrush::SetStipple(const wxBitmap & bitmap)
	void SetStipple(const wxBitmap & bitmap) {
		if(_obj.pushFunction("SetStipple")) {
			_obj.pushArg(&bitmap);
			return (_obj.callFunction<void>());
		}

		return wxBrush::SetStipple(bitmap);
	};

	// void wxBrush::SetStyle(wxBrushStyle style)
	void SetStyle(wxBrushStyle style) {
		if(_obj.pushFunction("SetStyle")) {
			_obj.pushArg(style);
			return (_obj.callFunction<void>());
		}

		return wxBrush::SetStyle(style);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxBrush::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxBrush::CloneRefData(data);
	};


};




#endif


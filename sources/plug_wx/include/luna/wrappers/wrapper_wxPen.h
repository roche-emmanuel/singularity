#ifndef _WRAPPERS_WRAPPER_WXPEN_H_
#define _WRAPPERS_WRAPPER_WXPEN_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/pen.h>

class wrapper_wxPen : public wxPen {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxPen(lua_State* L, lua_Table* dum) : wxPen(), _obj(L,-1) {};
	wrapper_wxPen(lua_State* L, lua_Table* dum, const wxColour & colour, int width = 1, wxPenStyle style = ::wxPENSTYLE_SOLID) : wxPen(colour, width, style), _obj(L,-1) {};
	wrapper_wxPen(lua_State* L, lua_Table* dum, const wxBitmap & stipple, int width) : wxPen(stipple, width), _obj(L,-1) {};
	wrapper_wxPen(lua_State* L, lua_Table* dum, const wxPen & pen) : wxPen(pen), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxPen::GetClassInfo();
	};

	// wxPenCap wxPen::GetCap() const
	wxPenCap GetCap() const {
		if(_obj.pushFunction("GetCap")) {
			return (wxPenCap)(_obj.callFunction<int>());
		}

		return wxPen::GetCap();
	};

	// wxColour wxPen::GetColour() const
	wxColour GetColour() const {
		if(_obj.pushFunction("GetColour")) {
			return *(_obj.callFunction<wxColour*>());
		}

		return wxPen::GetColour();
	};

	// wxPenJoin wxPen::GetJoin() const
	wxPenJoin GetJoin() const {
		if(_obj.pushFunction("GetJoin")) {
			return (wxPenJoin)(_obj.callFunction<int>());
		}

		return wxPen::GetJoin();
	};

	// wxBitmap * wxPen::GetStipple() const
	wxBitmap * GetStipple() const {
		if(_obj.pushFunction("GetStipple")) {
			return (_obj.callFunction<wxBitmap*>());
		}

		return wxPen::GetStipple();
	};

	// wxPenStyle wxPen::GetStyle() const
	wxPenStyle GetStyle() const {
		if(_obj.pushFunction("GetStyle")) {
			return (wxPenStyle)(_obj.callFunction<int>());
		}

		return wxPen::GetStyle();
	};

	// int wxPen::GetWidth() const
	int GetWidth() const {
		if(_obj.pushFunction("GetWidth")) {
			return (_obj.callFunction<int>());
		}

		return wxPen::GetWidth();
	};

	// bool wxPen::IsOk() const
	bool IsOk() const {
		if(_obj.pushFunction("IsOk")) {
			return (_obj.callFunction<bool>());
		}

		return wxPen::IsOk();
	};

	// void wxPen::SetCap(wxPenCap capStyle)
	void SetCap(wxPenCap capStyle) {
		if(_obj.pushFunction("SetCap")) {
			_obj.pushArg(capStyle);
			return (_obj.callFunction<void>());
		}

		return wxPen::SetCap(capStyle);
	};

	// void wxPen::SetColour(wxColour & colour)
	void SetColour(wxColour & colour) {
		if(_obj.pushFunction("SetColour")) {
			_obj.pushArg(&colour);
			return (_obj.callFunction<void>());
		}

		return wxPen::SetColour(colour);
	};

	// void wxPen::SetColour(unsigned char red, unsigned char green, unsigned char blue)
	void SetColour(unsigned char red, unsigned char green, unsigned char blue) {
		if(_obj.pushFunction("SetColour")) {
			_obj.pushArg(red);
			_obj.pushArg(green);
			_obj.pushArg(blue);
			return (_obj.callFunction<void>());
		}

		return wxPen::SetColour(red, green, blue);
	};

	// void wxPen::SetJoin(wxPenJoin join_style)
	void SetJoin(wxPenJoin join_style) {
		if(_obj.pushFunction("SetJoin")) {
			_obj.pushArg(join_style);
			return (_obj.callFunction<void>());
		}

		return wxPen::SetJoin(join_style);
	};

	// void wxPen::SetStipple(const wxBitmap & stipple)
	void SetStipple(const wxBitmap & stipple) {
		if(_obj.pushFunction("SetStipple")) {
			_obj.pushArg(&stipple);
			return (_obj.callFunction<void>());
		}

		return wxPen::SetStipple(stipple);
	};

	// void wxPen::SetStyle(wxPenStyle style)
	void SetStyle(wxPenStyle style) {
		if(_obj.pushFunction("SetStyle")) {
			_obj.pushArg(style);
			return (_obj.callFunction<void>());
		}

		return wxPen::SetStyle(style);
	};

	// void wxPen::SetWidth(int width)
	void SetWidth(int width) {
		if(_obj.pushFunction("SetWidth")) {
			_obj.pushArg(width);
			return (_obj.callFunction<void>());
		}

		return wxPen::SetWidth(width);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxPen::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxPen::CloneRefData(data);
	};


};




#endif


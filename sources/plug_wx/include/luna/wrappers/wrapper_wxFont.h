#ifndef _WRAPPERS_WRAPPER_WXFONT_H_
#define _WRAPPERS_WRAPPER_WXFONT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/font.h>

class wrapper_wxFont : public wxFont {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxFont(lua_State* L, lua_Table* dum) : wxFont(), _obj(L,-1) {};
	wrapper_wxFont(lua_State* L, lua_Table* dum, const wxFont & font) : wxFont(font), _obj(L,-1) {};
	wrapper_wxFont(lua_State* L, lua_Table* dum, int pointSize, wxFontFamily family, wxFontStyle style, wxFontWeight weight, bool underline = false, const wxString & faceName = wxEmptyString, wxFontEncoding encoding = ::wxFONTENCODING_DEFAULT) : wxFont(pointSize, family, style, weight, underline, faceName, encoding), _obj(L,-1) {};
	wrapper_wxFont(lua_State* L, lua_Table* dum, const wxSize & pixelSize, wxFontFamily family, wxFontStyle style, wxFontWeight weight, bool underline = false, const wxString & faceName = wxEmptyString, wxFontEncoding encoding = ::wxFONTENCODING_DEFAULT) : wxFont(pixelSize, family, style, weight, underline, faceName, encoding), _obj(L,-1) {};
	wrapper_wxFont(lua_State* L, lua_Table* dum, const wxString & nativeInfoString) : wxFont(nativeInfoString), _obj(L,-1) {};
	wrapper_wxFont(lua_State* L, lua_Table* dum, const wxNativeFontInfo & nativeInfo) : wxFont(nativeInfo), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxObject::GetClassInfo();
	};

	// wxFontEncoding wxFont::GetEncoding() const
	wxFontEncoding GetEncoding() const {
		if(_obj.pushFunction("GetEncoding")) {
			return (wxFontEncoding)(_obj.callFunction<int>());
		}

		return wxFont::GetEncoding();
	};

	// wxString wxFont::GetFaceName() const
	wxString GetFaceName() const {
		if(_obj.pushFunction("GetFaceName")) {
			return *(_obj.callFunction<wxString*>());
		}

		return wxFont::GetFaceName();
	};

	// wxFontFamily wxFont::GetFamily() const
	wxFontFamily GetFamily() const {
		if(_obj.pushFunction("GetFamily")) {
			return (wxFontFamily)(_obj.callFunction<int>());
		}

		return wxFont::GetFamily();
	};

	// int wxFont::GetPointSize() const
	int GetPointSize() const {
		if(_obj.pushFunction("GetPointSize")) {
			return (_obj.callFunction<int>());
		}

		return wxFont::GetPointSize();
	};

	// wxSize wxFont::GetPixelSize() const
	wxSize GetPixelSize() const {
		if(_obj.pushFunction("GetPixelSize")) {
			return *(_obj.callFunction<wxSize*>());
		}

		return wxFont::GetPixelSize();
	};

	// wxFontStyle wxFont::GetStyle() const
	wxFontStyle GetStyle() const {
		if(_obj.pushFunction("GetStyle")) {
			return (wxFontStyle)(_obj.callFunction<int>());
		}

		return wxFont::GetStyle();
	};

	// bool wxFont::GetUnderlined() const
	bool GetUnderlined() const {
		if(_obj.pushFunction("GetUnderlined")) {
			return (_obj.callFunction<bool>());
		}

		return wxFont::GetUnderlined();
	};

	// wxFontWeight wxFont::GetWeight() const
	wxFontWeight GetWeight() const {
		if(_obj.pushFunction("GetWeight")) {
			return (wxFontWeight)(_obj.callFunction<int>());
		}

		return wxFont::GetWeight();
	};

	// bool wxFont::IsFixedWidth() const
	bool IsFixedWidth() const {
		if(_obj.pushFunction("IsFixedWidth")) {
			return (_obj.callFunction<bool>());
		}

		return wxFont::IsFixedWidth();
	};

	// bool wxFont::IsOk() const
	bool IsOk() const {
		if(_obj.pushFunction("IsOk")) {
			return (_obj.callFunction<bool>());
		}

		return wxFont::IsOk();
	};

	// void wxFont::SetEncoding(wxFontEncoding encoding)
	void SetEncoding(wxFontEncoding encoding) {
		if(_obj.pushFunction("SetEncoding")) {
			_obj.pushArg(encoding);
			return (_obj.callFunction<void>());
		}

		return wxFont::SetEncoding(encoding);
	};

	// bool wxFont::SetFaceName(const wxString & faceName)
	bool SetFaceName(const wxString & faceName) {
		if(_obj.pushFunction("SetFaceName")) {
			_obj.pushArg(faceName);
			return (_obj.callFunction<bool>());
		}

		return wxFont::SetFaceName(faceName);
	};

	// void wxFont::SetFamily(wxFontFamily family)
	void SetFamily(wxFontFamily family) {
		if(_obj.pushFunction("SetFamily")) {
			_obj.pushArg(family);
			return (_obj.callFunction<void>());
		}

		return wxFont::SetFamily(family);
	};

	// void wxFont::SetPointSize(int pointSize)
	void SetPointSize(int pointSize) {
		if(_obj.pushFunction("SetPointSize")) {
			_obj.pushArg(pointSize);
			return (_obj.callFunction<void>());
		}

		return wxFont::SetPointSize(pointSize);
	};

	// void wxFont::SetPixelSize(const wxSize & pixelSize)
	void SetPixelSize(const wxSize & pixelSize) {
		if(_obj.pushFunction("SetPixelSize")) {
			_obj.pushArg(&pixelSize);
			return (_obj.callFunction<void>());
		}

		return wxFont::SetPixelSize(pixelSize);
	};

	// void wxFont::SetStyle(wxFontStyle style)
	void SetStyle(wxFontStyle style) {
		if(_obj.pushFunction("SetStyle")) {
			_obj.pushArg(style);
			return (_obj.callFunction<void>());
		}

		return wxFont::SetStyle(style);
	};

	// void wxFont::SetUnderlined(bool underlined)
	void SetUnderlined(bool underlined) {
		if(_obj.pushFunction("SetUnderlined")) {
			_obj.pushArg(underlined);
			return (_obj.callFunction<void>());
		}

		return wxFont::SetUnderlined(underlined);
	};

	// void wxFont::SetWeight(wxFontWeight weight)
	void SetWeight(wxFontWeight weight) {
		if(_obj.pushFunction("SetWeight")) {
			_obj.pushArg(weight);
			return (_obj.callFunction<void>());
		}

		return wxFont::SetWeight(weight);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif


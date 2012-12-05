#ifndef _WRAPPERS_WRAPPER_WXBITMAP_H_
#define _WRAPPERS_WRAPPER_WXBITMAP_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/bitmap.h>

class wrapper_wxBitmap : public wxBitmap {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxBitmap(lua_State* L, lua_Table* dum) : wxBitmap(), _obj(L,-1) {};
	wrapper_wxBitmap(lua_State* L, lua_Table* dum, const wxBitmap & bitmap) : wxBitmap(bitmap), _obj(L,-1) {};
	wrapper_wxBitmap(lua_State* L, lua_Table* dum, int width, int height, int depth = (-1)) : wxBitmap(width, height, depth), _obj(L,-1) {};
	wrapper_wxBitmap(lua_State* L, lua_Table* dum, const wxSize & sz, int depth = (-1)) : wxBitmap(sz, depth), _obj(L,-1) {};
	wrapper_wxBitmap(lua_State* L, lua_Table* dum, const char *const * bits) : wxBitmap(bits), _obj(L,-1) {};
	wrapper_wxBitmap(lua_State* L, lua_Table* dum, const wxString & name, wxBitmapType type = wxBITMAP_DEFAULT_TYPE) : wxBitmap(name, type), _obj(L,-1) {};
	wrapper_wxBitmap(lua_State* L, lua_Table* dum, const wxImage & img, int depth = (-1)) : wxBitmap(img, depth), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxObject::GetClassInfo();
	};

	// wxImage wxBitmap::ConvertToImage() const
	wxImage ConvertToImage() const {
		if(_obj.pushFunction("ConvertToImage")) {
			return *(_obj.callFunction<wxImage*>());
		}

		return wxBitmap::ConvertToImage();
	};

	// bool wxBitmap::CopyFromIcon(const wxIcon & icon)
	bool CopyFromIcon(const wxIcon & icon) {
		if(_obj.pushFunction("CopyFromIcon")) {
			_obj.pushArg(&icon);
			return (_obj.callFunction<bool>());
		}

		return wxBitmap::CopyFromIcon(icon);
	};

	// bool wxBitmap::Create(int width, int height, int depth = (-1))
	bool Create(int width, int height, int depth = (-1)) {
		if(_obj.pushFunction("Create")) {
			_obj.pushArg(width);
			_obj.pushArg(height);
			_obj.pushArg(depth);
			return (_obj.callFunction<bool>());
		}

		return wxBitmap::Create(width, height, depth);
	};

	// bool wxBitmap::Create(const wxSize & sz, int depth = (-1))
	bool Create(const wxSize & sz, int depth = (-1)) {
		if(_obj.pushFunction("Create")) {
			_obj.pushArg(&sz);
			_obj.pushArg(depth);
			return (_obj.callFunction<bool>());
		}

		return wxBitmap::Create(sz, depth);
	};

	// int wxBitmap::GetDepth() const
	int GetDepth() const {
		if(_obj.pushFunction("GetDepth")) {
			return (_obj.callFunction<int>());
		}

		return wxBitmap::GetDepth();
	};

	// int wxBitmap::GetHeight() const
	int GetHeight() const {
		if(_obj.pushFunction("GetHeight")) {
			return (_obj.callFunction<int>());
		}

		return wxBitmap::GetHeight();
	};

	// wxMask * wxBitmap::GetMask() const
	wxMask * GetMask() const {
		if(_obj.pushFunction("GetMask")) {
			return (_obj.callFunction<wxMask*>());
		}

		return wxBitmap::GetMask();
	};

	// wxPalette * wxBitmap::GetPalette() const
	wxPalette * GetPalette() const {
		if(_obj.pushFunction("GetPalette")) {
			return (_obj.callFunction<wxPalette*>());
		}

		return wxBitmap::GetPalette();
	};

	// wxBitmap wxBitmap::GetSubBitmap(const wxRect & rect) const
	wxBitmap GetSubBitmap(const wxRect & rect) const {
		if(_obj.pushFunction("GetSubBitmap")) {
			_obj.pushArg(&rect);
			return *(_obj.callFunction<wxBitmap*>());
		}

		return wxBitmap::GetSubBitmap(rect);
	};

	// int wxBitmap::GetWidth() const
	int GetWidth() const {
		if(_obj.pushFunction("GetWidth")) {
			return (_obj.callFunction<int>());
		}

		return wxBitmap::GetWidth();
	};

	// bool wxBitmap::IsOk() const
	bool IsOk() const {
		if(_obj.pushFunction("IsOk")) {
			return (_obj.callFunction<bool>());
		}

		return wxBitmap::IsOk();
	};

	// bool wxBitmap::LoadFile(const wxString & name, wxBitmapType type = wxBITMAP_DEFAULT_TYPE)
	bool LoadFile(const wxString & name, wxBitmapType type = wxBITMAP_DEFAULT_TYPE) {
		if(_obj.pushFunction("LoadFile")) {
			_obj.pushArg(name);
			_obj.pushArg(type);
			return (_obj.callFunction<bool>());
		}

		return wxBitmap::LoadFile(name, type);
	};

	// bool wxBitmap::SaveFile(const wxString & name, wxBitmapType type, const wxPalette * palette = NULL) const
	bool SaveFile(const wxString & name, wxBitmapType type, const wxPalette * palette = NULL) const {
		if(_obj.pushFunction("SaveFile")) {
			_obj.pushArg(name);
			_obj.pushArg(type);
			_obj.pushArg(palette);
			return (_obj.callFunction<bool>());
		}

		return wxBitmap::SaveFile(name, type, palette);
	};

	// void wxBitmap::SetDepth(int depth)
	void SetDepth(int depth) {
		if(_obj.pushFunction("SetDepth")) {
			_obj.pushArg(depth);
			return (_obj.callFunction<void>());
		}

		return wxBitmap::SetDepth(depth);
	};

	// void wxBitmap::SetHeight(int height)
	void SetHeight(int height) {
		if(_obj.pushFunction("SetHeight")) {
			_obj.pushArg(height);
			return (_obj.callFunction<void>());
		}

		return wxBitmap::SetHeight(height);
	};

	// void wxBitmap::SetMask(wxMask * mask)
	void SetMask(wxMask * mask) {
		if(_obj.pushFunction("SetMask")) {
			_obj.pushArg(mask);
			return (_obj.callFunction<void>());
		}

		return wxBitmap::SetMask(mask);
	};

	// void wxBitmap::SetPalette(const wxPalette & palette)
	void SetPalette(const wxPalette & palette) {
		if(_obj.pushFunction("SetPalette")) {
			_obj.pushArg(&palette);
			return (_obj.callFunction<void>());
		}

		return wxBitmap::SetPalette(palette);
	};

	// void wxBitmap::SetWidth(int width)
	void SetWidth(int width) {
		if(_obj.pushFunction("SetWidth")) {
			_obj.pushArg(width);
			return (_obj.callFunction<void>());
		}

		return wxBitmap::SetWidth(width);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif


#ifndef _WRAPPERS_WRAPPER_WXBITMAPHANDLER_H_
#define _WRAPPERS_WRAPPER_WXBITMAPHANDLER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/bitmap.h>

class wrapper_wxBitmapHandler : public wxBitmapHandler {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxBitmapHandler(lua_State* L, lua_Table* dum) : wxBitmapHandler(), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxObject::GetClassInfo();
	};

	// bool wxBitmapHandler::Create(wxBitmap * bitmap, const void * data, wxBitmapType type, int width, int height, int depth = 1)
	bool Create(wxBitmap * bitmap, const void * data, wxBitmapType type, int width, int height, int depth = 1) {
		if(_obj.pushFunction("Create")) {
			_obj.pushArg(bitmap);
			_obj.pushArg(data);
			_obj.pushArg(type);
			_obj.pushArg(width);
			_obj.pushArg(height);
			_obj.pushArg(depth);
			return (_obj.callFunction<bool>());
		}

		return wxBitmapHandler::Create(bitmap, data, type, width, height, depth);
	};

	// bool wxBitmapHandler::LoadFile(wxBitmap * bitmap, const wxString & name, wxBitmapType type, int desiredWidth, int desiredHeight)
	bool LoadFile(wxBitmap * bitmap, const wxString & name, wxBitmapType type, int desiredWidth, int desiredHeight) {
		if(_obj.pushFunction("LoadFile")) {
			_obj.pushArg(bitmap);
			_obj.pushArg(name);
			_obj.pushArg(type);
			_obj.pushArg(desiredWidth);
			_obj.pushArg(desiredHeight);
			return (_obj.callFunction<bool>());
		}

		return wxBitmapHandler::LoadFile(bitmap, name, type, desiredWidth, desiredHeight);
	};

	// bool wxBitmapHandler::SaveFile(const wxBitmap * bitmap, const wxString & name, wxBitmapType type, const wxPalette * palette = NULL) const
	bool SaveFile(const wxBitmap * bitmap, const wxString & name, wxBitmapType type, const wxPalette * palette = NULL) const {
		if(_obj.pushFunction("SaveFile")) {
			_obj.pushArg(bitmap);
			_obj.pushArg(name);
			_obj.pushArg(type);
			_obj.pushArg(palette);
			return (_obj.callFunction<bool>());
		}

		return wxBitmapHandler::SaveFile(bitmap, name, type, palette);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif


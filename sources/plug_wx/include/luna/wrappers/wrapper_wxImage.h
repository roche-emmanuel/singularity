#ifndef _WRAPPERS_WRAPPER_WXIMAGE_H_
#define _WRAPPERS_WRAPPER_WXIMAGE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/image.h>

class wrapper_wxImage : public wxImage {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxImage(lua_State* L, lua_Table* dum) : wxImage(), _obj(L,-1) {};
	wrapper_wxImage(lua_State* L, lua_Table* dum, int width, int height, bool clear = true) : wxImage(width, height, clear), _obj(L,-1) {};
	wrapper_wxImage(lua_State* L, lua_Table* dum, const wxSize & sz, bool clear = true) : wxImage(sz, clear), _obj(L,-1) {};
	wrapper_wxImage(lua_State* L, lua_Table* dum, int width, int height, unsigned char * data, bool static_data = false) : wxImage(width, height, data, static_data), _obj(L,-1) {};
	wrapper_wxImage(lua_State* L, lua_Table* dum, const wxSize & sz, unsigned char * data, bool static_data = false) : wxImage(sz, data, static_data), _obj(L,-1) {};
	wrapper_wxImage(lua_State* L, lua_Table* dum, int width, int height, unsigned char * data, unsigned char * alpha, bool static_data = false) : wxImage(width, height, data, alpha, static_data), _obj(L,-1) {};
	wrapper_wxImage(lua_State* L, lua_Table* dum, const wxSize & sz, unsigned char * data, unsigned char * alpha, bool static_data = false) : wxImage(sz, data, alpha, static_data), _obj(L,-1) {};
	wrapper_wxImage(lua_State* L, lua_Table* dum, const char *const * xpmData) : wxImage(xpmData), _obj(L,-1) {};
	wrapper_wxImage(lua_State* L, lua_Table* dum, const wxString & name, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1) : wxImage(name, type, index), _obj(L,-1) {};
	wrapper_wxImage(lua_State* L, lua_Table* dum, const wxString & name, const wxString & mimetype, int index = -1) : wxImage(name, mimetype, index), _obj(L,-1) {};
	wrapper_wxImage(lua_State* L, lua_Table* dum, wxInputStream & stream, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1) : wxImage(stream, type, index), _obj(L,-1) {};
	wrapper_wxImage(lua_State* L, lua_Table* dum, wxInputStream & stream, const wxString & mimetype, int index = -1) : wxImage(stream, mimetype, index), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxObject::GetClassInfo();
	};

	// bool wxImage::LoadFile(wxInputStream & stream, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1)
	bool LoadFile(wxInputStream & stream, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1) {
		if(_obj.pushFunction("LoadFile")) {
			_obj.pushArg(&stream);
			_obj.pushArg(type);
			_obj.pushArg(index);
			return (_obj.callFunction<bool>());
		}

		return wxImage::LoadFile(stream, type, index);
	};

	// bool wxImage::LoadFile(const wxString & name, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1)
	bool LoadFile(const wxString & name, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1) {
		if(_obj.pushFunction("LoadFile")) {
			_obj.pushArg(name);
			_obj.pushArg(type);
			_obj.pushArg(index);
			return (_obj.callFunction<bool>());
		}

		return wxImage::LoadFile(name, type, index);
	};

	// bool wxImage::LoadFile(const wxString & name, const wxString & mimetype, int index = -1)
	bool LoadFile(const wxString & name, const wxString & mimetype, int index = -1) {
		if(_obj.pushFunction("LoadFile")) {
			_obj.pushArg(name);
			_obj.pushArg(mimetype);
			_obj.pushArg(index);
			return (_obj.callFunction<bool>());
		}

		return wxImage::LoadFile(name, mimetype, index);
	};

	// bool wxImage::LoadFile(wxInputStream & stream, const wxString & mimetype, int index = -1)
	bool LoadFile(wxInputStream & stream, const wxString & mimetype, int index = -1) {
		if(_obj.pushFunction("LoadFile")) {
			_obj.pushArg(&stream);
			_obj.pushArg(mimetype);
			_obj.pushArg(index);
			return (_obj.callFunction<bool>());
		}

		return wxImage::LoadFile(stream, mimetype, index);
	};

	// bool wxImage::SaveFile(wxOutputStream & stream, const wxString & mimetype) const
	bool SaveFile(wxOutputStream & stream, const wxString & mimetype) const {
		if(_obj.pushFunction("SaveFile")) {
			_obj.pushArg(&stream);
			_obj.pushArg(mimetype);
			return (_obj.callFunction<bool>());
		}

		return wxImage::SaveFile(stream, mimetype);
	};

	// bool wxImage::SaveFile(const wxString & name, wxBitmapType type) const
	bool SaveFile(const wxString & name, wxBitmapType type) const {
		if(_obj.pushFunction("SaveFile")) {
			_obj.pushArg(name);
			_obj.pushArg(type);
			return (_obj.callFunction<bool>());
		}

		return wxImage::SaveFile(name, type);
	};

	// bool wxImage::SaveFile(const wxString & name, const wxString & mimetype) const
	bool SaveFile(const wxString & name, const wxString & mimetype) const {
		if(_obj.pushFunction("SaveFile")) {
			_obj.pushArg(name);
			_obj.pushArg(mimetype);
			return (_obj.callFunction<bool>());
		}

		return wxImage::SaveFile(name, mimetype);
	};

	// bool wxImage::SaveFile(const wxString & name) const
	bool SaveFile(const wxString & name) const {
		if(_obj.pushFunction("SaveFile")) {
			_obj.pushArg(name);
			return (_obj.callFunction<bool>());
		}

		return wxImage::SaveFile(name);
	};

	// bool wxImage::SaveFile(wxOutputStream & stream, wxBitmapType type) const
	bool SaveFile(wxOutputStream & stream, wxBitmapType type) const {
		if(_obj.pushFunction("SaveFile")) {
			_obj.pushArg(&stream);
			_obj.pushArg(type);
			return (_obj.callFunction<bool>());
		}

		return wxImage::SaveFile(stream, type);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif


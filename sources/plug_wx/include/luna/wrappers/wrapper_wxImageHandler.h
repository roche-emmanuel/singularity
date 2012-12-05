#ifndef _WRAPPERS_WRAPPER_WXIMAGEHANDLER_H_
#define _WRAPPERS_WRAPPER_WXIMAGEHANDLER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/image.h>

class wrapper_wxImageHandler : public wxImageHandler {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxImageHandler(lua_State* L, lua_Table* dum) : wxImageHandler(), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxObject::GetClassInfo();
	};

	// int wxImageHandler::GetImageCount(wxInputStream & stream)
	int GetImageCount(wxInputStream & stream) {
		THROW_IF(!_obj.pushFunction("GetImageCount"),"No implementation for abstract function wxImageHandler::GetImageCount");
		_obj.pushArg(&stream);
		return (_obj.callFunction<int>());
	};

	// bool wxImageHandler::LoadFile(wxImage * image, wxInputStream & stream, bool verbose = true, int index = -1)
	bool LoadFile(wxImage * image, wxInputStream & stream, bool verbose = true, int index = -1) {
		if(_obj.pushFunction("LoadFile")) {
			_obj.pushArg(image);
			_obj.pushArg(&stream);
			_obj.pushArg(verbose);
			_obj.pushArg(index);
			return (_obj.callFunction<bool>());
		}

		return wxImageHandler::LoadFile(image, stream, verbose, index);
	};

	// bool wxImageHandler::SaveFile(wxImage * image, wxOutputStream & stream, bool verbose = true)
	bool SaveFile(wxImage * image, wxOutputStream & stream, bool verbose = true) {
		if(_obj.pushFunction("SaveFile")) {
			_obj.pushArg(image);
			_obj.pushArg(&stream);
			_obj.pushArg(verbose);
			return (_obj.callFunction<bool>());
		}

		return wxImageHandler::SaveFile(image, stream, verbose);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif


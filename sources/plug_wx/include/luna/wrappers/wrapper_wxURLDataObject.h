#ifndef _WRAPPERS_WRAPPER_WXURLDATAOBJECT_H_
#define _WRAPPERS_WRAPPER_WXURLDATAOBJECT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/dataobj.h>

class wrapper_wxURLDataObject : public wxURLDataObject {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxURLDataObject(lua_State* L, lua_Table* dum, const wxString & url = wxEmptyString) : wxURLDataObject(url), _obj(L,-1) {};

	// size_t wxDataObject::GetFormatCount(wxDataObject::Direction dir = wxDataObject::Get) const
	size_t GetFormatCount(wxDataObject::Direction dir = wxDataObject::Get) const {
		THROW_IF(!_obj.pushFunction("GetFormatCount"),"No implementation for abstract function wxDataObject::GetFormatCount");
		_obj.pushArg(dir);
		return (_obj.callFunction<size_t>());
	};

	// wxDataFormat wxDataObject::GetPreferredFormat(wxDataObject::Direction dir = wxDataObject::Get) const
	wxDataFormat GetPreferredFormat(wxDataObject::Direction dir = wxDataObject::Get) const {
		THROW_IF(!_obj.pushFunction("GetPreferredFormat"),"No implementation for abstract function wxDataObject::GetPreferredFormat");
		_obj.pushArg(dir);
		return *(_obj.callFunction<wxDataFormat*>());
	};

	// bool wxDataObjectSimple::GetDataHere(void * buf) const
	bool GetDataHere(void * buf) const {
		if(_obj.pushFunction("GetDataHere")) {
			_obj.pushArg(buf);
			return (_obj.callFunction<bool>());
		}

		return wxDataObjectSimple::GetDataHere(buf);
	};

	// size_t wxDataObjectSimple::GetDataSize() const
	size_t GetDataSize() const {
		if(_obj.pushFunction("GetDataSize")) {
			return (_obj.callFunction<size_t>());
		}

		return wxDataObjectSimple::GetDataSize();
	};

	// bool wxDataObjectSimple::SetData(size_t len, const void * buf)
	bool SetData(size_t len, const void * buf) {
		if(_obj.pushFunction("SetData")) {
			_obj.pushArg(len);
			_obj.pushArg(buf);
			return (_obj.callFunction<bool>());
		}

		return wxDataObjectSimple::SetData(len, buf);
	};

	// wxString wxTextDataObject::GetText() const
	wxString GetText() const {
		if(_obj.pushFunction("GetText")) {
			return *(_obj.callFunction<wxString*>());
		}

		return wxTextDataObject::GetText();
	};

	// size_t wxTextDataObject::GetTextLength() const
	size_t GetTextLength() const {
		if(_obj.pushFunction("GetTextLength")) {
			return (_obj.callFunction<size_t>());
		}

		return wxTextDataObject::GetTextLength();
	};

	// size_t wxTextDataObject::GetFormatCount(wxDataObject::Direction dir = wxDataObject::Get)
	size_t GetFormatCount(wxDataObject::Direction dir = wxDataObject::Get) {
		if(_obj.pushFunction("GetFormatCount")) {
			_obj.pushArg(dir);
			return (_obj.callFunction<size_t>());
		}

		return wxTextDataObject::GetFormatCount(dir);
	};

	// void wxTextDataObject::GetAllFormats(wxDataFormat * formats, wxDataObject::Direction dir = wxDataObject::Get) const
	void GetAllFormats(wxDataFormat * formats, wxDataObject::Direction dir = wxDataObject::Get) const {
		THROW_IF(!_obj.pushFunction("GetAllFormats"),"No implementation for abstract function wxTextDataObject::GetAllFormats");
		_obj.pushArg(formats);
		_obj.pushArg(dir);
		return (_obj.callFunction<void>());
	};

	// void wxTextDataObject::SetText(const wxString & strText)
	void SetText(const wxString & strText) {
		if(_obj.pushFunction("SetText")) {
			_obj.pushArg(strText);
			return (_obj.callFunction<void>());
		}

		return wxTextDataObject::SetText(strText);
	};




};




#endif


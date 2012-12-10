#ifndef _WRAPPERS_WRAPPER_WXCLIPBOARD_H_
#define _WRAPPERS_WRAPPER_WXCLIPBOARD_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/clipbrd.h>

class wrapper_wxClipboard : public wxClipboard {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxClipboard(lua_State* L, lua_Table* dum) : wxClipboard(), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxClipboard::GetClassInfo();
	};

	// bool wxClipboard::AddData(wxDataObject * data)
	bool AddData(wxDataObject * data) {
		if(_obj.pushFunction("AddData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<bool>());
		}

		return wxClipboard::AddData(data);
	};

	// void wxClipboard::Clear()
	void Clear() {
		if(_obj.pushFunction("Clear")) {
			return (_obj.callFunction<void>());
		}

		return wxClipboard::Clear();
	};

	// void wxClipboard::Close()
	void Close() {
		if(_obj.pushFunction("Close")) {
			return (_obj.callFunction<void>());
		}

		return wxClipboard::Close();
	};

	// bool wxClipboard::Flush()
	bool Flush() {
		if(_obj.pushFunction("Flush")) {
			return (_obj.callFunction<bool>());
		}

		return wxClipboard::Flush();
	};

	// bool wxClipboard::GetData(wxDataObject & data)
	bool GetData(wxDataObject & data) {
		if(_obj.pushFunction("GetData")) {
			_obj.pushArg(&data);
			return (_obj.callFunction<bool>());
		}

		return wxClipboard::GetData(data);
	};

	// bool wxClipboard::IsOpened() const
	bool IsOpened() const {
		if(_obj.pushFunction("IsOpened")) {
			return (_obj.callFunction<bool>());
		}

		return wxClipboard::IsOpened();
	};

	// bool wxClipboard::IsSupported(const wxDataFormat & format)
	bool IsSupported(const wxDataFormat & format) {
		if(_obj.pushFunction("IsSupported")) {
			_obj.pushArg(&format);
			return (_obj.callFunction<bool>());
		}

		return wxClipboard::IsSupported(format);
	};

	// bool wxClipboard::Open()
	bool Open() {
		if(_obj.pushFunction("Open")) {
			return (_obj.callFunction<bool>());
		}

		return wxClipboard::Open();
	};

	// bool wxClipboard::SetData(wxDataObject * data)
	bool SetData(wxDataObject * data) {
		if(_obj.pushFunction("SetData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<bool>());
		}

		return wxClipboard::SetData(data);
	};

	// void wxClipboard::UsePrimarySelection(bool primary = false)
	void UsePrimarySelection(bool primary = false) {
		if(_obj.pushFunction("UsePrimarySelection")) {
			_obj.pushArg(primary);
			return (_obj.callFunction<void>());
		}

		return wxClipboard::UsePrimarySelection(primary);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxClipboard::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxClipboard::CloneRefData(data);
	};


};




#endif


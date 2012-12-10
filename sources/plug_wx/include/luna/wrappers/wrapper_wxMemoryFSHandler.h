#ifndef _WRAPPERS_WRAPPER_WXMEMORYFSHANDLER_H_
#define _WRAPPERS_WRAPPER_WXMEMORYFSHANDLER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/fs_mem.h>

class wrapper_wxMemoryFSHandler : public wxMemoryFSHandler {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxMemoryFSHandler(lua_State* L, lua_Table* dum) : wxMemoryFSHandler(), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxMemoryFSHandler::GetClassInfo();
	};

	// bool wxFileSystemHandler::CanOpen(const wxString & location)
	bool CanOpen(const wxString & location) {
		THROW_IF(!_obj.pushFunction("CanOpen"),"No implementation for abstract function wxFileSystemHandler::CanOpen");
		_obj.pushArg(location);
		return (_obj.callFunction<bool>());
	};

	// wxString wxFileSystemHandler::FindFirst(const wxString & wildcard, int flags = 0)
	wxString FindFirst(const wxString & wildcard, int flags = 0) {
		if(_obj.pushFunction("FindFirst")) {
			_obj.pushArg(wildcard);
			_obj.pushArg(flags);
			return *(_obj.callFunction<wxString*>());
		}

		return wxMemoryFSHandler::FindFirst(wildcard, flags);
	};

	// wxString wxFileSystemHandler::FindNext()
	wxString FindNext() {
		if(_obj.pushFunction("FindNext")) {
			return *(_obj.callFunction<wxString*>());
		}

		return wxMemoryFSHandler::FindNext();
	};

	// wxFSFile * wxFileSystemHandler::OpenFile(wxFileSystem & fs, const wxString & location)
	wxFSFile * OpenFile(wxFileSystem & fs, const wxString & location) {
		THROW_IF(!_obj.pushFunction("OpenFile"),"No implementation for abstract function wxFileSystemHandler::OpenFile");
		_obj.pushArg(&fs);
		_obj.pushArg(location);
		return (_obj.callFunction<wxFSFile*>());
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxMemoryFSHandler::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxMemoryFSHandler::CloneRefData(data);
	};


};




#endif


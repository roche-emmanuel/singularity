#ifndef _WRAPPERS_WRAPPER_WXFSFILE_H_
#define _WRAPPERS_WRAPPER_WXFSFILE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/filesys.h>

class wrapper_wxFSFile : public wxFSFile, public luna_wrapper_base {

public:
		

	~wrapper_wxFSFile() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxFSFile(lua_State* L, lua_Table* dum, wxInputStream * stream, const wxString & location, const wxString & mimetype, const wxString & anchor, wxDateTime modif) : wxFSFile(stream, location, mimetype, anchor, modif), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxFSFile::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFSFile::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFSFile::CloneRefData(data);
	};


};




#endif

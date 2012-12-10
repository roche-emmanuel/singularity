#ifndef _WRAPPERS_WRAPPER_WXHTMLFILTER_H_
#define _WRAPPERS_WRAPPER_WXHTMLFILTER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/html/htmlfilt.h>

class wrapper_wxHtmlFilter : public wxHtmlFilter {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxHtmlFilter(lua_State* L, lua_Table* dum) : wxHtmlFilter(), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxHtmlFilter::GetClassInfo();
	};

	// bool wxHtmlFilter::CanRead(const wxFSFile & file) const
	bool CanRead(const wxFSFile & file) const {
		THROW_IF(!_obj.pushFunction("CanRead"),"No implementation for abstract function wxHtmlFilter::CanRead");
		_obj.pushArg(&file);
		return (_obj.callFunction<bool>());
	};

	// wxString wxHtmlFilter::ReadFile(const wxFSFile & file) const
	wxString ReadFile(const wxFSFile & file) const {
		THROW_IF(!_obj.pushFunction("ReadFile"),"No implementation for abstract function wxHtmlFilter::ReadFile");
		_obj.pushArg(&file);
		return *(_obj.callFunction<wxString*>());
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlFilter::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlFilter::CloneRefData(data);
	};


};




#endif


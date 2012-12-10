#ifndef _WRAPPERS_WRAPPER_WXFILTERCLASSFACTORY_H_
#define _WRAPPERS_WRAPPER_WXFILTERCLASSFACTORY_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/stream.h>

class wrapper_wxFilterClassFactory : public wxFilterClassFactory {
protected:
	sgt::LuaObject _obj;
	
public:
	


	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxFilterClassFactory::GetClassInfo();
	};

	// wxFilterInputStream * wxFilterClassFactory::NewStream(wxInputStream & stream) const
	wxFilterInputStream * NewStream(wxInputStream & stream) const {
		THROW_IF(!_obj.pushFunction("NewStream"),"No implementation for abstract function wxFilterClassFactory::NewStream");
		_obj.pushArg(&stream);
		return (_obj.callFunction<wxFilterInputStream*>());
	};

	// wxFilterOutputStream * wxFilterClassFactory::NewStream(wxOutputStream & stream) const
	wxFilterOutputStream * NewStream(wxOutputStream & stream) const {
		THROW_IF(!_obj.pushFunction("NewStream"),"No implementation for abstract function wxFilterClassFactory::NewStream");
		_obj.pushArg(&stream);
		return (_obj.callFunction<wxFilterOutputStream*>());
	};

	// wxFilterInputStream * wxFilterClassFactory::NewStream(wxInputStream * stream) const
	wxFilterInputStream * NewStream(wxInputStream * stream) const {
		THROW_IF(!_obj.pushFunction("NewStream"),"No implementation for abstract function wxFilterClassFactory::NewStream");
		_obj.pushArg(stream);
		return (_obj.callFunction<wxFilterInputStream*>());
	};

	// wxFilterOutputStream * wxFilterClassFactory::NewStream(wxOutputStream * stream) const
	wxFilterOutputStream * NewStream(wxOutputStream * stream) const {
		THROW_IF(!_obj.pushFunction("NewStream"),"No implementation for abstract function wxFilterClassFactory::NewStream");
		_obj.pushArg(stream);
		return (_obj.callFunction<wxFilterOutputStream*>());
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFilterClassFactory::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFilterClassFactory::CloneRefData(data);
	};


};




#endif


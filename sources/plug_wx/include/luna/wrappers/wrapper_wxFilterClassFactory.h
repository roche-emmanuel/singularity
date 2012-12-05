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
	

	wrapper_wxFilterClassFactory(lua_State* L, lua_Table* dum) : wxFilterClassFactory(), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxObject::GetClassInfo();
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
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif


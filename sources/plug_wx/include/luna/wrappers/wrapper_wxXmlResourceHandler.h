#ifndef _WRAPPERS_WRAPPER_WXXMLRESOURCEHANDLER_H_
#define _WRAPPERS_WRAPPER_WXXMLRESOURCEHANDLER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/xrc/xmlres.h>

class wrapper_wxXmlResourceHandler : public wxXmlResourceHandler {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxXmlResourceHandler(lua_State* L, lua_Table* dum) : wxXmlResourceHandler(), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxObject::GetClassInfo();
	};

	// wxObject * wxXmlResourceHandler::DoCreateResource()
	wxObject * DoCreateResource() {
		THROW_IF(!_obj.pushFunction("DoCreateResource"),"No implementation for abstract function wxXmlResourceHandler::DoCreateResource");
		return (_obj.callFunction<wxObject*>());
	};

	// bool wxXmlResourceHandler::CanHandle(wxXmlNode * node)
	bool CanHandle(wxXmlNode * node) {
		THROW_IF(!_obj.pushFunction("CanHandle"),"No implementation for abstract function wxXmlResourceHandler::CanHandle");
		_obj.pushArg(node);
		return (_obj.callFunction<bool>());
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif


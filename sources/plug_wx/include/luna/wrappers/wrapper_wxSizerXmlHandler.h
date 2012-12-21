#ifndef _WRAPPERS_WRAPPER_WXSIZERXMLHANDLER_H_
#define _WRAPPERS_WRAPPER_WXSIZERXMLHANDLER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/xrc/xh_sizer.h>

class wrapper_wxSizerXmlHandler : public wxSizerXmlHandler, public luna_wrapper_base {

public:
		

	~wrapper_wxSizerXmlHandler() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxSizerXmlHandler(lua_State* L, lua_Table* dum) : wxSizerXmlHandler(), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxSizerXmlHandler::GetClassInfo();
	};

	// wxObject * wxSizerXmlHandler::DoCreateResource()
	wxObject * DoCreateResource() {
		if(_obj.pushFunction("DoCreateResource")) {
			return (_obj.callFunction<wxObject*>());
		}

		return wxSizerXmlHandler::DoCreateResource();
	};

	// bool wxSizerXmlHandler::CanHandle(wxXmlNode * node)
	bool CanHandle(wxXmlNode * node) {
		if(_obj.pushFunction("CanHandle")) {
			_obj.pushArg(node);
			return (_obj.callFunction<bool>());
		}

		return wxSizerXmlHandler::CanHandle(node);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSizerXmlHandler::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSizerXmlHandler::CloneRefData(data);
	};

	// wxSizer * wxSizerXmlHandler::DoCreateSizer(const wxString & name)
	wxSizer * DoCreateSizer(const wxString & name) {
		if(_obj.pushFunction("DoCreateSizer")) {
			_obj.pushArg(name);
			return (_obj.callFunction<wxSizer*>());
		}

		return wxSizerXmlHandler::DoCreateSizer(name);
	};

	// bool wxSizerXmlHandler::IsSizerNode(wxXmlNode * node) const
	bool IsSizerNode(wxXmlNode * node) const {
		if(_obj.pushFunction("IsSizerNode")) {
			_obj.pushArg(node);
			return (_obj.callFunction<bool>());
		}

		return wxSizerXmlHandler::IsSizerNode(node);
	};


};




#endif


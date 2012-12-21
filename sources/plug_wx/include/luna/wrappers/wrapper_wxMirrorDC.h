#ifndef _WRAPPERS_WRAPPER_WXMIRRORDC_H_
#define _WRAPPERS_WRAPPER_WXMIRRORDC_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/dcmirror.h>

class wrapper_wxMirrorDC : public wxMirrorDC, public luna_wrapper_base {

public:
		

	~wrapper_wxMirrorDC() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxMirrorDC(lua_State* L, lua_Table* dum, wxDC & dc, bool mirror) : wxMirrorDC(dc, mirror), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxMirrorDC::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxMirrorDC::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxMirrorDC::CloneRefData(data);
	};


};




#endif

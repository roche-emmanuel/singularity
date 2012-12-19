#ifndef _WRAPPERS_WRAPPER_WXGLCONTEXT_H_
#define _WRAPPERS_WRAPPER_WXGLCONTEXT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/glcanvas.h>

class wrapper_wxGLContext : public wxGLContext, public luna_wrapper_base {

public:
	

	wrapper_wxGLContext(lua_State* L, lua_Table* dum, wxGLCanvas * win, const wxGLContext * other = NULL) : wxGLContext(win, other), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxGLContext::GetClassInfo();
	};

	// bool wxGLContext::SetCurrent(const wxGLCanvas & win) const
	bool SetCurrent(const wxGLCanvas & win) const {
		if(_obj.pushFunction("SetCurrent")) {
			_obj.pushArg(&win);
			return (_obj.callFunction<bool>());
		}

		return wxGLContext::SetCurrent(win);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGLContext::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGLContext::CloneRefData(data);
	};


};




#endif


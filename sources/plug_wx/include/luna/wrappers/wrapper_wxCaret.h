#ifndef _WRAPPERS_WRAPPER_WXCARET_H_
#define _WRAPPERS_WRAPPER_WXCARET_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/caret.h>

class wrapper_wxCaret : public wxCaret {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxCaret(lua_State* L, lua_Table* dum) : wxCaret(), _obj(L,-1) {};
	wrapper_wxCaret(lua_State* L, lua_Table* dum, wxWindow * window, int width, int height) : wxCaret(window, width, height), _obj(L,-1) {};
	wrapper_wxCaret(lua_State* L, lua_Table* dum, wxWindow * window, const wxSize & size) : wxCaret(window, size), _obj(L,-1) {};

	// void wxCaret::Hide()
	void Hide() {
		if(_obj.pushFunction("Hide")) {
			return (_obj.callFunction<void>());
		}

		return wxCaret::Hide();
	};

	// void wxCaret::Show(bool show = true)
	void Show(bool show = true) {
		if(_obj.pushFunction("Show")) {
			_obj.pushArg(show);
			return (_obj.callFunction<void>());
		}

		return wxCaret::Show(show);
	};




};




#endif


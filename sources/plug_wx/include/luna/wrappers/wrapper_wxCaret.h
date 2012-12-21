#ifndef _WRAPPERS_WRAPPER_WXCARET_H_
#define _WRAPPERS_WRAPPER_WXCARET_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/caret.h>

class wrapper_wxCaret : public wxCaret, public luna_wrapper_base {

public:
		

	~wrapper_wxCaret() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxCaret(lua_State* L, lua_Table* dum) : wxCaret(), luna_wrapper_base(L) {};
	wrapper_wxCaret(lua_State* L, lua_Table* dum, wxWindow * window, int width, int height) : wxCaret(window, width, height), luna_wrapper_base(L) {};
	wrapper_wxCaret(lua_State* L, lua_Table* dum, wxWindow * window, const wxSize & size) : wxCaret(window, size), luna_wrapper_base(L) {};

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


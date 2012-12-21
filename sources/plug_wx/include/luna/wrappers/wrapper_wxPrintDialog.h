#ifndef _WRAPPERS_WRAPPER_WXPRINTDIALOG_H_
#define _WRAPPERS_WRAPPER_WXPRINTDIALOG_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/printdlg.h>

class wrapper_wxPrintDialog : public wxPrintDialog, public luna_wrapper_base {

public:
		

	~wrapper_wxPrintDialog() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	




};




#endif


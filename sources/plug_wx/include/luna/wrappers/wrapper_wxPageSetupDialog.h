#ifndef _WRAPPERS_WRAPPER_WXPAGESETUPDIALOG_H_
#define _WRAPPERS_WRAPPER_WXPAGESETUPDIALOG_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/printdlg.h>

class wrapper_wxPageSetupDialog : public wxPageSetupDialog {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxPageSetupDialog(lua_State* L, lua_Table* dum, wxWindow * parent, wxPageSetupDialogData * data = NULL) : wxPageSetupDialog(parent, data), _obj(L,-1) {};




};




#endif


#ifndef _WRAPPERS_WRAPPER_WXTEXTWRAPPER_H_
#define _WRAPPERS_WRAPPER_WXTEXTWRAPPER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/textwrapper.h>

class wrapper_wxTextWrapper : public wxTextWrapper {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxTextWrapper(lua_State* L, lua_Table* dum) : wxTextWrapper(), _obj(L,-1) {};


protected:
	// void wxTextWrapper::OnOutputLine(const wxString & line)
	// void wxTextWrapper::OnNewLine()

};




#endif


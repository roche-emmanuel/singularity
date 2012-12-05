#ifndef _WRAPPERS_WRAPPER_WXTEXTCOMPLETER_H_
#define _WRAPPERS_WRAPPER_WXTEXTCOMPLETER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/textcompleter.h>

class wrapper_wxTextCompleter : public wxTextCompleter {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxTextCompleter(lua_State* L, lua_Table* dum) : wxTextCompleter(), _obj(L,-1) {};

	// bool wxTextCompleter::Start(const wxString & prefix)
	bool Start(const wxString & prefix) {
		THROW_IF(!_obj.pushFunction("Start"),"No implementation for abstract function wxTextCompleter::Start");
		_obj.pushArg(prefix);
		return (_obj.callFunction<bool>());
	};

	// wxString wxTextCompleter::GetNext()
	wxString GetNext() {
		THROW_IF(!_obj.pushFunction("GetNext"),"No implementation for abstract function wxTextCompleter::GetNext");
		return *(_obj.callFunction<wxString*>());
	};




};




#endif


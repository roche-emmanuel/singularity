#ifndef _WRAPPERS_WRAPPER_WXTEXTCOMPLETERSIMPLE_H_
#define _WRAPPERS_WRAPPER_WXTEXTCOMPLETERSIMPLE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/textcompleter.h>

class wrapper_wxTextCompleterSimple : public wxTextCompleterSimple, public luna_wrapper_base {

public:
		

	~wrapper_wxTextCompleterSimple() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	

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

	// void wxTextCompleterSimple::GetCompletions(const wxString & prefix, wxArrayString & res)
	void GetCompletions(const wxString & prefix, wxArrayString & res) {
		THROW_IF(!_obj.pushFunction("GetCompletions"),"No implementation for abstract function wxTextCompleterSimple::GetCompletions");
		_obj.pushArg(prefix);
		_obj.pushArg(&res);
		return (_obj.callFunction<void>());
	};




};




#endif


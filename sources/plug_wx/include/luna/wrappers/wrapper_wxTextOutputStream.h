#ifndef _WRAPPERS_WRAPPER_WXTEXTOUTPUTSTREAM_H_
#define _WRAPPERS_WRAPPER_WXTEXTOUTPUTSTREAM_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/txtstrm.h>

class wrapper_wxTextOutputStream : public wxTextOutputStream, public luna_wrapper_base {

public:
		

	~wrapper_wxTextOutputStream() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	

	// void wxTextOutputStream::WriteDouble(double f)
	void WriteDouble(double f) {
		if(_obj.pushFunction("WriteDouble")) {
			_obj.pushArg(f);
			return (_obj.callFunction<void>());
		}

		return wxTextOutputStream::WriteDouble(f);
	};

	// void wxTextOutputStream::WriteString(const wxString & string)
	void WriteString(const wxString & string) {
		if(_obj.pushFunction("WriteString")) {
			_obj.pushArg(string);
			return (_obj.callFunction<void>());
		}

		return wxTextOutputStream::WriteString(string);
	};




};




#endif


#ifndef _WRAPPERS_WRAPPER_WXSTACKFRAME_H_
#define _WRAPPERS_WRAPPER_WXSTACKFRAME_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/stackwalk.h>

class wrapper_wxStackFrame : public wxStackFrame, public luna_wrapper_base {

public:
		

	~wrapper_wxStackFrame() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	

	// Public virtual methods:
	// bool wxStackFrame::GetParam(size_t n, wxString * type, wxString * name, wxString * value) const
	bool GetParam(size_t n, wxString * type, wxString * name, wxString * value) const {
		if(_obj.pushFunction("GetParam")) {
			_obj.pushArg(n);
			_obj.pushArg(type);
			_obj.pushArg(name);
			_obj.pushArg(value);
			return (_obj.callFunction<bool>());
		}

		return wxStackFrame::GetParam(n, type, name, value);
	};

	// size_t wxStackFrame::GetParamCount() const
	size_t GetParamCount() const {
		if(_obj.pushFunction("GetParamCount")) {
			return (_obj.callFunction<size_t>());
		}

		return wxStackFrame::GetParamCount();
	};



	// Protected virtual methods:

	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


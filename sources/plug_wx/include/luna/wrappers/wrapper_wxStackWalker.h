#ifndef _WRAPPERS_WRAPPER_WXSTACKWALKER_H_
#define _WRAPPERS_WRAPPER_WXSTACKWALKER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/stackwalk.h>

class wrapper_wxStackWalker : public wxStackWalker, public luna_wrapper_base {

public:
		

	~wrapper_wxStackWalker() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxStackWalker(lua_State* L, lua_Table* dum, const char * argv0 = NULL) : wxStackWalker(argv0), luna_wrapper_base(L) {};

	// void wxStackWalker::Walk(size_t skip = 1, size_t maxDepth = (200))
	void Walk(size_t skip = 1, size_t maxDepth = (200)) {
		if(_obj.pushFunction("Walk")) {
			_obj.pushArg(skip);
			_obj.pushArg(maxDepth);
			return (_obj.callFunction<void>());
		}

		return wxStackWalker::Walk(skip, maxDepth);
	};

	// void wxStackWalker::WalkFromException(size_t maxDepth = (200))
	void WalkFromException(size_t maxDepth = (200)) {
		if(_obj.pushFunction("WalkFromException")) {
			_obj.pushArg(maxDepth);
			return (_obj.callFunction<void>());
		}

		return wxStackWalker::WalkFromException(maxDepth);
	};


protected:
	// void wxStackWalker::OnStackFrame(const wxStackFrame & frame)
	void OnStackFrame(const wxStackFrame & frame) {
		THROW_IF(!_obj.pushFunction("OnStackFrame"),"No implementation for abstract function wxStackWalker::OnStackFrame");
		_obj.pushArg(&frame);
		return (_obj.callFunction<void>());
	};


};




#endif


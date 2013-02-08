#ifndef _WRAPPERS_WRAPPER_MGLWND_H_
#define _WRAPPERS_WRAPPER_MGLWND_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <mgl2/wnd.h>

class wrapper_mglWnd : public mglWnd, public luna_wrapper_base {

public:
		

	~wrapper_mglWnd() {
		logDEBUG3("Calling delete function for wrapper mglWnd");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((mglWnd*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_mglWnd(lua_State* L, lua_Table* dum) 
		: mglWnd(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((mglWnd*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void mglGraph::SetFontSizePT(double pt, int dpi = 72)
	void SetFontSizePT(double pt, int dpi = 72) {
		if(_obj.pushFunction("SetFontSizePT")) {
			_obj.pushArg((mglWnd*)this);
			_obj.pushArg(pt);
			_obj.pushArg(dpi);
			return (_obj.callFunction<void>());
		}

		return mglWnd::SetFontSizePT(pt, dpi);
	};

	// int mglWnd::Run()
	int Run() {
		THROW_IF(!_obj.pushFunction("Run"),"No implementation for abstract function mglWnd::Run");
		_obj.pushArg((mglWnd*)this);
		return (_obj.callFunction<int>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


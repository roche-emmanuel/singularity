#ifndef _WRAPPERS_WRAPPER_MGLDRAW_H_
#define _WRAPPERS_WRAPPER_MGLDRAW_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <mgl2/wnd.h>

class wrapper_mglDraw : public mglDraw, public luna_wrapper_base {

public:
		

	~wrapper_mglDraw() {
		logDEBUG3("Calling delete function for wrapper mglDraw");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((mglDraw*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_mglDraw(lua_State* L, lua_Table* dum) 
		: mglDraw(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((mglDraw*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// int mglDraw::Draw(mglGraph * arg1)
	int Draw(mglGraph * arg1) {
		THROW_IF(!_obj.pushFunction("Draw"),"No implementation for abstract function mglDraw::Draw");
		_obj.pushArg((mglDraw*)this);
		_obj.pushArg(arg1);
		return (_obj.callFunction<int>());
	};

	// void mglDraw::Reload()
	void Reload() {
		if(_obj.pushFunction("Reload")) {
			_obj.pushArg((mglDraw*)this);
			return (_obj.callFunction<void>());
		}

		return mglDraw::Reload();
	};

	// void mglDraw::Click()
	void Click() {
		if(_obj.pushFunction("Click")) {
			_obj.pushArg((mglDraw*)this);
			return (_obj.callFunction<void>());
		}

		return mglDraw::Click();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


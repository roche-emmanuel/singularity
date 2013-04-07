#ifndef _WRAPPERS_WRAPPER_AWESOMIUM_SURFACE_H_
#define _WRAPPERS_WRAPPER_AWESOMIUM_SURFACE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <Awesomium/Surface.h>

class wrapper_Awesomium_Surface : public Awesomium::Surface, public luna_wrapper_base {

public:
		

	~wrapper_Awesomium_Surface() {
		logDEBUG3("Calling delete function for wrapper Awesomium_Surface");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((Awesomium::Surface*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_Awesomium_Surface(lua_State* L, lua_Table* dum) 
		: Awesomium::Surface(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((Awesomium::Surface*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void Awesomium::Surface::Paint(unsigned char * src_buffer, int src_row_span, const Awesomium::Rect & src_rect, const Awesomium::Rect & dest_rect)
	void Paint(unsigned char * src_buffer, int src_row_span, const Awesomium::Rect & src_rect, const Awesomium::Rect & dest_rect) {
		THROW_IF(!_obj.pushFunction("Paint"),"No implementation for abstract function Awesomium::Surface::Paint");
		_obj.pushArg((Awesomium::Surface*)this);
		_obj.pushArg((void*)src_buffer);
		_obj.pushArg(src_row_span);
		_obj.pushArg(&src_rect);
		_obj.pushArg(&dest_rect);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::Surface::Scroll(int dx, int dy, const Awesomium::Rect & clip_rect)
	void Scroll(int dx, int dy, const Awesomium::Rect & clip_rect) {
		THROW_IF(!_obj.pushFunction("Scroll"),"No implementation for abstract function Awesomium::Surface::Scroll");
		_obj.pushArg((Awesomium::Surface*)this);
		_obj.pushArg(dx);
		_obj.pushArg(dy);
		_obj.pushArg(&clip_rect);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


#ifndef _WRAPPERS_WRAPPER_AWESOMIUM_BITMAPSURFACE_H_
#define _WRAPPERS_WRAPPER_AWESOMIUM_BITMAPSURFACE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Awesomium/BitmapSurface.h>

class wrapper_Awesomium_BitmapSurface : public Awesomium::BitmapSurface, public luna_wrapper_base {

public:
		

	~wrapper_Awesomium_BitmapSurface() {
		logDEBUG3("Calling delete function for wrapper Awesomium_BitmapSurface");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((Awesomium::BitmapSurface*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_Awesomium_BitmapSurface(lua_State* L, lua_Table* dum, int width, int height) 
		: Awesomium::BitmapSurface(width, height), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((Awesomium::BitmapSurface*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void Awesomium::BitmapSurface::Paint(unsigned char * src_buffer, int src_row_span, const Awesomium::Rect & src_rect, const Awesomium::Rect & dest_rect)
	void Paint(unsigned char * src_buffer, int src_row_span, const Awesomium::Rect & src_rect, const Awesomium::Rect & dest_rect) {
		if(_obj.pushFunction("Paint")) {
			_obj.pushArg((Awesomium::BitmapSurface*)this);
			_obj.pushArg((void*)src_buffer);
			_obj.pushArg(src_row_span);
			_obj.pushArg(&src_rect);
			_obj.pushArg(&dest_rect);
			return (_obj.callFunction<void>());
		}

		return BitmapSurface::Paint(src_buffer, src_row_span, src_rect, dest_rect);
	};

	// void Awesomium::BitmapSurface::Scroll(int dx, int dy, const Awesomium::Rect & clip_rect)
	void Scroll(int dx, int dy, const Awesomium::Rect & clip_rect) {
		if(_obj.pushFunction("Scroll")) {
			_obj.pushArg((Awesomium::BitmapSurface*)this);
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			_obj.pushArg(&clip_rect);
			return (_obj.callFunction<void>());
		}

		return BitmapSurface::Scroll(dx, dy, clip_rect);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


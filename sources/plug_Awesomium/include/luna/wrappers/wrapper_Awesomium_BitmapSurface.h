#ifndef _WRAPPERS_WRAPPER_AWESOMIUM_BITMAPSURFACE_H_
#define _WRAPPERS_WRAPPER_AWESOMIUM_BITMAPSURFACE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Awesomium/BitmapSurface.h>

namespace sgt {

class wrapper_Awesomium_BitmapSurface : public Awesomium::BitmapSurface {
protected:
	LuaObject _obj;
	
public:
	

	wrapper_Awesomium_BitmapSurface(lua_State* L, int width, int height) : Awesomium::BitmapSurface(width, height), _obj(L,-1) {};

	// void Awesomium::BitmapSurface::Paint(unsigned char * src_buffer, int src_row_span, const Awesomium::Rect & src_rect, const Awesomium::Rect & dest_rect)
	void Paint(unsigned char * src_buffer, int src_row_span, const Awesomium::Rect & src_rect, const Awesomium::Rect & dest_rect) {
		if(_obj.pushFunction("Paint")) {
			_obj.pushArg(src_buffer);
			_obj.pushArg(src_row_span);
			_obj.pushArg(&src_rect);
			_obj.pushArg(&dest_rect);
			return (_obj.callFunction<void>());
		}

		return Awesomium::BitmapSurface::Paint(src_buffer, src_row_span, src_rect, dest_rect);
	};

	// void Awesomium::BitmapSurface::Scroll(int dx, int dy, const Awesomium::Rect & clip_rect)
	void Scroll(int dx, int dy, const Awesomium::Rect & clip_rect) {
		if(_obj.pushFunction("Scroll")) {
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			_obj.pushArg(&clip_rect);
			return (_obj.callFunction<void>());
		}

		return Awesomium::BitmapSurface::Scroll(dx, dy, clip_rect);
	};




};

};	



#endif


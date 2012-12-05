#ifndef _WRAPPERS_WRAPPER_AWESOMIUM_SURFACE_H_
#define _WRAPPERS_WRAPPER_AWESOMIUM_SURFACE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Awesomium/Surface.h>

class wrapper_Awesomium_Surface : public Awesomium::Surface {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_Awesomium_Surface(lua_State* L, lua_Table* dum) : Awesomium::Surface(), _obj(L,-1) {};

	// void Awesomium::Surface::Paint(unsigned char * src_buffer, int src_row_span, const Awesomium::Rect & src_rect, const Awesomium::Rect & dest_rect)
	void Paint(unsigned char * src_buffer, int src_row_span, const Awesomium::Rect & src_rect, const Awesomium::Rect & dest_rect) {
		THROW_IF(!_obj.pushFunction("Paint"),"No implementation for abstract function Awesomium::Surface::Paint");
		_obj.pushArg((void*)src_buffer);
		_obj.pushArg(src_row_span);
		_obj.pushArg(&src_rect);
		_obj.pushArg(&dest_rect);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::Surface::Scroll(int dx, int dy, const Awesomium::Rect & clip_rect)
	void Scroll(int dx, int dy, const Awesomium::Rect & clip_rect) {
		THROW_IF(!_obj.pushFunction("Scroll"),"No implementation for abstract function Awesomium::Surface::Scroll");
		_obj.pushArg(dx);
		_obj.pushArg(dy);
		_obj.pushArg(&clip_rect);
		return (_obj.callFunction<void>());
	};




};




#endif

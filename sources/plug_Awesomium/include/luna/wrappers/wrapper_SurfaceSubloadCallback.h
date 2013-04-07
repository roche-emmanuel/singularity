#ifndef _WRAPPERS_WRAPPER_SURFACESUBLOADCALLBACK_H_
#define _WRAPPERS_WRAPPER_SURFACESUBLOADCALLBACK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <plug_extensions.h>

class wrapper_SurfaceSubloadCallback : public SurfaceSubloadCallback, public luna_wrapper_base {

public:
		

	~wrapper_SurfaceSubloadCallback() {
		logDEBUG3("Calling delete function for wrapper SurfaceSubloadCallback");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((SurfaceSubloadCallback*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_SurfaceSubloadCallback(lua_State* L, lua_Table* dum, Awesomium::WebView * view) 
		: SurfaceSubloadCallback(view), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((SurfaceSubloadCallback*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:

	// Protected non-virtual methods:
	// bool SurfaceSubloadCallback::copySurface() const
	bool public_copySurface() const {
		return SurfaceSubloadCallback::copySurface();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_copySurface(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// bool SurfaceSubloadCallback::public_copySurface() const
	static int _bind_public_copySurface(lua_State *L) {
		if (!_lg_typecheck_public_copySurface(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SurfaceSubloadCallback::public_copySurface() const function, expected prototype:\nbool SurfaceSubloadCallback::public_copySurface() const\nClass arguments details:\n");
		}


		wrapper_SurfaceSubloadCallback* self=Luna< SurfaceSubloadCallback >::checkSubType< wrapper_SurfaceSubloadCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SurfaceSubloadCallback::public_copySurface() const. Got : '%s'",typeid(Luna< SurfaceSubloadCallback >::check(L,1)).name());
		}
		bool lret = self->public_copySurface();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"copySurface",_bind_public_copySurface},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif


#include <plug_common.h>

class luna_wrapper_Awesomium_WebPreferences {
public:
	typedef Luna< Awesomium::WebPreferences > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,51772222) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::WebPreferences*)");
		}

		Awesomium::WebPreferences* rhs =(Luna< Awesomium::WebPreferences >::check(L,2));
		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebPreferences");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebPreferences",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_useWebGL(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,51772222)) ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEnable_javascript(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEnable_dart(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEnable_plugins(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEnable_local_storage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEnable_databases(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEnable_app_cache(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEnable_web_audio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEnable_web_gl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEnable_web_security(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEnable_remote_fonts(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEnable_smooth_scrolling(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEnable_gpu_acceleration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUser_stylesheet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProxy_config(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAccept_language(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAccept_charset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDefault_encoding(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getShrink_standalone_images_to_fit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLoad_images_automatically(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAllow_scripts_to_open_windows(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAllow_scripts_to_close_windows(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAllow_scripts_to_access_clipboard(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAllow_universal_access_from_file_url(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAllow_file_access_from_file_url(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAllow_running_insecure_content(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEnable_javascript(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEnable_dart(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEnable_plugins(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEnable_local_storage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEnable_databases(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEnable_app_cache(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEnable_web_audio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEnable_web_gl(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEnable_web_security(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEnable_remote_fonts(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEnable_smooth_scrolling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEnable_gpu_acceleration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUser_stylesheet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13938525) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setProxy_config(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13938525) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAccept_language(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13938525) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAccept_charset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13938525) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDefault_encoding(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13938525) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setShrink_standalone_images_to_fit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLoad_images_automatically(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAllow_scripts_to_open_windows(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAllow_scripts_to_close_windows(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAllow_scripts_to_access_clipboard(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAllow_universal_access_from_file_url(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAllow_file_access_from_file_url(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAllow_running_insecure_content(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// Awesomium::WebPreferences::WebPreferences()
	static Awesomium::WebPreferences* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebPreferences::WebPreferences() function, expected prototype:\nAwesomium::WebPreferences::WebPreferences()\nClass arguments details:\n");
		}


		return new Awesomium::WebPreferences();
	}


	// Function binds:
	// void Awesomium::WebPreferences::useWebGL(Awesomium::WebPreferences * prefs, bool enabled)
	static int _bind_useWebGL(lua_State *L) {
		if (!_lg_typecheck_useWebGL(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPreferences::useWebGL(Awesomium::WebPreferences * prefs, bool enabled) function, expected prototype:\nvoid Awesomium::WebPreferences::useWebGL(Awesomium::WebPreferences * prefs, bool enabled)\nClass arguments details:\narg 1 ID = 51772222\n");
		}

		Awesomium::WebPreferences* prefs=(Luna< Awesomium::WebPreferences >::check(L,1));
		bool enabled=(bool)(lua_toboolean(L,2)==1);

		useWebGL(prefs, enabled);

		return 0;
	}

	// bool Awesomium::WebPreferences::enable_javascript()
	static int _bind_getEnable_javascript(lua_State *L) {
		if (!_lg_typecheck_getEnable_javascript(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebPreferences::enable_javascript() function, expected prototype:\nbool Awesomium::WebPreferences::enable_javascript()\nClass arguments details:\n");
		}


		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebPreferences::enable_javascript(). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		bool lret = self->enable_javascript;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::WebPreferences::enable_dart()
	static int _bind_getEnable_dart(lua_State *L) {
		if (!_lg_typecheck_getEnable_dart(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebPreferences::enable_dart() function, expected prototype:\nbool Awesomium::WebPreferences::enable_dart()\nClass arguments details:\n");
		}


		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebPreferences::enable_dart(). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		bool lret = self->enable_dart;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::WebPreferences::enable_plugins()
	static int _bind_getEnable_plugins(lua_State *L) {
		if (!_lg_typecheck_getEnable_plugins(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebPreferences::enable_plugins() function, expected prototype:\nbool Awesomium::WebPreferences::enable_plugins()\nClass arguments details:\n");
		}


		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebPreferences::enable_plugins(). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		bool lret = self->enable_plugins;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::WebPreferences::enable_local_storage()
	static int _bind_getEnable_local_storage(lua_State *L) {
		if (!_lg_typecheck_getEnable_local_storage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebPreferences::enable_local_storage() function, expected prototype:\nbool Awesomium::WebPreferences::enable_local_storage()\nClass arguments details:\n");
		}


		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebPreferences::enable_local_storage(). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		bool lret = self->enable_local_storage;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::WebPreferences::enable_databases()
	static int _bind_getEnable_databases(lua_State *L) {
		if (!_lg_typecheck_getEnable_databases(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebPreferences::enable_databases() function, expected prototype:\nbool Awesomium::WebPreferences::enable_databases()\nClass arguments details:\n");
		}


		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebPreferences::enable_databases(). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		bool lret = self->enable_databases;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::WebPreferences::enable_app_cache()
	static int _bind_getEnable_app_cache(lua_State *L) {
		if (!_lg_typecheck_getEnable_app_cache(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebPreferences::enable_app_cache() function, expected prototype:\nbool Awesomium::WebPreferences::enable_app_cache()\nClass arguments details:\n");
		}


		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebPreferences::enable_app_cache(). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		bool lret = self->enable_app_cache;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::WebPreferences::enable_web_audio()
	static int _bind_getEnable_web_audio(lua_State *L) {
		if (!_lg_typecheck_getEnable_web_audio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebPreferences::enable_web_audio() function, expected prototype:\nbool Awesomium::WebPreferences::enable_web_audio()\nClass arguments details:\n");
		}


		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebPreferences::enable_web_audio(). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		bool lret = self->enable_web_audio;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::WebPreferences::enable_web_gl()
	static int _bind_getEnable_web_gl(lua_State *L) {
		if (!_lg_typecheck_getEnable_web_gl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebPreferences::enable_web_gl() function, expected prototype:\nbool Awesomium::WebPreferences::enable_web_gl()\nClass arguments details:\n");
		}


		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebPreferences::enable_web_gl(). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		bool lret = self->enable_web_gl;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::WebPreferences::enable_web_security()
	static int _bind_getEnable_web_security(lua_State *L) {
		if (!_lg_typecheck_getEnable_web_security(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebPreferences::enable_web_security() function, expected prototype:\nbool Awesomium::WebPreferences::enable_web_security()\nClass arguments details:\n");
		}


		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebPreferences::enable_web_security(). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		bool lret = self->enable_web_security;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::WebPreferences::enable_remote_fonts()
	static int _bind_getEnable_remote_fonts(lua_State *L) {
		if (!_lg_typecheck_getEnable_remote_fonts(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebPreferences::enable_remote_fonts() function, expected prototype:\nbool Awesomium::WebPreferences::enable_remote_fonts()\nClass arguments details:\n");
		}


		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebPreferences::enable_remote_fonts(). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		bool lret = self->enable_remote_fonts;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::WebPreferences::enable_smooth_scrolling()
	static int _bind_getEnable_smooth_scrolling(lua_State *L) {
		if (!_lg_typecheck_getEnable_smooth_scrolling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebPreferences::enable_smooth_scrolling() function, expected prototype:\nbool Awesomium::WebPreferences::enable_smooth_scrolling()\nClass arguments details:\n");
		}


		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebPreferences::enable_smooth_scrolling(). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		bool lret = self->enable_smooth_scrolling;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::WebPreferences::enable_gpu_acceleration()
	static int _bind_getEnable_gpu_acceleration(lua_State *L) {
		if (!_lg_typecheck_getEnable_gpu_acceleration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebPreferences::enable_gpu_acceleration() function, expected prototype:\nbool Awesomium::WebPreferences::enable_gpu_acceleration()\nClass arguments details:\n");
		}


		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebPreferences::enable_gpu_acceleration(). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		bool lret = self->enable_gpu_acceleration;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Awesomium::WebString Awesomium::WebPreferences::user_stylesheet()
	static int _bind_getUser_stylesheet(lua_State *L) {
		if (!_lg_typecheck_getUser_stylesheet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebPreferences::user_stylesheet() function, expected prototype:\nAwesomium::WebString Awesomium::WebPreferences::user_stylesheet()\nClass arguments details:\n");
		}


		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebPreferences::user_stylesheet(). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		Awesomium::WebString lret = self->user_stylesheet;
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// Awesomium::WebString Awesomium::WebPreferences::proxy_config()
	static int _bind_getProxy_config(lua_State *L) {
		if (!_lg_typecheck_getProxy_config(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebPreferences::proxy_config() function, expected prototype:\nAwesomium::WebString Awesomium::WebPreferences::proxy_config()\nClass arguments details:\n");
		}


		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebPreferences::proxy_config(). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		Awesomium::WebString lret = self->proxy_config;
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// Awesomium::WebString Awesomium::WebPreferences::accept_language()
	static int _bind_getAccept_language(lua_State *L) {
		if (!_lg_typecheck_getAccept_language(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebPreferences::accept_language() function, expected prototype:\nAwesomium::WebString Awesomium::WebPreferences::accept_language()\nClass arguments details:\n");
		}


		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebPreferences::accept_language(). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		Awesomium::WebString lret = self->accept_language;
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// Awesomium::WebString Awesomium::WebPreferences::accept_charset()
	static int _bind_getAccept_charset(lua_State *L) {
		if (!_lg_typecheck_getAccept_charset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebPreferences::accept_charset() function, expected prototype:\nAwesomium::WebString Awesomium::WebPreferences::accept_charset()\nClass arguments details:\n");
		}


		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebPreferences::accept_charset(). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		Awesomium::WebString lret = self->accept_charset;
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// Awesomium::WebString Awesomium::WebPreferences::default_encoding()
	static int _bind_getDefault_encoding(lua_State *L) {
		if (!_lg_typecheck_getDefault_encoding(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebPreferences::default_encoding() function, expected prototype:\nAwesomium::WebString Awesomium::WebPreferences::default_encoding()\nClass arguments details:\n");
		}


		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebPreferences::default_encoding(). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		Awesomium::WebString lret = self->default_encoding;
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// bool Awesomium::WebPreferences::shrink_standalone_images_to_fit()
	static int _bind_getShrink_standalone_images_to_fit(lua_State *L) {
		if (!_lg_typecheck_getShrink_standalone_images_to_fit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebPreferences::shrink_standalone_images_to_fit() function, expected prototype:\nbool Awesomium::WebPreferences::shrink_standalone_images_to_fit()\nClass arguments details:\n");
		}


		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebPreferences::shrink_standalone_images_to_fit(). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		bool lret = self->shrink_standalone_images_to_fit;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::WebPreferences::load_images_automatically()
	static int _bind_getLoad_images_automatically(lua_State *L) {
		if (!_lg_typecheck_getLoad_images_automatically(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebPreferences::load_images_automatically() function, expected prototype:\nbool Awesomium::WebPreferences::load_images_automatically()\nClass arguments details:\n");
		}


		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebPreferences::load_images_automatically(). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		bool lret = self->load_images_automatically;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::WebPreferences::allow_scripts_to_open_windows()
	static int _bind_getAllow_scripts_to_open_windows(lua_State *L) {
		if (!_lg_typecheck_getAllow_scripts_to_open_windows(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebPreferences::allow_scripts_to_open_windows() function, expected prototype:\nbool Awesomium::WebPreferences::allow_scripts_to_open_windows()\nClass arguments details:\n");
		}


		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebPreferences::allow_scripts_to_open_windows(). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		bool lret = self->allow_scripts_to_open_windows;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::WebPreferences::allow_scripts_to_close_windows()
	static int _bind_getAllow_scripts_to_close_windows(lua_State *L) {
		if (!_lg_typecheck_getAllow_scripts_to_close_windows(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebPreferences::allow_scripts_to_close_windows() function, expected prototype:\nbool Awesomium::WebPreferences::allow_scripts_to_close_windows()\nClass arguments details:\n");
		}


		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebPreferences::allow_scripts_to_close_windows(). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		bool lret = self->allow_scripts_to_close_windows;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::WebPreferences::allow_scripts_to_access_clipboard()
	static int _bind_getAllow_scripts_to_access_clipboard(lua_State *L) {
		if (!_lg_typecheck_getAllow_scripts_to_access_clipboard(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebPreferences::allow_scripts_to_access_clipboard() function, expected prototype:\nbool Awesomium::WebPreferences::allow_scripts_to_access_clipboard()\nClass arguments details:\n");
		}


		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebPreferences::allow_scripts_to_access_clipboard(). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		bool lret = self->allow_scripts_to_access_clipboard;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::WebPreferences::allow_universal_access_from_file_url()
	static int _bind_getAllow_universal_access_from_file_url(lua_State *L) {
		if (!_lg_typecheck_getAllow_universal_access_from_file_url(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebPreferences::allow_universal_access_from_file_url() function, expected prototype:\nbool Awesomium::WebPreferences::allow_universal_access_from_file_url()\nClass arguments details:\n");
		}


		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebPreferences::allow_universal_access_from_file_url(). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		bool lret = self->allow_universal_access_from_file_url;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::WebPreferences::allow_file_access_from_file_url()
	static int _bind_getAllow_file_access_from_file_url(lua_State *L) {
		if (!_lg_typecheck_getAllow_file_access_from_file_url(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebPreferences::allow_file_access_from_file_url() function, expected prototype:\nbool Awesomium::WebPreferences::allow_file_access_from_file_url()\nClass arguments details:\n");
		}


		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebPreferences::allow_file_access_from_file_url(). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		bool lret = self->allow_file_access_from_file_url;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::WebPreferences::allow_running_insecure_content()
	static int _bind_getAllow_running_insecure_content(lua_State *L) {
		if (!_lg_typecheck_getAllow_running_insecure_content(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebPreferences::allow_running_insecure_content() function, expected prototype:\nbool Awesomium::WebPreferences::allow_running_insecure_content()\nClass arguments details:\n");
		}


		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebPreferences::allow_running_insecure_content(). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		bool lret = self->allow_running_insecure_content;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void Awesomium::WebPreferences::enable_javascript(bool value)
	static int _bind_setEnable_javascript(lua_State *L) {
		if (!_lg_typecheck_setEnable_javascript(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPreferences::enable_javascript(bool value) function, expected prototype:\nvoid Awesomium::WebPreferences::enable_javascript(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebPreferences::enable_javascript(bool). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		self->enable_javascript = value;

		return 0;
	}

	// void Awesomium::WebPreferences::enable_dart(bool value)
	static int _bind_setEnable_dart(lua_State *L) {
		if (!_lg_typecheck_setEnable_dart(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPreferences::enable_dart(bool value) function, expected prototype:\nvoid Awesomium::WebPreferences::enable_dart(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebPreferences::enable_dart(bool). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		self->enable_dart = value;

		return 0;
	}

	// void Awesomium::WebPreferences::enable_plugins(bool value)
	static int _bind_setEnable_plugins(lua_State *L) {
		if (!_lg_typecheck_setEnable_plugins(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPreferences::enable_plugins(bool value) function, expected prototype:\nvoid Awesomium::WebPreferences::enable_plugins(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebPreferences::enable_plugins(bool). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		self->enable_plugins = value;

		return 0;
	}

	// void Awesomium::WebPreferences::enable_local_storage(bool value)
	static int _bind_setEnable_local_storage(lua_State *L) {
		if (!_lg_typecheck_setEnable_local_storage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPreferences::enable_local_storage(bool value) function, expected prototype:\nvoid Awesomium::WebPreferences::enable_local_storage(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebPreferences::enable_local_storage(bool). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		self->enable_local_storage = value;

		return 0;
	}

	// void Awesomium::WebPreferences::enable_databases(bool value)
	static int _bind_setEnable_databases(lua_State *L) {
		if (!_lg_typecheck_setEnable_databases(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPreferences::enable_databases(bool value) function, expected prototype:\nvoid Awesomium::WebPreferences::enable_databases(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebPreferences::enable_databases(bool). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		self->enable_databases = value;

		return 0;
	}

	// void Awesomium::WebPreferences::enable_app_cache(bool value)
	static int _bind_setEnable_app_cache(lua_State *L) {
		if (!_lg_typecheck_setEnable_app_cache(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPreferences::enable_app_cache(bool value) function, expected prototype:\nvoid Awesomium::WebPreferences::enable_app_cache(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebPreferences::enable_app_cache(bool). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		self->enable_app_cache = value;

		return 0;
	}

	// void Awesomium::WebPreferences::enable_web_audio(bool value)
	static int _bind_setEnable_web_audio(lua_State *L) {
		if (!_lg_typecheck_setEnable_web_audio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPreferences::enable_web_audio(bool value) function, expected prototype:\nvoid Awesomium::WebPreferences::enable_web_audio(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebPreferences::enable_web_audio(bool). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		self->enable_web_audio = value;

		return 0;
	}

	// void Awesomium::WebPreferences::enable_web_gl(bool value)
	static int _bind_setEnable_web_gl(lua_State *L) {
		if (!_lg_typecheck_setEnable_web_gl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPreferences::enable_web_gl(bool value) function, expected prototype:\nvoid Awesomium::WebPreferences::enable_web_gl(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebPreferences::enable_web_gl(bool). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		self->enable_web_gl = value;

		return 0;
	}

	// void Awesomium::WebPreferences::enable_web_security(bool value)
	static int _bind_setEnable_web_security(lua_State *L) {
		if (!_lg_typecheck_setEnable_web_security(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPreferences::enable_web_security(bool value) function, expected prototype:\nvoid Awesomium::WebPreferences::enable_web_security(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebPreferences::enable_web_security(bool). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		self->enable_web_security = value;

		return 0;
	}

	// void Awesomium::WebPreferences::enable_remote_fonts(bool value)
	static int _bind_setEnable_remote_fonts(lua_State *L) {
		if (!_lg_typecheck_setEnable_remote_fonts(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPreferences::enable_remote_fonts(bool value) function, expected prototype:\nvoid Awesomium::WebPreferences::enable_remote_fonts(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebPreferences::enable_remote_fonts(bool). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		self->enable_remote_fonts = value;

		return 0;
	}

	// void Awesomium::WebPreferences::enable_smooth_scrolling(bool value)
	static int _bind_setEnable_smooth_scrolling(lua_State *L) {
		if (!_lg_typecheck_setEnable_smooth_scrolling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPreferences::enable_smooth_scrolling(bool value) function, expected prototype:\nvoid Awesomium::WebPreferences::enable_smooth_scrolling(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebPreferences::enable_smooth_scrolling(bool). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		self->enable_smooth_scrolling = value;

		return 0;
	}

	// void Awesomium::WebPreferences::enable_gpu_acceleration(bool value)
	static int _bind_setEnable_gpu_acceleration(lua_State *L) {
		if (!_lg_typecheck_setEnable_gpu_acceleration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPreferences::enable_gpu_acceleration(bool value) function, expected prototype:\nvoid Awesomium::WebPreferences::enable_gpu_acceleration(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebPreferences::enable_gpu_acceleration(bool). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		self->enable_gpu_acceleration = value;

		return 0;
	}

	// void Awesomium::WebPreferences::user_stylesheet(Awesomium::WebString value)
	static int _bind_setUser_stylesheet(lua_State *L) {
		if (!_lg_typecheck_setUser_stylesheet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPreferences::user_stylesheet(Awesomium::WebString value) function, expected prototype:\nvoid Awesomium::WebPreferences::user_stylesheet(Awesomium::WebString value)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string value_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString value = Awesomium::ToWebString(value_str);

		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebPreferences::user_stylesheet(Awesomium::WebString). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		self->user_stylesheet = value;

		return 0;
	}

	// void Awesomium::WebPreferences::proxy_config(Awesomium::WebString value)
	static int _bind_setProxy_config(lua_State *L) {
		if (!_lg_typecheck_setProxy_config(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPreferences::proxy_config(Awesomium::WebString value) function, expected prototype:\nvoid Awesomium::WebPreferences::proxy_config(Awesomium::WebString value)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string value_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString value = Awesomium::ToWebString(value_str);

		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebPreferences::proxy_config(Awesomium::WebString). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		self->proxy_config = value;

		return 0;
	}

	// void Awesomium::WebPreferences::accept_language(Awesomium::WebString value)
	static int _bind_setAccept_language(lua_State *L) {
		if (!_lg_typecheck_setAccept_language(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPreferences::accept_language(Awesomium::WebString value) function, expected prototype:\nvoid Awesomium::WebPreferences::accept_language(Awesomium::WebString value)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string value_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString value = Awesomium::ToWebString(value_str);

		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebPreferences::accept_language(Awesomium::WebString). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		self->accept_language = value;

		return 0;
	}

	// void Awesomium::WebPreferences::accept_charset(Awesomium::WebString value)
	static int _bind_setAccept_charset(lua_State *L) {
		if (!_lg_typecheck_setAccept_charset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPreferences::accept_charset(Awesomium::WebString value) function, expected prototype:\nvoid Awesomium::WebPreferences::accept_charset(Awesomium::WebString value)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string value_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString value = Awesomium::ToWebString(value_str);

		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebPreferences::accept_charset(Awesomium::WebString). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		self->accept_charset = value;

		return 0;
	}

	// void Awesomium::WebPreferences::default_encoding(Awesomium::WebString value)
	static int _bind_setDefault_encoding(lua_State *L) {
		if (!_lg_typecheck_setDefault_encoding(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPreferences::default_encoding(Awesomium::WebString value) function, expected prototype:\nvoid Awesomium::WebPreferences::default_encoding(Awesomium::WebString value)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string value_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString value = Awesomium::ToWebString(value_str);

		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebPreferences::default_encoding(Awesomium::WebString). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		self->default_encoding = value;

		return 0;
	}

	// void Awesomium::WebPreferences::shrink_standalone_images_to_fit(bool value)
	static int _bind_setShrink_standalone_images_to_fit(lua_State *L) {
		if (!_lg_typecheck_setShrink_standalone_images_to_fit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPreferences::shrink_standalone_images_to_fit(bool value) function, expected prototype:\nvoid Awesomium::WebPreferences::shrink_standalone_images_to_fit(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebPreferences::shrink_standalone_images_to_fit(bool). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		self->shrink_standalone_images_to_fit = value;

		return 0;
	}

	// void Awesomium::WebPreferences::load_images_automatically(bool value)
	static int _bind_setLoad_images_automatically(lua_State *L) {
		if (!_lg_typecheck_setLoad_images_automatically(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPreferences::load_images_automatically(bool value) function, expected prototype:\nvoid Awesomium::WebPreferences::load_images_automatically(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebPreferences::load_images_automatically(bool). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		self->load_images_automatically = value;

		return 0;
	}

	// void Awesomium::WebPreferences::allow_scripts_to_open_windows(bool value)
	static int _bind_setAllow_scripts_to_open_windows(lua_State *L) {
		if (!_lg_typecheck_setAllow_scripts_to_open_windows(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPreferences::allow_scripts_to_open_windows(bool value) function, expected prototype:\nvoid Awesomium::WebPreferences::allow_scripts_to_open_windows(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebPreferences::allow_scripts_to_open_windows(bool). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		self->allow_scripts_to_open_windows = value;

		return 0;
	}

	// void Awesomium::WebPreferences::allow_scripts_to_close_windows(bool value)
	static int _bind_setAllow_scripts_to_close_windows(lua_State *L) {
		if (!_lg_typecheck_setAllow_scripts_to_close_windows(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPreferences::allow_scripts_to_close_windows(bool value) function, expected prototype:\nvoid Awesomium::WebPreferences::allow_scripts_to_close_windows(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebPreferences::allow_scripts_to_close_windows(bool). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		self->allow_scripts_to_close_windows = value;

		return 0;
	}

	// void Awesomium::WebPreferences::allow_scripts_to_access_clipboard(bool value)
	static int _bind_setAllow_scripts_to_access_clipboard(lua_State *L) {
		if (!_lg_typecheck_setAllow_scripts_to_access_clipboard(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPreferences::allow_scripts_to_access_clipboard(bool value) function, expected prototype:\nvoid Awesomium::WebPreferences::allow_scripts_to_access_clipboard(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebPreferences::allow_scripts_to_access_clipboard(bool). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		self->allow_scripts_to_access_clipboard = value;

		return 0;
	}

	// void Awesomium::WebPreferences::allow_universal_access_from_file_url(bool value)
	static int _bind_setAllow_universal_access_from_file_url(lua_State *L) {
		if (!_lg_typecheck_setAllow_universal_access_from_file_url(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPreferences::allow_universal_access_from_file_url(bool value) function, expected prototype:\nvoid Awesomium::WebPreferences::allow_universal_access_from_file_url(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebPreferences::allow_universal_access_from_file_url(bool). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		self->allow_universal_access_from_file_url = value;

		return 0;
	}

	// void Awesomium::WebPreferences::allow_file_access_from_file_url(bool value)
	static int _bind_setAllow_file_access_from_file_url(lua_State *L) {
		if (!_lg_typecheck_setAllow_file_access_from_file_url(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPreferences::allow_file_access_from_file_url(bool value) function, expected prototype:\nvoid Awesomium::WebPreferences::allow_file_access_from_file_url(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebPreferences::allow_file_access_from_file_url(bool). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		self->allow_file_access_from_file_url = value;

		return 0;
	}

	// void Awesomium::WebPreferences::allow_running_insecure_content(bool value)
	static int _bind_setAllow_running_insecure_content(lua_State *L) {
		if (!_lg_typecheck_setAllow_running_insecure_content(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPreferences::allow_running_insecure_content(bool value) function, expected prototype:\nvoid Awesomium::WebPreferences::allow_running_insecure_content(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		Awesomium::WebPreferences* self=(Luna< Awesomium::WebPreferences >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebPreferences::allow_running_insecure_content(bool). Got : '%s'",typeid(Luna< Awesomium::WebPreferences >::check(L,1)).name());
		}
		self->allow_running_insecure_content = value;

		return 0;
	}


	// Operator binds:

};

Awesomium::WebPreferences* LunaTraits< Awesomium::WebPreferences >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_WebPreferences::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< Awesomium::WebPreferences >::_bind_dtor(Awesomium::WebPreferences* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::WebPreferences >::className[] = "WebPreferences";
const char LunaTraits< Awesomium::WebPreferences >::fullName[] = "Awesomium::WebPreferences";
const char LunaTraits< Awesomium::WebPreferences >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebPreferences >::parents[] = {0};
const int LunaTraits< Awesomium::WebPreferences >::hash = 51772222;
const int LunaTraits< Awesomium::WebPreferences >::uniqueIDs[] = {51772222,0};

luna_RegType LunaTraits< Awesomium::WebPreferences >::methods[] = {
	{"useWebGL", &luna_wrapper_Awesomium_WebPreferences::_bind_useWebGL},
	{"getEnable_javascript", &luna_wrapper_Awesomium_WebPreferences::_bind_getEnable_javascript},
	{"getEnable_dart", &luna_wrapper_Awesomium_WebPreferences::_bind_getEnable_dart},
	{"getEnable_plugins", &luna_wrapper_Awesomium_WebPreferences::_bind_getEnable_plugins},
	{"getEnable_local_storage", &luna_wrapper_Awesomium_WebPreferences::_bind_getEnable_local_storage},
	{"getEnable_databases", &luna_wrapper_Awesomium_WebPreferences::_bind_getEnable_databases},
	{"getEnable_app_cache", &luna_wrapper_Awesomium_WebPreferences::_bind_getEnable_app_cache},
	{"getEnable_web_audio", &luna_wrapper_Awesomium_WebPreferences::_bind_getEnable_web_audio},
	{"getEnable_web_gl", &luna_wrapper_Awesomium_WebPreferences::_bind_getEnable_web_gl},
	{"getEnable_web_security", &luna_wrapper_Awesomium_WebPreferences::_bind_getEnable_web_security},
	{"getEnable_remote_fonts", &luna_wrapper_Awesomium_WebPreferences::_bind_getEnable_remote_fonts},
	{"getEnable_smooth_scrolling", &luna_wrapper_Awesomium_WebPreferences::_bind_getEnable_smooth_scrolling},
	{"getEnable_gpu_acceleration", &luna_wrapper_Awesomium_WebPreferences::_bind_getEnable_gpu_acceleration},
	{"getUser_stylesheet", &luna_wrapper_Awesomium_WebPreferences::_bind_getUser_stylesheet},
	{"getProxy_config", &luna_wrapper_Awesomium_WebPreferences::_bind_getProxy_config},
	{"getAccept_language", &luna_wrapper_Awesomium_WebPreferences::_bind_getAccept_language},
	{"getAccept_charset", &luna_wrapper_Awesomium_WebPreferences::_bind_getAccept_charset},
	{"getDefault_encoding", &luna_wrapper_Awesomium_WebPreferences::_bind_getDefault_encoding},
	{"getShrink_standalone_images_to_fit", &luna_wrapper_Awesomium_WebPreferences::_bind_getShrink_standalone_images_to_fit},
	{"getLoad_images_automatically", &luna_wrapper_Awesomium_WebPreferences::_bind_getLoad_images_automatically},
	{"getAllow_scripts_to_open_windows", &luna_wrapper_Awesomium_WebPreferences::_bind_getAllow_scripts_to_open_windows},
	{"getAllow_scripts_to_close_windows", &luna_wrapper_Awesomium_WebPreferences::_bind_getAllow_scripts_to_close_windows},
	{"getAllow_scripts_to_access_clipboard", &luna_wrapper_Awesomium_WebPreferences::_bind_getAllow_scripts_to_access_clipboard},
	{"getAllow_universal_access_from_file_url", &luna_wrapper_Awesomium_WebPreferences::_bind_getAllow_universal_access_from_file_url},
	{"getAllow_file_access_from_file_url", &luna_wrapper_Awesomium_WebPreferences::_bind_getAllow_file_access_from_file_url},
	{"getAllow_running_insecure_content", &luna_wrapper_Awesomium_WebPreferences::_bind_getAllow_running_insecure_content},
	{"setEnable_javascript", &luna_wrapper_Awesomium_WebPreferences::_bind_setEnable_javascript},
	{"setEnable_dart", &luna_wrapper_Awesomium_WebPreferences::_bind_setEnable_dart},
	{"setEnable_plugins", &luna_wrapper_Awesomium_WebPreferences::_bind_setEnable_plugins},
	{"setEnable_local_storage", &luna_wrapper_Awesomium_WebPreferences::_bind_setEnable_local_storage},
	{"setEnable_databases", &luna_wrapper_Awesomium_WebPreferences::_bind_setEnable_databases},
	{"setEnable_app_cache", &luna_wrapper_Awesomium_WebPreferences::_bind_setEnable_app_cache},
	{"setEnable_web_audio", &luna_wrapper_Awesomium_WebPreferences::_bind_setEnable_web_audio},
	{"setEnable_web_gl", &luna_wrapper_Awesomium_WebPreferences::_bind_setEnable_web_gl},
	{"setEnable_web_security", &luna_wrapper_Awesomium_WebPreferences::_bind_setEnable_web_security},
	{"setEnable_remote_fonts", &luna_wrapper_Awesomium_WebPreferences::_bind_setEnable_remote_fonts},
	{"setEnable_smooth_scrolling", &luna_wrapper_Awesomium_WebPreferences::_bind_setEnable_smooth_scrolling},
	{"setEnable_gpu_acceleration", &luna_wrapper_Awesomium_WebPreferences::_bind_setEnable_gpu_acceleration},
	{"setUser_stylesheet", &luna_wrapper_Awesomium_WebPreferences::_bind_setUser_stylesheet},
	{"setProxy_config", &luna_wrapper_Awesomium_WebPreferences::_bind_setProxy_config},
	{"setAccept_language", &luna_wrapper_Awesomium_WebPreferences::_bind_setAccept_language},
	{"setAccept_charset", &luna_wrapper_Awesomium_WebPreferences::_bind_setAccept_charset},
	{"setDefault_encoding", &luna_wrapper_Awesomium_WebPreferences::_bind_setDefault_encoding},
	{"setShrink_standalone_images_to_fit", &luna_wrapper_Awesomium_WebPreferences::_bind_setShrink_standalone_images_to_fit},
	{"setLoad_images_automatically", &luna_wrapper_Awesomium_WebPreferences::_bind_setLoad_images_automatically},
	{"setAllow_scripts_to_open_windows", &luna_wrapper_Awesomium_WebPreferences::_bind_setAllow_scripts_to_open_windows},
	{"setAllow_scripts_to_close_windows", &luna_wrapper_Awesomium_WebPreferences::_bind_setAllow_scripts_to_close_windows},
	{"setAllow_scripts_to_access_clipboard", &luna_wrapper_Awesomium_WebPreferences::_bind_setAllow_scripts_to_access_clipboard},
	{"setAllow_universal_access_from_file_url", &luna_wrapper_Awesomium_WebPreferences::_bind_setAllow_universal_access_from_file_url},
	{"setAllow_file_access_from_file_url", &luna_wrapper_Awesomium_WebPreferences::_bind_setAllow_file_access_from_file_url},
	{"setAllow_running_insecure_content", &luna_wrapper_Awesomium_WebPreferences::_bind_setAllow_running_insecure_content},
	{"dynCast", &luna_wrapper_Awesomium_WebPreferences::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_WebPreferences::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebPreferences >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebPreferences >::enumValues[] = {
	{0,0}
};



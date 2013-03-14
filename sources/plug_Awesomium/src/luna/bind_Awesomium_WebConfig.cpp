#include <plug_common.h>

class luna_wrapper_Awesomium_WebConfig {
public:
	typedef Luna< Awesomium::WebConfig > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,51132402) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::WebConfig*)");
		}

		Awesomium::WebConfig* rhs =(Luna< Awesomium::WebConfig >::check(L,2));
		Awesomium::WebConfig* self=(Luna< Awesomium::WebConfig >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		Awesomium::WebConfig* self= (Awesomium::WebConfig*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< Awesomium::WebConfig >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,51132402) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< Awesomium::WebConfig >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
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

		Awesomium::WebConfig* self=(Luna< Awesomium::WebConfig >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebConfig");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebConfig",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_addAdditionalOption(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,51132402)) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_log_level(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_package_path(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_plugin_path(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_log_path(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_child_process_path(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_user_agent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_remote_debugging_port(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_additional_options(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_log_level(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_package_path(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13938525) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_plugin_path(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13938525) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_log_path(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13938525) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_child_process_path(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13938525) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_user_agent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13938525) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_remote_debugging_port(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_additional_options(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,16354805) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// Awesomium::WebConfig::WebConfig()
	static Awesomium::WebConfig* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebConfig::WebConfig() function, expected prototype:\nAwesomium::WebConfig::WebConfig()\nClass arguments details:\n");
		}


		return new Awesomium::WebConfig();
	}


	// Function binds:
	// void Awesomium::WebConfig::addAdditionalOption(Awesomium::WebConfig * config, std::string & option)
	static int _bind_addAdditionalOption(lua_State *L) {
		if (!_lg_typecheck_addAdditionalOption(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebConfig::addAdditionalOption(Awesomium::WebConfig * config, std::string & option) function, expected prototype:\nvoid Awesomium::WebConfig::addAdditionalOption(Awesomium::WebConfig * config, std::string & option)\nClass arguments details:\narg 1 ID = 51132402\n");
		}

		Awesomium::WebConfig* config=(Luna< Awesomium::WebConfig >::check(L,1));
		std::string option(lua_tostring(L,2),lua_objlen(L,2));

		addAdditionalOption(config, option);

		return 0;
	}

	// Awesomium::LogLevel Awesomium::WebConfig::log_level()
	static int _bind_get_log_level(lua_State *L) {
		if (!_lg_typecheck_get_log_level(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::LogLevel Awesomium::WebConfig::log_level() function, expected prototype:\nAwesomium::LogLevel Awesomium::WebConfig::log_level()\nClass arguments details:\n");
		}


		Awesomium::WebConfig* self=(Luna< Awesomium::WebConfig >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::LogLevel Awesomium::WebConfig::log_level(). Got : '%s'",typeid(Luna< Awesomium::WebConfig >::check(L,1)).name());
		}
		Awesomium::LogLevel lret = self->log_level;
		lua_pushnumber(L,lret);

		return 1;
	}

	// Awesomium::WebString Awesomium::WebConfig::package_path()
	static int _bind_get_package_path(lua_State *L) {
		if (!_lg_typecheck_get_package_path(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebConfig::package_path() function, expected prototype:\nAwesomium::WebString Awesomium::WebConfig::package_path()\nClass arguments details:\n");
		}


		Awesomium::WebConfig* self=(Luna< Awesomium::WebConfig >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebConfig::package_path(). Got : '%s'",typeid(Luna< Awesomium::WebConfig >::check(L,1)).name());
		}
		Awesomium::WebString lret = self->package_path;
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// Awesomium::WebString Awesomium::WebConfig::plugin_path()
	static int _bind_get_plugin_path(lua_State *L) {
		if (!_lg_typecheck_get_plugin_path(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebConfig::plugin_path() function, expected prototype:\nAwesomium::WebString Awesomium::WebConfig::plugin_path()\nClass arguments details:\n");
		}


		Awesomium::WebConfig* self=(Luna< Awesomium::WebConfig >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebConfig::plugin_path(). Got : '%s'",typeid(Luna< Awesomium::WebConfig >::check(L,1)).name());
		}
		Awesomium::WebString lret = self->plugin_path;
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// Awesomium::WebString Awesomium::WebConfig::log_path()
	static int _bind_get_log_path(lua_State *L) {
		if (!_lg_typecheck_get_log_path(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebConfig::log_path() function, expected prototype:\nAwesomium::WebString Awesomium::WebConfig::log_path()\nClass arguments details:\n");
		}


		Awesomium::WebConfig* self=(Luna< Awesomium::WebConfig >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebConfig::log_path(). Got : '%s'",typeid(Luna< Awesomium::WebConfig >::check(L,1)).name());
		}
		Awesomium::WebString lret = self->log_path;
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// Awesomium::WebString Awesomium::WebConfig::child_process_path()
	static int _bind_get_child_process_path(lua_State *L) {
		if (!_lg_typecheck_get_child_process_path(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebConfig::child_process_path() function, expected prototype:\nAwesomium::WebString Awesomium::WebConfig::child_process_path()\nClass arguments details:\n");
		}


		Awesomium::WebConfig* self=(Luna< Awesomium::WebConfig >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebConfig::child_process_path(). Got : '%s'",typeid(Luna< Awesomium::WebConfig >::check(L,1)).name());
		}
		Awesomium::WebString lret = self->child_process_path;
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// Awesomium::WebString Awesomium::WebConfig::user_agent()
	static int _bind_get_user_agent(lua_State *L) {
		if (!_lg_typecheck_get_user_agent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebConfig::user_agent() function, expected prototype:\nAwesomium::WebString Awesomium::WebConfig::user_agent()\nClass arguments details:\n");
		}


		Awesomium::WebConfig* self=(Luna< Awesomium::WebConfig >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebConfig::user_agent(). Got : '%s'",typeid(Luna< Awesomium::WebConfig >::check(L,1)).name());
		}
		Awesomium::WebString lret = self->user_agent;
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// int Awesomium::WebConfig::remote_debugging_port()
	static int _bind_get_remote_debugging_port(lua_State *L) {
		if (!_lg_typecheck_get_remote_debugging_port(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int Awesomium::WebConfig::remote_debugging_port() function, expected prototype:\nint Awesomium::WebConfig::remote_debugging_port()\nClass arguments details:\n");
		}


		Awesomium::WebConfig* self=(Luna< Awesomium::WebConfig >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int Awesomium::WebConfig::remote_debugging_port(). Got : '%s'",typeid(Luna< Awesomium::WebConfig >::check(L,1)).name());
		}
		int lret = self->remote_debugging_port;
		lua_pushnumber(L,lret);

		return 1;
	}

	// Awesomium::WebStringArray Awesomium::WebConfig::additional_options()
	static int _bind_get_additional_options(lua_State *L) {
		if (!_lg_typecheck_get_additional_options(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebStringArray Awesomium::WebConfig::additional_options() function, expected prototype:\nAwesomium::WebStringArray Awesomium::WebConfig::additional_options()\nClass arguments details:\n");
		}


		Awesomium::WebConfig* self=(Luna< Awesomium::WebConfig >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebStringArray Awesomium::WebConfig::additional_options(). Got : '%s'",typeid(Luna< Awesomium::WebConfig >::check(L,1)).name());
		}
		const Awesomium::WebStringArray* lret = &self->additional_options;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebStringArray >::push(L,lret,false);

		return 1;
	}

	// void Awesomium::WebConfig::log_level(Awesomium::LogLevel value)
	static int _bind_set_log_level(lua_State *L) {
		if (!_lg_typecheck_set_log_level(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebConfig::log_level(Awesomium::LogLevel value) function, expected prototype:\nvoid Awesomium::WebConfig::log_level(Awesomium::LogLevel value)\nClass arguments details:\n");
		}

		Awesomium::LogLevel value=(Awesomium::LogLevel)lua_tointeger(L,2);

		Awesomium::WebConfig* self=(Luna< Awesomium::WebConfig >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebConfig::log_level(Awesomium::LogLevel). Got : '%s'",typeid(Luna< Awesomium::WebConfig >::check(L,1)).name());
		}
		self->log_level = value;

		return 0;
	}

	// void Awesomium::WebConfig::package_path(Awesomium::WebString value)
	static int _bind_set_package_path(lua_State *L) {
		if (!_lg_typecheck_set_package_path(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebConfig::package_path(Awesomium::WebString value) function, expected prototype:\nvoid Awesomium::WebConfig::package_path(Awesomium::WebString value)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string value_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString value = Awesomium::ToWebString(value_str);

		Awesomium::WebConfig* self=(Luna< Awesomium::WebConfig >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebConfig::package_path(Awesomium::WebString). Got : '%s'",typeid(Luna< Awesomium::WebConfig >::check(L,1)).name());
		}
		self->package_path = value;

		return 0;
	}

	// void Awesomium::WebConfig::plugin_path(Awesomium::WebString value)
	static int _bind_set_plugin_path(lua_State *L) {
		if (!_lg_typecheck_set_plugin_path(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebConfig::plugin_path(Awesomium::WebString value) function, expected prototype:\nvoid Awesomium::WebConfig::plugin_path(Awesomium::WebString value)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string value_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString value = Awesomium::ToWebString(value_str);

		Awesomium::WebConfig* self=(Luna< Awesomium::WebConfig >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebConfig::plugin_path(Awesomium::WebString). Got : '%s'",typeid(Luna< Awesomium::WebConfig >::check(L,1)).name());
		}
		self->plugin_path = value;

		return 0;
	}

	// void Awesomium::WebConfig::log_path(Awesomium::WebString value)
	static int _bind_set_log_path(lua_State *L) {
		if (!_lg_typecheck_set_log_path(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebConfig::log_path(Awesomium::WebString value) function, expected prototype:\nvoid Awesomium::WebConfig::log_path(Awesomium::WebString value)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string value_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString value = Awesomium::ToWebString(value_str);

		Awesomium::WebConfig* self=(Luna< Awesomium::WebConfig >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebConfig::log_path(Awesomium::WebString). Got : '%s'",typeid(Luna< Awesomium::WebConfig >::check(L,1)).name());
		}
		self->log_path = value;

		return 0;
	}

	// void Awesomium::WebConfig::child_process_path(Awesomium::WebString value)
	static int _bind_set_child_process_path(lua_State *L) {
		if (!_lg_typecheck_set_child_process_path(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebConfig::child_process_path(Awesomium::WebString value) function, expected prototype:\nvoid Awesomium::WebConfig::child_process_path(Awesomium::WebString value)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string value_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString value = Awesomium::ToWebString(value_str);

		Awesomium::WebConfig* self=(Luna< Awesomium::WebConfig >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebConfig::child_process_path(Awesomium::WebString). Got : '%s'",typeid(Luna< Awesomium::WebConfig >::check(L,1)).name());
		}
		self->child_process_path = value;

		return 0;
	}

	// void Awesomium::WebConfig::user_agent(Awesomium::WebString value)
	static int _bind_set_user_agent(lua_State *L) {
		if (!_lg_typecheck_set_user_agent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebConfig::user_agent(Awesomium::WebString value) function, expected prototype:\nvoid Awesomium::WebConfig::user_agent(Awesomium::WebString value)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string value_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString value = Awesomium::ToWebString(value_str);

		Awesomium::WebConfig* self=(Luna< Awesomium::WebConfig >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebConfig::user_agent(Awesomium::WebString). Got : '%s'",typeid(Luna< Awesomium::WebConfig >::check(L,1)).name());
		}
		self->user_agent = value;

		return 0;
	}

	// void Awesomium::WebConfig::remote_debugging_port(int value)
	static int _bind_set_remote_debugging_port(lua_State *L) {
		if (!_lg_typecheck_set_remote_debugging_port(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebConfig::remote_debugging_port(int value) function, expected prototype:\nvoid Awesomium::WebConfig::remote_debugging_port(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		Awesomium::WebConfig* self=(Luna< Awesomium::WebConfig >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebConfig::remote_debugging_port(int). Got : '%s'",typeid(Luna< Awesomium::WebConfig >::check(L,1)).name());
		}
		self->remote_debugging_port = value;

		return 0;
	}

	// void Awesomium::WebConfig::additional_options(Awesomium::WebStringArray value)
	static int _bind_set_additional_options(lua_State *L) {
		if (!_lg_typecheck_set_additional_options(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebConfig::additional_options(Awesomium::WebStringArray value) function, expected prototype:\nvoid Awesomium::WebConfig::additional_options(Awesomium::WebStringArray value)\nClass arguments details:\narg 1 ID = 16354805\n");
		}

		Awesomium::WebStringArray* value_ptr=(Luna< Awesomium::WebStringArray >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in Awesomium::WebConfig::additional_options function");
		}
		Awesomium::WebStringArray value=*value_ptr;

		Awesomium::WebConfig* self=(Luna< Awesomium::WebConfig >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebConfig::additional_options(Awesomium::WebStringArray). Got : '%s'",typeid(Luna< Awesomium::WebConfig >::check(L,1)).name());
		}
		self->additional_options = value;

		return 0;
	}


	// Operator binds:

};

Awesomium::WebConfig* LunaTraits< Awesomium::WebConfig >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_WebConfig::_bind_ctor(L);
}

void LunaTraits< Awesomium::WebConfig >::_bind_dtor(Awesomium::WebConfig* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::WebConfig >::className[] = "WebConfig";
const char LunaTraits< Awesomium::WebConfig >::fullName[] = "Awesomium::WebConfig";
const char LunaTraits< Awesomium::WebConfig >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebConfig >::parents[] = {0};
const int LunaTraits< Awesomium::WebConfig >::hash = 51132402;
const int LunaTraits< Awesomium::WebConfig >::uniqueIDs[] = {51132402,0};

luna_RegType LunaTraits< Awesomium::WebConfig >::methods[] = {
	{"addAdditionalOption", &luna_wrapper_Awesomium_WebConfig::_bind_addAdditionalOption},
	{"get_log_level", &luna_wrapper_Awesomium_WebConfig::_bind_get_log_level},
	{"get_package_path", &luna_wrapper_Awesomium_WebConfig::_bind_get_package_path},
	{"get_plugin_path", &luna_wrapper_Awesomium_WebConfig::_bind_get_plugin_path},
	{"get_log_path", &luna_wrapper_Awesomium_WebConfig::_bind_get_log_path},
	{"get_child_process_path", &luna_wrapper_Awesomium_WebConfig::_bind_get_child_process_path},
	{"get_user_agent", &luna_wrapper_Awesomium_WebConfig::_bind_get_user_agent},
	{"get_remote_debugging_port", &luna_wrapper_Awesomium_WebConfig::_bind_get_remote_debugging_port},
	{"get_additional_options", &luna_wrapper_Awesomium_WebConfig::_bind_get_additional_options},
	{"set_log_level", &luna_wrapper_Awesomium_WebConfig::_bind_set_log_level},
	{"set_package_path", &luna_wrapper_Awesomium_WebConfig::_bind_set_package_path},
	{"set_plugin_path", &luna_wrapper_Awesomium_WebConfig::_bind_set_plugin_path},
	{"set_log_path", &luna_wrapper_Awesomium_WebConfig::_bind_set_log_path},
	{"set_child_process_path", &luna_wrapper_Awesomium_WebConfig::_bind_set_child_process_path},
	{"set_user_agent", &luna_wrapper_Awesomium_WebConfig::_bind_set_user_agent},
	{"set_remote_debugging_port", &luna_wrapper_Awesomium_WebConfig::_bind_set_remote_debugging_port},
	{"set_additional_options", &luna_wrapper_Awesomium_WebConfig::_bind_set_additional_options},
	{"dynCast", &luna_wrapper_Awesomium_WebConfig::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_WebConfig::_bind___eq},
	{"fromVoid", &luna_wrapper_Awesomium_WebConfig::_bind_fromVoid},
	{"asVoid", &luna_wrapper_Awesomium_WebConfig::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebConfig >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebConfig >::enumValues[] = {
	{0,0}
};



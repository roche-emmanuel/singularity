#include <plug_common.h>

class luna_wrapper_Awesomium_WebLoginDialogInfo {
public:
	typedef Luna< Awesomium::WebLoginDialogInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,90938304) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::WebLoginDialogInfo*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebLoginDialogInfo* rhs =(Luna< Awesomium::WebLoginDialogInfo >::check(L,2));
		Awesomium::WebLoginDialogInfo* self=(Luna< Awesomium::WebLoginDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebLoginDialogInfo* self= (Awesomium::WebLoginDialogInfo*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< Awesomium::WebLoginDialogInfo >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,90938304) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< Awesomium::WebLoginDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		Awesomium::WebLoginDialogInfo* self=(Luna< Awesomium::WebLoginDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebLoginDialogInfo");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebLoginDialogInfo",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_get_request_id(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_request_url(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_is_proxy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHost(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPort(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getScheme(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRealm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_request_id(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_request_url(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13938525) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_is_proxy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHost(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13938525) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPort(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setScheme(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13938525) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRealm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13938525) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// int Awesomium::WebLoginDialogInfo::request_id()
	static int _bind_get_request_id(lua_State *L) {
		if (!_lg_typecheck_get_request_id(L)) {
			luaL_error(L, "luna typecheck failed in int Awesomium::WebLoginDialogInfo::request_id() function, expected prototype:\nint Awesomium::WebLoginDialogInfo::request_id()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Awesomium::WebLoginDialogInfo* self=(Luna< Awesomium::WebLoginDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int Awesomium::WebLoginDialogInfo::request_id(). Got : '%s'\n%s",typeid(Luna< Awesomium::WebLoginDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->request_id;
		lua_pushnumber(L,lret);

		return 1;
	}

	// Awesomium::WebString Awesomium::WebLoginDialogInfo::request_url()
	static int _bind_get_request_url(lua_State *L) {
		if (!_lg_typecheck_get_request_url(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebLoginDialogInfo::request_url() function, expected prototype:\nAwesomium::WebString Awesomium::WebLoginDialogInfo::request_url()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Awesomium::WebLoginDialogInfo* self=(Luna< Awesomium::WebLoginDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebLoginDialogInfo::request_url(). Got : '%s'\n%s",typeid(Luna< Awesomium::WebLoginDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		Awesomium::WebString lret = self->request_url;
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// bool Awesomium::WebLoginDialogInfo::is_proxy()
	static int _bind_get_is_proxy(lua_State *L) {
		if (!_lg_typecheck_get_is_proxy(L)) {
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebLoginDialogInfo::is_proxy() function, expected prototype:\nbool Awesomium::WebLoginDialogInfo::is_proxy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Awesomium::WebLoginDialogInfo* self=(Luna< Awesomium::WebLoginDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool Awesomium::WebLoginDialogInfo::is_proxy(). Got : '%s'\n%s",typeid(Luna< Awesomium::WebLoginDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->is_proxy;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Awesomium::WebString Awesomium::WebLoginDialogInfo::host()
	static int _bind_getHost(lua_State *L) {
		if (!_lg_typecheck_getHost(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebLoginDialogInfo::host() function, expected prototype:\nAwesomium::WebString Awesomium::WebLoginDialogInfo::host()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Awesomium::WebLoginDialogInfo* self=(Luna< Awesomium::WebLoginDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebLoginDialogInfo::host(). Got : '%s'\n%s",typeid(Luna< Awesomium::WebLoginDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		Awesomium::WebString lret = self->host;
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// unsigned short Awesomium::WebLoginDialogInfo::port()
	static int _bind_getPort(lua_State *L) {
		if (!_lg_typecheck_getPort(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short Awesomium::WebLoginDialogInfo::port() function, expected prototype:\nunsigned short Awesomium::WebLoginDialogInfo::port()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Awesomium::WebLoginDialogInfo* self=(Luna< Awesomium::WebLoginDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short Awesomium::WebLoginDialogInfo::port(). Got : '%s'\n%s",typeid(Luna< Awesomium::WebLoginDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short lret = self->port;
		lua_pushnumber(L,lret);

		return 1;
	}

	// Awesomium::WebString Awesomium::WebLoginDialogInfo::scheme()
	static int _bind_getScheme(lua_State *L) {
		if (!_lg_typecheck_getScheme(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebLoginDialogInfo::scheme() function, expected prototype:\nAwesomium::WebString Awesomium::WebLoginDialogInfo::scheme()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Awesomium::WebLoginDialogInfo* self=(Luna< Awesomium::WebLoginDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebLoginDialogInfo::scheme(). Got : '%s'\n%s",typeid(Luna< Awesomium::WebLoginDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		Awesomium::WebString lret = self->scheme;
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// Awesomium::WebString Awesomium::WebLoginDialogInfo::realm()
	static int _bind_getRealm(lua_State *L) {
		if (!_lg_typecheck_getRealm(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebLoginDialogInfo::realm() function, expected prototype:\nAwesomium::WebString Awesomium::WebLoginDialogInfo::realm()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Awesomium::WebLoginDialogInfo* self=(Luna< Awesomium::WebLoginDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebLoginDialogInfo::realm(). Got : '%s'\n%s",typeid(Luna< Awesomium::WebLoginDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		Awesomium::WebString lret = self->realm;
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// void Awesomium::WebLoginDialogInfo::request_id(int value)
	static int _bind_set_request_id(lua_State *L) {
		if (!_lg_typecheck_set_request_id(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::WebLoginDialogInfo::request_id(int value) function, expected prototype:\nvoid Awesomium::WebLoginDialogInfo::request_id(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		Awesomium::WebLoginDialogInfo* self=(Luna< Awesomium::WebLoginDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::WebLoginDialogInfo::request_id(int). Got : '%s'\n%s",typeid(Luna< Awesomium::WebLoginDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->request_id = value;

		return 0;
	}

	// void Awesomium::WebLoginDialogInfo::request_url(Awesomium::WebString value)
	static int _bind_set_request_url(lua_State *L) {
		if (!_lg_typecheck_set_request_url(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::WebLoginDialogInfo::request_url(Awesomium::WebString value) function, expected prototype:\nvoid Awesomium::WebLoginDialogInfo::request_url(Awesomium::WebString value)\nClass arguments details:\narg 1 ID = 13938525\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string value_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString value = Awesomium::ToWebString(value_str);

		Awesomium::WebLoginDialogInfo* self=(Luna< Awesomium::WebLoginDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::WebLoginDialogInfo::request_url(Awesomium::WebString). Got : '%s'\n%s",typeid(Luna< Awesomium::WebLoginDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->request_url = value;

		return 0;
	}

	// void Awesomium::WebLoginDialogInfo::is_proxy(bool value)
	static int _bind_set_is_proxy(lua_State *L) {
		if (!_lg_typecheck_set_is_proxy(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::WebLoginDialogInfo::is_proxy(bool value) function, expected prototype:\nvoid Awesomium::WebLoginDialogInfo::is_proxy(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		Awesomium::WebLoginDialogInfo* self=(Luna< Awesomium::WebLoginDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::WebLoginDialogInfo::is_proxy(bool). Got : '%s'\n%s",typeid(Luna< Awesomium::WebLoginDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->is_proxy = value;

		return 0;
	}

	// void Awesomium::WebLoginDialogInfo::host(Awesomium::WebString value)
	static int _bind_setHost(lua_State *L) {
		if (!_lg_typecheck_setHost(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::WebLoginDialogInfo::host(Awesomium::WebString value) function, expected prototype:\nvoid Awesomium::WebLoginDialogInfo::host(Awesomium::WebString value)\nClass arguments details:\narg 1 ID = 13938525\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string value_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString value = Awesomium::ToWebString(value_str);

		Awesomium::WebLoginDialogInfo* self=(Luna< Awesomium::WebLoginDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::WebLoginDialogInfo::host(Awesomium::WebString). Got : '%s'\n%s",typeid(Luna< Awesomium::WebLoginDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->host = value;

		return 0;
	}

	// void Awesomium::WebLoginDialogInfo::port(unsigned short value)
	static int _bind_setPort(lua_State *L) {
		if (!_lg_typecheck_setPort(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::WebLoginDialogInfo::port(unsigned short value) function, expected prototype:\nvoid Awesomium::WebLoginDialogInfo::port(unsigned short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		Awesomium::WebLoginDialogInfo* self=(Luna< Awesomium::WebLoginDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::WebLoginDialogInfo::port(unsigned short). Got : '%s'\n%s",typeid(Luna< Awesomium::WebLoginDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->port = value;

		return 0;
	}

	// void Awesomium::WebLoginDialogInfo::scheme(Awesomium::WebString value)
	static int _bind_setScheme(lua_State *L) {
		if (!_lg_typecheck_setScheme(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::WebLoginDialogInfo::scheme(Awesomium::WebString value) function, expected prototype:\nvoid Awesomium::WebLoginDialogInfo::scheme(Awesomium::WebString value)\nClass arguments details:\narg 1 ID = 13938525\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string value_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString value = Awesomium::ToWebString(value_str);

		Awesomium::WebLoginDialogInfo* self=(Luna< Awesomium::WebLoginDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::WebLoginDialogInfo::scheme(Awesomium::WebString). Got : '%s'\n%s",typeid(Luna< Awesomium::WebLoginDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->scheme = value;

		return 0;
	}

	// void Awesomium::WebLoginDialogInfo::realm(Awesomium::WebString value)
	static int _bind_setRealm(lua_State *L) {
		if (!_lg_typecheck_setRealm(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::WebLoginDialogInfo::realm(Awesomium::WebString value) function, expected prototype:\nvoid Awesomium::WebLoginDialogInfo::realm(Awesomium::WebString value)\nClass arguments details:\narg 1 ID = 13938525\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string value_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString value = Awesomium::ToWebString(value_str);

		Awesomium::WebLoginDialogInfo* self=(Luna< Awesomium::WebLoginDialogInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::WebLoginDialogInfo::realm(Awesomium::WebString). Got : '%s'\n%s",typeid(Luna< Awesomium::WebLoginDialogInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->realm = value;

		return 0;
	}


	// Operator binds:

};

Awesomium::WebLoginDialogInfo* LunaTraits< Awesomium::WebLoginDialogInfo >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< Awesomium::WebLoginDialogInfo >::_bind_dtor(Awesomium::WebLoginDialogInfo* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::WebLoginDialogInfo >::className[] = "WebLoginDialogInfo";
const char LunaTraits< Awesomium::WebLoginDialogInfo >::fullName[] = "Awesomium::WebLoginDialogInfo";
const char LunaTraits< Awesomium::WebLoginDialogInfo >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebLoginDialogInfo >::parents[] = {0};
const int LunaTraits< Awesomium::WebLoginDialogInfo >::hash = 90938304;
const int LunaTraits< Awesomium::WebLoginDialogInfo >::uniqueIDs[] = {90938304,0};

luna_RegType LunaTraits< Awesomium::WebLoginDialogInfo >::methods[] = {
	{"get_request_id", &luna_wrapper_Awesomium_WebLoginDialogInfo::_bind_get_request_id},
	{"get_request_url", &luna_wrapper_Awesomium_WebLoginDialogInfo::_bind_get_request_url},
	{"get_is_proxy", &luna_wrapper_Awesomium_WebLoginDialogInfo::_bind_get_is_proxy},
	{"getHost", &luna_wrapper_Awesomium_WebLoginDialogInfo::_bind_getHost},
	{"getPort", &luna_wrapper_Awesomium_WebLoginDialogInfo::_bind_getPort},
	{"getScheme", &luna_wrapper_Awesomium_WebLoginDialogInfo::_bind_getScheme},
	{"getRealm", &luna_wrapper_Awesomium_WebLoginDialogInfo::_bind_getRealm},
	{"set_request_id", &luna_wrapper_Awesomium_WebLoginDialogInfo::_bind_set_request_id},
	{"set_request_url", &luna_wrapper_Awesomium_WebLoginDialogInfo::_bind_set_request_url},
	{"set_is_proxy", &luna_wrapper_Awesomium_WebLoginDialogInfo::_bind_set_is_proxy},
	{"setHost", &luna_wrapper_Awesomium_WebLoginDialogInfo::_bind_setHost},
	{"setPort", &luna_wrapper_Awesomium_WebLoginDialogInfo::_bind_setPort},
	{"setScheme", &luna_wrapper_Awesomium_WebLoginDialogInfo::_bind_setScheme},
	{"setRealm", &luna_wrapper_Awesomium_WebLoginDialogInfo::_bind_setRealm},
	{"dynCast", &luna_wrapper_Awesomium_WebLoginDialogInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_WebLoginDialogInfo::_bind___eq},
	{"fromVoid", &luna_wrapper_Awesomium_WebLoginDialogInfo::_bind_fromVoid},
	{"asVoid", &luna_wrapper_Awesomium_WebLoginDialogInfo::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebLoginDialogInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebLoginDialogInfo >::enumValues[] = {
	{0,0}
};



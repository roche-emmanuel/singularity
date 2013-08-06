#include <plug_common.h>

class luna_wrapper_Awesomium_WebPageInfo {
public:
	typedef Luna< Awesomium::WebPageInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74820420) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::WebPageInfo*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebPageInfo* rhs =(Luna< Awesomium::WebPageInfo >::check(L,2));
		Awesomium::WebPageInfo* self=(Luna< Awesomium::WebPageInfo >::check(L,1));
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

		Awesomium::WebPageInfo* self= (Awesomium::WebPageInfo*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< Awesomium::WebPageInfo >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74820420) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< Awesomium::WebPageInfo >::check(L,1));
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
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		Awesomium::WebPageInfo* self=(Luna< Awesomium::WebPageInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebPageInfo");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebPageInfo",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_get_page_url(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_security_status(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_content_status(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_cert_error(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_cert_subject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_cert_issuer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_page_url(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3243885) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_security_status(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_content_status(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_cert_error(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_cert_subject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13938525) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_cert_issuer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13938525) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// Awesomium::WebURL Awesomium::WebPageInfo::page_url()
	static int _bind_get_page_url(lua_State *L) {
		if (!_lg_typecheck_get_page_url(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::WebURL Awesomium::WebPageInfo::page_url() function, expected prototype:\nAwesomium::WebURL Awesomium::WebPageInfo::page_url()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Awesomium::WebPageInfo* self=(Luna< Awesomium::WebPageInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call Awesomium::WebURL Awesomium::WebPageInfo::page_url(). Got : '%s'\n%s",typeid(Luna< Awesomium::WebPageInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const Awesomium::WebURL* lret = &self->page_url;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebURL >::push(L,lret,false);

		return 1;
	}

	// Awesomium::SecurityStatus Awesomium::WebPageInfo::security_status()
	static int _bind_get_security_status(lua_State *L) {
		if (!_lg_typecheck_get_security_status(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::SecurityStatus Awesomium::WebPageInfo::security_status() function, expected prototype:\nAwesomium::SecurityStatus Awesomium::WebPageInfo::security_status()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Awesomium::WebPageInfo* self=(Luna< Awesomium::WebPageInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call Awesomium::SecurityStatus Awesomium::WebPageInfo::security_status(). Got : '%s'\n%s",typeid(Luna< Awesomium::WebPageInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		Awesomium::SecurityStatus lret = self->security_status;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int Awesomium::WebPageInfo::content_status()
	static int _bind_get_content_status(lua_State *L) {
		if (!_lg_typecheck_get_content_status(L)) {
			luaL_error(L, "luna typecheck failed in int Awesomium::WebPageInfo::content_status() function, expected prototype:\nint Awesomium::WebPageInfo::content_status()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Awesomium::WebPageInfo* self=(Luna< Awesomium::WebPageInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int Awesomium::WebPageInfo::content_status(). Got : '%s'\n%s",typeid(Luna< Awesomium::WebPageInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->content_status;
		lua_pushnumber(L,lret);

		return 1;
	}

	// Awesomium::CertError Awesomium::WebPageInfo::cert_error()
	static int _bind_get_cert_error(lua_State *L) {
		if (!_lg_typecheck_get_cert_error(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::CertError Awesomium::WebPageInfo::cert_error() function, expected prototype:\nAwesomium::CertError Awesomium::WebPageInfo::cert_error()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Awesomium::WebPageInfo* self=(Luna< Awesomium::WebPageInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call Awesomium::CertError Awesomium::WebPageInfo::cert_error(). Got : '%s'\n%s",typeid(Luna< Awesomium::WebPageInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		Awesomium::CertError lret = self->cert_error;
		lua_pushnumber(L,lret);

		return 1;
	}

	// Awesomium::WebString Awesomium::WebPageInfo::cert_subject()
	static int _bind_get_cert_subject(lua_State *L) {
		if (!_lg_typecheck_get_cert_subject(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebPageInfo::cert_subject() function, expected prototype:\nAwesomium::WebString Awesomium::WebPageInfo::cert_subject()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Awesomium::WebPageInfo* self=(Luna< Awesomium::WebPageInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebPageInfo::cert_subject(). Got : '%s'\n%s",typeid(Luna< Awesomium::WebPageInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		Awesomium::WebString lret = self->cert_subject;
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// Awesomium::WebString Awesomium::WebPageInfo::cert_issuer()
	static int _bind_get_cert_issuer(lua_State *L) {
		if (!_lg_typecheck_get_cert_issuer(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebPageInfo::cert_issuer() function, expected prototype:\nAwesomium::WebString Awesomium::WebPageInfo::cert_issuer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Awesomium::WebPageInfo* self=(Luna< Awesomium::WebPageInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebPageInfo::cert_issuer(). Got : '%s'\n%s",typeid(Luna< Awesomium::WebPageInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		Awesomium::WebString lret = self->cert_issuer;
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// void Awesomium::WebPageInfo::page_url(Awesomium::WebURL value)
	static int _bind_set_page_url(lua_State *L) {
		if (!_lg_typecheck_set_page_url(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPageInfo::page_url(Awesomium::WebURL value) function, expected prototype:\nvoid Awesomium::WebPageInfo::page_url(Awesomium::WebURL value)\nClass arguments details:\narg 1 ID = 3243885\n\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebURL* value_ptr=(Luna< Awesomium::WebURL >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in Awesomium::WebPageInfo::page_url function");
		}
		Awesomium::WebURL value=*value_ptr;

		Awesomium::WebPageInfo* self=(Luna< Awesomium::WebPageInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::WebPageInfo::page_url(Awesomium::WebURL). Got : '%s'\n%s",typeid(Luna< Awesomium::WebPageInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->page_url = value;

		return 0;
	}

	// void Awesomium::WebPageInfo::security_status(Awesomium::SecurityStatus value)
	static int _bind_set_security_status(lua_State *L) {
		if (!_lg_typecheck_set_security_status(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPageInfo::security_status(Awesomium::SecurityStatus value) function, expected prototype:\nvoid Awesomium::WebPageInfo::security_status(Awesomium::SecurityStatus value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::SecurityStatus value=(Awesomium::SecurityStatus)lua_tointeger(L,2);

		Awesomium::WebPageInfo* self=(Luna< Awesomium::WebPageInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::WebPageInfo::security_status(Awesomium::SecurityStatus). Got : '%s'\n%s",typeid(Luna< Awesomium::WebPageInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->security_status = value;

		return 0;
	}

	// void Awesomium::WebPageInfo::content_status(int value)
	static int _bind_set_content_status(lua_State *L) {
		if (!_lg_typecheck_set_content_status(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPageInfo::content_status(int value) function, expected prototype:\nvoid Awesomium::WebPageInfo::content_status(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		Awesomium::WebPageInfo* self=(Luna< Awesomium::WebPageInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::WebPageInfo::content_status(int). Got : '%s'\n%s",typeid(Luna< Awesomium::WebPageInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->content_status = value;

		return 0;
	}

	// void Awesomium::WebPageInfo::cert_error(Awesomium::CertError value)
	static int _bind_set_cert_error(lua_State *L) {
		if (!_lg_typecheck_set_cert_error(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPageInfo::cert_error(Awesomium::CertError value) function, expected prototype:\nvoid Awesomium::WebPageInfo::cert_error(Awesomium::CertError value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::CertError value=(Awesomium::CertError)lua_tointeger(L,2);

		Awesomium::WebPageInfo* self=(Luna< Awesomium::WebPageInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::WebPageInfo::cert_error(Awesomium::CertError). Got : '%s'\n%s",typeid(Luna< Awesomium::WebPageInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->cert_error = value;

		return 0;
	}

	// void Awesomium::WebPageInfo::cert_subject(Awesomium::WebString value)
	static int _bind_set_cert_subject(lua_State *L) {
		if (!_lg_typecheck_set_cert_subject(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPageInfo::cert_subject(Awesomium::WebString value) function, expected prototype:\nvoid Awesomium::WebPageInfo::cert_subject(Awesomium::WebString value)\nClass arguments details:\narg 1 ID = 13938525\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string value_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString value = Awesomium::ToWebString(value_str);

		Awesomium::WebPageInfo* self=(Luna< Awesomium::WebPageInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::WebPageInfo::cert_subject(Awesomium::WebString). Got : '%s'\n%s",typeid(Luna< Awesomium::WebPageInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->cert_subject = value;

		return 0;
	}

	// void Awesomium::WebPageInfo::cert_issuer(Awesomium::WebString value)
	static int _bind_set_cert_issuer(lua_State *L) {
		if (!_lg_typecheck_set_cert_issuer(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::WebPageInfo::cert_issuer(Awesomium::WebString value) function, expected prototype:\nvoid Awesomium::WebPageInfo::cert_issuer(Awesomium::WebString value)\nClass arguments details:\narg 1 ID = 13938525\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string value_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString value = Awesomium::ToWebString(value_str);

		Awesomium::WebPageInfo* self=(Luna< Awesomium::WebPageInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::WebPageInfo::cert_issuer(Awesomium::WebString). Got : '%s'\n%s",typeid(Luna< Awesomium::WebPageInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->cert_issuer = value;

		return 0;
	}


	// Operator binds:

};

Awesomium::WebPageInfo* LunaTraits< Awesomium::WebPageInfo >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< Awesomium::WebPageInfo >::_bind_dtor(Awesomium::WebPageInfo* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::WebPageInfo >::className[] = "WebPageInfo";
const char LunaTraits< Awesomium::WebPageInfo >::fullName[] = "Awesomium::WebPageInfo";
const char LunaTraits< Awesomium::WebPageInfo >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebPageInfo >::parents[] = {0};
const int LunaTraits< Awesomium::WebPageInfo >::hash = 74820420;
const int LunaTraits< Awesomium::WebPageInfo >::uniqueIDs[] = {74820420,0};

luna_RegType LunaTraits< Awesomium::WebPageInfo >::methods[] = {
	{"get_page_url", &luna_wrapper_Awesomium_WebPageInfo::_bind_get_page_url},
	{"get_security_status", &luna_wrapper_Awesomium_WebPageInfo::_bind_get_security_status},
	{"get_content_status", &luna_wrapper_Awesomium_WebPageInfo::_bind_get_content_status},
	{"get_cert_error", &luna_wrapper_Awesomium_WebPageInfo::_bind_get_cert_error},
	{"get_cert_subject", &luna_wrapper_Awesomium_WebPageInfo::_bind_get_cert_subject},
	{"get_cert_issuer", &luna_wrapper_Awesomium_WebPageInfo::_bind_get_cert_issuer},
	{"set_page_url", &luna_wrapper_Awesomium_WebPageInfo::_bind_set_page_url},
	{"set_security_status", &luna_wrapper_Awesomium_WebPageInfo::_bind_set_security_status},
	{"set_content_status", &luna_wrapper_Awesomium_WebPageInfo::_bind_set_content_status},
	{"set_cert_error", &luna_wrapper_Awesomium_WebPageInfo::_bind_set_cert_error},
	{"set_cert_subject", &luna_wrapper_Awesomium_WebPageInfo::_bind_set_cert_subject},
	{"set_cert_issuer", &luna_wrapper_Awesomium_WebPageInfo::_bind_set_cert_issuer},
	{"dynCast", &luna_wrapper_Awesomium_WebPageInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_WebPageInfo::_bind___eq},
	{"fromVoid", &luna_wrapper_Awesomium_WebPageInfo::_bind_fromVoid},
	{"asVoid", &luna_wrapper_Awesomium_WebPageInfo::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebPageInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebPageInfo >::enumValues[] = {
	{0,0}
};



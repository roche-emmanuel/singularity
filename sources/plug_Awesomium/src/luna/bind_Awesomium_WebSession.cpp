#include <plug_common.h>

class luna_wrapper_Awesomium_WebSession {
public:
	typedef Luna< Awesomium::WebSession > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3873994) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::WebSession*)");
		}

		Awesomium::WebSession* rhs =(Luna< Awesomium::WebSession >::check(L,2));
		Awesomium::WebSession* self=(Luna< Awesomium::WebSession >::check(L,1));
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

		Awesomium::WebSession* self=(Luna< Awesomium::WebSession >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebSession");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebSession",name);
	}


	// Function checkers:
	inline static bool _lg_typecheck_Release(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOnDisk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_data_path(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_preferences(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AddDataSource(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isstring(L,2)==0) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,37218942)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCookie(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3243885) ) return false;
		if( (lua_isstring(L,3)==0) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ClearCookies(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void Awesomium::WebSession::Release() const
	static int _bind_Release(lua_State *L) {
		if (!_lg_typecheck_Release(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebSession::Release() const function, expected prototype:\nvoid Awesomium::WebSession::Release() const\nClass arguments details:\n");
		}


		Awesomium::WebSession* self=(Luna< Awesomium::WebSession >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebSession::Release() const");
		}
		self->Release();

		return 0;
	}

	// bool Awesomium::WebSession::IsOnDisk() const
	static int _bind_IsOnDisk(lua_State *L) {
		if (!_lg_typecheck_IsOnDisk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebSession::IsOnDisk() const function, expected prototype:\nbool Awesomium::WebSession::IsOnDisk() const\nClass arguments details:\n");
		}


		Awesomium::WebSession* self=(Luna< Awesomium::WebSession >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebSession::IsOnDisk() const");
		}
		bool lret = self->IsOnDisk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Awesomium::WebString Awesomium::WebSession::data_path() const
	static int _bind_data_path(lua_State *L) {
		if (!_lg_typecheck_data_path(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebSession::data_path() const function, expected prototype:\nAwesomium::WebString Awesomium::WebSession::data_path() const\nClass arguments details:\n");
		}


		Awesomium::WebSession* self=(Luna< Awesomium::WebSession >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebSession::data_path() const");
		}
		Awesomium::WebString stack_lret = self->data_path();
		Awesomium::WebString* lret = new Awesomium::WebString(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebString >::push(L,lret,true);

		return 1;
	}

	// const Awesomium::WebPreferences & Awesomium::WebSession::preferences() const
	static int _bind_preferences(lua_State *L) {
		if (!_lg_typecheck_preferences(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const Awesomium::WebPreferences & Awesomium::WebSession::preferences() const function, expected prototype:\nconst Awesomium::WebPreferences & Awesomium::WebSession::preferences() const\nClass arguments details:\n");
		}


		Awesomium::WebSession* self=(Luna< Awesomium::WebSession >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const Awesomium::WebPreferences & Awesomium::WebSession::preferences() const");
		}
		const Awesomium::WebPreferences* lret = &self->preferences();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebPreferences >::push(L,lret,false);

		return 1;
	}

	// void Awesomium::WebSession::AddDataSource(const Awesomium::WebString & asset_host, Awesomium::DataSource * source)
	static int _bind_AddDataSource(lua_State *L) {
		if (!_lg_typecheck_AddDataSource(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebSession::AddDataSource(const Awesomium::WebString & asset_host, Awesomium::DataSource * source) function, expected prototype:\nvoid Awesomium::WebSession::AddDataSource(const Awesomium::WebString & asset_host, Awesomium::DataSource * source)\nClass arguments details:\narg 1 ID = 13938525\narg 2 ID = 37218942\n");
		}

		std::string asset_host_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString asset_host = Awesomium::ToWebString(asset_host_str);
		Awesomium::DataSource* source=(Luna< Awesomium::DataSource >::check(L,3));

		Awesomium::WebSession* self=(Luna< Awesomium::WebSession >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebSession::AddDataSource(const Awesomium::WebString &, Awesomium::DataSource *)");
		}
		self->AddDataSource(asset_host, source);

		return 0;
	}

	// void Awesomium::WebSession::SetCookie(const Awesomium::WebURL & url, const Awesomium::WebString & cookie_string, bool is_http_only, bool force_session_cookie)
	static int _bind_SetCookie(lua_State *L) {
		if (!_lg_typecheck_SetCookie(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebSession::SetCookie(const Awesomium::WebURL & url, const Awesomium::WebString & cookie_string, bool is_http_only, bool force_session_cookie) function, expected prototype:\nvoid Awesomium::WebSession::SetCookie(const Awesomium::WebURL & url, const Awesomium::WebString & cookie_string, bool is_http_only, bool force_session_cookie)\nClass arguments details:\narg 1 ID = 3243885\narg 2 ID = 13938525\n");
		}

		const Awesomium::WebURL* url_ptr=(Luna< Awesomium::WebURL >::check(L,2));
		if( !url_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg url in Awesomium::WebSession::SetCookie function");
		}
		const Awesomium::WebURL & url=*url_ptr;
		std::string cookie_string_str(lua_tostring(L,3),lua_objlen(L,3));
		Awesomium::WebString cookie_string = Awesomium::ToWebString(cookie_string_str);
		bool is_http_only=(bool)(lua_toboolean(L,4)==1);
		bool force_session_cookie=(bool)(lua_toboolean(L,5)==1);

		Awesomium::WebSession* self=(Luna< Awesomium::WebSession >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebSession::SetCookie(const Awesomium::WebURL &, const Awesomium::WebString &, bool, bool)");
		}
		self->SetCookie(url, cookie_string, is_http_only, force_session_cookie);

		return 0;
	}

	// void Awesomium::WebSession::ClearCookies()
	static int _bind_ClearCookies(lua_State *L) {
		if (!_lg_typecheck_ClearCookies(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebSession::ClearCookies() function, expected prototype:\nvoid Awesomium::WebSession::ClearCookies()\nClass arguments details:\n");
		}


		Awesomium::WebSession* self=(Luna< Awesomium::WebSession >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebSession::ClearCookies()");
		}
		self->ClearCookies();

		return 0;
	}


	// Operator binds:

};

Awesomium::WebSession* LunaTraits< Awesomium::WebSession >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void Awesomium::WebSession::Release() const
	// bool Awesomium::WebSession::IsOnDisk() const
	// Awesomium::WebString Awesomium::WebSession::data_path() const
	// const Awesomium::WebPreferences & Awesomium::WebSession::preferences() const
	// void Awesomium::WebSession::AddDataSource(const Awesomium::WebString & asset_host, Awesomium::DataSource * source)
	// void Awesomium::WebSession::SetCookie(const Awesomium::WebURL & url, const Awesomium::WebString & cookie_string, bool is_http_only, bool force_session_cookie)
	// void Awesomium::WebSession::ClearCookies()

	// Abstract operators:
}

void LunaTraits< Awesomium::WebSession >::_bind_dtor(Awesomium::WebSession* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< Awesomium::WebSession >::className[] = "WebSession";
const char LunaTraits< Awesomium::WebSession >::fullName[] = "Awesomium::WebSession";
const char LunaTraits< Awesomium::WebSession >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebSession >::parents[] = {0};
const int LunaTraits< Awesomium::WebSession >::hash = 3873994;
const int LunaTraits< Awesomium::WebSession >::uniqueIDs[] = {3873994,0};

luna_RegType LunaTraits< Awesomium::WebSession >::methods[] = {
	{"Release", &luna_wrapper_Awesomium_WebSession::_bind_Release},
	{"IsOnDisk", &luna_wrapper_Awesomium_WebSession::_bind_IsOnDisk},
	{"data_path", &luna_wrapper_Awesomium_WebSession::_bind_data_path},
	{"preferences", &luna_wrapper_Awesomium_WebSession::_bind_preferences},
	{"AddDataSource", &luna_wrapper_Awesomium_WebSession::_bind_AddDataSource},
	{"SetCookie", &luna_wrapper_Awesomium_WebSession::_bind_SetCookie},
	{"ClearCookies", &luna_wrapper_Awesomium_WebSession::_bind_ClearCookies},
	{"dynCast", &luna_wrapper_Awesomium_WebSession::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_WebSession::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebSession >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebSession >::enumValues[] = {
	{0,0}
};



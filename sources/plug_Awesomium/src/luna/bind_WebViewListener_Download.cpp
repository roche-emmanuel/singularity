#include <plug_common.h>

#include <luna/wrappers/wrapper_WebViewListener_Download.h>

class luna_wrapper_WebViewListener_Download {
public:
	typedef Luna< WebViewListener::Download > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		WebViewListener::Download* self=(Luna< WebViewListener::Download >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,12394159) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(WebViewListener::Download*)");
		}

		WebViewListener::Download* rhs =(Luna< WebViewListener::Download >::check(L,2));
		WebViewListener::Download* self=(Luna< WebViewListener::Download >::check(L,1));
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

		WebViewListener::Download* self=(Luna< WebViewListener::Download >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("WebViewListener::Download");
		
		return luna_dynamicCast(L,converters,"WebViewListener::Download",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_OnRequestDownload(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,3243885) ) return false;
		if( (lua_isstring(L,5)==0) ) return false;
		if( (lua_isstring(L,6)==0) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnUpdateDownload(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFinishDownload(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,3243885) ) return false;
		if( (lua_isstring(L,5)==0) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// WebViewListener::Download::Download(lua_Table * data)
	static WebViewListener::Download* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in WebViewListener::Download::Download(lua_Table * data) function, expected prototype:\nWebViewListener::Download::Download(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_WebViewListener_Download(L,NULL);
	}


	// Function binds:
	// void WebViewListener::Download::OnRequestDownload(Awesomium::WebView * caller, int download_id, const Awesomium::WebURL & url, const Awesomium::WebString & suggested_filename, const Awesomium::WebString & mime_type)
	static int _bind_OnRequestDownload(lua_State *L) {
		if (!_lg_typecheck_OnRequestDownload(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void WebViewListener::Download::OnRequestDownload(Awesomium::WebView * caller, int download_id, const Awesomium::WebURL & url, const Awesomium::WebString & suggested_filename, const Awesomium::WebString & mime_type) function, expected prototype:\nvoid WebViewListener::Download::OnRequestDownload(Awesomium::WebView * caller, int download_id, const Awesomium::WebURL & url, const Awesomium::WebString & suggested_filename, const Awesomium::WebString & mime_type)\nClass arguments details:\narg 1 ID = 613205\narg 3 ID = 3243885\narg 4 ID = 13938525\narg 5 ID = 13938525\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		int download_id=(int)lua_tointeger(L,3);
		const Awesomium::WebURL* url_ptr=(Luna< Awesomium::WebURL >::check(L,4));
		if( !url_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg url in WebViewListener::Download::OnRequestDownload function");
		}
		const Awesomium::WebURL & url=*url_ptr;
		std::string suggested_filename_str(lua_tostring(L,5),lua_objlen(L,5));
		Awesomium::WebString suggested_filename = Awesomium::ToWebString(suggested_filename_str);
		std::string mime_type_str(lua_tostring(L,6),lua_objlen(L,6));
		Awesomium::WebString mime_type = Awesomium::ToWebString(mime_type_str);

		WebViewListener::Download* self=(Luna< WebViewListener::Download >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void WebViewListener::Download::OnRequestDownload(Awesomium::WebView *, int, const Awesomium::WebURL &, const Awesomium::WebString &, const Awesomium::WebString &). Got : '%s'",typeid(Luna< WebViewListener::Download >::check(L,1)).name());
		}
		self->OnRequestDownload(caller, download_id, url, suggested_filename, mime_type);

		return 0;
	}

	// void WebViewListener::Download::OnUpdateDownload(Awesomium::WebView * caller, int download_id, long long total_bytes, long long received_bytes, long long current_speed)
	static int _bind_OnUpdateDownload(lua_State *L) {
		if (!_lg_typecheck_OnUpdateDownload(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void WebViewListener::Download::OnUpdateDownload(Awesomium::WebView * caller, int download_id, long long total_bytes, long long received_bytes, long long current_speed) function, expected prototype:\nvoid WebViewListener::Download::OnUpdateDownload(Awesomium::WebView * caller, int download_id, long long total_bytes, long long received_bytes, long long current_speed)\nClass arguments details:\narg 1 ID = 613205\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		int download_id=(int)lua_tointeger(L,3);
		long long total_bytes=(long long)lua_tointeger(L,4);
		long long received_bytes=(long long)lua_tointeger(L,5);
		long long current_speed=(long long)lua_tointeger(L,6);

		WebViewListener::Download* self=(Luna< WebViewListener::Download >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void WebViewListener::Download::OnUpdateDownload(Awesomium::WebView *, int, long long, long long, long long). Got : '%s'",typeid(Luna< WebViewListener::Download >::check(L,1)).name());
		}
		self->OnUpdateDownload(caller, download_id, total_bytes, received_bytes, current_speed);

		return 0;
	}

	// void WebViewListener::Download::OnFinishDownload(Awesomium::WebView * caller, int download_id, const Awesomium::WebURL & url, const Awesomium::WebString & saved_path)
	static int _bind_OnFinishDownload(lua_State *L) {
		if (!_lg_typecheck_OnFinishDownload(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void WebViewListener::Download::OnFinishDownload(Awesomium::WebView * caller, int download_id, const Awesomium::WebURL & url, const Awesomium::WebString & saved_path) function, expected prototype:\nvoid WebViewListener::Download::OnFinishDownload(Awesomium::WebView * caller, int download_id, const Awesomium::WebURL & url, const Awesomium::WebString & saved_path)\nClass arguments details:\narg 1 ID = 613205\narg 3 ID = 3243885\narg 4 ID = 13938525\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		int download_id=(int)lua_tointeger(L,3);
		const Awesomium::WebURL* url_ptr=(Luna< Awesomium::WebURL >::check(L,4));
		if( !url_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg url in WebViewListener::Download::OnFinishDownload function");
		}
		const Awesomium::WebURL & url=*url_ptr;
		std::string saved_path_str(lua_tostring(L,5),lua_objlen(L,5));
		Awesomium::WebString saved_path = Awesomium::ToWebString(saved_path_str);

		WebViewListener::Download* self=(Luna< WebViewListener::Download >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void WebViewListener::Download::OnFinishDownload(Awesomium::WebView *, int, const Awesomium::WebURL &, const Awesomium::WebString &). Got : '%s'",typeid(Luna< WebViewListener::Download >::check(L,1)).name());
		}
		self->OnFinishDownload(caller, download_id, url, saved_path);

		return 0;
	}


	// Operator binds:

};

WebViewListener::Download* LunaTraits< WebViewListener::Download >::_bind_ctor(lua_State *L) {
	return luna_wrapper_WebViewListener_Download::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void WebViewListener::Download::OnRequestDownload(Awesomium::WebView * caller, int download_id, const Awesomium::WebURL & url, const Awesomium::WebString & suggested_filename, const Awesomium::WebString & mime_type)
	// void WebViewListener::Download::OnUpdateDownload(Awesomium::WebView * caller, int download_id, long long total_bytes, long long received_bytes, long long current_speed)
	// void WebViewListener::Download::OnFinishDownload(Awesomium::WebView * caller, int download_id, const Awesomium::WebURL & url, const Awesomium::WebString & saved_path)
}

void LunaTraits< WebViewListener::Download >::_bind_dtor(WebViewListener::Download* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< WebViewListener::Download >::className[] = "Download";
const char LunaTraits< WebViewListener::Download >::fullName[] = "WebViewListener::Download";
const char LunaTraits< WebViewListener::Download >::moduleName[] = "Awesomium";
const char* LunaTraits< WebViewListener::Download >::parents[] = {0};
const int LunaTraits< WebViewListener::Download >::hash = 12394159;
const int LunaTraits< WebViewListener::Download >::uniqueIDs[] = {12394159,0};

luna_RegType LunaTraits< WebViewListener::Download >::methods[] = {
	{"OnRequestDownload", &luna_wrapper_WebViewListener_Download::_bind_OnRequestDownload},
	{"OnUpdateDownload", &luna_wrapper_WebViewListener_Download::_bind_OnUpdateDownload},
	{"OnFinishDownload", &luna_wrapper_WebViewListener_Download::_bind_OnFinishDownload},
	{"dynCast", &luna_wrapper_WebViewListener_Download::_bind_dynCast},
	{"__eq", &luna_wrapper_WebViewListener_Download::_bind___eq},
	{"getTable", &luna_wrapper_WebViewListener_Download::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< WebViewListener::Download >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< WebViewListener::Download >::enumValues[] = {
	{0,0}
};



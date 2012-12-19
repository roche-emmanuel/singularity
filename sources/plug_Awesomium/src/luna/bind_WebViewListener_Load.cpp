#include <plug_common.h>

#include <luna/wrappers/wrapper_WebViewListener_Load.h>

class luna_wrapper_WebViewListener_Load {
public:
	typedef Luna< WebViewListener::Load > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		WebViewListener::Load* self=(Luna< WebViewListener::Load >::check(L,1));
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

		if( !Luna<void>::has_uniqueid(L,1,65940660) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(WebViewListener::Load*)");
		}

		WebViewListener::Load* rhs =(Luna< WebViewListener::Load >::check(L,2));
		WebViewListener::Load* self=(Luna< WebViewListener::Load >::check(L,1));
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

		WebViewListener::Load* self=(Luna< WebViewListener::Load >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("WebViewListener::Load");
		
		return luna_dynamicCast(L,converters,"WebViewListener::Load",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_OnBeginLoadingFrame(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,5,3243885) ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFailLoadingFrame(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,5,3243885) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isstring(L,7)==0) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFinishLoadingFrame(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,5,3243885) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnDocumentReady(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,3243885) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void WebViewListener::Load::OnBeginLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url, bool is_error_page)
	static int _bind_OnBeginLoadingFrame(lua_State *L) {
		if (!_lg_typecheck_OnBeginLoadingFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void WebViewListener::Load::OnBeginLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url, bool is_error_page) function, expected prototype:\nvoid WebViewListener::Load::OnBeginLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url, bool is_error_page)\nClass arguments details:\narg 1 ID = 613205\narg 4 ID = 3243885\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		long long frame_id=(long long)lua_tointeger(L,3);
		bool is_main_frame=(bool)(lua_toboolean(L,4)==1);
		const Awesomium::WebURL* url_ptr=(Luna< Awesomium::WebURL >::check(L,5));
		if( !url_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg url in WebViewListener::Load::OnBeginLoadingFrame function");
		}
		const Awesomium::WebURL & url=*url_ptr;
		bool is_error_page=(bool)(lua_toboolean(L,6)==1);

		WebViewListener::Load* self=(Luna< WebViewListener::Load >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void WebViewListener::Load::OnBeginLoadingFrame(Awesomium::WebView *, long long, bool, const Awesomium::WebURL &, bool)");
		}
		self->OnBeginLoadingFrame(caller, frame_id, is_main_frame, url, is_error_page);

		return 0;
	}

	// void WebViewListener::Load::OnFailLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url, int error_code, const Awesomium::WebString & error_desc)
	static int _bind_OnFailLoadingFrame(lua_State *L) {
		if (!_lg_typecheck_OnFailLoadingFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void WebViewListener::Load::OnFailLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url, int error_code, const Awesomium::WebString & error_desc) function, expected prototype:\nvoid WebViewListener::Load::OnFailLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url, int error_code, const Awesomium::WebString & error_desc)\nClass arguments details:\narg 1 ID = 613205\narg 4 ID = 3243885\narg 6 ID = 13938525\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		long long frame_id=(long long)lua_tointeger(L,3);
		bool is_main_frame=(bool)(lua_toboolean(L,4)==1);
		const Awesomium::WebURL* url_ptr=(Luna< Awesomium::WebURL >::check(L,5));
		if( !url_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg url in WebViewListener::Load::OnFailLoadingFrame function");
		}
		const Awesomium::WebURL & url=*url_ptr;
		int error_code=(int)lua_tointeger(L,6);
		std::string error_desc_str(lua_tostring(L,7),lua_objlen(L,7));
		Awesomium::WebString error_desc = Awesomium::ToWebString(error_desc_str);

		WebViewListener::Load* self=(Luna< WebViewListener::Load >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void WebViewListener::Load::OnFailLoadingFrame(Awesomium::WebView *, long long, bool, const Awesomium::WebURL &, int, const Awesomium::WebString &)");
		}
		self->OnFailLoadingFrame(caller, frame_id, is_main_frame, url, error_code, error_desc);

		return 0;
	}

	// void WebViewListener::Load::OnFinishLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url)
	static int _bind_OnFinishLoadingFrame(lua_State *L) {
		if (!_lg_typecheck_OnFinishLoadingFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void WebViewListener::Load::OnFinishLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url) function, expected prototype:\nvoid WebViewListener::Load::OnFinishLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url)\nClass arguments details:\narg 1 ID = 613205\narg 4 ID = 3243885\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		long long frame_id=(long long)lua_tointeger(L,3);
		bool is_main_frame=(bool)(lua_toboolean(L,4)==1);
		const Awesomium::WebURL* url_ptr=(Luna< Awesomium::WebURL >::check(L,5));
		if( !url_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg url in WebViewListener::Load::OnFinishLoadingFrame function");
		}
		const Awesomium::WebURL & url=*url_ptr;

		WebViewListener::Load* self=(Luna< WebViewListener::Load >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void WebViewListener::Load::OnFinishLoadingFrame(Awesomium::WebView *, long long, bool, const Awesomium::WebURL &)");
		}
		self->OnFinishLoadingFrame(caller, frame_id, is_main_frame, url);

		return 0;
	}

	// void WebViewListener::Load::OnDocumentReady(Awesomium::WebView * caller, const Awesomium::WebURL & url)
	static int _bind_OnDocumentReady(lua_State *L) {
		if (!_lg_typecheck_OnDocumentReady(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void WebViewListener::Load::OnDocumentReady(Awesomium::WebView * caller, const Awesomium::WebURL & url) function, expected prototype:\nvoid WebViewListener::Load::OnDocumentReady(Awesomium::WebView * caller, const Awesomium::WebURL & url)\nClass arguments details:\narg 1 ID = 613205\narg 2 ID = 3243885\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		const Awesomium::WebURL* url_ptr=(Luna< Awesomium::WebURL >::check(L,3));
		if( !url_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg url in WebViewListener::Load::OnDocumentReady function");
		}
		const Awesomium::WebURL & url=*url_ptr;

		WebViewListener::Load* self=(Luna< WebViewListener::Load >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void WebViewListener::Load::OnDocumentReady(Awesomium::WebView *, const Awesomium::WebURL &)");
		}
		self->OnDocumentReady(caller, url);

		return 0;
	}


	// Operator binds:

};

WebViewListener::Load* LunaTraits< WebViewListener::Load >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void WebViewListener::Load::OnBeginLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url, bool is_error_page)
	// void WebViewListener::Load::OnFailLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url, int error_code, const Awesomium::WebString & error_desc)
	// void WebViewListener::Load::OnFinishLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url)
	// void WebViewListener::Load::OnDocumentReady(Awesomium::WebView * caller, const Awesomium::WebURL & url)
}

void LunaTraits< WebViewListener::Load >::_bind_dtor(WebViewListener::Load* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< WebViewListener::Load >::className[] = "Load";
const char LunaTraits< WebViewListener::Load >::fullName[] = "WebViewListener::Load";
const char LunaTraits< WebViewListener::Load >::moduleName[] = "WebViewListener";
const char* LunaTraits< WebViewListener::Load >::parents[] = {0};
const int LunaTraits< WebViewListener::Load >::hash = 65940660;
const int LunaTraits< WebViewListener::Load >::uniqueIDs[] = {65940660,0};

luna_RegType LunaTraits< WebViewListener::Load >::methods[] = {
	{"OnBeginLoadingFrame", &luna_wrapper_WebViewListener_Load::_bind_OnBeginLoadingFrame},
	{"OnFailLoadingFrame", &luna_wrapper_WebViewListener_Load::_bind_OnFailLoadingFrame},
	{"OnFinishLoadingFrame", &luna_wrapper_WebViewListener_Load::_bind_OnFinishLoadingFrame},
	{"OnDocumentReady", &luna_wrapper_WebViewListener_Load::_bind_OnDocumentReady},
	{"dynCast", &luna_wrapper_WebViewListener_Load::_bind_dynCast},
	{"__eq", &luna_wrapper_WebViewListener_Load::_bind___eq},
	{"getTable", &luna_wrapper_WebViewListener_Load::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< WebViewListener::Load >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< WebViewListener::Load >::enumValues[] = {
	{0,0}
};



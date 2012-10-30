#include <plug_common.h>

class luna_wrapper_WebViewListener_View {
public:
	typedef Luna< WebViewListener::View > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,66232947) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(WebViewListener::View*)");
		}

		WebViewListener::View* rhs =(Luna< WebViewListener::View >::check(L,2));
		WebViewListener::View* self=(Luna< WebViewListener::View >::check(L,1));
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

		WebViewListener::View* self=(Luna< WebViewListener::View >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("WebViewListener::View");
		
		return luna_dynamicCast(L,converters,"WebViewListener::View",name);
	}


	// Function checkers:
	inline static bool _lg_typecheck_OnChangeTitle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( (lua_isstring(L,3)==0) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnChangeAddressBar(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,3243885) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnChangeTooltip(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( (lua_isstring(L,3)==0) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnChangeTargetURL(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,3243885) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnChangeCursor(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnChangeFocus(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnShowCreatedWebView(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,613205)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,3243885) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,3243885) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,8907551) ) return false;
		if( lua_isboolean(L,7)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void WebViewListener::View::OnChangeTitle(Awesomium::WebView * caller, const Awesomium::WebString & title)
	static int _bind_OnChangeTitle(lua_State *L) {
		if (!_lg_typecheck_OnChangeTitle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void WebViewListener::View::OnChangeTitle(Awesomium::WebView * caller, const Awesomium::WebString & title) function, expected prototype:\nvoid WebViewListener::View::OnChangeTitle(Awesomium::WebView * caller, const Awesomium::WebString & title)\nClass arguments details:\narg 1 ID = 613205\narg 2 ID = 13938525\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		std::string title_str(lua_tostring(L,3),lua_objlen(L,3));
		Awesomium::WebString title = Awesomium::ToWebString(title_str);

		WebViewListener::View* self=(Luna< WebViewListener::View >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void WebViewListener::View::OnChangeTitle(Awesomium::WebView *, const Awesomium::WebString &)");
		}
		self->OnChangeTitle(caller, title);

		return 0;
	}

	// void WebViewListener::View::OnChangeAddressBar(Awesomium::WebView * caller, const Awesomium::WebURL & url)
	static int _bind_OnChangeAddressBar(lua_State *L) {
		if (!_lg_typecheck_OnChangeAddressBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void WebViewListener::View::OnChangeAddressBar(Awesomium::WebView * caller, const Awesomium::WebURL & url) function, expected prototype:\nvoid WebViewListener::View::OnChangeAddressBar(Awesomium::WebView * caller, const Awesomium::WebURL & url)\nClass arguments details:\narg 1 ID = 613205\narg 2 ID = 3243885\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		const Awesomium::WebURL* url_ptr=(Luna< Awesomium::WebURL >::check(L,3));
		if( !url_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg url in WebViewListener::View::OnChangeAddressBar function");
		}
		const Awesomium::WebURL & url=*url_ptr;

		WebViewListener::View* self=(Luna< WebViewListener::View >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void WebViewListener::View::OnChangeAddressBar(Awesomium::WebView *, const Awesomium::WebURL &)");
		}
		self->OnChangeAddressBar(caller, url);

		return 0;
	}

	// void WebViewListener::View::OnChangeTooltip(Awesomium::WebView * caller, const Awesomium::WebString & tooltip)
	static int _bind_OnChangeTooltip(lua_State *L) {
		if (!_lg_typecheck_OnChangeTooltip(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void WebViewListener::View::OnChangeTooltip(Awesomium::WebView * caller, const Awesomium::WebString & tooltip) function, expected prototype:\nvoid WebViewListener::View::OnChangeTooltip(Awesomium::WebView * caller, const Awesomium::WebString & tooltip)\nClass arguments details:\narg 1 ID = 613205\narg 2 ID = 13938525\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		std::string tooltip_str(lua_tostring(L,3),lua_objlen(L,3));
		Awesomium::WebString tooltip = Awesomium::ToWebString(tooltip_str);

		WebViewListener::View* self=(Luna< WebViewListener::View >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void WebViewListener::View::OnChangeTooltip(Awesomium::WebView *, const Awesomium::WebString &)");
		}
		self->OnChangeTooltip(caller, tooltip);

		return 0;
	}

	// void WebViewListener::View::OnChangeTargetURL(Awesomium::WebView * caller, const Awesomium::WebURL & url)
	static int _bind_OnChangeTargetURL(lua_State *L) {
		if (!_lg_typecheck_OnChangeTargetURL(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void WebViewListener::View::OnChangeTargetURL(Awesomium::WebView * caller, const Awesomium::WebURL & url) function, expected prototype:\nvoid WebViewListener::View::OnChangeTargetURL(Awesomium::WebView * caller, const Awesomium::WebURL & url)\nClass arguments details:\narg 1 ID = 613205\narg 2 ID = 3243885\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		const Awesomium::WebURL* url_ptr=(Luna< Awesomium::WebURL >::check(L,3));
		if( !url_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg url in WebViewListener::View::OnChangeTargetURL function");
		}
		const Awesomium::WebURL & url=*url_ptr;

		WebViewListener::View* self=(Luna< WebViewListener::View >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void WebViewListener::View::OnChangeTargetURL(Awesomium::WebView *, const Awesomium::WebURL &)");
		}
		self->OnChangeTargetURL(caller, url);

		return 0;
	}

	// void WebViewListener::View::OnChangeCursor(Awesomium::WebView * caller, Awesomium::Cursor cursor)
	static int _bind_OnChangeCursor(lua_State *L) {
		if (!_lg_typecheck_OnChangeCursor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void WebViewListener::View::OnChangeCursor(Awesomium::WebView * caller, Awesomium::Cursor cursor) function, expected prototype:\nvoid WebViewListener::View::OnChangeCursor(Awesomium::WebView * caller, Awesomium::Cursor cursor)\nClass arguments details:\narg 1 ID = 613205\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		Awesomium::Cursor cursor=(Awesomium::Cursor)lua_tointeger(L,3);

		WebViewListener::View* self=(Luna< WebViewListener::View >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void WebViewListener::View::OnChangeCursor(Awesomium::WebView *, Awesomium::Cursor)");
		}
		self->OnChangeCursor(caller, cursor);

		return 0;
	}

	// void WebViewListener::View::OnChangeFocus(Awesomium::WebView * caller, Awesomium::FocusedElementType focused_type)
	static int _bind_OnChangeFocus(lua_State *L) {
		if (!_lg_typecheck_OnChangeFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void WebViewListener::View::OnChangeFocus(Awesomium::WebView * caller, Awesomium::FocusedElementType focused_type) function, expected prototype:\nvoid WebViewListener::View::OnChangeFocus(Awesomium::WebView * caller, Awesomium::FocusedElementType focused_type)\nClass arguments details:\narg 1 ID = 613205\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		Awesomium::FocusedElementType focused_type=(Awesomium::FocusedElementType)lua_tointeger(L,3);

		WebViewListener::View* self=(Luna< WebViewListener::View >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void WebViewListener::View::OnChangeFocus(Awesomium::WebView *, Awesomium::FocusedElementType)");
		}
		self->OnChangeFocus(caller, focused_type);

		return 0;
	}

	// void WebViewListener::View::OnShowCreatedWebView(Awesomium::WebView * caller, Awesomium::WebView * new_view, const Awesomium::WebURL & opener_url, const Awesomium::WebURL & target_url, const Awesomium::Rect & initial_pos, bool is_popup)
	static int _bind_OnShowCreatedWebView(lua_State *L) {
		if (!_lg_typecheck_OnShowCreatedWebView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void WebViewListener::View::OnShowCreatedWebView(Awesomium::WebView * caller, Awesomium::WebView * new_view, const Awesomium::WebURL & opener_url, const Awesomium::WebURL & target_url, const Awesomium::Rect & initial_pos, bool is_popup) function, expected prototype:\nvoid WebViewListener::View::OnShowCreatedWebView(Awesomium::WebView * caller, Awesomium::WebView * new_view, const Awesomium::WebURL & opener_url, const Awesomium::WebURL & target_url, const Awesomium::Rect & initial_pos, bool is_popup)\nClass arguments details:\narg 1 ID = 613205\narg 2 ID = 613205\narg 3 ID = 3243885\narg 4 ID = 3243885\narg 5 ID = 8907551\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		Awesomium::WebView* new_view=(Luna< Awesomium::WebView >::check(L,3));
		const Awesomium::WebURL* opener_url_ptr=(Luna< Awesomium::WebURL >::check(L,4));
		if( !opener_url_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg opener_url in WebViewListener::View::OnShowCreatedWebView function");
		}
		const Awesomium::WebURL & opener_url=*opener_url_ptr;
		const Awesomium::WebURL* target_url_ptr=(Luna< Awesomium::WebURL >::check(L,5));
		if( !target_url_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg target_url in WebViewListener::View::OnShowCreatedWebView function");
		}
		const Awesomium::WebURL & target_url=*target_url_ptr;
		const Awesomium::Rect* initial_pos_ptr=(Luna< Awesomium::Rect >::check(L,6));
		if( !initial_pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg initial_pos in WebViewListener::View::OnShowCreatedWebView function");
		}
		const Awesomium::Rect & initial_pos=*initial_pos_ptr;
		bool is_popup=(bool)(lua_toboolean(L,7)==1);

		WebViewListener::View* self=(Luna< WebViewListener::View >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void WebViewListener::View::OnShowCreatedWebView(Awesomium::WebView *, Awesomium::WebView *, const Awesomium::WebURL &, const Awesomium::WebURL &, const Awesomium::Rect &, bool)");
		}
		self->OnShowCreatedWebView(caller, new_view, opener_url, target_url, initial_pos, is_popup);

		return 0;
	}


	// Operator binds:

};

WebViewListener::View* LunaTraits< WebViewListener::View >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void WebViewListener::View::OnChangeTitle(Awesomium::WebView * caller, const Awesomium::WebString & title)
	// void WebViewListener::View::OnChangeAddressBar(Awesomium::WebView * caller, const Awesomium::WebURL & url)
	// void WebViewListener::View::OnChangeTooltip(Awesomium::WebView * caller, const Awesomium::WebString & tooltip)
	// void WebViewListener::View::OnChangeTargetURL(Awesomium::WebView * caller, const Awesomium::WebURL & url)
	// void WebViewListener::View::OnChangeCursor(Awesomium::WebView * caller, Awesomium::Cursor cursor)
	// void WebViewListener::View::OnChangeFocus(Awesomium::WebView * caller, Awesomium::FocusedElementType focused_type)
	// void WebViewListener::View::OnShowCreatedWebView(Awesomium::WebView * caller, Awesomium::WebView * new_view, const Awesomium::WebURL & opener_url, const Awesomium::WebURL & target_url, const Awesomium::Rect & initial_pos, bool is_popup)

	// Abstract operators:
}

void LunaTraits< WebViewListener::View >::_bind_dtor(WebViewListener::View* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< WebViewListener::View >::className[] = "View";
const char LunaTraits< WebViewListener::View >::fullName[] = "WebViewListener::View";
const char LunaTraits< WebViewListener::View >::moduleName[] = "WebViewListener";
const char* LunaTraits< WebViewListener::View >::parents[] = {0};
const int LunaTraits< WebViewListener::View >::hash = 66232947;
const int LunaTraits< WebViewListener::View >::uniqueIDs[] = {66232947,0};

luna_RegType LunaTraits< WebViewListener::View >::methods[] = {
	{"OnChangeTitle", &luna_wrapper_WebViewListener_View::_bind_OnChangeTitle},
	{"OnChangeAddressBar", &luna_wrapper_WebViewListener_View::_bind_OnChangeAddressBar},
	{"OnChangeTooltip", &luna_wrapper_WebViewListener_View::_bind_OnChangeTooltip},
	{"OnChangeTargetURL", &luna_wrapper_WebViewListener_View::_bind_OnChangeTargetURL},
	{"OnChangeCursor", &luna_wrapper_WebViewListener_View::_bind_OnChangeCursor},
	{"OnChangeFocus", &luna_wrapper_WebViewListener_View::_bind_OnChangeFocus},
	{"OnShowCreatedWebView", &luna_wrapper_WebViewListener_View::_bind_OnShowCreatedWebView},
	{"dynCast", &luna_wrapper_WebViewListener_View::_bind_dynCast},
	{"__eq", &luna_wrapper_WebViewListener_View::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< WebViewListener::View >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< WebViewListener::View >::enumValues[] = {
	{0,0}
};



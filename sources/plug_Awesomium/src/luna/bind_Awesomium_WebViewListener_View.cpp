#include <plug_common.h>

#include <luna/wrappers/wrapper_Awesomium_WebViewListener_View.h>

class luna_wrapper_Awesomium_WebViewListener_View {
public:
	typedef Luna< Awesomium::WebViewListener::View > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		Awesomium::WebViewListener::View* self=(Luna< Awesomium::WebViewListener::View >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<Awesomium::WebViewListener::View,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,9977401) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::WebViewListener::View*)");
		}

		Awesomium::WebViewListener::View* rhs =(Luna< Awesomium::WebViewListener::View >::check(L,2));
		Awesomium::WebViewListener::View* self=(Luna< Awesomium::WebViewListener::View >::check(L,1));
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

		Awesomium::WebViewListener::View* self=(Luna< Awesomium::WebViewListener::View >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebViewListener::View");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebViewListener::View",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
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

	// Constructor binds:
	// Awesomium::WebViewListener::View::View(lua_Table * data)
	static Awesomium::WebViewListener::View* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebViewListener::View::View(lua_Table * data) function, expected prototype:\nAwesomium::WebViewListener::View::View(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_Awesomium_WebViewListener_View(L,NULL);
	}


	// Function binds:
	// void Awesomium::WebViewListener::View::OnChangeTitle(Awesomium::WebView * caller, const Awesomium::WebString & title)
	static int _bind_OnChangeTitle(lua_State *L) {
		if (!_lg_typecheck_OnChangeTitle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebViewListener::View::OnChangeTitle(Awesomium::WebView * caller, const Awesomium::WebString & title) function, expected prototype:\nvoid Awesomium::WebViewListener::View::OnChangeTitle(Awesomium::WebView * caller, const Awesomium::WebString & title)\nClass arguments details:\narg 1 ID = 613205\narg 2 ID = 13938525\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		std::string title_str(lua_tostring(L,3),lua_objlen(L,3));
		Awesomium::WebString title = Awesomium::ToWebString(title_str);

		Awesomium::WebViewListener::View* self=(Luna< Awesomium::WebViewListener::View >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebViewListener::View::OnChangeTitle(Awesomium::WebView *, const Awesomium::WebString &). Got : '%s'",typeid(Luna< Awesomium::WebViewListener::View >::check(L,1)).name());
		}
		self->OnChangeTitle(caller, title);

		return 0;
	}

	// void Awesomium::WebViewListener::View::OnChangeAddressBar(Awesomium::WebView * caller, const Awesomium::WebURL & url)
	static int _bind_OnChangeAddressBar(lua_State *L) {
		if (!_lg_typecheck_OnChangeAddressBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebViewListener::View::OnChangeAddressBar(Awesomium::WebView * caller, const Awesomium::WebURL & url) function, expected prototype:\nvoid Awesomium::WebViewListener::View::OnChangeAddressBar(Awesomium::WebView * caller, const Awesomium::WebURL & url)\nClass arguments details:\narg 1 ID = 613205\narg 2 ID = 3243885\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		const Awesomium::WebURL* url_ptr=(Luna< Awesomium::WebURL >::check(L,3));
		if( !url_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg url in Awesomium::WebViewListener::View::OnChangeAddressBar function");
		}
		const Awesomium::WebURL & url=*url_ptr;

		Awesomium::WebViewListener::View* self=(Luna< Awesomium::WebViewListener::View >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebViewListener::View::OnChangeAddressBar(Awesomium::WebView *, const Awesomium::WebURL &). Got : '%s'",typeid(Luna< Awesomium::WebViewListener::View >::check(L,1)).name());
		}
		self->OnChangeAddressBar(caller, url);

		return 0;
	}

	// void Awesomium::WebViewListener::View::OnChangeTooltip(Awesomium::WebView * caller, const Awesomium::WebString & tooltip)
	static int _bind_OnChangeTooltip(lua_State *L) {
		if (!_lg_typecheck_OnChangeTooltip(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebViewListener::View::OnChangeTooltip(Awesomium::WebView * caller, const Awesomium::WebString & tooltip) function, expected prototype:\nvoid Awesomium::WebViewListener::View::OnChangeTooltip(Awesomium::WebView * caller, const Awesomium::WebString & tooltip)\nClass arguments details:\narg 1 ID = 613205\narg 2 ID = 13938525\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		std::string tooltip_str(lua_tostring(L,3),lua_objlen(L,3));
		Awesomium::WebString tooltip = Awesomium::ToWebString(tooltip_str);

		Awesomium::WebViewListener::View* self=(Luna< Awesomium::WebViewListener::View >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebViewListener::View::OnChangeTooltip(Awesomium::WebView *, const Awesomium::WebString &). Got : '%s'",typeid(Luna< Awesomium::WebViewListener::View >::check(L,1)).name());
		}
		self->OnChangeTooltip(caller, tooltip);

		return 0;
	}

	// void Awesomium::WebViewListener::View::OnChangeTargetURL(Awesomium::WebView * caller, const Awesomium::WebURL & url)
	static int _bind_OnChangeTargetURL(lua_State *L) {
		if (!_lg_typecheck_OnChangeTargetURL(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebViewListener::View::OnChangeTargetURL(Awesomium::WebView * caller, const Awesomium::WebURL & url) function, expected prototype:\nvoid Awesomium::WebViewListener::View::OnChangeTargetURL(Awesomium::WebView * caller, const Awesomium::WebURL & url)\nClass arguments details:\narg 1 ID = 613205\narg 2 ID = 3243885\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		const Awesomium::WebURL* url_ptr=(Luna< Awesomium::WebURL >::check(L,3));
		if( !url_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg url in Awesomium::WebViewListener::View::OnChangeTargetURL function");
		}
		const Awesomium::WebURL & url=*url_ptr;

		Awesomium::WebViewListener::View* self=(Luna< Awesomium::WebViewListener::View >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebViewListener::View::OnChangeTargetURL(Awesomium::WebView *, const Awesomium::WebURL &). Got : '%s'",typeid(Luna< Awesomium::WebViewListener::View >::check(L,1)).name());
		}
		self->OnChangeTargetURL(caller, url);

		return 0;
	}

	// void Awesomium::WebViewListener::View::OnChangeCursor(Awesomium::WebView * caller, Awesomium::Cursor cursor)
	static int _bind_OnChangeCursor(lua_State *L) {
		if (!_lg_typecheck_OnChangeCursor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebViewListener::View::OnChangeCursor(Awesomium::WebView * caller, Awesomium::Cursor cursor) function, expected prototype:\nvoid Awesomium::WebViewListener::View::OnChangeCursor(Awesomium::WebView * caller, Awesomium::Cursor cursor)\nClass arguments details:\narg 1 ID = 613205\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		Awesomium::Cursor cursor=(Awesomium::Cursor)lua_tointeger(L,3);

		Awesomium::WebViewListener::View* self=(Luna< Awesomium::WebViewListener::View >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebViewListener::View::OnChangeCursor(Awesomium::WebView *, Awesomium::Cursor). Got : '%s'",typeid(Luna< Awesomium::WebViewListener::View >::check(L,1)).name());
		}
		self->OnChangeCursor(caller, cursor);

		return 0;
	}

	// void Awesomium::WebViewListener::View::OnChangeFocus(Awesomium::WebView * caller, Awesomium::FocusedElementType focused_type)
	static int _bind_OnChangeFocus(lua_State *L) {
		if (!_lg_typecheck_OnChangeFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebViewListener::View::OnChangeFocus(Awesomium::WebView * caller, Awesomium::FocusedElementType focused_type) function, expected prototype:\nvoid Awesomium::WebViewListener::View::OnChangeFocus(Awesomium::WebView * caller, Awesomium::FocusedElementType focused_type)\nClass arguments details:\narg 1 ID = 613205\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		Awesomium::FocusedElementType focused_type=(Awesomium::FocusedElementType)lua_tointeger(L,3);

		Awesomium::WebViewListener::View* self=(Luna< Awesomium::WebViewListener::View >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebViewListener::View::OnChangeFocus(Awesomium::WebView *, Awesomium::FocusedElementType). Got : '%s'",typeid(Luna< Awesomium::WebViewListener::View >::check(L,1)).name());
		}
		self->OnChangeFocus(caller, focused_type);

		return 0;
	}

	// void Awesomium::WebViewListener::View::OnShowCreatedWebView(Awesomium::WebView * caller, Awesomium::WebView * new_view, const Awesomium::WebURL & opener_url, const Awesomium::WebURL & target_url, const Awesomium::Rect & initial_pos, bool is_popup)
	static int _bind_OnShowCreatedWebView(lua_State *L) {
		if (!_lg_typecheck_OnShowCreatedWebView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebViewListener::View::OnShowCreatedWebView(Awesomium::WebView * caller, Awesomium::WebView * new_view, const Awesomium::WebURL & opener_url, const Awesomium::WebURL & target_url, const Awesomium::Rect & initial_pos, bool is_popup) function, expected prototype:\nvoid Awesomium::WebViewListener::View::OnShowCreatedWebView(Awesomium::WebView * caller, Awesomium::WebView * new_view, const Awesomium::WebURL & opener_url, const Awesomium::WebURL & target_url, const Awesomium::Rect & initial_pos, bool is_popup)\nClass arguments details:\narg 1 ID = 613205\narg 2 ID = 613205\narg 3 ID = 3243885\narg 4 ID = 3243885\narg 5 ID = 8907551\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		Awesomium::WebView* new_view=(Luna< Awesomium::WebView >::check(L,3));
		const Awesomium::WebURL* opener_url_ptr=(Luna< Awesomium::WebURL >::check(L,4));
		if( !opener_url_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg opener_url in Awesomium::WebViewListener::View::OnShowCreatedWebView function");
		}
		const Awesomium::WebURL & opener_url=*opener_url_ptr;
		const Awesomium::WebURL* target_url_ptr=(Luna< Awesomium::WebURL >::check(L,5));
		if( !target_url_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg target_url in Awesomium::WebViewListener::View::OnShowCreatedWebView function");
		}
		const Awesomium::WebURL & target_url=*target_url_ptr;
		const Awesomium::Rect* initial_pos_ptr=(Luna< Awesomium::Rect >::check(L,6));
		if( !initial_pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg initial_pos in Awesomium::WebViewListener::View::OnShowCreatedWebView function");
		}
		const Awesomium::Rect & initial_pos=*initial_pos_ptr;
		bool is_popup=(bool)(lua_toboolean(L,7)==1);

		Awesomium::WebViewListener::View* self=(Luna< Awesomium::WebViewListener::View >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebViewListener::View::OnShowCreatedWebView(Awesomium::WebView *, Awesomium::WebView *, const Awesomium::WebURL &, const Awesomium::WebURL &, const Awesomium::Rect &, bool). Got : '%s'",typeid(Luna< Awesomium::WebViewListener::View >::check(L,1)).name());
		}
		self->OnShowCreatedWebView(caller, new_view, opener_url, target_url, initial_pos, is_popup);

		return 0;
	}


	// Operator binds:

};

Awesomium::WebViewListener::View* LunaTraits< Awesomium::WebViewListener::View >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_WebViewListener_View::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void Awesomium::WebViewListener::View::OnChangeTitle(Awesomium::WebView * caller, const Awesomium::WebString & title)
	// void Awesomium::WebViewListener::View::OnChangeAddressBar(Awesomium::WebView * caller, const Awesomium::WebURL & url)
	// void Awesomium::WebViewListener::View::OnChangeTooltip(Awesomium::WebView * caller, const Awesomium::WebString & tooltip)
	// void Awesomium::WebViewListener::View::OnChangeTargetURL(Awesomium::WebView * caller, const Awesomium::WebURL & url)
	// void Awesomium::WebViewListener::View::OnChangeCursor(Awesomium::WebView * caller, Awesomium::Cursor cursor)
	// void Awesomium::WebViewListener::View::OnChangeFocus(Awesomium::WebView * caller, Awesomium::FocusedElementType focused_type)
	// void Awesomium::WebViewListener::View::OnShowCreatedWebView(Awesomium::WebView * caller, Awesomium::WebView * new_view, const Awesomium::WebURL & opener_url, const Awesomium::WebURL & target_url, const Awesomium::Rect & initial_pos, bool is_popup)
}

void LunaTraits< Awesomium::WebViewListener::View >::_bind_dtor(Awesomium::WebViewListener::View* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< Awesomium::WebViewListener::View >::className[] = "View";
const char LunaTraits< Awesomium::WebViewListener::View >::fullName[] = "Awesomium::WebViewListener::View";
const char LunaTraits< Awesomium::WebViewListener::View >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebViewListener::View >::parents[] = {0};
const int LunaTraits< Awesomium::WebViewListener::View >::hash = 9977401;
const int LunaTraits< Awesomium::WebViewListener::View >::uniqueIDs[] = {9977401,0};

luna_RegType LunaTraits< Awesomium::WebViewListener::View >::methods[] = {
	{"OnChangeTitle", &luna_wrapper_Awesomium_WebViewListener_View::_bind_OnChangeTitle},
	{"OnChangeAddressBar", &luna_wrapper_Awesomium_WebViewListener_View::_bind_OnChangeAddressBar},
	{"OnChangeTooltip", &luna_wrapper_Awesomium_WebViewListener_View::_bind_OnChangeTooltip},
	{"OnChangeTargetURL", &luna_wrapper_Awesomium_WebViewListener_View::_bind_OnChangeTargetURL},
	{"OnChangeCursor", &luna_wrapper_Awesomium_WebViewListener_View::_bind_OnChangeCursor},
	{"OnChangeFocus", &luna_wrapper_Awesomium_WebViewListener_View::_bind_OnChangeFocus},
	{"OnShowCreatedWebView", &luna_wrapper_Awesomium_WebViewListener_View::_bind_OnShowCreatedWebView},
	{"dynCast", &luna_wrapper_Awesomium_WebViewListener_View::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_WebViewListener_View::_bind___eq},
	{"getTable", &luna_wrapper_Awesomium_WebViewListener_View::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebViewListener::View >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebViewListener::View >::enumValues[] = {
	{0,0}
};



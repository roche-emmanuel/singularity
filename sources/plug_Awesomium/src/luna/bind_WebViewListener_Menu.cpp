#include <plug_common.h>

#include <luna/wrappers/wrapper_WebViewListener_Menu.h>

class luna_wrapper_WebViewListener_Menu {
public:
	typedef Luna< WebViewListener::Menu > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		WebViewListener::Menu* self=(Luna< WebViewListener::Menu >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<WebViewListener::Menu,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65961261) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(WebViewListener::Menu*)");
		}

		WebViewListener::Menu* rhs =(Luna< WebViewListener::Menu >::check(L,2));
		WebViewListener::Menu* self=(Luna< WebViewListener::Menu >::check(L,1));
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

		WebViewListener::Menu* self=(Luna< WebViewListener::Menu >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("WebViewListener::Menu");
		
		return luna_dynamicCast(L,converters,"WebViewListener::Menu",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_OnShowPopupMenu(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,93395030) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnShowContextMenu(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,8209039) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// WebViewListener::Menu::Menu(lua_Table * data)
	static WebViewListener::Menu* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in WebViewListener::Menu::Menu(lua_Table * data) function, expected prototype:\nWebViewListener::Menu::Menu(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_WebViewListener_Menu(L,NULL);
	}


	// Function binds:
	// void WebViewListener::Menu::OnShowPopupMenu(Awesomium::WebView * caller, const Awesomium::WebPopupMenuInfo & menu_info)
	static int _bind_OnShowPopupMenu(lua_State *L) {
		if (!_lg_typecheck_OnShowPopupMenu(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void WebViewListener::Menu::OnShowPopupMenu(Awesomium::WebView * caller, const Awesomium::WebPopupMenuInfo & menu_info) function, expected prototype:\nvoid WebViewListener::Menu::OnShowPopupMenu(Awesomium::WebView * caller, const Awesomium::WebPopupMenuInfo & menu_info)\nClass arguments details:\narg 1 ID = 613205\narg 2 ID = 93395030\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		const Awesomium::WebPopupMenuInfo* menu_info_ptr=(Luna< Awesomium::WebPopupMenuInfo >::check(L,3));
		if( !menu_info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg menu_info in WebViewListener::Menu::OnShowPopupMenu function");
		}
		const Awesomium::WebPopupMenuInfo & menu_info=*menu_info_ptr;

		WebViewListener::Menu* self=(Luna< WebViewListener::Menu >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void WebViewListener::Menu::OnShowPopupMenu(Awesomium::WebView *, const Awesomium::WebPopupMenuInfo &). Got : '%s'",typeid(Luna< WebViewListener::Menu >::check(L,1)).name());
		}
		self->OnShowPopupMenu(caller, menu_info);

		return 0;
	}

	// void WebViewListener::Menu::OnShowContextMenu(Awesomium::WebView * caller, const Awesomium::WebContextMenuInfo & menu_info)
	static int _bind_OnShowContextMenu(lua_State *L) {
		if (!_lg_typecheck_OnShowContextMenu(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void WebViewListener::Menu::OnShowContextMenu(Awesomium::WebView * caller, const Awesomium::WebContextMenuInfo & menu_info) function, expected prototype:\nvoid WebViewListener::Menu::OnShowContextMenu(Awesomium::WebView * caller, const Awesomium::WebContextMenuInfo & menu_info)\nClass arguments details:\narg 1 ID = 613205\narg 2 ID = 8209039\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		const Awesomium::WebContextMenuInfo* menu_info_ptr=(Luna< Awesomium::WebContextMenuInfo >::check(L,3));
		if( !menu_info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg menu_info in WebViewListener::Menu::OnShowContextMenu function");
		}
		const Awesomium::WebContextMenuInfo & menu_info=*menu_info_ptr;

		WebViewListener::Menu* self=(Luna< WebViewListener::Menu >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void WebViewListener::Menu::OnShowContextMenu(Awesomium::WebView *, const Awesomium::WebContextMenuInfo &). Got : '%s'",typeid(Luna< WebViewListener::Menu >::check(L,1)).name());
		}
		self->OnShowContextMenu(caller, menu_info);

		return 0;
	}


	// Operator binds:

};

WebViewListener::Menu* LunaTraits< WebViewListener::Menu >::_bind_ctor(lua_State *L) {
	return luna_wrapper_WebViewListener_Menu::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void WebViewListener::Menu::OnShowPopupMenu(Awesomium::WebView * caller, const Awesomium::WebPopupMenuInfo & menu_info)
	// void WebViewListener::Menu::OnShowContextMenu(Awesomium::WebView * caller, const Awesomium::WebContextMenuInfo & menu_info)
}

void LunaTraits< WebViewListener::Menu >::_bind_dtor(WebViewListener::Menu* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< WebViewListener::Menu >::className[] = "Menu";
const char LunaTraits< WebViewListener::Menu >::fullName[] = "WebViewListener::Menu";
const char LunaTraits< WebViewListener::Menu >::moduleName[] = "Awesomium";
const char* LunaTraits< WebViewListener::Menu >::parents[] = {0};
const int LunaTraits< WebViewListener::Menu >::hash = 65961261;
const int LunaTraits< WebViewListener::Menu >::uniqueIDs[] = {65961261,0};

luna_RegType LunaTraits< WebViewListener::Menu >::methods[] = {
	{"OnShowPopupMenu", &luna_wrapper_WebViewListener_Menu::_bind_OnShowPopupMenu},
	{"OnShowContextMenu", &luna_wrapper_WebViewListener_Menu::_bind_OnShowContextMenu},
	{"dynCast", &luna_wrapper_WebViewListener_Menu::_bind_dynCast},
	{"__eq", &luna_wrapper_WebViewListener_Menu::_bind___eq},
	{"getTable", &luna_wrapper_WebViewListener_Menu::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< WebViewListener::Menu >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< WebViewListener::Menu >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

#include <luna/wrappers/wrapper_Awesomium_WebViewListener_Menu.h>

class luna_wrapper_Awesomium_WebViewListener_Menu {
public:
	typedef Luna< Awesomium::WebViewListener::Menu > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebViewListener::Menu* self=(Luna< Awesomium::WebViewListener::Menu >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<Awesomium::WebViewListener::Menu,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,9705715) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::WebViewListener::Menu*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebViewListener::Menu* rhs =(Luna< Awesomium::WebViewListener::Menu >::check(L,2));
		Awesomium::WebViewListener::Menu* self=(Luna< Awesomium::WebViewListener::Menu >::check(L,1));
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

		Awesomium::WebViewListener::Menu* self= (Awesomium::WebViewListener::Menu*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< Awesomium::WebViewListener::Menu >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,9705715) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< Awesomium::WebViewListener::Menu >::check(L,1));
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

		Awesomium::WebViewListener::Menu* self=(Luna< Awesomium::WebViewListener::Menu >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebViewListener::Menu");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebViewListener::Menu",name);
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
	// Awesomium::WebViewListener::Menu::Menu(lua_Table * data)
	static Awesomium::WebViewListener::Menu* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::WebViewListener::Menu::Menu(lua_Table * data) function, expected prototype:\nAwesomium::WebViewListener::Menu::Menu(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_Awesomium_WebViewListener_Menu(L,NULL);
	}


	// Function binds:
	// void Awesomium::WebViewListener::Menu::OnShowPopupMenu(Awesomium::WebView * caller, const Awesomium::WebPopupMenuInfo & menu_info)
	static int _bind_OnShowPopupMenu(lua_State *L) {
		if (!_lg_typecheck_OnShowPopupMenu(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::WebViewListener::Menu::OnShowPopupMenu(Awesomium::WebView * caller, const Awesomium::WebPopupMenuInfo & menu_info) function, expected prototype:\nvoid Awesomium::WebViewListener::Menu::OnShowPopupMenu(Awesomium::WebView * caller, const Awesomium::WebPopupMenuInfo & menu_info)\nClass arguments details:\narg 1 ID = 613205\narg 2 ID = 93395030\n\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		const Awesomium::WebPopupMenuInfo* menu_info_ptr=(Luna< Awesomium::WebPopupMenuInfo >::check(L,3));
		if( !menu_info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg menu_info in Awesomium::WebViewListener::Menu::OnShowPopupMenu function");
		}
		const Awesomium::WebPopupMenuInfo & menu_info=*menu_info_ptr;

		Awesomium::WebViewListener::Menu* self=(Luna< Awesomium::WebViewListener::Menu >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::WebViewListener::Menu::OnShowPopupMenu(Awesomium::WebView *, const Awesomium::WebPopupMenuInfo &). Got : '%s'\n%s",typeid(Luna< Awesomium::WebViewListener::Menu >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnShowPopupMenu(caller, menu_info);

		return 0;
	}

	// void Awesomium::WebViewListener::Menu::OnShowContextMenu(Awesomium::WebView * caller, const Awesomium::WebContextMenuInfo & menu_info)
	static int _bind_OnShowContextMenu(lua_State *L) {
		if (!_lg_typecheck_OnShowContextMenu(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::WebViewListener::Menu::OnShowContextMenu(Awesomium::WebView * caller, const Awesomium::WebContextMenuInfo & menu_info) function, expected prototype:\nvoid Awesomium::WebViewListener::Menu::OnShowContextMenu(Awesomium::WebView * caller, const Awesomium::WebContextMenuInfo & menu_info)\nClass arguments details:\narg 1 ID = 613205\narg 2 ID = 8209039\n\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		const Awesomium::WebContextMenuInfo* menu_info_ptr=(Luna< Awesomium::WebContextMenuInfo >::check(L,3));
		if( !menu_info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg menu_info in Awesomium::WebViewListener::Menu::OnShowContextMenu function");
		}
		const Awesomium::WebContextMenuInfo & menu_info=*menu_info_ptr;

		Awesomium::WebViewListener::Menu* self=(Luna< Awesomium::WebViewListener::Menu >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::WebViewListener::Menu::OnShowContextMenu(Awesomium::WebView *, const Awesomium::WebContextMenuInfo &). Got : '%s'\n%s",typeid(Luna< Awesomium::WebViewListener::Menu >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnShowContextMenu(caller, menu_info);

		return 0;
	}


	// Operator binds:

};

Awesomium::WebViewListener::Menu* LunaTraits< Awesomium::WebViewListener::Menu >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_WebViewListener_Menu::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void Awesomium::WebViewListener::Menu::OnShowPopupMenu(Awesomium::WebView * caller, const Awesomium::WebPopupMenuInfo & menu_info)
	// void Awesomium::WebViewListener::Menu::OnShowContextMenu(Awesomium::WebView * caller, const Awesomium::WebContextMenuInfo & menu_info)
}

void LunaTraits< Awesomium::WebViewListener::Menu >::_bind_dtor(Awesomium::WebViewListener::Menu* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< Awesomium::WebViewListener::Menu >::className[] = "Menu";
const char LunaTraits< Awesomium::WebViewListener::Menu >::fullName[] = "Awesomium::WebViewListener::Menu";
const char LunaTraits< Awesomium::WebViewListener::Menu >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebViewListener::Menu >::parents[] = {0};
const int LunaTraits< Awesomium::WebViewListener::Menu >::hash = 9705715;
const int LunaTraits< Awesomium::WebViewListener::Menu >::uniqueIDs[] = {9705715,0};

luna_RegType LunaTraits< Awesomium::WebViewListener::Menu >::methods[] = {
	{"OnShowPopupMenu", &luna_wrapper_Awesomium_WebViewListener_Menu::_bind_OnShowPopupMenu},
	{"OnShowContextMenu", &luna_wrapper_Awesomium_WebViewListener_Menu::_bind_OnShowContextMenu},
	{"dynCast", &luna_wrapper_Awesomium_WebViewListener_Menu::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_WebViewListener_Menu::_bind___eq},
	{"fromVoid", &luna_wrapper_Awesomium_WebViewListener_Menu::_bind_fromVoid},
	{"asVoid", &luna_wrapper_Awesomium_WebViewListener_Menu::_bind_asVoid},
	{"getTable", &luna_wrapper_Awesomium_WebViewListener_Menu::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebViewListener::Menu >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebViewListener::Menu >::enumValues[] = {
	{0,0}
};



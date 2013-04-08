#include <plug_common.h>

#include <luna/wrappers/wrapper_Awesomium_WebViewListener_Dialog.h>

class luna_wrapper_Awesomium_WebViewListener_Dialog {
public:
	typedef Luna< Awesomium::WebViewListener::Dialog > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		Awesomium::WebViewListener::Dialog* self=(Luna< Awesomium::WebViewListener::Dialog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<Awesomium::WebViewListener::Dialog,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72828454) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::WebViewListener::Dialog*)");
		}

		Awesomium::WebViewListener::Dialog* rhs =(Luna< Awesomium::WebViewListener::Dialog >::check(L,2));
		Awesomium::WebViewListener::Dialog* self=(Luna< Awesomium::WebViewListener::Dialog >::check(L,1));
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		Awesomium::WebViewListener::Dialog* self= (Awesomium::WebViewListener::Dialog*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< Awesomium::WebViewListener::Dialog >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72828454) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< Awesomium::WebViewListener::Dialog >::check(L,1));
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

		Awesomium::WebViewListener::Dialog* self=(Luna< Awesomium::WebViewListener::Dialog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebViewListener::Dialog");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebViewListener::Dialog",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_OnShowFileChooser(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,95946160) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnShowLoginDialog(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,90938304) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// Awesomium::WebViewListener::Dialog::Dialog(lua_Table * data)
	static Awesomium::WebViewListener::Dialog* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebViewListener::Dialog::Dialog(lua_Table * data) function, expected prototype:\nAwesomium::WebViewListener::Dialog::Dialog(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_Awesomium_WebViewListener_Dialog(L,NULL);
	}


	// Function binds:
	// void Awesomium::WebViewListener::Dialog::OnShowFileChooser(Awesomium::WebView * caller, const Awesomium::WebFileChooserInfo & chooser_info)
	static int _bind_OnShowFileChooser(lua_State *L) {
		if (!_lg_typecheck_OnShowFileChooser(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebViewListener::Dialog::OnShowFileChooser(Awesomium::WebView * caller, const Awesomium::WebFileChooserInfo & chooser_info) function, expected prototype:\nvoid Awesomium::WebViewListener::Dialog::OnShowFileChooser(Awesomium::WebView * caller, const Awesomium::WebFileChooserInfo & chooser_info)\nClass arguments details:\narg 1 ID = 613205\narg 2 ID = 95946160\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		const Awesomium::WebFileChooserInfo* chooser_info_ptr=(Luna< Awesomium::WebFileChooserInfo >::check(L,3));
		if( !chooser_info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg chooser_info in Awesomium::WebViewListener::Dialog::OnShowFileChooser function");
		}
		const Awesomium::WebFileChooserInfo & chooser_info=*chooser_info_ptr;

		Awesomium::WebViewListener::Dialog* self=(Luna< Awesomium::WebViewListener::Dialog >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebViewListener::Dialog::OnShowFileChooser(Awesomium::WebView *, const Awesomium::WebFileChooserInfo &). Got : '%s'",typeid(Luna< Awesomium::WebViewListener::Dialog >::check(L,1)).name());
		}
		self->OnShowFileChooser(caller, chooser_info);

		return 0;
	}

	// void Awesomium::WebViewListener::Dialog::OnShowLoginDialog(Awesomium::WebView * caller, const Awesomium::WebLoginDialogInfo & dialog_info)
	static int _bind_OnShowLoginDialog(lua_State *L) {
		if (!_lg_typecheck_OnShowLoginDialog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebViewListener::Dialog::OnShowLoginDialog(Awesomium::WebView * caller, const Awesomium::WebLoginDialogInfo & dialog_info) function, expected prototype:\nvoid Awesomium::WebViewListener::Dialog::OnShowLoginDialog(Awesomium::WebView * caller, const Awesomium::WebLoginDialogInfo & dialog_info)\nClass arguments details:\narg 1 ID = 613205\narg 2 ID = 90938304\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		const Awesomium::WebLoginDialogInfo* dialog_info_ptr=(Luna< Awesomium::WebLoginDialogInfo >::check(L,3));
		if( !dialog_info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dialog_info in Awesomium::WebViewListener::Dialog::OnShowLoginDialog function");
		}
		const Awesomium::WebLoginDialogInfo & dialog_info=*dialog_info_ptr;

		Awesomium::WebViewListener::Dialog* self=(Luna< Awesomium::WebViewListener::Dialog >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebViewListener::Dialog::OnShowLoginDialog(Awesomium::WebView *, const Awesomium::WebLoginDialogInfo &). Got : '%s'",typeid(Luna< Awesomium::WebViewListener::Dialog >::check(L,1)).name());
		}
		self->OnShowLoginDialog(caller, dialog_info);

		return 0;
	}


	// Operator binds:

};

Awesomium::WebViewListener::Dialog* LunaTraits< Awesomium::WebViewListener::Dialog >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_WebViewListener_Dialog::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void Awesomium::WebViewListener::Dialog::OnShowFileChooser(Awesomium::WebView * caller, const Awesomium::WebFileChooserInfo & chooser_info)
	// void Awesomium::WebViewListener::Dialog::OnShowLoginDialog(Awesomium::WebView * caller, const Awesomium::WebLoginDialogInfo & dialog_info)
}

void LunaTraits< Awesomium::WebViewListener::Dialog >::_bind_dtor(Awesomium::WebViewListener::Dialog* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< Awesomium::WebViewListener::Dialog >::className[] = "Dialog";
const char LunaTraits< Awesomium::WebViewListener::Dialog >::fullName[] = "Awesomium::WebViewListener::Dialog";
const char LunaTraits< Awesomium::WebViewListener::Dialog >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebViewListener::Dialog >::parents[] = {0};
const int LunaTraits< Awesomium::WebViewListener::Dialog >::hash = 72828454;
const int LunaTraits< Awesomium::WebViewListener::Dialog >::uniqueIDs[] = {72828454,0};

luna_RegType LunaTraits< Awesomium::WebViewListener::Dialog >::methods[] = {
	{"OnShowFileChooser", &luna_wrapper_Awesomium_WebViewListener_Dialog::_bind_OnShowFileChooser},
	{"OnShowLoginDialog", &luna_wrapper_Awesomium_WebViewListener_Dialog::_bind_OnShowLoginDialog},
	{"dynCast", &luna_wrapper_Awesomium_WebViewListener_Dialog::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_WebViewListener_Dialog::_bind___eq},
	{"fromVoid", &luna_wrapper_Awesomium_WebViewListener_Dialog::_bind_fromVoid},
	{"asVoid", &luna_wrapper_Awesomium_WebViewListener_Dialog::_bind_asVoid},
	{"getTable", &luna_wrapper_Awesomium_WebViewListener_Dialog::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebViewListener::Dialog >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebViewListener::Dialog >::enumValues[] = {
	{0,0}
};



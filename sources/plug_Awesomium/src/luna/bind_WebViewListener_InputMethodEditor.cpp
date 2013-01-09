#include <plug_common.h>

#include <luna/wrappers/wrapper_WebViewListener_InputMethodEditor.h>

class luna_wrapper_WebViewListener_InputMethodEditor {
public:
	typedef Luna< WebViewListener::InputMethodEditor > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		WebViewListener::InputMethodEditor* self=(Luna< WebViewListener::InputMethodEditor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<WebViewListener::InputMethodEditor,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85723603) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(WebViewListener::InputMethodEditor*)");
		}

		WebViewListener::InputMethodEditor* rhs =(Luna< WebViewListener::InputMethodEditor >::check(L,2));
		WebViewListener::InputMethodEditor* self=(Luna< WebViewListener::InputMethodEditor >::check(L,1));
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

		WebViewListener::InputMethodEditor* self=(Luna< WebViewListener::InputMethodEditor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("WebViewListener::InputMethodEditor");
		
		return luna_dynamicCast(L,converters,"WebViewListener::InputMethodEditor",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_OnUpdateIME(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnCancelIME(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnChangeIMERange(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// WebViewListener::InputMethodEditor::InputMethodEditor(lua_Table * data)
	static WebViewListener::InputMethodEditor* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in WebViewListener::InputMethodEditor::InputMethodEditor(lua_Table * data) function, expected prototype:\nWebViewListener::InputMethodEditor::InputMethodEditor(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_WebViewListener_InputMethodEditor(L,NULL);
	}


	// Function binds:
	// void WebViewListener::InputMethodEditor::OnUpdateIME(Awesomium::WebView * caller, Awesomium::TextInputType type, int caret_x, int caret_y)
	static int _bind_OnUpdateIME(lua_State *L) {
		if (!_lg_typecheck_OnUpdateIME(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void WebViewListener::InputMethodEditor::OnUpdateIME(Awesomium::WebView * caller, Awesomium::TextInputType type, int caret_x, int caret_y) function, expected prototype:\nvoid WebViewListener::InputMethodEditor::OnUpdateIME(Awesomium::WebView * caller, Awesomium::TextInputType type, int caret_x, int caret_y)\nClass arguments details:\narg 1 ID = 613205\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		Awesomium::TextInputType type=(Awesomium::TextInputType)lua_tointeger(L,3);
		int caret_x=(int)lua_tointeger(L,4);
		int caret_y=(int)lua_tointeger(L,5);

		WebViewListener::InputMethodEditor* self=(Luna< WebViewListener::InputMethodEditor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void WebViewListener::InputMethodEditor::OnUpdateIME(Awesomium::WebView *, Awesomium::TextInputType, int, int). Got : '%s'",typeid(Luna< WebViewListener::InputMethodEditor >::check(L,1)).name());
		}
		self->OnUpdateIME(caller, type, caret_x, caret_y);

		return 0;
	}

	// void WebViewListener::InputMethodEditor::OnCancelIME(Awesomium::WebView * caller)
	static int _bind_OnCancelIME(lua_State *L) {
		if (!_lg_typecheck_OnCancelIME(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void WebViewListener::InputMethodEditor::OnCancelIME(Awesomium::WebView * caller) function, expected prototype:\nvoid WebViewListener::InputMethodEditor::OnCancelIME(Awesomium::WebView * caller)\nClass arguments details:\narg 1 ID = 613205\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));

		WebViewListener::InputMethodEditor* self=(Luna< WebViewListener::InputMethodEditor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void WebViewListener::InputMethodEditor::OnCancelIME(Awesomium::WebView *). Got : '%s'",typeid(Luna< WebViewListener::InputMethodEditor >::check(L,1)).name());
		}
		self->OnCancelIME(caller);

		return 0;
	}

	// void WebViewListener::InputMethodEditor::OnChangeIMERange(Awesomium::WebView * caller, unsigned int start, unsigned int end)
	static int _bind_OnChangeIMERange(lua_State *L) {
		if (!_lg_typecheck_OnChangeIMERange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void WebViewListener::InputMethodEditor::OnChangeIMERange(Awesomium::WebView * caller, unsigned int start, unsigned int end) function, expected prototype:\nvoid WebViewListener::InputMethodEditor::OnChangeIMERange(Awesomium::WebView * caller, unsigned int start, unsigned int end)\nClass arguments details:\narg 1 ID = 613205\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		unsigned int start=(unsigned int)lua_tointeger(L,3);
		unsigned int end=(unsigned int)lua_tointeger(L,4);

		WebViewListener::InputMethodEditor* self=(Luna< WebViewListener::InputMethodEditor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void WebViewListener::InputMethodEditor::OnChangeIMERange(Awesomium::WebView *, unsigned int, unsigned int). Got : '%s'",typeid(Luna< WebViewListener::InputMethodEditor >::check(L,1)).name());
		}
		self->OnChangeIMERange(caller, start, end);

		return 0;
	}


	// Operator binds:

};

WebViewListener::InputMethodEditor* LunaTraits< WebViewListener::InputMethodEditor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_WebViewListener_InputMethodEditor::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void WebViewListener::InputMethodEditor::OnUpdateIME(Awesomium::WebView * caller, Awesomium::TextInputType type, int caret_x, int caret_y)
	// void WebViewListener::InputMethodEditor::OnCancelIME(Awesomium::WebView * caller)
	// void WebViewListener::InputMethodEditor::OnChangeIMERange(Awesomium::WebView * caller, unsigned int start, unsigned int end)
}

void LunaTraits< WebViewListener::InputMethodEditor >::_bind_dtor(WebViewListener::InputMethodEditor* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< WebViewListener::InputMethodEditor >::className[] = "InputMethodEditor";
const char LunaTraits< WebViewListener::InputMethodEditor >::fullName[] = "WebViewListener::InputMethodEditor";
const char LunaTraits< WebViewListener::InputMethodEditor >::moduleName[] = "Awesomium";
const char* LunaTraits< WebViewListener::InputMethodEditor >::parents[] = {0};
const int LunaTraits< WebViewListener::InputMethodEditor >::hash = 85723603;
const int LunaTraits< WebViewListener::InputMethodEditor >::uniqueIDs[] = {85723603,0};

luna_RegType LunaTraits< WebViewListener::InputMethodEditor >::methods[] = {
	{"OnUpdateIME", &luna_wrapper_WebViewListener_InputMethodEditor::_bind_OnUpdateIME},
	{"OnCancelIME", &luna_wrapper_WebViewListener_InputMethodEditor::_bind_OnCancelIME},
	{"OnChangeIMERange", &luna_wrapper_WebViewListener_InputMethodEditor::_bind_OnChangeIMERange},
	{"dynCast", &luna_wrapper_WebViewListener_InputMethodEditor::_bind_dynCast},
	{"__eq", &luna_wrapper_WebViewListener_InputMethodEditor::_bind___eq},
	{"getTable", &luna_wrapper_WebViewListener_InputMethodEditor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< WebViewListener::InputMethodEditor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< WebViewListener::InputMethodEditor >::enumValues[] = {
	{0,0}
};



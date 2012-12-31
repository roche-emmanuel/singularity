#include <plug_common.h>

#include <luna/wrappers/wrapper_WebViewListener_Print.h>

class luna_wrapper_WebViewListener_Print {
public:
	typedef Luna< WebViewListener::Print > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		WebViewListener::Print* self=(Luna< WebViewListener::Print >::check(L,1));
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

		if( !Luna<void>::has_uniqueid(L,1,47951591) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(WebViewListener::Print*)");
		}

		WebViewListener::Print* rhs =(Luna< WebViewListener::Print >::check(L,2));
		WebViewListener::Print* self=(Luna< WebViewListener::Print >::check(L,1));
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

		WebViewListener::Print* self=(Luna< WebViewListener::Print >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("WebViewListener::Print");
		
		return luna_dynamicCast(L,converters,"WebViewListener::Print",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_OnRequestPrint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFailPrint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFinishPrint(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,16354805) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// WebViewListener::Print::Print(lua_Table * data)
	static WebViewListener::Print* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in WebViewListener::Print::Print(lua_Table * data) function, expected prototype:\nWebViewListener::Print::Print(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_WebViewListener_Print(L,NULL);
	}


	// Function binds:
	// void WebViewListener::Print::OnRequestPrint(Awesomium::WebView * caller)
	static int _bind_OnRequestPrint(lua_State *L) {
		if (!_lg_typecheck_OnRequestPrint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void WebViewListener::Print::OnRequestPrint(Awesomium::WebView * caller) function, expected prototype:\nvoid WebViewListener::Print::OnRequestPrint(Awesomium::WebView * caller)\nClass arguments details:\narg 1 ID = 613205\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));

		WebViewListener::Print* self=(Luna< WebViewListener::Print >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void WebViewListener::Print::OnRequestPrint(Awesomium::WebView *)");
		}
		self->OnRequestPrint(caller);

		return 0;
	}

	// void WebViewListener::Print::OnFailPrint(Awesomium::WebView * caller, int request_id)
	static int _bind_OnFailPrint(lua_State *L) {
		if (!_lg_typecheck_OnFailPrint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void WebViewListener::Print::OnFailPrint(Awesomium::WebView * caller, int request_id) function, expected prototype:\nvoid WebViewListener::Print::OnFailPrint(Awesomium::WebView * caller, int request_id)\nClass arguments details:\narg 1 ID = 613205\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		int request_id=(int)lua_tointeger(L,3);

		WebViewListener::Print* self=(Luna< WebViewListener::Print >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void WebViewListener::Print::OnFailPrint(Awesomium::WebView *, int)");
		}
		self->OnFailPrint(caller, request_id);

		return 0;
	}

	// void WebViewListener::Print::OnFinishPrint(Awesomium::WebView * caller, int request_id, const Awesomium::WebStringArray & file_list)
	static int _bind_OnFinishPrint(lua_State *L) {
		if (!_lg_typecheck_OnFinishPrint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void WebViewListener::Print::OnFinishPrint(Awesomium::WebView * caller, int request_id, const Awesomium::WebStringArray & file_list) function, expected prototype:\nvoid WebViewListener::Print::OnFinishPrint(Awesomium::WebView * caller, int request_id, const Awesomium::WebStringArray & file_list)\nClass arguments details:\narg 1 ID = 613205\narg 3 ID = 16354805\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		int request_id=(int)lua_tointeger(L,3);
		const Awesomium::WebStringArray* file_list_ptr=(Luna< Awesomium::WebStringArray >::check(L,4));
		if( !file_list_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg file_list in WebViewListener::Print::OnFinishPrint function");
		}
		const Awesomium::WebStringArray & file_list=*file_list_ptr;

		WebViewListener::Print* self=(Luna< WebViewListener::Print >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void WebViewListener::Print::OnFinishPrint(Awesomium::WebView *, int, const Awesomium::WebStringArray &)");
		}
		self->OnFinishPrint(caller, request_id, file_list);

		return 0;
	}


	// Operator binds:

};

WebViewListener::Print* LunaTraits< WebViewListener::Print >::_bind_ctor(lua_State *L) {
	return luna_wrapper_WebViewListener_Print::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void WebViewListener::Print::OnRequestPrint(Awesomium::WebView * caller)
	// void WebViewListener::Print::OnFailPrint(Awesomium::WebView * caller, int request_id)
	// void WebViewListener::Print::OnFinishPrint(Awesomium::WebView * caller, int request_id, const Awesomium::WebStringArray & file_list)
}

void LunaTraits< WebViewListener::Print >::_bind_dtor(WebViewListener::Print* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< WebViewListener::Print >::className[] = "Print";
const char LunaTraits< WebViewListener::Print >::fullName[] = "WebViewListener::Print";
const char LunaTraits< WebViewListener::Print >::moduleName[] = "Awesomium";
const char* LunaTraits< WebViewListener::Print >::parents[] = {0};
const int LunaTraits< WebViewListener::Print >::hash = 47951591;
const int LunaTraits< WebViewListener::Print >::uniqueIDs[] = {47951591,0};

luna_RegType LunaTraits< WebViewListener::Print >::methods[] = {
	{"OnRequestPrint", &luna_wrapper_WebViewListener_Print::_bind_OnRequestPrint},
	{"OnFailPrint", &luna_wrapper_WebViewListener_Print::_bind_OnFailPrint},
	{"OnFinishPrint", &luna_wrapper_WebViewListener_Print::_bind_OnFinishPrint},
	{"dynCast", &luna_wrapper_WebViewListener_Print::_bind_dynCast},
	{"__eq", &luna_wrapper_WebViewListener_Print::_bind___eq},
	{"getTable", &luna_wrapper_WebViewListener_Print::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< WebViewListener::Print >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< WebViewListener::Print >::enumValues[] = {
	{0,0}
};



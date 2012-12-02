#include <plug_common.h>

#include <luna/wrappers/wrapper_WebViewListener_Process.h>

class luna_wrapper_WebViewListener_Process {
public:
	typedef Luna< WebViewListener::Process > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86671035) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(WebViewListener::Process*)");
		}

		WebViewListener::Process* rhs =(Luna< WebViewListener::Process >::check(L,2));
		WebViewListener::Process* self=(Luna< WebViewListener::Process >::check(L,1));
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

		WebViewListener::Process* self=(Luna< WebViewListener::Process >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("WebViewListener::Process");
		
		return luna_dynamicCast(L,converters,"WebViewListener::Process",name);
	}


	// Function checkers:
	inline static bool _lg_typecheck_OnUnresponsive(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnResponsive(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnCrashed(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void WebViewListener::Process::OnUnresponsive(Awesomium::WebView * caller)
	static int _bind_OnUnresponsive(lua_State *L) {
		if (!_lg_typecheck_OnUnresponsive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void WebViewListener::Process::OnUnresponsive(Awesomium::WebView * caller) function, expected prototype:\nvoid WebViewListener::Process::OnUnresponsive(Awesomium::WebView * caller)\nClass arguments details:\narg 1 ID = 613205\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));

		WebViewListener::Process* self=(Luna< WebViewListener::Process >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void WebViewListener::Process::OnUnresponsive(Awesomium::WebView *)");
		}
		self->OnUnresponsive(caller);

		return 0;
	}

	// void WebViewListener::Process::OnResponsive(Awesomium::WebView * caller)
	static int _bind_OnResponsive(lua_State *L) {
		if (!_lg_typecheck_OnResponsive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void WebViewListener::Process::OnResponsive(Awesomium::WebView * caller) function, expected prototype:\nvoid WebViewListener::Process::OnResponsive(Awesomium::WebView * caller)\nClass arguments details:\narg 1 ID = 613205\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));

		WebViewListener::Process* self=(Luna< WebViewListener::Process >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void WebViewListener::Process::OnResponsive(Awesomium::WebView *)");
		}
		self->OnResponsive(caller);

		return 0;
	}

	// void WebViewListener::Process::OnCrashed(Awesomium::WebView * caller, Awesomium::TerminationStatus status)
	static int _bind_OnCrashed(lua_State *L) {
		if (!_lg_typecheck_OnCrashed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void WebViewListener::Process::OnCrashed(Awesomium::WebView * caller, Awesomium::TerminationStatus status) function, expected prototype:\nvoid WebViewListener::Process::OnCrashed(Awesomium::WebView * caller, Awesomium::TerminationStatus status)\nClass arguments details:\narg 1 ID = 613205\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		Awesomium::TerminationStatus status=(Awesomium::TerminationStatus)lua_tointeger(L,3);

		WebViewListener::Process* self=(Luna< WebViewListener::Process >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void WebViewListener::Process::OnCrashed(Awesomium::WebView *, Awesomium::TerminationStatus)");
		}
		self->OnCrashed(caller, status);

		return 0;
	}


	// Operator binds:

};

WebViewListener::Process* LunaTraits< WebViewListener::Process >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void WebViewListener::Process::OnUnresponsive(Awesomium::WebView * caller)
	// void WebViewListener::Process::OnResponsive(Awesomium::WebView * caller)
	// void WebViewListener::Process::OnCrashed(Awesomium::WebView * caller, Awesomium::TerminationStatus status)
}

void LunaTraits< WebViewListener::Process >::_bind_dtor(WebViewListener::Process* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< WebViewListener::Process >::className[] = "Process";
const char LunaTraits< WebViewListener::Process >::fullName[] = "WebViewListener::Process";
const char LunaTraits< WebViewListener::Process >::moduleName[] = "WebViewListener";
const char* LunaTraits< WebViewListener::Process >::parents[] = {0};
const int LunaTraits< WebViewListener::Process >::hash = 86671035;
const int LunaTraits< WebViewListener::Process >::uniqueIDs[] = {86671035,0};

luna_RegType LunaTraits< WebViewListener::Process >::methods[] = {
	{"OnUnresponsive", &luna_wrapper_WebViewListener_Process::_bind_OnUnresponsive},
	{"OnResponsive", &luna_wrapper_WebViewListener_Process::_bind_OnResponsive},
	{"OnCrashed", &luna_wrapper_WebViewListener_Process::_bind_OnCrashed},
	{"dynCast", &luna_wrapper_WebViewListener_Process::_bind_dynCast},
	{"__eq", &luna_wrapper_WebViewListener_Process::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< WebViewListener::Process >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< WebViewListener::Process >::enumValues[] = {
	{0,0}
};



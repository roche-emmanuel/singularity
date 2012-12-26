#include <plug_common.h>

#include <luna/wrappers/wrapper_Awesomium_JSMethodHandler.h>

class luna_wrapper_Awesomium_JSMethodHandler {
public:
	typedef Luna< Awesomium::JSMethodHandler > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		Awesomium::JSMethodHandler* self=(Luna< Awesomium::JSMethodHandler >::check(L,1));
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

		if( !Luna<void>::has_uniqueid(L,1,91373609) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::JSMethodHandler*)");
		}

		Awesomium::JSMethodHandler* rhs =(Luna< Awesomium::JSMethodHandler >::check(L,2));
		Awesomium::JSMethodHandler* self=(Luna< Awesomium::JSMethodHandler >::check(L,1));
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

		Awesomium::JSMethodHandler* self=(Luna< Awesomium::JSMethodHandler >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::JSMethodHandler");
		
		return luna_dynamicCast(L,converters,"Awesomium::JSMethodHandler",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_OnMethodCall(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isstring(L,4)==0) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,18109170) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnMethodCallWithReturnValue(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isstring(L,4)==0) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,18109170) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void Awesomium::JSMethodHandler::OnMethodCall(Awesomium::WebView * caller, unsigned int remote_object_id, const Awesomium::WebString & method_name, const Awesomium::JSArray & args)
	static int _bind_OnMethodCall(lua_State *L) {
		if (!_lg_typecheck_OnMethodCall(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::JSMethodHandler::OnMethodCall(Awesomium::WebView * caller, unsigned int remote_object_id, const Awesomium::WebString & method_name, const Awesomium::JSArray & args) function, expected prototype:\nvoid Awesomium::JSMethodHandler::OnMethodCall(Awesomium::WebView * caller, unsigned int remote_object_id, const Awesomium::WebString & method_name, const Awesomium::JSArray & args)\nClass arguments details:\narg 1 ID = 613205\narg 3 ID = 13938525\narg 4 ID = 18109170\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		unsigned int remote_object_id=(unsigned int)lua_tointeger(L,3);
		std::string method_name_str(lua_tostring(L,4),lua_objlen(L,4));
		Awesomium::WebString method_name = Awesomium::ToWebString(method_name_str);
		const Awesomium::JSArray* args_ptr=(Luna< Awesomium::JSArray >::check(L,5));
		if( !args_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg args in Awesomium::JSMethodHandler::OnMethodCall function");
		}
		const Awesomium::JSArray & args=*args_ptr;

		Awesomium::JSMethodHandler* self=(Luna< Awesomium::JSMethodHandler >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::JSMethodHandler::OnMethodCall(Awesomium::WebView *, unsigned int, const Awesomium::WebString &, const Awesomium::JSArray &)");
		}
		self->OnMethodCall(caller, remote_object_id, method_name, args);

		return 0;
	}

	// Awesomium::JSValue Awesomium::JSMethodHandler::OnMethodCallWithReturnValue(Awesomium::WebView * caller, unsigned int remote_object_id, const Awesomium::WebString & method_name, const Awesomium::JSArray & args)
	static int _bind_OnMethodCallWithReturnValue(lua_State *L) {
		if (!_lg_typecheck_OnMethodCallWithReturnValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::JSValue Awesomium::JSMethodHandler::OnMethodCallWithReturnValue(Awesomium::WebView * caller, unsigned int remote_object_id, const Awesomium::WebString & method_name, const Awesomium::JSArray & args) function, expected prototype:\nAwesomium::JSValue Awesomium::JSMethodHandler::OnMethodCallWithReturnValue(Awesomium::WebView * caller, unsigned int remote_object_id, const Awesomium::WebString & method_name, const Awesomium::JSArray & args)\nClass arguments details:\narg 1 ID = 613205\narg 3 ID = 13938525\narg 4 ID = 18109170\n");
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		unsigned int remote_object_id=(unsigned int)lua_tointeger(L,3);
		std::string method_name_str(lua_tostring(L,4),lua_objlen(L,4));
		Awesomium::WebString method_name = Awesomium::ToWebString(method_name_str);
		const Awesomium::JSArray* args_ptr=(Luna< Awesomium::JSArray >::check(L,5));
		if( !args_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg args in Awesomium::JSMethodHandler::OnMethodCallWithReturnValue function");
		}
		const Awesomium::JSArray & args=*args_ptr;

		Awesomium::JSMethodHandler* self=(Luna< Awesomium::JSMethodHandler >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::JSValue Awesomium::JSMethodHandler::OnMethodCallWithReturnValue(Awesomium::WebView *, unsigned int, const Awesomium::WebString &, const Awesomium::JSArray &)");
		}
		Awesomium::JSValue stack_lret = self->OnMethodCallWithReturnValue(caller, remote_object_id, method_name, args);
		Awesomium::JSValue* lret = new Awesomium::JSValue(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::JSValue >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

Awesomium::JSMethodHandler* LunaTraits< Awesomium::JSMethodHandler >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void Awesomium::JSMethodHandler::OnMethodCall(Awesomium::WebView * caller, unsigned int remote_object_id, const Awesomium::WebString & method_name, const Awesomium::JSArray & args)
	// Awesomium::JSValue Awesomium::JSMethodHandler::OnMethodCallWithReturnValue(Awesomium::WebView * caller, unsigned int remote_object_id, const Awesomium::WebString & method_name, const Awesomium::JSArray & args)
}

void LunaTraits< Awesomium::JSMethodHandler >::_bind_dtor(Awesomium::JSMethodHandler* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::JSMethodHandler >::className[] = "JSMethodHandler";
const char LunaTraits< Awesomium::JSMethodHandler >::fullName[] = "Awesomium::JSMethodHandler";
const char LunaTraits< Awesomium::JSMethodHandler >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::JSMethodHandler >::parents[] = {0};
const int LunaTraits< Awesomium::JSMethodHandler >::hash = 91373609;
const int LunaTraits< Awesomium::JSMethodHandler >::uniqueIDs[] = {91373609,0};

luna_RegType LunaTraits< Awesomium::JSMethodHandler >::methods[] = {
	{"OnMethodCall", &luna_wrapper_Awesomium_JSMethodHandler::_bind_OnMethodCall},
	{"OnMethodCallWithReturnValue", &luna_wrapper_Awesomium_JSMethodHandler::_bind_OnMethodCallWithReturnValue},
	{"dynCast", &luna_wrapper_Awesomium_JSMethodHandler::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_JSMethodHandler::_bind___eq},
	{"getTable", &luna_wrapper_Awesomium_JSMethodHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::JSMethodHandler >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::JSMethodHandler >::enumValues[] = {
	{0,0}
};



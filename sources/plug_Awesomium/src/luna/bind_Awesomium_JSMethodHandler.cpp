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
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::JSMethodHandler* self=(Luna< Awesomium::JSMethodHandler >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<Awesomium::JSMethodHandler,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::JSMethodHandler*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::JSMethodHandler* rhs =(Luna< Awesomium::JSMethodHandler >::check(L,2));
		Awesomium::JSMethodHandler* self=(Luna< Awesomium::JSMethodHandler >::check(L,1));
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

		Awesomium::JSMethodHandler* self= (Awesomium::JSMethodHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< Awesomium::JSMethodHandler >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91373609) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< Awesomium::JSMethodHandler >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
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
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_OnMethodCall(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TSTRING) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,18109170) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnMethodCallWithReturnValue(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TSTRING) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,18109170) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// Awesomium::JSMethodHandler::JSMethodHandler(lua_Table * data)
	static Awesomium::JSMethodHandler* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::JSMethodHandler::JSMethodHandler(lua_Table * data) function, expected prototype:\nAwesomium::JSMethodHandler::JSMethodHandler(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_Awesomium_JSMethodHandler(L,NULL);
	}


	// Function binds:
	// void Awesomium::JSMethodHandler::OnMethodCall(Awesomium::WebView * caller, unsigned int remote_object_id, const Awesomium::WebString & method_name, const Awesomium::JSArray & args)
	static int _bind_OnMethodCall(lua_State *L) {
		if (!_lg_typecheck_OnMethodCall(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::JSMethodHandler::OnMethodCall(Awesomium::WebView * caller, unsigned int remote_object_id, const Awesomium::WebString & method_name, const Awesomium::JSArray & args) function, expected prototype:\nvoid Awesomium::JSMethodHandler::OnMethodCall(Awesomium::WebView * caller, unsigned int remote_object_id, const Awesomium::WebString & method_name, const Awesomium::JSArray & args)\nClass arguments details:\narg 1 ID = 613205\narg 3 ID = 13938525\narg 4 ID = 18109170\n\n%s",luna_dumpStack(L).c_str());
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
			luaL_error(L, "Invalid object in function call void Awesomium::JSMethodHandler::OnMethodCall(Awesomium::WebView *, unsigned int, const Awesomium::WebString &, const Awesomium::JSArray &). Got : '%s'\n%s",typeid(Luna< Awesomium::JSMethodHandler >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnMethodCall(caller, remote_object_id, method_name, args);

		return 0;
	}

	// Awesomium::JSValue Awesomium::JSMethodHandler::OnMethodCallWithReturnValue(Awesomium::WebView * caller, unsigned int remote_object_id, const Awesomium::WebString & method_name, const Awesomium::JSArray & args)
	static int _bind_OnMethodCallWithReturnValue(lua_State *L) {
		if (!_lg_typecheck_OnMethodCallWithReturnValue(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::JSValue Awesomium::JSMethodHandler::OnMethodCallWithReturnValue(Awesomium::WebView * caller, unsigned int remote_object_id, const Awesomium::WebString & method_name, const Awesomium::JSArray & args) function, expected prototype:\nAwesomium::JSValue Awesomium::JSMethodHandler::OnMethodCallWithReturnValue(Awesomium::WebView * caller, unsigned int remote_object_id, const Awesomium::WebString & method_name, const Awesomium::JSArray & args)\nClass arguments details:\narg 1 ID = 613205\narg 3 ID = 13938525\narg 4 ID = 18109170\n\n%s",luna_dumpStack(L).c_str());
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
			luaL_error(L, "Invalid object in function call Awesomium::JSValue Awesomium::JSMethodHandler::OnMethodCallWithReturnValue(Awesomium::WebView *, unsigned int, const Awesomium::WebString &, const Awesomium::JSArray &). Got : '%s'\n%s",typeid(Luna< Awesomium::JSMethodHandler >::check(L,1)).name(),luna_dumpStack(L).c_str());
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
	return luna_wrapper_Awesomium_JSMethodHandler::_bind_ctor(L);
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
	{"fromVoid", &luna_wrapper_Awesomium_JSMethodHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_Awesomium_JSMethodHandler::_bind_asVoid},
	{"getTable", &luna_wrapper_Awesomium_JSMethodHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::JSMethodHandler >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::JSMethodHandler >::enumValues[] = {
	{0,0}
};



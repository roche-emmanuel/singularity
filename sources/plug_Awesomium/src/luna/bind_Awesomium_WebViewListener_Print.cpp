#include <plug_common.h>

#include <luna/wrappers/wrapper_Awesomium_WebViewListener_Print.h>

class luna_wrapper_Awesomium_WebViewListener_Print {
public:
	typedef Luna< Awesomium::WebViewListener::Print > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebViewListener::Print* self=(Luna< Awesomium::WebViewListener::Print >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<Awesomium::WebViewListener::Print,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,4030006) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::WebViewListener::Print*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebViewListener::Print* rhs =(Luna< Awesomium::WebViewListener::Print >::check(L,2));
		Awesomium::WebViewListener::Print* self=(Luna< Awesomium::WebViewListener::Print >::check(L,1));
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

		Awesomium::WebViewListener::Print* self= (Awesomium::WebViewListener::Print*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< Awesomium::WebViewListener::Print >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,4030006) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< Awesomium::WebViewListener::Print >::check(L,1));
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

		Awesomium::WebViewListener::Print* self=(Luna< Awesomium::WebViewListener::Print >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebViewListener::Print");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebViewListener::Print",name);
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
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFinishPrint(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,16354805) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// Awesomium::WebViewListener::Print::Print(lua_Table * data)
	static Awesomium::WebViewListener::Print* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::WebViewListener::Print::Print(lua_Table * data) function, expected prototype:\nAwesomium::WebViewListener::Print::Print(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_Awesomium_WebViewListener_Print(L,NULL);
	}


	// Function binds:
	// void Awesomium::WebViewListener::Print::OnRequestPrint(Awesomium::WebView * caller)
	static int _bind_OnRequestPrint(lua_State *L) {
		if (!_lg_typecheck_OnRequestPrint(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::WebViewListener::Print::OnRequestPrint(Awesomium::WebView * caller) function, expected prototype:\nvoid Awesomium::WebViewListener::Print::OnRequestPrint(Awesomium::WebView * caller)\nClass arguments details:\narg 1 ID = 613205\n\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));

		Awesomium::WebViewListener::Print* self=(Luna< Awesomium::WebViewListener::Print >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::WebViewListener::Print::OnRequestPrint(Awesomium::WebView *). Got : '%s'\n%s",typeid(Luna< Awesomium::WebViewListener::Print >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnRequestPrint(caller);

		return 0;
	}

	// void Awesomium::WebViewListener::Print::OnFailPrint(Awesomium::WebView * caller, int request_id)
	static int _bind_OnFailPrint(lua_State *L) {
		if (!_lg_typecheck_OnFailPrint(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::WebViewListener::Print::OnFailPrint(Awesomium::WebView * caller, int request_id) function, expected prototype:\nvoid Awesomium::WebViewListener::Print::OnFailPrint(Awesomium::WebView * caller, int request_id)\nClass arguments details:\narg 1 ID = 613205\n\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		int request_id=(int)lua_tointeger(L,3);

		Awesomium::WebViewListener::Print* self=(Luna< Awesomium::WebViewListener::Print >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::WebViewListener::Print::OnFailPrint(Awesomium::WebView *, int). Got : '%s'\n%s",typeid(Luna< Awesomium::WebViewListener::Print >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnFailPrint(caller, request_id);

		return 0;
	}

	// void Awesomium::WebViewListener::Print::OnFinishPrint(Awesomium::WebView * caller, int request_id, const Awesomium::WebStringArray & file_list)
	static int _bind_OnFinishPrint(lua_State *L) {
		if (!_lg_typecheck_OnFinishPrint(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::WebViewListener::Print::OnFinishPrint(Awesomium::WebView * caller, int request_id, const Awesomium::WebStringArray & file_list) function, expected prototype:\nvoid Awesomium::WebViewListener::Print::OnFinishPrint(Awesomium::WebView * caller, int request_id, const Awesomium::WebStringArray & file_list)\nClass arguments details:\narg 1 ID = 613205\narg 3 ID = 16354805\n\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		int request_id=(int)lua_tointeger(L,3);
		const Awesomium::WebStringArray* file_list_ptr=(Luna< Awesomium::WebStringArray >::check(L,4));
		if( !file_list_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg file_list in Awesomium::WebViewListener::Print::OnFinishPrint function");
		}
		const Awesomium::WebStringArray & file_list=*file_list_ptr;

		Awesomium::WebViewListener::Print* self=(Luna< Awesomium::WebViewListener::Print >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::WebViewListener::Print::OnFinishPrint(Awesomium::WebView *, int, const Awesomium::WebStringArray &). Got : '%s'\n%s",typeid(Luna< Awesomium::WebViewListener::Print >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnFinishPrint(caller, request_id, file_list);

		return 0;
	}


	// Operator binds:

};

Awesomium::WebViewListener::Print* LunaTraits< Awesomium::WebViewListener::Print >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_WebViewListener_Print::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void Awesomium::WebViewListener::Print::OnRequestPrint(Awesomium::WebView * caller)
	// void Awesomium::WebViewListener::Print::OnFailPrint(Awesomium::WebView * caller, int request_id)
	// void Awesomium::WebViewListener::Print::OnFinishPrint(Awesomium::WebView * caller, int request_id, const Awesomium::WebStringArray & file_list)
}

void LunaTraits< Awesomium::WebViewListener::Print >::_bind_dtor(Awesomium::WebViewListener::Print* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< Awesomium::WebViewListener::Print >::className[] = "Print";
const char LunaTraits< Awesomium::WebViewListener::Print >::fullName[] = "Awesomium::WebViewListener::Print";
const char LunaTraits< Awesomium::WebViewListener::Print >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebViewListener::Print >::parents[] = {0};
const int LunaTraits< Awesomium::WebViewListener::Print >::hash = 4030006;
const int LunaTraits< Awesomium::WebViewListener::Print >::uniqueIDs[] = {4030006,0};

luna_RegType LunaTraits< Awesomium::WebViewListener::Print >::methods[] = {
	{"OnRequestPrint", &luna_wrapper_Awesomium_WebViewListener_Print::_bind_OnRequestPrint},
	{"OnFailPrint", &luna_wrapper_Awesomium_WebViewListener_Print::_bind_OnFailPrint},
	{"OnFinishPrint", &luna_wrapper_Awesomium_WebViewListener_Print::_bind_OnFinishPrint},
	{"dynCast", &luna_wrapper_Awesomium_WebViewListener_Print::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_WebViewListener_Print::_bind___eq},
	{"fromVoid", &luna_wrapper_Awesomium_WebViewListener_Print::_bind_fromVoid},
	{"asVoid", &luna_wrapper_Awesomium_WebViewListener_Print::_bind_asVoid},
	{"getTable", &luna_wrapper_Awesomium_WebViewListener_Print::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebViewListener::Print >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebViewListener::Print >::enumValues[] = {
	{0,0}
};



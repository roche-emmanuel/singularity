#include <plug_common.h>

#include <luna/wrappers/wrapper_Awesomium_WebViewListener_Process.h>

class luna_wrapper_Awesomium_WebViewListener_Process {
public:
	typedef Luna< Awesomium::WebViewListener::Process > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebViewListener::Process* self=(Luna< Awesomium::WebViewListener::Process >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<Awesomium::WebViewListener::Process,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78037157) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::WebViewListener::Process*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebViewListener::Process* rhs =(Luna< Awesomium::WebViewListener::Process >::check(L,2));
		Awesomium::WebViewListener::Process* self=(Luna< Awesomium::WebViewListener::Process >::check(L,1));
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

		Awesomium::WebViewListener::Process* self= (Awesomium::WebViewListener::Process*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< Awesomium::WebViewListener::Process >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78037157) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< Awesomium::WebViewListener::Process >::check(L,1));
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

		Awesomium::WebViewListener::Process* self=(Luna< Awesomium::WebViewListener::Process >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebViewListener::Process");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebViewListener::Process",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
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
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// Awesomium::WebViewListener::Process::Process(lua_Table * data)
	static Awesomium::WebViewListener::Process* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::WebViewListener::Process::Process(lua_Table * data) function, expected prototype:\nAwesomium::WebViewListener::Process::Process(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_Awesomium_WebViewListener_Process(L,NULL);
	}


	// Function binds:
	// void Awesomium::WebViewListener::Process::OnUnresponsive(Awesomium::WebView * caller)
	static int _bind_OnUnresponsive(lua_State *L) {
		if (!_lg_typecheck_OnUnresponsive(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::WebViewListener::Process::OnUnresponsive(Awesomium::WebView * caller) function, expected prototype:\nvoid Awesomium::WebViewListener::Process::OnUnresponsive(Awesomium::WebView * caller)\nClass arguments details:\narg 1 ID = 613205\n\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));

		Awesomium::WebViewListener::Process* self=(Luna< Awesomium::WebViewListener::Process >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::WebViewListener::Process::OnUnresponsive(Awesomium::WebView *). Got : '%s'\n%s",typeid(Luna< Awesomium::WebViewListener::Process >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnUnresponsive(caller);

		return 0;
	}

	// void Awesomium::WebViewListener::Process::OnResponsive(Awesomium::WebView * caller)
	static int _bind_OnResponsive(lua_State *L) {
		if (!_lg_typecheck_OnResponsive(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::WebViewListener::Process::OnResponsive(Awesomium::WebView * caller) function, expected prototype:\nvoid Awesomium::WebViewListener::Process::OnResponsive(Awesomium::WebView * caller)\nClass arguments details:\narg 1 ID = 613205\n\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));

		Awesomium::WebViewListener::Process* self=(Luna< Awesomium::WebViewListener::Process >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::WebViewListener::Process::OnResponsive(Awesomium::WebView *). Got : '%s'\n%s",typeid(Luna< Awesomium::WebViewListener::Process >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnResponsive(caller);

		return 0;
	}

	// void Awesomium::WebViewListener::Process::OnCrashed(Awesomium::WebView * caller, Awesomium::TerminationStatus status)
	static int _bind_OnCrashed(lua_State *L) {
		if (!_lg_typecheck_OnCrashed(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::WebViewListener::Process::OnCrashed(Awesomium::WebView * caller, Awesomium::TerminationStatus status) function, expected prototype:\nvoid Awesomium::WebViewListener::Process::OnCrashed(Awesomium::WebView * caller, Awesomium::TerminationStatus status)\nClass arguments details:\narg 1 ID = 613205\n\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebView* caller=(Luna< Awesomium::WebView >::check(L,2));
		Awesomium::TerminationStatus status=(Awesomium::TerminationStatus)lua_tointeger(L,3);

		Awesomium::WebViewListener::Process* self=(Luna< Awesomium::WebViewListener::Process >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::WebViewListener::Process::OnCrashed(Awesomium::WebView *, Awesomium::TerminationStatus). Got : '%s'\n%s",typeid(Luna< Awesomium::WebViewListener::Process >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnCrashed(caller, status);

		return 0;
	}


	// Operator binds:

};

Awesomium::WebViewListener::Process* LunaTraits< Awesomium::WebViewListener::Process >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_WebViewListener_Process::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void Awesomium::WebViewListener::Process::OnUnresponsive(Awesomium::WebView * caller)
	// void Awesomium::WebViewListener::Process::OnResponsive(Awesomium::WebView * caller)
	// void Awesomium::WebViewListener::Process::OnCrashed(Awesomium::WebView * caller, Awesomium::TerminationStatus status)
}

void LunaTraits< Awesomium::WebViewListener::Process >::_bind_dtor(Awesomium::WebViewListener::Process* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< Awesomium::WebViewListener::Process >::className[] = "Process";
const char LunaTraits< Awesomium::WebViewListener::Process >::fullName[] = "Awesomium::WebViewListener::Process";
const char LunaTraits< Awesomium::WebViewListener::Process >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebViewListener::Process >::parents[] = {0};
const int LunaTraits< Awesomium::WebViewListener::Process >::hash = 78037157;
const int LunaTraits< Awesomium::WebViewListener::Process >::uniqueIDs[] = {78037157,0};

luna_RegType LunaTraits< Awesomium::WebViewListener::Process >::methods[] = {
	{"OnUnresponsive", &luna_wrapper_Awesomium_WebViewListener_Process::_bind_OnUnresponsive},
	{"OnResponsive", &luna_wrapper_Awesomium_WebViewListener_Process::_bind_OnResponsive},
	{"OnCrashed", &luna_wrapper_Awesomium_WebViewListener_Process::_bind_OnCrashed},
	{"dynCast", &luna_wrapper_Awesomium_WebViewListener_Process::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_WebViewListener_Process::_bind___eq},
	{"fromVoid", &luna_wrapper_Awesomium_WebViewListener_Process::_bind_fromVoid},
	{"asVoid", &luna_wrapper_Awesomium_WebViewListener_Process::_bind_asVoid},
	{"getTable", &luna_wrapper_Awesomium_WebViewListener_Process::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebViewListener::Process >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebViewListener::Process >::enumValues[] = {
	{0,0}
};



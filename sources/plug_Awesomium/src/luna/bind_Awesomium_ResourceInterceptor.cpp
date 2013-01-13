#include <plug_common.h>

#include <luna/wrappers/wrapper_Awesomium_ResourceInterceptor.h>

class luna_wrapper_Awesomium_ResourceInterceptor {
public:
	typedef Luna< Awesomium::ResourceInterceptor > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		Awesomium::ResourceInterceptor* self=(Luna< Awesomium::ResourceInterceptor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<Awesomium::ResourceInterceptor,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,29549996) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::ResourceInterceptor*)");
		}

		Awesomium::ResourceInterceptor* rhs =(Luna< Awesomium::ResourceInterceptor >::check(L,2));
		Awesomium::ResourceInterceptor* self=(Luna< Awesomium::ResourceInterceptor >::check(L,1));
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

		Awesomium::ResourceInterceptor* self=(Luna< Awesomium::ResourceInterceptor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::ResourceInterceptor");
		
		return luna_dynamicCast(L,converters,"Awesomium::ResourceInterceptor",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_OnRequest(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,4492238)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnRequest(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,4492238)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// Awesomium::ResourceInterceptor::ResourceInterceptor()
	static Awesomium::ResourceInterceptor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::ResourceInterceptor::ResourceInterceptor() function, expected prototype:\nAwesomium::ResourceInterceptor::ResourceInterceptor()\nClass arguments details:\n");
		}


		return new Awesomium::ResourceInterceptor();
	}

	// Awesomium::ResourceInterceptor::ResourceInterceptor(lua_Table * data)
	static Awesomium::ResourceInterceptor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::ResourceInterceptor::ResourceInterceptor(lua_Table * data) function, expected prototype:\nAwesomium::ResourceInterceptor::ResourceInterceptor(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_Awesomium_ResourceInterceptor(L,NULL);
	}

	// Overload binder for Awesomium::ResourceInterceptor::ResourceInterceptor
	static Awesomium::ResourceInterceptor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ResourceInterceptor, cannot match any of the overloads for function ResourceInterceptor:\n  ResourceInterceptor()\n  ResourceInterceptor(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// Awesomium::ResourceResponse * Awesomium::ResourceInterceptor::OnRequest(Awesomium::ResourceRequest * request)
	static int _bind_OnRequest(lua_State *L) {
		if (!_lg_typecheck_OnRequest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::ResourceResponse * Awesomium::ResourceInterceptor::OnRequest(Awesomium::ResourceRequest * request) function, expected prototype:\nAwesomium::ResourceResponse * Awesomium::ResourceInterceptor::OnRequest(Awesomium::ResourceRequest * request)\nClass arguments details:\narg 1 ID = 4492238\n");
		}

		Awesomium::ResourceRequest* request=(Luna< Awesomium::ResourceRequest >::check(L,2));

		Awesomium::ResourceInterceptor* self=(Luna< Awesomium::ResourceInterceptor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::ResourceResponse * Awesomium::ResourceInterceptor::OnRequest(Awesomium::ResourceRequest *). Got : '%s'",typeid(Luna< Awesomium::ResourceInterceptor >::check(L,1)).name());
		}
		Awesomium::ResourceResponse * lret = self->OnRequest(request);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::ResourceResponse >::push(L,lret,false);

		return 1;
	}

	// Awesomium::ResourceResponse * Awesomium::ResourceInterceptor::base_OnRequest(Awesomium::ResourceRequest * request)
	static int _bind_base_OnRequest(lua_State *L) {
		if (!_lg_typecheck_base_OnRequest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::ResourceResponse * Awesomium::ResourceInterceptor::base_OnRequest(Awesomium::ResourceRequest * request) function, expected prototype:\nAwesomium::ResourceResponse * Awesomium::ResourceInterceptor::base_OnRequest(Awesomium::ResourceRequest * request)\nClass arguments details:\narg 1 ID = 4492238\n");
		}

		Awesomium::ResourceRequest* request=(Luna< Awesomium::ResourceRequest >::check(L,2));

		Awesomium::ResourceInterceptor* self=(Luna< Awesomium::ResourceInterceptor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::ResourceResponse * Awesomium::ResourceInterceptor::base_OnRequest(Awesomium::ResourceRequest *). Got : '%s'",typeid(Luna< Awesomium::ResourceInterceptor >::check(L,1)).name());
		}
		Awesomium::ResourceResponse * lret = self->ResourceInterceptor::OnRequest(request);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::ResourceResponse >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

Awesomium::ResourceInterceptor* LunaTraits< Awesomium::ResourceInterceptor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_ResourceInterceptor::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< Awesomium::ResourceInterceptor >::_bind_dtor(Awesomium::ResourceInterceptor* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::ResourceInterceptor >::className[] = "ResourceInterceptor";
const char LunaTraits< Awesomium::ResourceInterceptor >::fullName[] = "Awesomium::ResourceInterceptor";
const char LunaTraits< Awesomium::ResourceInterceptor >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::ResourceInterceptor >::parents[] = {0};
const int LunaTraits< Awesomium::ResourceInterceptor >::hash = 29549996;
const int LunaTraits< Awesomium::ResourceInterceptor >::uniqueIDs[] = {29549996,0};

luna_RegType LunaTraits< Awesomium::ResourceInterceptor >::methods[] = {
	{"OnRequest", &luna_wrapper_Awesomium_ResourceInterceptor::_bind_OnRequest},
	{"base_OnRequest", &luna_wrapper_Awesomium_ResourceInterceptor::_bind_base_OnRequest},
	{"dynCast", &luna_wrapper_Awesomium_ResourceInterceptor::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_ResourceInterceptor::_bind___eq},
	{"getTable", &luna_wrapper_Awesomium_ResourceInterceptor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::ResourceInterceptor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::ResourceInterceptor >::enumValues[] = {
	{0,0}
};



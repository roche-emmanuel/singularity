#include <plug_common.h>

#include <luna/wrappers/wrapper_Awesomium_ResourceInterceptor.h>

class luna_wrapper_Awesomium_ResourceInterceptor {
public:
	typedef Luna< Awesomium::ResourceInterceptor > luna_t;

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

	// Function checkers:
	inline static bool _lg_typecheck_OnRequest(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,4492238)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

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
			luaL_error(L, "Invalid object in function call Awesomium::ResourceResponse * Awesomium::ResourceInterceptor::OnRequest(Awesomium::ResourceRequest *)");
		}
		Awesomium::ResourceResponse * lret = self->OnRequest(request);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::ResourceResponse >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

Awesomium::ResourceInterceptor* LunaTraits< Awesomium::ResourceInterceptor >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
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
	{"dynCast", &luna_wrapper_Awesomium_ResourceInterceptor::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_ResourceInterceptor::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::ResourceInterceptor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::ResourceInterceptor >::enumValues[] = {
	{0,0}
};



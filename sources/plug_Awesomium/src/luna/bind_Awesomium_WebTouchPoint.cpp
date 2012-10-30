#include <plug_common.h>

class luna_wrapper_Awesomium_WebTouchPoint {
public:
	typedef Luna< Awesomium::WebTouchPoint > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3335349) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::WebTouchPoint*)");
		}

		Awesomium::WebTouchPoint* rhs =(Luna< Awesomium::WebTouchPoint >::check(L,2));
		Awesomium::WebTouchPoint* self=(Luna< Awesomium::WebTouchPoint >::check(L,1));
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

		Awesomium::WebTouchPoint* self=(Luna< Awesomium::WebTouchPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebTouchPoint");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebTouchPoint",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// Awesomium::WebTouchPoint::WebTouchPoint()
	static Awesomium::WebTouchPoint* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebTouchPoint::WebTouchPoint() function, expected prototype:\nAwesomium::WebTouchPoint::WebTouchPoint()\nClass arguments details:\n");
		}


		return new Awesomium::WebTouchPoint();
	}


	// Function binds:

	// Operator binds:

};

Awesomium::WebTouchPoint* LunaTraits< Awesomium::WebTouchPoint >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_WebTouchPoint::_bind_ctor(L);
}

void LunaTraits< Awesomium::WebTouchPoint >::_bind_dtor(Awesomium::WebTouchPoint* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::WebTouchPoint >::className[] = "WebTouchPoint";
const char LunaTraits< Awesomium::WebTouchPoint >::fullName[] = "Awesomium::WebTouchPoint";
const char LunaTraits< Awesomium::WebTouchPoint >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebTouchPoint >::parents[] = {0};
const int LunaTraits< Awesomium::WebTouchPoint >::hash = 3335349;
const int LunaTraits< Awesomium::WebTouchPoint >::uniqueIDs[] = {3335349,0};

luna_RegType LunaTraits< Awesomium::WebTouchPoint >::methods[] = {
	{"dynCast", &luna_wrapper_Awesomium_WebTouchPoint::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_WebTouchPoint::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebTouchPoint >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebTouchPoint >::enumValues[] = {
	{0,0}
};



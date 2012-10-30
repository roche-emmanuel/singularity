#include <plug_common.h>

class luna_wrapper_Awesomium_WebTouchEvent {
public:
	typedef Luna< Awesomium::WebTouchEvent > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,93381335) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::WebTouchEvent*)");
		}

		Awesomium::WebTouchEvent* rhs =(Luna< Awesomium::WebTouchEvent >::check(L,2));
		Awesomium::WebTouchEvent* self=(Luna< Awesomium::WebTouchEvent >::check(L,1));
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

		Awesomium::WebTouchEvent* self=(Luna< Awesomium::WebTouchEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebTouchEvent");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebTouchEvent",name);
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
	// Awesomium::WebTouchEvent::WebTouchEvent()
	static Awesomium::WebTouchEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebTouchEvent::WebTouchEvent() function, expected prototype:\nAwesomium::WebTouchEvent::WebTouchEvent()\nClass arguments details:\n");
		}


		return new Awesomium::WebTouchEvent();
	}


	// Function binds:

	// Operator binds:

};

Awesomium::WebTouchEvent* LunaTraits< Awesomium::WebTouchEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_WebTouchEvent::_bind_ctor(L);
}

void LunaTraits< Awesomium::WebTouchEvent >::_bind_dtor(Awesomium::WebTouchEvent* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::WebTouchEvent >::className[] = "WebTouchEvent";
const char LunaTraits< Awesomium::WebTouchEvent >::fullName[] = "Awesomium::WebTouchEvent";
const char LunaTraits< Awesomium::WebTouchEvent >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebTouchEvent >::parents[] = {0};
const int LunaTraits< Awesomium::WebTouchEvent >::hash = 93381335;
const int LunaTraits< Awesomium::WebTouchEvent >::uniqueIDs[] = {93381335,0};

luna_RegType LunaTraits< Awesomium::WebTouchEvent >::methods[] = {
	{"dynCast", &luna_wrapper_Awesomium_WebTouchEvent::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_WebTouchEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebTouchEvent >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebTouchEvent >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

class luna_wrapper_Awesomium_WebKeyboardEvent {
public:
	typedef Luna< Awesomium::WebKeyboardEvent > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,95002106) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::WebKeyboardEvent*)");
		}

		Awesomium::WebKeyboardEvent* rhs =(Luna< Awesomium::WebKeyboardEvent >::check(L,2));
		Awesomium::WebKeyboardEvent* self=(Luna< Awesomium::WebKeyboardEvent >::check(L,1));
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

		Awesomium::WebKeyboardEvent* self=(Luna< Awesomium::WebKeyboardEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebKeyboardEvent");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebKeyboardEvent",name);
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
	// Awesomium::WebKeyboardEvent::WebKeyboardEvent()
	static Awesomium::WebKeyboardEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebKeyboardEvent::WebKeyboardEvent() function, expected prototype:\nAwesomium::WebKeyboardEvent::WebKeyboardEvent()\nClass arguments details:\n");
		}


		return new Awesomium::WebKeyboardEvent();
	}


	// Function binds:

	// Operator binds:

};

Awesomium::WebKeyboardEvent* LunaTraits< Awesomium::WebKeyboardEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_WebKeyboardEvent::_bind_ctor(L);
}

void LunaTraits< Awesomium::WebKeyboardEvent >::_bind_dtor(Awesomium::WebKeyboardEvent* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::WebKeyboardEvent >::className[] = "WebKeyboardEvent";
const char LunaTraits< Awesomium::WebKeyboardEvent >::fullName[] = "Awesomium::WebKeyboardEvent";
const char LunaTraits< Awesomium::WebKeyboardEvent >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebKeyboardEvent >::parents[] = {0};
const int LunaTraits< Awesomium::WebKeyboardEvent >::hash = 95002106;
const int LunaTraits< Awesomium::WebKeyboardEvent >::uniqueIDs[] = {95002106,0};

luna_RegType LunaTraits< Awesomium::WebKeyboardEvent >::methods[] = {
	{"dynCast", &luna_wrapper_Awesomium_WebKeyboardEvent::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_WebKeyboardEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebKeyboardEvent >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebKeyboardEvent >::enumValues[] = {
	{"kTypeKeyDown", Awesomium::WebKeyboardEvent::kTypeKeyDown},
	{"kTypeKeyUp", Awesomium::WebKeyboardEvent::kTypeKeyUp},
	{"kTypeChar", Awesomium::WebKeyboardEvent::kTypeChar},
	{"kModShiftKey", Awesomium::WebKeyboardEvent::kModShiftKey},
	{"kModControlKey", Awesomium::WebKeyboardEvent::kModControlKey},
	{"kModAltKey", Awesomium::WebKeyboardEvent::kModAltKey},
	{"kModMetaKey", Awesomium::WebKeyboardEvent::kModMetaKey},
	{"kModIsKeypad", Awesomium::WebKeyboardEvent::kModIsKeypad},
	{"kModIsAutorepeat", Awesomium::WebKeyboardEvent::kModIsAutorepeat},
	{0,0}
};



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
	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTouches_length(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getChanged_touches_length(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTarget_touches_length(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTouches_length(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setChanged_touches_length(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTarget_touches_length(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


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
	// Awesomium::WebTouchEventType Awesomium::WebTouchEvent::type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebTouchEventType Awesomium::WebTouchEvent::type() function, expected prototype:\nAwesomium::WebTouchEventType Awesomium::WebTouchEvent::type()\nClass arguments details:\n");
		}


		Awesomium::WebTouchEvent* self=(Luna< Awesomium::WebTouchEvent >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebTouchEventType Awesomium::WebTouchEvent::type(). Got : '%s'",typeid(Luna< Awesomium::WebTouchEvent >::check(L,1)).name());
		}
		Awesomium::WebTouchEventType lret = self->type;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int Awesomium::WebTouchEvent::touches_length()
	static int _bind_getTouches_length(lua_State *L) {
		if (!_lg_typecheck_getTouches_length(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int Awesomium::WebTouchEvent::touches_length() function, expected prototype:\nunsigned int Awesomium::WebTouchEvent::touches_length()\nClass arguments details:\n");
		}


		Awesomium::WebTouchEvent* self=(Luna< Awesomium::WebTouchEvent >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int Awesomium::WebTouchEvent::touches_length(). Got : '%s'",typeid(Luna< Awesomium::WebTouchEvent >::check(L,1)).name());
		}
		unsigned int lret = self->touches_length;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int Awesomium::WebTouchEvent::changed_touches_length()
	static int _bind_getChanged_touches_length(lua_State *L) {
		if (!_lg_typecheck_getChanged_touches_length(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int Awesomium::WebTouchEvent::changed_touches_length() function, expected prototype:\nunsigned int Awesomium::WebTouchEvent::changed_touches_length()\nClass arguments details:\n");
		}


		Awesomium::WebTouchEvent* self=(Luna< Awesomium::WebTouchEvent >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int Awesomium::WebTouchEvent::changed_touches_length(). Got : '%s'",typeid(Luna< Awesomium::WebTouchEvent >::check(L,1)).name());
		}
		unsigned int lret = self->changed_touches_length;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int Awesomium::WebTouchEvent::target_touches_length()
	static int _bind_getTarget_touches_length(lua_State *L) {
		if (!_lg_typecheck_getTarget_touches_length(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int Awesomium::WebTouchEvent::target_touches_length() function, expected prototype:\nunsigned int Awesomium::WebTouchEvent::target_touches_length()\nClass arguments details:\n");
		}


		Awesomium::WebTouchEvent* self=(Luna< Awesomium::WebTouchEvent >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int Awesomium::WebTouchEvent::target_touches_length(). Got : '%s'",typeid(Luna< Awesomium::WebTouchEvent >::check(L,1)).name());
		}
		unsigned int lret = self->target_touches_length;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void Awesomium::WebTouchEvent::type(Awesomium::WebTouchEventType value)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebTouchEvent::type(Awesomium::WebTouchEventType value) function, expected prototype:\nvoid Awesomium::WebTouchEvent::type(Awesomium::WebTouchEventType value)\nClass arguments details:\n");
		}

		Awesomium::WebTouchEventType value=(Awesomium::WebTouchEventType)lua_tointeger(L,2);

		Awesomium::WebTouchEvent* self=(Luna< Awesomium::WebTouchEvent >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebTouchEvent::type(Awesomium::WebTouchEventType). Got : '%s'",typeid(Luna< Awesomium::WebTouchEvent >::check(L,1)).name());
		}
		self->type = value;

		return 0;
	}

	// void Awesomium::WebTouchEvent::touches_length(unsigned int value)
	static int _bind_setTouches_length(lua_State *L) {
		if (!_lg_typecheck_setTouches_length(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebTouchEvent::touches_length(unsigned int value) function, expected prototype:\nvoid Awesomium::WebTouchEvent::touches_length(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		Awesomium::WebTouchEvent* self=(Luna< Awesomium::WebTouchEvent >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebTouchEvent::touches_length(unsigned int). Got : '%s'",typeid(Luna< Awesomium::WebTouchEvent >::check(L,1)).name());
		}
		self->touches_length = value;

		return 0;
	}

	// void Awesomium::WebTouchEvent::changed_touches_length(unsigned int value)
	static int _bind_setChanged_touches_length(lua_State *L) {
		if (!_lg_typecheck_setChanged_touches_length(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebTouchEvent::changed_touches_length(unsigned int value) function, expected prototype:\nvoid Awesomium::WebTouchEvent::changed_touches_length(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		Awesomium::WebTouchEvent* self=(Luna< Awesomium::WebTouchEvent >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebTouchEvent::changed_touches_length(unsigned int). Got : '%s'",typeid(Luna< Awesomium::WebTouchEvent >::check(L,1)).name());
		}
		self->changed_touches_length = value;

		return 0;
	}

	// void Awesomium::WebTouchEvent::target_touches_length(unsigned int value)
	static int _bind_setTarget_touches_length(lua_State *L) {
		if (!_lg_typecheck_setTarget_touches_length(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebTouchEvent::target_touches_length(unsigned int value) function, expected prototype:\nvoid Awesomium::WebTouchEvent::target_touches_length(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		Awesomium::WebTouchEvent* self=(Luna< Awesomium::WebTouchEvent >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebTouchEvent::target_touches_length(unsigned int). Got : '%s'",typeid(Luna< Awesomium::WebTouchEvent >::check(L,1)).name());
		}
		self->target_touches_length = value;

		return 0;
	}


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
	{"getType", &luna_wrapper_Awesomium_WebTouchEvent::_bind_getType},
	{"getTouches_length", &luna_wrapper_Awesomium_WebTouchEvent::_bind_getTouches_length},
	{"getChanged_touches_length", &luna_wrapper_Awesomium_WebTouchEvent::_bind_getChanged_touches_length},
	{"getTarget_touches_length", &luna_wrapper_Awesomium_WebTouchEvent::_bind_getTarget_touches_length},
	{"setType", &luna_wrapper_Awesomium_WebTouchEvent::_bind_setType},
	{"setTouches_length", &luna_wrapper_Awesomium_WebTouchEvent::_bind_setTouches_length},
	{"setChanged_touches_length", &luna_wrapper_Awesomium_WebTouchEvent::_bind_setChanged_touches_length},
	{"setTarget_touches_length", &luna_wrapper_Awesomium_WebTouchEvent::_bind_setTarget_touches_length},
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



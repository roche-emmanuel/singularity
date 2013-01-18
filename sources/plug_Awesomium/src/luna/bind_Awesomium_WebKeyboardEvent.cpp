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
	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,95002106)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setModifiers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,95002106)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVirtualKeyCode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,95002106)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNativeKeyCode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,95002106)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,95002106)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getModifiers(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_virtual_key_code(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_native_key_code(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_is_system_key(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_virtual_key_code(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_native_key_code(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_is_system_key(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


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
	// void Awesomium::WebKeyboardEvent::setType(Awesomium::WebKeyboardEvent * ke, int type)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebKeyboardEvent::setType(Awesomium::WebKeyboardEvent * ke, int type) function, expected prototype:\nvoid Awesomium::WebKeyboardEvent::setType(Awesomium::WebKeyboardEvent * ke, int type)\nClass arguments details:\narg 1 ID = 95002106\n");
		}

		Awesomium::WebKeyboardEvent* ke=(Luna< Awesomium::WebKeyboardEvent >::check(L,1));
		int type=(int)lua_tointeger(L,2);

		setType(ke, type);

		return 0;
	}

	// void Awesomium::WebKeyboardEvent::setModifiers(Awesomium::WebKeyboardEvent * ke, int mod)
	static int _bind_setModifiers(lua_State *L) {
		if (!_lg_typecheck_setModifiers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebKeyboardEvent::setModifiers(Awesomium::WebKeyboardEvent * ke, int mod) function, expected prototype:\nvoid Awesomium::WebKeyboardEvent::setModifiers(Awesomium::WebKeyboardEvent * ke, int mod)\nClass arguments details:\narg 1 ID = 95002106\n");
		}

		Awesomium::WebKeyboardEvent* ke=(Luna< Awesomium::WebKeyboardEvent >::check(L,1));
		int mod=(int)lua_tointeger(L,2);

		setModifiers(ke, mod);

		return 0;
	}

	// std::string Awesomium::WebKeyboardEvent::setVirtualKeyCode(Awesomium::WebKeyboardEvent * ke, int code)
	static int _bind_setVirtualKeyCode(lua_State *L) {
		if (!_lg_typecheck_setVirtualKeyCode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string Awesomium::WebKeyboardEvent::setVirtualKeyCode(Awesomium::WebKeyboardEvent * ke, int code) function, expected prototype:\nstd::string Awesomium::WebKeyboardEvent::setVirtualKeyCode(Awesomium::WebKeyboardEvent * ke, int code)\nClass arguments details:\narg 1 ID = 95002106\n");
		}

		Awesomium::WebKeyboardEvent* ke=(Luna< Awesomium::WebKeyboardEvent >::check(L,1));
		int code=(int)lua_tointeger(L,2);

		std::string lret = setVirtualKeyCode(ke, code);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void Awesomium::WebKeyboardEvent::setNativeKeyCode(Awesomium::WebKeyboardEvent * ke, int code)
	static int _bind_setNativeKeyCode(lua_State *L) {
		if (!_lg_typecheck_setNativeKeyCode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebKeyboardEvent::setNativeKeyCode(Awesomium::WebKeyboardEvent * ke, int code) function, expected prototype:\nvoid Awesomium::WebKeyboardEvent::setNativeKeyCode(Awesomium::WebKeyboardEvent * ke, int code)\nClass arguments details:\narg 1 ID = 95002106\n");
		}

		Awesomium::WebKeyboardEvent* ke=(Luna< Awesomium::WebKeyboardEvent >::check(L,1));
		int code=(int)lua_tointeger(L,2);

		setNativeKeyCode(ke, code);

		return 0;
	}

	// void Awesomium::WebKeyboardEvent::setText(Awesomium::WebKeyboardEvent * ke, int character)
	static int _bind_setText(lua_State *L) {
		if (!_lg_typecheck_setText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebKeyboardEvent::setText(Awesomium::WebKeyboardEvent * ke, int character) function, expected prototype:\nvoid Awesomium::WebKeyboardEvent::setText(Awesomium::WebKeyboardEvent * ke, int character)\nClass arguments details:\narg 1 ID = 95002106\n");
		}

		Awesomium::WebKeyboardEvent* ke=(Luna< Awesomium::WebKeyboardEvent >::check(L,1));
		int character=(int)lua_tointeger(L,2);

		setText(ke, character);

		return 0;
	}

	// Awesomium::WebKeyboardEvent::Type Awesomium::WebKeyboardEvent::type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebKeyboardEvent::Type Awesomium::WebKeyboardEvent::type() function, expected prototype:\nAwesomium::WebKeyboardEvent::Type Awesomium::WebKeyboardEvent::type()\nClass arguments details:\n");
		}


		Awesomium::WebKeyboardEvent* self=(Luna< Awesomium::WebKeyboardEvent >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebKeyboardEvent::Type Awesomium::WebKeyboardEvent::type(). Got : '%s'",typeid(Luna< Awesomium::WebKeyboardEvent >::check(L,1)).name());
		}
		Awesomium::WebKeyboardEvent::Type lret = self->type;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int Awesomium::WebKeyboardEvent::modifiers()
	static int _bind_getModifiers(lua_State *L) {
		if (!_lg_typecheck_getModifiers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int Awesomium::WebKeyboardEvent::modifiers() function, expected prototype:\nint Awesomium::WebKeyboardEvent::modifiers()\nClass arguments details:\n");
		}


		Awesomium::WebKeyboardEvent* self=(Luna< Awesomium::WebKeyboardEvent >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int Awesomium::WebKeyboardEvent::modifiers(). Got : '%s'",typeid(Luna< Awesomium::WebKeyboardEvent >::check(L,1)).name());
		}
		int lret = self->modifiers;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int Awesomium::WebKeyboardEvent::virtual_key_code()
	static int _bind_get_virtual_key_code(lua_State *L) {
		if (!_lg_typecheck_get_virtual_key_code(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int Awesomium::WebKeyboardEvent::virtual_key_code() function, expected prototype:\nint Awesomium::WebKeyboardEvent::virtual_key_code()\nClass arguments details:\n");
		}


		Awesomium::WebKeyboardEvent* self=(Luna< Awesomium::WebKeyboardEvent >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int Awesomium::WebKeyboardEvent::virtual_key_code(). Got : '%s'",typeid(Luna< Awesomium::WebKeyboardEvent >::check(L,1)).name());
		}
		int lret = self->virtual_key_code;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int Awesomium::WebKeyboardEvent::native_key_code()
	static int _bind_get_native_key_code(lua_State *L) {
		if (!_lg_typecheck_get_native_key_code(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int Awesomium::WebKeyboardEvent::native_key_code() function, expected prototype:\nint Awesomium::WebKeyboardEvent::native_key_code()\nClass arguments details:\n");
		}


		Awesomium::WebKeyboardEvent* self=(Luna< Awesomium::WebKeyboardEvent >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int Awesomium::WebKeyboardEvent::native_key_code(). Got : '%s'",typeid(Luna< Awesomium::WebKeyboardEvent >::check(L,1)).name());
		}
		int lret = self->native_key_code;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool Awesomium::WebKeyboardEvent::is_system_key()
	static int _bind_get_is_system_key(lua_State *L) {
		if (!_lg_typecheck_get_is_system_key(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebKeyboardEvent::is_system_key() function, expected prototype:\nbool Awesomium::WebKeyboardEvent::is_system_key()\nClass arguments details:\n");
		}


		Awesomium::WebKeyboardEvent* self=(Luna< Awesomium::WebKeyboardEvent >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebKeyboardEvent::is_system_key(). Got : '%s'",typeid(Luna< Awesomium::WebKeyboardEvent >::check(L,1)).name());
		}
		bool lret = self->is_system_key;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void Awesomium::WebKeyboardEvent::virtual_key_code(int value)
	static int _bind_set_virtual_key_code(lua_State *L) {
		if (!_lg_typecheck_set_virtual_key_code(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebKeyboardEvent::virtual_key_code(int value) function, expected prototype:\nvoid Awesomium::WebKeyboardEvent::virtual_key_code(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		Awesomium::WebKeyboardEvent* self=(Luna< Awesomium::WebKeyboardEvent >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebKeyboardEvent::virtual_key_code(int). Got : '%s'",typeid(Luna< Awesomium::WebKeyboardEvent >::check(L,1)).name());
		}
		self->virtual_key_code = value;

		return 0;
	}

	// void Awesomium::WebKeyboardEvent::native_key_code(int value)
	static int _bind_set_native_key_code(lua_State *L) {
		if (!_lg_typecheck_set_native_key_code(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebKeyboardEvent::native_key_code(int value) function, expected prototype:\nvoid Awesomium::WebKeyboardEvent::native_key_code(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		Awesomium::WebKeyboardEvent* self=(Luna< Awesomium::WebKeyboardEvent >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebKeyboardEvent::native_key_code(int). Got : '%s'",typeid(Luna< Awesomium::WebKeyboardEvent >::check(L,1)).name());
		}
		self->native_key_code = value;

		return 0;
	}

	// void Awesomium::WebKeyboardEvent::is_system_key(bool value)
	static int _bind_set_is_system_key(lua_State *L) {
		if (!_lg_typecheck_set_is_system_key(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebKeyboardEvent::is_system_key(bool value) function, expected prototype:\nvoid Awesomium::WebKeyboardEvent::is_system_key(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		Awesomium::WebKeyboardEvent* self=(Luna< Awesomium::WebKeyboardEvent >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebKeyboardEvent::is_system_key(bool). Got : '%s'",typeid(Luna< Awesomium::WebKeyboardEvent >::check(L,1)).name());
		}
		self->is_system_key = value;

		return 0;
	}


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
	{"setType", &luna_wrapper_Awesomium_WebKeyboardEvent::_bind_setType},
	{"setModifiers", &luna_wrapper_Awesomium_WebKeyboardEvent::_bind_setModifiers},
	{"setVirtualKeyCode", &luna_wrapper_Awesomium_WebKeyboardEvent::_bind_setVirtualKeyCode},
	{"setNativeKeyCode", &luna_wrapper_Awesomium_WebKeyboardEvent::_bind_setNativeKeyCode},
	{"setText", &luna_wrapper_Awesomium_WebKeyboardEvent::_bind_setText},
	{"getType", &luna_wrapper_Awesomium_WebKeyboardEvent::_bind_getType},
	{"getModifiers", &luna_wrapper_Awesomium_WebKeyboardEvent::_bind_getModifiers},
	{"get_virtual_key_code", &luna_wrapper_Awesomium_WebKeyboardEvent::_bind_get_virtual_key_code},
	{"get_native_key_code", &luna_wrapper_Awesomium_WebKeyboardEvent::_bind_get_native_key_code},
	{"get_is_system_key", &luna_wrapper_Awesomium_WebKeyboardEvent::_bind_get_is_system_key},
	{"set_virtual_key_code", &luna_wrapper_Awesomium_WebKeyboardEvent::_bind_set_virtual_key_code},
	{"set_native_key_code", &luna_wrapper_Awesomium_WebKeyboardEvent::_bind_set_native_key_code},
	{"set_is_system_key", &luna_wrapper_Awesomium_WebKeyboardEvent::_bind_set_is_system_key},
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



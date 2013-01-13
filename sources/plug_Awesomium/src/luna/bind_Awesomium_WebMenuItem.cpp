#include <plug_common.h>

class luna_wrapper_Awesomium_WebMenuItem {
public:
	typedef Luna< Awesomium::WebMenuItem > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2194484) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::WebMenuItem*)");
		}

		Awesomium::WebMenuItem* rhs =(Luna< Awesomium::WebMenuItem >::check(L,2));
		Awesomium::WebMenuItem* self=(Luna< Awesomium::WebMenuItem >::check(L,1));
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

		Awesomium::WebMenuItem* self=(Luna< Awesomium::WebMenuItem >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebMenuItem");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebMenuItem",name);
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

	inline static bool _lg_typecheck_getLabel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTooltip(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRight_to_left(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHas_directional_override(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getChecked(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLabel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13938525) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTooltip(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13938525) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRight_to_left(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHas_directional_override(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setChecked(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// Awesomium::WebMenuItem::WebMenuItem()
	static Awesomium::WebMenuItem* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebMenuItem::WebMenuItem() function, expected prototype:\nAwesomium::WebMenuItem::WebMenuItem()\nClass arguments details:\n");
		}


		return new Awesomium::WebMenuItem();
	}


	// Function binds:
	// Awesomium::WebMenuItemType Awesomium::WebMenuItem::type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebMenuItemType Awesomium::WebMenuItem::type() function, expected prototype:\nAwesomium::WebMenuItemType Awesomium::WebMenuItem::type()\nClass arguments details:\n");
		}


		Awesomium::WebMenuItem* self=(Luna< Awesomium::WebMenuItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebMenuItemType Awesomium::WebMenuItem::type(). Got : '%s'",typeid(Luna< Awesomium::WebMenuItem >::check(L,1)).name());
		}
		Awesomium::WebMenuItemType lret = self->type;
		lua_pushnumber(L,lret);

		return 1;
	}

	// Awesomium::WebString Awesomium::WebMenuItem::label()
	static int _bind_getLabel(lua_State *L) {
		if (!_lg_typecheck_getLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebMenuItem::label() function, expected prototype:\nAwesomium::WebString Awesomium::WebMenuItem::label()\nClass arguments details:\n");
		}


		Awesomium::WebMenuItem* self=(Luna< Awesomium::WebMenuItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebMenuItem::label(). Got : '%s'",typeid(Luna< Awesomium::WebMenuItem >::check(L,1)).name());
		}
		Awesomium::WebString lret = self->label;
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// Awesomium::WebString Awesomium::WebMenuItem::tooltip()
	static int _bind_getTooltip(lua_State *L) {
		if (!_lg_typecheck_getTooltip(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebMenuItem::tooltip() function, expected prototype:\nAwesomium::WebString Awesomium::WebMenuItem::tooltip()\nClass arguments details:\n");
		}


		Awesomium::WebMenuItem* self=(Luna< Awesomium::WebMenuItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebMenuItem::tooltip(). Got : '%s'",typeid(Luna< Awesomium::WebMenuItem >::check(L,1)).name());
		}
		Awesomium::WebString lret = self->tooltip;
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// unsigned int Awesomium::WebMenuItem::action()
	static int _bind_getAction(lua_State *L) {
		if (!_lg_typecheck_getAction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int Awesomium::WebMenuItem::action() function, expected prototype:\nunsigned int Awesomium::WebMenuItem::action()\nClass arguments details:\n");
		}


		Awesomium::WebMenuItem* self=(Luna< Awesomium::WebMenuItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int Awesomium::WebMenuItem::action(). Got : '%s'",typeid(Luna< Awesomium::WebMenuItem >::check(L,1)).name());
		}
		unsigned int lret = self->action;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool Awesomium::WebMenuItem::right_to_left()
	static int _bind_getRight_to_left(lua_State *L) {
		if (!_lg_typecheck_getRight_to_left(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebMenuItem::right_to_left() function, expected prototype:\nbool Awesomium::WebMenuItem::right_to_left()\nClass arguments details:\n");
		}


		Awesomium::WebMenuItem* self=(Luna< Awesomium::WebMenuItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebMenuItem::right_to_left(). Got : '%s'",typeid(Luna< Awesomium::WebMenuItem >::check(L,1)).name());
		}
		bool lret = self->right_to_left;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::WebMenuItem::has_directional_override()
	static int _bind_getHas_directional_override(lua_State *L) {
		if (!_lg_typecheck_getHas_directional_override(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebMenuItem::has_directional_override() function, expected prototype:\nbool Awesomium::WebMenuItem::has_directional_override()\nClass arguments details:\n");
		}


		Awesomium::WebMenuItem* self=(Luna< Awesomium::WebMenuItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebMenuItem::has_directional_override(). Got : '%s'",typeid(Luna< Awesomium::WebMenuItem >::check(L,1)).name());
		}
		bool lret = self->has_directional_override;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::WebMenuItem::enabled()
	static int _bind_getEnabled(lua_State *L) {
		if (!_lg_typecheck_getEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebMenuItem::enabled() function, expected prototype:\nbool Awesomium::WebMenuItem::enabled()\nClass arguments details:\n");
		}


		Awesomium::WebMenuItem* self=(Luna< Awesomium::WebMenuItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebMenuItem::enabled(). Got : '%s'",typeid(Luna< Awesomium::WebMenuItem >::check(L,1)).name());
		}
		bool lret = self->enabled;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::WebMenuItem::checked()
	static int _bind_getChecked(lua_State *L) {
		if (!_lg_typecheck_getChecked(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebMenuItem::checked() function, expected prototype:\nbool Awesomium::WebMenuItem::checked()\nClass arguments details:\n");
		}


		Awesomium::WebMenuItem* self=(Luna< Awesomium::WebMenuItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebMenuItem::checked(). Got : '%s'",typeid(Luna< Awesomium::WebMenuItem >::check(L,1)).name());
		}
		bool lret = self->checked;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void Awesomium::WebMenuItem::type(Awesomium::WebMenuItemType value)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebMenuItem::type(Awesomium::WebMenuItemType value) function, expected prototype:\nvoid Awesomium::WebMenuItem::type(Awesomium::WebMenuItemType value)\nClass arguments details:\n");
		}

		Awesomium::WebMenuItemType value=(Awesomium::WebMenuItemType)lua_tointeger(L,2);

		Awesomium::WebMenuItem* self=(Luna< Awesomium::WebMenuItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebMenuItem::type(Awesomium::WebMenuItemType). Got : '%s'",typeid(Luna< Awesomium::WebMenuItem >::check(L,1)).name());
		}
		self->type = value;

		return 0;
	}

	// void Awesomium::WebMenuItem::label(Awesomium::WebString value)
	static int _bind_setLabel(lua_State *L) {
		if (!_lg_typecheck_setLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebMenuItem::label(Awesomium::WebString value) function, expected prototype:\nvoid Awesomium::WebMenuItem::label(Awesomium::WebString value)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string value_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString value = Awesomium::ToWebString(value_str);

		Awesomium::WebMenuItem* self=(Luna< Awesomium::WebMenuItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebMenuItem::label(Awesomium::WebString). Got : '%s'",typeid(Luna< Awesomium::WebMenuItem >::check(L,1)).name());
		}
		self->label = value;

		return 0;
	}

	// void Awesomium::WebMenuItem::tooltip(Awesomium::WebString value)
	static int _bind_setTooltip(lua_State *L) {
		if (!_lg_typecheck_setTooltip(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebMenuItem::tooltip(Awesomium::WebString value) function, expected prototype:\nvoid Awesomium::WebMenuItem::tooltip(Awesomium::WebString value)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string value_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString value = Awesomium::ToWebString(value_str);

		Awesomium::WebMenuItem* self=(Luna< Awesomium::WebMenuItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebMenuItem::tooltip(Awesomium::WebString). Got : '%s'",typeid(Luna< Awesomium::WebMenuItem >::check(L,1)).name());
		}
		self->tooltip = value;

		return 0;
	}

	// void Awesomium::WebMenuItem::action(unsigned int value)
	static int _bind_setAction(lua_State *L) {
		if (!_lg_typecheck_setAction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebMenuItem::action(unsigned int value) function, expected prototype:\nvoid Awesomium::WebMenuItem::action(unsigned int value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		Awesomium::WebMenuItem* self=(Luna< Awesomium::WebMenuItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebMenuItem::action(unsigned int). Got : '%s'",typeid(Luna< Awesomium::WebMenuItem >::check(L,1)).name());
		}
		self->action = value;

		return 0;
	}

	// void Awesomium::WebMenuItem::right_to_left(bool value)
	static int _bind_setRight_to_left(lua_State *L) {
		if (!_lg_typecheck_setRight_to_left(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebMenuItem::right_to_left(bool value) function, expected prototype:\nvoid Awesomium::WebMenuItem::right_to_left(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		Awesomium::WebMenuItem* self=(Luna< Awesomium::WebMenuItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebMenuItem::right_to_left(bool). Got : '%s'",typeid(Luna< Awesomium::WebMenuItem >::check(L,1)).name());
		}
		self->right_to_left = value;

		return 0;
	}

	// void Awesomium::WebMenuItem::has_directional_override(bool value)
	static int _bind_setHas_directional_override(lua_State *L) {
		if (!_lg_typecheck_setHas_directional_override(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebMenuItem::has_directional_override(bool value) function, expected prototype:\nvoid Awesomium::WebMenuItem::has_directional_override(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		Awesomium::WebMenuItem* self=(Luna< Awesomium::WebMenuItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebMenuItem::has_directional_override(bool). Got : '%s'",typeid(Luna< Awesomium::WebMenuItem >::check(L,1)).name());
		}
		self->has_directional_override = value;

		return 0;
	}

	// void Awesomium::WebMenuItem::enabled(bool value)
	static int _bind_setEnabled(lua_State *L) {
		if (!_lg_typecheck_setEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebMenuItem::enabled(bool value) function, expected prototype:\nvoid Awesomium::WebMenuItem::enabled(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		Awesomium::WebMenuItem* self=(Luna< Awesomium::WebMenuItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebMenuItem::enabled(bool). Got : '%s'",typeid(Luna< Awesomium::WebMenuItem >::check(L,1)).name());
		}
		self->enabled = value;

		return 0;
	}

	// void Awesomium::WebMenuItem::checked(bool value)
	static int _bind_setChecked(lua_State *L) {
		if (!_lg_typecheck_setChecked(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebMenuItem::checked(bool value) function, expected prototype:\nvoid Awesomium::WebMenuItem::checked(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		Awesomium::WebMenuItem* self=(Luna< Awesomium::WebMenuItem >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebMenuItem::checked(bool). Got : '%s'",typeid(Luna< Awesomium::WebMenuItem >::check(L,1)).name());
		}
		self->checked = value;

		return 0;
	}


	// Operator binds:

};

Awesomium::WebMenuItem* LunaTraits< Awesomium::WebMenuItem >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_WebMenuItem::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< Awesomium::WebMenuItem >::_bind_dtor(Awesomium::WebMenuItem* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::WebMenuItem >::className[] = "WebMenuItem";
const char LunaTraits< Awesomium::WebMenuItem >::fullName[] = "Awesomium::WebMenuItem";
const char LunaTraits< Awesomium::WebMenuItem >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebMenuItem >::parents[] = {0};
const int LunaTraits< Awesomium::WebMenuItem >::hash = 2194484;
const int LunaTraits< Awesomium::WebMenuItem >::uniqueIDs[] = {2194484,0};

luna_RegType LunaTraits< Awesomium::WebMenuItem >::methods[] = {
	{"getType", &luna_wrapper_Awesomium_WebMenuItem::_bind_getType},
	{"getLabel", &luna_wrapper_Awesomium_WebMenuItem::_bind_getLabel},
	{"getTooltip", &luna_wrapper_Awesomium_WebMenuItem::_bind_getTooltip},
	{"getAction", &luna_wrapper_Awesomium_WebMenuItem::_bind_getAction},
	{"getRight_to_left", &luna_wrapper_Awesomium_WebMenuItem::_bind_getRight_to_left},
	{"getHas_directional_override", &luna_wrapper_Awesomium_WebMenuItem::_bind_getHas_directional_override},
	{"getEnabled", &luna_wrapper_Awesomium_WebMenuItem::_bind_getEnabled},
	{"getChecked", &luna_wrapper_Awesomium_WebMenuItem::_bind_getChecked},
	{"setType", &luna_wrapper_Awesomium_WebMenuItem::_bind_setType},
	{"setLabel", &luna_wrapper_Awesomium_WebMenuItem::_bind_setLabel},
	{"setTooltip", &luna_wrapper_Awesomium_WebMenuItem::_bind_setTooltip},
	{"setAction", &luna_wrapper_Awesomium_WebMenuItem::_bind_setAction},
	{"setRight_to_left", &luna_wrapper_Awesomium_WebMenuItem::_bind_setRight_to_left},
	{"setHas_directional_override", &luna_wrapper_Awesomium_WebMenuItem::_bind_setHas_directional_override},
	{"setEnabled", &luna_wrapper_Awesomium_WebMenuItem::_bind_setEnabled},
	{"setChecked", &luna_wrapper_Awesomium_WebMenuItem::_bind_setChecked},
	{"dynCast", &luna_wrapper_Awesomium_WebMenuItem::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_WebMenuItem::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebMenuItem >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebMenuItem >::enumValues[] = {
	{0,0}
};



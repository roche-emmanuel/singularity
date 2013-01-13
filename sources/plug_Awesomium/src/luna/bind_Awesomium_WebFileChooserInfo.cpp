#include <plug_common.h>

class luna_wrapper_Awesomium_WebFileChooserInfo {
public:
	typedef Luna< Awesomium::WebFileChooserInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,95946160) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::WebFileChooserInfo*)");
		}

		Awesomium::WebFileChooserInfo* rhs =(Luna< Awesomium::WebFileChooserInfo >::check(L,2));
		Awesomium::WebFileChooserInfo* self=(Luna< Awesomium::WebFileChooserInfo >::check(L,1));
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

		Awesomium::WebFileChooserInfo* self=(Luna< Awesomium::WebFileChooserInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebFileChooserInfo");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebFileChooserInfo",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTitle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDefault_file_name(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAccept_types(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTitle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13938525) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDefault_file_name(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13938525) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAccept_types(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,16354805) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// Awesomium::WebFileChooserMode Awesomium::WebFileChooserInfo::mode()
	static int _bind_getMode(lua_State *L) {
		if (!_lg_typecheck_getMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebFileChooserMode Awesomium::WebFileChooserInfo::mode() function, expected prototype:\nAwesomium::WebFileChooserMode Awesomium::WebFileChooserInfo::mode()\nClass arguments details:\n");
		}


		Awesomium::WebFileChooserInfo* self=(Luna< Awesomium::WebFileChooserInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebFileChooserMode Awesomium::WebFileChooserInfo::mode(). Got : '%s'",typeid(Luna< Awesomium::WebFileChooserInfo >::check(L,1)).name());
		}
		Awesomium::WebFileChooserMode lret = self->mode;
		lua_pushnumber(L,lret);

		return 1;
	}

	// Awesomium::WebString Awesomium::WebFileChooserInfo::title()
	static int _bind_getTitle(lua_State *L) {
		if (!_lg_typecheck_getTitle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebFileChooserInfo::title() function, expected prototype:\nAwesomium::WebString Awesomium::WebFileChooserInfo::title()\nClass arguments details:\n");
		}


		Awesomium::WebFileChooserInfo* self=(Luna< Awesomium::WebFileChooserInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebFileChooserInfo::title(). Got : '%s'",typeid(Luna< Awesomium::WebFileChooserInfo >::check(L,1)).name());
		}
		Awesomium::WebString lret = self->title;
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// Awesomium::WebString Awesomium::WebFileChooserInfo::default_file_name()
	static int _bind_getDefault_file_name(lua_State *L) {
		if (!_lg_typecheck_getDefault_file_name(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebFileChooserInfo::default_file_name() function, expected prototype:\nAwesomium::WebString Awesomium::WebFileChooserInfo::default_file_name()\nClass arguments details:\n");
		}


		Awesomium::WebFileChooserInfo* self=(Luna< Awesomium::WebFileChooserInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebFileChooserInfo::default_file_name(). Got : '%s'",typeid(Luna< Awesomium::WebFileChooserInfo >::check(L,1)).name());
		}
		Awesomium::WebString lret = self->default_file_name;
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// Awesomium::WebStringArray Awesomium::WebFileChooserInfo::accept_types()
	static int _bind_getAccept_types(lua_State *L) {
		if (!_lg_typecheck_getAccept_types(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebStringArray Awesomium::WebFileChooserInfo::accept_types() function, expected prototype:\nAwesomium::WebStringArray Awesomium::WebFileChooserInfo::accept_types()\nClass arguments details:\n");
		}


		Awesomium::WebFileChooserInfo* self=(Luna< Awesomium::WebFileChooserInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebStringArray Awesomium::WebFileChooserInfo::accept_types(). Got : '%s'",typeid(Luna< Awesomium::WebFileChooserInfo >::check(L,1)).name());
		}
		const Awesomium::WebStringArray* lret = &self->accept_types;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebStringArray >::push(L,lret,false);

		return 1;
	}

	// void Awesomium::WebFileChooserInfo::mode(Awesomium::WebFileChooserMode value)
	static int _bind_setMode(lua_State *L) {
		if (!_lg_typecheck_setMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebFileChooserInfo::mode(Awesomium::WebFileChooserMode value) function, expected prototype:\nvoid Awesomium::WebFileChooserInfo::mode(Awesomium::WebFileChooserMode value)\nClass arguments details:\n");
		}

		Awesomium::WebFileChooserMode value=(Awesomium::WebFileChooserMode)lua_tointeger(L,2);

		Awesomium::WebFileChooserInfo* self=(Luna< Awesomium::WebFileChooserInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebFileChooserInfo::mode(Awesomium::WebFileChooserMode). Got : '%s'",typeid(Luna< Awesomium::WebFileChooserInfo >::check(L,1)).name());
		}
		self->mode = value;

		return 0;
	}

	// void Awesomium::WebFileChooserInfo::title(Awesomium::WebString value)
	static int _bind_setTitle(lua_State *L) {
		if (!_lg_typecheck_setTitle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebFileChooserInfo::title(Awesomium::WebString value) function, expected prototype:\nvoid Awesomium::WebFileChooserInfo::title(Awesomium::WebString value)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string value_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString value = Awesomium::ToWebString(value_str);

		Awesomium::WebFileChooserInfo* self=(Luna< Awesomium::WebFileChooserInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebFileChooserInfo::title(Awesomium::WebString). Got : '%s'",typeid(Luna< Awesomium::WebFileChooserInfo >::check(L,1)).name());
		}
		self->title = value;

		return 0;
	}

	// void Awesomium::WebFileChooserInfo::default_file_name(Awesomium::WebString value)
	static int _bind_setDefault_file_name(lua_State *L) {
		if (!_lg_typecheck_setDefault_file_name(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebFileChooserInfo::default_file_name(Awesomium::WebString value) function, expected prototype:\nvoid Awesomium::WebFileChooserInfo::default_file_name(Awesomium::WebString value)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string value_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString value = Awesomium::ToWebString(value_str);

		Awesomium::WebFileChooserInfo* self=(Luna< Awesomium::WebFileChooserInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebFileChooserInfo::default_file_name(Awesomium::WebString). Got : '%s'",typeid(Luna< Awesomium::WebFileChooserInfo >::check(L,1)).name());
		}
		self->default_file_name = value;

		return 0;
	}

	// void Awesomium::WebFileChooserInfo::accept_types(Awesomium::WebStringArray value)
	static int _bind_setAccept_types(lua_State *L) {
		if (!_lg_typecheck_setAccept_types(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebFileChooserInfo::accept_types(Awesomium::WebStringArray value) function, expected prototype:\nvoid Awesomium::WebFileChooserInfo::accept_types(Awesomium::WebStringArray value)\nClass arguments details:\narg 1 ID = 16354805\n");
		}

		Awesomium::WebStringArray* value_ptr=(Luna< Awesomium::WebStringArray >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in Awesomium::WebFileChooserInfo::accept_types function");
		}
		Awesomium::WebStringArray value=*value_ptr;

		Awesomium::WebFileChooserInfo* self=(Luna< Awesomium::WebFileChooserInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebFileChooserInfo::accept_types(Awesomium::WebStringArray). Got : '%s'",typeid(Luna< Awesomium::WebFileChooserInfo >::check(L,1)).name());
		}
		self->accept_types = value;

		return 0;
	}


	// Operator binds:

};

Awesomium::WebFileChooserInfo* LunaTraits< Awesomium::WebFileChooserInfo >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< Awesomium::WebFileChooserInfo >::_bind_dtor(Awesomium::WebFileChooserInfo* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::WebFileChooserInfo >::className[] = "WebFileChooserInfo";
const char LunaTraits< Awesomium::WebFileChooserInfo >::fullName[] = "Awesomium::WebFileChooserInfo";
const char LunaTraits< Awesomium::WebFileChooserInfo >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebFileChooserInfo >::parents[] = {0};
const int LunaTraits< Awesomium::WebFileChooserInfo >::hash = 95946160;
const int LunaTraits< Awesomium::WebFileChooserInfo >::uniqueIDs[] = {95946160,0};

luna_RegType LunaTraits< Awesomium::WebFileChooserInfo >::methods[] = {
	{"getMode", &luna_wrapper_Awesomium_WebFileChooserInfo::_bind_getMode},
	{"getTitle", &luna_wrapper_Awesomium_WebFileChooserInfo::_bind_getTitle},
	{"getDefault_file_name", &luna_wrapper_Awesomium_WebFileChooserInfo::_bind_getDefault_file_name},
	{"getAccept_types", &luna_wrapper_Awesomium_WebFileChooserInfo::_bind_getAccept_types},
	{"setMode", &luna_wrapper_Awesomium_WebFileChooserInfo::_bind_setMode},
	{"setTitle", &luna_wrapper_Awesomium_WebFileChooserInfo::_bind_setTitle},
	{"setDefault_file_name", &luna_wrapper_Awesomium_WebFileChooserInfo::_bind_setDefault_file_name},
	{"setAccept_types", &luna_wrapper_Awesomium_WebFileChooserInfo::_bind_setAccept_types},
	{"dynCast", &luna_wrapper_Awesomium_WebFileChooserInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_WebFileChooserInfo::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebFileChooserInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebFileChooserInfo >::enumValues[] = {
	{0,0}
};



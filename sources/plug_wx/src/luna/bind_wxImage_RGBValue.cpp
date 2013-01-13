#include <plug_common.h>

class luna_wrapper_wxImage_RGBValue {
public:
	typedef Luna< wxImage::RGBValue > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,45106465) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxImage::RGBValue*)");
		}

		wxImage::RGBValue* rhs =(Luna< wxImage::RGBValue >::check(L,2));
		wxImage::RGBValue* self=(Luna< wxImage::RGBValue >::check(L,1));
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

		wxImage::RGBValue* self=(Luna< wxImage::RGBValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxImage::RGBValue");
		
		return luna_dynamicCast(L,converters,"wxImage::RGBValue",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>3 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getRed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGreen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBlue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGreen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBlue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxImage::RGBValue::RGBValue(unsigned char r = 0, unsigned char g = 0, unsigned char b = 0)
	static wxImage::RGBValue* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImage::RGBValue::RGBValue(unsigned char r = 0, unsigned char g = 0, unsigned char b = 0) function, expected prototype:\nwxImage::RGBValue::RGBValue(unsigned char r = 0, unsigned char g = 0, unsigned char b = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned char r = (unsigned char)(lua_tointeger(L,1));
		unsigned char g = (unsigned char)(lua_tointeger(L,2));
		unsigned char b = (unsigned char)(lua_tointeger(L,3));

		return new wxImage::RGBValue(r, g, b);
	}


	// Function binds:
	// unsigned char wxImage::RGBValue::red()
	static int _bind_getRed(lua_State *L) {
		if (!_lg_typecheck_getRed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned char wxImage::RGBValue::red() function, expected prototype:\nunsigned char wxImage::RGBValue::red()\nClass arguments details:\n");
		}


		wxImage::RGBValue* self=(Luna< wxImage::RGBValue >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned char wxImage::RGBValue::red(). Got : '%s'",typeid(Luna< wxImage::RGBValue >::check(L,1)).name());
		}
		unsigned char lret = self->red;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char wxImage::RGBValue::green()
	static int _bind_getGreen(lua_State *L) {
		if (!_lg_typecheck_getGreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned char wxImage::RGBValue::green() function, expected prototype:\nunsigned char wxImage::RGBValue::green()\nClass arguments details:\n");
		}


		wxImage::RGBValue* self=(Luna< wxImage::RGBValue >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned char wxImage::RGBValue::green(). Got : '%s'",typeid(Luna< wxImage::RGBValue >::check(L,1)).name());
		}
		unsigned char lret = self->green;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char wxImage::RGBValue::blue()
	static int _bind_getBlue(lua_State *L) {
		if (!_lg_typecheck_getBlue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned char wxImage::RGBValue::blue() function, expected prototype:\nunsigned char wxImage::RGBValue::blue()\nClass arguments details:\n");
		}


		wxImage::RGBValue* self=(Luna< wxImage::RGBValue >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned char wxImage::RGBValue::blue(). Got : '%s'",typeid(Luna< wxImage::RGBValue >::check(L,1)).name());
		}
		unsigned char lret = self->blue;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// void wxImage::RGBValue::red(unsigned char value)
	static int _bind_setRed(lua_State *L) {
		if (!_lg_typecheck_setRed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxImage::RGBValue::red(unsigned char value) function, expected prototype:\nvoid wxImage::RGBValue::red(unsigned char value)\nClass arguments details:\n");
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		wxImage::RGBValue* self=(Luna< wxImage::RGBValue >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxImage::RGBValue::red(unsigned char). Got : '%s'",typeid(Luna< wxImage::RGBValue >::check(L,1)).name());
		}
		self->red = value;

		return 0;
	}

	// void wxImage::RGBValue::green(unsigned char value)
	static int _bind_setGreen(lua_State *L) {
		if (!_lg_typecheck_setGreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxImage::RGBValue::green(unsigned char value) function, expected prototype:\nvoid wxImage::RGBValue::green(unsigned char value)\nClass arguments details:\n");
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		wxImage::RGBValue* self=(Luna< wxImage::RGBValue >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxImage::RGBValue::green(unsigned char). Got : '%s'",typeid(Luna< wxImage::RGBValue >::check(L,1)).name());
		}
		self->green = value;

		return 0;
	}

	// void wxImage::RGBValue::blue(unsigned char value)
	static int _bind_setBlue(lua_State *L) {
		if (!_lg_typecheck_setBlue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxImage::RGBValue::blue(unsigned char value) function, expected prototype:\nvoid wxImage::RGBValue::blue(unsigned char value)\nClass arguments details:\n");
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		wxImage::RGBValue* self=(Luna< wxImage::RGBValue >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxImage::RGBValue::blue(unsigned char). Got : '%s'",typeid(Luna< wxImage::RGBValue >::check(L,1)).name());
		}
		self->blue = value;

		return 0;
	}


	// Operator binds:

};

wxImage::RGBValue* LunaTraits< wxImage::RGBValue >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxImage_RGBValue::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxImage::RGBValue >::_bind_dtor(wxImage::RGBValue* obj) {
	delete obj;
}

const char LunaTraits< wxImage::RGBValue >::className[] = "wxImage_RGBValue";
const char LunaTraits< wxImage::RGBValue >::fullName[] = "wxImage::RGBValue";
const char LunaTraits< wxImage::RGBValue >::moduleName[] = "wxImage";
const char* LunaTraits< wxImage::RGBValue >::parents[] = {0};
const int LunaTraits< wxImage::RGBValue >::hash = 45106465;
const int LunaTraits< wxImage::RGBValue >::uniqueIDs[] = {45106465,0};

luna_RegType LunaTraits< wxImage::RGBValue >::methods[] = {
	{"getRed", &luna_wrapper_wxImage_RGBValue::_bind_getRed},
	{"getGreen", &luna_wrapper_wxImage_RGBValue::_bind_getGreen},
	{"getBlue", &luna_wrapper_wxImage_RGBValue::_bind_getBlue},
	{"setRed", &luna_wrapper_wxImage_RGBValue::_bind_setRed},
	{"setGreen", &luna_wrapper_wxImage_RGBValue::_bind_setGreen},
	{"setBlue", &luna_wrapper_wxImage_RGBValue::_bind_setBlue},
	{"dynCast", &luna_wrapper_wxImage_RGBValue::_bind_dynCast},
	{"__eq", &luna_wrapper_wxImage_RGBValue::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxImage::RGBValue >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxImage::RGBValue >::enumValues[] = {
	{0,0}
};



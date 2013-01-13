#include <plug_common.h>

class luna_wrapper_Awesomium_Rect {
public:
	typedef Luna< Awesomium::Rect > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,8907551) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::Rect*)");
		}

		Awesomium::Rect* rhs =(Luna< Awesomium::Rect >::check(L,2));
		Awesomium::Rect* self=(Luna< Awesomium::Rect >::check(L,1));
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

		Awesomium::Rect* self=(Luna< Awesomium::Rect >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::Rect");
		
		return luna_dynamicCast(L,converters,"Awesomium::Rect",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_IsEmpty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// Awesomium::Rect::Rect()
	static Awesomium::Rect* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::Rect::Rect() function, expected prototype:\nAwesomium::Rect::Rect()\nClass arguments details:\n");
		}


		return new Awesomium::Rect();
	}

	// Awesomium::Rect::Rect(int x, int y, int width, int height)
	static Awesomium::Rect* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::Rect::Rect(int x, int y, int width, int height) function, expected prototype:\nAwesomium::Rect::Rect(int x, int y, int width, int height)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,1);
		int y=(int)lua_tointeger(L,2);
		int width=(int)lua_tointeger(L,3);
		int height=(int)lua_tointeger(L,4);

		return new Awesomium::Rect(x, y, width, height);
	}

	// Overload binder for Awesomium::Rect::Rect
	static Awesomium::Rect* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Rect, cannot match any of the overloads for function Rect:\n  Rect()\n  Rect(int, int, int, int)\n");
		return NULL;
	}


	// Function binds:
	// bool Awesomium::Rect::IsEmpty() const
	static int _bind_IsEmpty(lua_State *L) {
		if (!_lg_typecheck_IsEmpty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::Rect::IsEmpty() const function, expected prototype:\nbool Awesomium::Rect::IsEmpty() const\nClass arguments details:\n");
		}


		Awesomium::Rect* self=(Luna< Awesomium::Rect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::Rect::IsEmpty() const. Got : '%s'",typeid(Luna< Awesomium::Rect >::check(L,1)).name());
		}
		bool lret = self->IsEmpty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int Awesomium::Rect::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int Awesomium::Rect::x() function, expected prototype:\nint Awesomium::Rect::x()\nClass arguments details:\n");
		}


		Awesomium::Rect* self=(Luna< Awesomium::Rect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int Awesomium::Rect::x(). Got : '%s'",typeid(Luna< Awesomium::Rect >::check(L,1)).name());
		}
		int lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int Awesomium::Rect::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int Awesomium::Rect::y() function, expected prototype:\nint Awesomium::Rect::y()\nClass arguments details:\n");
		}


		Awesomium::Rect* self=(Luna< Awesomium::Rect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int Awesomium::Rect::y(). Got : '%s'",typeid(Luna< Awesomium::Rect >::check(L,1)).name());
		}
		int lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int Awesomium::Rect::width()
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int Awesomium::Rect::width() function, expected prototype:\nint Awesomium::Rect::width()\nClass arguments details:\n");
		}


		Awesomium::Rect* self=(Luna< Awesomium::Rect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int Awesomium::Rect::width(). Got : '%s'",typeid(Luna< Awesomium::Rect >::check(L,1)).name());
		}
		int lret = self->width;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int Awesomium::Rect::height()
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int Awesomium::Rect::height() function, expected prototype:\nint Awesomium::Rect::height()\nClass arguments details:\n");
		}


		Awesomium::Rect* self=(Luna< Awesomium::Rect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int Awesomium::Rect::height(). Got : '%s'",typeid(Luna< Awesomium::Rect >::check(L,1)).name());
		}
		int lret = self->height;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void Awesomium::Rect::x(int value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::Rect::x(int value) function, expected prototype:\nvoid Awesomium::Rect::x(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		Awesomium::Rect* self=(Luna< Awesomium::Rect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::Rect::x(int). Got : '%s'",typeid(Luna< Awesomium::Rect >::check(L,1)).name());
		}
		self->x = value;

		return 0;
	}

	// void Awesomium::Rect::y(int value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::Rect::y(int value) function, expected prototype:\nvoid Awesomium::Rect::y(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		Awesomium::Rect* self=(Luna< Awesomium::Rect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::Rect::y(int). Got : '%s'",typeid(Luna< Awesomium::Rect >::check(L,1)).name());
		}
		self->y = value;

		return 0;
	}

	// void Awesomium::Rect::width(int value)
	static int _bind_setWidth(lua_State *L) {
		if (!_lg_typecheck_setWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::Rect::width(int value) function, expected prototype:\nvoid Awesomium::Rect::width(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		Awesomium::Rect* self=(Luna< Awesomium::Rect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::Rect::width(int). Got : '%s'",typeid(Luna< Awesomium::Rect >::check(L,1)).name());
		}
		self->width = value;

		return 0;
	}

	// void Awesomium::Rect::height(int value)
	static int _bind_setHeight(lua_State *L) {
		if (!_lg_typecheck_setHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::Rect::height(int value) function, expected prototype:\nvoid Awesomium::Rect::height(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		Awesomium::Rect* self=(Luna< Awesomium::Rect >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::Rect::height(int). Got : '%s'",typeid(Luna< Awesomium::Rect >::check(L,1)).name());
		}
		self->height = value;

		return 0;
	}


	// Operator binds:

};

Awesomium::Rect* LunaTraits< Awesomium::Rect >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_Rect::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< Awesomium::Rect >::_bind_dtor(Awesomium::Rect* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::Rect >::className[] = "Rect";
const char LunaTraits< Awesomium::Rect >::fullName[] = "Awesomium::Rect";
const char LunaTraits< Awesomium::Rect >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::Rect >::parents[] = {0};
const int LunaTraits< Awesomium::Rect >::hash = 8907551;
const int LunaTraits< Awesomium::Rect >::uniqueIDs[] = {8907551,0};

luna_RegType LunaTraits< Awesomium::Rect >::methods[] = {
	{"IsEmpty", &luna_wrapper_Awesomium_Rect::_bind_IsEmpty},
	{"getX", &luna_wrapper_Awesomium_Rect::_bind_getX},
	{"getY", &luna_wrapper_Awesomium_Rect::_bind_getY},
	{"getWidth", &luna_wrapper_Awesomium_Rect::_bind_getWidth},
	{"getHeight", &luna_wrapper_Awesomium_Rect::_bind_getHeight},
	{"setX", &luna_wrapper_Awesomium_Rect::_bind_setX},
	{"setY", &luna_wrapper_Awesomium_Rect::_bind_setY},
	{"setWidth", &luna_wrapper_Awesomium_Rect::_bind_setWidth},
	{"setHeight", &luna_wrapper_Awesomium_Rect::_bind_setHeight},
	{"dynCast", &luna_wrapper_Awesomium_Rect::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_Rect::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::Rect >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::Rect >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

class luna_wrapper_int4 {
public:
	typedef Luna< int4 > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3237413) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(int4*)");
		}

		int4* rhs =(Luna< int4 >::check(L,2));
		int4* self=(Luna< int4 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		int4* self= (int4*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< int4 >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3237413) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< int4 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
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

		int4* self=(Luna< int4 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("int4");
		
		return luna_dynamicCast(L,converters,"int4",name);
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
	inline static bool _lg_typecheck_getX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getZ(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getW(lua_State *L) {
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

	inline static bool _lg_typecheck_setZ(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setW(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 2 valid operators)
	inline static bool _lg_typecheck_op_index_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_index_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Constructor binds:
	// int4::int4()
	static int4* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int4::int4() function, expected prototype:\nint4::int4()\nClass arguments details:\n");
		}


		return new int4();
	}

	// int4::int4(int _x, int _y, int _z, int _w)
	static int4* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int4::int4(int _x, int _y, int _z, int _w) function, expected prototype:\nint4::int4(int _x, int _y, int _z, int _w)\nClass arguments details:\n");
		}

		int _x=(int)lua_tointeger(L,1);
		int _y=(int)lua_tointeger(L,2);
		int _z=(int)lua_tointeger(L,3);
		int _w=(int)lua_tointeger(L,4);

		return new int4(_x, _y, _z, _w);
	}

	// Overload binder for int4::int4
	static int4* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function int4, cannot match any of the overloads for function int4:\n  int4()\n  int4(int, int, int, int)\n");
		return NULL;
	}


	// Function binds:
	// int int4::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int int4::x() function, expected prototype:\nint int4::x()\nClass arguments details:\n");
		}


		int4* self=(Luna< int4 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int int4::x(). Got : '%s'",typeid(Luna< int4 >::check(L,1)).name());
		}
		int lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int int4::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int int4::y() function, expected prototype:\nint int4::y()\nClass arguments details:\n");
		}


		int4* self=(Luna< int4 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int int4::y(). Got : '%s'",typeid(Luna< int4 >::check(L,1)).name());
		}
		int lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int int4::z()
	static int _bind_getZ(lua_State *L) {
		if (!_lg_typecheck_getZ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int int4::z() function, expected prototype:\nint int4::z()\nClass arguments details:\n");
		}


		int4* self=(Luna< int4 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int int4::z(). Got : '%s'",typeid(Luna< int4 >::check(L,1)).name());
		}
		int lret = self->z;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int int4::w()
	static int _bind_getW(lua_State *L) {
		if (!_lg_typecheck_getW(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int int4::w() function, expected prototype:\nint int4::w()\nClass arguments details:\n");
		}


		int4* self=(Luna< int4 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int int4::w(). Got : '%s'",typeid(Luna< int4 >::check(L,1)).name());
		}
		int lret = self->w;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void int4::x(int value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void int4::x(int value) function, expected prototype:\nvoid int4::x(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		int4* self=(Luna< int4 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void int4::x(int). Got : '%s'",typeid(Luna< int4 >::check(L,1)).name());
		}
		self->x = value;

		return 0;
	}

	// void int4::y(int value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void int4::y(int value) function, expected prototype:\nvoid int4::y(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		int4* self=(Luna< int4 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void int4::y(int). Got : '%s'",typeid(Luna< int4 >::check(L,1)).name());
		}
		self->y = value;

		return 0;
	}

	// void int4::z(int value)
	static int _bind_setZ(lua_State *L) {
		if (!_lg_typecheck_setZ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void int4::z(int value) function, expected prototype:\nvoid int4::z(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		int4* self=(Luna< int4 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void int4::z(int). Got : '%s'",typeid(Luna< int4 >::check(L,1)).name());
		}
		self->z = value;

		return 0;
	}

	// void int4::w(int value)
	static int _bind_setW(lua_State *L) {
		if (!_lg_typecheck_setW(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void int4::w(int value) function, expected prototype:\nvoid int4::w(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		int4* self=(Luna< int4 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void int4::w(int). Got : '%s'",typeid(Luna< int4 >::check(L,1)).name());
		}
		self->w = value;

		return 0;
	}


	// Operator binds:
	// const int & int4::operator[](int i) const
	static int _bind_op_index_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const int & int4::operator[](int i) const function, expected prototype:\nconst int & int4::operator[](int i) const\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);

		int4* self=(Luna< int4 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const int & int4::operator[](int) const. Got : '%s'",typeid(Luna< int4 >::check(L,1)).name());
		}
		const int & lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int & int4::operator[](int i)
	static int _bind_op_index_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int & int4::operator[](int i) function, expected prototype:\nint & int4::operator[](int i)\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);

		int4* self=(Luna< int4 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int & int4::operator[](int). Got : '%s'",typeid(Luna< int4 >::check(L,1)).name());
		}
		int & lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for int4::operator[]
	static int _bind_op_index(lua_State *L) {
		if (_lg_typecheck_op_index_overload_1(L)) return _bind_op_index_overload_1(L);
		if (_lg_typecheck_op_index_overload_2(L)) return _bind_op_index_overload_2(L);

		luaL_error(L, "error in function operator[], cannot match any of the overloads for function operator[]:\n  operator[](int)\n  operator[](int)\n");
		return 0;
	}


};

int4* LunaTraits< int4 >::_bind_ctor(lua_State *L) {
	return luna_wrapper_int4::_bind_ctor(L);
}

void LunaTraits< int4 >::_bind_dtor(int4* obj) {
	delete obj;
}

const char LunaTraits< int4 >::className[] = "int4";
const char LunaTraits< int4 >::fullName[] = "int4";
const char LunaTraits< int4 >::moduleName[] = "bullet";
const char* LunaTraits< int4 >::parents[] = {0};
const int LunaTraits< int4 >::hash = 3237413;
const int LunaTraits< int4 >::uniqueIDs[] = {3237413,0};

luna_RegType LunaTraits< int4 >::methods[] = {
	{"getX", &luna_wrapper_int4::_bind_getX},
	{"getY", &luna_wrapper_int4::_bind_getY},
	{"getZ", &luna_wrapper_int4::_bind_getZ},
	{"getW", &luna_wrapper_int4::_bind_getW},
	{"setX", &luna_wrapper_int4::_bind_setX},
	{"setY", &luna_wrapper_int4::_bind_setY},
	{"setZ", &luna_wrapper_int4::_bind_setZ},
	{"setW", &luna_wrapper_int4::_bind_setW},
	{"op_index", &luna_wrapper_int4::_bind_op_index},
	{"dynCast", &luna_wrapper_int4::_bind_dynCast},
	{"__eq", &luna_wrapper_int4::_bind___eq},
	{"fromVoid", &luna_wrapper_int4::_bind_fromVoid},
	{"asVoid", &luna_wrapper_int4::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< int4 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< int4 >::enumValues[] = {
	{0,0}
};



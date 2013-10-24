#include <plug_common.h>

class luna_wrapper_b2Vec3 {
public:
	typedef Luna< b2Vec3 > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,54494887) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2Vec3*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		b2Vec3* rhs =(Luna< b2Vec3 >::check(L,2));
		b2Vec3* self=(Luna< b2Vec3 >::check(L,1));
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
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		b2Vec3* self= (b2Vec3*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2Vec3 >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,54494887) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< b2Vec3 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		b2Vec3* self=(Luna< b2Vec3 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2Vec3");
		
		return luna_dynamicCast(L,converters,"b2Vec3",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SetZero(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Set(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
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

	inline static bool _lg_typecheck_getZ(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setZ(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 4 valid operators)
	inline static bool _lg_typecheck___unm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_op_add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494887) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494887) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_mult(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Constructor binds:
	// b2Vec3::b2Vec3()
	static b2Vec3* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec3::b2Vec3() function, expected prototype:\nb2Vec3::b2Vec3()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new b2Vec3();
	}

	// b2Vec3::b2Vec3(float x, float y, float z)
	static b2Vec3* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec3::b2Vec3(float x, float y, float z) function, expected prototype:\nb2Vec3::b2Vec3(float x, float y, float z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,1);
		float y=(float)lua_tonumber(L,2);
		float z=(float)lua_tonumber(L,3);

		return new b2Vec3(x, y, z);
	}

	// Overload binder for b2Vec3::b2Vec3
	static b2Vec3* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function b2Vec3, cannot match any of the overloads for function b2Vec3:\n  b2Vec3()\n  b2Vec3(float, float, float)\n");
		return NULL;
	}


	// Function binds:
	// void b2Vec3::SetZero()
	static int _bind_SetZero(lua_State *L) {
		if (!_lg_typecheck_SetZero(L)) {
			luaL_error(L, "luna typecheck failed in void b2Vec3::SetZero() function, expected prototype:\nvoid b2Vec3::SetZero()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2Vec3* self=(Luna< b2Vec3 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Vec3::SetZero(). Got : '%s'\n%s",typeid(Luna< b2Vec3 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetZero();

		return 0;
	}

	// void b2Vec3::Set(float x_, float y_, float z_)
	static int _bind_Set(lua_State *L) {
		if (!_lg_typecheck_Set(L)) {
			luaL_error(L, "luna typecheck failed in void b2Vec3::Set(float x_, float y_, float z_) function, expected prototype:\nvoid b2Vec3::Set(float x_, float y_, float z_)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x_=(float)lua_tonumber(L,2);
		float y_=(float)lua_tonumber(L,3);
		float z_=(float)lua_tonumber(L,4);

		b2Vec3* self=(Luna< b2Vec3 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Vec3::Set(float, float, float). Got : '%s'\n%s",typeid(Luna< b2Vec3 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Set(x_, y_, z_);

		return 0;
	}

	// float b2Vec3::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luaL_error(L, "luna typecheck failed in float b2Vec3::x() function, expected prototype:\nfloat b2Vec3::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2Vec3* self=(Luna< b2Vec3 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2Vec3::x(). Got : '%s'\n%s",typeid(Luna< b2Vec3 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2Vec3::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luaL_error(L, "luna typecheck failed in float b2Vec3::y() function, expected prototype:\nfloat b2Vec3::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2Vec3* self=(Luna< b2Vec3 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2Vec3::y(). Got : '%s'\n%s",typeid(Luna< b2Vec3 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2Vec3::z()
	static int _bind_getZ(lua_State *L) {
		if (!_lg_typecheck_getZ(L)) {
			luaL_error(L, "luna typecheck failed in float b2Vec3::z() function, expected prototype:\nfloat b2Vec3::z()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2Vec3* self=(Luna< b2Vec3 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2Vec3::z(). Got : '%s'\n%s",typeid(Luna< b2Vec3 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->z;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2Vec3::x(float value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luaL_error(L, "luna typecheck failed in void b2Vec3::x(float value) function, expected prototype:\nvoid b2Vec3::x(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		b2Vec3* self=(Luna< b2Vec3 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Vec3::x(float). Got : '%s'\n%s",typeid(Luna< b2Vec3 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->x = value;

		return 0;
	}

	// void b2Vec3::y(float value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luaL_error(L, "luna typecheck failed in void b2Vec3::y(float value) function, expected prototype:\nvoid b2Vec3::y(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		b2Vec3* self=(Luna< b2Vec3 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Vec3::y(float). Got : '%s'\n%s",typeid(Luna< b2Vec3 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->y = value;

		return 0;
	}

	// void b2Vec3::z(float value)
	static int _bind_setZ(lua_State *L) {
		if (!_lg_typecheck_setZ(L)) {
			luaL_error(L, "luna typecheck failed in void b2Vec3::z(float value) function, expected prototype:\nvoid b2Vec3::z(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		b2Vec3* self=(Luna< b2Vec3 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Vec3::z(float). Got : '%s'\n%s",typeid(Luna< b2Vec3 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->z = value;

		return 0;
	}


	// Operator binds:
	// b2Vec3 b2Vec3::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luaL_error(L, "luna typecheck failed in b2Vec3 b2Vec3::operator-() const function, expected prototype:\nb2Vec3 b2Vec3::operator-() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2Vec3* self=(Luna< b2Vec3 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call b2Vec3 b2Vec3::operator-() const. Got : '%s'\n%s",typeid(Luna< b2Vec3 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		b2Vec3 stack_lret = self->operator-();
		b2Vec3* lret = new b2Vec3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec3 >::push(L,lret,true);

		return 1;
	}

	// void b2Vec3::operator+=(const b2Vec3 & v)
	static int _bind_op_add(lua_State *L) {
		if (!_lg_typecheck_op_add(L)) {
			luaL_error(L, "luna typecheck failed in void b2Vec3::operator+=(const b2Vec3 & v) function, expected prototype:\nvoid b2Vec3::operator+=(const b2Vec3 & v)\nClass arguments details:\narg 1 ID = 54494887\n\n%s",luna_dumpStack(L).c_str());
		}

		const b2Vec3* v_ptr=(Luna< b2Vec3 >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in b2Vec3::operator+= function");
		}
		const b2Vec3 & v=*v_ptr;

		b2Vec3* self=(Luna< b2Vec3 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Vec3::operator+=(const b2Vec3 &). Got : '%s'\n%s",typeid(Luna< b2Vec3 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator+=(v);

		return 0;
	}

	// void b2Vec3::operator-=(const b2Vec3 & v)
	static int _bind_op_sub(lua_State *L) {
		if (!_lg_typecheck_op_sub(L)) {
			luaL_error(L, "luna typecheck failed in void b2Vec3::operator-=(const b2Vec3 & v) function, expected prototype:\nvoid b2Vec3::operator-=(const b2Vec3 & v)\nClass arguments details:\narg 1 ID = 54494887\n\n%s",luna_dumpStack(L).c_str());
		}

		const b2Vec3* v_ptr=(Luna< b2Vec3 >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in b2Vec3::operator-= function");
		}
		const b2Vec3 & v=*v_ptr;

		b2Vec3* self=(Luna< b2Vec3 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Vec3::operator-=(const b2Vec3 &). Got : '%s'\n%s",typeid(Luna< b2Vec3 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator-=(v);

		return 0;
	}

	// void b2Vec3::operator*=(float s)
	static int _bind_op_mult(lua_State *L) {
		if (!_lg_typecheck_op_mult(L)) {
			luaL_error(L, "luna typecheck failed in void b2Vec3::operator*=(float s) function, expected prototype:\nvoid b2Vec3::operator*=(float s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float s=(float)lua_tonumber(L,2);

		b2Vec3* self=(Luna< b2Vec3 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2Vec3::operator*=(float). Got : '%s'\n%s",typeid(Luna< b2Vec3 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator*=(s);

		return 0;
	}


};

b2Vec3* LunaTraits< b2Vec3 >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2Vec3::_bind_ctor(L);
}

void LunaTraits< b2Vec3 >::_bind_dtor(b2Vec3* obj) {
	delete obj;
}

const char LunaTraits< b2Vec3 >::className[] = "b2Vec3";
const char LunaTraits< b2Vec3 >::fullName[] = "b2Vec3";
const char LunaTraits< b2Vec3 >::moduleName[] = "box2d";
const char* LunaTraits< b2Vec3 >::parents[] = {0};
const int LunaTraits< b2Vec3 >::hash = 54494887;
const int LunaTraits< b2Vec3 >::uniqueIDs[] = {54494887,0};

luna_RegType LunaTraits< b2Vec3 >::methods[] = {
	{"SetZero", &luna_wrapper_b2Vec3::_bind_SetZero},
	{"Set", &luna_wrapper_b2Vec3::_bind_Set},
	{"getX", &luna_wrapper_b2Vec3::_bind_getX},
	{"getY", &luna_wrapper_b2Vec3::_bind_getY},
	{"getZ", &luna_wrapper_b2Vec3::_bind_getZ},
	{"setX", &luna_wrapper_b2Vec3::_bind_setX},
	{"setY", &luna_wrapper_b2Vec3::_bind_setY},
	{"setZ", &luna_wrapper_b2Vec3::_bind_setZ},
	{"__unm", &luna_wrapper_b2Vec3::_bind___unm},
	{"op_add", &luna_wrapper_b2Vec3::_bind_op_add},
	{"op_sub", &luna_wrapper_b2Vec3::_bind_op_sub},
	{"op_mult", &luna_wrapper_b2Vec3::_bind_op_mult},
	{"dynCast", &luna_wrapper_b2Vec3::_bind_dynCast},
	{"__eq", &luna_wrapper_b2Vec3::_bind___eq},
	{"fromVoid", &luna_wrapper_b2Vec3::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2Vec3::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2Vec3 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2Vec3 >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

class luna_wrapper_b2Vec2 {
public:
	typedef Luna< b2Vec2 > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,54494886) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2Vec2*)");
		}

		b2Vec2* rhs =(Luna< b2Vec2 >::check(L,2));
		b2Vec2* self=(Luna< b2Vec2 >::check(L,1));
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

		b2Vec2* self= (b2Vec2*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2Vec2 >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,54494886) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< b2Vec2 >::check(L,1));
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

		b2Vec2* self=(Luna< b2Vec2 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2Vec2");
		
		return luna_dynamicCast(L,converters,"b2Vec2",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SetZero(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Set(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Length(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LengthSquared(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Normalize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsValid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Skew(lua_State *L) {
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

	inline static bool _lg_typecheck_setX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 6 valid operators)
	inline static bool _lg_typecheck___unm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_op_call_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_call_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_mult(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Constructor binds:
	// b2Vec2::b2Vec2()
	static b2Vec2* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2::b2Vec2() function, expected prototype:\nb2Vec2::b2Vec2()\nClass arguments details:\n");
		}


		return new b2Vec2();
	}

	// b2Vec2::b2Vec2(float x, float y)
	static b2Vec2* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2::b2Vec2(float x, float y) function, expected prototype:\nb2Vec2::b2Vec2(float x, float y)\nClass arguments details:\n");
		}

		float x=(float)lua_tonumber(L,1);
		float y=(float)lua_tonumber(L,2);

		return new b2Vec2(x, y);
	}

	// Overload binder for b2Vec2::b2Vec2
	static b2Vec2* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function b2Vec2, cannot match any of the overloads for function b2Vec2:\n  b2Vec2()\n  b2Vec2(float, float)\n");
		return NULL;
	}


	// Function binds:
	// void b2Vec2::SetZero()
	static int _bind_SetZero(lua_State *L) {
		if (!_lg_typecheck_SetZero(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Vec2::SetZero() function, expected prototype:\nvoid b2Vec2::SetZero()\nClass arguments details:\n");
		}


		b2Vec2* self=(Luna< b2Vec2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Vec2::SetZero(). Got : '%s'",typeid(Luna< b2Vec2 >::check(L,1)).name());
		}
		self->SetZero();

		return 0;
	}

	// void b2Vec2::Set(float x_, float y_)
	static int _bind_Set(lua_State *L) {
		if (!_lg_typecheck_Set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Vec2::Set(float x_, float y_) function, expected prototype:\nvoid b2Vec2::Set(float x_, float y_)\nClass arguments details:\n");
		}

		float x_=(float)lua_tonumber(L,2);
		float y_=(float)lua_tonumber(L,3);

		b2Vec2* self=(Luna< b2Vec2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Vec2::Set(float, float). Got : '%s'",typeid(Luna< b2Vec2 >::check(L,1)).name());
		}
		self->Set(x_, y_);

		return 0;
	}

	// float b2Vec2::Length() const
	static int _bind_Length(lua_State *L) {
		if (!_lg_typecheck_Length(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Vec2::Length() const function, expected prototype:\nfloat b2Vec2::Length() const\nClass arguments details:\n");
		}


		b2Vec2* self=(Luna< b2Vec2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Vec2::Length() const. Got : '%s'",typeid(Luna< b2Vec2 >::check(L,1)).name());
		}
		float lret = self->Length();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2Vec2::LengthSquared() const
	static int _bind_LengthSquared(lua_State *L) {
		if (!_lg_typecheck_LengthSquared(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Vec2::LengthSquared() const function, expected prototype:\nfloat b2Vec2::LengthSquared() const\nClass arguments details:\n");
		}


		b2Vec2* self=(Luna< b2Vec2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Vec2::LengthSquared() const. Got : '%s'",typeid(Luna< b2Vec2 >::check(L,1)).name());
		}
		float lret = self->LengthSquared();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2Vec2::Normalize()
	static int _bind_Normalize(lua_State *L) {
		if (!_lg_typecheck_Normalize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Vec2::Normalize() function, expected prototype:\nfloat b2Vec2::Normalize()\nClass arguments details:\n");
		}


		b2Vec2* self=(Luna< b2Vec2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Vec2::Normalize(). Got : '%s'",typeid(Luna< b2Vec2 >::check(L,1)).name());
		}
		float lret = self->Normalize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool b2Vec2::IsValid() const
	static int _bind_IsValid(lua_State *L) {
		if (!_lg_typecheck_IsValid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2Vec2::IsValid() const function, expected prototype:\nbool b2Vec2::IsValid() const\nClass arguments details:\n");
		}


		b2Vec2* self=(Luna< b2Vec2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2Vec2::IsValid() const. Got : '%s'",typeid(Luna< b2Vec2 >::check(L,1)).name());
		}
		bool lret = self->IsValid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// b2Vec2 b2Vec2::Skew() const
	static int _bind_Skew(lua_State *L) {
		if (!_lg_typecheck_Skew(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2Vec2::Skew() const function, expected prototype:\nb2Vec2 b2Vec2::Skew() const\nClass arguments details:\n");
		}


		b2Vec2* self=(Luna< b2Vec2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2Vec2::Skew() const. Got : '%s'",typeid(Luna< b2Vec2 >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->Skew();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// float b2Vec2::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Vec2::x() function, expected prototype:\nfloat b2Vec2::x()\nClass arguments details:\n");
		}


		b2Vec2* self=(Luna< b2Vec2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Vec2::x(). Got : '%s'",typeid(Luna< b2Vec2 >::check(L,1)).name());
		}
		float lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2Vec2::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Vec2::y() function, expected prototype:\nfloat b2Vec2::y()\nClass arguments details:\n");
		}


		b2Vec2* self=(Luna< b2Vec2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Vec2::y(). Got : '%s'",typeid(Luna< b2Vec2 >::check(L,1)).name());
		}
		float lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2Vec2::x(float value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Vec2::x(float value) function, expected prototype:\nvoid b2Vec2::x(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2Vec2* self=(Luna< b2Vec2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Vec2::x(float). Got : '%s'",typeid(Luna< b2Vec2 >::check(L,1)).name());
		}
		self->x = value;

		return 0;
	}

	// void b2Vec2::y(float value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Vec2::y(float value) function, expected prototype:\nvoid b2Vec2::y(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		b2Vec2* self=(Luna< b2Vec2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Vec2::y(float). Got : '%s'",typeid(Luna< b2Vec2 >::check(L,1)).name());
		}
		self->y = value;

		return 0;
	}


	// Operator binds:
	// b2Vec2 b2Vec2::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Vec2 b2Vec2::operator-() const function, expected prototype:\nb2Vec2 b2Vec2::operator-() const\nClass arguments details:\n");
		}


		b2Vec2* self=(Luna< b2Vec2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Vec2 b2Vec2::operator-() const. Got : '%s'",typeid(Luna< b2Vec2 >::check(L,1)).name());
		}
		b2Vec2 stack_lret = self->operator-();
		b2Vec2* lret = new b2Vec2(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Vec2 >::push(L,lret,true);

		return 1;
	}

	// float b2Vec2::operator()(signed int i) const
	static int _bind_op_call_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2Vec2::operator()(signed int i) const function, expected prototype:\nfloat b2Vec2::operator()(signed int i) const\nClass arguments details:\n");
		}

		signed int i=(signed int)lua_tointeger(L,2);

		b2Vec2* self=(Luna< b2Vec2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2Vec2::operator()(signed int) const. Got : '%s'",typeid(Luna< b2Vec2 >::check(L,1)).name());
		}
		float lret = self->operator()(i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float & b2Vec2::operator()(signed int i)
	static int _bind_op_call_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float & b2Vec2::operator()(signed int i) function, expected prototype:\nfloat & b2Vec2::operator()(signed int i)\nClass arguments details:\n");
		}

		signed int i=(signed int)lua_tointeger(L,2);

		b2Vec2* self=(Luna< b2Vec2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float & b2Vec2::operator()(signed int). Got : '%s'",typeid(Luna< b2Vec2 >::check(L,1)).name());
		}
		float & lret = self->operator()(i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for b2Vec2::operator()
	static int _bind_op_call(lua_State *L) {
		if (_lg_typecheck_op_call_overload_1(L)) return _bind_op_call_overload_1(L);
		if (_lg_typecheck_op_call_overload_2(L)) return _bind_op_call_overload_2(L);

		luaL_error(L, "error in function operator(), cannot match any of the overloads for function operator():\n  operator()(signed int)\n  operator()(signed int)\n");
		return 0;
	}

	// void b2Vec2::operator+=(const b2Vec2 & v)
	static int _bind_op_add(lua_State *L) {
		if (!_lg_typecheck_op_add(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Vec2::operator+=(const b2Vec2 & v) function, expected prototype:\nvoid b2Vec2::operator+=(const b2Vec2 & v)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		const b2Vec2* v_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in b2Vec2::operator+= function");
		}
		const b2Vec2 & v=*v_ptr;

		b2Vec2* self=(Luna< b2Vec2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Vec2::operator+=(const b2Vec2 &). Got : '%s'",typeid(Luna< b2Vec2 >::check(L,1)).name());
		}
		self->operator+=(v);

		return 0;
	}

	// void b2Vec2::operator-=(const b2Vec2 & v)
	static int _bind_op_sub(lua_State *L) {
		if (!_lg_typecheck_op_sub(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Vec2::operator-=(const b2Vec2 & v) function, expected prototype:\nvoid b2Vec2::operator-=(const b2Vec2 & v)\nClass arguments details:\narg 1 ID = 54494886\n");
		}

		const b2Vec2* v_ptr=(Luna< b2Vec2 >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in b2Vec2::operator-= function");
		}
		const b2Vec2 & v=*v_ptr;

		b2Vec2* self=(Luna< b2Vec2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Vec2::operator-=(const b2Vec2 &). Got : '%s'",typeid(Luna< b2Vec2 >::check(L,1)).name());
		}
		self->operator-=(v);

		return 0;
	}

	// void b2Vec2::operator*=(float a)
	static int _bind_op_mult(lua_State *L) {
		if (!_lg_typecheck_op_mult(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Vec2::operator*=(float a) function, expected prototype:\nvoid b2Vec2::operator*=(float a)\nClass arguments details:\n");
		}

		float a=(float)lua_tonumber(L,2);

		b2Vec2* self=(Luna< b2Vec2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Vec2::operator*=(float). Got : '%s'",typeid(Luna< b2Vec2 >::check(L,1)).name());
		}
		self->operator*=(a);

		return 0;
	}


};

b2Vec2* LunaTraits< b2Vec2 >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2Vec2::_bind_ctor(L);
}

void LunaTraits< b2Vec2 >::_bind_dtor(b2Vec2* obj) {
	delete obj;
}

const char LunaTraits< b2Vec2 >::className[] = "b2Vec2";
const char LunaTraits< b2Vec2 >::fullName[] = "b2Vec2";
const char LunaTraits< b2Vec2 >::moduleName[] = "box2d";
const char* LunaTraits< b2Vec2 >::parents[] = {0};
const int LunaTraits< b2Vec2 >::hash = 54494886;
const int LunaTraits< b2Vec2 >::uniqueIDs[] = {54494886,0};

luna_RegType LunaTraits< b2Vec2 >::methods[] = {
	{"SetZero", &luna_wrapper_b2Vec2::_bind_SetZero},
	{"Set", &luna_wrapper_b2Vec2::_bind_Set},
	{"Length", &luna_wrapper_b2Vec2::_bind_Length},
	{"LengthSquared", &luna_wrapper_b2Vec2::_bind_LengthSquared},
	{"Normalize", &luna_wrapper_b2Vec2::_bind_Normalize},
	{"IsValid", &luna_wrapper_b2Vec2::_bind_IsValid},
	{"Skew", &luna_wrapper_b2Vec2::_bind_Skew},
	{"getX", &luna_wrapper_b2Vec2::_bind_getX},
	{"getY", &luna_wrapper_b2Vec2::_bind_getY},
	{"setX", &luna_wrapper_b2Vec2::_bind_setX},
	{"setY", &luna_wrapper_b2Vec2::_bind_setY},
	{"__unm", &luna_wrapper_b2Vec2::_bind___unm},
	{"op_call", &luna_wrapper_b2Vec2::_bind_op_call},
	{"op_add", &luna_wrapper_b2Vec2::_bind_op_add},
	{"op_sub", &luna_wrapper_b2Vec2::_bind_op_sub},
	{"op_mult", &luna_wrapper_b2Vec2::_bind_op_mult},
	{"dynCast", &luna_wrapper_b2Vec2::_bind_dynCast},
	{"__eq", &luna_wrapper_b2Vec2::_bind___eq},
	{"fromVoid", &luna_wrapper_b2Vec2::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2Vec2::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2Vec2 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2Vec2 >::enumValues[] = {
	{0,0}
};



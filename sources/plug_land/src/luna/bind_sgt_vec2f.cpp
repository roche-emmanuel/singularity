#include <plug_common.h>

class luna_wrapper_sgt_vec2f {
public:
	typedef Luna< sgt::vec2f > luna_t;

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

		sgt::vec2f* self= (sgt::vec2f*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::vec2f >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76239271) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< sgt::vec2f >::check(L,1));
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

		sgt::vec2f* self=(Luna< sgt::vec2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::vec2f");
		
		return luna_dynamicCast(L,converters,"sgt::vec2f",name);
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

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76239271) ) return false;
		if( (!(Luna< sgt::vec2f >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_length(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_squaredLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_dot(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239271) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_normalize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_normalize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
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
	// (found 11 valid operators)
	inline static bool _lg_typecheck_op_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239271) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239271) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239271) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239271) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239271) ) return false;
		if( (!(Luna< sgt::vec2f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck___div_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239271) ) return false;
		if( (!(Luna< sgt::vec2f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___div_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck___unm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239271) ) return false;
		return true;
	}


	// Constructor binds:
	// sgt::vec2f::vec2f()
	static sgt::vec2f* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2f::vec2f() function, expected prototype:\nsgt::vec2f::vec2f()\nClass arguments details:\n");
		}


		return new sgt::vec2f();
	}

	// sgt::vec2f::vec2f(float xi, float yi)
	static sgt::vec2f* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2f::vec2f(float xi, float yi) function, expected prototype:\nsgt::vec2f::vec2f(float xi, float yi)\nClass arguments details:\n");
		}

		float xi=(float)lua_tonumber(L,1);
		float yi=(float)lua_tonumber(L,2);

		return new sgt::vec2f(xi, yi);
	}

	// sgt::vec2f::vec2f(const sgt::vec2f & v)
	static sgt::vec2f* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2f::vec2f(const sgt::vec2f & v) function, expected prototype:\nsgt::vec2f::vec2f(const sgt::vec2f & v)\nClass arguments details:\narg 1 ID = 76239271\n");
		}

		const sgt::vec2f* v_ptr=(Luna< sgt::vec2f >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec2f::vec2f function");
		}
		const sgt::vec2f & v=*v_ptr;

		return new sgt::vec2f(v);
	}

	// Overload binder for sgt::vec2f::vec2f
	static sgt::vec2f* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function vec2f, cannot match any of the overloads for function vec2f:\n  vec2f()\n  vec2f(float, float)\n  vec2f(const sgt::vec2f &)\n");
		return NULL;
	}


	// Function binds:
	// float sgt::vec2f::length() const
	static int _bind_length(lua_State *L) {
		if (!_lg_typecheck_length(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float sgt::vec2f::length() const function, expected prototype:\nfloat sgt::vec2f::length() const\nClass arguments details:\n");
		}


		sgt::vec2f* self=(Luna< sgt::vec2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float sgt::vec2f::length() const. Got : '%s'",typeid(Luna< sgt::vec2f >::check(L,1)).name());
		}
		float lret = self->length();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float sgt::vec2f::squaredLength() const
	static int _bind_squaredLength(lua_State *L) {
		if (!_lg_typecheck_squaredLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float sgt::vec2f::squaredLength() const function, expected prototype:\nfloat sgt::vec2f::squaredLength() const\nClass arguments details:\n");
		}


		sgt::vec2f* self=(Luna< sgt::vec2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float sgt::vec2f::squaredLength() const. Got : '%s'",typeid(Luna< sgt::vec2f >::check(L,1)).name());
		}
		float lret = self->squaredLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float sgt::vec2f::dot(const sgt::vec2f & v) const
	static int _bind_dot(lua_State *L) {
		if (!_lg_typecheck_dot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float sgt::vec2f::dot(const sgt::vec2f & v) const function, expected prototype:\nfloat sgt::vec2f::dot(const sgt::vec2f & v) const\nClass arguments details:\narg 1 ID = 76239271\n");
		}

		const sgt::vec2f* v_ptr=(Luna< sgt::vec2f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec2f::dot function");
		}
		const sgt::vec2f & v=*v_ptr;

		sgt::vec2f* self=(Luna< sgt::vec2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float sgt::vec2f::dot(const sgt::vec2f &) const. Got : '%s'",typeid(Luna< sgt::vec2f >::check(L,1)).name());
		}
		float lret = self->dot(v);
		lua_pushnumber(L,lret);

		return 1;
	}

	// sgt::vec2f sgt::vec2f::normalize() const
	static int _bind_normalize_overload_1(lua_State *L) {
		if (!_lg_typecheck_normalize_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2f sgt::vec2f::normalize() const function, expected prototype:\nsgt::vec2f sgt::vec2f::normalize() const\nClass arguments details:\n");
		}


		sgt::vec2f* self=(Luna< sgt::vec2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2f sgt::vec2f::normalize() const. Got : '%s'",typeid(Luna< sgt::vec2f >::check(L,1)).name());
		}
		sgt::vec2f stack_lret = self->normalize();
		sgt::vec2f* lret = new sgt::vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2f >::push(L,lret,true);

		return 1;
	}

	// sgt::vec2f sgt::vec2f::normalize(float l) const
	static int _bind_normalize_overload_2(lua_State *L) {
		if (!_lg_typecheck_normalize_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2f sgt::vec2f::normalize(float l) const function, expected prototype:\nsgt::vec2f sgt::vec2f::normalize(float l) const\nClass arguments details:\n");
		}

		float l=(float)lua_tonumber(L,2);

		sgt::vec2f* self=(Luna< sgt::vec2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2f sgt::vec2f::normalize(float) const. Got : '%s'",typeid(Luna< sgt::vec2f >::check(L,1)).name());
		}
		sgt::vec2f stack_lret = self->normalize(l);
		sgt::vec2f* lret = new sgt::vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2f >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::vec2f::normalize
	static int _bind_normalize(lua_State *L) {
		if (_lg_typecheck_normalize_overload_1(L)) return _bind_normalize_overload_1(L);
		if (_lg_typecheck_normalize_overload_2(L)) return _bind_normalize_overload_2(L);

		luaL_error(L, "error in function normalize, cannot match any of the overloads for function normalize:\n  normalize()\n  normalize(float)\n");
		return 0;
	}

	// float sgt::vec2f::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float sgt::vec2f::x() function, expected prototype:\nfloat sgt::vec2f::x()\nClass arguments details:\n");
		}


		sgt::vec2f* self=(Luna< sgt::vec2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float sgt::vec2f::x(). Got : '%s'",typeid(Luna< sgt::vec2f >::check(L,1)).name());
		}
		float lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float sgt::vec2f::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float sgt::vec2f::y() function, expected prototype:\nfloat sgt::vec2f::y()\nClass arguments details:\n");
		}


		sgt::vec2f* self=(Luna< sgt::vec2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float sgt::vec2f::y(). Got : '%s'",typeid(Luna< sgt::vec2f >::check(L,1)).name());
		}
		float lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::vec2f::x(float value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::vec2f::x(float value) function, expected prototype:\nvoid sgt::vec2f::x(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		sgt::vec2f* self=(Luna< sgt::vec2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::vec2f::x(float). Got : '%s'",typeid(Luna< sgt::vec2f >::check(L,1)).name());
		}
		self->x = value;

		return 0;
	}

	// void sgt::vec2f::y(float value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::vec2f::y(float value) function, expected prototype:\nvoid sgt::vec2f::y(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		sgt::vec2f* self=(Luna< sgt::vec2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::vec2f::y(float). Got : '%s'",typeid(Luna< sgt::vec2f >::check(L,1)).name());
		}
		self->y = value;

		return 0;
	}


	// Operator binds:
	// float & sgt::vec2f::operator[](const int i)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float & sgt::vec2f::operator[](const int i) function, expected prototype:\nfloat & sgt::vec2f::operator[](const int i)\nClass arguments details:\n");
		}

		const int i=(const int)lua_tointeger(L,2);

		sgt::vec2f* self=(Luna< sgt::vec2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float & sgt::vec2f::operator[](const int). Got : '%s'",typeid(Luna< sgt::vec2f >::check(L,1)).name());
		}
		float & lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool sgt::vec2f::operator==(const sgt::vec2f & v) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::vec2f::operator==(const sgt::vec2f & v) const function, expected prototype:\nbool sgt::vec2f::operator==(const sgt::vec2f & v) const\nClass arguments details:\narg 1 ID = 76239271\n");
		}

		const sgt::vec2f* v_ptr=(Luna< sgt::vec2f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec2f::operator== function");
		}
		const sgt::vec2f & v=*v_ptr;

		sgt::vec2f* self=(Luna< sgt::vec2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::vec2f::operator==(const sgt::vec2f &) const. Got : '%s'",typeid(Luna< sgt::vec2f >::check(L,1)).name());
		}
		bool lret = self->operator==(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool sgt::vec2f::operator!=(const sgt::vec2f & v) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::vec2f::operator!=(const sgt::vec2f & v) const function, expected prototype:\nbool sgt::vec2f::operator!=(const sgt::vec2f & v) const\nClass arguments details:\narg 1 ID = 76239271\n");
		}

		const sgt::vec2f* v_ptr=(Luna< sgt::vec2f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec2f::operator!= function");
		}
		const sgt::vec2f & v=*v_ptr;

		sgt::vec2f* self=(Luna< sgt::vec2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::vec2f::operator!=(const sgt::vec2f &) const. Got : '%s'",typeid(Luna< sgt::vec2f >::check(L,1)).name());
		}
		bool lret = self->operator!=(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// sgt::vec2f sgt::vec2f::operator+(const sgt::vec2f & v) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2f sgt::vec2f::operator+(const sgt::vec2f & v) const function, expected prototype:\nsgt::vec2f sgt::vec2f::operator+(const sgt::vec2f & v) const\nClass arguments details:\narg 1 ID = 76239271\n");
		}

		const sgt::vec2f* v_ptr=(Luna< sgt::vec2f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec2f::operator+ function");
		}
		const sgt::vec2f & v=*v_ptr;

		sgt::vec2f* self=(Luna< sgt::vec2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2f sgt::vec2f::operator+(const sgt::vec2f &) const. Got : '%s'",typeid(Luna< sgt::vec2f >::check(L,1)).name());
		}
		sgt::vec2f stack_lret = self->operator+(v);
		sgt::vec2f* lret = new sgt::vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2f >::push(L,lret,true);

		return 1;
	}

	// sgt::vec2f sgt::vec2f::operator-(const sgt::vec2f & v) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2f sgt::vec2f::operator-(const sgt::vec2f & v) const function, expected prototype:\nsgt::vec2f sgt::vec2f::operator-(const sgt::vec2f & v) const\nClass arguments details:\narg 1 ID = 76239271\n");
		}

		const sgt::vec2f* v_ptr=(Luna< sgt::vec2f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec2f::operator- function");
		}
		const sgt::vec2f & v=*v_ptr;

		sgt::vec2f* self=(Luna< sgt::vec2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2f sgt::vec2f::operator-(const sgt::vec2f &) const. Got : '%s'",typeid(Luna< sgt::vec2f >::check(L,1)).name());
		}
		sgt::vec2f stack_lret = self->operator-(v);
		sgt::vec2f* lret = new sgt::vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2f >::push(L,lret,true);

		return 1;
	}

	// sgt::vec2f sgt::vec2f::operator*(const sgt::vec2f & v) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2f sgt::vec2f::operator*(const sgt::vec2f & v) const function, expected prototype:\nsgt::vec2f sgt::vec2f::operator*(const sgt::vec2f & v) const\nClass arguments details:\narg 1 ID = 76239271\n");
		}

		const sgt::vec2f* v_ptr=(Luna< sgt::vec2f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec2f::operator* function");
		}
		const sgt::vec2f & v=*v_ptr;

		sgt::vec2f* self=(Luna< sgt::vec2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2f sgt::vec2f::operator*(const sgt::vec2f &) const. Got : '%s'",typeid(Luna< sgt::vec2f >::check(L,1)).name());
		}
		sgt::vec2f stack_lret = self->operator*(v);
		sgt::vec2f* lret = new sgt::vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2f >::push(L,lret,true);

		return 1;
	}

	// sgt::vec2f sgt::vec2f::operator*(const float scalar) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2f sgt::vec2f::operator*(const float scalar) const function, expected prototype:\nsgt::vec2f sgt::vec2f::operator*(const float scalar) const\nClass arguments details:\n");
		}

		const float scalar=(const float)lua_tonumber(L,2);

		sgt::vec2f* self=(Luna< sgt::vec2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2f sgt::vec2f::operator*(const float) const. Got : '%s'",typeid(Luna< sgt::vec2f >::check(L,1)).name());
		}
		sgt::vec2f stack_lret = self->operator*(scalar);
		sgt::vec2f* lret = new sgt::vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2f >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::vec2f::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const sgt::vec2f &)\n  operator*(const float)\n");
		return 0;
	}

	// sgt::vec2f sgt::vec2f::operator/(const sgt::vec2f & v) const
	static int _bind___div_overload_1(lua_State *L) {
		if (!_lg_typecheck___div_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2f sgt::vec2f::operator/(const sgt::vec2f & v) const function, expected prototype:\nsgt::vec2f sgt::vec2f::operator/(const sgt::vec2f & v) const\nClass arguments details:\narg 1 ID = 76239271\n");
		}

		const sgt::vec2f* v_ptr=(Luna< sgt::vec2f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec2f::operator/ function");
		}
		const sgt::vec2f & v=*v_ptr;

		sgt::vec2f* self=(Luna< sgt::vec2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2f sgt::vec2f::operator/(const sgt::vec2f &) const. Got : '%s'",typeid(Luna< sgt::vec2f >::check(L,1)).name());
		}
		sgt::vec2f stack_lret = self->operator/(v);
		sgt::vec2f* lret = new sgt::vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2f >::push(L,lret,true);

		return 1;
	}

	// sgt::vec2f sgt::vec2f::operator/(const float scalar) const
	static int _bind___div_overload_2(lua_State *L) {
		if (!_lg_typecheck___div_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2f sgt::vec2f::operator/(const float scalar) const function, expected prototype:\nsgt::vec2f sgt::vec2f::operator/(const float scalar) const\nClass arguments details:\n");
		}

		const float scalar=(const float)lua_tonumber(L,2);

		sgt::vec2f* self=(Luna< sgt::vec2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2f sgt::vec2f::operator/(const float) const. Got : '%s'",typeid(Luna< sgt::vec2f >::check(L,1)).name());
		}
		sgt::vec2f stack_lret = self->operator/(scalar);
		sgt::vec2f* lret = new sgt::vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2f >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::vec2f::operator/
	static int _bind___div(lua_State *L) {
		if (_lg_typecheck___div_overload_1(L)) return _bind___div_overload_1(L);
		if (_lg_typecheck___div_overload_2(L)) return _bind___div_overload_2(L);

		luaL_error(L, "error in function operator/, cannot match any of the overloads for function operator/:\n  operator/(const sgt::vec2f &)\n  operator/(const float)\n");
		return 0;
	}

	// sgt::vec2f sgt::vec2f::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2f sgt::vec2f::operator-() const function, expected prototype:\nsgt::vec2f sgt::vec2f::operator-() const\nClass arguments details:\n");
		}


		sgt::vec2f* self=(Luna< sgt::vec2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2f sgt::vec2f::operator-() const. Got : '%s'",typeid(Luna< sgt::vec2f >::check(L,1)).name());
		}
		sgt::vec2f stack_lret = self->operator-();
		sgt::vec2f* lret = new sgt::vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2f >::push(L,lret,true);

		return 1;
	}

	// bool sgt::vec2f::operator<(const sgt::vec2f & v) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::vec2f::operator<(const sgt::vec2f & v) const function, expected prototype:\nbool sgt::vec2f::operator<(const sgt::vec2f & v) const\nClass arguments details:\narg 1 ID = 76239271\n");
		}

		const sgt::vec2f* v_ptr=(Luna< sgt::vec2f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec2f::operator< function");
		}
		const sgt::vec2f & v=*v_ptr;

		sgt::vec2f* self=(Luna< sgt::vec2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::vec2f::operator<(const sgt::vec2f &) const. Got : '%s'",typeid(Luna< sgt::vec2f >::check(L,1)).name());
		}
		bool lret = self->operator<(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

sgt::vec2f* LunaTraits< sgt::vec2f >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_vec2f::_bind_ctor(L);
}

void LunaTraits< sgt::vec2f >::_bind_dtor(sgt::vec2f* obj) {
	delete obj;
}

const char LunaTraits< sgt::vec2f >::className[] = "vec2f";
const char LunaTraits< sgt::vec2f >::fullName[] = "sgt::vec2f";
const char LunaTraits< sgt::vec2f >::moduleName[] = "sgt";
const char* LunaTraits< sgt::vec2f >::parents[] = {0};
const int LunaTraits< sgt::vec2f >::hash = 76239271;
const int LunaTraits< sgt::vec2f >::uniqueIDs[] = {76239271,0};

luna_RegType LunaTraits< sgt::vec2f >::methods[] = {
	{"length", &luna_wrapper_sgt_vec2f::_bind_length},
	{"squaredLength", &luna_wrapper_sgt_vec2f::_bind_squaredLength},
	{"dot", &luna_wrapper_sgt_vec2f::_bind_dot},
	{"normalize", &luna_wrapper_sgt_vec2f::_bind_normalize},
	{"getX", &luna_wrapper_sgt_vec2f::_bind_getX},
	{"getY", &luna_wrapper_sgt_vec2f::_bind_getY},
	{"setX", &luna_wrapper_sgt_vec2f::_bind_setX},
	{"setY", &luna_wrapper_sgt_vec2f::_bind_setY},
	{"op_index", &luna_wrapper_sgt_vec2f::_bind_op_index},
	{"__eq", &luna_wrapper_sgt_vec2f::_bind___eq},
	{"op_neq", &luna_wrapper_sgt_vec2f::_bind_op_neq},
	{"__add", &luna_wrapper_sgt_vec2f::_bind___add},
	{"__sub", &luna_wrapper_sgt_vec2f::_bind___sub},
	{"__mul", &luna_wrapper_sgt_vec2f::_bind___mul},
	{"__div", &luna_wrapper_sgt_vec2f::_bind___div},
	{"__unm", &luna_wrapper_sgt_vec2f::_bind___unm},
	{"__lt", &luna_wrapper_sgt_vec2f::_bind___lt},
	{"dynCast", &luna_wrapper_sgt_vec2f::_bind_dynCast},
	{"fromVoid", &luna_wrapper_sgt_vec2f::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_vec2f::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::vec2f >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::vec2f >::enumValues[] = {
	{0,0}
};



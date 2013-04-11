#include <plug_common.h>

class luna_wrapper_sgt_vec2i {
public:
	typedef Luna< sgt::vec2i > luna_t;

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

		sgt::vec2i* self= (sgt::vec2i*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::vec2i >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76239274) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< sgt::vec2i >::check(L,1));
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

		sgt::vec2i* self=(Luna< sgt::vec2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::vec2i");
		
		return luna_dynamicCast(L,converters,"sgt::vec2i",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76239274) ) return false;
		if( (!(Luna< sgt::vec2i >::check(L,1))) ) return false;
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

	inline static bool _lg_typecheck_dotproduct(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239274) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_dot(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239274) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_normalize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_normalize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,76239274) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239274) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239274) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239274) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239274) ) return false;
		if( (!(Luna< sgt::vec2i >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___div_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239274) ) return false;
		if( (!(Luna< sgt::vec2i >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___div_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___unm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239274) ) return false;
		return true;
	}


	// Constructor binds:
	// sgt::vec2i::vec2i()
	static sgt::vec2i* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2i::vec2i() function, expected prototype:\nsgt::vec2i::vec2i()\nClass arguments details:\n");
		}


		return new sgt::vec2i();
	}

	// sgt::vec2i::vec2i(int xi, int yi)
	static sgt::vec2i* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2i::vec2i(int xi, int yi) function, expected prototype:\nsgt::vec2i::vec2i(int xi, int yi)\nClass arguments details:\n");
		}

		int xi=(int)lua_tointeger(L,1);
		int yi=(int)lua_tointeger(L,2);

		return new sgt::vec2i(xi, yi);
	}

	// sgt::vec2i::vec2i(const sgt::vec2i & v)
	static sgt::vec2i* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2i::vec2i(const sgt::vec2i & v) function, expected prototype:\nsgt::vec2i::vec2i(const sgt::vec2i & v)\nClass arguments details:\narg 1 ID = 76239274\n");
		}

		const sgt::vec2i* v_ptr=(Luna< sgt::vec2i >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec2i::vec2i function");
		}
		const sgt::vec2i & v=*v_ptr;

		return new sgt::vec2i(v);
	}

	// Overload binder for sgt::vec2i::vec2i
	static sgt::vec2i* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function vec2i, cannot match any of the overloads for function vec2i:\n  vec2i()\n  vec2i(int, int)\n  vec2i(const sgt::vec2i &)\n");
		return NULL;
	}


	// Function binds:
	// int sgt::vec2i::length() const
	static int _bind_length(lua_State *L) {
		if (!_lg_typecheck_length(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::vec2i::length() const function, expected prototype:\nint sgt::vec2i::length() const\nClass arguments details:\n");
		}


		sgt::vec2i* self=(Luna< sgt::vec2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::vec2i::length() const. Got : '%s'",typeid(Luna< sgt::vec2i >::check(L,1)).name());
		}
		int lret = self->length();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int sgt::vec2i::squaredLength() const
	static int _bind_squaredLength(lua_State *L) {
		if (!_lg_typecheck_squaredLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::vec2i::squaredLength() const function, expected prototype:\nint sgt::vec2i::squaredLength() const\nClass arguments details:\n");
		}


		sgt::vec2i* self=(Luna< sgt::vec2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::vec2i::squaredLength() const. Got : '%s'",typeid(Luna< sgt::vec2i >::check(L,1)).name());
		}
		int lret = self->squaredLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int sgt::vec2i::dotproduct(const sgt::vec2i & v) const
	static int _bind_dotproduct(lua_State *L) {
		if (!_lg_typecheck_dotproduct(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::vec2i::dotproduct(const sgt::vec2i & v) const function, expected prototype:\nint sgt::vec2i::dotproduct(const sgt::vec2i & v) const\nClass arguments details:\narg 1 ID = 76239274\n");
		}

		const sgt::vec2i* v_ptr=(Luna< sgt::vec2i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec2i::dotproduct function");
		}
		const sgt::vec2i & v=*v_ptr;

		sgt::vec2i* self=(Luna< sgt::vec2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::vec2i::dotproduct(const sgt::vec2i &) const. Got : '%s'",typeid(Luna< sgt::vec2i >::check(L,1)).name());
		}
		int lret = self->dotproduct(v);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int sgt::vec2i::dot(const sgt::vec2i & v) const
	static int _bind_dot(lua_State *L) {
		if (!_lg_typecheck_dot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::vec2i::dot(const sgt::vec2i & v) const function, expected prototype:\nint sgt::vec2i::dot(const sgt::vec2i & v) const\nClass arguments details:\narg 1 ID = 76239274\n");
		}

		const sgt::vec2i* v_ptr=(Luna< sgt::vec2i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec2i::dot function");
		}
		const sgt::vec2i & v=*v_ptr;

		sgt::vec2i* self=(Luna< sgt::vec2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::vec2i::dot(const sgt::vec2i &) const. Got : '%s'",typeid(Luna< sgt::vec2i >::check(L,1)).name());
		}
		int lret = self->dot(v);
		lua_pushnumber(L,lret);

		return 1;
	}

	// sgt::vec2i sgt::vec2i::normalize() const
	static int _bind_normalize_overload_1(lua_State *L) {
		if (!_lg_typecheck_normalize_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2i sgt::vec2i::normalize() const function, expected prototype:\nsgt::vec2i sgt::vec2i::normalize() const\nClass arguments details:\n");
		}


		sgt::vec2i* self=(Luna< sgt::vec2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2i sgt::vec2i::normalize() const. Got : '%s'",typeid(Luna< sgt::vec2i >::check(L,1)).name());
		}
		sgt::vec2i stack_lret = self->normalize();
		sgt::vec2i* lret = new sgt::vec2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2i >::push(L,lret,true);

		return 1;
	}

	// sgt::vec2i sgt::vec2i::normalize(int l) const
	static int _bind_normalize_overload_2(lua_State *L) {
		if (!_lg_typecheck_normalize_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2i sgt::vec2i::normalize(int l) const function, expected prototype:\nsgt::vec2i sgt::vec2i::normalize(int l) const\nClass arguments details:\n");
		}

		int l=(int)lua_tointeger(L,2);

		sgt::vec2i* self=(Luna< sgt::vec2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2i sgt::vec2i::normalize(int) const. Got : '%s'",typeid(Luna< sgt::vec2i >::check(L,1)).name());
		}
		sgt::vec2i stack_lret = self->normalize(l);
		sgt::vec2i* lret = new sgt::vec2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2i >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::vec2i::normalize
	static int _bind_normalize(lua_State *L) {
		if (_lg_typecheck_normalize_overload_1(L)) return _bind_normalize_overload_1(L);
		if (_lg_typecheck_normalize_overload_2(L)) return _bind_normalize_overload_2(L);

		luaL_error(L, "error in function normalize, cannot match any of the overloads for function normalize:\n  normalize()\n  normalize(int)\n");
		return 0;
	}

	// int sgt::vec2i::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::vec2i::x() function, expected prototype:\nint sgt::vec2i::x()\nClass arguments details:\n");
		}


		sgt::vec2i* self=(Luna< sgt::vec2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::vec2i::x(). Got : '%s'",typeid(Luna< sgt::vec2i >::check(L,1)).name());
		}
		int lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int sgt::vec2i::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::vec2i::y() function, expected prototype:\nint sgt::vec2i::y()\nClass arguments details:\n");
		}


		sgt::vec2i* self=(Luna< sgt::vec2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::vec2i::y(). Got : '%s'",typeid(Luna< sgt::vec2i >::check(L,1)).name());
		}
		int lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::vec2i::x(int value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::vec2i::x(int value) function, expected prototype:\nvoid sgt::vec2i::x(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		sgt::vec2i* self=(Luna< sgt::vec2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::vec2i::x(int). Got : '%s'",typeid(Luna< sgt::vec2i >::check(L,1)).name());
		}
		self->x = value;

		return 0;
	}

	// void sgt::vec2i::y(int value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::vec2i::y(int value) function, expected prototype:\nvoid sgt::vec2i::y(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		sgt::vec2i* self=(Luna< sgt::vec2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::vec2i::y(int). Got : '%s'",typeid(Luna< sgt::vec2i >::check(L,1)).name());
		}
		self->y = value;

		return 0;
	}


	// Operator binds:
	// int & sgt::vec2i::operator[](const int i)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int & sgt::vec2i::operator[](const int i) function, expected prototype:\nint & sgt::vec2i::operator[](const int i)\nClass arguments details:\n");
		}

		const int i=(const int)lua_tointeger(L,2);

		sgt::vec2i* self=(Luna< sgt::vec2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int & sgt::vec2i::operator[](const int). Got : '%s'",typeid(Luna< sgt::vec2i >::check(L,1)).name());
		}
		int & lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool sgt::vec2i::operator==(const sgt::vec2i & v) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::vec2i::operator==(const sgt::vec2i & v) const function, expected prototype:\nbool sgt::vec2i::operator==(const sgt::vec2i & v) const\nClass arguments details:\narg 1 ID = 76239274\n");
		}

		const sgt::vec2i* v_ptr=(Luna< sgt::vec2i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec2i::operator== function");
		}
		const sgt::vec2i & v=*v_ptr;

		sgt::vec2i* self=(Luna< sgt::vec2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::vec2i::operator==(const sgt::vec2i &) const. Got : '%s'",typeid(Luna< sgt::vec2i >::check(L,1)).name());
		}
		bool lret = self->operator==(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool sgt::vec2i::operator!=(const sgt::vec2i & v) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::vec2i::operator!=(const sgt::vec2i & v) const function, expected prototype:\nbool sgt::vec2i::operator!=(const sgt::vec2i & v) const\nClass arguments details:\narg 1 ID = 76239274\n");
		}

		const sgt::vec2i* v_ptr=(Luna< sgt::vec2i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec2i::operator!= function");
		}
		const sgt::vec2i & v=*v_ptr;

		sgt::vec2i* self=(Luna< sgt::vec2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::vec2i::operator!=(const sgt::vec2i &) const. Got : '%s'",typeid(Luna< sgt::vec2i >::check(L,1)).name());
		}
		bool lret = self->operator!=(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// sgt::vec2i sgt::vec2i::operator+(const sgt::vec2i & v) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2i sgt::vec2i::operator+(const sgt::vec2i & v) const function, expected prototype:\nsgt::vec2i sgt::vec2i::operator+(const sgt::vec2i & v) const\nClass arguments details:\narg 1 ID = 76239274\n");
		}

		const sgt::vec2i* v_ptr=(Luna< sgt::vec2i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec2i::operator+ function");
		}
		const sgt::vec2i & v=*v_ptr;

		sgt::vec2i* self=(Luna< sgt::vec2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2i sgt::vec2i::operator+(const sgt::vec2i &) const. Got : '%s'",typeid(Luna< sgt::vec2i >::check(L,1)).name());
		}
		sgt::vec2i stack_lret = self->operator+(v);
		sgt::vec2i* lret = new sgt::vec2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2i >::push(L,lret,true);

		return 1;
	}

	// sgt::vec2i sgt::vec2i::operator-(const sgt::vec2i & v) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2i sgt::vec2i::operator-(const sgt::vec2i & v) const function, expected prototype:\nsgt::vec2i sgt::vec2i::operator-(const sgt::vec2i & v) const\nClass arguments details:\narg 1 ID = 76239274\n");
		}

		const sgt::vec2i* v_ptr=(Luna< sgt::vec2i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec2i::operator- function");
		}
		const sgt::vec2i & v=*v_ptr;

		sgt::vec2i* self=(Luna< sgt::vec2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2i sgt::vec2i::operator-(const sgt::vec2i &) const. Got : '%s'",typeid(Luna< sgt::vec2i >::check(L,1)).name());
		}
		sgt::vec2i stack_lret = self->operator-(v);
		sgt::vec2i* lret = new sgt::vec2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2i >::push(L,lret,true);

		return 1;
	}

	// sgt::vec2i sgt::vec2i::operator*(const sgt::vec2i & v) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2i sgt::vec2i::operator*(const sgt::vec2i & v) const function, expected prototype:\nsgt::vec2i sgt::vec2i::operator*(const sgt::vec2i & v) const\nClass arguments details:\narg 1 ID = 76239274\n");
		}

		const sgt::vec2i* v_ptr=(Luna< sgt::vec2i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec2i::operator* function");
		}
		const sgt::vec2i & v=*v_ptr;

		sgt::vec2i* self=(Luna< sgt::vec2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2i sgt::vec2i::operator*(const sgt::vec2i &) const. Got : '%s'",typeid(Luna< sgt::vec2i >::check(L,1)).name());
		}
		sgt::vec2i stack_lret = self->operator*(v);
		sgt::vec2i* lret = new sgt::vec2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2i >::push(L,lret,true);

		return 1;
	}

	// sgt::vec2i sgt::vec2i::operator*(const int scalar) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2i sgt::vec2i::operator*(const int scalar) const function, expected prototype:\nsgt::vec2i sgt::vec2i::operator*(const int scalar) const\nClass arguments details:\n");
		}

		const int scalar=(const int)lua_tointeger(L,2);

		sgt::vec2i* self=(Luna< sgt::vec2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2i sgt::vec2i::operator*(const int) const. Got : '%s'",typeid(Luna< sgt::vec2i >::check(L,1)).name());
		}
		sgt::vec2i stack_lret = self->operator*(scalar);
		sgt::vec2i* lret = new sgt::vec2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2i >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::vec2i::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const sgt::vec2i &)\n  operator*(const int)\n");
		return 0;
	}

	// sgt::vec2i sgt::vec2i::operator/(const sgt::vec2i & v) const
	static int _bind___div_overload_1(lua_State *L) {
		if (!_lg_typecheck___div_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2i sgt::vec2i::operator/(const sgt::vec2i & v) const function, expected prototype:\nsgt::vec2i sgt::vec2i::operator/(const sgt::vec2i & v) const\nClass arguments details:\narg 1 ID = 76239274\n");
		}

		const sgt::vec2i* v_ptr=(Luna< sgt::vec2i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec2i::operator/ function");
		}
		const sgt::vec2i & v=*v_ptr;

		sgt::vec2i* self=(Luna< sgt::vec2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2i sgt::vec2i::operator/(const sgt::vec2i &) const. Got : '%s'",typeid(Luna< sgt::vec2i >::check(L,1)).name());
		}
		sgt::vec2i stack_lret = self->operator/(v);
		sgt::vec2i* lret = new sgt::vec2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2i >::push(L,lret,true);

		return 1;
	}

	// sgt::vec2i sgt::vec2i::operator/(const int scalar) const
	static int _bind___div_overload_2(lua_State *L) {
		if (!_lg_typecheck___div_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2i sgt::vec2i::operator/(const int scalar) const function, expected prototype:\nsgt::vec2i sgt::vec2i::operator/(const int scalar) const\nClass arguments details:\n");
		}

		const int scalar=(const int)lua_tointeger(L,2);

		sgt::vec2i* self=(Luna< sgt::vec2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2i sgt::vec2i::operator/(const int) const. Got : '%s'",typeid(Luna< sgt::vec2i >::check(L,1)).name());
		}
		sgt::vec2i stack_lret = self->operator/(scalar);
		sgt::vec2i* lret = new sgt::vec2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2i >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::vec2i::operator/
	static int _bind___div(lua_State *L) {
		if (_lg_typecheck___div_overload_1(L)) return _bind___div_overload_1(L);
		if (_lg_typecheck___div_overload_2(L)) return _bind___div_overload_2(L);

		luaL_error(L, "error in function operator/, cannot match any of the overloads for function operator/:\n  operator/(const sgt::vec2i &)\n  operator/(const int)\n");
		return 0;
	}

	// sgt::vec2i sgt::vec2i::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2i sgt::vec2i::operator-() const function, expected prototype:\nsgt::vec2i sgt::vec2i::operator-() const\nClass arguments details:\n");
		}


		sgt::vec2i* self=(Luna< sgt::vec2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2i sgt::vec2i::operator-() const. Got : '%s'",typeid(Luna< sgt::vec2i >::check(L,1)).name());
		}
		sgt::vec2i stack_lret = self->operator-();
		sgt::vec2i* lret = new sgt::vec2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2i >::push(L,lret,true);

		return 1;
	}

	// bool sgt::vec2i::operator<(const sgt::vec2i & v) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::vec2i::operator<(const sgt::vec2i & v) const function, expected prototype:\nbool sgt::vec2i::operator<(const sgt::vec2i & v) const\nClass arguments details:\narg 1 ID = 76239274\n");
		}

		const sgt::vec2i* v_ptr=(Luna< sgt::vec2i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec2i::operator< function");
		}
		const sgt::vec2i & v=*v_ptr;

		sgt::vec2i* self=(Luna< sgt::vec2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::vec2i::operator<(const sgt::vec2i &) const. Got : '%s'",typeid(Luna< sgt::vec2i >::check(L,1)).name());
		}
		bool lret = self->operator<(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

sgt::vec2i* LunaTraits< sgt::vec2i >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_vec2i::_bind_ctor(L);
}

void LunaTraits< sgt::vec2i >::_bind_dtor(sgt::vec2i* obj) {
	delete obj;
}

const char LunaTraits< sgt::vec2i >::className[] = "vec2i";
const char LunaTraits< sgt::vec2i >::fullName[] = "sgt::vec2i";
const char LunaTraits< sgt::vec2i >::moduleName[] = "sgt";
const char* LunaTraits< sgt::vec2i >::parents[] = {0};
const int LunaTraits< sgt::vec2i >::hash = 76239274;
const int LunaTraits< sgt::vec2i >::uniqueIDs[] = {76239274,0};

luna_RegType LunaTraits< sgt::vec2i >::methods[] = {
	{"length", &luna_wrapper_sgt_vec2i::_bind_length},
	{"squaredLength", &luna_wrapper_sgt_vec2i::_bind_squaredLength},
	{"dotproduct", &luna_wrapper_sgt_vec2i::_bind_dotproduct},
	{"dot", &luna_wrapper_sgt_vec2i::_bind_dot},
	{"normalize", &luna_wrapper_sgt_vec2i::_bind_normalize},
	{"getX", &luna_wrapper_sgt_vec2i::_bind_getX},
	{"getY", &luna_wrapper_sgt_vec2i::_bind_getY},
	{"setX", &luna_wrapper_sgt_vec2i::_bind_setX},
	{"setY", &luna_wrapper_sgt_vec2i::_bind_setY},
	{"op_index", &luna_wrapper_sgt_vec2i::_bind_op_index},
	{"__eq", &luna_wrapper_sgt_vec2i::_bind___eq},
	{"op_neq", &luna_wrapper_sgt_vec2i::_bind_op_neq},
	{"__add", &luna_wrapper_sgt_vec2i::_bind___add},
	{"__sub", &luna_wrapper_sgt_vec2i::_bind___sub},
	{"__mul", &luna_wrapper_sgt_vec2i::_bind___mul},
	{"__div", &luna_wrapper_sgt_vec2i::_bind___div},
	{"__unm", &luna_wrapper_sgt_vec2i::_bind___unm},
	{"__lt", &luna_wrapper_sgt_vec2i::_bind___lt},
	{"dynCast", &luna_wrapper_sgt_vec2i::_bind_dynCast},
	{"fromVoid", &luna_wrapper_sgt_vec2i::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_vec2i::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::vec2i >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::vec2i >::enumValues[] = {
	{0,0}
};



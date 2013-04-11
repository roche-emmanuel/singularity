#include <plug_common.h>

class luna_wrapper_sgt_vec2d {
public:
	typedef Luna< sgt::vec2d > luna_t;

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

		sgt::vec2d* self= (sgt::vec2d*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::vec2d >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76239269) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< sgt::vec2d >::check(L,1));
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

		sgt::vec2d* self=(Luna< sgt::vec2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::vec2d");
		
		return luna_dynamicCast(L,converters,"sgt::vec2d",name);
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

		if( !Luna<void>::has_uniqueid(L,1,76239269) ) return false;
		if( (!(Luna< sgt::vec2d >::check(L,1))) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,76239269) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_dot(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239269) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,76239269) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239269) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239269) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239269) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239269) ) return false;
		if( (!(Luna< sgt::vec2d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck___div_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239269) ) return false;
		if( (!(Luna< sgt::vec2d >::check(L,2))) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,76239269) ) return false;
		return true;
	}


	// Constructor binds:
	// sgt::vec2d::vec2d()
	static sgt::vec2d* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2d::vec2d() function, expected prototype:\nsgt::vec2d::vec2d()\nClass arguments details:\n");
		}


		return new sgt::vec2d();
	}

	// sgt::vec2d::vec2d(double xi, double yi)
	static sgt::vec2d* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2d::vec2d(double xi, double yi) function, expected prototype:\nsgt::vec2d::vec2d(double xi, double yi)\nClass arguments details:\n");
		}

		double xi=(double)lua_tonumber(L,1);
		double yi=(double)lua_tonumber(L,2);

		return new sgt::vec2d(xi, yi);
	}

	// sgt::vec2d::vec2d(const sgt::vec2d & v)
	static sgt::vec2d* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2d::vec2d(const sgt::vec2d & v) function, expected prototype:\nsgt::vec2d::vec2d(const sgt::vec2d & v)\nClass arguments details:\narg 1 ID = 76239269\n");
		}

		const sgt::vec2d* v_ptr=(Luna< sgt::vec2d >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec2d::vec2d function");
		}
		const sgt::vec2d & v=*v_ptr;

		return new sgt::vec2d(v);
	}

	// Overload binder for sgt::vec2d::vec2d
	static sgt::vec2d* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function vec2d, cannot match any of the overloads for function vec2d:\n  vec2d()\n  vec2d(double, double)\n  vec2d(const sgt::vec2d &)\n");
		return NULL;
	}


	// Function binds:
	// double sgt::vec2d::length() const
	static int _bind_length(lua_State *L) {
		if (!_lg_typecheck_length(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double sgt::vec2d::length() const function, expected prototype:\ndouble sgt::vec2d::length() const\nClass arguments details:\n");
		}


		sgt::vec2d* self=(Luna< sgt::vec2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double sgt::vec2d::length() const. Got : '%s'",typeid(Luna< sgt::vec2d >::check(L,1)).name());
		}
		double lret = self->length();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double sgt::vec2d::squaredLength() const
	static int _bind_squaredLength(lua_State *L) {
		if (!_lg_typecheck_squaredLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double sgt::vec2d::squaredLength() const function, expected prototype:\ndouble sgt::vec2d::squaredLength() const\nClass arguments details:\n");
		}


		sgt::vec2d* self=(Luna< sgt::vec2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double sgt::vec2d::squaredLength() const. Got : '%s'",typeid(Luna< sgt::vec2d >::check(L,1)).name());
		}
		double lret = self->squaredLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double sgt::vec2d::dotproduct(const sgt::vec2d & v) const
	static int _bind_dotproduct(lua_State *L) {
		if (!_lg_typecheck_dotproduct(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double sgt::vec2d::dotproduct(const sgt::vec2d & v) const function, expected prototype:\ndouble sgt::vec2d::dotproduct(const sgt::vec2d & v) const\nClass arguments details:\narg 1 ID = 76239269\n");
		}

		const sgt::vec2d* v_ptr=(Luna< sgt::vec2d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec2d::dotproduct function");
		}
		const sgt::vec2d & v=*v_ptr;

		sgt::vec2d* self=(Luna< sgt::vec2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double sgt::vec2d::dotproduct(const sgt::vec2d &) const. Got : '%s'",typeid(Luna< sgt::vec2d >::check(L,1)).name());
		}
		double lret = self->dotproduct(v);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double sgt::vec2d::dot(const sgt::vec2d & v) const
	static int _bind_dot(lua_State *L) {
		if (!_lg_typecheck_dot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double sgt::vec2d::dot(const sgt::vec2d & v) const function, expected prototype:\ndouble sgt::vec2d::dot(const sgt::vec2d & v) const\nClass arguments details:\narg 1 ID = 76239269\n");
		}

		const sgt::vec2d* v_ptr=(Luna< sgt::vec2d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec2d::dot function");
		}
		const sgt::vec2d & v=*v_ptr;

		sgt::vec2d* self=(Luna< sgt::vec2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double sgt::vec2d::dot(const sgt::vec2d &) const. Got : '%s'",typeid(Luna< sgt::vec2d >::check(L,1)).name());
		}
		double lret = self->dot(v);
		lua_pushnumber(L,lret);

		return 1;
	}

	// sgt::vec2d sgt::vec2d::normalize() const
	static int _bind_normalize_overload_1(lua_State *L) {
		if (!_lg_typecheck_normalize_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2d sgt::vec2d::normalize() const function, expected prototype:\nsgt::vec2d sgt::vec2d::normalize() const\nClass arguments details:\n");
		}


		sgt::vec2d* self=(Luna< sgt::vec2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2d sgt::vec2d::normalize() const. Got : '%s'",typeid(Luna< sgt::vec2d >::check(L,1)).name());
		}
		sgt::vec2d stack_lret = self->normalize();
		sgt::vec2d* lret = new sgt::vec2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2d >::push(L,lret,true);

		return 1;
	}

	// sgt::vec2d sgt::vec2d::normalize(double l) const
	static int _bind_normalize_overload_2(lua_State *L) {
		if (!_lg_typecheck_normalize_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2d sgt::vec2d::normalize(double l) const function, expected prototype:\nsgt::vec2d sgt::vec2d::normalize(double l) const\nClass arguments details:\n");
		}

		double l=(double)lua_tonumber(L,2);

		sgt::vec2d* self=(Luna< sgt::vec2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2d sgt::vec2d::normalize(double) const. Got : '%s'",typeid(Luna< sgt::vec2d >::check(L,1)).name());
		}
		sgt::vec2d stack_lret = self->normalize(l);
		sgt::vec2d* lret = new sgt::vec2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2d >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::vec2d::normalize
	static int _bind_normalize(lua_State *L) {
		if (_lg_typecheck_normalize_overload_1(L)) return _bind_normalize_overload_1(L);
		if (_lg_typecheck_normalize_overload_2(L)) return _bind_normalize_overload_2(L);

		luaL_error(L, "error in function normalize, cannot match any of the overloads for function normalize:\n  normalize()\n  normalize(double)\n");
		return 0;
	}

	// double sgt::vec2d::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double sgt::vec2d::x() function, expected prototype:\ndouble sgt::vec2d::x()\nClass arguments details:\n");
		}


		sgt::vec2d* self=(Luna< sgt::vec2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double sgt::vec2d::x(). Got : '%s'",typeid(Luna< sgt::vec2d >::check(L,1)).name());
		}
		double lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double sgt::vec2d::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double sgt::vec2d::y() function, expected prototype:\ndouble sgt::vec2d::y()\nClass arguments details:\n");
		}


		sgt::vec2d* self=(Luna< sgt::vec2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double sgt::vec2d::y(). Got : '%s'",typeid(Luna< sgt::vec2d >::check(L,1)).name());
		}
		double lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::vec2d::x(double value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::vec2d::x(double value) function, expected prototype:\nvoid sgt::vec2d::x(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		sgt::vec2d* self=(Luna< sgt::vec2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::vec2d::x(double). Got : '%s'",typeid(Luna< sgt::vec2d >::check(L,1)).name());
		}
		self->x = value;

		return 0;
	}

	// void sgt::vec2d::y(double value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::vec2d::y(double value) function, expected prototype:\nvoid sgt::vec2d::y(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		sgt::vec2d* self=(Luna< sgt::vec2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::vec2d::y(double). Got : '%s'",typeid(Luna< sgt::vec2d >::check(L,1)).name());
		}
		self->y = value;

		return 0;
	}


	// Operator binds:
	// double & sgt::vec2d::operator[](const int i)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double & sgt::vec2d::operator[](const int i) function, expected prototype:\ndouble & sgt::vec2d::operator[](const int i)\nClass arguments details:\n");
		}

		const int i=(const int)lua_tointeger(L,2);

		sgt::vec2d* self=(Luna< sgt::vec2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double & sgt::vec2d::operator[](const int). Got : '%s'",typeid(Luna< sgt::vec2d >::check(L,1)).name());
		}
		double & lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool sgt::vec2d::operator==(const sgt::vec2d & v) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::vec2d::operator==(const sgt::vec2d & v) const function, expected prototype:\nbool sgt::vec2d::operator==(const sgt::vec2d & v) const\nClass arguments details:\narg 1 ID = 76239269\n");
		}

		const sgt::vec2d* v_ptr=(Luna< sgt::vec2d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec2d::operator== function");
		}
		const sgt::vec2d & v=*v_ptr;

		sgt::vec2d* self=(Luna< sgt::vec2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::vec2d::operator==(const sgt::vec2d &) const. Got : '%s'",typeid(Luna< sgt::vec2d >::check(L,1)).name());
		}
		bool lret = self->operator==(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool sgt::vec2d::operator!=(const sgt::vec2d & v) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::vec2d::operator!=(const sgt::vec2d & v) const function, expected prototype:\nbool sgt::vec2d::operator!=(const sgt::vec2d & v) const\nClass arguments details:\narg 1 ID = 76239269\n");
		}

		const sgt::vec2d* v_ptr=(Luna< sgt::vec2d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec2d::operator!= function");
		}
		const sgt::vec2d & v=*v_ptr;

		sgt::vec2d* self=(Luna< sgt::vec2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::vec2d::operator!=(const sgt::vec2d &) const. Got : '%s'",typeid(Luna< sgt::vec2d >::check(L,1)).name());
		}
		bool lret = self->operator!=(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// sgt::vec2d sgt::vec2d::operator+(const sgt::vec2d & v) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2d sgt::vec2d::operator+(const sgt::vec2d & v) const function, expected prototype:\nsgt::vec2d sgt::vec2d::operator+(const sgt::vec2d & v) const\nClass arguments details:\narg 1 ID = 76239269\n");
		}

		const sgt::vec2d* v_ptr=(Luna< sgt::vec2d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec2d::operator+ function");
		}
		const sgt::vec2d & v=*v_ptr;

		sgt::vec2d* self=(Luna< sgt::vec2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2d sgt::vec2d::operator+(const sgt::vec2d &) const. Got : '%s'",typeid(Luna< sgt::vec2d >::check(L,1)).name());
		}
		sgt::vec2d stack_lret = self->operator+(v);
		sgt::vec2d* lret = new sgt::vec2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2d >::push(L,lret,true);

		return 1;
	}

	// sgt::vec2d sgt::vec2d::operator-(const sgt::vec2d & v) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2d sgt::vec2d::operator-(const sgt::vec2d & v) const function, expected prototype:\nsgt::vec2d sgt::vec2d::operator-(const sgt::vec2d & v) const\nClass arguments details:\narg 1 ID = 76239269\n");
		}

		const sgt::vec2d* v_ptr=(Luna< sgt::vec2d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec2d::operator- function");
		}
		const sgt::vec2d & v=*v_ptr;

		sgt::vec2d* self=(Luna< sgt::vec2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2d sgt::vec2d::operator-(const sgt::vec2d &) const. Got : '%s'",typeid(Luna< sgt::vec2d >::check(L,1)).name());
		}
		sgt::vec2d stack_lret = self->operator-(v);
		sgt::vec2d* lret = new sgt::vec2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2d >::push(L,lret,true);

		return 1;
	}

	// sgt::vec2d sgt::vec2d::operator*(const sgt::vec2d & v) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2d sgt::vec2d::operator*(const sgt::vec2d & v) const function, expected prototype:\nsgt::vec2d sgt::vec2d::operator*(const sgt::vec2d & v) const\nClass arguments details:\narg 1 ID = 76239269\n");
		}

		const sgt::vec2d* v_ptr=(Luna< sgt::vec2d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec2d::operator* function");
		}
		const sgt::vec2d & v=*v_ptr;

		sgt::vec2d* self=(Luna< sgt::vec2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2d sgt::vec2d::operator*(const sgt::vec2d &) const. Got : '%s'",typeid(Luna< sgt::vec2d >::check(L,1)).name());
		}
		sgt::vec2d stack_lret = self->operator*(v);
		sgt::vec2d* lret = new sgt::vec2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2d >::push(L,lret,true);

		return 1;
	}

	// sgt::vec2d sgt::vec2d::operator*(const double scalar) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2d sgt::vec2d::operator*(const double scalar) const function, expected prototype:\nsgt::vec2d sgt::vec2d::operator*(const double scalar) const\nClass arguments details:\n");
		}

		const double scalar=(const double)lua_tonumber(L,2);

		sgt::vec2d* self=(Luna< sgt::vec2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2d sgt::vec2d::operator*(const double) const. Got : '%s'",typeid(Luna< sgt::vec2d >::check(L,1)).name());
		}
		sgt::vec2d stack_lret = self->operator*(scalar);
		sgt::vec2d* lret = new sgt::vec2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2d >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::vec2d::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const sgt::vec2d &)\n  operator*(const double)\n");
		return 0;
	}

	// sgt::vec2d sgt::vec2d::operator/(const sgt::vec2d & v) const
	static int _bind___div_overload_1(lua_State *L) {
		if (!_lg_typecheck___div_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2d sgt::vec2d::operator/(const sgt::vec2d & v) const function, expected prototype:\nsgt::vec2d sgt::vec2d::operator/(const sgt::vec2d & v) const\nClass arguments details:\narg 1 ID = 76239269\n");
		}

		const sgt::vec2d* v_ptr=(Luna< sgt::vec2d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec2d::operator/ function");
		}
		const sgt::vec2d & v=*v_ptr;

		sgt::vec2d* self=(Luna< sgt::vec2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2d sgt::vec2d::operator/(const sgt::vec2d &) const. Got : '%s'",typeid(Luna< sgt::vec2d >::check(L,1)).name());
		}
		sgt::vec2d stack_lret = self->operator/(v);
		sgt::vec2d* lret = new sgt::vec2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2d >::push(L,lret,true);

		return 1;
	}

	// sgt::vec2d sgt::vec2d::operator/(const double scalar) const
	static int _bind___div_overload_2(lua_State *L) {
		if (!_lg_typecheck___div_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2d sgt::vec2d::operator/(const double scalar) const function, expected prototype:\nsgt::vec2d sgt::vec2d::operator/(const double scalar) const\nClass arguments details:\n");
		}

		const double scalar=(const double)lua_tonumber(L,2);

		sgt::vec2d* self=(Luna< sgt::vec2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2d sgt::vec2d::operator/(const double) const. Got : '%s'",typeid(Luna< sgt::vec2d >::check(L,1)).name());
		}
		sgt::vec2d stack_lret = self->operator/(scalar);
		sgt::vec2d* lret = new sgt::vec2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2d >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::vec2d::operator/
	static int _bind___div(lua_State *L) {
		if (_lg_typecheck___div_overload_1(L)) return _bind___div_overload_1(L);
		if (_lg_typecheck___div_overload_2(L)) return _bind___div_overload_2(L);

		luaL_error(L, "error in function operator/, cannot match any of the overloads for function operator/:\n  operator/(const sgt::vec2d &)\n  operator/(const double)\n");
		return 0;
	}

	// sgt::vec2d sgt::vec2d::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2d sgt::vec2d::operator-() const function, expected prototype:\nsgt::vec2d sgt::vec2d::operator-() const\nClass arguments details:\n");
		}


		sgt::vec2d* self=(Luna< sgt::vec2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2d sgt::vec2d::operator-() const. Got : '%s'",typeid(Luna< sgt::vec2d >::check(L,1)).name());
		}
		sgt::vec2d stack_lret = self->operator-();
		sgt::vec2d* lret = new sgt::vec2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2d >::push(L,lret,true);

		return 1;
	}

	// bool sgt::vec2d::operator<(const sgt::vec2d & v) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::vec2d::operator<(const sgt::vec2d & v) const function, expected prototype:\nbool sgt::vec2d::operator<(const sgt::vec2d & v) const\nClass arguments details:\narg 1 ID = 76239269\n");
		}

		const sgt::vec2d* v_ptr=(Luna< sgt::vec2d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec2d::operator< function");
		}
		const sgt::vec2d & v=*v_ptr;

		sgt::vec2d* self=(Luna< sgt::vec2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::vec2d::operator<(const sgt::vec2d &) const. Got : '%s'",typeid(Luna< sgt::vec2d >::check(L,1)).name());
		}
		bool lret = self->operator<(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

sgt::vec2d* LunaTraits< sgt::vec2d >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_vec2d::_bind_ctor(L);
}

void LunaTraits< sgt::vec2d >::_bind_dtor(sgt::vec2d* obj) {
	delete obj;
}

const char LunaTraits< sgt::vec2d >::className[] = "vec2d";
const char LunaTraits< sgt::vec2d >::fullName[] = "sgt::vec2d";
const char LunaTraits< sgt::vec2d >::moduleName[] = "sgt";
const char* LunaTraits< sgt::vec2d >::parents[] = {0};
const int LunaTraits< sgt::vec2d >::hash = 76239269;
const int LunaTraits< sgt::vec2d >::uniqueIDs[] = {76239269,0};

luna_RegType LunaTraits< sgt::vec2d >::methods[] = {
	{"length", &luna_wrapper_sgt_vec2d::_bind_length},
	{"squaredLength", &luna_wrapper_sgt_vec2d::_bind_squaredLength},
	{"dotproduct", &luna_wrapper_sgt_vec2d::_bind_dotproduct},
	{"dot", &luna_wrapper_sgt_vec2d::_bind_dot},
	{"normalize", &luna_wrapper_sgt_vec2d::_bind_normalize},
	{"getX", &luna_wrapper_sgt_vec2d::_bind_getX},
	{"getY", &luna_wrapper_sgt_vec2d::_bind_getY},
	{"setX", &luna_wrapper_sgt_vec2d::_bind_setX},
	{"setY", &luna_wrapper_sgt_vec2d::_bind_setY},
	{"op_index", &luna_wrapper_sgt_vec2d::_bind_op_index},
	{"__eq", &luna_wrapper_sgt_vec2d::_bind___eq},
	{"op_neq", &luna_wrapper_sgt_vec2d::_bind_op_neq},
	{"__add", &luna_wrapper_sgt_vec2d::_bind___add},
	{"__sub", &luna_wrapper_sgt_vec2d::_bind___sub},
	{"__mul", &luna_wrapper_sgt_vec2d::_bind___mul},
	{"__div", &luna_wrapper_sgt_vec2d::_bind___div},
	{"__unm", &luna_wrapper_sgt_vec2d::_bind___unm},
	{"__lt", &luna_wrapper_sgt_vec2d::_bind___lt},
	{"dynCast", &luna_wrapper_sgt_vec2d::_bind_dynCast},
	{"fromVoid", &luna_wrapper_sgt_vec2d::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_vec2d::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::vec2d >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::vec2d >::enumValues[] = {
	{0,0}
};



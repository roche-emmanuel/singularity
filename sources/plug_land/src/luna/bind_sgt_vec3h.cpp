#include <plug_common.h>

class luna_wrapper_sgt_vec3h {
public:
	typedef Luna< sgt::vec3h > luna_t;

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

		sgt::vec3h* self= (sgt::vec3h*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::vec3h >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76239304) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< sgt::vec3h >::check(L,1));
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

		sgt::vec3h* self=(Luna< sgt::vec3h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::vec3h");
		
		return luna_dynamicCast(L,converters,"sgt::vec3h",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31071002) ) return false;
		if( (!(Luna< sgt::half >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,31071002) ) return false;
		if( (!(Luna< sgt::half >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,31071002) ) return false;
		if( (!(Luna< sgt::half >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76239304) ) return false;
		if( (!(Luna< sgt::vec3h >::check(L,1))) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,76239304) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_normalize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_normalize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31071002) ) return false;
		if( (!(Luna< sgt::half >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_cross(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239304) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_xy(lua_State *L) {
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

	inline static bool _lg_typecheck_getZ(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31071002) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31071002) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setZ(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31071002) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,76239304) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239304) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239304) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239304) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239304) ) return false;
		if( (!(Luna< sgt::vec3h >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31071002) ) return false;
		if( (!(Luna< sgt::half >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___div_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239304) ) return false;
		if( (!(Luna< sgt::vec3h >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___div_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31071002) ) return false;
		if( (!(Luna< sgt::half >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___unm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239304) ) return false;
		return true;
	}


	// Constructor binds:
	// sgt::vec3h::vec3h()
	static sgt::vec3h* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3h::vec3h() function, expected prototype:\nsgt::vec3h::vec3h()\nClass arguments details:\n");
		}


		return new sgt::vec3h();
	}

	// sgt::vec3h::vec3h(sgt::half xi, sgt::half yi, sgt::half zi)
	static sgt::vec3h* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3h::vec3h(sgt::half xi, sgt::half yi, sgt::half zi) function, expected prototype:\nsgt::vec3h::vec3h(sgt::half xi, sgt::half yi, sgt::half zi)\nClass arguments details:\narg 1 ID = 31071002\narg 2 ID = 31071002\narg 3 ID = 31071002\n");
		}

		sgt::half* xi_ptr=(Luna< sgt::half >::check(L,1));
		if( !xi_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg xi in sgt::vec3h::vec3h function");
		}
		sgt::half xi=*xi_ptr;
		sgt::half* yi_ptr=(Luna< sgt::half >::check(L,2));
		if( !yi_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg yi in sgt::vec3h::vec3h function");
		}
		sgt::half yi=*yi_ptr;
		sgt::half* zi_ptr=(Luna< sgt::half >::check(L,3));
		if( !zi_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg zi in sgt::vec3h::vec3h function");
		}
		sgt::half zi=*zi_ptr;

		return new sgt::vec3h(xi, yi, zi);
	}

	// sgt::vec3h::vec3h(const sgt::vec3h & v)
	static sgt::vec3h* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3h::vec3h(const sgt::vec3h & v) function, expected prototype:\nsgt::vec3h::vec3h(const sgt::vec3h & v)\nClass arguments details:\narg 1 ID = 76239304\n");
		}

		const sgt::vec3h* v_ptr=(Luna< sgt::vec3h >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3h::vec3h function");
		}
		const sgt::vec3h & v=*v_ptr;

		return new sgt::vec3h(v);
	}

	// Overload binder for sgt::vec3h::vec3h
	static sgt::vec3h* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function vec3h, cannot match any of the overloads for function vec3h:\n  vec3h()\n  vec3h(sgt::half, sgt::half, sgt::half)\n  vec3h(const sgt::vec3h &)\n");
		return NULL;
	}


	// Function binds:
	// sgt::half sgt::vec3h::length() const
	static int _bind_length(lua_State *L) {
		if (!_lg_typecheck_length(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::half sgt::vec3h::length() const function, expected prototype:\nsgt::half sgt::vec3h::length() const\nClass arguments details:\n");
		}


		sgt::vec3h* self=(Luna< sgt::vec3h >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::half sgt::vec3h::length() const. Got : '%s'",typeid(Luna< sgt::vec3h >::check(L,1)).name());
		}
		sgt::half stack_lret = self->length();
		sgt::half* lret = new sgt::half(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::half >::push(L,lret,true);

		return 1;
	}

	// sgt::half sgt::vec3h::squaredLength() const
	static int _bind_squaredLength(lua_State *L) {
		if (!_lg_typecheck_squaredLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::half sgt::vec3h::squaredLength() const function, expected prototype:\nsgt::half sgt::vec3h::squaredLength() const\nClass arguments details:\n");
		}


		sgt::vec3h* self=(Luna< sgt::vec3h >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::half sgt::vec3h::squaredLength() const. Got : '%s'",typeid(Luna< sgt::vec3h >::check(L,1)).name());
		}
		sgt::half stack_lret = self->squaredLength();
		sgt::half* lret = new sgt::half(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::half >::push(L,lret,true);

		return 1;
	}

	// sgt::half sgt::vec3h::dot(const sgt::vec3h & v) const
	static int _bind_dot(lua_State *L) {
		if (!_lg_typecheck_dot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::half sgt::vec3h::dot(const sgt::vec3h & v) const function, expected prototype:\nsgt::half sgt::vec3h::dot(const sgt::vec3h & v) const\nClass arguments details:\narg 1 ID = 76239304\n");
		}

		const sgt::vec3h* v_ptr=(Luna< sgt::vec3h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3h::dot function");
		}
		const sgt::vec3h & v=*v_ptr;

		sgt::vec3h* self=(Luna< sgt::vec3h >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::half sgt::vec3h::dot(const sgt::vec3h &) const. Got : '%s'",typeid(Luna< sgt::vec3h >::check(L,1)).name());
		}
		sgt::half stack_lret = self->dot(v);
		sgt::half* lret = new sgt::half(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::half >::push(L,lret,true);

		return 1;
	}

	// sgt::vec3h sgt::vec3h::normalize() const
	static int _bind_normalize_overload_1(lua_State *L) {
		if (!_lg_typecheck_normalize_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3h sgt::vec3h::normalize() const function, expected prototype:\nsgt::vec3h sgt::vec3h::normalize() const\nClass arguments details:\n");
		}


		sgt::vec3h* self=(Luna< sgt::vec3h >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec3h sgt::vec3h::normalize() const. Got : '%s'",typeid(Luna< sgt::vec3h >::check(L,1)).name());
		}
		sgt::vec3h stack_lret = self->normalize();
		sgt::vec3h* lret = new sgt::vec3h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3h >::push(L,lret,true);

		return 1;
	}

	// sgt::vec3h sgt::vec3h::normalize(sgt::half l) const
	static int _bind_normalize_overload_2(lua_State *L) {
		if (!_lg_typecheck_normalize_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3h sgt::vec3h::normalize(sgt::half l) const function, expected prototype:\nsgt::vec3h sgt::vec3h::normalize(sgt::half l) const\nClass arguments details:\narg 1 ID = 31071002\n");
		}

		sgt::half* l_ptr=(Luna< sgt::half >::check(L,2));
		if( !l_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg l in sgt::vec3h::normalize function");
		}
		sgt::half l=*l_ptr;

		sgt::vec3h* self=(Luna< sgt::vec3h >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec3h sgt::vec3h::normalize(sgt::half) const. Got : '%s'",typeid(Luna< sgt::vec3h >::check(L,1)).name());
		}
		sgt::vec3h stack_lret = self->normalize(l);
		sgt::vec3h* lret = new sgt::vec3h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3h >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::vec3h::normalize
	static int _bind_normalize(lua_State *L) {
		if (_lg_typecheck_normalize_overload_1(L)) return _bind_normalize_overload_1(L);
		if (_lg_typecheck_normalize_overload_2(L)) return _bind_normalize_overload_2(L);

		luaL_error(L, "error in function normalize, cannot match any of the overloads for function normalize:\n  normalize()\n  normalize(sgt::half)\n");
		return 0;
	}

	// sgt::vec3h sgt::vec3h::cross(const sgt::vec3h & v) const
	static int _bind_cross(lua_State *L) {
		if (!_lg_typecheck_cross(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3h sgt::vec3h::cross(const sgt::vec3h & v) const function, expected prototype:\nsgt::vec3h sgt::vec3h::cross(const sgt::vec3h & v) const\nClass arguments details:\narg 1 ID = 76239304\n");
		}

		const sgt::vec3h* v_ptr=(Luna< sgt::vec3h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3h::cross function");
		}
		const sgt::vec3h & v=*v_ptr;

		sgt::vec3h* self=(Luna< sgt::vec3h >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec3h sgt::vec3h::cross(const sgt::vec3h &) const. Got : '%s'",typeid(Luna< sgt::vec3h >::check(L,1)).name());
		}
		sgt::vec3h stack_lret = self->cross(v);
		sgt::vec3h* lret = new sgt::vec3h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3h >::push(L,lret,true);

		return 1;
	}

	// sgt::vec2h sgt::vec3h::xy() const
	static int _bind_xy(lua_State *L) {
		if (!_lg_typecheck_xy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2h sgt::vec3h::xy() const function, expected prototype:\nsgt::vec2h sgt::vec3h::xy() const\nClass arguments details:\n");
		}


		sgt::vec3h* self=(Luna< sgt::vec3h >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2h sgt::vec3h::xy() const. Got : '%s'",typeid(Luna< sgt::vec3h >::check(L,1)).name());
		}
		sgt::vec2h stack_lret = self->xy();
		sgt::vec2h* lret = new sgt::vec2h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2h >::push(L,lret,true);

		return 1;
	}

	// sgt::half sgt::vec3h::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::half sgt::vec3h::x() function, expected prototype:\nsgt::half sgt::vec3h::x()\nClass arguments details:\n");
		}


		sgt::vec3h* self=(Luna< sgt::vec3h >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::half sgt::vec3h::x(). Got : '%s'",typeid(Luna< sgt::vec3h >::check(L,1)).name());
		}
		const sgt::half* lret = &self->x;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::half >::push(L,lret,false);

		return 1;
	}

	// sgt::half sgt::vec3h::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::half sgt::vec3h::y() function, expected prototype:\nsgt::half sgt::vec3h::y()\nClass arguments details:\n");
		}


		sgt::vec3h* self=(Luna< sgt::vec3h >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::half sgt::vec3h::y(). Got : '%s'",typeid(Luna< sgt::vec3h >::check(L,1)).name());
		}
		const sgt::half* lret = &self->y;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::half >::push(L,lret,false);

		return 1;
	}

	// sgt::half sgt::vec3h::z()
	static int _bind_getZ(lua_State *L) {
		if (!_lg_typecheck_getZ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::half sgt::vec3h::z() function, expected prototype:\nsgt::half sgt::vec3h::z()\nClass arguments details:\n");
		}


		sgt::vec3h* self=(Luna< sgt::vec3h >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::half sgt::vec3h::z(). Got : '%s'",typeid(Luna< sgt::vec3h >::check(L,1)).name());
		}
		const sgt::half* lret = &self->z;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::half >::push(L,lret,false);

		return 1;
	}

	// void sgt::vec3h::x(sgt::half value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::vec3h::x(sgt::half value) function, expected prototype:\nvoid sgt::vec3h::x(sgt::half value)\nClass arguments details:\narg 1 ID = 31071002\n");
		}

		sgt::half* value_ptr=(Luna< sgt::half >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in sgt::vec3h::x function");
		}
		sgt::half value=*value_ptr;

		sgt::vec3h* self=(Luna< sgt::vec3h >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::vec3h::x(sgt::half). Got : '%s'",typeid(Luna< sgt::vec3h >::check(L,1)).name());
		}
		self->x = value;

		return 0;
	}

	// void sgt::vec3h::y(sgt::half value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::vec3h::y(sgt::half value) function, expected prototype:\nvoid sgt::vec3h::y(sgt::half value)\nClass arguments details:\narg 1 ID = 31071002\n");
		}

		sgt::half* value_ptr=(Luna< sgt::half >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in sgt::vec3h::y function");
		}
		sgt::half value=*value_ptr;

		sgt::vec3h* self=(Luna< sgt::vec3h >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::vec3h::y(sgt::half). Got : '%s'",typeid(Luna< sgt::vec3h >::check(L,1)).name());
		}
		self->y = value;

		return 0;
	}

	// void sgt::vec3h::z(sgt::half value)
	static int _bind_setZ(lua_State *L) {
		if (!_lg_typecheck_setZ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::vec3h::z(sgt::half value) function, expected prototype:\nvoid sgt::vec3h::z(sgt::half value)\nClass arguments details:\narg 1 ID = 31071002\n");
		}

		sgt::half* value_ptr=(Luna< sgt::half >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in sgt::vec3h::z function");
		}
		sgt::half value=*value_ptr;

		sgt::vec3h* self=(Luna< sgt::vec3h >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::vec3h::z(sgt::half). Got : '%s'",typeid(Luna< sgt::vec3h >::check(L,1)).name());
		}
		self->z = value;

		return 0;
	}


	// Operator binds:
	// sgt::half & sgt::vec3h::operator[](const int i)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::half & sgt::vec3h::operator[](const int i) function, expected prototype:\nsgt::half & sgt::vec3h::operator[](const int i)\nClass arguments details:\n");
		}

		const int i=(const int)lua_tointeger(L,2);

		sgt::vec3h* self=(Luna< sgt::vec3h >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::half & sgt::vec3h::operator[](const int). Got : '%s'",typeid(Luna< sgt::vec3h >::check(L,1)).name());
		}
		const sgt::half* lret = &self->operator[](i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::half >::push(L,lret,false);

		return 1;
	}

	// bool sgt::vec3h::operator==(const sgt::vec3h & v) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::vec3h::operator==(const sgt::vec3h & v) const function, expected prototype:\nbool sgt::vec3h::operator==(const sgt::vec3h & v) const\nClass arguments details:\narg 1 ID = 76239304\n");
		}

		const sgt::vec3h* v_ptr=(Luna< sgt::vec3h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3h::operator== function");
		}
		const sgt::vec3h & v=*v_ptr;

		sgt::vec3h* self=(Luna< sgt::vec3h >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::vec3h::operator==(const sgt::vec3h &) const. Got : '%s'",typeid(Luna< sgt::vec3h >::check(L,1)).name());
		}
		bool lret = self->operator==(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool sgt::vec3h::operator!=(const sgt::vec3h & v) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::vec3h::operator!=(const sgt::vec3h & v) const function, expected prototype:\nbool sgt::vec3h::operator!=(const sgt::vec3h & v) const\nClass arguments details:\narg 1 ID = 76239304\n");
		}

		const sgt::vec3h* v_ptr=(Luna< sgt::vec3h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3h::operator!= function");
		}
		const sgt::vec3h & v=*v_ptr;

		sgt::vec3h* self=(Luna< sgt::vec3h >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::vec3h::operator!=(const sgt::vec3h &) const. Got : '%s'",typeid(Luna< sgt::vec3h >::check(L,1)).name());
		}
		bool lret = self->operator!=(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// sgt::vec3h sgt::vec3h::operator+(const sgt::vec3h & v) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3h sgt::vec3h::operator+(const sgt::vec3h & v) const function, expected prototype:\nsgt::vec3h sgt::vec3h::operator+(const sgt::vec3h & v) const\nClass arguments details:\narg 1 ID = 76239304\n");
		}

		const sgt::vec3h* v_ptr=(Luna< sgt::vec3h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3h::operator+ function");
		}
		const sgt::vec3h & v=*v_ptr;

		sgt::vec3h* self=(Luna< sgt::vec3h >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec3h sgt::vec3h::operator+(const sgt::vec3h &) const. Got : '%s'",typeid(Luna< sgt::vec3h >::check(L,1)).name());
		}
		sgt::vec3h stack_lret = self->operator+(v);
		sgt::vec3h* lret = new sgt::vec3h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3h >::push(L,lret,true);

		return 1;
	}

	// sgt::vec3h sgt::vec3h::operator-(const sgt::vec3h & v) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3h sgt::vec3h::operator-(const sgt::vec3h & v) const function, expected prototype:\nsgt::vec3h sgt::vec3h::operator-(const sgt::vec3h & v) const\nClass arguments details:\narg 1 ID = 76239304\n");
		}

		const sgt::vec3h* v_ptr=(Luna< sgt::vec3h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3h::operator- function");
		}
		const sgt::vec3h & v=*v_ptr;

		sgt::vec3h* self=(Luna< sgt::vec3h >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec3h sgt::vec3h::operator-(const sgt::vec3h &) const. Got : '%s'",typeid(Luna< sgt::vec3h >::check(L,1)).name());
		}
		sgt::vec3h stack_lret = self->operator-(v);
		sgt::vec3h* lret = new sgt::vec3h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3h >::push(L,lret,true);

		return 1;
	}

	// sgt::vec3h sgt::vec3h::operator*(const sgt::vec3h & v) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3h sgt::vec3h::operator*(const sgt::vec3h & v) const function, expected prototype:\nsgt::vec3h sgt::vec3h::operator*(const sgt::vec3h & v) const\nClass arguments details:\narg 1 ID = 76239304\n");
		}

		const sgt::vec3h* v_ptr=(Luna< sgt::vec3h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3h::operator* function");
		}
		const sgt::vec3h & v=*v_ptr;

		sgt::vec3h* self=(Luna< sgt::vec3h >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec3h sgt::vec3h::operator*(const sgt::vec3h &) const. Got : '%s'",typeid(Luna< sgt::vec3h >::check(L,1)).name());
		}
		sgt::vec3h stack_lret = self->operator*(v);
		sgt::vec3h* lret = new sgt::vec3h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3h >::push(L,lret,true);

		return 1;
	}

	// sgt::vec3h sgt::vec3h::operator*(const sgt::half scalar) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3h sgt::vec3h::operator*(const sgt::half scalar) const function, expected prototype:\nsgt::vec3h sgt::vec3h::operator*(const sgt::half scalar) const\nClass arguments details:\narg 1 ID = 31071002\n");
		}

		const sgt::half* scalar_ptr=(Luna< sgt::half >::check(L,2));
		if( !scalar_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scalar in sgt::vec3h::operator* function");
		}
		const sgt::half scalar=*scalar_ptr;

		sgt::vec3h* self=(Luna< sgt::vec3h >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec3h sgt::vec3h::operator*(const sgt::half) const. Got : '%s'",typeid(Luna< sgt::vec3h >::check(L,1)).name());
		}
		sgt::vec3h stack_lret = self->operator*(scalar);
		sgt::vec3h* lret = new sgt::vec3h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3h >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::vec3h::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const sgt::vec3h &)\n  operator*(const sgt::half)\n");
		return 0;
	}

	// sgt::vec3h sgt::vec3h::operator/(const sgt::vec3h & v) const
	static int _bind___div_overload_1(lua_State *L) {
		if (!_lg_typecheck___div_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3h sgt::vec3h::operator/(const sgt::vec3h & v) const function, expected prototype:\nsgt::vec3h sgt::vec3h::operator/(const sgt::vec3h & v) const\nClass arguments details:\narg 1 ID = 76239304\n");
		}

		const sgt::vec3h* v_ptr=(Luna< sgt::vec3h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3h::operator/ function");
		}
		const sgt::vec3h & v=*v_ptr;

		sgt::vec3h* self=(Luna< sgt::vec3h >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec3h sgt::vec3h::operator/(const sgt::vec3h &) const. Got : '%s'",typeid(Luna< sgt::vec3h >::check(L,1)).name());
		}
		sgt::vec3h stack_lret = self->operator/(v);
		sgt::vec3h* lret = new sgt::vec3h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3h >::push(L,lret,true);

		return 1;
	}

	// sgt::vec3h sgt::vec3h::operator/(const sgt::half scalar) const
	static int _bind___div_overload_2(lua_State *L) {
		if (!_lg_typecheck___div_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3h sgt::vec3h::operator/(const sgt::half scalar) const function, expected prototype:\nsgt::vec3h sgt::vec3h::operator/(const sgt::half scalar) const\nClass arguments details:\narg 1 ID = 31071002\n");
		}

		const sgt::half* scalar_ptr=(Luna< sgt::half >::check(L,2));
		if( !scalar_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scalar in sgt::vec3h::operator/ function");
		}
		const sgt::half scalar=*scalar_ptr;

		sgt::vec3h* self=(Luna< sgt::vec3h >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec3h sgt::vec3h::operator/(const sgt::half) const. Got : '%s'",typeid(Luna< sgt::vec3h >::check(L,1)).name());
		}
		sgt::vec3h stack_lret = self->operator/(scalar);
		sgt::vec3h* lret = new sgt::vec3h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3h >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::vec3h::operator/
	static int _bind___div(lua_State *L) {
		if (_lg_typecheck___div_overload_1(L)) return _bind___div_overload_1(L);
		if (_lg_typecheck___div_overload_2(L)) return _bind___div_overload_2(L);

		luaL_error(L, "error in function operator/, cannot match any of the overloads for function operator/:\n  operator/(const sgt::vec3h &)\n  operator/(const sgt::half)\n");
		return 0;
	}

	// sgt::vec3h sgt::vec3h::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3h sgt::vec3h::operator-() const function, expected prototype:\nsgt::vec3h sgt::vec3h::operator-() const\nClass arguments details:\n");
		}


		sgt::vec3h* self=(Luna< sgt::vec3h >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec3h sgt::vec3h::operator-() const. Got : '%s'",typeid(Luna< sgt::vec3h >::check(L,1)).name());
		}
		sgt::vec3h stack_lret = self->operator-();
		sgt::vec3h* lret = new sgt::vec3h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3h >::push(L,lret,true);

		return 1;
	}

	// bool sgt::vec3h::operator<(const sgt::vec3h & v) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::vec3h::operator<(const sgt::vec3h & v) const function, expected prototype:\nbool sgt::vec3h::operator<(const sgt::vec3h & v) const\nClass arguments details:\narg 1 ID = 76239304\n");
		}

		const sgt::vec3h* v_ptr=(Luna< sgt::vec3h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3h::operator< function");
		}
		const sgt::vec3h & v=*v_ptr;

		sgt::vec3h* self=(Luna< sgt::vec3h >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::vec3h::operator<(const sgt::vec3h &) const. Got : '%s'",typeid(Luna< sgt::vec3h >::check(L,1)).name());
		}
		bool lret = self->operator<(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

sgt::vec3h* LunaTraits< sgt::vec3h >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_vec3h::_bind_ctor(L);
}

void LunaTraits< sgt::vec3h >::_bind_dtor(sgt::vec3h* obj) {
	delete obj;
}

const char LunaTraits< sgt::vec3h >::className[] = "vec3h";
const char LunaTraits< sgt::vec3h >::fullName[] = "sgt::vec3h";
const char LunaTraits< sgt::vec3h >::moduleName[] = "sgt";
const char* LunaTraits< sgt::vec3h >::parents[] = {0};
const int LunaTraits< sgt::vec3h >::hash = 76239304;
const int LunaTraits< sgt::vec3h >::uniqueIDs[] = {76239304,0};

luna_RegType LunaTraits< sgt::vec3h >::methods[] = {
	{"length", &luna_wrapper_sgt_vec3h::_bind_length},
	{"squaredLength", &luna_wrapper_sgt_vec3h::_bind_squaredLength},
	{"dot", &luna_wrapper_sgt_vec3h::_bind_dot},
	{"normalize", &luna_wrapper_sgt_vec3h::_bind_normalize},
	{"cross", &luna_wrapper_sgt_vec3h::_bind_cross},
	{"xy", &luna_wrapper_sgt_vec3h::_bind_xy},
	{"getX", &luna_wrapper_sgt_vec3h::_bind_getX},
	{"getY", &luna_wrapper_sgt_vec3h::_bind_getY},
	{"getZ", &luna_wrapper_sgt_vec3h::_bind_getZ},
	{"setX", &luna_wrapper_sgt_vec3h::_bind_setX},
	{"setY", &luna_wrapper_sgt_vec3h::_bind_setY},
	{"setZ", &luna_wrapper_sgt_vec3h::_bind_setZ},
	{"op_index", &luna_wrapper_sgt_vec3h::_bind_op_index},
	{"__eq", &luna_wrapper_sgt_vec3h::_bind___eq},
	{"op_neq", &luna_wrapper_sgt_vec3h::_bind_op_neq},
	{"__add", &luna_wrapper_sgt_vec3h::_bind___add},
	{"__sub", &luna_wrapper_sgt_vec3h::_bind___sub},
	{"__mul", &luna_wrapper_sgt_vec3h::_bind___mul},
	{"__div", &luna_wrapper_sgt_vec3h::_bind___div},
	{"__unm", &luna_wrapper_sgt_vec3h::_bind___unm},
	{"__lt", &luna_wrapper_sgt_vec3h::_bind___lt},
	{"dynCast", &luna_wrapper_sgt_vec3h::_bind_dynCast},
	{"fromVoid", &luna_wrapper_sgt_vec3h::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_vec3h::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::vec3h >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::vec3h >::enumValues[] = {
	{0,0}
};



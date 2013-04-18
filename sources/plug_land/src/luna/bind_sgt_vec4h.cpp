#include <plug_common.h>

class luna_wrapper_sgt_vec4h {
public:
	typedef Luna< sgt::vec4h > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgt::vec4h* self= (sgt::vec4h*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::vec4h >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76239335) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< sgt::vec4h >::check(L,1));
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
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		sgt::vec4h* self=(Luna< sgt::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::vec4h");
		
		return luna_dynamicCast(L,converters,"sgt::vec4h",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31071002) ) return false;
		if( (!(Luna< sgt::half >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,31071002) ) return false;
		if( (!(Luna< sgt::half >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,31071002) ) return false;
		if( (!(Luna< sgt::half >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,31071002) ) return false;
		if( (!(Luna< sgt::half >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76239335) ) return false;
		if( (!(Luna< sgt::vec4h >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76239304) ) return false;
		if( (!(Luna< sgt::vec3h >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76239304) ) return false;
		if( (!(Luna< sgt::vec3h >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,31071002) ) return false;
		if( (!(Luna< sgt::half >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_dot_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239335) ) return false;
		if( (!(Luna< sgt::vec4h >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_dot_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239304) ) return false;
		if( (!(Luna< sgt::vec3h >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_xyzw(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_xyz(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_getW(lua_State *L) {
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

	inline static bool _lg_typecheck_setW(lua_State *L) {
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

		if( !Luna<void>::has_uniqueid(L,2,76239335) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239335) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239335) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239335) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239335) ) return false;
		if( (!(Luna< sgt::vec4h >::check(L,2))) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,76239335) ) return false;
		if( (!(Luna< sgt::vec4h >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___div_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31071002) ) return false;
		if( (!(Luna< sgt::half >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___unm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		return true;
	}

	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239335) ) return false;
		return true;
	}


	// Constructor binds:
	// sgt::vec4h::vec4h()
	static sgt::vec4h* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec4h::vec4h() function, expected prototype:\nsgt::vec4h::vec4h()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new sgt::vec4h();
	}

	// sgt::vec4h::vec4h(sgt::half xi, sgt::half yi, sgt::half zi, sgt::half wi)
	static sgt::vec4h* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec4h::vec4h(sgt::half xi, sgt::half yi, sgt::half zi, sgt::half wi) function, expected prototype:\nsgt::vec4h::vec4h(sgt::half xi, sgt::half yi, sgt::half zi, sgt::half wi)\nClass arguments details:\narg 1 ID = 31071002\narg 2 ID = 31071002\narg 3 ID = 31071002\narg 4 ID = 31071002\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::half* xi_ptr=(Luna< sgt::half >::check(L,1));
		if( !xi_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg xi in sgt::vec4h::vec4h function");
		}
		sgt::half xi=*xi_ptr;
		sgt::half* yi_ptr=(Luna< sgt::half >::check(L,2));
		if( !yi_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg yi in sgt::vec4h::vec4h function");
		}
		sgt::half yi=*yi_ptr;
		sgt::half* zi_ptr=(Luna< sgt::half >::check(L,3));
		if( !zi_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg zi in sgt::vec4h::vec4h function");
		}
		sgt::half zi=*zi_ptr;
		sgt::half* wi_ptr=(Luna< sgt::half >::check(L,4));
		if( !wi_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg wi in sgt::vec4h::vec4h function");
		}
		sgt::half wi=*wi_ptr;

		return new sgt::vec4h(xi, yi, zi, wi);
	}

	// sgt::vec4h::vec4h(const sgt::vec4h & v)
	static sgt::vec4h* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec4h::vec4h(const sgt::vec4h & v) function, expected prototype:\nsgt::vec4h::vec4h(const sgt::vec4h & v)\nClass arguments details:\narg 1 ID = 76239335\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec4h* v_ptr=(Luna< sgt::vec4h >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4h::vec4h function");
		}
		const sgt::vec4h & v=*v_ptr;

		return new sgt::vec4h(v);
	}

	// sgt::vec4h::vec4h(const sgt::vec3h & v)
	static sgt::vec4h* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec4h::vec4h(const sgt::vec3h & v) function, expected prototype:\nsgt::vec4h::vec4h(const sgt::vec3h & v)\nClass arguments details:\narg 1 ID = 76239304\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec3h* v_ptr=(Luna< sgt::vec3h >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4h::vec4h function");
		}
		const sgt::vec3h & v=*v_ptr;

		return new sgt::vec4h(v);
	}

	// sgt::vec4h::vec4h(const sgt::vec3h & v, sgt::half wi)
	static sgt::vec4h* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec4h::vec4h(const sgt::vec3h & v, sgt::half wi) function, expected prototype:\nsgt::vec4h::vec4h(const sgt::vec3h & v, sgt::half wi)\nClass arguments details:\narg 1 ID = 76239304\narg 2 ID = 31071002\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec3h* v_ptr=(Luna< sgt::vec3h >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4h::vec4h function");
		}
		const sgt::vec3h & v=*v_ptr;
		sgt::half* wi_ptr=(Luna< sgt::half >::check(L,2));
		if( !wi_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg wi in sgt::vec4h::vec4h function");
		}
		sgt::half wi=*wi_ptr;

		return new sgt::vec4h(v, wi);
	}

	// Overload binder for sgt::vec4h::vec4h
	static sgt::vec4h* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);

		luaL_error(L, "error in function vec4h, cannot match any of the overloads for function vec4h:\n  vec4h()\n  vec4h(sgt::half, sgt::half, sgt::half, sgt::half)\n  vec4h(const sgt::vec4h &)\n  vec4h(const sgt::vec3h &)\n  vec4h(const sgt::vec3h &, sgt::half)\n");
		return NULL;
	}


	// Function binds:
	// sgt::half sgt::vec4h::dot(const sgt::vec4h & v) const
	static int _bind_dot_overload_1(lua_State *L) {
		if (!_lg_typecheck_dot_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in sgt::half sgt::vec4h::dot(const sgt::vec4h & v) const function, expected prototype:\nsgt::half sgt::vec4h::dot(const sgt::vec4h & v) const\nClass arguments details:\narg 1 ID = 76239335\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec4h* v_ptr=(Luna< sgt::vec4h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4h::dot function");
		}
		const sgt::vec4h & v=*v_ptr;

		sgt::vec4h* self=(Luna< sgt::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::half sgt::vec4h::dot(const sgt::vec4h &) const. Got : '%s'\n%s",typeid(Luna< sgt::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::half stack_lret = self->dot(v);
		sgt::half* lret = new sgt::half(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::half >::push(L,lret,true);

		return 1;
	}

	// sgt::half sgt::vec4h::dot(const sgt::vec3h & v) const
	static int _bind_dot_overload_2(lua_State *L) {
		if (!_lg_typecheck_dot_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::half sgt::vec4h::dot(const sgt::vec3h & v) const function, expected prototype:\nsgt::half sgt::vec4h::dot(const sgt::vec3h & v) const\nClass arguments details:\narg 1 ID = 76239304\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec3h* v_ptr=(Luna< sgt::vec3h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4h::dot function");
		}
		const sgt::vec3h & v=*v_ptr;

		sgt::vec4h* self=(Luna< sgt::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::half sgt::vec4h::dot(const sgt::vec3h &) const. Got : '%s'\n%s",typeid(Luna< sgt::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::half stack_lret = self->dot(v);
		sgt::half* lret = new sgt::half(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::half >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::vec4h::dot
	static int _bind_dot(lua_State *L) {
		if (_lg_typecheck_dot_overload_1(L)) return _bind_dot_overload_1(L);
		if (_lg_typecheck_dot_overload_2(L)) return _bind_dot_overload_2(L);

		luaL_error(L, "error in function dot, cannot match any of the overloads for function dot:\n  dot(const sgt::vec4h &)\n  dot(const sgt::vec3h &)\n");
		return 0;
	}

	// sgt::vec3h sgt::vec4h::xyzw() const
	static int _bind_xyzw(lua_State *L) {
		if (!_lg_typecheck_xyzw(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec3h sgt::vec4h::xyzw() const function, expected prototype:\nsgt::vec3h sgt::vec4h::xyzw() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::vec4h* self=(Luna< sgt::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec3h sgt::vec4h::xyzw() const. Got : '%s'\n%s",typeid(Luna< sgt::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec3h stack_lret = self->xyzw();
		sgt::vec3h* lret = new sgt::vec3h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3h >::push(L,lret,true);

		return 1;
	}

	// sgt::vec3h sgt::vec4h::xyz() const
	static int _bind_xyz(lua_State *L) {
		if (!_lg_typecheck_xyz(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec3h sgt::vec4h::xyz() const function, expected prototype:\nsgt::vec3h sgt::vec4h::xyz() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::vec4h* self=(Luna< sgt::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec3h sgt::vec4h::xyz() const. Got : '%s'\n%s",typeid(Luna< sgt::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec3h stack_lret = self->xyz();
		sgt::vec3h* lret = new sgt::vec3h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3h >::push(L,lret,true);

		return 1;
	}

	// sgt::vec2h sgt::vec4h::xy() const
	static int _bind_xy(lua_State *L) {
		if (!_lg_typecheck_xy(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec2h sgt::vec4h::xy() const function, expected prototype:\nsgt::vec2h sgt::vec4h::xy() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::vec4h* self=(Luna< sgt::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec2h sgt::vec4h::xy() const. Got : '%s'\n%s",typeid(Luna< sgt::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec2h stack_lret = self->xy();
		sgt::vec2h* lret = new sgt::vec2h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2h >::push(L,lret,true);

		return 1;
	}

	// sgt::half sgt::vec4h::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luaL_error(L, "luna typecheck failed in sgt::half sgt::vec4h::x() function, expected prototype:\nsgt::half sgt::vec4h::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::vec4h* self=(Luna< sgt::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::half sgt::vec4h::x(). Got : '%s'\n%s",typeid(Luna< sgt::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const sgt::half* lret = &self->x;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::half >::push(L,lret,false);

		return 1;
	}

	// sgt::half sgt::vec4h::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luaL_error(L, "luna typecheck failed in sgt::half sgt::vec4h::y() function, expected prototype:\nsgt::half sgt::vec4h::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::vec4h* self=(Luna< sgt::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::half sgt::vec4h::y(). Got : '%s'\n%s",typeid(Luna< sgt::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const sgt::half* lret = &self->y;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::half >::push(L,lret,false);

		return 1;
	}

	// sgt::half sgt::vec4h::z()
	static int _bind_getZ(lua_State *L) {
		if (!_lg_typecheck_getZ(L)) {
			luaL_error(L, "luna typecheck failed in sgt::half sgt::vec4h::z() function, expected prototype:\nsgt::half sgt::vec4h::z()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::vec4h* self=(Luna< sgt::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::half sgt::vec4h::z(). Got : '%s'\n%s",typeid(Luna< sgt::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const sgt::half* lret = &self->z;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::half >::push(L,lret,false);

		return 1;
	}

	// sgt::half sgt::vec4h::w()
	static int _bind_getW(lua_State *L) {
		if (!_lg_typecheck_getW(L)) {
			luaL_error(L, "luna typecheck failed in sgt::half sgt::vec4h::w() function, expected prototype:\nsgt::half sgt::vec4h::w()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::vec4h* self=(Luna< sgt::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::half sgt::vec4h::w(). Got : '%s'\n%s",typeid(Luna< sgt::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const sgt::half* lret = &self->w;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::half >::push(L,lret,false);

		return 1;
	}

	// void sgt::vec4h::x(sgt::half value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::vec4h::x(sgt::half value) function, expected prototype:\nvoid sgt::vec4h::x(sgt::half value)\nClass arguments details:\narg 1 ID = 31071002\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::half* value_ptr=(Luna< sgt::half >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in sgt::vec4h::x function");
		}
		sgt::half value=*value_ptr;

		sgt::vec4h* self=(Luna< sgt::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::vec4h::x(sgt::half). Got : '%s'\n%s",typeid(Luna< sgt::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->x = value;

		return 0;
	}

	// void sgt::vec4h::y(sgt::half value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::vec4h::y(sgt::half value) function, expected prototype:\nvoid sgt::vec4h::y(sgt::half value)\nClass arguments details:\narg 1 ID = 31071002\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::half* value_ptr=(Luna< sgt::half >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in sgt::vec4h::y function");
		}
		sgt::half value=*value_ptr;

		sgt::vec4h* self=(Luna< sgt::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::vec4h::y(sgt::half). Got : '%s'\n%s",typeid(Luna< sgt::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->y = value;

		return 0;
	}

	// void sgt::vec4h::z(sgt::half value)
	static int _bind_setZ(lua_State *L) {
		if (!_lg_typecheck_setZ(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::vec4h::z(sgt::half value) function, expected prototype:\nvoid sgt::vec4h::z(sgt::half value)\nClass arguments details:\narg 1 ID = 31071002\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::half* value_ptr=(Luna< sgt::half >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in sgt::vec4h::z function");
		}
		sgt::half value=*value_ptr;

		sgt::vec4h* self=(Luna< sgt::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::vec4h::z(sgt::half). Got : '%s'\n%s",typeid(Luna< sgt::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->z = value;

		return 0;
	}

	// void sgt::vec4h::w(sgt::half value)
	static int _bind_setW(lua_State *L) {
		if (!_lg_typecheck_setW(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::vec4h::w(sgt::half value) function, expected prototype:\nvoid sgt::vec4h::w(sgt::half value)\nClass arguments details:\narg 1 ID = 31071002\n\n%s",luna_dumpStack(L).c_str());
		}

		sgt::half* value_ptr=(Luna< sgt::half >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in sgt::vec4h::w function");
		}
		sgt::half value=*value_ptr;

		sgt::vec4h* self=(Luna< sgt::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::vec4h::w(sgt::half). Got : '%s'\n%s",typeid(Luna< sgt::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->w = value;

		return 0;
	}


	// Operator binds:
	// sgt::half & sgt::vec4h::operator[](const int i)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luaL_error(L, "luna typecheck failed in sgt::half & sgt::vec4h::operator[](const int i) function, expected prototype:\nsgt::half & sgt::vec4h::operator[](const int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const int i=(const int)lua_tointeger(L,2);

		sgt::vec4h* self=(Luna< sgt::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::half & sgt::vec4h::operator[](const int). Got : '%s'\n%s",typeid(Luna< sgt::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const sgt::half* lret = &self->operator[](i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::half >::push(L,lret,false);

		return 1;
	}

	// bool sgt::vec4h::operator==(const sgt::vec4h & v) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::vec4h::operator==(const sgt::vec4h & v) const function, expected prototype:\nbool sgt::vec4h::operator==(const sgt::vec4h & v) const\nClass arguments details:\narg 1 ID = 76239335\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec4h* v_ptr=(Luna< sgt::vec4h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4h::operator== function");
		}
		const sgt::vec4h & v=*v_ptr;

		sgt::vec4h* self=(Luna< sgt::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::vec4h::operator==(const sgt::vec4h &) const. Got : '%s'\n%s",typeid(Luna< sgt::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool sgt::vec4h::operator!=(const sgt::vec4h & v) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::vec4h::operator!=(const sgt::vec4h & v) const function, expected prototype:\nbool sgt::vec4h::operator!=(const sgt::vec4h & v) const\nClass arguments details:\narg 1 ID = 76239335\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec4h* v_ptr=(Luna< sgt::vec4h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4h::operator!= function");
		}
		const sgt::vec4h & v=*v_ptr;

		sgt::vec4h* self=(Luna< sgt::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::vec4h::operator!=(const sgt::vec4h &) const. Got : '%s'\n%s",typeid(Luna< sgt::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// sgt::vec4h sgt::vec4h::operator+(const sgt::vec4h & v) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec4h sgt::vec4h::operator+(const sgt::vec4h & v) const function, expected prototype:\nsgt::vec4h sgt::vec4h::operator+(const sgt::vec4h & v) const\nClass arguments details:\narg 1 ID = 76239335\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec4h* v_ptr=(Luna< sgt::vec4h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4h::operator+ function");
		}
		const sgt::vec4h & v=*v_ptr;

		sgt::vec4h* self=(Luna< sgt::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec4h sgt::vec4h::operator+(const sgt::vec4h &) const. Got : '%s'\n%s",typeid(Luna< sgt::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec4h stack_lret = self->operator+(v);
		sgt::vec4h* lret = new sgt::vec4h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec4h >::push(L,lret,true);

		return 1;
	}

	// sgt::vec4h sgt::vec4h::operator-(const sgt::vec4h & v) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec4h sgt::vec4h::operator-(const sgt::vec4h & v) const function, expected prototype:\nsgt::vec4h sgt::vec4h::operator-(const sgt::vec4h & v) const\nClass arguments details:\narg 1 ID = 76239335\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec4h* v_ptr=(Luna< sgt::vec4h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4h::operator- function");
		}
		const sgt::vec4h & v=*v_ptr;

		sgt::vec4h* self=(Luna< sgt::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec4h sgt::vec4h::operator-(const sgt::vec4h &) const. Got : '%s'\n%s",typeid(Luna< sgt::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec4h stack_lret = self->operator-(v);
		sgt::vec4h* lret = new sgt::vec4h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec4h >::push(L,lret,true);

		return 1;
	}

	// sgt::vec4h sgt::vec4h::operator*(const sgt::vec4h & v) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec4h sgt::vec4h::operator*(const sgt::vec4h & v) const function, expected prototype:\nsgt::vec4h sgt::vec4h::operator*(const sgt::vec4h & v) const\nClass arguments details:\narg 1 ID = 76239335\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec4h* v_ptr=(Luna< sgt::vec4h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4h::operator* function");
		}
		const sgt::vec4h & v=*v_ptr;

		sgt::vec4h* self=(Luna< sgt::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec4h sgt::vec4h::operator*(const sgt::vec4h &) const. Got : '%s'\n%s",typeid(Luna< sgt::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec4h stack_lret = self->operator*(v);
		sgt::vec4h* lret = new sgt::vec4h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec4h >::push(L,lret,true);

		return 1;
	}

	// sgt::vec4h sgt::vec4h::operator*(const sgt::half scalar) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec4h sgt::vec4h::operator*(const sgt::half scalar) const function, expected prototype:\nsgt::vec4h sgt::vec4h::operator*(const sgt::half scalar) const\nClass arguments details:\narg 1 ID = 31071002\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::half* scalar_ptr=(Luna< sgt::half >::check(L,2));
		if( !scalar_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scalar in sgt::vec4h::operator* function");
		}
		const sgt::half scalar=*scalar_ptr;

		sgt::vec4h* self=(Luna< sgt::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec4h sgt::vec4h::operator*(const sgt::half) const. Got : '%s'\n%s",typeid(Luna< sgt::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec4h stack_lret = self->operator*(scalar);
		sgt::vec4h* lret = new sgt::vec4h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec4h >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::vec4h::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const sgt::vec4h &)\n  operator*(const sgt::half)\n");
		return 0;
	}

	// sgt::vec4h sgt::vec4h::operator/(const sgt::vec4h & v) const
	static int _bind___div_overload_1(lua_State *L) {
		if (!_lg_typecheck___div_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec4h sgt::vec4h::operator/(const sgt::vec4h & v) const function, expected prototype:\nsgt::vec4h sgt::vec4h::operator/(const sgt::vec4h & v) const\nClass arguments details:\narg 1 ID = 76239335\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec4h* v_ptr=(Luna< sgt::vec4h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4h::operator/ function");
		}
		const sgt::vec4h & v=*v_ptr;

		sgt::vec4h* self=(Luna< sgt::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec4h sgt::vec4h::operator/(const sgt::vec4h &) const. Got : '%s'\n%s",typeid(Luna< sgt::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec4h stack_lret = self->operator/(v);
		sgt::vec4h* lret = new sgt::vec4h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec4h >::push(L,lret,true);

		return 1;
	}

	// sgt::vec4h sgt::vec4h::operator/(const sgt::half scalar) const
	static int _bind___div_overload_2(lua_State *L) {
		if (!_lg_typecheck___div_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec4h sgt::vec4h::operator/(const sgt::half scalar) const function, expected prototype:\nsgt::vec4h sgt::vec4h::operator/(const sgt::half scalar) const\nClass arguments details:\narg 1 ID = 31071002\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::half* scalar_ptr=(Luna< sgt::half >::check(L,2));
		if( !scalar_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scalar in sgt::vec4h::operator/ function");
		}
		const sgt::half scalar=*scalar_ptr;

		sgt::vec4h* self=(Luna< sgt::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec4h sgt::vec4h::operator/(const sgt::half) const. Got : '%s'\n%s",typeid(Luna< sgt::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec4h stack_lret = self->operator/(scalar);
		sgt::vec4h* lret = new sgt::vec4h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec4h >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::vec4h::operator/
	static int _bind___div(lua_State *L) {
		if (_lg_typecheck___div_overload_1(L)) return _bind___div_overload_1(L);
		if (_lg_typecheck___div_overload_2(L)) return _bind___div_overload_2(L);

		luaL_error(L, "error in function operator/, cannot match any of the overloads for function operator/:\n  operator/(const sgt::vec4h &)\n  operator/(const sgt::half)\n");
		return 0;
	}

	// sgt::vec4h sgt::vec4h::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec4h sgt::vec4h::operator-() const function, expected prototype:\nsgt::vec4h sgt::vec4h::operator-() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::vec4h* self=(Luna< sgt::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec4h sgt::vec4h::operator-() const. Got : '%s'\n%s",typeid(Luna< sgt::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec4h stack_lret = self->operator-();
		sgt::vec4h* lret = new sgt::vec4h(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec4h >::push(L,lret,true);

		return 1;
	}

	// bool sgt::vec4h::operator<(const sgt::vec4h & v) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::vec4h::operator<(const sgt::vec4h & v) const function, expected prototype:\nbool sgt::vec4h::operator<(const sgt::vec4h & v) const\nClass arguments details:\narg 1 ID = 76239335\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec4h* v_ptr=(Luna< sgt::vec4h >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4h::operator< function");
		}
		const sgt::vec4h & v=*v_ptr;

		sgt::vec4h* self=(Luna< sgt::vec4h >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::vec4h::operator<(const sgt::vec4h &) const. Got : '%s'\n%s",typeid(Luna< sgt::vec4h >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

sgt::vec4h* LunaTraits< sgt::vec4h >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_vec4h::_bind_ctor(L);
}

void LunaTraits< sgt::vec4h >::_bind_dtor(sgt::vec4h* obj) {
	delete obj;
}

const char LunaTraits< sgt::vec4h >::className[] = "vec4h";
const char LunaTraits< sgt::vec4h >::fullName[] = "sgt::vec4h";
const char LunaTraits< sgt::vec4h >::moduleName[] = "sgt";
const char* LunaTraits< sgt::vec4h >::parents[] = {0};
const int LunaTraits< sgt::vec4h >::hash = 76239335;
const int LunaTraits< sgt::vec4h >::uniqueIDs[] = {76239335,0};

luna_RegType LunaTraits< sgt::vec4h >::methods[] = {
	{"dot", &luna_wrapper_sgt_vec4h::_bind_dot},
	{"xyzw", &luna_wrapper_sgt_vec4h::_bind_xyzw},
	{"xyz", &luna_wrapper_sgt_vec4h::_bind_xyz},
	{"xy", &luna_wrapper_sgt_vec4h::_bind_xy},
	{"getX", &luna_wrapper_sgt_vec4h::_bind_getX},
	{"getY", &luna_wrapper_sgt_vec4h::_bind_getY},
	{"getZ", &luna_wrapper_sgt_vec4h::_bind_getZ},
	{"getW", &luna_wrapper_sgt_vec4h::_bind_getW},
	{"setX", &luna_wrapper_sgt_vec4h::_bind_setX},
	{"setY", &luna_wrapper_sgt_vec4h::_bind_setY},
	{"setZ", &luna_wrapper_sgt_vec4h::_bind_setZ},
	{"setW", &luna_wrapper_sgt_vec4h::_bind_setW},
	{"op_index", &luna_wrapper_sgt_vec4h::_bind_op_index},
	{"__eq", &luna_wrapper_sgt_vec4h::_bind___eq},
	{"op_neq", &luna_wrapper_sgt_vec4h::_bind_op_neq},
	{"__add", &luna_wrapper_sgt_vec4h::_bind___add},
	{"__sub", &luna_wrapper_sgt_vec4h::_bind___sub},
	{"__mul", &luna_wrapper_sgt_vec4h::_bind___mul},
	{"__div", &luna_wrapper_sgt_vec4h::_bind___div},
	{"__unm", &luna_wrapper_sgt_vec4h::_bind___unm},
	{"__lt", &luna_wrapper_sgt_vec4h::_bind___lt},
	{"dynCast", &luna_wrapper_sgt_vec4h::_bind_dynCast},
	{"fromVoid", &luna_wrapper_sgt_vec4h::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_vec4h::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::vec4h >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::vec4h >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

class luna_wrapper_sgt_vec3d {
public:
	typedef Luna< sgt::vec3d > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgt::vec3d* self= (sgt::vec3d*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::vec3d >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76239300) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< sgt::vec3d >::check(L,1));
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

		sgt::vec3d* self=(Luna< sgt::vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::vec3d");
		
		return luna_dynamicCast(L,converters,"sgt::vec3d",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76239300) ) return false;
		if( (!(Luna< sgt::vec3d >::check(L,1))) ) return false;
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

	inline static bool _lg_typecheck_distanceTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239300) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_squaredDistanceTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239300) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_dot(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239300) ) return false;
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

	inline static bool _lg_typecheck_cross(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239300) ) return false;
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

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setZ(lua_State *L) {
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

		if( !Luna<void>::has_uniqueid(L,2,76239300) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239300) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239300) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239300) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239300) ) return false;
		if( (!(Luna< sgt::vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck___div_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239300) ) return false;
		if( (!(Luna< sgt::vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___div_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck___unm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		return true;
	}

	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239300) ) return false;
		return true;
	}


	// Constructor binds:
	// sgt::vec3d::vec3d()
	static sgt::vec3d* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec3d::vec3d() function, expected prototype:\nsgt::vec3d::vec3d()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new sgt::vec3d();
	}

	// sgt::vec3d::vec3d(double xi, double yi, double zi)
	static sgt::vec3d* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec3d::vec3d(double xi, double yi, double zi) function, expected prototype:\nsgt::vec3d::vec3d(double xi, double yi, double zi)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double xi=(double)lua_tonumber(L,1);
		double yi=(double)lua_tonumber(L,2);
		double zi=(double)lua_tonumber(L,3);

		return new sgt::vec3d(xi, yi, zi);
	}

	// sgt::vec3d::vec3d(const sgt::vec3d & v)
	static sgt::vec3d* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec3d::vec3d(const sgt::vec3d & v) function, expected prototype:\nsgt::vec3d::vec3d(const sgt::vec3d & v)\nClass arguments details:\narg 1 ID = 76239300\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec3d* v_ptr=(Luna< sgt::vec3d >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3d::vec3d function");
		}
		const sgt::vec3d & v=*v_ptr;

		return new sgt::vec3d(v);
	}

	// Overload binder for sgt::vec3d::vec3d
	static sgt::vec3d* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function vec3d, cannot match any of the overloads for function vec3d:\n  vec3d()\n  vec3d(double, double, double)\n  vec3d(const sgt::vec3d &)\n");
		return NULL;
	}


	// Function binds:
	// double sgt::vec3d::length() const
	static int _bind_length(lua_State *L) {
		if (!_lg_typecheck_length(L)) {
			luaL_error(L, "luna typecheck failed in double sgt::vec3d::length() const function, expected prototype:\ndouble sgt::vec3d::length() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::vec3d* self=(Luna< sgt::vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double sgt::vec3d::length() const. Got : '%s'\n%s",typeid(Luna< sgt::vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->length();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double sgt::vec3d::squaredLength() const
	static int _bind_squaredLength(lua_State *L) {
		if (!_lg_typecheck_squaredLength(L)) {
			luaL_error(L, "luna typecheck failed in double sgt::vec3d::squaredLength() const function, expected prototype:\ndouble sgt::vec3d::squaredLength() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::vec3d* self=(Luna< sgt::vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double sgt::vec3d::squaredLength() const. Got : '%s'\n%s",typeid(Luna< sgt::vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->squaredLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double sgt::vec3d::distanceTo(const sgt::vec3d & v) const
	static int _bind_distanceTo(lua_State *L) {
		if (!_lg_typecheck_distanceTo(L)) {
			luaL_error(L, "luna typecheck failed in double sgt::vec3d::distanceTo(const sgt::vec3d & v) const function, expected prototype:\ndouble sgt::vec3d::distanceTo(const sgt::vec3d & v) const\nClass arguments details:\narg 1 ID = 76239300\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec3d* v_ptr=(Luna< sgt::vec3d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3d::distanceTo function");
		}
		const sgt::vec3d & v=*v_ptr;

		sgt::vec3d* self=(Luna< sgt::vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double sgt::vec3d::distanceTo(const sgt::vec3d &) const. Got : '%s'\n%s",typeid(Luna< sgt::vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->distanceTo(v);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double sgt::vec3d::squaredDistanceTo(const sgt::vec3d & v) const
	static int _bind_squaredDistanceTo(lua_State *L) {
		if (!_lg_typecheck_squaredDistanceTo(L)) {
			luaL_error(L, "luna typecheck failed in double sgt::vec3d::squaredDistanceTo(const sgt::vec3d & v) const function, expected prototype:\ndouble sgt::vec3d::squaredDistanceTo(const sgt::vec3d & v) const\nClass arguments details:\narg 1 ID = 76239300\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec3d* v_ptr=(Luna< sgt::vec3d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3d::squaredDistanceTo function");
		}
		const sgt::vec3d & v=*v_ptr;

		sgt::vec3d* self=(Luna< sgt::vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double sgt::vec3d::squaredDistanceTo(const sgt::vec3d &) const. Got : '%s'\n%s",typeid(Luna< sgt::vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->squaredDistanceTo(v);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double sgt::vec3d::dot(const sgt::vec3d & v) const
	static int _bind_dot(lua_State *L) {
		if (!_lg_typecheck_dot(L)) {
			luaL_error(L, "luna typecheck failed in double sgt::vec3d::dot(const sgt::vec3d & v) const function, expected prototype:\ndouble sgt::vec3d::dot(const sgt::vec3d & v) const\nClass arguments details:\narg 1 ID = 76239300\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec3d* v_ptr=(Luna< sgt::vec3d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3d::dot function");
		}
		const sgt::vec3d & v=*v_ptr;

		sgt::vec3d* self=(Luna< sgt::vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double sgt::vec3d::dot(const sgt::vec3d &) const. Got : '%s'\n%s",typeid(Luna< sgt::vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->dot(v);
		lua_pushnumber(L,lret);

		return 1;
	}

	// sgt::vec3d sgt::vec3d::normalize() const
	static int _bind_normalize_overload_1(lua_State *L) {
		if (!_lg_typecheck_normalize_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec3d sgt::vec3d::normalize() const function, expected prototype:\nsgt::vec3d sgt::vec3d::normalize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::vec3d* self=(Luna< sgt::vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec3d sgt::vec3d::normalize() const. Got : '%s'\n%s",typeid(Luna< sgt::vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec3d stack_lret = self->normalize();
		sgt::vec3d* lret = new sgt::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3d >::push(L,lret,true);

		return 1;
	}

	// sgt::vec3d sgt::vec3d::normalize(double l) const
	static int _bind_normalize_overload_2(lua_State *L) {
		if (!_lg_typecheck_normalize_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec3d sgt::vec3d::normalize(double l) const function, expected prototype:\nsgt::vec3d sgt::vec3d::normalize(double l) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double l=(double)lua_tonumber(L,2);

		sgt::vec3d* self=(Luna< sgt::vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec3d sgt::vec3d::normalize(double) const. Got : '%s'\n%s",typeid(Luna< sgt::vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec3d stack_lret = self->normalize(l);
		sgt::vec3d* lret = new sgt::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3d >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::vec3d::normalize
	static int _bind_normalize(lua_State *L) {
		if (_lg_typecheck_normalize_overload_1(L)) return _bind_normalize_overload_1(L);
		if (_lg_typecheck_normalize_overload_2(L)) return _bind_normalize_overload_2(L);

		luaL_error(L, "error in function normalize, cannot match any of the overloads for function normalize:\n  normalize()\n  normalize(double)\n");
		return 0;
	}

	// sgt::vec3d sgt::vec3d::cross(const sgt::vec3d & v) const
	static int _bind_cross(lua_State *L) {
		if (!_lg_typecheck_cross(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec3d sgt::vec3d::cross(const sgt::vec3d & v) const function, expected prototype:\nsgt::vec3d sgt::vec3d::cross(const sgt::vec3d & v) const\nClass arguments details:\narg 1 ID = 76239300\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec3d* v_ptr=(Luna< sgt::vec3d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3d::cross function");
		}
		const sgt::vec3d & v=*v_ptr;

		sgt::vec3d* self=(Luna< sgt::vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec3d sgt::vec3d::cross(const sgt::vec3d &) const. Got : '%s'\n%s",typeid(Luna< sgt::vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec3d stack_lret = self->cross(v);
		sgt::vec3d* lret = new sgt::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3d >::push(L,lret,true);

		return 1;
	}

	// sgt::vec2d sgt::vec3d::xy() const
	static int _bind_xy(lua_State *L) {
		if (!_lg_typecheck_xy(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec2d sgt::vec3d::xy() const function, expected prototype:\nsgt::vec2d sgt::vec3d::xy() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::vec3d* self=(Luna< sgt::vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec2d sgt::vec3d::xy() const. Got : '%s'\n%s",typeid(Luna< sgt::vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec2d stack_lret = self->xy();
		sgt::vec2d* lret = new sgt::vec2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2d >::push(L,lret,true);

		return 1;
	}

	// double sgt::vec3d::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luaL_error(L, "luna typecheck failed in double sgt::vec3d::x() function, expected prototype:\ndouble sgt::vec3d::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::vec3d* self=(Luna< sgt::vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double sgt::vec3d::x(). Got : '%s'\n%s",typeid(Luna< sgt::vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double sgt::vec3d::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luaL_error(L, "luna typecheck failed in double sgt::vec3d::y() function, expected prototype:\ndouble sgt::vec3d::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::vec3d* self=(Luna< sgt::vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double sgt::vec3d::y(). Got : '%s'\n%s",typeid(Luna< sgt::vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double sgt::vec3d::z()
	static int _bind_getZ(lua_State *L) {
		if (!_lg_typecheck_getZ(L)) {
			luaL_error(L, "luna typecheck failed in double sgt::vec3d::z() function, expected prototype:\ndouble sgt::vec3d::z()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::vec3d* self=(Luna< sgt::vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double sgt::vec3d::z(). Got : '%s'\n%s",typeid(Luna< sgt::vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->z;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::vec3d::x(double value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::vec3d::x(double value) function, expected prototype:\nvoid sgt::vec3d::x(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		sgt::vec3d* self=(Luna< sgt::vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::vec3d::x(double). Got : '%s'\n%s",typeid(Luna< sgt::vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->x = value;

		return 0;
	}

	// void sgt::vec3d::y(double value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::vec3d::y(double value) function, expected prototype:\nvoid sgt::vec3d::y(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		sgt::vec3d* self=(Luna< sgt::vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::vec3d::y(double). Got : '%s'\n%s",typeid(Luna< sgt::vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->y = value;

		return 0;
	}

	// void sgt::vec3d::z(double value)
	static int _bind_setZ(lua_State *L) {
		if (!_lg_typecheck_setZ(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::vec3d::z(double value) function, expected prototype:\nvoid sgt::vec3d::z(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		sgt::vec3d* self=(Luna< sgt::vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::vec3d::z(double). Got : '%s'\n%s",typeid(Luna< sgt::vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->z = value;

		return 0;
	}


	// Operator binds:
	// double & sgt::vec3d::operator[](const int i)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luaL_error(L, "luna typecheck failed in double & sgt::vec3d::operator[](const int i) function, expected prototype:\ndouble & sgt::vec3d::operator[](const int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const int i=(const int)lua_tointeger(L,2);

		sgt::vec3d* self=(Luna< sgt::vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double & sgt::vec3d::operator[](const int). Got : '%s'\n%s",typeid(Luna< sgt::vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double & lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool sgt::vec3d::operator==(const sgt::vec3d & v) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::vec3d::operator==(const sgt::vec3d & v) const function, expected prototype:\nbool sgt::vec3d::operator==(const sgt::vec3d & v) const\nClass arguments details:\narg 1 ID = 76239300\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec3d* v_ptr=(Luna< sgt::vec3d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3d::operator== function");
		}
		const sgt::vec3d & v=*v_ptr;

		sgt::vec3d* self=(Luna< sgt::vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::vec3d::operator==(const sgt::vec3d &) const. Got : '%s'\n%s",typeid(Luna< sgt::vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool sgt::vec3d::operator!=(const sgt::vec3d & v) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::vec3d::operator!=(const sgt::vec3d & v) const function, expected prototype:\nbool sgt::vec3d::operator!=(const sgt::vec3d & v) const\nClass arguments details:\narg 1 ID = 76239300\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec3d* v_ptr=(Luna< sgt::vec3d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3d::operator!= function");
		}
		const sgt::vec3d & v=*v_ptr;

		sgt::vec3d* self=(Luna< sgt::vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::vec3d::operator!=(const sgt::vec3d &) const. Got : '%s'\n%s",typeid(Luna< sgt::vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// sgt::vec3d sgt::vec3d::operator+(const sgt::vec3d & v) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec3d sgt::vec3d::operator+(const sgt::vec3d & v) const function, expected prototype:\nsgt::vec3d sgt::vec3d::operator+(const sgt::vec3d & v) const\nClass arguments details:\narg 1 ID = 76239300\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec3d* v_ptr=(Luna< sgt::vec3d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3d::operator+ function");
		}
		const sgt::vec3d & v=*v_ptr;

		sgt::vec3d* self=(Luna< sgt::vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec3d sgt::vec3d::operator+(const sgt::vec3d &) const. Got : '%s'\n%s",typeid(Luna< sgt::vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec3d stack_lret = self->operator+(v);
		sgt::vec3d* lret = new sgt::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3d >::push(L,lret,true);

		return 1;
	}

	// sgt::vec3d sgt::vec3d::operator-(const sgt::vec3d & v) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec3d sgt::vec3d::operator-(const sgt::vec3d & v) const function, expected prototype:\nsgt::vec3d sgt::vec3d::operator-(const sgt::vec3d & v) const\nClass arguments details:\narg 1 ID = 76239300\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec3d* v_ptr=(Luna< sgt::vec3d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3d::operator- function");
		}
		const sgt::vec3d & v=*v_ptr;

		sgt::vec3d* self=(Luna< sgt::vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec3d sgt::vec3d::operator-(const sgt::vec3d &) const. Got : '%s'\n%s",typeid(Luna< sgt::vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec3d stack_lret = self->operator-(v);
		sgt::vec3d* lret = new sgt::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3d >::push(L,lret,true);

		return 1;
	}

	// sgt::vec3d sgt::vec3d::operator*(const sgt::vec3d & v) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec3d sgt::vec3d::operator*(const sgt::vec3d & v) const function, expected prototype:\nsgt::vec3d sgt::vec3d::operator*(const sgt::vec3d & v) const\nClass arguments details:\narg 1 ID = 76239300\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec3d* v_ptr=(Luna< sgt::vec3d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3d::operator* function");
		}
		const sgt::vec3d & v=*v_ptr;

		sgt::vec3d* self=(Luna< sgt::vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec3d sgt::vec3d::operator*(const sgt::vec3d &) const. Got : '%s'\n%s",typeid(Luna< sgt::vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec3d stack_lret = self->operator*(v);
		sgt::vec3d* lret = new sgt::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3d >::push(L,lret,true);

		return 1;
	}

	// sgt::vec3d sgt::vec3d::operator*(const double scalar) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec3d sgt::vec3d::operator*(const double scalar) const function, expected prototype:\nsgt::vec3d sgt::vec3d::operator*(const double scalar) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const double scalar=(const double)lua_tonumber(L,2);

		sgt::vec3d* self=(Luna< sgt::vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec3d sgt::vec3d::operator*(const double) const. Got : '%s'\n%s",typeid(Luna< sgt::vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec3d stack_lret = self->operator*(scalar);
		sgt::vec3d* lret = new sgt::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3d >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::vec3d::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const sgt::vec3d &)\n  operator*(const double)\n");
		return 0;
	}

	// sgt::vec3d sgt::vec3d::operator/(const sgt::vec3d & v) const
	static int _bind___div_overload_1(lua_State *L) {
		if (!_lg_typecheck___div_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec3d sgt::vec3d::operator/(const sgt::vec3d & v) const function, expected prototype:\nsgt::vec3d sgt::vec3d::operator/(const sgt::vec3d & v) const\nClass arguments details:\narg 1 ID = 76239300\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec3d* v_ptr=(Luna< sgt::vec3d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3d::operator/ function");
		}
		const sgt::vec3d & v=*v_ptr;

		sgt::vec3d* self=(Luna< sgt::vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec3d sgt::vec3d::operator/(const sgt::vec3d &) const. Got : '%s'\n%s",typeid(Luna< sgt::vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec3d stack_lret = self->operator/(v);
		sgt::vec3d* lret = new sgt::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3d >::push(L,lret,true);

		return 1;
	}

	// sgt::vec3d sgt::vec3d::operator/(const double scalar) const
	static int _bind___div_overload_2(lua_State *L) {
		if (!_lg_typecheck___div_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec3d sgt::vec3d::operator/(const double scalar) const function, expected prototype:\nsgt::vec3d sgt::vec3d::operator/(const double scalar) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const double scalar=(const double)lua_tonumber(L,2);

		sgt::vec3d* self=(Luna< sgt::vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec3d sgt::vec3d::operator/(const double) const. Got : '%s'\n%s",typeid(Luna< sgt::vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec3d stack_lret = self->operator/(scalar);
		sgt::vec3d* lret = new sgt::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3d >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::vec3d::operator/
	static int _bind___div(lua_State *L) {
		if (_lg_typecheck___div_overload_1(L)) return _bind___div_overload_1(L);
		if (_lg_typecheck___div_overload_2(L)) return _bind___div_overload_2(L);

		luaL_error(L, "error in function operator/, cannot match any of the overloads for function operator/:\n  operator/(const sgt::vec3d &)\n  operator/(const double)\n");
		return 0;
	}

	// sgt::vec3d sgt::vec3d::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec3d sgt::vec3d::operator-() const function, expected prototype:\nsgt::vec3d sgt::vec3d::operator-() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::vec3d* self=(Luna< sgt::vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec3d sgt::vec3d::operator-() const. Got : '%s'\n%s",typeid(Luna< sgt::vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec3d stack_lret = self->operator-();
		sgt::vec3d* lret = new sgt::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3d >::push(L,lret,true);

		return 1;
	}

	// bool sgt::vec3d::operator<(const sgt::vec3d & v) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::vec3d::operator<(const sgt::vec3d & v) const function, expected prototype:\nbool sgt::vec3d::operator<(const sgt::vec3d & v) const\nClass arguments details:\narg 1 ID = 76239300\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec3d* v_ptr=(Luna< sgt::vec3d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3d::operator< function");
		}
		const sgt::vec3d & v=*v_ptr;

		sgt::vec3d* self=(Luna< sgt::vec3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::vec3d::operator<(const sgt::vec3d &) const. Got : '%s'\n%s",typeid(Luna< sgt::vec3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

sgt::vec3d* LunaTraits< sgt::vec3d >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_vec3d::_bind_ctor(L);
}

void LunaTraits< sgt::vec3d >::_bind_dtor(sgt::vec3d* obj) {
	delete obj;
}

const char LunaTraits< sgt::vec3d >::className[] = "vec3d";
const char LunaTraits< sgt::vec3d >::fullName[] = "sgt::vec3d";
const char LunaTraits< sgt::vec3d >::moduleName[] = "sgt";
const char* LunaTraits< sgt::vec3d >::parents[] = {0};
const int LunaTraits< sgt::vec3d >::hash = 76239300;
const int LunaTraits< sgt::vec3d >::uniqueIDs[] = {76239300,0};

luna_RegType LunaTraits< sgt::vec3d >::methods[] = {
	{"length", &luna_wrapper_sgt_vec3d::_bind_length},
	{"squaredLength", &luna_wrapper_sgt_vec3d::_bind_squaredLength},
	{"distanceTo", &luna_wrapper_sgt_vec3d::_bind_distanceTo},
	{"squaredDistanceTo", &luna_wrapper_sgt_vec3d::_bind_squaredDistanceTo},
	{"dot", &luna_wrapper_sgt_vec3d::_bind_dot},
	{"normalize", &luna_wrapper_sgt_vec3d::_bind_normalize},
	{"cross", &luna_wrapper_sgt_vec3d::_bind_cross},
	{"xy", &luna_wrapper_sgt_vec3d::_bind_xy},
	{"getX", &luna_wrapper_sgt_vec3d::_bind_getX},
	{"getY", &luna_wrapper_sgt_vec3d::_bind_getY},
	{"getZ", &luna_wrapper_sgt_vec3d::_bind_getZ},
	{"setX", &luna_wrapper_sgt_vec3d::_bind_setX},
	{"setY", &luna_wrapper_sgt_vec3d::_bind_setY},
	{"setZ", &luna_wrapper_sgt_vec3d::_bind_setZ},
	{"op_index", &luna_wrapper_sgt_vec3d::_bind_op_index},
	{"__eq", &luna_wrapper_sgt_vec3d::_bind___eq},
	{"op_neq", &luna_wrapper_sgt_vec3d::_bind_op_neq},
	{"__add", &luna_wrapper_sgt_vec3d::_bind___add},
	{"__sub", &luna_wrapper_sgt_vec3d::_bind___sub},
	{"__mul", &luna_wrapper_sgt_vec3d::_bind___mul},
	{"__div", &luna_wrapper_sgt_vec3d::_bind___div},
	{"__unm", &luna_wrapper_sgt_vec3d::_bind___unm},
	{"__lt", &luna_wrapper_sgt_vec3d::_bind___lt},
	{"dynCast", &luna_wrapper_sgt_vec3d::_bind_dynCast},
	{"fromVoid", &luna_wrapper_sgt_vec3d::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_vec3d::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::vec3d >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::vec3d >::enumValues[] = {
	{0,0}
};



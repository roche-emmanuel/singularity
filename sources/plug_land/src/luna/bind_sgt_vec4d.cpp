#include <plug_common.h>

class luna_wrapper_sgt_vec4d {
public:
	typedef Luna< sgt::vec4d > luna_t;

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

		sgt::vec4d* self= (sgt::vec4d*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::vec4d >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76239331) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< sgt::vec4d >::check(L,1));
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

		sgt::vec4d* self=(Luna< sgt::vec4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::vec4d");
		
		return luna_dynamicCast(L,converters,"sgt::vec4d",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76239331) ) return false;
		if( (!(Luna< sgt::vec4d >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76239300) ) return false;
		if( (!(Luna< sgt::vec3d >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76239300) ) return false;
		if( (!(Luna< sgt::vec3d >::check(L,1))) ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_dot_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239331) ) return false;
		if( (!(Luna< sgt::vec4d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_dot_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239300) ) return false;
		if( (!(Luna< sgt::vec3d >::check(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setW(lua_State *L) {
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

		if( !Luna<void>::has_uniqueid(L,2,76239331) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239331) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239331) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239331) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239331) ) return false;
		if( (!(Luna< sgt::vec4d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck___div_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239331) ) return false;
		if( (!(Luna< sgt::vec4d >::check(L,2))) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,76239331) ) return false;
		return true;
	}


	// Constructor binds:
	// sgt::vec4d::vec4d()
	static sgt::vec4d* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec4d::vec4d() function, expected prototype:\nsgt::vec4d::vec4d()\nClass arguments details:\n");
		}


		return new sgt::vec4d();
	}

	// sgt::vec4d::vec4d(double xi, double yi, double zi, double wi)
	static sgt::vec4d* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec4d::vec4d(double xi, double yi, double zi, double wi) function, expected prototype:\nsgt::vec4d::vec4d(double xi, double yi, double zi, double wi)\nClass arguments details:\n");
		}

		double xi=(double)lua_tonumber(L,1);
		double yi=(double)lua_tonumber(L,2);
		double zi=(double)lua_tonumber(L,3);
		double wi=(double)lua_tonumber(L,4);

		return new sgt::vec4d(xi, yi, zi, wi);
	}

	// sgt::vec4d::vec4d(const sgt::vec4d & v)
	static sgt::vec4d* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec4d::vec4d(const sgt::vec4d & v) function, expected prototype:\nsgt::vec4d::vec4d(const sgt::vec4d & v)\nClass arguments details:\narg 1 ID = 76239331\n");
		}

		const sgt::vec4d* v_ptr=(Luna< sgt::vec4d >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4d::vec4d function");
		}
		const sgt::vec4d & v=*v_ptr;

		return new sgt::vec4d(v);
	}

	// sgt::vec4d::vec4d(const sgt::vec3d & v)
	static sgt::vec4d* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec4d::vec4d(const sgt::vec3d & v) function, expected prototype:\nsgt::vec4d::vec4d(const sgt::vec3d & v)\nClass arguments details:\narg 1 ID = 76239300\n");
		}

		const sgt::vec3d* v_ptr=(Luna< sgt::vec3d >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4d::vec4d function");
		}
		const sgt::vec3d & v=*v_ptr;

		return new sgt::vec4d(v);
	}

	// sgt::vec4d::vec4d(const sgt::vec3d & v, double wi)
	static sgt::vec4d* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec4d::vec4d(const sgt::vec3d & v, double wi) function, expected prototype:\nsgt::vec4d::vec4d(const sgt::vec3d & v, double wi)\nClass arguments details:\narg 1 ID = 76239300\n");
		}

		const sgt::vec3d* v_ptr=(Luna< sgt::vec3d >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4d::vec4d function");
		}
		const sgt::vec3d & v=*v_ptr;
		double wi=(double)lua_tonumber(L,2);

		return new sgt::vec4d(v, wi);
	}

	// Overload binder for sgt::vec4d::vec4d
	static sgt::vec4d* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);

		luaL_error(L, "error in function vec4d, cannot match any of the overloads for function vec4d:\n  vec4d()\n  vec4d(double, double, double, double)\n  vec4d(const sgt::vec4d &)\n  vec4d(const sgt::vec3d &)\n  vec4d(const sgt::vec3d &, double)\n");
		return NULL;
	}


	// Function binds:
	// double sgt::vec4d::dot(const sgt::vec4d & v) const
	static int _bind_dot_overload_1(lua_State *L) {
		if (!_lg_typecheck_dot_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double sgt::vec4d::dot(const sgt::vec4d & v) const function, expected prototype:\ndouble sgt::vec4d::dot(const sgt::vec4d & v) const\nClass arguments details:\narg 1 ID = 76239331\n");
		}

		const sgt::vec4d* v_ptr=(Luna< sgt::vec4d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4d::dot function");
		}
		const sgt::vec4d & v=*v_ptr;

		sgt::vec4d* self=(Luna< sgt::vec4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double sgt::vec4d::dot(const sgt::vec4d &) const. Got : '%s'",typeid(Luna< sgt::vec4d >::check(L,1)).name());
		}
		double lret = self->dot(v);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double sgt::vec4d::dot(const sgt::vec3d & v) const
	static int _bind_dot_overload_2(lua_State *L) {
		if (!_lg_typecheck_dot_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double sgt::vec4d::dot(const sgt::vec3d & v) const function, expected prototype:\ndouble sgt::vec4d::dot(const sgt::vec3d & v) const\nClass arguments details:\narg 1 ID = 76239300\n");
		}

		const sgt::vec3d* v_ptr=(Luna< sgt::vec3d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4d::dot function");
		}
		const sgt::vec3d & v=*v_ptr;

		sgt::vec4d* self=(Luna< sgt::vec4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double sgt::vec4d::dot(const sgt::vec3d &) const. Got : '%s'",typeid(Luna< sgt::vec4d >::check(L,1)).name());
		}
		double lret = self->dot(v);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for sgt::vec4d::dot
	static int _bind_dot(lua_State *L) {
		if (_lg_typecheck_dot_overload_1(L)) return _bind_dot_overload_1(L);
		if (_lg_typecheck_dot_overload_2(L)) return _bind_dot_overload_2(L);

		luaL_error(L, "error in function dot, cannot match any of the overloads for function dot:\n  dot(const sgt::vec4d &)\n  dot(const sgt::vec3d &)\n");
		return 0;
	}

	// sgt::vec3d sgt::vec4d::xyzw() const
	static int _bind_xyzw(lua_State *L) {
		if (!_lg_typecheck_xyzw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3d sgt::vec4d::xyzw() const function, expected prototype:\nsgt::vec3d sgt::vec4d::xyzw() const\nClass arguments details:\n");
		}


		sgt::vec4d* self=(Luna< sgt::vec4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec3d sgt::vec4d::xyzw() const. Got : '%s'",typeid(Luna< sgt::vec4d >::check(L,1)).name());
		}
		sgt::vec3d stack_lret = self->xyzw();
		sgt::vec3d* lret = new sgt::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3d >::push(L,lret,true);

		return 1;
	}

	// sgt::vec3d sgt::vec4d::xyz() const
	static int _bind_xyz(lua_State *L) {
		if (!_lg_typecheck_xyz(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3d sgt::vec4d::xyz() const function, expected prototype:\nsgt::vec3d sgt::vec4d::xyz() const\nClass arguments details:\n");
		}


		sgt::vec4d* self=(Luna< sgt::vec4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec3d sgt::vec4d::xyz() const. Got : '%s'",typeid(Luna< sgt::vec4d >::check(L,1)).name());
		}
		sgt::vec3d stack_lret = self->xyz();
		sgt::vec3d* lret = new sgt::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3d >::push(L,lret,true);

		return 1;
	}

	// sgt::vec2d sgt::vec4d::xy() const
	static int _bind_xy(lua_State *L) {
		if (!_lg_typecheck_xy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2d sgt::vec4d::xy() const function, expected prototype:\nsgt::vec2d sgt::vec4d::xy() const\nClass arguments details:\n");
		}


		sgt::vec4d* self=(Luna< sgt::vec4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2d sgt::vec4d::xy() const. Got : '%s'",typeid(Luna< sgt::vec4d >::check(L,1)).name());
		}
		sgt::vec2d stack_lret = self->xy();
		sgt::vec2d* lret = new sgt::vec2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2d >::push(L,lret,true);

		return 1;
	}

	// double sgt::vec4d::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double sgt::vec4d::x() function, expected prototype:\ndouble sgt::vec4d::x()\nClass arguments details:\n");
		}


		sgt::vec4d* self=(Luna< sgt::vec4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double sgt::vec4d::x(). Got : '%s'",typeid(Luna< sgt::vec4d >::check(L,1)).name());
		}
		double lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double sgt::vec4d::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double sgt::vec4d::y() function, expected prototype:\ndouble sgt::vec4d::y()\nClass arguments details:\n");
		}


		sgt::vec4d* self=(Luna< sgt::vec4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double sgt::vec4d::y(). Got : '%s'",typeid(Luna< sgt::vec4d >::check(L,1)).name());
		}
		double lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double sgt::vec4d::z()
	static int _bind_getZ(lua_State *L) {
		if (!_lg_typecheck_getZ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double sgt::vec4d::z() function, expected prototype:\ndouble sgt::vec4d::z()\nClass arguments details:\n");
		}


		sgt::vec4d* self=(Luna< sgt::vec4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double sgt::vec4d::z(). Got : '%s'",typeid(Luna< sgt::vec4d >::check(L,1)).name());
		}
		double lret = self->z;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double sgt::vec4d::w()
	static int _bind_getW(lua_State *L) {
		if (!_lg_typecheck_getW(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double sgt::vec4d::w() function, expected prototype:\ndouble sgt::vec4d::w()\nClass arguments details:\n");
		}


		sgt::vec4d* self=(Luna< sgt::vec4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double sgt::vec4d::w(). Got : '%s'",typeid(Luna< sgt::vec4d >::check(L,1)).name());
		}
		double lret = self->w;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::vec4d::x(double value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::vec4d::x(double value) function, expected prototype:\nvoid sgt::vec4d::x(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		sgt::vec4d* self=(Luna< sgt::vec4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::vec4d::x(double). Got : '%s'",typeid(Luna< sgt::vec4d >::check(L,1)).name());
		}
		self->x = value;

		return 0;
	}

	// void sgt::vec4d::y(double value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::vec4d::y(double value) function, expected prototype:\nvoid sgt::vec4d::y(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		sgt::vec4d* self=(Luna< sgt::vec4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::vec4d::y(double). Got : '%s'",typeid(Luna< sgt::vec4d >::check(L,1)).name());
		}
		self->y = value;

		return 0;
	}

	// void sgt::vec4d::z(double value)
	static int _bind_setZ(lua_State *L) {
		if (!_lg_typecheck_setZ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::vec4d::z(double value) function, expected prototype:\nvoid sgt::vec4d::z(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		sgt::vec4d* self=(Luna< sgt::vec4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::vec4d::z(double). Got : '%s'",typeid(Luna< sgt::vec4d >::check(L,1)).name());
		}
		self->z = value;

		return 0;
	}

	// void sgt::vec4d::w(double value)
	static int _bind_setW(lua_State *L) {
		if (!_lg_typecheck_setW(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::vec4d::w(double value) function, expected prototype:\nvoid sgt::vec4d::w(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		sgt::vec4d* self=(Luna< sgt::vec4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::vec4d::w(double). Got : '%s'",typeid(Luna< sgt::vec4d >::check(L,1)).name());
		}
		self->w = value;

		return 0;
	}


	// Operator binds:
	// double & sgt::vec4d::operator[](const int i)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double & sgt::vec4d::operator[](const int i) function, expected prototype:\ndouble & sgt::vec4d::operator[](const int i)\nClass arguments details:\n");
		}

		const int i=(const int)lua_tointeger(L,2);

		sgt::vec4d* self=(Luna< sgt::vec4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double & sgt::vec4d::operator[](const int). Got : '%s'",typeid(Luna< sgt::vec4d >::check(L,1)).name());
		}
		double & lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool sgt::vec4d::operator==(const sgt::vec4d & v) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::vec4d::operator==(const sgt::vec4d & v) const function, expected prototype:\nbool sgt::vec4d::operator==(const sgt::vec4d & v) const\nClass arguments details:\narg 1 ID = 76239331\n");
		}

		const sgt::vec4d* v_ptr=(Luna< sgt::vec4d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4d::operator== function");
		}
		const sgt::vec4d & v=*v_ptr;

		sgt::vec4d* self=(Luna< sgt::vec4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::vec4d::operator==(const sgt::vec4d &) const. Got : '%s'",typeid(Luna< sgt::vec4d >::check(L,1)).name());
		}
		bool lret = self->operator==(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool sgt::vec4d::operator!=(const sgt::vec4d & v) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::vec4d::operator!=(const sgt::vec4d & v) const function, expected prototype:\nbool sgt::vec4d::operator!=(const sgt::vec4d & v) const\nClass arguments details:\narg 1 ID = 76239331\n");
		}

		const sgt::vec4d* v_ptr=(Luna< sgt::vec4d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4d::operator!= function");
		}
		const sgt::vec4d & v=*v_ptr;

		sgt::vec4d* self=(Luna< sgt::vec4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::vec4d::operator!=(const sgt::vec4d &) const. Got : '%s'",typeid(Luna< sgt::vec4d >::check(L,1)).name());
		}
		bool lret = self->operator!=(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// sgt::vec4d sgt::vec4d::operator+(const sgt::vec4d & v) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec4d sgt::vec4d::operator+(const sgt::vec4d & v) const function, expected prototype:\nsgt::vec4d sgt::vec4d::operator+(const sgt::vec4d & v) const\nClass arguments details:\narg 1 ID = 76239331\n");
		}

		const sgt::vec4d* v_ptr=(Luna< sgt::vec4d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4d::operator+ function");
		}
		const sgt::vec4d & v=*v_ptr;

		sgt::vec4d* self=(Luna< sgt::vec4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec4d sgt::vec4d::operator+(const sgt::vec4d &) const. Got : '%s'",typeid(Luna< sgt::vec4d >::check(L,1)).name());
		}
		sgt::vec4d stack_lret = self->operator+(v);
		sgt::vec4d* lret = new sgt::vec4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec4d >::push(L,lret,true);

		return 1;
	}

	// sgt::vec4d sgt::vec4d::operator-(const sgt::vec4d & v) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec4d sgt::vec4d::operator-(const sgt::vec4d & v) const function, expected prototype:\nsgt::vec4d sgt::vec4d::operator-(const sgt::vec4d & v) const\nClass arguments details:\narg 1 ID = 76239331\n");
		}

		const sgt::vec4d* v_ptr=(Luna< sgt::vec4d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4d::operator- function");
		}
		const sgt::vec4d & v=*v_ptr;

		sgt::vec4d* self=(Luna< sgt::vec4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec4d sgt::vec4d::operator-(const sgt::vec4d &) const. Got : '%s'",typeid(Luna< sgt::vec4d >::check(L,1)).name());
		}
		sgt::vec4d stack_lret = self->operator-(v);
		sgt::vec4d* lret = new sgt::vec4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec4d >::push(L,lret,true);

		return 1;
	}

	// sgt::vec4d sgt::vec4d::operator*(const sgt::vec4d & v) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec4d sgt::vec4d::operator*(const sgt::vec4d & v) const function, expected prototype:\nsgt::vec4d sgt::vec4d::operator*(const sgt::vec4d & v) const\nClass arguments details:\narg 1 ID = 76239331\n");
		}

		const sgt::vec4d* v_ptr=(Luna< sgt::vec4d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4d::operator* function");
		}
		const sgt::vec4d & v=*v_ptr;

		sgt::vec4d* self=(Luna< sgt::vec4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec4d sgt::vec4d::operator*(const sgt::vec4d &) const. Got : '%s'",typeid(Luna< sgt::vec4d >::check(L,1)).name());
		}
		sgt::vec4d stack_lret = self->operator*(v);
		sgt::vec4d* lret = new sgt::vec4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec4d >::push(L,lret,true);

		return 1;
	}

	// sgt::vec4d sgt::vec4d::operator*(const double scalar) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec4d sgt::vec4d::operator*(const double scalar) const function, expected prototype:\nsgt::vec4d sgt::vec4d::operator*(const double scalar) const\nClass arguments details:\n");
		}

		const double scalar=(const double)lua_tonumber(L,2);

		sgt::vec4d* self=(Luna< sgt::vec4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec4d sgt::vec4d::operator*(const double) const. Got : '%s'",typeid(Luna< sgt::vec4d >::check(L,1)).name());
		}
		sgt::vec4d stack_lret = self->operator*(scalar);
		sgt::vec4d* lret = new sgt::vec4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec4d >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::vec4d::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const sgt::vec4d &)\n  operator*(const double)\n");
		return 0;
	}

	// sgt::vec4d sgt::vec4d::operator/(const sgt::vec4d & v) const
	static int _bind___div_overload_1(lua_State *L) {
		if (!_lg_typecheck___div_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec4d sgt::vec4d::operator/(const sgt::vec4d & v) const function, expected prototype:\nsgt::vec4d sgt::vec4d::operator/(const sgt::vec4d & v) const\nClass arguments details:\narg 1 ID = 76239331\n");
		}

		const sgt::vec4d* v_ptr=(Luna< sgt::vec4d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4d::operator/ function");
		}
		const sgt::vec4d & v=*v_ptr;

		sgt::vec4d* self=(Luna< sgt::vec4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec4d sgt::vec4d::operator/(const sgt::vec4d &) const. Got : '%s'",typeid(Luna< sgt::vec4d >::check(L,1)).name());
		}
		sgt::vec4d stack_lret = self->operator/(v);
		sgt::vec4d* lret = new sgt::vec4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec4d >::push(L,lret,true);

		return 1;
	}

	// sgt::vec4d sgt::vec4d::operator/(const double scalar) const
	static int _bind___div_overload_2(lua_State *L) {
		if (!_lg_typecheck___div_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec4d sgt::vec4d::operator/(const double scalar) const function, expected prototype:\nsgt::vec4d sgt::vec4d::operator/(const double scalar) const\nClass arguments details:\n");
		}

		const double scalar=(const double)lua_tonumber(L,2);

		sgt::vec4d* self=(Luna< sgt::vec4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec4d sgt::vec4d::operator/(const double) const. Got : '%s'",typeid(Luna< sgt::vec4d >::check(L,1)).name());
		}
		sgt::vec4d stack_lret = self->operator/(scalar);
		sgt::vec4d* lret = new sgt::vec4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec4d >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::vec4d::operator/
	static int _bind___div(lua_State *L) {
		if (_lg_typecheck___div_overload_1(L)) return _bind___div_overload_1(L);
		if (_lg_typecheck___div_overload_2(L)) return _bind___div_overload_2(L);

		luaL_error(L, "error in function operator/, cannot match any of the overloads for function operator/:\n  operator/(const sgt::vec4d &)\n  operator/(const double)\n");
		return 0;
	}

	// sgt::vec4d sgt::vec4d::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec4d sgt::vec4d::operator-() const function, expected prototype:\nsgt::vec4d sgt::vec4d::operator-() const\nClass arguments details:\n");
		}


		sgt::vec4d* self=(Luna< sgt::vec4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec4d sgt::vec4d::operator-() const. Got : '%s'",typeid(Luna< sgt::vec4d >::check(L,1)).name());
		}
		sgt::vec4d stack_lret = self->operator-();
		sgt::vec4d* lret = new sgt::vec4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec4d >::push(L,lret,true);

		return 1;
	}

	// bool sgt::vec4d::operator<(const sgt::vec4d & v) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::vec4d::operator<(const sgt::vec4d & v) const function, expected prototype:\nbool sgt::vec4d::operator<(const sgt::vec4d & v) const\nClass arguments details:\narg 1 ID = 76239331\n");
		}

		const sgt::vec4d* v_ptr=(Luna< sgt::vec4d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4d::operator< function");
		}
		const sgt::vec4d & v=*v_ptr;

		sgt::vec4d* self=(Luna< sgt::vec4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::vec4d::operator<(const sgt::vec4d &) const. Got : '%s'",typeid(Luna< sgt::vec4d >::check(L,1)).name());
		}
		bool lret = self->operator<(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

sgt::vec4d* LunaTraits< sgt::vec4d >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_vec4d::_bind_ctor(L);
}

void LunaTraits< sgt::vec4d >::_bind_dtor(sgt::vec4d* obj) {
	delete obj;
}

const char LunaTraits< sgt::vec4d >::className[] = "vec4d";
const char LunaTraits< sgt::vec4d >::fullName[] = "sgt::vec4d";
const char LunaTraits< sgt::vec4d >::moduleName[] = "sgt";
const char* LunaTraits< sgt::vec4d >::parents[] = {0};
const int LunaTraits< sgt::vec4d >::hash = 76239331;
const int LunaTraits< sgt::vec4d >::uniqueIDs[] = {76239331,0};

luna_RegType LunaTraits< sgt::vec4d >::methods[] = {
	{"dot", &luna_wrapper_sgt_vec4d::_bind_dot},
	{"xyzw", &luna_wrapper_sgt_vec4d::_bind_xyzw},
	{"xyz", &luna_wrapper_sgt_vec4d::_bind_xyz},
	{"xy", &luna_wrapper_sgt_vec4d::_bind_xy},
	{"getX", &luna_wrapper_sgt_vec4d::_bind_getX},
	{"getY", &luna_wrapper_sgt_vec4d::_bind_getY},
	{"getZ", &luna_wrapper_sgt_vec4d::_bind_getZ},
	{"getW", &luna_wrapper_sgt_vec4d::_bind_getW},
	{"setX", &luna_wrapper_sgt_vec4d::_bind_setX},
	{"setY", &luna_wrapper_sgt_vec4d::_bind_setY},
	{"setZ", &luna_wrapper_sgt_vec4d::_bind_setZ},
	{"setW", &luna_wrapper_sgt_vec4d::_bind_setW},
	{"op_index", &luna_wrapper_sgt_vec4d::_bind_op_index},
	{"__eq", &luna_wrapper_sgt_vec4d::_bind___eq},
	{"op_neq", &luna_wrapper_sgt_vec4d::_bind_op_neq},
	{"__add", &luna_wrapper_sgt_vec4d::_bind___add},
	{"__sub", &luna_wrapper_sgt_vec4d::_bind___sub},
	{"__mul", &luna_wrapper_sgt_vec4d::_bind___mul},
	{"__div", &luna_wrapper_sgt_vec4d::_bind___div},
	{"__unm", &luna_wrapper_sgt_vec4d::_bind___unm},
	{"__lt", &luna_wrapper_sgt_vec4d::_bind___lt},
	{"dynCast", &luna_wrapper_sgt_vec4d::_bind_dynCast},
	{"fromVoid", &luna_wrapper_sgt_vec4d::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_vec4d::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::vec4d >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::vec4d >::enumValues[] = {
	{0,0}
};



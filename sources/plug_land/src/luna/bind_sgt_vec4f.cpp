#include <plug_common.h>

class luna_wrapper_sgt_vec4f {
public:
	typedef Luna< sgt::vec4f > luna_t;

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

		sgt::vec4f* self= (sgt::vec4f*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::vec4f >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76239333) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< sgt::vec4f >::check(L,1));
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

		sgt::vec4f* self=(Luna< sgt::vec4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::vec4f");
		
		return luna_dynamicCast(L,converters,"sgt::vec4f",name);
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

		if( !Luna<void>::has_uniqueid(L,1,76239333) ) return false;
		if( (!(Luna< sgt::vec4f >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76239302) ) return false;
		if( (!(Luna< sgt::vec3f >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76239302) ) return false;
		if( (!(Luna< sgt::vec3f >::check(L,1))) ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_dot_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239333) ) return false;
		if( (!(Luna< sgt::vec4f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_dot_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239302) ) return false;
		if( (!(Luna< sgt::vec3f >::check(L,2))) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,76239333) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239333) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239333) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239333) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239333) ) return false;
		if( (!(Luna< sgt::vec4f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck___div_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239333) ) return false;
		if( (!(Luna< sgt::vec4f >::check(L,2))) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,76239333) ) return false;
		return true;
	}


	// Constructor binds:
	// sgt::vec4f::vec4f()
	static sgt::vec4f* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec4f::vec4f() function, expected prototype:\nsgt::vec4f::vec4f()\nClass arguments details:\n");
		}


		return new sgt::vec4f();
	}

	// sgt::vec4f::vec4f(float xi, float yi, float zi, float wi)
	static sgt::vec4f* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec4f::vec4f(float xi, float yi, float zi, float wi) function, expected prototype:\nsgt::vec4f::vec4f(float xi, float yi, float zi, float wi)\nClass arguments details:\n");
		}

		float xi=(float)lua_tonumber(L,1);
		float yi=(float)lua_tonumber(L,2);
		float zi=(float)lua_tonumber(L,3);
		float wi=(float)lua_tonumber(L,4);

		return new sgt::vec4f(xi, yi, zi, wi);
	}

	// sgt::vec4f::vec4f(const sgt::vec4f & v)
	static sgt::vec4f* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec4f::vec4f(const sgt::vec4f & v) function, expected prototype:\nsgt::vec4f::vec4f(const sgt::vec4f & v)\nClass arguments details:\narg 1 ID = 76239333\n");
		}

		const sgt::vec4f* v_ptr=(Luna< sgt::vec4f >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4f::vec4f function");
		}
		const sgt::vec4f & v=*v_ptr;

		return new sgt::vec4f(v);
	}

	// sgt::vec4f::vec4f(const sgt::vec3f & v)
	static sgt::vec4f* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec4f::vec4f(const sgt::vec3f & v) function, expected prototype:\nsgt::vec4f::vec4f(const sgt::vec3f & v)\nClass arguments details:\narg 1 ID = 76239302\n");
		}

		const sgt::vec3f* v_ptr=(Luna< sgt::vec3f >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4f::vec4f function");
		}
		const sgt::vec3f & v=*v_ptr;

		return new sgt::vec4f(v);
	}

	// sgt::vec4f::vec4f(const sgt::vec3f & v, float wi)
	static sgt::vec4f* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec4f::vec4f(const sgt::vec3f & v, float wi) function, expected prototype:\nsgt::vec4f::vec4f(const sgt::vec3f & v, float wi)\nClass arguments details:\narg 1 ID = 76239302\n");
		}

		const sgt::vec3f* v_ptr=(Luna< sgt::vec3f >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4f::vec4f function");
		}
		const sgt::vec3f & v=*v_ptr;
		float wi=(float)lua_tonumber(L,2);

		return new sgt::vec4f(v, wi);
	}

	// Overload binder for sgt::vec4f::vec4f
	static sgt::vec4f* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);

		luaL_error(L, "error in function vec4f, cannot match any of the overloads for function vec4f:\n  vec4f()\n  vec4f(float, float, float, float)\n  vec4f(const sgt::vec4f &)\n  vec4f(const sgt::vec3f &)\n  vec4f(const sgt::vec3f &, float)\n");
		return NULL;
	}


	// Function binds:
	// float sgt::vec4f::dot(const sgt::vec4f & v) const
	static int _bind_dot_overload_1(lua_State *L) {
		if (!_lg_typecheck_dot_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float sgt::vec4f::dot(const sgt::vec4f & v) const function, expected prototype:\nfloat sgt::vec4f::dot(const sgt::vec4f & v) const\nClass arguments details:\narg 1 ID = 76239333\n");
		}

		const sgt::vec4f* v_ptr=(Luna< sgt::vec4f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4f::dot function");
		}
		const sgt::vec4f & v=*v_ptr;

		sgt::vec4f* self=(Luna< sgt::vec4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float sgt::vec4f::dot(const sgt::vec4f &) const. Got : '%s'",typeid(Luna< sgt::vec4f >::check(L,1)).name());
		}
		float lret = self->dot(v);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float sgt::vec4f::dot(const sgt::vec3f & v) const
	static int _bind_dot_overload_2(lua_State *L) {
		if (!_lg_typecheck_dot_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float sgt::vec4f::dot(const sgt::vec3f & v) const function, expected prototype:\nfloat sgt::vec4f::dot(const sgt::vec3f & v) const\nClass arguments details:\narg 1 ID = 76239302\n");
		}

		const sgt::vec3f* v_ptr=(Luna< sgt::vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4f::dot function");
		}
		const sgt::vec3f & v=*v_ptr;

		sgt::vec4f* self=(Luna< sgt::vec4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float sgt::vec4f::dot(const sgt::vec3f &) const. Got : '%s'",typeid(Luna< sgt::vec4f >::check(L,1)).name());
		}
		float lret = self->dot(v);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for sgt::vec4f::dot
	static int _bind_dot(lua_State *L) {
		if (_lg_typecheck_dot_overload_1(L)) return _bind_dot_overload_1(L);
		if (_lg_typecheck_dot_overload_2(L)) return _bind_dot_overload_2(L);

		luaL_error(L, "error in function dot, cannot match any of the overloads for function dot:\n  dot(const sgt::vec4f &)\n  dot(const sgt::vec3f &)\n");
		return 0;
	}

	// sgt::vec3f sgt::vec4f::xyzw() const
	static int _bind_xyzw(lua_State *L) {
		if (!_lg_typecheck_xyzw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3f sgt::vec4f::xyzw() const function, expected prototype:\nsgt::vec3f sgt::vec4f::xyzw() const\nClass arguments details:\n");
		}


		sgt::vec4f* self=(Luna< sgt::vec4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec3f sgt::vec4f::xyzw() const. Got : '%s'",typeid(Luna< sgt::vec4f >::check(L,1)).name());
		}
		sgt::vec3f stack_lret = self->xyzw();
		sgt::vec3f* lret = new sgt::vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3f >::push(L,lret,true);

		return 1;
	}

	// sgt::vec3f sgt::vec4f::xyz() const
	static int _bind_xyz(lua_State *L) {
		if (!_lg_typecheck_xyz(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3f sgt::vec4f::xyz() const function, expected prototype:\nsgt::vec3f sgt::vec4f::xyz() const\nClass arguments details:\n");
		}


		sgt::vec4f* self=(Luna< sgt::vec4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec3f sgt::vec4f::xyz() const. Got : '%s'",typeid(Luna< sgt::vec4f >::check(L,1)).name());
		}
		sgt::vec3f stack_lret = self->xyz();
		sgt::vec3f* lret = new sgt::vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3f >::push(L,lret,true);

		return 1;
	}

	// sgt::vec2f sgt::vec4f::xy() const
	static int _bind_xy(lua_State *L) {
		if (!_lg_typecheck_xy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2f sgt::vec4f::xy() const function, expected prototype:\nsgt::vec2f sgt::vec4f::xy() const\nClass arguments details:\n");
		}


		sgt::vec4f* self=(Luna< sgt::vec4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2f sgt::vec4f::xy() const. Got : '%s'",typeid(Luna< sgt::vec4f >::check(L,1)).name());
		}
		sgt::vec2f stack_lret = self->xy();
		sgt::vec2f* lret = new sgt::vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2f >::push(L,lret,true);

		return 1;
	}

	// float sgt::vec4f::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float sgt::vec4f::x() function, expected prototype:\nfloat sgt::vec4f::x()\nClass arguments details:\n");
		}


		sgt::vec4f* self=(Luna< sgt::vec4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float sgt::vec4f::x(). Got : '%s'",typeid(Luna< sgt::vec4f >::check(L,1)).name());
		}
		float lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float sgt::vec4f::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float sgt::vec4f::y() function, expected prototype:\nfloat sgt::vec4f::y()\nClass arguments details:\n");
		}


		sgt::vec4f* self=(Luna< sgt::vec4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float sgt::vec4f::y(). Got : '%s'",typeid(Luna< sgt::vec4f >::check(L,1)).name());
		}
		float lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float sgt::vec4f::z()
	static int _bind_getZ(lua_State *L) {
		if (!_lg_typecheck_getZ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float sgt::vec4f::z() function, expected prototype:\nfloat sgt::vec4f::z()\nClass arguments details:\n");
		}


		sgt::vec4f* self=(Luna< sgt::vec4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float sgt::vec4f::z(). Got : '%s'",typeid(Luna< sgt::vec4f >::check(L,1)).name());
		}
		float lret = self->z;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float sgt::vec4f::w()
	static int _bind_getW(lua_State *L) {
		if (!_lg_typecheck_getW(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float sgt::vec4f::w() function, expected prototype:\nfloat sgt::vec4f::w()\nClass arguments details:\n");
		}


		sgt::vec4f* self=(Luna< sgt::vec4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float sgt::vec4f::w(). Got : '%s'",typeid(Luna< sgt::vec4f >::check(L,1)).name());
		}
		float lret = self->w;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::vec4f::x(float value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::vec4f::x(float value) function, expected prototype:\nvoid sgt::vec4f::x(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		sgt::vec4f* self=(Luna< sgt::vec4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::vec4f::x(float). Got : '%s'",typeid(Luna< sgt::vec4f >::check(L,1)).name());
		}
		self->x = value;

		return 0;
	}

	// void sgt::vec4f::y(float value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::vec4f::y(float value) function, expected prototype:\nvoid sgt::vec4f::y(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		sgt::vec4f* self=(Luna< sgt::vec4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::vec4f::y(float). Got : '%s'",typeid(Luna< sgt::vec4f >::check(L,1)).name());
		}
		self->y = value;

		return 0;
	}

	// void sgt::vec4f::z(float value)
	static int _bind_setZ(lua_State *L) {
		if (!_lg_typecheck_setZ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::vec4f::z(float value) function, expected prototype:\nvoid sgt::vec4f::z(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		sgt::vec4f* self=(Luna< sgt::vec4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::vec4f::z(float). Got : '%s'",typeid(Luna< sgt::vec4f >::check(L,1)).name());
		}
		self->z = value;

		return 0;
	}

	// void sgt::vec4f::w(float value)
	static int _bind_setW(lua_State *L) {
		if (!_lg_typecheck_setW(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::vec4f::w(float value) function, expected prototype:\nvoid sgt::vec4f::w(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		sgt::vec4f* self=(Luna< sgt::vec4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::vec4f::w(float). Got : '%s'",typeid(Luna< sgt::vec4f >::check(L,1)).name());
		}
		self->w = value;

		return 0;
	}


	// Operator binds:
	// float & sgt::vec4f::operator[](const int i)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float & sgt::vec4f::operator[](const int i) function, expected prototype:\nfloat & sgt::vec4f::operator[](const int i)\nClass arguments details:\n");
		}

		const int i=(const int)lua_tointeger(L,2);

		sgt::vec4f* self=(Luna< sgt::vec4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float & sgt::vec4f::operator[](const int). Got : '%s'",typeid(Luna< sgt::vec4f >::check(L,1)).name());
		}
		float & lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool sgt::vec4f::operator==(const sgt::vec4f & v) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::vec4f::operator==(const sgt::vec4f & v) const function, expected prototype:\nbool sgt::vec4f::operator==(const sgt::vec4f & v) const\nClass arguments details:\narg 1 ID = 76239333\n");
		}

		const sgt::vec4f* v_ptr=(Luna< sgt::vec4f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4f::operator== function");
		}
		const sgt::vec4f & v=*v_ptr;

		sgt::vec4f* self=(Luna< sgt::vec4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::vec4f::operator==(const sgt::vec4f &) const. Got : '%s'",typeid(Luna< sgt::vec4f >::check(L,1)).name());
		}
		bool lret = self->operator==(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool sgt::vec4f::operator!=(const sgt::vec4f & v) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::vec4f::operator!=(const sgt::vec4f & v) const function, expected prototype:\nbool sgt::vec4f::operator!=(const sgt::vec4f & v) const\nClass arguments details:\narg 1 ID = 76239333\n");
		}

		const sgt::vec4f* v_ptr=(Luna< sgt::vec4f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4f::operator!= function");
		}
		const sgt::vec4f & v=*v_ptr;

		sgt::vec4f* self=(Luna< sgt::vec4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::vec4f::operator!=(const sgt::vec4f &) const. Got : '%s'",typeid(Luna< sgt::vec4f >::check(L,1)).name());
		}
		bool lret = self->operator!=(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// sgt::vec4f sgt::vec4f::operator+(const sgt::vec4f & v) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec4f sgt::vec4f::operator+(const sgt::vec4f & v) const function, expected prototype:\nsgt::vec4f sgt::vec4f::operator+(const sgt::vec4f & v) const\nClass arguments details:\narg 1 ID = 76239333\n");
		}

		const sgt::vec4f* v_ptr=(Luna< sgt::vec4f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4f::operator+ function");
		}
		const sgt::vec4f & v=*v_ptr;

		sgt::vec4f* self=(Luna< sgt::vec4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec4f sgt::vec4f::operator+(const sgt::vec4f &) const. Got : '%s'",typeid(Luna< sgt::vec4f >::check(L,1)).name());
		}
		sgt::vec4f stack_lret = self->operator+(v);
		sgt::vec4f* lret = new sgt::vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec4f >::push(L,lret,true);

		return 1;
	}

	// sgt::vec4f sgt::vec4f::operator-(const sgt::vec4f & v) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec4f sgt::vec4f::operator-(const sgt::vec4f & v) const function, expected prototype:\nsgt::vec4f sgt::vec4f::operator-(const sgt::vec4f & v) const\nClass arguments details:\narg 1 ID = 76239333\n");
		}

		const sgt::vec4f* v_ptr=(Luna< sgt::vec4f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4f::operator- function");
		}
		const sgt::vec4f & v=*v_ptr;

		sgt::vec4f* self=(Luna< sgt::vec4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec4f sgt::vec4f::operator-(const sgt::vec4f &) const. Got : '%s'",typeid(Luna< sgt::vec4f >::check(L,1)).name());
		}
		sgt::vec4f stack_lret = self->operator-(v);
		sgt::vec4f* lret = new sgt::vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec4f >::push(L,lret,true);

		return 1;
	}

	// sgt::vec4f sgt::vec4f::operator*(const sgt::vec4f & v) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec4f sgt::vec4f::operator*(const sgt::vec4f & v) const function, expected prototype:\nsgt::vec4f sgt::vec4f::operator*(const sgt::vec4f & v) const\nClass arguments details:\narg 1 ID = 76239333\n");
		}

		const sgt::vec4f* v_ptr=(Luna< sgt::vec4f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4f::operator* function");
		}
		const sgt::vec4f & v=*v_ptr;

		sgt::vec4f* self=(Luna< sgt::vec4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec4f sgt::vec4f::operator*(const sgt::vec4f &) const. Got : '%s'",typeid(Luna< sgt::vec4f >::check(L,1)).name());
		}
		sgt::vec4f stack_lret = self->operator*(v);
		sgt::vec4f* lret = new sgt::vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec4f >::push(L,lret,true);

		return 1;
	}

	// sgt::vec4f sgt::vec4f::operator*(const float scalar) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec4f sgt::vec4f::operator*(const float scalar) const function, expected prototype:\nsgt::vec4f sgt::vec4f::operator*(const float scalar) const\nClass arguments details:\n");
		}

		const float scalar=(const float)lua_tonumber(L,2);

		sgt::vec4f* self=(Luna< sgt::vec4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec4f sgt::vec4f::operator*(const float) const. Got : '%s'",typeid(Luna< sgt::vec4f >::check(L,1)).name());
		}
		sgt::vec4f stack_lret = self->operator*(scalar);
		sgt::vec4f* lret = new sgt::vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec4f >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::vec4f::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const sgt::vec4f &)\n  operator*(const float)\n");
		return 0;
	}

	// sgt::vec4f sgt::vec4f::operator/(const sgt::vec4f & v) const
	static int _bind___div_overload_1(lua_State *L) {
		if (!_lg_typecheck___div_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec4f sgt::vec4f::operator/(const sgt::vec4f & v) const function, expected prototype:\nsgt::vec4f sgt::vec4f::operator/(const sgt::vec4f & v) const\nClass arguments details:\narg 1 ID = 76239333\n");
		}

		const sgt::vec4f* v_ptr=(Luna< sgt::vec4f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4f::operator/ function");
		}
		const sgt::vec4f & v=*v_ptr;

		sgt::vec4f* self=(Luna< sgt::vec4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec4f sgt::vec4f::operator/(const sgt::vec4f &) const. Got : '%s'",typeid(Luna< sgt::vec4f >::check(L,1)).name());
		}
		sgt::vec4f stack_lret = self->operator/(v);
		sgt::vec4f* lret = new sgt::vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec4f >::push(L,lret,true);

		return 1;
	}

	// sgt::vec4f sgt::vec4f::operator/(const float scalar) const
	static int _bind___div_overload_2(lua_State *L) {
		if (!_lg_typecheck___div_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec4f sgt::vec4f::operator/(const float scalar) const function, expected prototype:\nsgt::vec4f sgt::vec4f::operator/(const float scalar) const\nClass arguments details:\n");
		}

		const float scalar=(const float)lua_tonumber(L,2);

		sgt::vec4f* self=(Luna< sgt::vec4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec4f sgt::vec4f::operator/(const float) const. Got : '%s'",typeid(Luna< sgt::vec4f >::check(L,1)).name());
		}
		sgt::vec4f stack_lret = self->operator/(scalar);
		sgt::vec4f* lret = new sgt::vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec4f >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::vec4f::operator/
	static int _bind___div(lua_State *L) {
		if (_lg_typecheck___div_overload_1(L)) return _bind___div_overload_1(L);
		if (_lg_typecheck___div_overload_2(L)) return _bind___div_overload_2(L);

		luaL_error(L, "error in function operator/, cannot match any of the overloads for function operator/:\n  operator/(const sgt::vec4f &)\n  operator/(const float)\n");
		return 0;
	}

	// sgt::vec4f sgt::vec4f::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec4f sgt::vec4f::operator-() const function, expected prototype:\nsgt::vec4f sgt::vec4f::operator-() const\nClass arguments details:\n");
		}


		sgt::vec4f* self=(Luna< sgt::vec4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec4f sgt::vec4f::operator-() const. Got : '%s'",typeid(Luna< sgt::vec4f >::check(L,1)).name());
		}
		sgt::vec4f stack_lret = self->operator-();
		sgt::vec4f* lret = new sgt::vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec4f >::push(L,lret,true);

		return 1;
	}

	// bool sgt::vec4f::operator<(const sgt::vec4f & v) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::vec4f::operator<(const sgt::vec4f & v) const function, expected prototype:\nbool sgt::vec4f::operator<(const sgt::vec4f & v) const\nClass arguments details:\narg 1 ID = 76239333\n");
		}

		const sgt::vec4f* v_ptr=(Luna< sgt::vec4f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec4f::operator< function");
		}
		const sgt::vec4f & v=*v_ptr;

		sgt::vec4f* self=(Luna< sgt::vec4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::vec4f::operator<(const sgt::vec4f &) const. Got : '%s'",typeid(Luna< sgt::vec4f >::check(L,1)).name());
		}
		bool lret = self->operator<(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

sgt::vec4f* LunaTraits< sgt::vec4f >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_vec4f::_bind_ctor(L);
}

void LunaTraits< sgt::vec4f >::_bind_dtor(sgt::vec4f* obj) {
	delete obj;
}

const char LunaTraits< sgt::vec4f >::className[] = "vec4f";
const char LunaTraits< sgt::vec4f >::fullName[] = "sgt::vec4f";
const char LunaTraits< sgt::vec4f >::moduleName[] = "sgt";
const char* LunaTraits< sgt::vec4f >::parents[] = {0};
const int LunaTraits< sgt::vec4f >::hash = 76239333;
const int LunaTraits< sgt::vec4f >::uniqueIDs[] = {76239333,0};

luna_RegType LunaTraits< sgt::vec4f >::methods[] = {
	{"dot", &luna_wrapper_sgt_vec4f::_bind_dot},
	{"xyzw", &luna_wrapper_sgt_vec4f::_bind_xyzw},
	{"xyz", &luna_wrapper_sgt_vec4f::_bind_xyz},
	{"xy", &luna_wrapper_sgt_vec4f::_bind_xy},
	{"getX", &luna_wrapper_sgt_vec4f::_bind_getX},
	{"getY", &luna_wrapper_sgt_vec4f::_bind_getY},
	{"getZ", &luna_wrapper_sgt_vec4f::_bind_getZ},
	{"getW", &luna_wrapper_sgt_vec4f::_bind_getW},
	{"setX", &luna_wrapper_sgt_vec4f::_bind_setX},
	{"setY", &luna_wrapper_sgt_vec4f::_bind_setY},
	{"setZ", &luna_wrapper_sgt_vec4f::_bind_setZ},
	{"setW", &luna_wrapper_sgt_vec4f::_bind_setW},
	{"op_index", &luna_wrapper_sgt_vec4f::_bind_op_index},
	{"__eq", &luna_wrapper_sgt_vec4f::_bind___eq},
	{"op_neq", &luna_wrapper_sgt_vec4f::_bind_op_neq},
	{"__add", &luna_wrapper_sgt_vec4f::_bind___add},
	{"__sub", &luna_wrapper_sgt_vec4f::_bind___sub},
	{"__mul", &luna_wrapper_sgt_vec4f::_bind___mul},
	{"__div", &luna_wrapper_sgt_vec4f::_bind___div},
	{"__unm", &luna_wrapper_sgt_vec4f::_bind___unm},
	{"__lt", &luna_wrapper_sgt_vec4f::_bind___lt},
	{"dynCast", &luna_wrapper_sgt_vec4f::_bind_dynCast},
	{"fromVoid", &luna_wrapper_sgt_vec4f::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_vec4f::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::vec4f >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::vec4f >::enumValues[] = {
	{0,0}
};



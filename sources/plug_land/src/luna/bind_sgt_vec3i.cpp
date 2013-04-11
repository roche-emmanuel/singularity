#include <plug_common.h>

class luna_wrapper_sgt_vec3i {
public:
	typedef Luna< sgt::vec3i > luna_t;

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

		sgt::vec3i* self= (sgt::vec3i*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::vec3i >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76239305) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< sgt::vec3i >::check(L,1));
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

		sgt::vec3i* self=(Luna< sgt::vec3i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::vec3i");
		
		return luna_dynamicCast(L,converters,"sgt::vec3i",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76239305) ) return false;
		if( (!(Luna< sgt::vec3i >::check(L,1))) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,76239305) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_squaredDistanceTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239305) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_dot(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239305) ) return false;
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

	inline static bool _lg_typecheck_cross(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239305) ) return false;
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

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setZ(lua_State *L) {
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

		if( !Luna<void>::has_uniqueid(L,2,76239305) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239305) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239305) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239305) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239305) ) return false;
		if( (!(Luna< sgt::vec3i >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___div_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239305) ) return false;
		if( (!(Luna< sgt::vec3i >::check(L,2))) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,76239305) ) return false;
		return true;
	}


	// Constructor binds:
	// sgt::vec3i::vec3i()
	static sgt::vec3i* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3i::vec3i() function, expected prototype:\nsgt::vec3i::vec3i()\nClass arguments details:\n");
		}


		return new sgt::vec3i();
	}

	// sgt::vec3i::vec3i(int xi, int yi, int zi)
	static sgt::vec3i* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3i::vec3i(int xi, int yi, int zi) function, expected prototype:\nsgt::vec3i::vec3i(int xi, int yi, int zi)\nClass arguments details:\n");
		}

		int xi=(int)lua_tointeger(L,1);
		int yi=(int)lua_tointeger(L,2);
		int zi=(int)lua_tointeger(L,3);

		return new sgt::vec3i(xi, yi, zi);
	}

	// sgt::vec3i::vec3i(const sgt::vec3i & v)
	static sgt::vec3i* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3i::vec3i(const sgt::vec3i & v) function, expected prototype:\nsgt::vec3i::vec3i(const sgt::vec3i & v)\nClass arguments details:\narg 1 ID = 76239305\n");
		}

		const sgt::vec3i* v_ptr=(Luna< sgt::vec3i >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3i::vec3i function");
		}
		const sgt::vec3i & v=*v_ptr;

		return new sgt::vec3i(v);
	}

	// Overload binder for sgt::vec3i::vec3i
	static sgt::vec3i* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function vec3i, cannot match any of the overloads for function vec3i:\n  vec3i()\n  vec3i(int, int, int)\n  vec3i(const sgt::vec3i &)\n");
		return NULL;
	}


	// Function binds:
	// int sgt::vec3i::length() const
	static int _bind_length(lua_State *L) {
		if (!_lg_typecheck_length(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::vec3i::length() const function, expected prototype:\nint sgt::vec3i::length() const\nClass arguments details:\n");
		}


		sgt::vec3i* self=(Luna< sgt::vec3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::vec3i::length() const. Got : '%s'",typeid(Luna< sgt::vec3i >::check(L,1)).name());
		}
		int lret = self->length();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int sgt::vec3i::squaredLength() const
	static int _bind_squaredLength(lua_State *L) {
		if (!_lg_typecheck_squaredLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::vec3i::squaredLength() const function, expected prototype:\nint sgt::vec3i::squaredLength() const\nClass arguments details:\n");
		}


		sgt::vec3i* self=(Luna< sgt::vec3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::vec3i::squaredLength() const. Got : '%s'",typeid(Luna< sgt::vec3i >::check(L,1)).name());
		}
		int lret = self->squaredLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int sgt::vec3i::distanceTo(const sgt::vec3i & v) const
	static int _bind_distanceTo(lua_State *L) {
		if (!_lg_typecheck_distanceTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::vec3i::distanceTo(const sgt::vec3i & v) const function, expected prototype:\nint sgt::vec3i::distanceTo(const sgt::vec3i & v) const\nClass arguments details:\narg 1 ID = 76239305\n");
		}

		const sgt::vec3i* v_ptr=(Luna< sgt::vec3i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3i::distanceTo function");
		}
		const sgt::vec3i & v=*v_ptr;

		sgt::vec3i* self=(Luna< sgt::vec3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::vec3i::distanceTo(const sgt::vec3i &) const. Got : '%s'",typeid(Luna< sgt::vec3i >::check(L,1)).name());
		}
		int lret = self->distanceTo(v);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int sgt::vec3i::squaredDistanceTo(const sgt::vec3i & v) const
	static int _bind_squaredDistanceTo(lua_State *L) {
		if (!_lg_typecheck_squaredDistanceTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::vec3i::squaredDistanceTo(const sgt::vec3i & v) const function, expected prototype:\nint sgt::vec3i::squaredDistanceTo(const sgt::vec3i & v) const\nClass arguments details:\narg 1 ID = 76239305\n");
		}

		const sgt::vec3i* v_ptr=(Luna< sgt::vec3i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3i::squaredDistanceTo function");
		}
		const sgt::vec3i & v=*v_ptr;

		sgt::vec3i* self=(Luna< sgt::vec3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::vec3i::squaredDistanceTo(const sgt::vec3i &) const. Got : '%s'",typeid(Luna< sgt::vec3i >::check(L,1)).name());
		}
		int lret = self->squaredDistanceTo(v);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int sgt::vec3i::dot(const sgt::vec3i & v) const
	static int _bind_dot(lua_State *L) {
		if (!_lg_typecheck_dot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::vec3i::dot(const sgt::vec3i & v) const function, expected prototype:\nint sgt::vec3i::dot(const sgt::vec3i & v) const\nClass arguments details:\narg 1 ID = 76239305\n");
		}

		const sgt::vec3i* v_ptr=(Luna< sgt::vec3i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3i::dot function");
		}
		const sgt::vec3i & v=*v_ptr;

		sgt::vec3i* self=(Luna< sgt::vec3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::vec3i::dot(const sgt::vec3i &) const. Got : '%s'",typeid(Luna< sgt::vec3i >::check(L,1)).name());
		}
		int lret = self->dot(v);
		lua_pushnumber(L,lret);

		return 1;
	}

	// sgt::vec3i sgt::vec3i::normalize() const
	static int _bind_normalize_overload_1(lua_State *L) {
		if (!_lg_typecheck_normalize_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3i sgt::vec3i::normalize() const function, expected prototype:\nsgt::vec3i sgt::vec3i::normalize() const\nClass arguments details:\n");
		}


		sgt::vec3i* self=(Luna< sgt::vec3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec3i sgt::vec3i::normalize() const. Got : '%s'",typeid(Luna< sgt::vec3i >::check(L,1)).name());
		}
		sgt::vec3i stack_lret = self->normalize();
		sgt::vec3i* lret = new sgt::vec3i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3i >::push(L,lret,true);

		return 1;
	}

	// sgt::vec3i sgt::vec3i::normalize(int l) const
	static int _bind_normalize_overload_2(lua_State *L) {
		if (!_lg_typecheck_normalize_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3i sgt::vec3i::normalize(int l) const function, expected prototype:\nsgt::vec3i sgt::vec3i::normalize(int l) const\nClass arguments details:\n");
		}

		int l=(int)lua_tointeger(L,2);

		sgt::vec3i* self=(Luna< sgt::vec3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec3i sgt::vec3i::normalize(int) const. Got : '%s'",typeid(Luna< sgt::vec3i >::check(L,1)).name());
		}
		sgt::vec3i stack_lret = self->normalize(l);
		sgt::vec3i* lret = new sgt::vec3i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3i >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::vec3i::normalize
	static int _bind_normalize(lua_State *L) {
		if (_lg_typecheck_normalize_overload_1(L)) return _bind_normalize_overload_1(L);
		if (_lg_typecheck_normalize_overload_2(L)) return _bind_normalize_overload_2(L);

		luaL_error(L, "error in function normalize, cannot match any of the overloads for function normalize:\n  normalize()\n  normalize(int)\n");
		return 0;
	}

	// sgt::vec3i sgt::vec3i::cross(const sgt::vec3i & v) const
	static int _bind_cross(lua_State *L) {
		if (!_lg_typecheck_cross(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3i sgt::vec3i::cross(const sgt::vec3i & v) const function, expected prototype:\nsgt::vec3i sgt::vec3i::cross(const sgt::vec3i & v) const\nClass arguments details:\narg 1 ID = 76239305\n");
		}

		const sgt::vec3i* v_ptr=(Luna< sgt::vec3i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3i::cross function");
		}
		const sgt::vec3i & v=*v_ptr;

		sgt::vec3i* self=(Luna< sgt::vec3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec3i sgt::vec3i::cross(const sgt::vec3i &) const. Got : '%s'",typeid(Luna< sgt::vec3i >::check(L,1)).name());
		}
		sgt::vec3i stack_lret = self->cross(v);
		sgt::vec3i* lret = new sgt::vec3i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3i >::push(L,lret,true);

		return 1;
	}

	// sgt::vec2i sgt::vec3i::xy() const
	static int _bind_xy(lua_State *L) {
		if (!_lg_typecheck_xy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2i sgt::vec3i::xy() const function, expected prototype:\nsgt::vec2i sgt::vec3i::xy() const\nClass arguments details:\n");
		}


		sgt::vec3i* self=(Luna< sgt::vec3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2i sgt::vec3i::xy() const. Got : '%s'",typeid(Luna< sgt::vec3i >::check(L,1)).name());
		}
		sgt::vec2i stack_lret = self->xy();
		sgt::vec2i* lret = new sgt::vec2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2i >::push(L,lret,true);

		return 1;
	}

	// int sgt::vec3i::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::vec3i::x() function, expected prototype:\nint sgt::vec3i::x()\nClass arguments details:\n");
		}


		sgt::vec3i* self=(Luna< sgt::vec3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::vec3i::x(). Got : '%s'",typeid(Luna< sgt::vec3i >::check(L,1)).name());
		}
		int lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int sgt::vec3i::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::vec3i::y() function, expected prototype:\nint sgt::vec3i::y()\nClass arguments details:\n");
		}


		sgt::vec3i* self=(Luna< sgt::vec3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::vec3i::y(). Got : '%s'",typeid(Luna< sgt::vec3i >::check(L,1)).name());
		}
		int lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int sgt::vec3i::z()
	static int _bind_getZ(lua_State *L) {
		if (!_lg_typecheck_getZ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::vec3i::z() function, expected prototype:\nint sgt::vec3i::z()\nClass arguments details:\n");
		}


		sgt::vec3i* self=(Luna< sgt::vec3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::vec3i::z(). Got : '%s'",typeid(Luna< sgt::vec3i >::check(L,1)).name());
		}
		int lret = self->z;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::vec3i::x(int value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::vec3i::x(int value) function, expected prototype:\nvoid sgt::vec3i::x(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		sgt::vec3i* self=(Luna< sgt::vec3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::vec3i::x(int). Got : '%s'",typeid(Luna< sgt::vec3i >::check(L,1)).name());
		}
		self->x = value;

		return 0;
	}

	// void sgt::vec3i::y(int value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::vec3i::y(int value) function, expected prototype:\nvoid sgt::vec3i::y(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		sgt::vec3i* self=(Luna< sgt::vec3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::vec3i::y(int). Got : '%s'",typeid(Luna< sgt::vec3i >::check(L,1)).name());
		}
		self->y = value;

		return 0;
	}

	// void sgt::vec3i::z(int value)
	static int _bind_setZ(lua_State *L) {
		if (!_lg_typecheck_setZ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::vec3i::z(int value) function, expected prototype:\nvoid sgt::vec3i::z(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		sgt::vec3i* self=(Luna< sgt::vec3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::vec3i::z(int). Got : '%s'",typeid(Luna< sgt::vec3i >::check(L,1)).name());
		}
		self->z = value;

		return 0;
	}


	// Operator binds:
	// int & sgt::vec3i::operator[](const int i)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int & sgt::vec3i::operator[](const int i) function, expected prototype:\nint & sgt::vec3i::operator[](const int i)\nClass arguments details:\n");
		}

		const int i=(const int)lua_tointeger(L,2);

		sgt::vec3i* self=(Luna< sgt::vec3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int & sgt::vec3i::operator[](const int). Got : '%s'",typeid(Luna< sgt::vec3i >::check(L,1)).name());
		}
		int & lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool sgt::vec3i::operator==(const sgt::vec3i & v) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::vec3i::operator==(const sgt::vec3i & v) const function, expected prototype:\nbool sgt::vec3i::operator==(const sgt::vec3i & v) const\nClass arguments details:\narg 1 ID = 76239305\n");
		}

		const sgt::vec3i* v_ptr=(Luna< sgt::vec3i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3i::operator== function");
		}
		const sgt::vec3i & v=*v_ptr;

		sgt::vec3i* self=(Luna< sgt::vec3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::vec3i::operator==(const sgt::vec3i &) const. Got : '%s'",typeid(Luna< sgt::vec3i >::check(L,1)).name());
		}
		bool lret = self->operator==(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool sgt::vec3i::operator!=(const sgt::vec3i & v) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::vec3i::operator!=(const sgt::vec3i & v) const function, expected prototype:\nbool sgt::vec3i::operator!=(const sgt::vec3i & v) const\nClass arguments details:\narg 1 ID = 76239305\n");
		}

		const sgt::vec3i* v_ptr=(Luna< sgt::vec3i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3i::operator!= function");
		}
		const sgt::vec3i & v=*v_ptr;

		sgt::vec3i* self=(Luna< sgt::vec3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::vec3i::operator!=(const sgt::vec3i &) const. Got : '%s'",typeid(Luna< sgt::vec3i >::check(L,1)).name());
		}
		bool lret = self->operator!=(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// sgt::vec3i sgt::vec3i::operator+(const sgt::vec3i & v) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3i sgt::vec3i::operator+(const sgt::vec3i & v) const function, expected prototype:\nsgt::vec3i sgt::vec3i::operator+(const sgt::vec3i & v) const\nClass arguments details:\narg 1 ID = 76239305\n");
		}

		const sgt::vec3i* v_ptr=(Luna< sgt::vec3i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3i::operator+ function");
		}
		const sgt::vec3i & v=*v_ptr;

		sgt::vec3i* self=(Luna< sgt::vec3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec3i sgt::vec3i::operator+(const sgt::vec3i &) const. Got : '%s'",typeid(Luna< sgt::vec3i >::check(L,1)).name());
		}
		sgt::vec3i stack_lret = self->operator+(v);
		sgt::vec3i* lret = new sgt::vec3i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3i >::push(L,lret,true);

		return 1;
	}

	// sgt::vec3i sgt::vec3i::operator-(const sgt::vec3i & v) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3i sgt::vec3i::operator-(const sgt::vec3i & v) const function, expected prototype:\nsgt::vec3i sgt::vec3i::operator-(const sgt::vec3i & v) const\nClass arguments details:\narg 1 ID = 76239305\n");
		}

		const sgt::vec3i* v_ptr=(Luna< sgt::vec3i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3i::operator- function");
		}
		const sgt::vec3i & v=*v_ptr;

		sgt::vec3i* self=(Luna< sgt::vec3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec3i sgt::vec3i::operator-(const sgt::vec3i &) const. Got : '%s'",typeid(Luna< sgt::vec3i >::check(L,1)).name());
		}
		sgt::vec3i stack_lret = self->operator-(v);
		sgt::vec3i* lret = new sgt::vec3i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3i >::push(L,lret,true);

		return 1;
	}

	// sgt::vec3i sgt::vec3i::operator*(const sgt::vec3i & v) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3i sgt::vec3i::operator*(const sgt::vec3i & v) const function, expected prototype:\nsgt::vec3i sgt::vec3i::operator*(const sgt::vec3i & v) const\nClass arguments details:\narg 1 ID = 76239305\n");
		}

		const sgt::vec3i* v_ptr=(Luna< sgt::vec3i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3i::operator* function");
		}
		const sgt::vec3i & v=*v_ptr;

		sgt::vec3i* self=(Luna< sgt::vec3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec3i sgt::vec3i::operator*(const sgt::vec3i &) const. Got : '%s'",typeid(Luna< sgt::vec3i >::check(L,1)).name());
		}
		sgt::vec3i stack_lret = self->operator*(v);
		sgt::vec3i* lret = new sgt::vec3i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3i >::push(L,lret,true);

		return 1;
	}

	// sgt::vec3i sgt::vec3i::operator*(const int scalar) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3i sgt::vec3i::operator*(const int scalar) const function, expected prototype:\nsgt::vec3i sgt::vec3i::operator*(const int scalar) const\nClass arguments details:\n");
		}

		const int scalar=(const int)lua_tointeger(L,2);

		sgt::vec3i* self=(Luna< sgt::vec3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec3i sgt::vec3i::operator*(const int) const. Got : '%s'",typeid(Luna< sgt::vec3i >::check(L,1)).name());
		}
		sgt::vec3i stack_lret = self->operator*(scalar);
		sgt::vec3i* lret = new sgt::vec3i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3i >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::vec3i::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const sgt::vec3i &)\n  operator*(const int)\n");
		return 0;
	}

	// sgt::vec3i sgt::vec3i::operator/(const sgt::vec3i & v) const
	static int _bind___div_overload_1(lua_State *L) {
		if (!_lg_typecheck___div_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3i sgt::vec3i::operator/(const sgt::vec3i & v) const function, expected prototype:\nsgt::vec3i sgt::vec3i::operator/(const sgt::vec3i & v) const\nClass arguments details:\narg 1 ID = 76239305\n");
		}

		const sgt::vec3i* v_ptr=(Luna< sgt::vec3i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3i::operator/ function");
		}
		const sgt::vec3i & v=*v_ptr;

		sgt::vec3i* self=(Luna< sgt::vec3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec3i sgt::vec3i::operator/(const sgt::vec3i &) const. Got : '%s'",typeid(Luna< sgt::vec3i >::check(L,1)).name());
		}
		sgt::vec3i stack_lret = self->operator/(v);
		sgt::vec3i* lret = new sgt::vec3i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3i >::push(L,lret,true);

		return 1;
	}

	// sgt::vec3i sgt::vec3i::operator/(const int scalar) const
	static int _bind___div_overload_2(lua_State *L) {
		if (!_lg_typecheck___div_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3i sgt::vec3i::operator/(const int scalar) const function, expected prototype:\nsgt::vec3i sgt::vec3i::operator/(const int scalar) const\nClass arguments details:\n");
		}

		const int scalar=(const int)lua_tointeger(L,2);

		sgt::vec3i* self=(Luna< sgt::vec3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec3i sgt::vec3i::operator/(const int) const. Got : '%s'",typeid(Luna< sgt::vec3i >::check(L,1)).name());
		}
		sgt::vec3i stack_lret = self->operator/(scalar);
		sgt::vec3i* lret = new sgt::vec3i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3i >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::vec3i::operator/
	static int _bind___div(lua_State *L) {
		if (_lg_typecheck___div_overload_1(L)) return _bind___div_overload_1(L);
		if (_lg_typecheck___div_overload_2(L)) return _bind___div_overload_2(L);

		luaL_error(L, "error in function operator/, cannot match any of the overloads for function operator/:\n  operator/(const sgt::vec3i &)\n  operator/(const int)\n");
		return 0;
	}

	// sgt::vec3i sgt::vec3i::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3i sgt::vec3i::operator-() const function, expected prototype:\nsgt::vec3i sgt::vec3i::operator-() const\nClass arguments details:\n");
		}


		sgt::vec3i* self=(Luna< sgt::vec3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec3i sgt::vec3i::operator-() const. Got : '%s'",typeid(Luna< sgt::vec3i >::check(L,1)).name());
		}
		sgt::vec3i stack_lret = self->operator-();
		sgt::vec3i* lret = new sgt::vec3i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3i >::push(L,lret,true);

		return 1;
	}

	// bool sgt::vec3i::operator<(const sgt::vec3i & v) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::vec3i::operator<(const sgt::vec3i & v) const function, expected prototype:\nbool sgt::vec3i::operator<(const sgt::vec3i & v) const\nClass arguments details:\narg 1 ID = 76239305\n");
		}

		const sgt::vec3i* v_ptr=(Luna< sgt::vec3i >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::vec3i::operator< function");
		}
		const sgt::vec3i & v=*v_ptr;

		sgt::vec3i* self=(Luna< sgt::vec3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::vec3i::operator<(const sgt::vec3i &) const. Got : '%s'",typeid(Luna< sgt::vec3i >::check(L,1)).name());
		}
		bool lret = self->operator<(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

sgt::vec3i* LunaTraits< sgt::vec3i >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_vec3i::_bind_ctor(L);
}

void LunaTraits< sgt::vec3i >::_bind_dtor(sgt::vec3i* obj) {
	delete obj;
}

const char LunaTraits< sgt::vec3i >::className[] = "vec3i";
const char LunaTraits< sgt::vec3i >::fullName[] = "sgt::vec3i";
const char LunaTraits< sgt::vec3i >::moduleName[] = "sgt";
const char* LunaTraits< sgt::vec3i >::parents[] = {0};
const int LunaTraits< sgt::vec3i >::hash = 76239305;
const int LunaTraits< sgt::vec3i >::uniqueIDs[] = {76239305,0};

luna_RegType LunaTraits< sgt::vec3i >::methods[] = {
	{"length", &luna_wrapper_sgt_vec3i::_bind_length},
	{"squaredLength", &luna_wrapper_sgt_vec3i::_bind_squaredLength},
	{"distanceTo", &luna_wrapper_sgt_vec3i::_bind_distanceTo},
	{"squaredDistanceTo", &luna_wrapper_sgt_vec3i::_bind_squaredDistanceTo},
	{"dot", &luna_wrapper_sgt_vec3i::_bind_dot},
	{"normalize", &luna_wrapper_sgt_vec3i::_bind_normalize},
	{"cross", &luna_wrapper_sgt_vec3i::_bind_cross},
	{"xy", &luna_wrapper_sgt_vec3i::_bind_xy},
	{"getX", &luna_wrapper_sgt_vec3i::_bind_getX},
	{"getY", &luna_wrapper_sgt_vec3i::_bind_getY},
	{"getZ", &luna_wrapper_sgt_vec3i::_bind_getZ},
	{"setX", &luna_wrapper_sgt_vec3i::_bind_setX},
	{"setY", &luna_wrapper_sgt_vec3i::_bind_setY},
	{"setZ", &luna_wrapper_sgt_vec3i::_bind_setZ},
	{"op_index", &luna_wrapper_sgt_vec3i::_bind_op_index},
	{"__eq", &luna_wrapper_sgt_vec3i::_bind___eq},
	{"op_neq", &luna_wrapper_sgt_vec3i::_bind_op_neq},
	{"__add", &luna_wrapper_sgt_vec3i::_bind___add},
	{"__sub", &luna_wrapper_sgt_vec3i::_bind___sub},
	{"__mul", &luna_wrapper_sgt_vec3i::_bind___mul},
	{"__div", &luna_wrapper_sgt_vec3i::_bind___div},
	{"__unm", &luna_wrapper_sgt_vec3i::_bind___unm},
	{"__lt", &luna_wrapper_sgt_vec3i::_bind___lt},
	{"dynCast", &luna_wrapper_sgt_vec3i::_bind_dynCast},
	{"fromVoid", &luna_wrapper_sgt_vec3i::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_vec3i::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::vec3i >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::vec3i >::enumValues[] = {
	{0,0}
};



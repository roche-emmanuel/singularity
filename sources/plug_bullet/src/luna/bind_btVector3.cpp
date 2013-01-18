#include <plug_common.h>

class luna_wrapper_btVector3 {
public:
	typedef Luna< btVector3 > luna_t;

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

		btVector3* self= (btVector3*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btVector3 >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btVector3 >::check(L,1));
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

		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btVector3");
		
		return luna_dynamicCast(L,converters,"btVector3",name);
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


	// Function checkers:
	inline static bool _lg_typecheck_dot(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_length2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_length(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_distance2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_distance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_safeNormalize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_normalize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_normalized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_rotate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_angle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_absolute(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_cross(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_triple(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_minAxis(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_maxAxis(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_furthestAxis(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_closestAxis(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setInterpolate3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_lerp(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
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

	inline static bool _lg_typecheck_setW(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_x(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_y(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_z(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_w(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMax(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setValue(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSkewSymmetricMatrix(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91544891)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,91544891)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,91544891)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setZero(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isZero(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_fuzzyZero(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_maxDot(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91544891)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_minDot(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91544891)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_dot3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 7 valid operators)
	inline static bool _lg_typecheck_op_add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_mult_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_mult_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_div(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}


	// Constructor binds:
	// btVector3::btVector3()
	static btVector3* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3::btVector3() function, expected prototype:\nbtVector3::btVector3()\nClass arguments details:\n");
		}


		return new btVector3();
	}

	// btVector3::btVector3(const float & _x, const float & _y, const float & _z)
	static btVector3* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3::btVector3(const float & _x, const float & _y, const float & _z) function, expected prototype:\nbtVector3::btVector3(const float & _x, const float & _y, const float & _z)\nClass arguments details:\n");
		}

		float _x=(float)lua_tonumber(L,1);
		float _y=(float)lua_tonumber(L,2);
		float _z=(float)lua_tonumber(L,3);

		return new btVector3(_x, _y, _z);
	}

	// Overload binder for btVector3::btVector3
	static btVector3* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btVector3, cannot match any of the overloads for function btVector3:\n  btVector3()\n  btVector3(const float &, const float &, const float &)\n");
		return NULL;
	}


	// Function binds:
	// float btVector3::dot(const btVector3 & v) const
	static int _bind_dot(lua_State *L) {
		if (!_lg_typecheck_dot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btVector3::dot(const btVector3 & v) const function, expected prototype:\nfloat btVector3::dot(const btVector3 & v) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* v_ptr=(Luna< btVector3 >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in btVector3::dot function");
		}
		const btVector3 & v=*v_ptr;

		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btVector3::dot(const btVector3 &) const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		float lret = self->dot(v);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btVector3::length2() const
	static int _bind_length2(lua_State *L) {
		if (!_lg_typecheck_length2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btVector3::length2() const function, expected prototype:\nfloat btVector3::length2() const\nClass arguments details:\n");
		}


		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btVector3::length2() const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		float lret = self->length2();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btVector3::length() const
	static int _bind_length(lua_State *L) {
		if (!_lg_typecheck_length(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btVector3::length() const function, expected prototype:\nfloat btVector3::length() const\nClass arguments details:\n");
		}


		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btVector3::length() const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		float lret = self->length();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btVector3::distance2(const btVector3 & v) const
	static int _bind_distance2(lua_State *L) {
		if (!_lg_typecheck_distance2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btVector3::distance2(const btVector3 & v) const function, expected prototype:\nfloat btVector3::distance2(const btVector3 & v) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* v_ptr=(Luna< btVector3 >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in btVector3::distance2 function");
		}
		const btVector3 & v=*v_ptr;

		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btVector3::distance2(const btVector3 &) const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		float lret = self->distance2(v);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btVector3::distance(const btVector3 & v) const
	static int _bind_distance(lua_State *L) {
		if (!_lg_typecheck_distance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btVector3::distance(const btVector3 & v) const function, expected prototype:\nfloat btVector3::distance(const btVector3 & v) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* v_ptr=(Luna< btVector3 >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in btVector3::distance function");
		}
		const btVector3 & v=*v_ptr;

		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btVector3::distance(const btVector3 &) const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		float lret = self->distance(v);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 & btVector3::safeNormalize()
	static int _bind_safeNormalize(lua_State *L) {
		if (!_lg_typecheck_safeNormalize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 & btVector3::safeNormalize() function, expected prototype:\nbtVector3 & btVector3::safeNormalize()\nClass arguments details:\n");
		}


		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 & btVector3::safeNormalize(). Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		const btVector3* lret = &self->safeNormalize();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 & btVector3::normalize()
	static int _bind_normalize(lua_State *L) {
		if (!_lg_typecheck_normalize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 & btVector3::normalize() function, expected prototype:\nbtVector3 & btVector3::normalize()\nClass arguments details:\n");
		}


		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 & btVector3::normalize(). Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		const btVector3* lret = &self->normalize();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btVector3::normalized() const
	static int _bind_normalized(lua_State *L) {
		if (!_lg_typecheck_normalized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btVector3::normalized() const function, expected prototype:\nbtVector3 btVector3::normalized() const\nClass arguments details:\n");
		}


		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btVector3::normalized() const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		btVector3 stack_lret = self->normalized();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// btVector3 btVector3::rotate(const btVector3 & wAxis, const float angle) const
	static int _bind_rotate(lua_State *L) {
		if (!_lg_typecheck_rotate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btVector3::rotate(const btVector3 & wAxis, const float angle) const function, expected prototype:\nbtVector3 btVector3::rotate(const btVector3 & wAxis, const float angle) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* wAxis_ptr=(Luna< btVector3 >::check(L,2));
		if( !wAxis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg wAxis in btVector3::rotate function");
		}
		const btVector3 & wAxis=*wAxis_ptr;
		float angle=(float)lua_tonumber(L,3);

		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btVector3::rotate(const btVector3 &, const float) const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		btVector3 stack_lret = self->rotate(wAxis, angle);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// float btVector3::angle(const btVector3 & v) const
	static int _bind_angle(lua_State *L) {
		if (!_lg_typecheck_angle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btVector3::angle(const btVector3 & v) const function, expected prototype:\nfloat btVector3::angle(const btVector3 & v) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* v_ptr=(Luna< btVector3 >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in btVector3::angle function");
		}
		const btVector3 & v=*v_ptr;

		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btVector3::angle(const btVector3 &) const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		float lret = self->angle(v);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btVector3::absolute() const
	static int _bind_absolute(lua_State *L) {
		if (!_lg_typecheck_absolute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btVector3::absolute() const function, expected prototype:\nbtVector3 btVector3::absolute() const\nClass arguments details:\n");
		}


		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btVector3::absolute() const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		btVector3 stack_lret = self->absolute();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// btVector3 btVector3::cross(const btVector3 & v) const
	static int _bind_cross(lua_State *L) {
		if (!_lg_typecheck_cross(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btVector3::cross(const btVector3 & v) const function, expected prototype:\nbtVector3 btVector3::cross(const btVector3 & v) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* v_ptr=(Luna< btVector3 >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in btVector3::cross function");
		}
		const btVector3 & v=*v_ptr;

		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btVector3::cross(const btVector3 &) const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		btVector3 stack_lret = self->cross(v);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// float btVector3::triple(const btVector3 & v1, const btVector3 & v2) const
	static int _bind_triple(lua_State *L) {
		if (!_lg_typecheck_triple(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btVector3::triple(const btVector3 & v1, const btVector3 & v2) const function, expected prototype:\nfloat btVector3::triple(const btVector3 & v1, const btVector3 & v2) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* v1_ptr=(Luna< btVector3 >::check(L,2));
		if( !v1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v1 in btVector3::triple function");
		}
		const btVector3 & v1=*v1_ptr;
		const btVector3* v2_ptr=(Luna< btVector3 >::check(L,3));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in btVector3::triple function");
		}
		const btVector3 & v2=*v2_ptr;

		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btVector3::triple(const btVector3 &, const btVector3 &) const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		float lret = self->triple(v1, v2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btVector3::minAxis() const
	static int _bind_minAxis(lua_State *L) {
		if (!_lg_typecheck_minAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btVector3::minAxis() const function, expected prototype:\nint btVector3::minAxis() const\nClass arguments details:\n");
		}


		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btVector3::minAxis() const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		int lret = self->minAxis();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btVector3::maxAxis() const
	static int _bind_maxAxis(lua_State *L) {
		if (!_lg_typecheck_maxAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btVector3::maxAxis() const function, expected prototype:\nint btVector3::maxAxis() const\nClass arguments details:\n");
		}


		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btVector3::maxAxis() const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		int lret = self->maxAxis();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btVector3::furthestAxis() const
	static int _bind_furthestAxis(lua_State *L) {
		if (!_lg_typecheck_furthestAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btVector3::furthestAxis() const function, expected prototype:\nint btVector3::furthestAxis() const\nClass arguments details:\n");
		}


		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btVector3::furthestAxis() const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		int lret = self->furthestAxis();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btVector3::closestAxis() const
	static int _bind_closestAxis(lua_State *L) {
		if (!_lg_typecheck_closestAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btVector3::closestAxis() const function, expected prototype:\nint btVector3::closestAxis() const\nClass arguments details:\n");
		}


		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btVector3::closestAxis() const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		int lret = self->closestAxis();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btVector3::setInterpolate3(const btVector3 & v0, const btVector3 & v1, float rt)
	static int _bind_setInterpolate3(lua_State *L) {
		if (!_lg_typecheck_setInterpolate3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btVector3::setInterpolate3(const btVector3 & v0, const btVector3 & v1, float rt) function, expected prototype:\nvoid btVector3::setInterpolate3(const btVector3 & v0, const btVector3 & v1, float rt)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* v0_ptr=(Luna< btVector3 >::check(L,2));
		if( !v0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v0 in btVector3::setInterpolate3 function");
		}
		const btVector3 & v0=*v0_ptr;
		const btVector3* v1_ptr=(Luna< btVector3 >::check(L,3));
		if( !v1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v1 in btVector3::setInterpolate3 function");
		}
		const btVector3 & v1=*v1_ptr;
		float rt=(float)lua_tonumber(L,4);

		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btVector3::setInterpolate3(const btVector3 &, const btVector3 &, float). Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		self->setInterpolate3(v0, v1, rt);

		return 0;
	}

	// btVector3 btVector3::lerp(const btVector3 & v, const float & t) const
	static int _bind_lerp(lua_State *L) {
		if (!_lg_typecheck_lerp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btVector3::lerp(const btVector3 & v, const float & t) const function, expected prototype:\nbtVector3 btVector3::lerp(const btVector3 & v, const float & t) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* v_ptr=(Luna< btVector3 >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in btVector3::lerp function");
		}
		const btVector3 & v=*v_ptr;
		float t=(float)lua_tonumber(L,3);

		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btVector3::lerp(const btVector3 &, const float &) const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		btVector3 stack_lret = self->lerp(v, t);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// const float & btVector3::getX() const
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const float & btVector3::getX() const function, expected prototype:\nconst float & btVector3::getX() const\nClass arguments details:\n");
		}


		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const float & btVector3::getX() const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		const float & lret = self->getX();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const float & btVector3::getY() const
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const float & btVector3::getY() const function, expected prototype:\nconst float & btVector3::getY() const\nClass arguments details:\n");
		}


		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const float & btVector3::getY() const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		const float & lret = self->getY();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const float & btVector3::getZ() const
	static int _bind_getZ(lua_State *L) {
		if (!_lg_typecheck_getZ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const float & btVector3::getZ() const function, expected prototype:\nconst float & btVector3::getZ() const\nClass arguments details:\n");
		}


		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const float & btVector3::getZ() const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		const float & lret = self->getZ();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btVector3::setX(float _x)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btVector3::setX(float _x) function, expected prototype:\nvoid btVector3::setX(float _x)\nClass arguments details:\n");
		}

		float _x=(float)lua_tonumber(L,2);

		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btVector3::setX(float). Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		self->setX(_x);

		return 0;
	}

	// void btVector3::setY(float _y)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btVector3::setY(float _y) function, expected prototype:\nvoid btVector3::setY(float _y)\nClass arguments details:\n");
		}

		float _y=(float)lua_tonumber(L,2);

		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btVector3::setY(float). Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		self->setY(_y);

		return 0;
	}

	// void btVector3::setZ(float _z)
	static int _bind_setZ(lua_State *L) {
		if (!_lg_typecheck_setZ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btVector3::setZ(float _z) function, expected prototype:\nvoid btVector3::setZ(float _z)\nClass arguments details:\n");
		}

		float _z=(float)lua_tonumber(L,2);

		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btVector3::setZ(float). Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		self->setZ(_z);

		return 0;
	}

	// void btVector3::setW(float _w)
	static int _bind_setW(lua_State *L) {
		if (!_lg_typecheck_setW(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btVector3::setW(float _w) function, expected prototype:\nvoid btVector3::setW(float _w)\nClass arguments details:\n");
		}

		float _w=(float)lua_tonumber(L,2);

		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btVector3::setW(float). Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		self->setW(_w);

		return 0;
	}

	// const float & btVector3::x() const
	static int _bind_x(lua_State *L) {
		if (!_lg_typecheck_x(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const float & btVector3::x() const function, expected prototype:\nconst float & btVector3::x() const\nClass arguments details:\n");
		}


		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const float & btVector3::x() const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		const float & lret = self->x();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const float & btVector3::y() const
	static int _bind_y(lua_State *L) {
		if (!_lg_typecheck_y(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const float & btVector3::y() const function, expected prototype:\nconst float & btVector3::y() const\nClass arguments details:\n");
		}


		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const float & btVector3::y() const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		const float & lret = self->y();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const float & btVector3::z() const
	static int _bind_z(lua_State *L) {
		if (!_lg_typecheck_z(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const float & btVector3::z() const function, expected prototype:\nconst float & btVector3::z() const\nClass arguments details:\n");
		}


		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const float & btVector3::z() const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		const float & lret = self->z();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const float & btVector3::w() const
	static int _bind_w(lua_State *L) {
		if (!_lg_typecheck_w(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const float & btVector3::w() const function, expected prototype:\nconst float & btVector3::w() const\nClass arguments details:\n");
		}


		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const float & btVector3::w() const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		const float & lret = self->w();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btVector3::setMax(const btVector3 & other)
	static int _bind_setMax(lua_State *L) {
		if (!_lg_typecheck_setMax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btVector3::setMax(const btVector3 & other) function, expected prototype:\nvoid btVector3::setMax(const btVector3 & other)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* other_ptr=(Luna< btVector3 >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in btVector3::setMax function");
		}
		const btVector3 & other=*other_ptr;

		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btVector3::setMax(const btVector3 &). Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		self->setMax(other);

		return 0;
	}

	// void btVector3::setMin(const btVector3 & other)
	static int _bind_setMin(lua_State *L) {
		if (!_lg_typecheck_setMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btVector3::setMin(const btVector3 & other) function, expected prototype:\nvoid btVector3::setMin(const btVector3 & other)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* other_ptr=(Luna< btVector3 >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in btVector3::setMin function");
		}
		const btVector3 & other=*other_ptr;

		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btVector3::setMin(const btVector3 &). Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		self->setMin(other);

		return 0;
	}

	// void btVector3::setValue(const float & _x, const float & _y, const float & _z)
	static int _bind_setValue(lua_State *L) {
		if (!_lg_typecheck_setValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btVector3::setValue(const float & _x, const float & _y, const float & _z) function, expected prototype:\nvoid btVector3::setValue(const float & _x, const float & _y, const float & _z)\nClass arguments details:\n");
		}

		float _x=(float)lua_tonumber(L,2);
		float _y=(float)lua_tonumber(L,3);
		float _z=(float)lua_tonumber(L,4);

		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btVector3::setValue(const float &, const float &, const float &). Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		self->setValue(_x, _y, _z);

		return 0;
	}

	// void btVector3::getSkewSymmetricMatrix(btVector3 * v0, btVector3 * v1, btVector3 * v2) const
	static int _bind_getSkewSymmetricMatrix(lua_State *L) {
		if (!_lg_typecheck_getSkewSymmetricMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btVector3::getSkewSymmetricMatrix(btVector3 * v0, btVector3 * v1, btVector3 * v2) const function, expected prototype:\nvoid btVector3::getSkewSymmetricMatrix(btVector3 * v0, btVector3 * v1, btVector3 * v2) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		btVector3* v0=(Luna< btVector3 >::check(L,2));
		btVector3* v1=(Luna< btVector3 >::check(L,3));
		btVector3* v2=(Luna< btVector3 >::check(L,4));

		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btVector3::getSkewSymmetricMatrix(btVector3 *, btVector3 *, btVector3 *) const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		self->getSkewSymmetricMatrix(v0, v1, v2);

		return 0;
	}

	// void btVector3::setZero()
	static int _bind_setZero(lua_State *L) {
		if (!_lg_typecheck_setZero(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btVector3::setZero() function, expected prototype:\nvoid btVector3::setZero()\nClass arguments details:\n");
		}


		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btVector3::setZero(). Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		self->setZero();

		return 0;
	}

	// bool btVector3::isZero() const
	static int _bind_isZero(lua_State *L) {
		if (!_lg_typecheck_isZero(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btVector3::isZero() const function, expected prototype:\nbool btVector3::isZero() const\nClass arguments details:\n");
		}


		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btVector3::isZero() const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		bool lret = self->isZero();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btVector3::fuzzyZero() const
	static int _bind_fuzzyZero(lua_State *L) {
		if (!_lg_typecheck_fuzzyZero(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btVector3::fuzzyZero() const function, expected prototype:\nbool btVector3::fuzzyZero() const\nClass arguments details:\n");
		}


		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btVector3::fuzzyZero() const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		bool lret = self->fuzzyZero();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// long btVector3::maxDot(const btVector3 * array, long array_count, float & dotOut) const
	static int _bind_maxDot(lua_State *L) {
		if (!_lg_typecheck_maxDot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long btVector3::maxDot(const btVector3 * array, long array_count, float & dotOut) const function, expected prototype:\nlong btVector3::maxDot(const btVector3 * array, long array_count, float & dotOut) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* array=(Luna< btVector3 >::check(L,2));
		long array_count=(long)lua_tointeger(L,3);
		float dotOut=(float)lua_tonumber(L,4);

		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long btVector3::maxDot(const btVector3 *, long, float &) const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		long lret = self->maxDot(array, array_count, dotOut);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long btVector3::minDot(const btVector3 * array, long array_count, float & dotOut) const
	static int _bind_minDot(lua_State *L) {
		if (!_lg_typecheck_minDot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long btVector3::minDot(const btVector3 * array, long array_count, float & dotOut) const function, expected prototype:\nlong btVector3::minDot(const btVector3 * array, long array_count, float & dotOut) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* array=(Luna< btVector3 >::check(L,2));
		long array_count=(long)lua_tointeger(L,3);
		float dotOut=(float)lua_tonumber(L,4);

		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long btVector3::minDot(const btVector3 *, long, float &) const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		long lret = self->minDot(array, array_count, dotOut);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btVector3::dot3(const btVector3 & v0, const btVector3 & v1, const btVector3 & v2) const
	static int _bind_dot3(lua_State *L) {
		if (!_lg_typecheck_dot3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btVector3::dot3(const btVector3 & v0, const btVector3 & v1, const btVector3 & v2) const function, expected prototype:\nbtVector3 btVector3::dot3(const btVector3 & v0, const btVector3 & v1, const btVector3 & v2) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btVector3* v0_ptr=(Luna< btVector3 >::check(L,2));
		if( !v0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v0 in btVector3::dot3 function");
		}
		const btVector3 & v0=*v0_ptr;
		const btVector3* v1_ptr=(Luna< btVector3 >::check(L,3));
		if( !v1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v1 in btVector3::dot3 function");
		}
		const btVector3 & v1=*v1_ptr;
		const btVector3* v2_ptr=(Luna< btVector3 >::check(L,4));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in btVector3::dot3 function");
		}
		const btVector3 & v2=*v2_ptr;

		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btVector3::dot3(const btVector3 &, const btVector3 &, const btVector3 &) const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		btVector3 stack_lret = self->dot3(v0, v1, v2);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}


	// Operator binds:
	// btVector3 & btVector3::operator+=(const btVector3 & v)
	static int _bind_op_add(lua_State *L) {
		if (!_lg_typecheck_op_add(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 & btVector3::operator+=(const btVector3 & v) function, expected prototype:\nbtVector3 & btVector3::operator+=(const btVector3 & v)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* v_ptr=(Luna< btVector3 >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in btVector3::operator+= function");
		}
		const btVector3 & v=*v_ptr;

		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 & btVector3::operator+=(const btVector3 &). Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		const btVector3* lret = &self->operator+=(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 & btVector3::operator-=(const btVector3 & v)
	static int _bind_op_sub(lua_State *L) {
		if (!_lg_typecheck_op_sub(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 & btVector3::operator-=(const btVector3 & v) function, expected prototype:\nbtVector3 & btVector3::operator-=(const btVector3 & v)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* v_ptr=(Luna< btVector3 >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in btVector3::operator-= function");
		}
		const btVector3 & v=*v_ptr;

		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 & btVector3::operator-=(const btVector3 &). Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		const btVector3* lret = &self->operator-=(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 & btVector3::operator*=(const float & s)
	static int _bind_op_mult_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_mult_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 & btVector3::operator*=(const float & s) function, expected prototype:\nbtVector3 & btVector3::operator*=(const float & s)\nClass arguments details:\n");
		}

		float s=(float)lua_tonumber(L,2);

		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 & btVector3::operator*=(const float &). Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		const btVector3* lret = &self->operator*=(s);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 & btVector3::operator*=(const btVector3 & v)
	static int _bind_op_mult_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_mult_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 & btVector3::operator*=(const btVector3 & v) function, expected prototype:\nbtVector3 & btVector3::operator*=(const btVector3 & v)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* v_ptr=(Luna< btVector3 >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in btVector3::operator*= function");
		}
		const btVector3 & v=*v_ptr;

		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 & btVector3::operator*=(const btVector3 &). Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		const btVector3* lret = &self->operator*=(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btVector3::operator*=
	static int _bind_op_mult(lua_State *L) {
		if (_lg_typecheck_op_mult_overload_1(L)) return _bind_op_mult_overload_1(L);
		if (_lg_typecheck_op_mult_overload_2(L)) return _bind_op_mult_overload_2(L);

		luaL_error(L, "error in function operator*=, cannot match any of the overloads for function operator*=:\n  operator*=(const float &)\n  operator*=(const btVector3 &)\n");
		return 0;
	}

	// btVector3 & btVector3::operator/=(const float & s)
	static int _bind_op_div(lua_State *L) {
		if (!_lg_typecheck_op_div(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 & btVector3::operator/=(const float & s) function, expected prototype:\nbtVector3 & btVector3::operator/=(const float & s)\nClass arguments details:\n");
		}

		float s=(float)lua_tonumber(L,2);

		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 & btVector3::operator/=(const float &). Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		const btVector3* lret = &self->operator/=(s);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// bool btVector3::operator==(const btVector3 & other) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btVector3::operator==(const btVector3 & other) const function, expected prototype:\nbool btVector3::operator==(const btVector3 & other) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* other_ptr=(Luna< btVector3 >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in btVector3::operator== function");
		}
		const btVector3 & other=*other_ptr;

		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btVector3::operator==(const btVector3 &) const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		bool lret = self->operator==(other);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btVector3::operator!=(const btVector3 & other) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btVector3::operator!=(const btVector3 & other) const function, expected prototype:\nbool btVector3::operator!=(const btVector3 & other) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* other_ptr=(Luna< btVector3 >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in btVector3::operator!= function");
		}
		const btVector3 & other=*other_ptr;

		btVector3* self=(Luna< btVector3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btVector3::operator!=(const btVector3 &) const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		bool lret = self->operator!=(other);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

btVector3* LunaTraits< btVector3 >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btVector3::_bind_ctor(L);
}

void LunaTraits< btVector3 >::_bind_dtor(btVector3* obj) {
	delete obj;
}

const char LunaTraits< btVector3 >::className[] = "btVector3";
const char LunaTraits< btVector3 >::fullName[] = "btVector3";
const char LunaTraits< btVector3 >::moduleName[] = "bullet";
const char* LunaTraits< btVector3 >::parents[] = {0};
const int LunaTraits< btVector3 >::hash = 91544891;
const int LunaTraits< btVector3 >::uniqueIDs[] = {91544891,0};

luna_RegType LunaTraits< btVector3 >::methods[] = {
	{"dot", &luna_wrapper_btVector3::_bind_dot},
	{"length2", &luna_wrapper_btVector3::_bind_length2},
	{"length", &luna_wrapper_btVector3::_bind_length},
	{"distance2", &luna_wrapper_btVector3::_bind_distance2},
	{"distance", &luna_wrapper_btVector3::_bind_distance},
	{"safeNormalize", &luna_wrapper_btVector3::_bind_safeNormalize},
	{"normalize", &luna_wrapper_btVector3::_bind_normalize},
	{"normalized", &luna_wrapper_btVector3::_bind_normalized},
	{"rotate", &luna_wrapper_btVector3::_bind_rotate},
	{"angle", &luna_wrapper_btVector3::_bind_angle},
	{"absolute", &luna_wrapper_btVector3::_bind_absolute},
	{"cross", &luna_wrapper_btVector3::_bind_cross},
	{"triple", &luna_wrapper_btVector3::_bind_triple},
	{"minAxis", &luna_wrapper_btVector3::_bind_minAxis},
	{"maxAxis", &luna_wrapper_btVector3::_bind_maxAxis},
	{"furthestAxis", &luna_wrapper_btVector3::_bind_furthestAxis},
	{"closestAxis", &luna_wrapper_btVector3::_bind_closestAxis},
	{"setInterpolate3", &luna_wrapper_btVector3::_bind_setInterpolate3},
	{"lerp", &luna_wrapper_btVector3::_bind_lerp},
	{"getX", &luna_wrapper_btVector3::_bind_getX},
	{"getY", &luna_wrapper_btVector3::_bind_getY},
	{"getZ", &luna_wrapper_btVector3::_bind_getZ},
	{"setX", &luna_wrapper_btVector3::_bind_setX},
	{"setY", &luna_wrapper_btVector3::_bind_setY},
	{"setZ", &luna_wrapper_btVector3::_bind_setZ},
	{"setW", &luna_wrapper_btVector3::_bind_setW},
	{"x", &luna_wrapper_btVector3::_bind_x},
	{"y", &luna_wrapper_btVector3::_bind_y},
	{"z", &luna_wrapper_btVector3::_bind_z},
	{"w", &luna_wrapper_btVector3::_bind_w},
	{"setMax", &luna_wrapper_btVector3::_bind_setMax},
	{"setMin", &luna_wrapper_btVector3::_bind_setMin},
	{"setValue", &luna_wrapper_btVector3::_bind_setValue},
	{"getSkewSymmetricMatrix", &luna_wrapper_btVector3::_bind_getSkewSymmetricMatrix},
	{"setZero", &luna_wrapper_btVector3::_bind_setZero},
	{"isZero", &luna_wrapper_btVector3::_bind_isZero},
	{"fuzzyZero", &luna_wrapper_btVector3::_bind_fuzzyZero},
	{"maxDot", &luna_wrapper_btVector3::_bind_maxDot},
	{"minDot", &luna_wrapper_btVector3::_bind_minDot},
	{"dot3", &luna_wrapper_btVector3::_bind_dot3},
	{"op_add", &luna_wrapper_btVector3::_bind_op_add},
	{"op_sub", &luna_wrapper_btVector3::_bind_op_sub},
	{"op_mult", &luna_wrapper_btVector3::_bind_op_mult},
	{"op_div", &luna_wrapper_btVector3::_bind_op_div},
	{"__eq", &luna_wrapper_btVector3::_bind___eq},
	{"op_neq", &luna_wrapper_btVector3::_bind_op_neq},
	{"dynCast", &luna_wrapper_btVector3::_bind_dynCast},
	{"fromVoid", &luna_wrapper_btVector3::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btVector3::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btVector3 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btVector3 >::enumValues[] = {
	{0,0}
};



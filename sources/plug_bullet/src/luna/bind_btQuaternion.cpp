#include <plug_common.h>

class luna_wrapper_btQuaternion {
public:
	typedef Luna< btQuaternion > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btQuaternion* self= (btQuaternion*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btQuaternion >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2139400) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btQuadWord >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btQuadWord(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btQuaternion* ptr= dynamic_cast< btQuaternion* >(Luna< btQuadWord >::check(L,1));
		btQuaternion* ptr= luna_caster< btQuadWord, btQuaternion >::cast(Luna< btQuadWord >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btQuaternion >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,1))) ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setRotation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEuler(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEulerZYX(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_dot(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2139400) ) return false;
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

	inline static bool _lg_typecheck_normalize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_normalized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_angle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2139400) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAngle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAxis(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_inverse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_farthest(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2139400) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_nearest(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2139400) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_slerp(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2139400) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getW(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIdentity(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 10 valid operators)
	inline static bool _lg_typecheck_op_add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2139400) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2139400) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_mult_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_mult_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2139400) ) return false;
		if( (!(Luna< btQuadWord >::checkSubType< btQuaternion >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck___div(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_div(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2139400) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2139400) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___unm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		return true;
	}


	// Constructor binds:
	// btQuaternion::btQuaternion()
	static btQuaternion* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in btQuaternion::btQuaternion() function, expected prototype:\nbtQuaternion::btQuaternion()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new btQuaternion();
	}

	// btQuaternion::btQuaternion(const float & _x, const float & _y, const float & _z, const float & _w)
	static btQuaternion* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in btQuaternion::btQuaternion(const float & _x, const float & _y, const float & _z, const float & _w) function, expected prototype:\nbtQuaternion::btQuaternion(const float & _x, const float & _y, const float & _z, const float & _w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const float _x=(const float)lua_tonumber(L,1);
		const float _y=(const float)lua_tonumber(L,2);
		const float _z=(const float)lua_tonumber(L,3);
		const float _w=(const float)lua_tonumber(L,4);

		return new btQuaternion(_x, _y, _z, _w);
	}

	// btQuaternion::btQuaternion(const btVector3 & _axis, const float & _angle)
	static btQuaternion* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in btQuaternion::btQuaternion(const btVector3 & _axis, const float & _angle) function, expected prototype:\nbtQuaternion::btQuaternion(const btVector3 & _axis, const float & _angle)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* _axis_ptr=(Luna< btVector3 >::check(L,1));
		if( !_axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _axis in btQuaternion::btQuaternion function");
		}
		const btVector3 & _axis=*_axis_ptr;
		const float _angle=(const float)lua_tonumber(L,2);

		return new btQuaternion(_axis, _angle);
	}

	// btQuaternion::btQuaternion(const float & yaw, const float & pitch, const float & roll)
	static btQuaternion* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in btQuaternion::btQuaternion(const float & yaw, const float & pitch, const float & roll) function, expected prototype:\nbtQuaternion::btQuaternion(const float & yaw, const float & pitch, const float & roll)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const float yaw=(const float)lua_tonumber(L,1);
		const float pitch=(const float)lua_tonumber(L,2);
		const float roll=(const float)lua_tonumber(L,3);

		return new btQuaternion(yaw, pitch, roll);
	}

	// Overload binder for btQuaternion::btQuaternion
	static btQuaternion* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function btQuaternion, cannot match any of the overloads for function btQuaternion:\n  btQuaternion()\n  btQuaternion(const float &, const float &, const float &, const float &)\n  btQuaternion(const btVector3 &, const float &)\n  btQuaternion(const float &, const float &, const float &)\n");
		return NULL;
	}


	// Function binds:
	// void btQuaternion::setRotation(const btVector3 & axis, const float & _angle)
	static int _bind_setRotation(lua_State *L) {
		if (!_lg_typecheck_setRotation(L)) {
			luaL_error(L, "luna typecheck failed in void btQuaternion::setRotation(const btVector3 & axis, const float & _angle) function, expected prototype:\nvoid btQuaternion::setRotation(const btVector3 & axis, const float & _angle)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* axis_ptr=(Luna< btVector3 >::check(L,2));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in btQuaternion::setRotation function");
		}
		const btVector3 & axis=*axis_ptr;
		const float _angle=(const float)lua_tonumber(L,3);

		btQuaternion* self=Luna< btQuadWord >::checkSubType< btQuaternion >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btQuaternion::setRotation(const btVector3 &, const float &). Got : '%s'\n%s",typeid(Luna< btQuadWord >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRotation(axis, _angle);

		return 0;
	}

	// void btQuaternion::setEuler(const float & yaw, const float & pitch, const float & roll)
	static int _bind_setEuler(lua_State *L) {
		if (!_lg_typecheck_setEuler(L)) {
			luaL_error(L, "luna typecheck failed in void btQuaternion::setEuler(const float & yaw, const float & pitch, const float & roll) function, expected prototype:\nvoid btQuaternion::setEuler(const float & yaw, const float & pitch, const float & roll)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const float yaw=(const float)lua_tonumber(L,2);
		const float pitch=(const float)lua_tonumber(L,3);
		const float roll=(const float)lua_tonumber(L,4);

		btQuaternion* self=Luna< btQuadWord >::checkSubType< btQuaternion >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btQuaternion::setEuler(const float &, const float &, const float &). Got : '%s'\n%s",typeid(Luna< btQuadWord >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setEuler(yaw, pitch, roll);

		return 0;
	}

	// void btQuaternion::setEulerZYX(const float & yaw, const float & pitch, const float & roll)
	static int _bind_setEulerZYX(lua_State *L) {
		if (!_lg_typecheck_setEulerZYX(L)) {
			luaL_error(L, "luna typecheck failed in void btQuaternion::setEulerZYX(const float & yaw, const float & pitch, const float & roll) function, expected prototype:\nvoid btQuaternion::setEulerZYX(const float & yaw, const float & pitch, const float & roll)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const float yaw=(const float)lua_tonumber(L,2);
		const float pitch=(const float)lua_tonumber(L,3);
		const float roll=(const float)lua_tonumber(L,4);

		btQuaternion* self=Luna< btQuadWord >::checkSubType< btQuaternion >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btQuaternion::setEulerZYX(const float &, const float &, const float &). Got : '%s'\n%s",typeid(Luna< btQuadWord >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setEulerZYX(yaw, pitch, roll);

		return 0;
	}

	// float btQuaternion::dot(const btQuaternion & q) const
	static int _bind_dot(lua_State *L) {
		if (!_lg_typecheck_dot(L)) {
			luaL_error(L, "luna typecheck failed in float btQuaternion::dot(const btQuaternion & q) const function, expected prototype:\nfloat btQuaternion::dot(const btQuaternion & q) const\nClass arguments details:\narg 1 ID = 2139400\n\n%s",luna_dumpStack(L).c_str());
		}

		const btQuaternion* q_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,2));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in btQuaternion::dot function");
		}
		const btQuaternion & q=*q_ptr;

		btQuaternion* self=Luna< btQuadWord >::checkSubType< btQuaternion >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btQuaternion::dot(const btQuaternion &) const. Got : '%s'\n%s",typeid(Luna< btQuadWord >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->dot(q);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btQuaternion::length2() const
	static int _bind_length2(lua_State *L) {
		if (!_lg_typecheck_length2(L)) {
			luaL_error(L, "luna typecheck failed in float btQuaternion::length2() const function, expected prototype:\nfloat btQuaternion::length2() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btQuaternion* self=Luna< btQuadWord >::checkSubType< btQuaternion >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btQuaternion::length2() const. Got : '%s'\n%s",typeid(Luna< btQuadWord >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->length2();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btQuaternion::length() const
	static int _bind_length(lua_State *L) {
		if (!_lg_typecheck_length(L)) {
			luaL_error(L, "luna typecheck failed in float btQuaternion::length() const function, expected prototype:\nfloat btQuaternion::length() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btQuaternion* self=Luna< btQuadWord >::checkSubType< btQuaternion >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btQuaternion::length() const. Got : '%s'\n%s",typeid(Luna< btQuadWord >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->length();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btQuaternion & btQuaternion::normalize()
	static int _bind_normalize(lua_State *L) {
		if (!_lg_typecheck_normalize(L)) {
			luaL_error(L, "luna typecheck failed in btQuaternion & btQuaternion::normalize() function, expected prototype:\nbtQuaternion & btQuaternion::normalize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btQuaternion* self=Luna< btQuadWord >::checkSubType< btQuaternion >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btQuaternion & btQuaternion::normalize(). Got : '%s'\n%s",typeid(Luna< btQuadWord >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btQuaternion* lret = &self->normalize();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btQuaternion >::push(L,lret,false);

		return 1;
	}

	// btQuaternion btQuaternion::normalized() const
	static int _bind_normalized(lua_State *L) {
		if (!_lg_typecheck_normalized(L)) {
			luaL_error(L, "luna typecheck failed in btQuaternion btQuaternion::normalized() const function, expected prototype:\nbtQuaternion btQuaternion::normalized() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btQuaternion* self=Luna< btQuadWord >::checkSubType< btQuaternion >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btQuaternion btQuaternion::normalized() const. Got : '%s'\n%s",typeid(Luna< btQuadWord >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btQuaternion stack_lret = self->normalized();
		btQuaternion* lret = new btQuaternion(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btQuaternion >::push(L,lret,true);

		return 1;
	}

	// float btQuaternion::angle(const btQuaternion & q) const
	static int _bind_angle(lua_State *L) {
		if (!_lg_typecheck_angle(L)) {
			luaL_error(L, "luna typecheck failed in float btQuaternion::angle(const btQuaternion & q) const function, expected prototype:\nfloat btQuaternion::angle(const btQuaternion & q) const\nClass arguments details:\narg 1 ID = 2139400\n\n%s",luna_dumpStack(L).c_str());
		}

		const btQuaternion* q_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,2));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in btQuaternion::angle function");
		}
		const btQuaternion & q=*q_ptr;

		btQuaternion* self=Luna< btQuadWord >::checkSubType< btQuaternion >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btQuaternion::angle(const btQuaternion &) const. Got : '%s'\n%s",typeid(Luna< btQuadWord >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->angle(q);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btQuaternion::getAngle() const
	static int _bind_getAngle(lua_State *L) {
		if (!_lg_typecheck_getAngle(L)) {
			luaL_error(L, "luna typecheck failed in float btQuaternion::getAngle() const function, expected prototype:\nfloat btQuaternion::getAngle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btQuaternion* self=Luna< btQuadWord >::checkSubType< btQuaternion >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btQuaternion::getAngle() const. Got : '%s'\n%s",typeid(Luna< btQuadWord >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getAngle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btQuaternion::getAxis() const
	static int _bind_getAxis(lua_State *L) {
		if (!_lg_typecheck_getAxis(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btQuaternion::getAxis() const function, expected prototype:\nbtVector3 btQuaternion::getAxis() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btQuaternion* self=Luna< btQuadWord >::checkSubType< btQuaternion >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btQuaternion::getAxis() const. Got : '%s'\n%s",typeid(Luna< btQuadWord >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 stack_lret = self->getAxis();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// btQuaternion btQuaternion::inverse() const
	static int _bind_inverse(lua_State *L) {
		if (!_lg_typecheck_inverse(L)) {
			luaL_error(L, "luna typecheck failed in btQuaternion btQuaternion::inverse() const function, expected prototype:\nbtQuaternion btQuaternion::inverse() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btQuaternion* self=Luna< btQuadWord >::checkSubType< btQuaternion >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btQuaternion btQuaternion::inverse() const. Got : '%s'\n%s",typeid(Luna< btQuadWord >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btQuaternion stack_lret = self->inverse();
		btQuaternion* lret = new btQuaternion(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btQuaternion >::push(L,lret,true);

		return 1;
	}

	// btQuaternion btQuaternion::farthest(const btQuaternion & qd) const
	static int _bind_farthest(lua_State *L) {
		if (!_lg_typecheck_farthest(L)) {
			luaL_error(L, "luna typecheck failed in btQuaternion btQuaternion::farthest(const btQuaternion & qd) const function, expected prototype:\nbtQuaternion btQuaternion::farthest(const btQuaternion & qd) const\nClass arguments details:\narg 1 ID = 2139400\n\n%s",luna_dumpStack(L).c_str());
		}

		const btQuaternion* qd_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,2));
		if( !qd_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg qd in btQuaternion::farthest function");
		}
		const btQuaternion & qd=*qd_ptr;

		btQuaternion* self=Luna< btQuadWord >::checkSubType< btQuaternion >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btQuaternion btQuaternion::farthest(const btQuaternion &) const. Got : '%s'\n%s",typeid(Luna< btQuadWord >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btQuaternion stack_lret = self->farthest(qd);
		btQuaternion* lret = new btQuaternion(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btQuaternion >::push(L,lret,true);

		return 1;
	}

	// btQuaternion btQuaternion::nearest(const btQuaternion & qd) const
	static int _bind_nearest(lua_State *L) {
		if (!_lg_typecheck_nearest(L)) {
			luaL_error(L, "luna typecheck failed in btQuaternion btQuaternion::nearest(const btQuaternion & qd) const function, expected prototype:\nbtQuaternion btQuaternion::nearest(const btQuaternion & qd) const\nClass arguments details:\narg 1 ID = 2139400\n\n%s",luna_dumpStack(L).c_str());
		}

		const btQuaternion* qd_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,2));
		if( !qd_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg qd in btQuaternion::nearest function");
		}
		const btQuaternion & qd=*qd_ptr;

		btQuaternion* self=Luna< btQuadWord >::checkSubType< btQuaternion >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btQuaternion btQuaternion::nearest(const btQuaternion &) const. Got : '%s'\n%s",typeid(Luna< btQuadWord >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btQuaternion stack_lret = self->nearest(qd);
		btQuaternion* lret = new btQuaternion(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btQuaternion >::push(L,lret,true);

		return 1;
	}

	// btQuaternion btQuaternion::slerp(const btQuaternion & q, const float & t) const
	static int _bind_slerp(lua_State *L) {
		if (!_lg_typecheck_slerp(L)) {
			luaL_error(L, "luna typecheck failed in btQuaternion btQuaternion::slerp(const btQuaternion & q, const float & t) const function, expected prototype:\nbtQuaternion btQuaternion::slerp(const btQuaternion & q, const float & t) const\nClass arguments details:\narg 1 ID = 2139400\n\n%s",luna_dumpStack(L).c_str());
		}

		const btQuaternion* q_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,2));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in btQuaternion::slerp function");
		}
		const btQuaternion & q=*q_ptr;
		const float t=(const float)lua_tonumber(L,3);

		btQuaternion* self=Luna< btQuadWord >::checkSubType< btQuaternion >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btQuaternion btQuaternion::slerp(const btQuaternion &, const float &) const. Got : '%s'\n%s",typeid(Luna< btQuadWord >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btQuaternion stack_lret = self->slerp(q, t);
		btQuaternion* lret = new btQuaternion(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btQuaternion >::push(L,lret,true);

		return 1;
	}

	// const float & btQuaternion::getW() const
	static int _bind_getW(lua_State *L) {
		if (!_lg_typecheck_getW(L)) {
			luaL_error(L, "luna typecheck failed in const float & btQuaternion::getW() const function, expected prototype:\nconst float & btQuaternion::getW() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btQuaternion* self=Luna< btQuadWord >::checkSubType< btQuaternion >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const float & btQuaternion::getW() const. Got : '%s'\n%s",typeid(Luna< btQuadWord >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const float & lret = self->getW();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static const btQuaternion & btQuaternion::getIdentity()
	static int _bind_getIdentity(lua_State *L) {
		if (!_lg_typecheck_getIdentity(L)) {
			luaL_error(L, "luna typecheck failed in static const btQuaternion & btQuaternion::getIdentity() function, expected prototype:\nstatic const btQuaternion & btQuaternion::getIdentity()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		const btQuaternion* lret = &btQuaternion::getIdentity();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btQuaternion >::push(L,lret,false);

		return 1;
	}


	// Operator binds:
	// btQuaternion & btQuaternion::operator+=(const btQuaternion & q)
	static int _bind_op_add(lua_State *L) {
		if (!_lg_typecheck_op_add(L)) {
			luaL_error(L, "luna typecheck failed in btQuaternion & btQuaternion::operator+=(const btQuaternion & q) function, expected prototype:\nbtQuaternion & btQuaternion::operator+=(const btQuaternion & q)\nClass arguments details:\narg 1 ID = 2139400\n\n%s",luna_dumpStack(L).c_str());
		}

		const btQuaternion* q_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,2));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in btQuaternion::operator+= function");
		}
		const btQuaternion & q=*q_ptr;

		btQuaternion* self=Luna< btQuadWord >::checkSubType< btQuaternion >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btQuaternion & btQuaternion::operator+=(const btQuaternion &). Got : '%s'\n%s",typeid(Luna< btQuadWord >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btQuaternion* lret = &self->operator+=(q);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btQuaternion >::push(L,lret,false);

		return 1;
	}

	// btQuaternion & btQuaternion::operator-=(const btQuaternion & q)
	static int _bind_op_sub(lua_State *L) {
		if (!_lg_typecheck_op_sub(L)) {
			luaL_error(L, "luna typecheck failed in btQuaternion & btQuaternion::operator-=(const btQuaternion & q) function, expected prototype:\nbtQuaternion & btQuaternion::operator-=(const btQuaternion & q)\nClass arguments details:\narg 1 ID = 2139400\n\n%s",luna_dumpStack(L).c_str());
		}

		const btQuaternion* q_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,2));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in btQuaternion::operator-= function");
		}
		const btQuaternion & q=*q_ptr;

		btQuaternion* self=Luna< btQuadWord >::checkSubType< btQuaternion >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btQuaternion & btQuaternion::operator-=(const btQuaternion &). Got : '%s'\n%s",typeid(Luna< btQuadWord >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btQuaternion* lret = &self->operator-=(q);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btQuaternion >::push(L,lret,false);

		return 1;
	}

	// btQuaternion & btQuaternion::operator*=(const float & s)
	static int _bind_op_mult_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_mult_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in btQuaternion & btQuaternion::operator*=(const float & s) function, expected prototype:\nbtQuaternion & btQuaternion::operator*=(const float & s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const float s=(const float)lua_tonumber(L,2);

		btQuaternion* self=Luna< btQuadWord >::checkSubType< btQuaternion >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btQuaternion & btQuaternion::operator*=(const float &). Got : '%s'\n%s",typeid(Luna< btQuadWord >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btQuaternion* lret = &self->operator*=(s);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btQuaternion >::push(L,lret,false);

		return 1;
	}

	// btQuaternion & btQuaternion::operator*=(const btQuaternion & q)
	static int _bind_op_mult_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_mult_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in btQuaternion & btQuaternion::operator*=(const btQuaternion & q) function, expected prototype:\nbtQuaternion & btQuaternion::operator*=(const btQuaternion & q)\nClass arguments details:\narg 1 ID = 2139400\n\n%s",luna_dumpStack(L).c_str());
		}

		const btQuaternion* q_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,2));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in btQuaternion::operator*= function");
		}
		const btQuaternion & q=*q_ptr;

		btQuaternion* self=Luna< btQuadWord >::checkSubType< btQuaternion >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btQuaternion & btQuaternion::operator*=(const btQuaternion &). Got : '%s'\n%s",typeid(Luna< btQuadWord >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btQuaternion* lret = &self->operator*=(q);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btQuaternion >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btQuaternion::operator*=
	static int _bind_op_mult(lua_State *L) {
		if (_lg_typecheck_op_mult_overload_1(L)) return _bind_op_mult_overload_1(L);
		if (_lg_typecheck_op_mult_overload_2(L)) return _bind_op_mult_overload_2(L);

		luaL_error(L, "error in function operator*=, cannot match any of the overloads for function operator*=:\n  operator*=(const float &)\n  operator*=(const btQuaternion &)\n");
		return 0;
	}

	// btQuaternion btQuaternion::operator*(const float & s) const
	static int _bind___mul(lua_State *L) {
		if (!_lg_typecheck___mul(L)) {
			luaL_error(L, "luna typecheck failed in btQuaternion btQuaternion::operator*(const float & s) const function, expected prototype:\nbtQuaternion btQuaternion::operator*(const float & s) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const float s=(const float)lua_tonumber(L,2);

		btQuaternion* self=Luna< btQuadWord >::checkSubType< btQuaternion >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btQuaternion btQuaternion::operator*(const float &) const. Got : '%s'\n%s",typeid(Luna< btQuadWord >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btQuaternion stack_lret = self->operator*(s);
		btQuaternion* lret = new btQuaternion(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btQuaternion >::push(L,lret,true);

		return 1;
	}

	// btQuaternion btQuaternion::operator/(const float & s) const
	static int _bind___div(lua_State *L) {
		if (!_lg_typecheck___div(L)) {
			luaL_error(L, "luna typecheck failed in btQuaternion btQuaternion::operator/(const float & s) const function, expected prototype:\nbtQuaternion btQuaternion::operator/(const float & s) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const float s=(const float)lua_tonumber(L,2);

		btQuaternion* self=Luna< btQuadWord >::checkSubType< btQuaternion >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btQuaternion btQuaternion::operator/(const float &) const. Got : '%s'\n%s",typeid(Luna< btQuadWord >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btQuaternion stack_lret = self->operator/(s);
		btQuaternion* lret = new btQuaternion(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btQuaternion >::push(L,lret,true);

		return 1;
	}

	// btQuaternion & btQuaternion::operator/=(const float & s)
	static int _bind_op_div(lua_State *L) {
		if (!_lg_typecheck_op_div(L)) {
			luaL_error(L, "luna typecheck failed in btQuaternion & btQuaternion::operator/=(const float & s) function, expected prototype:\nbtQuaternion & btQuaternion::operator/=(const float & s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const float s=(const float)lua_tonumber(L,2);

		btQuaternion* self=Luna< btQuadWord >::checkSubType< btQuaternion >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btQuaternion & btQuaternion::operator/=(const float &). Got : '%s'\n%s",typeid(Luna< btQuadWord >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btQuaternion* lret = &self->operator/=(s);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btQuaternion >::push(L,lret,false);

		return 1;
	}

	// btQuaternion btQuaternion::operator+(const btQuaternion & q2) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luaL_error(L, "luna typecheck failed in btQuaternion btQuaternion::operator+(const btQuaternion & q2) const function, expected prototype:\nbtQuaternion btQuaternion::operator+(const btQuaternion & q2) const\nClass arguments details:\narg 1 ID = 2139400\n\n%s",luna_dumpStack(L).c_str());
		}

		const btQuaternion* q2_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,2));
		if( !q2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q2 in btQuaternion::operator+ function");
		}
		const btQuaternion & q2=*q2_ptr;

		btQuaternion* self=Luna< btQuadWord >::checkSubType< btQuaternion >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btQuaternion btQuaternion::operator+(const btQuaternion &) const. Got : '%s'\n%s",typeid(Luna< btQuadWord >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btQuaternion stack_lret = self->operator+(q2);
		btQuaternion* lret = new btQuaternion(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btQuaternion >::push(L,lret,true);

		return 1;
	}

	// btQuaternion btQuaternion::operator-(const btQuaternion & q2) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luaL_error(L, "luna typecheck failed in btQuaternion btQuaternion::operator-(const btQuaternion & q2) const function, expected prototype:\nbtQuaternion btQuaternion::operator-(const btQuaternion & q2) const\nClass arguments details:\narg 1 ID = 2139400\n\n%s",luna_dumpStack(L).c_str());
		}

		const btQuaternion* q2_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,2));
		if( !q2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q2 in btQuaternion::operator- function");
		}
		const btQuaternion & q2=*q2_ptr;

		btQuaternion* self=Luna< btQuadWord >::checkSubType< btQuaternion >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btQuaternion btQuaternion::operator-(const btQuaternion &) const. Got : '%s'\n%s",typeid(Luna< btQuadWord >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btQuaternion stack_lret = self->operator-(q2);
		btQuaternion* lret = new btQuaternion(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btQuaternion >::push(L,lret,true);

		return 1;
	}

	// btQuaternion btQuaternion::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luaL_error(L, "luna typecheck failed in btQuaternion btQuaternion::operator-() const function, expected prototype:\nbtQuaternion btQuaternion::operator-() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btQuaternion* self=Luna< btQuadWord >::checkSubType< btQuaternion >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btQuaternion btQuaternion::operator-() const. Got : '%s'\n%s",typeid(Luna< btQuadWord >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btQuaternion stack_lret = self->operator-();
		btQuaternion* lret = new btQuaternion(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btQuaternion >::push(L,lret,true);

		return 1;
	}


};

btQuaternion* LunaTraits< btQuaternion >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btQuaternion::_bind_ctor(L);
}

void LunaTraits< btQuaternion >::_bind_dtor(btQuaternion* obj) {
	delete obj;
}

const char LunaTraits< btQuaternion >::className[] = "btQuaternion";
const char LunaTraits< btQuaternion >::fullName[] = "btQuaternion";
const char LunaTraits< btQuaternion >::moduleName[] = "bullet";
const char* LunaTraits< btQuaternion >::parents[] = {"bullet.btQuadWord", 0};
const int LunaTraits< btQuaternion >::hash = 59488328;
const int LunaTraits< btQuaternion >::uniqueIDs[] = {2139400,0};

luna_RegType LunaTraits< btQuaternion >::methods[] = {
	{"setRotation", &luna_wrapper_btQuaternion::_bind_setRotation},
	{"setEuler", &luna_wrapper_btQuaternion::_bind_setEuler},
	{"setEulerZYX", &luna_wrapper_btQuaternion::_bind_setEulerZYX},
	{"dot", &luna_wrapper_btQuaternion::_bind_dot},
	{"length2", &luna_wrapper_btQuaternion::_bind_length2},
	{"length", &luna_wrapper_btQuaternion::_bind_length},
	{"normalize", &luna_wrapper_btQuaternion::_bind_normalize},
	{"normalized", &luna_wrapper_btQuaternion::_bind_normalized},
	{"angle", &luna_wrapper_btQuaternion::_bind_angle},
	{"getAngle", &luna_wrapper_btQuaternion::_bind_getAngle},
	{"getAxis", &luna_wrapper_btQuaternion::_bind_getAxis},
	{"inverse", &luna_wrapper_btQuaternion::_bind_inverse},
	{"farthest", &luna_wrapper_btQuaternion::_bind_farthest},
	{"nearest", &luna_wrapper_btQuaternion::_bind_nearest},
	{"slerp", &luna_wrapper_btQuaternion::_bind_slerp},
	{"getW", &luna_wrapper_btQuaternion::_bind_getW},
	{"getIdentity", &luna_wrapper_btQuaternion::_bind_getIdentity},
	{"op_add", &luna_wrapper_btQuaternion::_bind_op_add},
	{"op_sub", &luna_wrapper_btQuaternion::_bind_op_sub},
	{"op_mult", &luna_wrapper_btQuaternion::_bind_op_mult},
	{"__mul", &luna_wrapper_btQuaternion::_bind___mul},
	{"__div", &luna_wrapper_btQuaternion::_bind___div},
	{"op_div", &luna_wrapper_btQuaternion::_bind_op_div},
	{"__add", &luna_wrapper_btQuaternion::_bind___add},
	{"__sub", &luna_wrapper_btQuaternion::_bind___sub},
	{"__unm", &luna_wrapper_btQuaternion::_bind___unm},
	{"fromVoid", &luna_wrapper_btQuaternion::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btQuaternion::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btQuaternion >::converters[] = {
	{"btQuadWord", &luna_wrapper_btQuaternion::_cast_from_btQuadWord},
	{0,0}
};

luna_RegEnumType LunaTraits< btQuaternion >::enumValues[] = {
	{0,0}
};



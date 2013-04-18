#include <plug_common.h>

class luna_wrapper_sgt_quatf {
public:
	typedef Luna< sgt::quatf > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72098446) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(sgt::quatf*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgt::quatf* rhs =(Luna< sgt::quatf >::check(L,2));
		sgt::quatf* self=(Luna< sgt::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgt::quatf* self= (sgt::quatf*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::quatf >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72098446) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< sgt::quatf >::check(L,1));
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

		sgt::quatf* self=(Luna< sgt::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::quatf");
		
		return luna_dynamicCast(L,converters,"sgt::quatf",name);
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

		if( !Luna<void>::has_uniqueid(L,1,72098446) ) return false;
		if( (!(Luna< sgt::quatf >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76239302) ) return false;
		if( (!(Luna< sgt::vec3f >::check(L,1))) ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76239302) ) return false;
		if( (!(Luna< sgt::vec3f >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,76239302) ) return false;
		if( (!(Luna< sgt::vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67824786) ) return false;
		if( (!(Luna< sgt::mat3f >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_inverse(lua_State *L) {
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

	inline static bool _lg_typecheck_toMat3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_toMat4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAxis(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAngle(lua_State *L) {
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
	// (found 2 valid operators)
	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72098446) ) return false;
		if( (!(Luna< sgt::quatf >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239302) ) return false;
		if( (!(Luna< sgt::vec3f >::check(L,2))) ) return false;
		return true;
	}


	// Constructor binds:
	// sgt::quatf::quatf()
	static sgt::quatf* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in sgt::quatf::quatf() function, expected prototype:\nsgt::quatf::quatf()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new sgt::quatf();
	}

	// sgt::quatf::quatf(float x, float y, float z, float w)
	static sgt::quatf* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::quatf::quatf(float x, float y, float z, float w) function, expected prototype:\nsgt::quatf::quatf(float x, float y, float z, float w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,1);
		float y=(float)lua_tonumber(L,2);
		float z=(float)lua_tonumber(L,3);
		float w=(float)lua_tonumber(L,4);

		return new sgt::quatf(x, y, z, w);
	}

	// sgt::quatf::quatf(const sgt::quatf & v)
	static sgt::quatf* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in sgt::quatf::quatf(const sgt::quatf & v) function, expected prototype:\nsgt::quatf::quatf(const sgt::quatf & v)\nClass arguments details:\narg 1 ID = 72098446\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::quatf* v_ptr=(Luna< sgt::quatf >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::quatf::quatf function");
		}
		const sgt::quatf & v=*v_ptr;

		return new sgt::quatf(v);
	}

	// sgt::quatf::quatf(const sgt::vec3f & axis, float angle)
	static sgt::quatf* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in sgt::quatf::quatf(const sgt::vec3f & axis, float angle) function, expected prototype:\nsgt::quatf::quatf(const sgt::vec3f & axis, float angle)\nClass arguments details:\narg 1 ID = 76239302\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec3f* axis_ptr=(Luna< sgt::vec3f >::check(L,1));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in sgt::quatf::quatf function");
		}
		const sgt::vec3f & axis=*axis_ptr;
		float angle=(float)lua_tonumber(L,2);

		return new sgt::quatf(axis, angle);
	}

	// sgt::quatf::quatf(const sgt::vec3f & to, const sgt::vec3f & from)
	static sgt::quatf* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in sgt::quatf::quatf(const sgt::vec3f & to, const sgt::vec3f & from) function, expected prototype:\nsgt::quatf::quatf(const sgt::vec3f & to, const sgt::vec3f & from)\nClass arguments details:\narg 1 ID = 76239302\narg 2 ID = 76239302\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec3f* to_ptr=(Luna< sgt::vec3f >::check(L,1));
		if( !to_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg to in sgt::quatf::quatf function");
		}
		const sgt::vec3f & to=*to_ptr;
		const sgt::vec3f* from_ptr=(Luna< sgt::vec3f >::check(L,2));
		if( !from_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg from in sgt::quatf::quatf function");
		}
		const sgt::vec3f & from=*from_ptr;

		return new sgt::quatf(to, from);
	}

	// sgt::quatf::quatf(const sgt::mat3f & m)
	static sgt::quatf* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in sgt::quatf::quatf(const sgt::mat3f & m) function, expected prototype:\nsgt::quatf::quatf(const sgt::mat3f & m)\nClass arguments details:\narg 1 ID = 67824786\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::mat3f* m_ptr=(Luna< sgt::mat3f >::check(L,1));
		if( !m_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m in sgt::quatf::quatf function");
		}
		const sgt::mat3f & m=*m_ptr;

		return new sgt::quatf(m);
	}

	// Overload binder for sgt::quatf::quatf
	static sgt::quatf* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function quatf, cannot match any of the overloads for function quatf:\n  quatf()\n  quatf(float, float, float, float)\n  quatf(const sgt::quatf &)\n  quatf(const sgt::vec3f &, float)\n  quatf(const sgt::vec3f &, const sgt::vec3f &)\n  quatf(const sgt::mat3f &)\n");
		return NULL;
	}


	// Function binds:
	// sgt::quatf sgt::quatf::inverse() const
	static int _bind_inverse(lua_State *L) {
		if (!_lg_typecheck_inverse(L)) {
			luaL_error(L, "luna typecheck failed in sgt::quatf sgt::quatf::inverse() const function, expected prototype:\nsgt::quatf sgt::quatf::inverse() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::quatf* self=(Luna< sgt::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::quatf sgt::quatf::inverse() const. Got : '%s'\n%s",typeid(Luna< sgt::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::quatf stack_lret = self->inverse();
		sgt::quatf* lret = new sgt::quatf(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::quatf >::push(L,lret,true);

		return 1;
	}

	// float sgt::quatf::length() const
	static int _bind_length(lua_State *L) {
		if (!_lg_typecheck_length(L)) {
			luaL_error(L, "luna typecheck failed in float sgt::quatf::length() const function, expected prototype:\nfloat sgt::quatf::length() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::quatf* self=(Luna< sgt::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float sgt::quatf::length() const. Got : '%s'\n%s",typeid(Luna< sgt::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->length();
		lua_pushnumber(L,lret);

		return 1;
	}

	// sgt::quatf sgt::quatf::normalize() const
	static int _bind_normalize(lua_State *L) {
		if (!_lg_typecheck_normalize(L)) {
			luaL_error(L, "luna typecheck failed in sgt::quatf sgt::quatf::normalize() const function, expected prototype:\nsgt::quatf sgt::quatf::normalize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::quatf* self=(Luna< sgt::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::quatf sgt::quatf::normalize() const. Got : '%s'\n%s",typeid(Luna< sgt::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::quatf stack_lret = self->normalize();
		sgt::quatf* lret = new sgt::quatf(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::quatf >::push(L,lret,true);

		return 1;
	}

	// sgt::mat3f sgt::quatf::toMat3() const
	static int _bind_toMat3(lua_State *L) {
		if (!_lg_typecheck_toMat3(L)) {
			luaL_error(L, "luna typecheck failed in sgt::mat3f sgt::quatf::toMat3() const function, expected prototype:\nsgt::mat3f sgt::quatf::toMat3() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::quatf* self=(Luna< sgt::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::mat3f sgt::quatf::toMat3() const. Got : '%s'\n%s",typeid(Luna< sgt::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::mat3f stack_lret = self->toMat3();
		sgt::mat3f* lret = new sgt::mat3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat3f >::push(L,lret,true);

		return 1;
	}

	// sgt::mat4f sgt::quatf::toMat4() const
	static int _bind_toMat4(lua_State *L) {
		if (!_lg_typecheck_toMat4(L)) {
			luaL_error(L, "luna typecheck failed in sgt::mat4f sgt::quatf::toMat4() const function, expected prototype:\nsgt::mat4f sgt::quatf::toMat4() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::quatf* self=(Luna< sgt::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::mat4f sgt::quatf::toMat4() const. Got : '%s'\n%s",typeid(Luna< sgt::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::mat4f stack_lret = self->toMat4();
		sgt::mat4f* lret = new sgt::mat4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4f >::push(L,lret,true);

		return 1;
	}

	// sgt::vec3f sgt::quatf::getAxis() const
	static int _bind_getAxis(lua_State *L) {
		if (!_lg_typecheck_getAxis(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec3f sgt::quatf::getAxis() const function, expected prototype:\nsgt::vec3f sgt::quatf::getAxis() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::quatf* self=(Luna< sgt::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec3f sgt::quatf::getAxis() const. Got : '%s'\n%s",typeid(Luna< sgt::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec3f stack_lret = self->getAxis();
		sgt::vec3f* lret = new sgt::vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3f >::push(L,lret,true);

		return 1;
	}

	// float sgt::quatf::getAngle() const
	static int _bind_getAngle(lua_State *L) {
		if (!_lg_typecheck_getAngle(L)) {
			luaL_error(L, "luna typecheck failed in float sgt::quatf::getAngle() const function, expected prototype:\nfloat sgt::quatf::getAngle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::quatf* self=(Luna< sgt::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float sgt::quatf::getAngle() const. Got : '%s'\n%s",typeid(Luna< sgt::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getAngle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float sgt::quatf::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luaL_error(L, "luna typecheck failed in float sgt::quatf::x() function, expected prototype:\nfloat sgt::quatf::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::quatf* self=(Luna< sgt::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float sgt::quatf::x(). Got : '%s'\n%s",typeid(Luna< sgt::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float sgt::quatf::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luaL_error(L, "luna typecheck failed in float sgt::quatf::y() function, expected prototype:\nfloat sgt::quatf::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::quatf* self=(Luna< sgt::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float sgt::quatf::y(). Got : '%s'\n%s",typeid(Luna< sgt::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float sgt::quatf::z()
	static int _bind_getZ(lua_State *L) {
		if (!_lg_typecheck_getZ(L)) {
			luaL_error(L, "luna typecheck failed in float sgt::quatf::z() function, expected prototype:\nfloat sgt::quatf::z()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::quatf* self=(Luna< sgt::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float sgt::quatf::z(). Got : '%s'\n%s",typeid(Luna< sgt::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->z;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float sgt::quatf::w()
	static int _bind_getW(lua_State *L) {
		if (!_lg_typecheck_getW(L)) {
			luaL_error(L, "luna typecheck failed in float sgt::quatf::w() function, expected prototype:\nfloat sgt::quatf::w()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::quatf* self=(Luna< sgt::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float sgt::quatf::w(). Got : '%s'\n%s",typeid(Luna< sgt::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->w;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::quatf::x(float value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::quatf::x(float value) function, expected prototype:\nvoid sgt::quatf::x(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		sgt::quatf* self=(Luna< sgt::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::quatf::x(float). Got : '%s'\n%s",typeid(Luna< sgt::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->x = value;

		return 0;
	}

	// void sgt::quatf::y(float value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::quatf::y(float value) function, expected prototype:\nvoid sgt::quatf::y(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		sgt::quatf* self=(Luna< sgt::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::quatf::y(float). Got : '%s'\n%s",typeid(Luna< sgt::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->y = value;

		return 0;
	}

	// void sgt::quatf::z(float value)
	static int _bind_setZ(lua_State *L) {
		if (!_lg_typecheck_setZ(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::quatf::z(float value) function, expected prototype:\nvoid sgt::quatf::z(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		sgt::quatf* self=(Luna< sgt::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::quatf::z(float). Got : '%s'\n%s",typeid(Luna< sgt::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->z = value;

		return 0;
	}

	// void sgt::quatf::w(float value)
	static int _bind_setW(lua_State *L) {
		if (!_lg_typecheck_setW(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::quatf::w(float value) function, expected prototype:\nvoid sgt::quatf::w(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		sgt::quatf* self=(Luna< sgt::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::quatf::w(float). Got : '%s'\n%s",typeid(Luna< sgt::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->w = value;

		return 0;
	}


	// Operator binds:
	// sgt::quatf sgt::quatf::operator*(const sgt::quatf & a) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in sgt::quatf sgt::quatf::operator*(const sgt::quatf & a) const function, expected prototype:\nsgt::quatf sgt::quatf::operator*(const sgt::quatf & a) const\nClass arguments details:\narg 1 ID = 72098446\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::quatf* a_ptr=(Luna< sgt::quatf >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in sgt::quatf::operator* function");
		}
		const sgt::quatf & a=*a_ptr;

		sgt::quatf* self=(Luna< sgt::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::quatf sgt::quatf::operator*(const sgt::quatf &) const. Got : '%s'\n%s",typeid(Luna< sgt::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::quatf stack_lret = self->operator*(a);
		sgt::quatf* lret = new sgt::quatf(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::quatf >::push(L,lret,true);

		return 1;
	}

	// sgt::vec3f sgt::quatf::operator*(const sgt::vec3f & a) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec3f sgt::quatf::operator*(const sgt::vec3f & a) const function, expected prototype:\nsgt::vec3f sgt::quatf::operator*(const sgt::vec3f & a) const\nClass arguments details:\narg 1 ID = 76239302\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec3f* a_ptr=(Luna< sgt::vec3f >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in sgt::quatf::operator* function");
		}
		const sgt::vec3f & a=*a_ptr;

		sgt::quatf* self=(Luna< sgt::quatf >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec3f sgt::quatf::operator*(const sgt::vec3f &) const. Got : '%s'\n%s",typeid(Luna< sgt::quatf >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec3f stack_lret = self->operator*(a);
		sgt::vec3f* lret = new sgt::vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3f >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::quatf::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const sgt::quatf &)\n  operator*(const sgt::vec3f &)\n");
		return 0;
	}


};

sgt::quatf* LunaTraits< sgt::quatf >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_quatf::_bind_ctor(L);
}

void LunaTraits< sgt::quatf >::_bind_dtor(sgt::quatf* obj) {
	delete obj;
}

const char LunaTraits< sgt::quatf >::className[] = "quatf";
const char LunaTraits< sgt::quatf >::fullName[] = "sgt::quatf";
const char LunaTraits< sgt::quatf >::moduleName[] = "sgt";
const char* LunaTraits< sgt::quatf >::parents[] = {0};
const int LunaTraits< sgt::quatf >::hash = 72098446;
const int LunaTraits< sgt::quatf >::uniqueIDs[] = {72098446,0};

luna_RegType LunaTraits< sgt::quatf >::methods[] = {
	{"inverse", &luna_wrapper_sgt_quatf::_bind_inverse},
	{"length", &luna_wrapper_sgt_quatf::_bind_length},
	{"normalize", &luna_wrapper_sgt_quatf::_bind_normalize},
	{"toMat3", &luna_wrapper_sgt_quatf::_bind_toMat3},
	{"toMat4", &luna_wrapper_sgt_quatf::_bind_toMat4},
	{"getAxis", &luna_wrapper_sgt_quatf::_bind_getAxis},
	{"getAngle", &luna_wrapper_sgt_quatf::_bind_getAngle},
	{"getX", &luna_wrapper_sgt_quatf::_bind_getX},
	{"getY", &luna_wrapper_sgt_quatf::_bind_getY},
	{"getZ", &luna_wrapper_sgt_quatf::_bind_getZ},
	{"getW", &luna_wrapper_sgt_quatf::_bind_getW},
	{"setX", &luna_wrapper_sgt_quatf::_bind_setX},
	{"setY", &luna_wrapper_sgt_quatf::_bind_setY},
	{"setZ", &luna_wrapper_sgt_quatf::_bind_setZ},
	{"setW", &luna_wrapper_sgt_quatf::_bind_setW},
	{"__mul", &luna_wrapper_sgt_quatf::_bind___mul},
	{"dynCast", &luna_wrapper_sgt_quatf::_bind_dynCast},
	{"__eq", &luna_wrapper_sgt_quatf::_bind___eq},
	{"fromVoid", &luna_wrapper_sgt_quatf::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_quatf::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::quatf >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::quatf >::enumValues[] = {
	{0,0}
};



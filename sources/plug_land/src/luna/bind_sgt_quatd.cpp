#include <plug_common.h>

class luna_wrapper_sgt_quatd {
public:
	typedef Luna< sgt::quatd > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72098444) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(sgt::quatd*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgt::quatd* rhs =(Luna< sgt::quatd >::check(L,2));
		sgt::quatd* self=(Luna< sgt::quatd >::check(L,1));
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

		sgt::quatd* self= (sgt::quatd*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::quatd >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72098444) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< sgt::quatd >::check(L,1));
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

		sgt::quatd* self=(Luna< sgt::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::quatd");
		
		return luna_dynamicCast(L,converters,"sgt::quatd",name);
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

		if( !Luna<void>::has_uniqueid(L,1,72098444) ) return false;
		if( (!(Luna< sgt::quatd >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76239300) ) return false;
		if( (!(Luna< sgt::vec3d >::check(L,1))) ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76239300) ) return false;
		if( (!(Luna< sgt::vec3d >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,76239300) ) return false;
		if( (!(Luna< sgt::vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67824784) ) return false;
		if( (!(Luna< sgt::mat3d >::check(L,1))) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,72098444) ) return false;
		if( (!(Luna< sgt::quatd >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239300) ) return false;
		if( (!(Luna< sgt::vec3d >::check(L,2))) ) return false;
		return true;
	}


	// Constructor binds:
	// sgt::quatd::quatd()
	static sgt::quatd* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in sgt::quatd::quatd() function, expected prototype:\nsgt::quatd::quatd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new sgt::quatd();
	}

	// sgt::quatd::quatd(double x, double y, double z, double w)
	static sgt::quatd* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::quatd::quatd(double x, double y, double z, double w) function, expected prototype:\nsgt::quatd::quatd(double x, double y, double z, double w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double x=(double)lua_tonumber(L,1);
		double y=(double)lua_tonumber(L,2);
		double z=(double)lua_tonumber(L,3);
		double w=(double)lua_tonumber(L,4);

		return new sgt::quatd(x, y, z, w);
	}

	// sgt::quatd::quatd(const sgt::quatd & v)
	static sgt::quatd* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in sgt::quatd::quatd(const sgt::quatd & v) function, expected prototype:\nsgt::quatd::quatd(const sgt::quatd & v)\nClass arguments details:\narg 1 ID = 72098444\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::quatd* v_ptr=(Luna< sgt::quatd >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::quatd::quatd function");
		}
		const sgt::quatd & v=*v_ptr;

		return new sgt::quatd(v);
	}

	// sgt::quatd::quatd(const sgt::vec3d & axis, double angle)
	static sgt::quatd* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in sgt::quatd::quatd(const sgt::vec3d & axis, double angle) function, expected prototype:\nsgt::quatd::quatd(const sgt::vec3d & axis, double angle)\nClass arguments details:\narg 1 ID = 76239300\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec3d* axis_ptr=(Luna< sgt::vec3d >::check(L,1));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in sgt::quatd::quatd function");
		}
		const sgt::vec3d & axis=*axis_ptr;
		double angle=(double)lua_tonumber(L,2);

		return new sgt::quatd(axis, angle);
	}

	// sgt::quatd::quatd(const sgt::vec3d & to, const sgt::vec3d & from)
	static sgt::quatd* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in sgt::quatd::quatd(const sgt::vec3d & to, const sgt::vec3d & from) function, expected prototype:\nsgt::quatd::quatd(const sgt::vec3d & to, const sgt::vec3d & from)\nClass arguments details:\narg 1 ID = 76239300\narg 2 ID = 76239300\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec3d* to_ptr=(Luna< sgt::vec3d >::check(L,1));
		if( !to_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg to in sgt::quatd::quatd function");
		}
		const sgt::vec3d & to=*to_ptr;
		const sgt::vec3d* from_ptr=(Luna< sgt::vec3d >::check(L,2));
		if( !from_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg from in sgt::quatd::quatd function");
		}
		const sgt::vec3d & from=*from_ptr;

		return new sgt::quatd(to, from);
	}

	// sgt::quatd::quatd(const sgt::mat3d & m)
	static sgt::quatd* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in sgt::quatd::quatd(const sgt::mat3d & m) function, expected prototype:\nsgt::quatd::quatd(const sgt::mat3d & m)\nClass arguments details:\narg 1 ID = 67824784\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::mat3d* m_ptr=(Luna< sgt::mat3d >::check(L,1));
		if( !m_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m in sgt::quatd::quatd function");
		}
		const sgt::mat3d & m=*m_ptr;

		return new sgt::quatd(m);
	}

	// Overload binder for sgt::quatd::quatd
	static sgt::quatd* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function quatd, cannot match any of the overloads for function quatd:\n  quatd()\n  quatd(double, double, double, double)\n  quatd(const sgt::quatd &)\n  quatd(const sgt::vec3d &, double)\n  quatd(const sgt::vec3d &, const sgt::vec3d &)\n  quatd(const sgt::mat3d &)\n");
		return NULL;
	}


	// Function binds:
	// sgt::quatd sgt::quatd::inverse() const
	static int _bind_inverse(lua_State *L) {
		if (!_lg_typecheck_inverse(L)) {
			luaL_error(L, "luna typecheck failed in sgt::quatd sgt::quatd::inverse() const function, expected prototype:\nsgt::quatd sgt::quatd::inverse() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::quatd* self=(Luna< sgt::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::quatd sgt::quatd::inverse() const. Got : '%s'\n%s",typeid(Luna< sgt::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::quatd stack_lret = self->inverse();
		sgt::quatd* lret = new sgt::quatd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::quatd >::push(L,lret,true);

		return 1;
	}

	// double sgt::quatd::length() const
	static int _bind_length(lua_State *L) {
		if (!_lg_typecheck_length(L)) {
			luaL_error(L, "luna typecheck failed in double sgt::quatd::length() const function, expected prototype:\ndouble sgt::quatd::length() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::quatd* self=(Luna< sgt::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double sgt::quatd::length() const. Got : '%s'\n%s",typeid(Luna< sgt::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->length();
		lua_pushnumber(L,lret);

		return 1;
	}

	// sgt::quatd sgt::quatd::normalize() const
	static int _bind_normalize(lua_State *L) {
		if (!_lg_typecheck_normalize(L)) {
			luaL_error(L, "luna typecheck failed in sgt::quatd sgt::quatd::normalize() const function, expected prototype:\nsgt::quatd sgt::quatd::normalize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::quatd* self=(Luna< sgt::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::quatd sgt::quatd::normalize() const. Got : '%s'\n%s",typeid(Luna< sgt::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::quatd stack_lret = self->normalize();
		sgt::quatd* lret = new sgt::quatd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::quatd >::push(L,lret,true);

		return 1;
	}

	// sgt::mat3d sgt::quatd::toMat3() const
	static int _bind_toMat3(lua_State *L) {
		if (!_lg_typecheck_toMat3(L)) {
			luaL_error(L, "luna typecheck failed in sgt::mat3d sgt::quatd::toMat3() const function, expected prototype:\nsgt::mat3d sgt::quatd::toMat3() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::quatd* self=(Luna< sgt::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::mat3d sgt::quatd::toMat3() const. Got : '%s'\n%s",typeid(Luna< sgt::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::mat3d stack_lret = self->toMat3();
		sgt::mat3d* lret = new sgt::mat3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat3d >::push(L,lret,true);

		return 1;
	}

	// sgt::mat4d sgt::quatd::toMat4() const
	static int _bind_toMat4(lua_State *L) {
		if (!_lg_typecheck_toMat4(L)) {
			luaL_error(L, "luna typecheck failed in sgt::mat4d sgt::quatd::toMat4() const function, expected prototype:\nsgt::mat4d sgt::quatd::toMat4() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::quatd* self=(Luna< sgt::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::mat4d sgt::quatd::toMat4() const. Got : '%s'\n%s",typeid(Luna< sgt::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::mat4d stack_lret = self->toMat4();
		sgt::mat4d* lret = new sgt::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4d >::push(L,lret,true);

		return 1;
	}

	// sgt::vec3d sgt::quatd::getAxis() const
	static int _bind_getAxis(lua_State *L) {
		if (!_lg_typecheck_getAxis(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec3d sgt::quatd::getAxis() const function, expected prototype:\nsgt::vec3d sgt::quatd::getAxis() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::quatd* self=(Luna< sgt::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec3d sgt::quatd::getAxis() const. Got : '%s'\n%s",typeid(Luna< sgt::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec3d stack_lret = self->getAxis();
		sgt::vec3d* lret = new sgt::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3d >::push(L,lret,true);

		return 1;
	}

	// double sgt::quatd::getAngle() const
	static int _bind_getAngle(lua_State *L) {
		if (!_lg_typecheck_getAngle(L)) {
			luaL_error(L, "luna typecheck failed in double sgt::quatd::getAngle() const function, expected prototype:\ndouble sgt::quatd::getAngle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::quatd* self=(Luna< sgt::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double sgt::quatd::getAngle() const. Got : '%s'\n%s",typeid(Luna< sgt::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getAngle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double sgt::quatd::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luaL_error(L, "luna typecheck failed in double sgt::quatd::x() function, expected prototype:\ndouble sgt::quatd::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::quatd* self=(Luna< sgt::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double sgt::quatd::x(). Got : '%s'\n%s",typeid(Luna< sgt::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double sgt::quatd::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luaL_error(L, "luna typecheck failed in double sgt::quatd::y() function, expected prototype:\ndouble sgt::quatd::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::quatd* self=(Luna< sgt::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double sgt::quatd::y(). Got : '%s'\n%s",typeid(Luna< sgt::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double sgt::quatd::z()
	static int _bind_getZ(lua_State *L) {
		if (!_lg_typecheck_getZ(L)) {
			luaL_error(L, "luna typecheck failed in double sgt::quatd::z() function, expected prototype:\ndouble sgt::quatd::z()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::quatd* self=(Luna< sgt::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double sgt::quatd::z(). Got : '%s'\n%s",typeid(Luna< sgt::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->z;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double sgt::quatd::w()
	static int _bind_getW(lua_State *L) {
		if (!_lg_typecheck_getW(L)) {
			luaL_error(L, "luna typecheck failed in double sgt::quatd::w() function, expected prototype:\ndouble sgt::quatd::w()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::quatd* self=(Luna< sgt::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double sgt::quatd::w(). Got : '%s'\n%s",typeid(Luna< sgt::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->w;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::quatd::x(double value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::quatd::x(double value) function, expected prototype:\nvoid sgt::quatd::x(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		sgt::quatd* self=(Luna< sgt::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::quatd::x(double). Got : '%s'\n%s",typeid(Luna< sgt::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->x = value;

		return 0;
	}

	// void sgt::quatd::y(double value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::quatd::y(double value) function, expected prototype:\nvoid sgt::quatd::y(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		sgt::quatd* self=(Luna< sgt::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::quatd::y(double). Got : '%s'\n%s",typeid(Luna< sgt::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->y = value;

		return 0;
	}

	// void sgt::quatd::z(double value)
	static int _bind_setZ(lua_State *L) {
		if (!_lg_typecheck_setZ(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::quatd::z(double value) function, expected prototype:\nvoid sgt::quatd::z(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		sgt::quatd* self=(Luna< sgt::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::quatd::z(double). Got : '%s'\n%s",typeid(Luna< sgt::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->z = value;

		return 0;
	}

	// void sgt::quatd::w(double value)
	static int _bind_setW(lua_State *L) {
		if (!_lg_typecheck_setW(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::quatd::w(double value) function, expected prototype:\nvoid sgt::quatd::w(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		sgt::quatd* self=(Luna< sgt::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::quatd::w(double). Got : '%s'\n%s",typeid(Luna< sgt::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->w = value;

		return 0;
	}


	// Operator binds:
	// sgt::quatd sgt::quatd::operator*(const sgt::quatd & a) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in sgt::quatd sgt::quatd::operator*(const sgt::quatd & a) const function, expected prototype:\nsgt::quatd sgt::quatd::operator*(const sgt::quatd & a) const\nClass arguments details:\narg 1 ID = 72098444\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::quatd* a_ptr=(Luna< sgt::quatd >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in sgt::quatd::operator* function");
		}
		const sgt::quatd & a=*a_ptr;

		sgt::quatd* self=(Luna< sgt::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::quatd sgt::quatd::operator*(const sgt::quatd &) const. Got : '%s'\n%s",typeid(Luna< sgt::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::quatd stack_lret = self->operator*(a);
		sgt::quatd* lret = new sgt::quatd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::quatd >::push(L,lret,true);

		return 1;
	}

	// sgt::vec3d sgt::quatd::operator*(const sgt::vec3d & a) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec3d sgt::quatd::operator*(const sgt::vec3d & a) const function, expected prototype:\nsgt::vec3d sgt::quatd::operator*(const sgt::vec3d & a) const\nClass arguments details:\narg 1 ID = 76239300\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::vec3d* a_ptr=(Luna< sgt::vec3d >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in sgt::quatd::operator* function");
		}
		const sgt::vec3d & a=*a_ptr;

		sgt::quatd* self=(Luna< sgt::quatd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec3d sgt::quatd::operator*(const sgt::vec3d &) const. Got : '%s'\n%s",typeid(Luna< sgt::quatd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec3d stack_lret = self->operator*(a);
		sgt::vec3d* lret = new sgt::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3d >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::quatd::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const sgt::quatd &)\n  operator*(const sgt::vec3d &)\n");
		return 0;
	}


};

sgt::quatd* LunaTraits< sgt::quatd >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_quatd::_bind_ctor(L);
}

void LunaTraits< sgt::quatd >::_bind_dtor(sgt::quatd* obj) {
	delete obj;
}

const char LunaTraits< sgt::quatd >::className[] = "quatd";
const char LunaTraits< sgt::quatd >::fullName[] = "sgt::quatd";
const char LunaTraits< sgt::quatd >::moduleName[] = "sgt";
const char* LunaTraits< sgt::quatd >::parents[] = {0};
const int LunaTraits< sgt::quatd >::hash = 72098444;
const int LunaTraits< sgt::quatd >::uniqueIDs[] = {72098444,0};

luna_RegType LunaTraits< sgt::quatd >::methods[] = {
	{"inverse", &luna_wrapper_sgt_quatd::_bind_inverse},
	{"length", &luna_wrapper_sgt_quatd::_bind_length},
	{"normalize", &luna_wrapper_sgt_quatd::_bind_normalize},
	{"toMat3", &luna_wrapper_sgt_quatd::_bind_toMat3},
	{"toMat4", &luna_wrapper_sgt_quatd::_bind_toMat4},
	{"getAxis", &luna_wrapper_sgt_quatd::_bind_getAxis},
	{"getAngle", &luna_wrapper_sgt_quatd::_bind_getAngle},
	{"getX", &luna_wrapper_sgt_quatd::_bind_getX},
	{"getY", &luna_wrapper_sgt_quatd::_bind_getY},
	{"getZ", &luna_wrapper_sgt_quatd::_bind_getZ},
	{"getW", &luna_wrapper_sgt_quatd::_bind_getW},
	{"setX", &luna_wrapper_sgt_quatd::_bind_setX},
	{"setY", &luna_wrapper_sgt_quatd::_bind_setY},
	{"setZ", &luna_wrapper_sgt_quatd::_bind_setZ},
	{"setW", &luna_wrapper_sgt_quatd::_bind_setW},
	{"__mul", &luna_wrapper_sgt_quatd::_bind___mul},
	{"dynCast", &luna_wrapper_sgt_quatd::_bind_dynCast},
	{"__eq", &luna_wrapper_sgt_quatd::_bind___eq},
	{"fromVoid", &luna_wrapper_sgt_quatd::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_quatd::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::quatd >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::quatd >::enumValues[] = {
	{0,0}
};



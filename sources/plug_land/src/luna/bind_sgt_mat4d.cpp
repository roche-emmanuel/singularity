#include <plug_common.h>

class luna_wrapper_sgt_mat4d {
public:
	typedef Luna< sgt::mat4d > luna_t;

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

		sgt::mat4d* self= (sgt::mat4d*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::mat4d >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67824815) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< sgt::mat4d >::check(L,1));
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

		sgt::mat4d* self=(Luna< sgt::mat4d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::mat4d");
		
		return luna_dynamicCast(L,converters,"sgt::mat4d",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=16 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		if( lua_isnumber(L,8)==0 ) return false;
		if( lua_isnumber(L,9)==0 ) return false;
		if( lua_isnumber(L,10)==0 ) return false;
		if( lua_isnumber(L,11)==0 ) return false;
		if( lua_isnumber(L,12)==0 ) return false;
		if( lua_isnumber(L,13)==0 ) return false;
		if( lua_isnumber(L,14)==0 ) return false;
		if( lua_isnumber(L,15)==0 ) return false;
		if( lua_isnumber(L,16)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67824784) ) return false;
		if( (!(Luna< sgt::mat3d >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_coefficients(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_transpose(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_adjoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_inverse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_mat3x3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_determinant(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_translate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76239300) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_rotatex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_rotatey(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_rotatez(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_perspectiveProjection(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_orthoProjection(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 12 valid operators)
	inline static bool _lg_typecheck_op_index_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_index_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67824784) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67824815) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67824815) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67824815) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67824815) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67824815) ) return false;
		if( (!(Luna< sgt::mat4d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239331) ) return false;
		if( (!(Luna< sgt::vec4d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239300) ) return false;
		if( (!(Luna< sgt::vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58086971) ) return false;
		if( (!(Luna< sgt::box3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Constructor binds:
	// sgt::mat4d::mat4d()
	static sgt::mat4d* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat4d::mat4d() function, expected prototype:\nsgt::mat4d::mat4d()\nClass arguments details:\n");
		}


		return new sgt::mat4d();
	}

	// sgt::mat4d::mat4d(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13, double m20, double m21, double m22, double m23, double m30, double m31, double m32, double m33)
	static sgt::mat4d* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat4d::mat4d(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13, double m20, double m21, double m22, double m23, double m30, double m31, double m32, double m33) function, expected prototype:\nsgt::mat4d::mat4d(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13, double m20, double m21, double m22, double m23, double m30, double m31, double m32, double m33)\nClass arguments details:\n");
		}

		double m00=(double)lua_tonumber(L,1);
		double m01=(double)lua_tonumber(L,2);
		double m02=(double)lua_tonumber(L,3);
		double m03=(double)lua_tonumber(L,4);
		double m10=(double)lua_tonumber(L,5);
		double m11=(double)lua_tonumber(L,6);
		double m12=(double)lua_tonumber(L,7);
		double m13=(double)lua_tonumber(L,8);
		double m20=(double)lua_tonumber(L,9);
		double m21=(double)lua_tonumber(L,10);
		double m22=(double)lua_tonumber(L,11);
		double m23=(double)lua_tonumber(L,12);
		double m30=(double)lua_tonumber(L,13);
		double m31=(double)lua_tonumber(L,14);
		double m32=(double)lua_tonumber(L,15);
		double m33=(double)lua_tonumber(L,16);

		return new sgt::mat4d(m00, m01, m02, m03, m10, m11, m12, m13, m20, m21, m22, m23, m30, m31, m32, m33);
	}

	// sgt::mat4d::mat4d(const double * array)
	static sgt::mat4d* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat4d::mat4d(const double * array) function, expected prototype:\nsgt::mat4d::mat4d(const double * array)\nClass arguments details:\n");
		}

		const double* array=(const double*)Luna< void >::check(L,1);

		return new sgt::mat4d(array);
	}

	// sgt::mat4d::mat4d(const sgt::mat3d & m3x3)
	static sgt::mat4d* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat4d::mat4d(const sgt::mat3d & m3x3) function, expected prototype:\nsgt::mat4d::mat4d(const sgt::mat3d & m3x3)\nClass arguments details:\narg 1 ID = 67824784\n");
		}

		const sgt::mat3d* m3x3_ptr=(Luna< sgt::mat3d >::check(L,1));
		if( !m3x3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3x3 in sgt::mat4d::mat4d function");
		}
		const sgt::mat3d & m3x3=*m3x3_ptr;

		return new sgt::mat4d(m3x3);
	}

	// Overload binder for sgt::mat4d::mat4d
	static sgt::mat4d* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function mat4d, cannot match any of the overloads for function mat4d:\n  mat4d()\n  mat4d(double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double)\n  mat4d(const double *)\n  mat4d(const sgt::mat3d &)\n");
		return NULL;
	}


	// Function binds:
	// const double * sgt::mat4d::coefficients() const
	static int _bind_coefficients(lua_State *L) {
		if (!_lg_typecheck_coefficients(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const double * sgt::mat4d::coefficients() const function, expected prototype:\nconst double * sgt::mat4d::coefficients() const\nClass arguments details:\n");
		}


		sgt::mat4d* self=(Luna< sgt::mat4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const double * sgt::mat4d::coefficients() const. Got : '%s'",typeid(Luna< sgt::mat4d >::check(L,1)).name());
		}
		const double * lret = self->coefficients();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// sgt::mat4d sgt::mat4d::transpose() const
	static int _bind_transpose(lua_State *L) {
		if (!_lg_typecheck_transpose(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat4d sgt::mat4d::transpose() const function, expected prototype:\nsgt::mat4d sgt::mat4d::transpose() const\nClass arguments details:\n");
		}


		sgt::mat4d* self=(Luna< sgt::mat4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat4d sgt::mat4d::transpose() const. Got : '%s'",typeid(Luna< sgt::mat4d >::check(L,1)).name());
		}
		sgt::mat4d stack_lret = self->transpose();
		sgt::mat4d* lret = new sgt::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4d >::push(L,lret,true);

		return 1;
	}

	// sgt::mat4d sgt::mat4d::adjoint() const
	static int _bind_adjoint(lua_State *L) {
		if (!_lg_typecheck_adjoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat4d sgt::mat4d::adjoint() const function, expected prototype:\nsgt::mat4d sgt::mat4d::adjoint() const\nClass arguments details:\n");
		}


		sgt::mat4d* self=(Luna< sgt::mat4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat4d sgt::mat4d::adjoint() const. Got : '%s'",typeid(Luna< sgt::mat4d >::check(L,1)).name());
		}
		sgt::mat4d stack_lret = self->adjoint();
		sgt::mat4d* lret = new sgt::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4d >::push(L,lret,true);

		return 1;
	}

	// sgt::mat4d sgt::mat4d::inverse() const
	static int _bind_inverse(lua_State *L) {
		if (!_lg_typecheck_inverse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat4d sgt::mat4d::inverse() const function, expected prototype:\nsgt::mat4d sgt::mat4d::inverse() const\nClass arguments details:\n");
		}


		sgt::mat4d* self=(Luna< sgt::mat4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat4d sgt::mat4d::inverse() const. Got : '%s'",typeid(Luna< sgt::mat4d >::check(L,1)).name());
		}
		sgt::mat4d stack_lret = self->inverse();
		sgt::mat4d* lret = new sgt::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4d >::push(L,lret,true);

		return 1;
	}

	// sgt::mat3d sgt::mat4d::mat3x3() const
	static int _bind_mat3x3(lua_State *L) {
		if (!_lg_typecheck_mat3x3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat3d sgt::mat4d::mat3x3() const function, expected prototype:\nsgt::mat3d sgt::mat4d::mat3x3() const\nClass arguments details:\n");
		}


		sgt::mat4d* self=(Luna< sgt::mat4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat3d sgt::mat4d::mat3x3() const. Got : '%s'",typeid(Luna< sgt::mat4d >::check(L,1)).name());
		}
		sgt::mat3d stack_lret = self->mat3x3();
		sgt::mat3d* lret = new sgt::mat3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat3d >::push(L,lret,true);

		return 1;
	}

	// double sgt::mat4d::determinant() const
	static int _bind_determinant(lua_State *L) {
		if (!_lg_typecheck_determinant(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double sgt::mat4d::determinant() const function, expected prototype:\ndouble sgt::mat4d::determinant() const\nClass arguments details:\n");
		}


		sgt::mat4d* self=(Luna< sgt::mat4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double sgt::mat4d::determinant() const. Got : '%s'",typeid(Luna< sgt::mat4d >::check(L,1)).name());
		}
		double lret = self->determinant();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static sgt::mat4d sgt::mat4d::translate(const sgt::vec3d & v)
	static int _bind_translate(lua_State *L) {
		if (!_lg_typecheck_translate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static sgt::mat4d sgt::mat4d::translate(const sgt::vec3d & v) function, expected prototype:\nstatic sgt::mat4d sgt::mat4d::translate(const sgt::vec3d & v)\nClass arguments details:\narg 1 ID = 76239300\n");
		}

		const sgt::vec3d* v_ptr=(Luna< sgt::vec3d >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::mat4d::translate function");
		}
		const sgt::vec3d & v=*v_ptr;

		sgt::mat4d stack_lret = sgt::mat4d::translate(v);
		sgt::mat4d* lret = new sgt::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4d >::push(L,lret,true);

		return 1;
	}

	// static sgt::mat4d sgt::mat4d::rotatex(double angle)
	static int _bind_rotatex(lua_State *L) {
		if (!_lg_typecheck_rotatex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static sgt::mat4d sgt::mat4d::rotatex(double angle) function, expected prototype:\nstatic sgt::mat4d sgt::mat4d::rotatex(double angle)\nClass arguments details:\n");
		}

		double angle=(double)lua_tonumber(L,1);

		sgt::mat4d stack_lret = sgt::mat4d::rotatex(angle);
		sgt::mat4d* lret = new sgt::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4d >::push(L,lret,true);

		return 1;
	}

	// static sgt::mat4d sgt::mat4d::rotatey(double angle)
	static int _bind_rotatey(lua_State *L) {
		if (!_lg_typecheck_rotatey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static sgt::mat4d sgt::mat4d::rotatey(double angle) function, expected prototype:\nstatic sgt::mat4d sgt::mat4d::rotatey(double angle)\nClass arguments details:\n");
		}

		double angle=(double)lua_tonumber(L,1);

		sgt::mat4d stack_lret = sgt::mat4d::rotatey(angle);
		sgt::mat4d* lret = new sgt::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4d >::push(L,lret,true);

		return 1;
	}

	// static sgt::mat4d sgt::mat4d::rotatez(double angle)
	static int _bind_rotatez(lua_State *L) {
		if (!_lg_typecheck_rotatez(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static sgt::mat4d sgt::mat4d::rotatez(double angle) function, expected prototype:\nstatic sgt::mat4d sgt::mat4d::rotatez(double angle)\nClass arguments details:\n");
		}

		double angle=(double)lua_tonumber(L,1);

		sgt::mat4d stack_lret = sgt::mat4d::rotatez(angle);
		sgt::mat4d* lret = new sgt::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4d >::push(L,lret,true);

		return 1;
	}

	// static sgt::mat4d sgt::mat4d::perspectiveProjection(double fovy, double aspect, double zNear, double zFar)
	static int _bind_perspectiveProjection(lua_State *L) {
		if (!_lg_typecheck_perspectiveProjection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static sgt::mat4d sgt::mat4d::perspectiveProjection(double fovy, double aspect, double zNear, double zFar) function, expected prototype:\nstatic sgt::mat4d sgt::mat4d::perspectiveProjection(double fovy, double aspect, double zNear, double zFar)\nClass arguments details:\n");
		}

		double fovy=(double)lua_tonumber(L,1);
		double aspect=(double)lua_tonumber(L,2);
		double zNear=(double)lua_tonumber(L,3);
		double zFar=(double)lua_tonumber(L,4);

		sgt::mat4d stack_lret = sgt::mat4d::perspectiveProjection(fovy, aspect, zNear, zFar);
		sgt::mat4d* lret = new sgt::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4d >::push(L,lret,true);

		return 1;
	}

	// static sgt::mat4d sgt::mat4d::orthoProjection(double xRight, double xLeft, double yTop, double yBottom, double zNear, double zFar)
	static int _bind_orthoProjection(lua_State *L) {
		if (!_lg_typecheck_orthoProjection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static sgt::mat4d sgt::mat4d::orthoProjection(double xRight, double xLeft, double yTop, double yBottom, double zNear, double zFar) function, expected prototype:\nstatic sgt::mat4d sgt::mat4d::orthoProjection(double xRight, double xLeft, double yTop, double yBottom, double zNear, double zFar)\nClass arguments details:\n");
		}

		double xRight=(double)lua_tonumber(L,1);
		double xLeft=(double)lua_tonumber(L,2);
		double yTop=(double)lua_tonumber(L,3);
		double yBottom=(double)lua_tonumber(L,4);
		double zNear=(double)lua_tonumber(L,5);
		double zFar=(double)lua_tonumber(L,6);

		sgt::mat4d stack_lret = sgt::mat4d::orthoProjection(xRight, xLeft, yTop, yBottom, zNear, zFar);
		sgt::mat4d* lret = new sgt::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4d >::push(L,lret,true);

		return 1;
	}


	// Operator binds:
	// const double * sgt::mat4d::operator[](int iRow) const
	static int _bind_op_index_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const double * sgt::mat4d::operator[](int iRow) const function, expected prototype:\nconst double * sgt::mat4d::operator[](int iRow) const\nClass arguments details:\n");
		}

		int iRow=(int)lua_tointeger(L,2);

		sgt::mat4d* self=(Luna< sgt::mat4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const double * sgt::mat4d::operator[](int) const. Got : '%s'",typeid(Luna< sgt::mat4d >::check(L,1)).name());
		}
		const double * lret = self->operator[](iRow);
		lua_pushnumber(L,*lret);

		return 1;
	}

	// double * sgt::mat4d::operator[](int iRow)
	static int _bind_op_index_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double * sgt::mat4d::operator[](int iRow) function, expected prototype:\ndouble * sgt::mat4d::operator[](int iRow)\nClass arguments details:\n");
		}

		int iRow=(int)lua_tointeger(L,2);

		sgt::mat4d* self=(Luna< sgt::mat4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double * sgt::mat4d::operator[](int). Got : '%s'",typeid(Luna< sgt::mat4d >::check(L,1)).name());
		}
		double * lret = self->operator[](iRow);
		lua_pushnumber(L,*lret);

		return 1;
	}

	// Overload binder for sgt::mat4d::operator[]
	static int _bind_op_index(lua_State *L) {
		if (_lg_typecheck_op_index_overload_1(L)) return _bind_op_index_overload_1(L);
		if (_lg_typecheck_op_index_overload_2(L)) return _bind_op_index_overload_2(L);

		luaL_error(L, "error in function operator[], cannot match any of the overloads for function operator[]:\n  operator[](int)\n  operator[](int)\n");
		return 0;
	}

	// void sgt::mat4d::operator=(const sgt::mat3d & m3)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::mat4d::operator=(const sgt::mat3d & m3) function, expected prototype:\nvoid sgt::mat4d::operator=(const sgt::mat3d & m3)\nClass arguments details:\narg 1 ID = 67824784\n");
		}

		const sgt::mat3d* m3_ptr=(Luna< sgt::mat3d >::check(L,2));
		if( !m3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3 in sgt::mat4d::operator= function");
		}
		const sgt::mat3d & m3=*m3_ptr;

		sgt::mat4d* self=(Luna< sgt::mat4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::mat4d::operator=(const sgt::mat3d &). Got : '%s'",typeid(Luna< sgt::mat4d >::check(L,1)).name());
		}
		self->operator=(m3);

		return 0;
	}

	// bool sgt::mat4d::operator==(const sgt::mat4d & m2) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::mat4d::operator==(const sgt::mat4d & m2) const function, expected prototype:\nbool sgt::mat4d::operator==(const sgt::mat4d & m2) const\nClass arguments details:\narg 1 ID = 67824815\n");
		}

		const sgt::mat4d* m2_ptr=(Luna< sgt::mat4d >::check(L,2));
		if( !m2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2 in sgt::mat4d::operator== function");
		}
		const sgt::mat4d & m2=*m2_ptr;

		sgt::mat4d* self=(Luna< sgt::mat4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::mat4d::operator==(const sgt::mat4d &) const. Got : '%s'",typeid(Luna< sgt::mat4d >::check(L,1)).name());
		}
		bool lret = self->operator==(m2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool sgt::mat4d::operator!=(const sgt::mat4d & m2) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::mat4d::operator!=(const sgt::mat4d & m2) const function, expected prototype:\nbool sgt::mat4d::operator!=(const sgt::mat4d & m2) const\nClass arguments details:\narg 1 ID = 67824815\n");
		}

		const sgt::mat4d* m2_ptr=(Luna< sgt::mat4d >::check(L,2));
		if( !m2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2 in sgt::mat4d::operator!= function");
		}
		const sgt::mat4d & m2=*m2_ptr;

		sgt::mat4d* self=(Luna< sgt::mat4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::mat4d::operator!=(const sgt::mat4d &) const. Got : '%s'",typeid(Luna< sgt::mat4d >::check(L,1)).name());
		}
		bool lret = self->operator!=(m2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// sgt::mat4d sgt::mat4d::operator+(const sgt::mat4d & m2) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat4d sgt::mat4d::operator+(const sgt::mat4d & m2) const function, expected prototype:\nsgt::mat4d sgt::mat4d::operator+(const sgt::mat4d & m2) const\nClass arguments details:\narg 1 ID = 67824815\n");
		}

		const sgt::mat4d* m2_ptr=(Luna< sgt::mat4d >::check(L,2));
		if( !m2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2 in sgt::mat4d::operator+ function");
		}
		const sgt::mat4d & m2=*m2_ptr;

		sgt::mat4d* self=(Luna< sgt::mat4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat4d sgt::mat4d::operator+(const sgt::mat4d &) const. Got : '%s'",typeid(Luna< sgt::mat4d >::check(L,1)).name());
		}
		sgt::mat4d stack_lret = self->operator+(m2);
		sgt::mat4d* lret = new sgt::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4d >::push(L,lret,true);

		return 1;
	}

	// sgt::mat4d sgt::mat4d::operator-(const sgt::mat4d & m2) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat4d sgt::mat4d::operator-(const sgt::mat4d & m2) const function, expected prototype:\nsgt::mat4d sgt::mat4d::operator-(const sgt::mat4d & m2) const\nClass arguments details:\narg 1 ID = 67824815\n");
		}

		const sgt::mat4d* m2_ptr=(Luna< sgt::mat4d >::check(L,2));
		if( !m2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2 in sgt::mat4d::operator- function");
		}
		const sgt::mat4d & m2=*m2_ptr;

		sgt::mat4d* self=(Luna< sgt::mat4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat4d sgt::mat4d::operator-(const sgt::mat4d &) const. Got : '%s'",typeid(Luna< sgt::mat4d >::check(L,1)).name());
		}
		sgt::mat4d stack_lret = self->operator-(m2);
		sgt::mat4d* lret = new sgt::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4d >::push(L,lret,true);

		return 1;
	}

	// sgt::mat4d sgt::mat4d::operator*(const sgt::mat4d & m2) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat4d sgt::mat4d::operator*(const sgt::mat4d & m2) const function, expected prototype:\nsgt::mat4d sgt::mat4d::operator*(const sgt::mat4d & m2) const\nClass arguments details:\narg 1 ID = 67824815\n");
		}

		const sgt::mat4d* m2_ptr=(Luna< sgt::mat4d >::check(L,2));
		if( !m2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2 in sgt::mat4d::operator* function");
		}
		const sgt::mat4d & m2=*m2_ptr;

		sgt::mat4d* self=(Luna< sgt::mat4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat4d sgt::mat4d::operator*(const sgt::mat4d &) const. Got : '%s'",typeid(Luna< sgt::mat4d >::check(L,1)).name());
		}
		sgt::mat4d stack_lret = self->operator*(m2);
		sgt::mat4d* lret = new sgt::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4d >::push(L,lret,true);

		return 1;
	}

	// sgt::vec4d sgt::mat4d::operator*(const sgt::vec4d & v) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec4d sgt::mat4d::operator*(const sgt::vec4d & v) const function, expected prototype:\nsgt::vec4d sgt::mat4d::operator*(const sgt::vec4d & v) const\nClass arguments details:\narg 1 ID = 76239331\n");
		}

		const sgt::vec4d* v_ptr=(Luna< sgt::vec4d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::mat4d::operator* function");
		}
		const sgt::vec4d & v=*v_ptr;

		sgt::mat4d* self=(Luna< sgt::mat4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec4d sgt::mat4d::operator*(const sgt::vec4d &) const. Got : '%s'",typeid(Luna< sgt::mat4d >::check(L,1)).name());
		}
		sgt::vec4d stack_lret = self->operator*(v);
		sgt::vec4d* lret = new sgt::vec4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec4d >::push(L,lret,true);

		return 1;
	}

	// sgt::vec3d sgt::mat4d::operator*(const sgt::vec3d & v) const
	static int _bind___mul_overload_3(lua_State *L) {
		if (!_lg_typecheck___mul_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3d sgt::mat4d::operator*(const sgt::vec3d & v) const function, expected prototype:\nsgt::vec3d sgt::mat4d::operator*(const sgt::vec3d & v) const\nClass arguments details:\narg 1 ID = 76239300\n");
		}

		const sgt::vec3d* v_ptr=(Luna< sgt::vec3d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::mat4d::operator* function");
		}
		const sgt::vec3d & v=*v_ptr;

		sgt::mat4d* self=(Luna< sgt::mat4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec3d sgt::mat4d::operator*(const sgt::vec3d &) const. Got : '%s'",typeid(Luna< sgt::mat4d >::check(L,1)).name());
		}
		sgt::vec3d stack_lret = self->operator*(v);
		sgt::vec3d* lret = new sgt::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3d >::push(L,lret,true);

		return 1;
	}

	// sgt::box3d sgt::mat4d::operator*(const sgt::box3d & b) const
	static int _bind___mul_overload_4(lua_State *L) {
		if (!_lg_typecheck___mul_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::box3d sgt::mat4d::operator*(const sgt::box3d & b) const function, expected prototype:\nsgt::box3d sgt::mat4d::operator*(const sgt::box3d & b) const\nClass arguments details:\narg 1 ID = 58086971\n");
		}

		const sgt::box3d* b_ptr=(Luna< sgt::box3d >::check(L,2));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in sgt::mat4d::operator* function");
		}
		const sgt::box3d & b=*b_ptr;

		sgt::mat4d* self=(Luna< sgt::mat4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::box3d sgt::mat4d::operator*(const sgt::box3d &) const. Got : '%s'",typeid(Luna< sgt::mat4d >::check(L,1)).name());
		}
		sgt::box3d stack_lret = self->operator*(b);
		sgt::box3d* lret = new sgt::box3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::box3d >::push(L,lret,true);

		return 1;
	}

	// sgt::mat4d sgt::mat4d::operator*(double f) const
	static int _bind___mul_overload_5(lua_State *L) {
		if (!_lg_typecheck___mul_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat4d sgt::mat4d::operator*(double f) const function, expected prototype:\nsgt::mat4d sgt::mat4d::operator*(double f) const\nClass arguments details:\n");
		}

		double f=(double)lua_tonumber(L,2);

		sgt::mat4d* self=(Luna< sgt::mat4d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat4d sgt::mat4d::operator*(double) const. Got : '%s'",typeid(Luna< sgt::mat4d >::check(L,1)).name());
		}
		sgt::mat4d stack_lret = self->operator*(f);
		sgt::mat4d* lret = new sgt::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4d >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::mat4d::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);
		if (_lg_typecheck___mul_overload_3(L)) return _bind___mul_overload_3(L);
		if (_lg_typecheck___mul_overload_4(L)) return _bind___mul_overload_4(L);
		if (_lg_typecheck___mul_overload_5(L)) return _bind___mul_overload_5(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const sgt::mat4d &)\n  operator*(const sgt::vec4d &)\n  operator*(const sgt::vec3d &)\n  operator*(const sgt::box3d &)\n  operator*(double)\n");
		return 0;
	}


};

sgt::mat4d* LunaTraits< sgt::mat4d >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_mat4d::_bind_ctor(L);
}

void LunaTraits< sgt::mat4d >::_bind_dtor(sgt::mat4d* obj) {
	delete obj;
}

const char LunaTraits< sgt::mat4d >::className[] = "mat4d";
const char LunaTraits< sgt::mat4d >::fullName[] = "sgt::mat4d";
const char LunaTraits< sgt::mat4d >::moduleName[] = "sgt";
const char* LunaTraits< sgt::mat4d >::parents[] = {0};
const int LunaTraits< sgt::mat4d >::hash = 67824815;
const int LunaTraits< sgt::mat4d >::uniqueIDs[] = {67824815,0};

luna_RegType LunaTraits< sgt::mat4d >::methods[] = {
	{"coefficients", &luna_wrapper_sgt_mat4d::_bind_coefficients},
	{"transpose", &luna_wrapper_sgt_mat4d::_bind_transpose},
	{"adjoint", &luna_wrapper_sgt_mat4d::_bind_adjoint},
	{"inverse", &luna_wrapper_sgt_mat4d::_bind_inverse},
	{"mat3x3", &luna_wrapper_sgt_mat4d::_bind_mat3x3},
	{"determinant", &luna_wrapper_sgt_mat4d::_bind_determinant},
	{"translate", &luna_wrapper_sgt_mat4d::_bind_translate},
	{"rotatex", &luna_wrapper_sgt_mat4d::_bind_rotatex},
	{"rotatey", &luna_wrapper_sgt_mat4d::_bind_rotatey},
	{"rotatez", &luna_wrapper_sgt_mat4d::_bind_rotatez},
	{"perspectiveProjection", &luna_wrapper_sgt_mat4d::_bind_perspectiveProjection},
	{"orthoProjection", &luna_wrapper_sgt_mat4d::_bind_orthoProjection},
	{"op_index", &luna_wrapper_sgt_mat4d::_bind_op_index},
	{"op_assign", &luna_wrapper_sgt_mat4d::_bind_op_assign},
	{"__eq", &luna_wrapper_sgt_mat4d::_bind___eq},
	{"op_neq", &luna_wrapper_sgt_mat4d::_bind_op_neq},
	{"__add", &luna_wrapper_sgt_mat4d::_bind___add},
	{"__sub", &luna_wrapper_sgt_mat4d::_bind___sub},
	{"__mul", &luna_wrapper_sgt_mat4d::_bind___mul},
	{"dynCast", &luna_wrapper_sgt_mat4d::_bind_dynCast},
	{"fromVoid", &luna_wrapper_sgt_mat4d::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_mat4d::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::mat4d >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::mat4d >::enumValues[] = {
	{0,0}
};



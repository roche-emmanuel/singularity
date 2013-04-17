#include <plug_common.h>

class luna_wrapper_sgt_mat4f {
public:
	typedef Luna< sgt::mat4f > luna_t;

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

		sgt::mat4f* self= (sgt::mat4f*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::mat4f >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67824817) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< sgt::mat4f >::check(L,1));
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

		sgt::mat4f* self=(Luna< sgt::mat4f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::mat4f");
		
		return luna_dynamicCast(L,converters,"sgt::mat4f",name);
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

		if( !Luna<void>::has_uniqueid(L,1,67824786) ) return false;
		if( (!(Luna< sgt::mat3f >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,1))) ) return false;
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

	inline static bool _lg_typecheck_toMatrixd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_fromMatrixd(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_determinant(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_translate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76239302) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,67824786) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67824817) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67824817) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67824817) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67824817) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67824817) ) return false;
		if( (!(Luna< sgt::mat4f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239333) ) return false;
		if( (!(Luna< sgt::vec4f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239302) ) return false;
		if( (!(Luna< sgt::vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58086973) ) return false;
		if( (!(Luna< sgt::box3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Constructor binds:
	// sgt::mat4f::mat4f()
	static sgt::mat4f* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat4f::mat4f() function, expected prototype:\nsgt::mat4f::mat4f()\nClass arguments details:\n");
		}


		return new sgt::mat4f();
	}

	// sgt::mat4f::mat4f(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23, float m30, float m31, float m32, float m33)
	static sgt::mat4f* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat4f::mat4f(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23, float m30, float m31, float m32, float m33) function, expected prototype:\nsgt::mat4f::mat4f(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23, float m30, float m31, float m32, float m33)\nClass arguments details:\n");
		}

		float m00=(float)lua_tonumber(L,1);
		float m01=(float)lua_tonumber(L,2);
		float m02=(float)lua_tonumber(L,3);
		float m03=(float)lua_tonumber(L,4);
		float m10=(float)lua_tonumber(L,5);
		float m11=(float)lua_tonumber(L,6);
		float m12=(float)lua_tonumber(L,7);
		float m13=(float)lua_tonumber(L,8);
		float m20=(float)lua_tonumber(L,9);
		float m21=(float)lua_tonumber(L,10);
		float m22=(float)lua_tonumber(L,11);
		float m23=(float)lua_tonumber(L,12);
		float m30=(float)lua_tonumber(L,13);
		float m31=(float)lua_tonumber(L,14);
		float m32=(float)lua_tonumber(L,15);
		float m33=(float)lua_tonumber(L,16);

		return new sgt::mat4f(m00, m01, m02, m03, m10, m11, m12, m13, m20, m21, m22, m23, m30, m31, m32, m33);
	}

	// sgt::mat4f::mat4f(const float * array)
	static sgt::mat4f* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat4f::mat4f(const float * array) function, expected prototype:\nsgt::mat4f::mat4f(const float * array)\nClass arguments details:\n");
		}

		const float* array=(const float*)Luna< void >::check(L,1);

		return new sgt::mat4f(array);
	}

	// sgt::mat4f::mat4f(const sgt::mat3f & m3x3)
	static sgt::mat4f* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat4f::mat4f(const sgt::mat3f & m3x3) function, expected prototype:\nsgt::mat4f::mat4f(const sgt::mat3f & m3x3)\nClass arguments details:\narg 1 ID = 67824786\n");
		}

		const sgt::mat3f* m3x3_ptr=(Luna< sgt::mat3f >::check(L,1));
		if( !m3x3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3x3 in sgt::mat4f::mat4f function");
		}
		const sgt::mat3f & m3x3=*m3x3_ptr;

		return new sgt::mat4f(m3x3);
	}

	// sgt::mat4f::mat4f(const osg::Matrixd & mat)
	static sgt::mat4f* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat4f::mat4f(const osg::Matrixd & mat) function, expected prototype:\nsgt::mat4f::mat4f(const osg::Matrixd & mat)\nClass arguments details:\n");
		}

		const osg::Matrixd* mat_ptr=(Luna< osg::Matrixd >::check(L,1));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in sgt::mat4f::mat4f function");
		}
		const osg::Matrixd & mat=*mat_ptr;

		return new sgt::mat4f(mat);
	}

	// Overload binder for sgt::mat4f::mat4f
	static sgt::mat4f* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);

		luaL_error(L, "error in function mat4f, cannot match any of the overloads for function mat4f:\n  mat4f()\n  mat4f(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float)\n  mat4f(const float *)\n  mat4f(const sgt::mat3f &)\n  mat4f(const osg::Matrixd &)\n");
		return NULL;
	}


	// Function binds:
	// const float * sgt::mat4f::coefficients() const
	static int _bind_coefficients(lua_State *L) {
		if (!_lg_typecheck_coefficients(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const float * sgt::mat4f::coefficients() const function, expected prototype:\nconst float * sgt::mat4f::coefficients() const\nClass arguments details:\n");
		}


		sgt::mat4f* self=(Luna< sgt::mat4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const float * sgt::mat4f::coefficients() const. Got : '%s'",typeid(Luna< sgt::mat4f >::check(L,1)).name());
		}
		const float * lret = self->coefficients();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// sgt::mat4f sgt::mat4f::transpose() const
	static int _bind_transpose(lua_State *L) {
		if (!_lg_typecheck_transpose(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat4f sgt::mat4f::transpose() const function, expected prototype:\nsgt::mat4f sgt::mat4f::transpose() const\nClass arguments details:\n");
		}


		sgt::mat4f* self=(Luna< sgt::mat4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat4f sgt::mat4f::transpose() const. Got : '%s'",typeid(Luna< sgt::mat4f >::check(L,1)).name());
		}
		sgt::mat4f stack_lret = self->transpose();
		sgt::mat4f* lret = new sgt::mat4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4f >::push(L,lret,true);

		return 1;
	}

	// sgt::mat4f sgt::mat4f::adjoint() const
	static int _bind_adjoint(lua_State *L) {
		if (!_lg_typecheck_adjoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat4f sgt::mat4f::adjoint() const function, expected prototype:\nsgt::mat4f sgt::mat4f::adjoint() const\nClass arguments details:\n");
		}


		sgt::mat4f* self=(Luna< sgt::mat4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat4f sgt::mat4f::adjoint() const. Got : '%s'",typeid(Luna< sgt::mat4f >::check(L,1)).name());
		}
		sgt::mat4f stack_lret = self->adjoint();
		sgt::mat4f* lret = new sgt::mat4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4f >::push(L,lret,true);

		return 1;
	}

	// sgt::mat4f sgt::mat4f::inverse() const
	static int _bind_inverse(lua_State *L) {
		if (!_lg_typecheck_inverse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat4f sgt::mat4f::inverse() const function, expected prototype:\nsgt::mat4f sgt::mat4f::inverse() const\nClass arguments details:\n");
		}


		sgt::mat4f* self=(Luna< sgt::mat4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat4f sgt::mat4f::inverse() const. Got : '%s'",typeid(Luna< sgt::mat4f >::check(L,1)).name());
		}
		sgt::mat4f stack_lret = self->inverse();
		sgt::mat4f* lret = new sgt::mat4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4f >::push(L,lret,true);

		return 1;
	}

	// sgt::mat3f sgt::mat4f::mat3x3() const
	static int _bind_mat3x3(lua_State *L) {
		if (!_lg_typecheck_mat3x3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat3f sgt::mat4f::mat3x3() const function, expected prototype:\nsgt::mat3f sgt::mat4f::mat3x3() const\nClass arguments details:\n");
		}


		sgt::mat4f* self=(Luna< sgt::mat4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat3f sgt::mat4f::mat3x3() const. Got : '%s'",typeid(Luna< sgt::mat4f >::check(L,1)).name());
		}
		sgt::mat3f stack_lret = self->mat3x3();
		sgt::mat3f* lret = new sgt::mat3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat3f >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd sgt::mat4f::toMatrixd() const
	static int _bind_toMatrixd(lua_State *L) {
		if (!_lg_typecheck_toMatrixd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd sgt::mat4f::toMatrixd() const function, expected prototype:\nosg::Matrixd sgt::mat4f::toMatrixd() const\nClass arguments details:\n");
		}


		sgt::mat4f* self=(Luna< sgt::mat4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd sgt::mat4f::toMatrixd() const. Got : '%s'",typeid(Luna< sgt::mat4f >::check(L,1)).name());
		}
		osg::Matrixd stack_lret = self->toMatrixd();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// void sgt::mat4f::fromMatrixd(const osg::Matrixd & mat)
	static int _bind_fromMatrixd(lua_State *L) {
		if (!_lg_typecheck_fromMatrixd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::mat4f::fromMatrixd(const osg::Matrixd & mat) function, expected prototype:\nvoid sgt::mat4f::fromMatrixd(const osg::Matrixd & mat)\nClass arguments details:\n");
		}

		const osg::Matrixd* mat_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in sgt::mat4f::fromMatrixd function");
		}
		const osg::Matrixd & mat=*mat_ptr;

		sgt::mat4f* self=(Luna< sgt::mat4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::mat4f::fromMatrixd(const osg::Matrixd &). Got : '%s'",typeid(Luna< sgt::mat4f >::check(L,1)).name());
		}
		self->fromMatrixd(mat);

		return 0;
	}

	// float sgt::mat4f::determinant() const
	static int _bind_determinant(lua_State *L) {
		if (!_lg_typecheck_determinant(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float sgt::mat4f::determinant() const function, expected prototype:\nfloat sgt::mat4f::determinant() const\nClass arguments details:\n");
		}


		sgt::mat4f* self=(Luna< sgt::mat4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float sgt::mat4f::determinant() const. Got : '%s'",typeid(Luna< sgt::mat4f >::check(L,1)).name());
		}
		float lret = self->determinant();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static sgt::mat4f sgt::mat4f::translate(const sgt::vec3f & v)
	static int _bind_translate(lua_State *L) {
		if (!_lg_typecheck_translate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static sgt::mat4f sgt::mat4f::translate(const sgt::vec3f & v) function, expected prototype:\nstatic sgt::mat4f sgt::mat4f::translate(const sgt::vec3f & v)\nClass arguments details:\narg 1 ID = 76239302\n");
		}

		const sgt::vec3f* v_ptr=(Luna< sgt::vec3f >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::mat4f::translate function");
		}
		const sgt::vec3f & v=*v_ptr;

		sgt::mat4f stack_lret = sgt::mat4f::translate(v);
		sgt::mat4f* lret = new sgt::mat4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4f >::push(L,lret,true);

		return 1;
	}

	// static sgt::mat4f sgt::mat4f::rotatex(float angle)
	static int _bind_rotatex(lua_State *L) {
		if (!_lg_typecheck_rotatex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static sgt::mat4f sgt::mat4f::rotatex(float angle) function, expected prototype:\nstatic sgt::mat4f sgt::mat4f::rotatex(float angle)\nClass arguments details:\n");
		}

		float angle=(float)lua_tonumber(L,1);

		sgt::mat4f stack_lret = sgt::mat4f::rotatex(angle);
		sgt::mat4f* lret = new sgt::mat4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4f >::push(L,lret,true);

		return 1;
	}

	// static sgt::mat4f sgt::mat4f::rotatey(float angle)
	static int _bind_rotatey(lua_State *L) {
		if (!_lg_typecheck_rotatey(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static sgt::mat4f sgt::mat4f::rotatey(float angle) function, expected prototype:\nstatic sgt::mat4f sgt::mat4f::rotatey(float angle)\nClass arguments details:\n");
		}

		float angle=(float)lua_tonumber(L,1);

		sgt::mat4f stack_lret = sgt::mat4f::rotatey(angle);
		sgt::mat4f* lret = new sgt::mat4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4f >::push(L,lret,true);

		return 1;
	}

	// static sgt::mat4f sgt::mat4f::rotatez(float angle)
	static int _bind_rotatez(lua_State *L) {
		if (!_lg_typecheck_rotatez(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static sgt::mat4f sgt::mat4f::rotatez(float angle) function, expected prototype:\nstatic sgt::mat4f sgt::mat4f::rotatez(float angle)\nClass arguments details:\n");
		}

		float angle=(float)lua_tonumber(L,1);

		sgt::mat4f stack_lret = sgt::mat4f::rotatez(angle);
		sgt::mat4f* lret = new sgt::mat4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4f >::push(L,lret,true);

		return 1;
	}

	// static sgt::mat4f sgt::mat4f::perspectiveProjection(float fovy, float aspect, float zNear, float zFar)
	static int _bind_perspectiveProjection(lua_State *L) {
		if (!_lg_typecheck_perspectiveProjection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static sgt::mat4f sgt::mat4f::perspectiveProjection(float fovy, float aspect, float zNear, float zFar) function, expected prototype:\nstatic sgt::mat4f sgt::mat4f::perspectiveProjection(float fovy, float aspect, float zNear, float zFar)\nClass arguments details:\n");
		}

		float fovy=(float)lua_tonumber(L,1);
		float aspect=(float)lua_tonumber(L,2);
		float zNear=(float)lua_tonumber(L,3);
		float zFar=(float)lua_tonumber(L,4);

		sgt::mat4f stack_lret = sgt::mat4f::perspectiveProjection(fovy, aspect, zNear, zFar);
		sgt::mat4f* lret = new sgt::mat4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4f >::push(L,lret,true);

		return 1;
	}

	// static sgt::mat4f sgt::mat4f::orthoProjection(float xRight, float xLeft, float yTop, float yBottom, float zNear, float zFar)
	static int _bind_orthoProjection(lua_State *L) {
		if (!_lg_typecheck_orthoProjection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static sgt::mat4f sgt::mat4f::orthoProjection(float xRight, float xLeft, float yTop, float yBottom, float zNear, float zFar) function, expected prototype:\nstatic sgt::mat4f sgt::mat4f::orthoProjection(float xRight, float xLeft, float yTop, float yBottom, float zNear, float zFar)\nClass arguments details:\n");
		}

		float xRight=(float)lua_tonumber(L,1);
		float xLeft=(float)lua_tonumber(L,2);
		float yTop=(float)lua_tonumber(L,3);
		float yBottom=(float)lua_tonumber(L,4);
		float zNear=(float)lua_tonumber(L,5);
		float zFar=(float)lua_tonumber(L,6);

		sgt::mat4f stack_lret = sgt::mat4f::orthoProjection(xRight, xLeft, yTop, yBottom, zNear, zFar);
		sgt::mat4f* lret = new sgt::mat4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4f >::push(L,lret,true);

		return 1;
	}


	// Operator binds:
	// const float * sgt::mat4f::operator[](int iRow) const
	static int _bind_op_index_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const float * sgt::mat4f::operator[](int iRow) const function, expected prototype:\nconst float * sgt::mat4f::operator[](int iRow) const\nClass arguments details:\n");
		}

		int iRow=(int)lua_tointeger(L,2);

		sgt::mat4f* self=(Luna< sgt::mat4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const float * sgt::mat4f::operator[](int) const. Got : '%s'",typeid(Luna< sgt::mat4f >::check(L,1)).name());
		}
		const float * lret = self->operator[](iRow);
		lua_pushnumber(L,*lret);

		return 1;
	}

	// float * sgt::mat4f::operator[](int iRow)
	static int _bind_op_index_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float * sgt::mat4f::operator[](int iRow) function, expected prototype:\nfloat * sgt::mat4f::operator[](int iRow)\nClass arguments details:\n");
		}

		int iRow=(int)lua_tointeger(L,2);

		sgt::mat4f* self=(Luna< sgt::mat4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float * sgt::mat4f::operator[](int). Got : '%s'",typeid(Luna< sgt::mat4f >::check(L,1)).name());
		}
		float * lret = self->operator[](iRow);
		lua_pushnumber(L,*lret);

		return 1;
	}

	// Overload binder for sgt::mat4f::operator[]
	static int _bind_op_index(lua_State *L) {
		if (_lg_typecheck_op_index_overload_1(L)) return _bind_op_index_overload_1(L);
		if (_lg_typecheck_op_index_overload_2(L)) return _bind_op_index_overload_2(L);

		luaL_error(L, "error in function operator[], cannot match any of the overloads for function operator[]:\n  operator[](int)\n  operator[](int)\n");
		return 0;
	}

	// void sgt::mat4f::operator=(const sgt::mat3f & m3)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::mat4f::operator=(const sgt::mat3f & m3) function, expected prototype:\nvoid sgt::mat4f::operator=(const sgt::mat3f & m3)\nClass arguments details:\narg 1 ID = 67824786\n");
		}

		const sgt::mat3f* m3_ptr=(Luna< sgt::mat3f >::check(L,2));
		if( !m3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m3 in sgt::mat4f::operator= function");
		}
		const sgt::mat3f & m3=*m3_ptr;

		sgt::mat4f* self=(Luna< sgt::mat4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::mat4f::operator=(const sgt::mat3f &). Got : '%s'",typeid(Luna< sgt::mat4f >::check(L,1)).name());
		}
		self->operator=(m3);

		return 0;
	}

	// bool sgt::mat4f::operator==(const sgt::mat4f & m2) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::mat4f::operator==(const sgt::mat4f & m2) const function, expected prototype:\nbool sgt::mat4f::operator==(const sgt::mat4f & m2) const\nClass arguments details:\narg 1 ID = 67824817\n");
		}

		const sgt::mat4f* m2_ptr=(Luna< sgt::mat4f >::check(L,2));
		if( !m2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2 in sgt::mat4f::operator== function");
		}
		const sgt::mat4f & m2=*m2_ptr;

		sgt::mat4f* self=(Luna< sgt::mat4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::mat4f::operator==(const sgt::mat4f &) const. Got : '%s'",typeid(Luna< sgt::mat4f >::check(L,1)).name());
		}
		bool lret = self->operator==(m2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool sgt::mat4f::operator!=(const sgt::mat4f & m2) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::mat4f::operator!=(const sgt::mat4f & m2) const function, expected prototype:\nbool sgt::mat4f::operator!=(const sgt::mat4f & m2) const\nClass arguments details:\narg 1 ID = 67824817\n");
		}

		const sgt::mat4f* m2_ptr=(Luna< sgt::mat4f >::check(L,2));
		if( !m2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2 in sgt::mat4f::operator!= function");
		}
		const sgt::mat4f & m2=*m2_ptr;

		sgt::mat4f* self=(Luna< sgt::mat4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::mat4f::operator!=(const sgt::mat4f &) const. Got : '%s'",typeid(Luna< sgt::mat4f >::check(L,1)).name());
		}
		bool lret = self->operator!=(m2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// sgt::mat4f sgt::mat4f::operator+(const sgt::mat4f & m2) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat4f sgt::mat4f::operator+(const sgt::mat4f & m2) const function, expected prototype:\nsgt::mat4f sgt::mat4f::operator+(const sgt::mat4f & m2) const\nClass arguments details:\narg 1 ID = 67824817\n");
		}

		const sgt::mat4f* m2_ptr=(Luna< sgt::mat4f >::check(L,2));
		if( !m2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2 in sgt::mat4f::operator+ function");
		}
		const sgt::mat4f & m2=*m2_ptr;

		sgt::mat4f* self=(Luna< sgt::mat4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat4f sgt::mat4f::operator+(const sgt::mat4f &) const. Got : '%s'",typeid(Luna< sgt::mat4f >::check(L,1)).name());
		}
		sgt::mat4f stack_lret = self->operator+(m2);
		sgt::mat4f* lret = new sgt::mat4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4f >::push(L,lret,true);

		return 1;
	}

	// sgt::mat4f sgt::mat4f::operator-(const sgt::mat4f & m2) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat4f sgt::mat4f::operator-(const sgt::mat4f & m2) const function, expected prototype:\nsgt::mat4f sgt::mat4f::operator-(const sgt::mat4f & m2) const\nClass arguments details:\narg 1 ID = 67824817\n");
		}

		const sgt::mat4f* m2_ptr=(Luna< sgt::mat4f >::check(L,2));
		if( !m2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2 in sgt::mat4f::operator- function");
		}
		const sgt::mat4f & m2=*m2_ptr;

		sgt::mat4f* self=(Luna< sgt::mat4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat4f sgt::mat4f::operator-(const sgt::mat4f &) const. Got : '%s'",typeid(Luna< sgt::mat4f >::check(L,1)).name());
		}
		sgt::mat4f stack_lret = self->operator-(m2);
		sgt::mat4f* lret = new sgt::mat4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4f >::push(L,lret,true);

		return 1;
	}

	// sgt::mat4f sgt::mat4f::operator*(const sgt::mat4f & m2) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat4f sgt::mat4f::operator*(const sgt::mat4f & m2) const function, expected prototype:\nsgt::mat4f sgt::mat4f::operator*(const sgt::mat4f & m2) const\nClass arguments details:\narg 1 ID = 67824817\n");
		}

		const sgt::mat4f* m2_ptr=(Luna< sgt::mat4f >::check(L,2));
		if( !m2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m2 in sgt::mat4f::operator* function");
		}
		const sgt::mat4f & m2=*m2_ptr;

		sgt::mat4f* self=(Luna< sgt::mat4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat4f sgt::mat4f::operator*(const sgt::mat4f &) const. Got : '%s'",typeid(Luna< sgt::mat4f >::check(L,1)).name());
		}
		sgt::mat4f stack_lret = self->operator*(m2);
		sgt::mat4f* lret = new sgt::mat4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4f >::push(L,lret,true);

		return 1;
	}

	// sgt::vec4f sgt::mat4f::operator*(const sgt::vec4f & v) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec4f sgt::mat4f::operator*(const sgt::vec4f & v) const function, expected prototype:\nsgt::vec4f sgt::mat4f::operator*(const sgt::vec4f & v) const\nClass arguments details:\narg 1 ID = 76239333\n");
		}

		const sgt::vec4f* v_ptr=(Luna< sgt::vec4f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::mat4f::operator* function");
		}
		const sgt::vec4f & v=*v_ptr;

		sgt::mat4f* self=(Luna< sgt::mat4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec4f sgt::mat4f::operator*(const sgt::vec4f &) const. Got : '%s'",typeid(Luna< sgt::mat4f >::check(L,1)).name());
		}
		sgt::vec4f stack_lret = self->operator*(v);
		sgt::vec4f* lret = new sgt::vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec4f >::push(L,lret,true);

		return 1;
	}

	// sgt::vec3f sgt::mat4f::operator*(const sgt::vec3f & v) const
	static int _bind___mul_overload_3(lua_State *L) {
		if (!_lg_typecheck___mul_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3f sgt::mat4f::operator*(const sgt::vec3f & v) const function, expected prototype:\nsgt::vec3f sgt::mat4f::operator*(const sgt::vec3f & v) const\nClass arguments details:\narg 1 ID = 76239302\n");
		}

		const sgt::vec3f* v_ptr=(Luna< sgt::vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::mat4f::operator* function");
		}
		const sgt::vec3f & v=*v_ptr;

		sgt::mat4f* self=(Luna< sgt::mat4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec3f sgt::mat4f::operator*(const sgt::vec3f &) const. Got : '%s'",typeid(Luna< sgt::mat4f >::check(L,1)).name());
		}
		sgt::vec3f stack_lret = self->operator*(v);
		sgt::vec3f* lret = new sgt::vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3f >::push(L,lret,true);

		return 1;
	}

	// sgt::box3f sgt::mat4f::operator*(const sgt::box3f & b) const
	static int _bind___mul_overload_4(lua_State *L) {
		if (!_lg_typecheck___mul_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::box3f sgt::mat4f::operator*(const sgt::box3f & b) const function, expected prototype:\nsgt::box3f sgt::mat4f::operator*(const sgt::box3f & b) const\nClass arguments details:\narg 1 ID = 58086973\n");
		}

		const sgt::box3f* b_ptr=(Luna< sgt::box3f >::check(L,2));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in sgt::mat4f::operator* function");
		}
		const sgt::box3f & b=*b_ptr;

		sgt::mat4f* self=(Luna< sgt::mat4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::box3f sgt::mat4f::operator*(const sgt::box3f &) const. Got : '%s'",typeid(Luna< sgt::mat4f >::check(L,1)).name());
		}
		sgt::box3f stack_lret = self->operator*(b);
		sgt::box3f* lret = new sgt::box3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::box3f >::push(L,lret,true);

		return 1;
	}

	// sgt::mat4f sgt::mat4f::operator*(float f) const
	static int _bind___mul_overload_5(lua_State *L) {
		if (!_lg_typecheck___mul_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat4f sgt::mat4f::operator*(float f) const function, expected prototype:\nsgt::mat4f sgt::mat4f::operator*(float f) const\nClass arguments details:\n");
		}

		float f=(float)lua_tonumber(L,2);

		sgt::mat4f* self=(Luna< sgt::mat4f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat4f sgt::mat4f::operator*(float) const. Got : '%s'",typeid(Luna< sgt::mat4f >::check(L,1)).name());
		}
		sgt::mat4f stack_lret = self->operator*(f);
		sgt::mat4f* lret = new sgt::mat4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat4f >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::mat4f::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);
		if (_lg_typecheck___mul_overload_3(L)) return _bind___mul_overload_3(L);
		if (_lg_typecheck___mul_overload_4(L)) return _bind___mul_overload_4(L);
		if (_lg_typecheck___mul_overload_5(L)) return _bind___mul_overload_5(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const sgt::mat4f &)\n  operator*(const sgt::vec4f &)\n  operator*(const sgt::vec3f &)\n  operator*(const sgt::box3f &)\n  operator*(float)\n");
		return 0;
	}


};

sgt::mat4f* LunaTraits< sgt::mat4f >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_mat4f::_bind_ctor(L);
}

void LunaTraits< sgt::mat4f >::_bind_dtor(sgt::mat4f* obj) {
	delete obj;
}

const char LunaTraits< sgt::mat4f >::className[] = "mat4f";
const char LunaTraits< sgt::mat4f >::fullName[] = "sgt::mat4f";
const char LunaTraits< sgt::mat4f >::moduleName[] = "sgt";
const char* LunaTraits< sgt::mat4f >::parents[] = {0};
const int LunaTraits< sgt::mat4f >::hash = 67824817;
const int LunaTraits< sgt::mat4f >::uniqueIDs[] = {67824817,0};

luna_RegType LunaTraits< sgt::mat4f >::methods[] = {
	{"coefficients", &luna_wrapper_sgt_mat4f::_bind_coefficients},
	{"transpose", &luna_wrapper_sgt_mat4f::_bind_transpose},
	{"adjoint", &luna_wrapper_sgt_mat4f::_bind_adjoint},
	{"inverse", &luna_wrapper_sgt_mat4f::_bind_inverse},
	{"mat3x3", &luna_wrapper_sgt_mat4f::_bind_mat3x3},
	{"toMatrixd", &luna_wrapper_sgt_mat4f::_bind_toMatrixd},
	{"fromMatrixd", &luna_wrapper_sgt_mat4f::_bind_fromMatrixd},
	{"determinant", &luna_wrapper_sgt_mat4f::_bind_determinant},
	{"translate", &luna_wrapper_sgt_mat4f::_bind_translate},
	{"rotatex", &luna_wrapper_sgt_mat4f::_bind_rotatex},
	{"rotatey", &luna_wrapper_sgt_mat4f::_bind_rotatey},
	{"rotatez", &luna_wrapper_sgt_mat4f::_bind_rotatez},
	{"perspectiveProjection", &luna_wrapper_sgt_mat4f::_bind_perspectiveProjection},
	{"orthoProjection", &luna_wrapper_sgt_mat4f::_bind_orthoProjection},
	{"op_index", &luna_wrapper_sgt_mat4f::_bind_op_index},
	{"op_assign", &luna_wrapper_sgt_mat4f::_bind_op_assign},
	{"__eq", &luna_wrapper_sgt_mat4f::_bind___eq},
	{"op_neq", &luna_wrapper_sgt_mat4f::_bind_op_neq},
	{"__add", &luna_wrapper_sgt_mat4f::_bind___add},
	{"__sub", &luna_wrapper_sgt_mat4f::_bind___sub},
	{"__mul", &luna_wrapper_sgt_mat4f::_bind___mul},
	{"dynCast", &luna_wrapper_sgt_mat4f::_bind_dynCast},
	{"fromVoid", &luna_wrapper_sgt_mat4f::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_mat4f::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::mat4f >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::mat4f >::enumValues[] = {
	{0,0}
};



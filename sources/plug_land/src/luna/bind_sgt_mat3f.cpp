#include <plug_common.h>

class luna_wrapper_sgt_mat3f {
public:
	typedef Luna< sgt::mat3f > luna_t;

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

		sgt::mat3f* self= (sgt::mat3f*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::mat3f >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67824786) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< sgt::mat3f >::check(L,1));
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

		sgt::mat3f* self=(Luna< sgt::mat3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::mat3f");
		
		return luna_dynamicCast(L,converters,"sgt::mat3f",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		if( lua_isnumber(L,8)==0 ) return false;
		if( lua_isnumber(L,9)==0 ) return false;
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


	// Function checkers:
	inline static bool _lg_typecheck_coefficients(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setColumn(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,76239302) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_fromAxes(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239302) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,76239302) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,76239302) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_transpose(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_inverse_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67824786) ) return false;
		if( (!(Luna< sgt::mat3f >::check(L,2))) ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_inverse_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_determinant(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_trace(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 12 valid operators)
	inline static bool _lg_typecheck_op_index(lua_State *L) {
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

		if( !Luna<void>::has_uniqueid(L,2,67824786) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67824786) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67824786) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67824786) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67824786) ) return false;
		if( (!(Luna< sgt::mat3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239302) ) return false;
		if( (!(Luna< sgt::vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239271) ) return false;
		if( (!(Luna< sgt::vec2f >::check(L,2))) ) return false;
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

	inline static bool _lg_typecheck___unm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Constructor binds:
	// sgt::mat3f::mat3f()
	static sgt::mat3f* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat3f::mat3f() function, expected prototype:\nsgt::mat3f::mat3f()\nClass arguments details:\n");
		}


		return new sgt::mat3f();
	}

	// sgt::mat3f::mat3f(float m00, float m01, float m02, float m10, float m11, float m12, float m20, float m21, float m22)
	static sgt::mat3f* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat3f::mat3f(float m00, float m01, float m02, float m10, float m11, float m12, float m20, float m21, float m22) function, expected prototype:\nsgt::mat3f::mat3f(float m00, float m01, float m02, float m10, float m11, float m12, float m20, float m21, float m22)\nClass arguments details:\n");
		}

		float m00=(float)lua_tonumber(L,1);
		float m01=(float)lua_tonumber(L,2);
		float m02=(float)lua_tonumber(L,3);
		float m10=(float)lua_tonumber(L,4);
		float m11=(float)lua_tonumber(L,5);
		float m12=(float)lua_tonumber(L,6);
		float m20=(float)lua_tonumber(L,7);
		float m21=(float)lua_tonumber(L,8);
		float m22=(float)lua_tonumber(L,9);

		return new sgt::mat3f(m00, m01, m02, m10, m11, m12, m20, m21, m22);
	}

	// sgt::mat3f::mat3f(const float * array)
	static sgt::mat3f* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat3f::mat3f(const float * array) function, expected prototype:\nsgt::mat3f::mat3f(const float * array)\nClass arguments details:\n");
		}

		const float* array=(const float*)Luna< void >::check(L,1);

		return new sgt::mat3f(array);
	}

	// sgt::mat3f::mat3f(const sgt::mat3f & mat)
	static sgt::mat3f* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat3f::mat3f(const sgt::mat3f & mat) function, expected prototype:\nsgt::mat3f::mat3f(const sgt::mat3f & mat)\nClass arguments details:\narg 1 ID = 67824786\n");
		}

		const sgt::mat3f* mat_ptr=(Luna< sgt::mat3f >::check(L,1));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in sgt::mat3f::mat3f function");
		}
		const sgt::mat3f & mat=*mat_ptr;

		return new sgt::mat3f(mat);
	}

	// Overload binder for sgt::mat3f::mat3f
	static sgt::mat3f* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function mat3f, cannot match any of the overloads for function mat3f:\n  mat3f()\n  mat3f(float, float, float, float, float, float, float, float, float)\n  mat3f(const float *)\n  mat3f(const sgt::mat3f &)\n");
		return NULL;
	}


	// Function binds:
	// const float * sgt::mat3f::coefficients() const
	static int _bind_coefficients(lua_State *L) {
		if (!_lg_typecheck_coefficients(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const float * sgt::mat3f::coefficients() const function, expected prototype:\nconst float * sgt::mat3f::coefficients() const\nClass arguments details:\n");
		}


		sgt::mat3f* self=(Luna< sgt::mat3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const float * sgt::mat3f::coefficients() const. Got : '%s'",typeid(Luna< sgt::mat3f >::check(L,1)).name());
		}
		const float * lret = self->coefficients();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// sgt::vec3f sgt::mat3f::getColumn(int iCol) const
	static int _bind_getColumn(lua_State *L) {
		if (!_lg_typecheck_getColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3f sgt::mat3f::getColumn(int iCol) const function, expected prototype:\nsgt::vec3f sgt::mat3f::getColumn(int iCol) const\nClass arguments details:\n");
		}

		int iCol=(int)lua_tointeger(L,2);

		sgt::mat3f* self=(Luna< sgt::mat3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec3f sgt::mat3f::getColumn(int) const. Got : '%s'",typeid(Luna< sgt::mat3f >::check(L,1)).name());
		}
		sgt::vec3f stack_lret = self->getColumn(iCol);
		sgt::vec3f* lret = new sgt::vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3f >::push(L,lret,true);

		return 1;
	}

	// void sgt::mat3f::setColumn(int iCol, const sgt::vec3f & v)
	static int _bind_setColumn(lua_State *L) {
		if (!_lg_typecheck_setColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::mat3f::setColumn(int iCol, const sgt::vec3f & v) function, expected prototype:\nvoid sgt::mat3f::setColumn(int iCol, const sgt::vec3f & v)\nClass arguments details:\narg 2 ID = 76239302\n");
		}

		int iCol=(int)lua_tointeger(L,2);
		const sgt::vec3f* v_ptr=(Luna< sgt::vec3f >::check(L,3));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::mat3f::setColumn function");
		}
		const sgt::vec3f & v=*v_ptr;

		sgt::mat3f* self=(Luna< sgt::mat3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::mat3f::setColumn(int, const sgt::vec3f &). Got : '%s'",typeid(Luna< sgt::mat3f >::check(L,1)).name());
		}
		self->setColumn(iCol, v);

		return 0;
	}

	// void sgt::mat3f::fromAxes(const sgt::vec3f & xAxis, const sgt::vec3f & yAxis, const sgt::vec3f & zAxis)
	static int _bind_fromAxes(lua_State *L) {
		if (!_lg_typecheck_fromAxes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::mat3f::fromAxes(const sgt::vec3f & xAxis, const sgt::vec3f & yAxis, const sgt::vec3f & zAxis) function, expected prototype:\nvoid sgt::mat3f::fromAxes(const sgt::vec3f & xAxis, const sgt::vec3f & yAxis, const sgt::vec3f & zAxis)\nClass arguments details:\narg 1 ID = 76239302\narg 2 ID = 76239302\narg 3 ID = 76239302\n");
		}

		const sgt::vec3f* xAxis_ptr=(Luna< sgt::vec3f >::check(L,2));
		if( !xAxis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg xAxis in sgt::mat3f::fromAxes function");
		}
		const sgt::vec3f & xAxis=*xAxis_ptr;
		const sgt::vec3f* yAxis_ptr=(Luna< sgt::vec3f >::check(L,3));
		if( !yAxis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg yAxis in sgt::mat3f::fromAxes function");
		}
		const sgt::vec3f & yAxis=*yAxis_ptr;
		const sgt::vec3f* zAxis_ptr=(Luna< sgt::vec3f >::check(L,4));
		if( !zAxis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg zAxis in sgt::mat3f::fromAxes function");
		}
		const sgt::vec3f & zAxis=*zAxis_ptr;

		sgt::mat3f* self=(Luna< sgt::mat3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::mat3f::fromAxes(const sgt::vec3f &, const sgt::vec3f &, const sgt::vec3f &). Got : '%s'",typeid(Luna< sgt::mat3f >::check(L,1)).name());
		}
		self->fromAxes(xAxis, yAxis, zAxis);

		return 0;
	}

	// sgt::mat3f sgt::mat3f::transpose() const
	static int _bind_transpose(lua_State *L) {
		if (!_lg_typecheck_transpose(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat3f sgt::mat3f::transpose() const function, expected prototype:\nsgt::mat3f sgt::mat3f::transpose() const\nClass arguments details:\n");
		}


		sgt::mat3f* self=(Luna< sgt::mat3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat3f sgt::mat3f::transpose() const. Got : '%s'",typeid(Luna< sgt::mat3f >::check(L,1)).name());
		}
		sgt::mat3f stack_lret = self->transpose();
		sgt::mat3f* lret = new sgt::mat3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat3f >::push(L,lret,true);

		return 1;
	}

	// bool sgt::mat3f::inverse(sgt::mat3f & mInv, float tolerance = 1e-06) const
	static int _bind_inverse_overload_1(lua_State *L) {
		if (!_lg_typecheck_inverse_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::mat3f::inverse(sgt::mat3f & mInv, float tolerance = 1e-06) const function, expected prototype:\nbool sgt::mat3f::inverse(sgt::mat3f & mInv, float tolerance = 1e-06) const\nClass arguments details:\narg 1 ID = 67824786\n");
		}

		int luatop = lua_gettop(L);

		sgt::mat3f* mInv_ptr=(Luna< sgt::mat3f >::check(L,2));
		if( !mInv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mInv in sgt::mat3f::inverse function");
		}
		sgt::mat3f & mInv=*mInv_ptr;
		float tolerance=luatop>2 ? (float)lua_tonumber(L,3) : (float)1e-06;

		sgt::mat3f* self=(Luna< sgt::mat3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::mat3f::inverse(sgt::mat3f &, float) const. Got : '%s'",typeid(Luna< sgt::mat3f >::check(L,1)).name());
		}
		bool lret = self->inverse(mInv, tolerance);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// sgt::mat3f sgt::mat3f::inverse(float tolerance = 1e-06) const
	static int _bind_inverse_overload_2(lua_State *L) {
		if (!_lg_typecheck_inverse_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat3f sgt::mat3f::inverse(float tolerance = 1e-06) const function, expected prototype:\nsgt::mat3f sgt::mat3f::inverse(float tolerance = 1e-06) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float tolerance=luatop>1 ? (float)lua_tonumber(L,2) : (float)1e-06;

		sgt::mat3f* self=(Luna< sgt::mat3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat3f sgt::mat3f::inverse(float) const. Got : '%s'",typeid(Luna< sgt::mat3f >::check(L,1)).name());
		}
		sgt::mat3f stack_lret = self->inverse(tolerance);
		sgt::mat3f* lret = new sgt::mat3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat3f >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::mat3f::inverse
	static int _bind_inverse(lua_State *L) {
		if (_lg_typecheck_inverse_overload_1(L)) return _bind_inverse_overload_1(L);
		if (_lg_typecheck_inverse_overload_2(L)) return _bind_inverse_overload_2(L);

		luaL_error(L, "error in function inverse, cannot match any of the overloads for function inverse:\n  inverse(sgt::mat3f &, float)\n  inverse(float)\n");
		return 0;
	}

	// float sgt::mat3f::determinant() const
	static int _bind_determinant(lua_State *L) {
		if (!_lg_typecheck_determinant(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float sgt::mat3f::determinant() const function, expected prototype:\nfloat sgt::mat3f::determinant() const\nClass arguments details:\n");
		}


		sgt::mat3f* self=(Luna< sgt::mat3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float sgt::mat3f::determinant() const. Got : '%s'",typeid(Luna< sgt::mat3f >::check(L,1)).name());
		}
		float lret = self->determinant();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float sgt::mat3f::trace() const
	static int _bind_trace(lua_State *L) {
		if (!_lg_typecheck_trace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float sgt::mat3f::trace() const function, expected prototype:\nfloat sgt::mat3f::trace() const\nClass arguments details:\n");
		}


		sgt::mat3f* self=(Luna< sgt::mat3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float sgt::mat3f::trace() const. Got : '%s'",typeid(Luna< sgt::mat3f >::check(L,1)).name());
		}
		float lret = self->trace();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:
	// float * sgt::mat3f::operator[](int iRow)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float * sgt::mat3f::operator[](int iRow) function, expected prototype:\nfloat * sgt::mat3f::operator[](int iRow)\nClass arguments details:\n");
		}

		int iRow=(int)lua_tointeger(L,2);

		sgt::mat3f* self=(Luna< sgt::mat3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float * sgt::mat3f::operator[](int). Got : '%s'",typeid(Luna< sgt::mat3f >::check(L,1)).name());
		}
		float * lret = self->operator[](iRow);
		lua_pushnumber(L,*lret);

		return 1;
	}

	// sgt::mat3f & sgt::mat3f::operator=(const sgt::mat3f & mat)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat3f & sgt::mat3f::operator=(const sgt::mat3f & mat) function, expected prototype:\nsgt::mat3f & sgt::mat3f::operator=(const sgt::mat3f & mat)\nClass arguments details:\narg 1 ID = 67824786\n");
		}

		const sgt::mat3f* mat_ptr=(Luna< sgt::mat3f >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in sgt::mat3f::operator= function");
		}
		const sgt::mat3f & mat=*mat_ptr;

		sgt::mat3f* self=(Luna< sgt::mat3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat3f & sgt::mat3f::operator=(const sgt::mat3f &). Got : '%s'",typeid(Luna< sgt::mat3f >::check(L,1)).name());
		}
		const sgt::mat3f* lret = &self->operator=(mat);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat3f >::push(L,lret,false);

		return 1;
	}

	// bool sgt::mat3f::operator==(const sgt::mat3f & mat) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::mat3f::operator==(const sgt::mat3f & mat) const function, expected prototype:\nbool sgt::mat3f::operator==(const sgt::mat3f & mat) const\nClass arguments details:\narg 1 ID = 67824786\n");
		}

		const sgt::mat3f* mat_ptr=(Luna< sgt::mat3f >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in sgt::mat3f::operator== function");
		}
		const sgt::mat3f & mat=*mat_ptr;

		sgt::mat3f* self=(Luna< sgt::mat3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::mat3f::operator==(const sgt::mat3f &) const. Got : '%s'",typeid(Luna< sgt::mat3f >::check(L,1)).name());
		}
		bool lret = self->operator==(mat);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool sgt::mat3f::operator!=(const sgt::mat3f & mat) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::mat3f::operator!=(const sgt::mat3f & mat) const function, expected prototype:\nbool sgt::mat3f::operator!=(const sgt::mat3f & mat) const\nClass arguments details:\narg 1 ID = 67824786\n");
		}

		const sgt::mat3f* mat_ptr=(Luna< sgt::mat3f >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in sgt::mat3f::operator!= function");
		}
		const sgt::mat3f & mat=*mat_ptr;

		sgt::mat3f* self=(Luna< sgt::mat3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::mat3f::operator!=(const sgt::mat3f &) const. Got : '%s'",typeid(Luna< sgt::mat3f >::check(L,1)).name());
		}
		bool lret = self->operator!=(mat);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// sgt::mat3f sgt::mat3f::operator+(const sgt::mat3f & mat) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat3f sgt::mat3f::operator+(const sgt::mat3f & mat) const function, expected prototype:\nsgt::mat3f sgt::mat3f::operator+(const sgt::mat3f & mat) const\nClass arguments details:\narg 1 ID = 67824786\n");
		}

		const sgt::mat3f* mat_ptr=(Luna< sgt::mat3f >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in sgt::mat3f::operator+ function");
		}
		const sgt::mat3f & mat=*mat_ptr;

		sgt::mat3f* self=(Luna< sgt::mat3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat3f sgt::mat3f::operator+(const sgt::mat3f &) const. Got : '%s'",typeid(Luna< sgt::mat3f >::check(L,1)).name());
		}
		sgt::mat3f stack_lret = self->operator+(mat);
		sgt::mat3f* lret = new sgt::mat3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat3f >::push(L,lret,true);

		return 1;
	}

	// sgt::mat3f sgt::mat3f::operator-(const sgt::mat3f & mat) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat3f sgt::mat3f::operator-(const sgt::mat3f & mat) const function, expected prototype:\nsgt::mat3f sgt::mat3f::operator-(const sgt::mat3f & mat) const\nClass arguments details:\narg 1 ID = 67824786\n");
		}

		const sgt::mat3f* mat_ptr=(Luna< sgt::mat3f >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in sgt::mat3f::operator- function");
		}
		const sgt::mat3f & mat=*mat_ptr;

		sgt::mat3f* self=(Luna< sgt::mat3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat3f sgt::mat3f::operator-(const sgt::mat3f &) const. Got : '%s'",typeid(Luna< sgt::mat3f >::check(L,1)).name());
		}
		sgt::mat3f stack_lret = self->operator-(mat);
		sgt::mat3f* lret = new sgt::mat3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat3f >::push(L,lret,true);

		return 1;
	}

	// sgt::mat3f sgt::mat3f::operator*(const sgt::mat3f & mat) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat3f sgt::mat3f::operator*(const sgt::mat3f & mat) const function, expected prototype:\nsgt::mat3f sgt::mat3f::operator*(const sgt::mat3f & mat) const\nClass arguments details:\narg 1 ID = 67824786\n");
		}

		const sgt::mat3f* mat_ptr=(Luna< sgt::mat3f >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in sgt::mat3f::operator* function");
		}
		const sgt::mat3f & mat=*mat_ptr;

		sgt::mat3f* self=(Luna< sgt::mat3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat3f sgt::mat3f::operator*(const sgt::mat3f &) const. Got : '%s'",typeid(Luna< sgt::mat3f >::check(L,1)).name());
		}
		sgt::mat3f stack_lret = self->operator*(mat);
		sgt::mat3f* lret = new sgt::mat3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat3f >::push(L,lret,true);

		return 1;
	}

	// sgt::vec3f sgt::mat3f::operator*(const sgt::vec3f & v) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3f sgt::mat3f::operator*(const sgt::vec3f & v) const function, expected prototype:\nsgt::vec3f sgt::mat3f::operator*(const sgt::vec3f & v) const\nClass arguments details:\narg 1 ID = 76239302\n");
		}

		const sgt::vec3f* v_ptr=(Luna< sgt::vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::mat3f::operator* function");
		}
		const sgt::vec3f & v=*v_ptr;

		sgt::mat3f* self=(Luna< sgt::mat3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec3f sgt::mat3f::operator*(const sgt::vec3f &) const. Got : '%s'",typeid(Luna< sgt::mat3f >::check(L,1)).name());
		}
		sgt::vec3f stack_lret = self->operator*(v);
		sgt::vec3f* lret = new sgt::vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3f >::push(L,lret,true);

		return 1;
	}

	// sgt::vec2f sgt::mat3f::operator*(const sgt::vec2f & v) const
	static int _bind___mul_overload_3(lua_State *L) {
		if (!_lg_typecheck___mul_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2f sgt::mat3f::operator*(const sgt::vec2f & v) const function, expected prototype:\nsgt::vec2f sgt::mat3f::operator*(const sgt::vec2f & v) const\nClass arguments details:\narg 1 ID = 76239271\n");
		}

		const sgt::vec2f* v_ptr=(Luna< sgt::vec2f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::mat3f::operator* function");
		}
		const sgt::vec2f & v=*v_ptr;

		sgt::mat3f* self=(Luna< sgt::mat3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2f sgt::mat3f::operator*(const sgt::vec2f &) const. Got : '%s'",typeid(Luna< sgt::mat3f >::check(L,1)).name());
		}
		sgt::vec2f stack_lret = self->operator*(v);
		sgt::vec2f* lret = new sgt::vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2f >::push(L,lret,true);

		return 1;
	}

	// sgt::box3f sgt::mat3f::operator*(const sgt::box3f & b) const
	static int _bind___mul_overload_4(lua_State *L) {
		if (!_lg_typecheck___mul_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::box3f sgt::mat3f::operator*(const sgt::box3f & b) const function, expected prototype:\nsgt::box3f sgt::mat3f::operator*(const sgt::box3f & b) const\nClass arguments details:\narg 1 ID = 58086973\n");
		}

		const sgt::box3f* b_ptr=(Luna< sgt::box3f >::check(L,2));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in sgt::mat3f::operator* function");
		}
		const sgt::box3f & b=*b_ptr;

		sgt::mat3f* self=(Luna< sgt::mat3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::box3f sgt::mat3f::operator*(const sgt::box3f &) const. Got : '%s'",typeid(Luna< sgt::mat3f >::check(L,1)).name());
		}
		sgt::box3f stack_lret = self->operator*(b);
		sgt::box3f* lret = new sgt::box3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::box3f >::push(L,lret,true);

		return 1;
	}

	// sgt::mat3f sgt::mat3f::operator*(const float scalar) const
	static int _bind___mul_overload_5(lua_State *L) {
		if (!_lg_typecheck___mul_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat3f sgt::mat3f::operator*(const float scalar) const function, expected prototype:\nsgt::mat3f sgt::mat3f::operator*(const float scalar) const\nClass arguments details:\n");
		}

		const float scalar=(const float)lua_tonumber(L,2);

		sgt::mat3f* self=(Luna< sgt::mat3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat3f sgt::mat3f::operator*(const float) const. Got : '%s'",typeid(Luna< sgt::mat3f >::check(L,1)).name());
		}
		sgt::mat3f stack_lret = self->operator*(scalar);
		sgt::mat3f* lret = new sgt::mat3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat3f >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::mat3f::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);
		if (_lg_typecheck___mul_overload_3(L)) return _bind___mul_overload_3(L);
		if (_lg_typecheck___mul_overload_4(L)) return _bind___mul_overload_4(L);
		if (_lg_typecheck___mul_overload_5(L)) return _bind___mul_overload_5(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const sgt::mat3f &)\n  operator*(const sgt::vec3f &)\n  operator*(const sgt::vec2f &)\n  operator*(const sgt::box3f &)\n  operator*(const float)\n");
		return 0;
	}

	// sgt::mat3f sgt::mat3f::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat3f sgt::mat3f::operator-() const function, expected prototype:\nsgt::mat3f sgt::mat3f::operator-() const\nClass arguments details:\n");
		}


		sgt::mat3f* self=(Luna< sgt::mat3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat3f sgt::mat3f::operator-() const. Got : '%s'",typeid(Luna< sgt::mat3f >::check(L,1)).name());
		}
		sgt::mat3f stack_lret = self->operator-();
		sgt::mat3f* lret = new sgt::mat3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat3f >::push(L,lret,true);

		return 1;
	}


};

sgt::mat3f* LunaTraits< sgt::mat3f >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_mat3f::_bind_ctor(L);
}

void LunaTraits< sgt::mat3f >::_bind_dtor(sgt::mat3f* obj) {
	delete obj;
}

const char LunaTraits< sgt::mat3f >::className[] = "mat3f";
const char LunaTraits< sgt::mat3f >::fullName[] = "sgt::mat3f";
const char LunaTraits< sgt::mat3f >::moduleName[] = "sgt";
const char* LunaTraits< sgt::mat3f >::parents[] = {0};
const int LunaTraits< sgt::mat3f >::hash = 67824786;
const int LunaTraits< sgt::mat3f >::uniqueIDs[] = {67824786,0};

luna_RegType LunaTraits< sgt::mat3f >::methods[] = {
	{"coefficients", &luna_wrapper_sgt_mat3f::_bind_coefficients},
	{"getColumn", &luna_wrapper_sgt_mat3f::_bind_getColumn},
	{"setColumn", &luna_wrapper_sgt_mat3f::_bind_setColumn},
	{"fromAxes", &luna_wrapper_sgt_mat3f::_bind_fromAxes},
	{"transpose", &luna_wrapper_sgt_mat3f::_bind_transpose},
	{"inverse", &luna_wrapper_sgt_mat3f::_bind_inverse},
	{"determinant", &luna_wrapper_sgt_mat3f::_bind_determinant},
	{"trace", &luna_wrapper_sgt_mat3f::_bind_trace},
	{"op_index", &luna_wrapper_sgt_mat3f::_bind_op_index},
	{"op_assign", &luna_wrapper_sgt_mat3f::_bind_op_assign},
	{"__eq", &luna_wrapper_sgt_mat3f::_bind___eq},
	{"op_neq", &luna_wrapper_sgt_mat3f::_bind_op_neq},
	{"__add", &luna_wrapper_sgt_mat3f::_bind___add},
	{"__sub", &luna_wrapper_sgt_mat3f::_bind___sub},
	{"__mul", &luna_wrapper_sgt_mat3f::_bind___mul},
	{"__unm", &luna_wrapper_sgt_mat3f::_bind___unm},
	{"dynCast", &luna_wrapper_sgt_mat3f::_bind_dynCast},
	{"fromVoid", &luna_wrapper_sgt_mat3f::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_mat3f::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::mat3f >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::mat3f >::enumValues[] = {
	{0,0}
};



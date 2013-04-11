#include <plug_common.h>

class luna_wrapper_sgt_mat2f {
public:
	typedef Luna< sgt::mat2f > luna_t;

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

		sgt::mat2f* self= (sgt::mat2f*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::mat2f >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67824755) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< sgt::mat2f >::check(L,1));
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

		sgt::mat2f* self=(Luna< sgt::mat2f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::mat2f");
		
		return luna_dynamicCast(L,converters,"sgt::mat2f",name);
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

		if( !Luna<void>::has_uniqueid(L,1,67824755) ) return false;
		if( (!(Luna< sgt::mat2f >::check(L,1))) ) return false;
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
		if( !Luna<void>::has_uniqueid(L,3,76239271) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_transpose(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_inverse_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67824755) ) return false;
		if( (!(Luna< sgt::mat2f >::check(L,2))) ) return false;
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
	// (found 10 valid operators)
	inline static bool _lg_typecheck_op_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67824755) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67824755) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67824755) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67824755) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67824755) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67824755) ) return false;
		if( (!(Luna< sgt::mat2f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239271) ) return false;
		if( (!(Luna< sgt::vec2f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck___unm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Constructor binds:
	// sgt::mat2f::mat2f()
	static sgt::mat2f* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat2f::mat2f() function, expected prototype:\nsgt::mat2f::mat2f()\nClass arguments details:\n");
		}


		return new sgt::mat2f();
	}

	// sgt::mat2f::mat2f(float m00, float m01, float m10, float m11)
	static sgt::mat2f* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat2f::mat2f(float m00, float m01, float m10, float m11) function, expected prototype:\nsgt::mat2f::mat2f(float m00, float m01, float m10, float m11)\nClass arguments details:\n");
		}

		float m00=(float)lua_tonumber(L,1);
		float m01=(float)lua_tonumber(L,2);
		float m10=(float)lua_tonumber(L,3);
		float m11=(float)lua_tonumber(L,4);

		return new sgt::mat2f(m00, m01, m10, m11);
	}

	// sgt::mat2f::mat2f(const sgt::mat2f & mat)
	static sgt::mat2f* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat2f::mat2f(const sgt::mat2f & mat) function, expected prototype:\nsgt::mat2f::mat2f(const sgt::mat2f & mat)\nClass arguments details:\narg 1 ID = 67824755\n");
		}

		const sgt::mat2f* mat_ptr=(Luna< sgt::mat2f >::check(L,1));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in sgt::mat2f::mat2f function");
		}
		const sgt::mat2f & mat=*mat_ptr;

		return new sgt::mat2f(mat);
	}

	// Overload binder for sgt::mat2f::mat2f
	static sgt::mat2f* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function mat2f, cannot match any of the overloads for function mat2f:\n  mat2f()\n  mat2f(float, float, float, float)\n  mat2f(const sgt::mat2f &)\n");
		return NULL;
	}


	// Function binds:
	// const float * sgt::mat2f::coefficients() const
	static int _bind_coefficients(lua_State *L) {
		if (!_lg_typecheck_coefficients(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const float * sgt::mat2f::coefficients() const function, expected prototype:\nconst float * sgt::mat2f::coefficients() const\nClass arguments details:\n");
		}


		sgt::mat2f* self=(Luna< sgt::mat2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const float * sgt::mat2f::coefficients() const. Got : '%s'",typeid(Luna< sgt::mat2f >::check(L,1)).name());
		}
		const float * lret = self->coefficients();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// sgt::vec2f sgt::mat2f::getColumn(int iCol) const
	static int _bind_getColumn(lua_State *L) {
		if (!_lg_typecheck_getColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2f sgt::mat2f::getColumn(int iCol) const function, expected prototype:\nsgt::vec2f sgt::mat2f::getColumn(int iCol) const\nClass arguments details:\n");
		}

		int iCol=(int)lua_tointeger(L,2);

		sgt::mat2f* self=(Luna< sgt::mat2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2f sgt::mat2f::getColumn(int) const. Got : '%s'",typeid(Luna< sgt::mat2f >::check(L,1)).name());
		}
		sgt::vec2f stack_lret = self->getColumn(iCol);
		sgt::vec2f* lret = new sgt::vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2f >::push(L,lret,true);

		return 1;
	}

	// void sgt::mat2f::setColumn(int iCol, const sgt::vec2f & v)
	static int _bind_setColumn(lua_State *L) {
		if (!_lg_typecheck_setColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::mat2f::setColumn(int iCol, const sgt::vec2f & v) function, expected prototype:\nvoid sgt::mat2f::setColumn(int iCol, const sgt::vec2f & v)\nClass arguments details:\narg 2 ID = 76239271\n");
		}

		int iCol=(int)lua_tointeger(L,2);
		const sgt::vec2f* v_ptr=(Luna< sgt::vec2f >::check(L,3));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::mat2f::setColumn function");
		}
		const sgt::vec2f & v=*v_ptr;

		sgt::mat2f* self=(Luna< sgt::mat2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::mat2f::setColumn(int, const sgt::vec2f &). Got : '%s'",typeid(Luna< sgt::mat2f >::check(L,1)).name());
		}
		self->setColumn(iCol, v);

		return 0;
	}

	// sgt::mat2f sgt::mat2f::transpose() const
	static int _bind_transpose(lua_State *L) {
		if (!_lg_typecheck_transpose(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat2f sgt::mat2f::transpose() const function, expected prototype:\nsgt::mat2f sgt::mat2f::transpose() const\nClass arguments details:\n");
		}


		sgt::mat2f* self=(Luna< sgt::mat2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat2f sgt::mat2f::transpose() const. Got : '%s'",typeid(Luna< sgt::mat2f >::check(L,1)).name());
		}
		sgt::mat2f stack_lret = self->transpose();
		sgt::mat2f* lret = new sgt::mat2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat2f >::push(L,lret,true);

		return 1;
	}

	// bool sgt::mat2f::inverse(sgt::mat2f & mInv, float tolerance = 1e-06) const
	static int _bind_inverse_overload_1(lua_State *L) {
		if (!_lg_typecheck_inverse_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::mat2f::inverse(sgt::mat2f & mInv, float tolerance = 1e-06) const function, expected prototype:\nbool sgt::mat2f::inverse(sgt::mat2f & mInv, float tolerance = 1e-06) const\nClass arguments details:\narg 1 ID = 67824755\n");
		}

		int luatop = lua_gettop(L);

		sgt::mat2f* mInv_ptr=(Luna< sgt::mat2f >::check(L,2));
		if( !mInv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mInv in sgt::mat2f::inverse function");
		}
		sgt::mat2f & mInv=*mInv_ptr;
		float tolerance=luatop>2 ? (float)lua_tonumber(L,3) : (float)1e-06;

		sgt::mat2f* self=(Luna< sgt::mat2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::mat2f::inverse(sgt::mat2f &, float) const. Got : '%s'",typeid(Luna< sgt::mat2f >::check(L,1)).name());
		}
		bool lret = self->inverse(mInv, tolerance);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// sgt::mat2f sgt::mat2f::inverse(float tolerance = 1e-06) const
	static int _bind_inverse_overload_2(lua_State *L) {
		if (!_lg_typecheck_inverse_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat2f sgt::mat2f::inverse(float tolerance = 1e-06) const function, expected prototype:\nsgt::mat2f sgt::mat2f::inverse(float tolerance = 1e-06) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float tolerance=luatop>1 ? (float)lua_tonumber(L,2) : (float)1e-06;

		sgt::mat2f* self=(Luna< sgt::mat2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat2f sgt::mat2f::inverse(float) const. Got : '%s'",typeid(Luna< sgt::mat2f >::check(L,1)).name());
		}
		sgt::mat2f stack_lret = self->inverse(tolerance);
		sgt::mat2f* lret = new sgt::mat2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat2f >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::mat2f::inverse
	static int _bind_inverse(lua_State *L) {
		if (_lg_typecheck_inverse_overload_1(L)) return _bind_inverse_overload_1(L);
		if (_lg_typecheck_inverse_overload_2(L)) return _bind_inverse_overload_2(L);

		luaL_error(L, "error in function inverse, cannot match any of the overloads for function inverse:\n  inverse(sgt::mat2f &, float)\n  inverse(float)\n");
		return 0;
	}

	// float sgt::mat2f::determinant() const
	static int _bind_determinant(lua_State *L) {
		if (!_lg_typecheck_determinant(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float sgt::mat2f::determinant() const function, expected prototype:\nfloat sgt::mat2f::determinant() const\nClass arguments details:\n");
		}


		sgt::mat2f* self=(Luna< sgt::mat2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float sgt::mat2f::determinant() const. Got : '%s'",typeid(Luna< sgt::mat2f >::check(L,1)).name());
		}
		float lret = self->determinant();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float sgt::mat2f::trace() const
	static int _bind_trace(lua_State *L) {
		if (!_lg_typecheck_trace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float sgt::mat2f::trace() const function, expected prototype:\nfloat sgt::mat2f::trace() const\nClass arguments details:\n");
		}


		sgt::mat2f* self=(Luna< sgt::mat2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float sgt::mat2f::trace() const. Got : '%s'",typeid(Luna< sgt::mat2f >::check(L,1)).name());
		}
		float lret = self->trace();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:
	// float * sgt::mat2f::operator[](int iRow)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float * sgt::mat2f::operator[](int iRow) function, expected prototype:\nfloat * sgt::mat2f::operator[](int iRow)\nClass arguments details:\n");
		}

		int iRow=(int)lua_tointeger(L,2);

		sgt::mat2f* self=(Luna< sgt::mat2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float * sgt::mat2f::operator[](int). Got : '%s'",typeid(Luna< sgt::mat2f >::check(L,1)).name());
		}
		float * lret = self->operator[](iRow);
		lua_pushnumber(L,*lret);

		return 1;
	}

	// sgt::mat2f & sgt::mat2f::operator=(const sgt::mat2f & mat)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat2f & sgt::mat2f::operator=(const sgt::mat2f & mat) function, expected prototype:\nsgt::mat2f & sgt::mat2f::operator=(const sgt::mat2f & mat)\nClass arguments details:\narg 1 ID = 67824755\n");
		}

		const sgt::mat2f* mat_ptr=(Luna< sgt::mat2f >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in sgt::mat2f::operator= function");
		}
		const sgt::mat2f & mat=*mat_ptr;

		sgt::mat2f* self=(Luna< sgt::mat2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat2f & sgt::mat2f::operator=(const sgt::mat2f &). Got : '%s'",typeid(Luna< sgt::mat2f >::check(L,1)).name());
		}
		const sgt::mat2f* lret = &self->operator=(mat);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat2f >::push(L,lret,false);

		return 1;
	}

	// bool sgt::mat2f::operator==(const sgt::mat2f & mat) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::mat2f::operator==(const sgt::mat2f & mat) const function, expected prototype:\nbool sgt::mat2f::operator==(const sgt::mat2f & mat) const\nClass arguments details:\narg 1 ID = 67824755\n");
		}

		const sgt::mat2f* mat_ptr=(Luna< sgt::mat2f >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in sgt::mat2f::operator== function");
		}
		const sgt::mat2f & mat=*mat_ptr;

		sgt::mat2f* self=(Luna< sgt::mat2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::mat2f::operator==(const sgt::mat2f &) const. Got : '%s'",typeid(Luna< sgt::mat2f >::check(L,1)).name());
		}
		bool lret = self->operator==(mat);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool sgt::mat2f::operator!=(const sgt::mat2f & mat) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::mat2f::operator!=(const sgt::mat2f & mat) const function, expected prototype:\nbool sgt::mat2f::operator!=(const sgt::mat2f & mat) const\nClass arguments details:\narg 1 ID = 67824755\n");
		}

		const sgt::mat2f* mat_ptr=(Luna< sgt::mat2f >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in sgt::mat2f::operator!= function");
		}
		const sgt::mat2f & mat=*mat_ptr;

		sgt::mat2f* self=(Luna< sgt::mat2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::mat2f::operator!=(const sgt::mat2f &) const. Got : '%s'",typeid(Luna< sgt::mat2f >::check(L,1)).name());
		}
		bool lret = self->operator!=(mat);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// sgt::mat2f sgt::mat2f::operator+(const sgt::mat2f & mat) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat2f sgt::mat2f::operator+(const sgt::mat2f & mat) const function, expected prototype:\nsgt::mat2f sgt::mat2f::operator+(const sgt::mat2f & mat) const\nClass arguments details:\narg 1 ID = 67824755\n");
		}

		const sgt::mat2f* mat_ptr=(Luna< sgt::mat2f >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in sgt::mat2f::operator+ function");
		}
		const sgt::mat2f & mat=*mat_ptr;

		sgt::mat2f* self=(Luna< sgt::mat2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat2f sgt::mat2f::operator+(const sgt::mat2f &) const. Got : '%s'",typeid(Luna< sgt::mat2f >::check(L,1)).name());
		}
		sgt::mat2f stack_lret = self->operator+(mat);
		sgt::mat2f* lret = new sgt::mat2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat2f >::push(L,lret,true);

		return 1;
	}

	// sgt::mat2f sgt::mat2f::operator-(const sgt::mat2f & mat) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat2f sgt::mat2f::operator-(const sgt::mat2f & mat) const function, expected prototype:\nsgt::mat2f sgt::mat2f::operator-(const sgt::mat2f & mat) const\nClass arguments details:\narg 1 ID = 67824755\n");
		}

		const sgt::mat2f* mat_ptr=(Luna< sgt::mat2f >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in sgt::mat2f::operator- function");
		}
		const sgt::mat2f & mat=*mat_ptr;

		sgt::mat2f* self=(Luna< sgt::mat2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat2f sgt::mat2f::operator-(const sgt::mat2f &) const. Got : '%s'",typeid(Luna< sgt::mat2f >::check(L,1)).name());
		}
		sgt::mat2f stack_lret = self->operator-(mat);
		sgt::mat2f* lret = new sgt::mat2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat2f >::push(L,lret,true);

		return 1;
	}

	// sgt::mat2f sgt::mat2f::operator*(const sgt::mat2f & mat) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat2f sgt::mat2f::operator*(const sgt::mat2f & mat) const function, expected prototype:\nsgt::mat2f sgt::mat2f::operator*(const sgt::mat2f & mat) const\nClass arguments details:\narg 1 ID = 67824755\n");
		}

		const sgt::mat2f* mat_ptr=(Luna< sgt::mat2f >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in sgt::mat2f::operator* function");
		}
		const sgt::mat2f & mat=*mat_ptr;

		sgt::mat2f* self=(Luna< sgt::mat2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat2f sgt::mat2f::operator*(const sgt::mat2f &) const. Got : '%s'",typeid(Luna< sgt::mat2f >::check(L,1)).name());
		}
		sgt::mat2f stack_lret = self->operator*(mat);
		sgt::mat2f* lret = new sgt::mat2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat2f >::push(L,lret,true);

		return 1;
	}

	// sgt::vec2f sgt::mat2f::operator*(const sgt::vec2f & v) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2f sgt::mat2f::operator*(const sgt::vec2f & v) const function, expected prototype:\nsgt::vec2f sgt::mat2f::operator*(const sgt::vec2f & v) const\nClass arguments details:\narg 1 ID = 76239271\n");
		}

		const sgt::vec2f* v_ptr=(Luna< sgt::vec2f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::mat2f::operator* function");
		}
		const sgt::vec2f & v=*v_ptr;

		sgt::mat2f* self=(Luna< sgt::mat2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2f sgt::mat2f::operator*(const sgt::vec2f &) const. Got : '%s'",typeid(Luna< sgt::mat2f >::check(L,1)).name());
		}
		sgt::vec2f stack_lret = self->operator*(v);
		sgt::vec2f* lret = new sgt::vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2f >::push(L,lret,true);

		return 1;
	}

	// sgt::mat2f sgt::mat2f::operator*(const float scalar) const
	static int _bind___mul_overload_3(lua_State *L) {
		if (!_lg_typecheck___mul_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat2f sgt::mat2f::operator*(const float scalar) const function, expected prototype:\nsgt::mat2f sgt::mat2f::operator*(const float scalar) const\nClass arguments details:\n");
		}

		const float scalar=(const float)lua_tonumber(L,2);

		sgt::mat2f* self=(Luna< sgt::mat2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat2f sgt::mat2f::operator*(const float) const. Got : '%s'",typeid(Luna< sgt::mat2f >::check(L,1)).name());
		}
		sgt::mat2f stack_lret = self->operator*(scalar);
		sgt::mat2f* lret = new sgt::mat2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat2f >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::mat2f::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);
		if (_lg_typecheck___mul_overload_3(L)) return _bind___mul_overload_3(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const sgt::mat2f &)\n  operator*(const sgt::vec2f &)\n  operator*(const float)\n");
		return 0;
	}

	// sgt::mat2f sgt::mat2f::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat2f sgt::mat2f::operator-() const function, expected prototype:\nsgt::mat2f sgt::mat2f::operator-() const\nClass arguments details:\n");
		}


		sgt::mat2f* self=(Luna< sgt::mat2f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat2f sgt::mat2f::operator-() const. Got : '%s'",typeid(Luna< sgt::mat2f >::check(L,1)).name());
		}
		sgt::mat2f stack_lret = self->operator-();
		sgt::mat2f* lret = new sgt::mat2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat2f >::push(L,lret,true);

		return 1;
	}


};

sgt::mat2f* LunaTraits< sgt::mat2f >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_mat2f::_bind_ctor(L);
}

void LunaTraits< sgt::mat2f >::_bind_dtor(sgt::mat2f* obj) {
	delete obj;
}

const char LunaTraits< sgt::mat2f >::className[] = "mat2f";
const char LunaTraits< sgt::mat2f >::fullName[] = "sgt::mat2f";
const char LunaTraits< sgt::mat2f >::moduleName[] = "sgt";
const char* LunaTraits< sgt::mat2f >::parents[] = {0};
const int LunaTraits< sgt::mat2f >::hash = 67824755;
const int LunaTraits< sgt::mat2f >::uniqueIDs[] = {67824755,0};

luna_RegType LunaTraits< sgt::mat2f >::methods[] = {
	{"coefficients", &luna_wrapper_sgt_mat2f::_bind_coefficients},
	{"getColumn", &luna_wrapper_sgt_mat2f::_bind_getColumn},
	{"setColumn", &luna_wrapper_sgt_mat2f::_bind_setColumn},
	{"transpose", &luna_wrapper_sgt_mat2f::_bind_transpose},
	{"inverse", &luna_wrapper_sgt_mat2f::_bind_inverse},
	{"determinant", &luna_wrapper_sgt_mat2f::_bind_determinant},
	{"trace", &luna_wrapper_sgt_mat2f::_bind_trace},
	{"op_index", &luna_wrapper_sgt_mat2f::_bind_op_index},
	{"op_assign", &luna_wrapper_sgt_mat2f::_bind_op_assign},
	{"__eq", &luna_wrapper_sgt_mat2f::_bind___eq},
	{"op_neq", &luna_wrapper_sgt_mat2f::_bind_op_neq},
	{"__add", &luna_wrapper_sgt_mat2f::_bind___add},
	{"__sub", &luna_wrapper_sgt_mat2f::_bind___sub},
	{"__mul", &luna_wrapper_sgt_mat2f::_bind___mul},
	{"__unm", &luna_wrapper_sgt_mat2f::_bind___unm},
	{"dynCast", &luna_wrapper_sgt_mat2f::_bind_dynCast},
	{"fromVoid", &luna_wrapper_sgt_mat2f::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_mat2f::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::mat2f >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::mat2f >::enumValues[] = {
	{0,0}
};



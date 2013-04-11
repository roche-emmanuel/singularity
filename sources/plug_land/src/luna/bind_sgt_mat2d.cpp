#include <plug_common.h>

class luna_wrapper_sgt_mat2d {
public:
	typedef Luna< sgt::mat2d > luna_t;

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

		sgt::mat2d* self= (sgt::mat2d*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::mat2d >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67824753) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< sgt::mat2d >::check(L,1));
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

		sgt::mat2d* self=(Luna< sgt::mat2d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::mat2d");
		
		return luna_dynamicCast(L,converters,"sgt::mat2d",name);
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

		if( !Luna<void>::has_uniqueid(L,1,67824753) ) return false;
		if( (!(Luna< sgt::mat2d >::check(L,1))) ) return false;
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
		if( !Luna<void>::has_uniqueid(L,3,76239269) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_transpose(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_inverse_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67824753) ) return false;
		if( (!(Luna< sgt::mat2d >::check(L,2))) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,67824753) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67824753) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67824753) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67824753) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67824753) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67824753) ) return false;
		if( (!(Luna< sgt::mat2d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239269) ) return false;
		if( (!(Luna< sgt::vec2d >::check(L,2))) ) return false;
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
	// sgt::mat2d::mat2d()
	static sgt::mat2d* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat2d::mat2d() function, expected prototype:\nsgt::mat2d::mat2d()\nClass arguments details:\n");
		}


		return new sgt::mat2d();
	}

	// sgt::mat2d::mat2d(double m00, double m01, double m10, double m11)
	static sgt::mat2d* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat2d::mat2d(double m00, double m01, double m10, double m11) function, expected prototype:\nsgt::mat2d::mat2d(double m00, double m01, double m10, double m11)\nClass arguments details:\n");
		}

		double m00=(double)lua_tonumber(L,1);
		double m01=(double)lua_tonumber(L,2);
		double m10=(double)lua_tonumber(L,3);
		double m11=(double)lua_tonumber(L,4);

		return new sgt::mat2d(m00, m01, m10, m11);
	}

	// sgt::mat2d::mat2d(const sgt::mat2d & mat)
	static sgt::mat2d* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat2d::mat2d(const sgt::mat2d & mat) function, expected prototype:\nsgt::mat2d::mat2d(const sgt::mat2d & mat)\nClass arguments details:\narg 1 ID = 67824753\n");
		}

		const sgt::mat2d* mat_ptr=(Luna< sgt::mat2d >::check(L,1));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in sgt::mat2d::mat2d function");
		}
		const sgt::mat2d & mat=*mat_ptr;

		return new sgt::mat2d(mat);
	}

	// Overload binder for sgt::mat2d::mat2d
	static sgt::mat2d* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function mat2d, cannot match any of the overloads for function mat2d:\n  mat2d()\n  mat2d(double, double, double, double)\n  mat2d(const sgt::mat2d &)\n");
		return NULL;
	}


	// Function binds:
	// const double * sgt::mat2d::coefficients() const
	static int _bind_coefficients(lua_State *L) {
		if (!_lg_typecheck_coefficients(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const double * sgt::mat2d::coefficients() const function, expected prototype:\nconst double * sgt::mat2d::coefficients() const\nClass arguments details:\n");
		}


		sgt::mat2d* self=(Luna< sgt::mat2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const double * sgt::mat2d::coefficients() const. Got : '%s'",typeid(Luna< sgt::mat2d >::check(L,1)).name());
		}
		const double * lret = self->coefficients();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// sgt::vec2d sgt::mat2d::getColumn(int iCol) const
	static int _bind_getColumn(lua_State *L) {
		if (!_lg_typecheck_getColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2d sgt::mat2d::getColumn(int iCol) const function, expected prototype:\nsgt::vec2d sgt::mat2d::getColumn(int iCol) const\nClass arguments details:\n");
		}

		int iCol=(int)lua_tointeger(L,2);

		sgt::mat2d* self=(Luna< sgt::mat2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2d sgt::mat2d::getColumn(int) const. Got : '%s'",typeid(Luna< sgt::mat2d >::check(L,1)).name());
		}
		sgt::vec2d stack_lret = self->getColumn(iCol);
		sgt::vec2d* lret = new sgt::vec2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2d >::push(L,lret,true);

		return 1;
	}

	// void sgt::mat2d::setColumn(int iCol, const sgt::vec2d & v)
	static int _bind_setColumn(lua_State *L) {
		if (!_lg_typecheck_setColumn(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::mat2d::setColumn(int iCol, const sgt::vec2d & v) function, expected prototype:\nvoid sgt::mat2d::setColumn(int iCol, const sgt::vec2d & v)\nClass arguments details:\narg 2 ID = 76239269\n");
		}

		int iCol=(int)lua_tointeger(L,2);
		const sgt::vec2d* v_ptr=(Luna< sgt::vec2d >::check(L,3));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::mat2d::setColumn function");
		}
		const sgt::vec2d & v=*v_ptr;

		sgt::mat2d* self=(Luna< sgt::mat2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::mat2d::setColumn(int, const sgt::vec2d &). Got : '%s'",typeid(Luna< sgt::mat2d >::check(L,1)).name());
		}
		self->setColumn(iCol, v);

		return 0;
	}

	// sgt::mat2d sgt::mat2d::transpose() const
	static int _bind_transpose(lua_State *L) {
		if (!_lg_typecheck_transpose(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat2d sgt::mat2d::transpose() const function, expected prototype:\nsgt::mat2d sgt::mat2d::transpose() const\nClass arguments details:\n");
		}


		sgt::mat2d* self=(Luna< sgt::mat2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat2d sgt::mat2d::transpose() const. Got : '%s'",typeid(Luna< sgt::mat2d >::check(L,1)).name());
		}
		sgt::mat2d stack_lret = self->transpose();
		sgt::mat2d* lret = new sgt::mat2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat2d >::push(L,lret,true);

		return 1;
	}

	// bool sgt::mat2d::inverse(sgt::mat2d & mInv, double tolerance = 1e-06) const
	static int _bind_inverse_overload_1(lua_State *L) {
		if (!_lg_typecheck_inverse_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::mat2d::inverse(sgt::mat2d & mInv, double tolerance = 1e-06) const function, expected prototype:\nbool sgt::mat2d::inverse(sgt::mat2d & mInv, double tolerance = 1e-06) const\nClass arguments details:\narg 1 ID = 67824753\n");
		}

		int luatop = lua_gettop(L);

		sgt::mat2d* mInv_ptr=(Luna< sgt::mat2d >::check(L,2));
		if( !mInv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mInv in sgt::mat2d::inverse function");
		}
		sgt::mat2d & mInv=*mInv_ptr;
		double tolerance=luatop>2 ? (double)lua_tonumber(L,3) : (double)1e-06;

		sgt::mat2d* self=(Luna< sgt::mat2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::mat2d::inverse(sgt::mat2d &, double) const. Got : '%s'",typeid(Luna< sgt::mat2d >::check(L,1)).name());
		}
		bool lret = self->inverse(mInv, tolerance);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// sgt::mat2d sgt::mat2d::inverse(double tolerance = 1e-06) const
	static int _bind_inverse_overload_2(lua_State *L) {
		if (!_lg_typecheck_inverse_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat2d sgt::mat2d::inverse(double tolerance = 1e-06) const function, expected prototype:\nsgt::mat2d sgt::mat2d::inverse(double tolerance = 1e-06) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double tolerance=luatop>1 ? (double)lua_tonumber(L,2) : (double)1e-06;

		sgt::mat2d* self=(Luna< sgt::mat2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat2d sgt::mat2d::inverse(double) const. Got : '%s'",typeid(Luna< sgt::mat2d >::check(L,1)).name());
		}
		sgt::mat2d stack_lret = self->inverse(tolerance);
		sgt::mat2d* lret = new sgt::mat2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat2d >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::mat2d::inverse
	static int _bind_inverse(lua_State *L) {
		if (_lg_typecheck_inverse_overload_1(L)) return _bind_inverse_overload_1(L);
		if (_lg_typecheck_inverse_overload_2(L)) return _bind_inverse_overload_2(L);

		luaL_error(L, "error in function inverse, cannot match any of the overloads for function inverse:\n  inverse(sgt::mat2d &, double)\n  inverse(double)\n");
		return 0;
	}

	// double sgt::mat2d::determinant() const
	static int _bind_determinant(lua_State *L) {
		if (!_lg_typecheck_determinant(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double sgt::mat2d::determinant() const function, expected prototype:\ndouble sgt::mat2d::determinant() const\nClass arguments details:\n");
		}


		sgt::mat2d* self=(Luna< sgt::mat2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double sgt::mat2d::determinant() const. Got : '%s'",typeid(Luna< sgt::mat2d >::check(L,1)).name());
		}
		double lret = self->determinant();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double sgt::mat2d::trace() const
	static int _bind_trace(lua_State *L) {
		if (!_lg_typecheck_trace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double sgt::mat2d::trace() const function, expected prototype:\ndouble sgt::mat2d::trace() const\nClass arguments details:\n");
		}


		sgt::mat2d* self=(Luna< sgt::mat2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double sgt::mat2d::trace() const. Got : '%s'",typeid(Luna< sgt::mat2d >::check(L,1)).name());
		}
		double lret = self->trace();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:
	// double * sgt::mat2d::operator[](int iRow)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double * sgt::mat2d::operator[](int iRow) function, expected prototype:\ndouble * sgt::mat2d::operator[](int iRow)\nClass arguments details:\n");
		}

		int iRow=(int)lua_tointeger(L,2);

		sgt::mat2d* self=(Luna< sgt::mat2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double * sgt::mat2d::operator[](int). Got : '%s'",typeid(Luna< sgt::mat2d >::check(L,1)).name());
		}
		double * lret = self->operator[](iRow);
		lua_pushnumber(L,*lret);

		return 1;
	}

	// sgt::mat2d & sgt::mat2d::operator=(const sgt::mat2d & mat)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat2d & sgt::mat2d::operator=(const sgt::mat2d & mat) function, expected prototype:\nsgt::mat2d & sgt::mat2d::operator=(const sgt::mat2d & mat)\nClass arguments details:\narg 1 ID = 67824753\n");
		}

		const sgt::mat2d* mat_ptr=(Luna< sgt::mat2d >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in sgt::mat2d::operator= function");
		}
		const sgt::mat2d & mat=*mat_ptr;

		sgt::mat2d* self=(Luna< sgt::mat2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat2d & sgt::mat2d::operator=(const sgt::mat2d &). Got : '%s'",typeid(Luna< sgt::mat2d >::check(L,1)).name());
		}
		const sgt::mat2d* lret = &self->operator=(mat);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat2d >::push(L,lret,false);

		return 1;
	}

	// bool sgt::mat2d::operator==(const sgt::mat2d & mat) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::mat2d::operator==(const sgt::mat2d & mat) const function, expected prototype:\nbool sgt::mat2d::operator==(const sgt::mat2d & mat) const\nClass arguments details:\narg 1 ID = 67824753\n");
		}

		const sgt::mat2d* mat_ptr=(Luna< sgt::mat2d >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in sgt::mat2d::operator== function");
		}
		const sgt::mat2d & mat=*mat_ptr;

		sgt::mat2d* self=(Luna< sgt::mat2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::mat2d::operator==(const sgt::mat2d &) const. Got : '%s'",typeid(Luna< sgt::mat2d >::check(L,1)).name());
		}
		bool lret = self->operator==(mat);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool sgt::mat2d::operator!=(const sgt::mat2d & mat) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::mat2d::operator!=(const sgt::mat2d & mat) const function, expected prototype:\nbool sgt::mat2d::operator!=(const sgt::mat2d & mat) const\nClass arguments details:\narg 1 ID = 67824753\n");
		}

		const sgt::mat2d* mat_ptr=(Luna< sgt::mat2d >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in sgt::mat2d::operator!= function");
		}
		const sgt::mat2d & mat=*mat_ptr;

		sgt::mat2d* self=(Luna< sgt::mat2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::mat2d::operator!=(const sgt::mat2d &) const. Got : '%s'",typeid(Luna< sgt::mat2d >::check(L,1)).name());
		}
		bool lret = self->operator!=(mat);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// sgt::mat2d sgt::mat2d::operator+(const sgt::mat2d & mat) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat2d sgt::mat2d::operator+(const sgt::mat2d & mat) const function, expected prototype:\nsgt::mat2d sgt::mat2d::operator+(const sgt::mat2d & mat) const\nClass arguments details:\narg 1 ID = 67824753\n");
		}

		const sgt::mat2d* mat_ptr=(Luna< sgt::mat2d >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in sgt::mat2d::operator+ function");
		}
		const sgt::mat2d & mat=*mat_ptr;

		sgt::mat2d* self=(Luna< sgt::mat2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat2d sgt::mat2d::operator+(const sgt::mat2d &) const. Got : '%s'",typeid(Luna< sgt::mat2d >::check(L,1)).name());
		}
		sgt::mat2d stack_lret = self->operator+(mat);
		sgt::mat2d* lret = new sgt::mat2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat2d >::push(L,lret,true);

		return 1;
	}

	// sgt::mat2d sgt::mat2d::operator-(const sgt::mat2d & mat) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat2d sgt::mat2d::operator-(const sgt::mat2d & mat) const function, expected prototype:\nsgt::mat2d sgt::mat2d::operator-(const sgt::mat2d & mat) const\nClass arguments details:\narg 1 ID = 67824753\n");
		}

		const sgt::mat2d* mat_ptr=(Luna< sgt::mat2d >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in sgt::mat2d::operator- function");
		}
		const sgt::mat2d & mat=*mat_ptr;

		sgt::mat2d* self=(Luna< sgt::mat2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat2d sgt::mat2d::operator-(const sgt::mat2d &) const. Got : '%s'",typeid(Luna< sgt::mat2d >::check(L,1)).name());
		}
		sgt::mat2d stack_lret = self->operator-(mat);
		sgt::mat2d* lret = new sgt::mat2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat2d >::push(L,lret,true);

		return 1;
	}

	// sgt::mat2d sgt::mat2d::operator*(const sgt::mat2d & mat) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat2d sgt::mat2d::operator*(const sgt::mat2d & mat) const function, expected prototype:\nsgt::mat2d sgt::mat2d::operator*(const sgt::mat2d & mat) const\nClass arguments details:\narg 1 ID = 67824753\n");
		}

		const sgt::mat2d* mat_ptr=(Luna< sgt::mat2d >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in sgt::mat2d::operator* function");
		}
		const sgt::mat2d & mat=*mat_ptr;

		sgt::mat2d* self=(Luna< sgt::mat2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat2d sgt::mat2d::operator*(const sgt::mat2d &) const. Got : '%s'",typeid(Luna< sgt::mat2d >::check(L,1)).name());
		}
		sgt::mat2d stack_lret = self->operator*(mat);
		sgt::mat2d* lret = new sgt::mat2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat2d >::push(L,lret,true);

		return 1;
	}

	// sgt::vec2d sgt::mat2d::operator*(const sgt::vec2d & v) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2d sgt::mat2d::operator*(const sgt::vec2d & v) const function, expected prototype:\nsgt::vec2d sgt::mat2d::operator*(const sgt::vec2d & v) const\nClass arguments details:\narg 1 ID = 76239269\n");
		}

		const sgt::vec2d* v_ptr=(Luna< sgt::vec2d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::mat2d::operator* function");
		}
		const sgt::vec2d & v=*v_ptr;

		sgt::mat2d* self=(Luna< sgt::mat2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2d sgt::mat2d::operator*(const sgt::vec2d &) const. Got : '%s'",typeid(Luna< sgt::mat2d >::check(L,1)).name());
		}
		sgt::vec2d stack_lret = self->operator*(v);
		sgt::vec2d* lret = new sgt::vec2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2d >::push(L,lret,true);

		return 1;
	}

	// sgt::mat2d sgt::mat2d::operator*(const double scalar) const
	static int _bind___mul_overload_3(lua_State *L) {
		if (!_lg_typecheck___mul_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat2d sgt::mat2d::operator*(const double scalar) const function, expected prototype:\nsgt::mat2d sgt::mat2d::operator*(const double scalar) const\nClass arguments details:\n");
		}

		const double scalar=(const double)lua_tonumber(L,2);

		sgt::mat2d* self=(Luna< sgt::mat2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat2d sgt::mat2d::operator*(const double) const. Got : '%s'",typeid(Luna< sgt::mat2d >::check(L,1)).name());
		}
		sgt::mat2d stack_lret = self->operator*(scalar);
		sgt::mat2d* lret = new sgt::mat2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat2d >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::mat2d::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);
		if (_lg_typecheck___mul_overload_3(L)) return _bind___mul_overload_3(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const sgt::mat2d &)\n  operator*(const sgt::vec2d &)\n  operator*(const double)\n");
		return 0;
	}

	// sgt::mat2d sgt::mat2d::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::mat2d sgt::mat2d::operator-() const function, expected prototype:\nsgt::mat2d sgt::mat2d::operator-() const\nClass arguments details:\n");
		}


		sgt::mat2d* self=(Luna< sgt::mat2d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::mat2d sgt::mat2d::operator-() const. Got : '%s'",typeid(Luna< sgt::mat2d >::check(L,1)).name());
		}
		sgt::mat2d stack_lret = self->operator-();
		sgt::mat2d* lret = new sgt::mat2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::mat2d >::push(L,lret,true);

		return 1;
	}


};

sgt::mat2d* LunaTraits< sgt::mat2d >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_mat2d::_bind_ctor(L);
}

void LunaTraits< sgt::mat2d >::_bind_dtor(sgt::mat2d* obj) {
	delete obj;
}

const char LunaTraits< sgt::mat2d >::className[] = "mat2d";
const char LunaTraits< sgt::mat2d >::fullName[] = "sgt::mat2d";
const char LunaTraits< sgt::mat2d >::moduleName[] = "sgt";
const char* LunaTraits< sgt::mat2d >::parents[] = {0};
const int LunaTraits< sgt::mat2d >::hash = 67824753;
const int LunaTraits< sgt::mat2d >::uniqueIDs[] = {67824753,0};

luna_RegType LunaTraits< sgt::mat2d >::methods[] = {
	{"coefficients", &luna_wrapper_sgt_mat2d::_bind_coefficients},
	{"getColumn", &luna_wrapper_sgt_mat2d::_bind_getColumn},
	{"setColumn", &luna_wrapper_sgt_mat2d::_bind_setColumn},
	{"transpose", &luna_wrapper_sgt_mat2d::_bind_transpose},
	{"inverse", &luna_wrapper_sgt_mat2d::_bind_inverse},
	{"determinant", &luna_wrapper_sgt_mat2d::_bind_determinant},
	{"trace", &luna_wrapper_sgt_mat2d::_bind_trace},
	{"op_index", &luna_wrapper_sgt_mat2d::_bind_op_index},
	{"op_assign", &luna_wrapper_sgt_mat2d::_bind_op_assign},
	{"__eq", &luna_wrapper_sgt_mat2d::_bind___eq},
	{"op_neq", &luna_wrapper_sgt_mat2d::_bind_op_neq},
	{"__add", &luna_wrapper_sgt_mat2d::_bind___add},
	{"__sub", &luna_wrapper_sgt_mat2d::_bind___sub},
	{"__mul", &luna_wrapper_sgt_mat2d::_bind___mul},
	{"__unm", &luna_wrapper_sgt_mat2d::_bind___unm},
	{"dynCast", &luna_wrapper_sgt_mat2d::_bind_dynCast},
	{"fromVoid", &luna_wrapper_sgt_mat2d::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_mat2d::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::mat2d >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::mat2d >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

class luna_wrapper_SPK_Vector3D {
public:
	typedef Luna< SPK::Vector3D > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70092749) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SPK::Vector3D*)");
		}

		SPK::Vector3D* rhs =(Luna< SPK::Vector3D >::check(L,2));
		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
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

		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SPK::Vector3D");
		
		return luna_dynamicCast(L,converters,"SPK::Vector3D",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>3 ) return false;

		if( luatop>0 && lua_isnumber(L,1)==0 ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_set(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSqrNorm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNorm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_normalize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_revert(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_abs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_crossProduct(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 9 valid operators)
	inline static bool _lg_typecheck_op_add_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		if( (!(Luna< SPK::Vector3D >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_add_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		if( (!(Luna< SPK::Vector3D >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_mult(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_div(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck___unm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

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


	// Constructor binds:
	// SPK::Vector3D::Vector3D(float x = 0.0f, float y = 0.0f, float z = 0.0f)
	static SPK::Vector3D* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D::Vector3D(float x = 0.0f, float y = 0.0f, float z = 0.0f) function, expected prototype:\nSPK::Vector3D::Vector3D(float x = 0.0f, float y = 0.0f, float z = 0.0f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float x=luatop>0 ? (float)lua_tonumber(L,1) : 0.0f;
		float y=luatop>1 ? (float)lua_tonumber(L,2) : 0.0f;
		float z=luatop>2 ? (float)lua_tonumber(L,3) : 0.0f;

		return new SPK::Vector3D(x, y, z);
	}


	// Function binds:
	// void SPK::Vector3D::set(float x, float y, float z = 0.0f)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Vector3D::set(float x, float y, float z = 0.0f) function, expected prototype:\nvoid SPK::Vector3D::set(float x, float y, float z = 0.0f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=luatop>3 ? (float)lua_tonumber(L,4) : 0.0f;

		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Vector3D::set(float, float, float)");
		}
		self->set(x, y, z);

		return 0;
	}

	// float SPK::Vector3D::getSqrNorm() const
	static int _bind_getSqrNorm(lua_State *L) {
		if (!_lg_typecheck_getSqrNorm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Vector3D::getSqrNorm() const function, expected prototype:\nfloat SPK::Vector3D::getSqrNorm() const\nClass arguments details:\n");
		}


		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Vector3D::getSqrNorm() const");
		}
		float lret = self->getSqrNorm();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::Vector3D::getNorm() const
	static int _bind_getNorm(lua_State *L) {
		if (!_lg_typecheck_getNorm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Vector3D::getNorm() const function, expected prototype:\nfloat SPK::Vector3D::getNorm() const\nClass arguments details:\n");
		}


		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Vector3D::getNorm() const");
		}
		float lret = self->getNorm();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool SPK::Vector3D::normalize()
	static int _bind_normalize(lua_State *L) {
		if (!_lg_typecheck_normalize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Vector3D::normalize() function, expected prototype:\nbool SPK::Vector3D::normalize()\nClass arguments details:\n");
		}


		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Vector3D::normalize()");
		}
		bool lret = self->normalize();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::Vector3D::revert()
	static int _bind_revert(lua_State *L) {
		if (!_lg_typecheck_revert(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Vector3D::revert() function, expected prototype:\nvoid SPK::Vector3D::revert()\nClass arguments details:\n");
		}


		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Vector3D::revert()");
		}
		self->revert();

		return 0;
	}

	// void SPK::Vector3D::abs()
	static int _bind_abs(lua_State *L) {
		if (!_lg_typecheck_abs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Vector3D::abs() function, expected prototype:\nvoid SPK::Vector3D::abs()\nClass arguments details:\n");
		}


		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Vector3D::abs()");
		}
		self->abs();

		return 0;
	}

	// void SPK::Vector3D::crossProduct(const SPK::Vector3D & v)
	static int _bind_crossProduct(lua_State *L) {
		if (!_lg_typecheck_crossProduct(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Vector3D::crossProduct(const SPK::Vector3D & v) function, expected prototype:\nvoid SPK::Vector3D::crossProduct(const SPK::Vector3D & v)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* v_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in SPK::Vector3D::crossProduct function");
		}
		const SPK::Vector3D & v=*v_ptr;

		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Vector3D::crossProduct(const SPK::Vector3D &)");
		}
		self->crossProduct(v);

		return 0;
	}


	// Operator binds:
	// SPK::Vector3D & SPK::Vector3D::operator+=(const SPK::Vector3D & v)
	static int _bind_op_add_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_add_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D & SPK::Vector3D::operator+=(const SPK::Vector3D & v) function, expected prototype:\nSPK::Vector3D & SPK::Vector3D::operator+=(const SPK::Vector3D & v)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* v_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in SPK::Vector3D::operator+= function");
		}
		const SPK::Vector3D & v=*v_ptr;

		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D & SPK::Vector3D::operator+=(const SPK::Vector3D &)");
		}
		const SPK::Vector3D* lret = &self->operator+=(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// SPK::Vector3D & SPK::Vector3D::operator+=(float f)
	static int _bind_op_add_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_add_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D & SPK::Vector3D::operator+=(float f) function, expected prototype:\nSPK::Vector3D & SPK::Vector3D::operator+=(float f)\nClass arguments details:\n");
		}

		float f=(float)lua_tonumber(L,2);

		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D & SPK::Vector3D::operator+=(float)");
		}
		const SPK::Vector3D* lret = &self->operator+=(f);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// Overload binder for SPK::Vector3D::operator+=
	static int _bind_op_add(lua_State *L) {
		if (_lg_typecheck_op_add_overload_1(L)) return _bind_op_add_overload_1(L);
		if (_lg_typecheck_op_add_overload_2(L)) return _bind_op_add_overload_2(L);

		luaL_error(L, "error in function operator+=, cannot match any of the overloads for function operator+=:\n  operator+=(const SPK::Vector3D &)\n  operator+=(float)\n");
		return 0;
	}

	// SPK::Vector3D & SPK::Vector3D::operator-=(const SPK::Vector3D & v)
	static int _bind_op_sub_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_sub_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D & SPK::Vector3D::operator-=(const SPK::Vector3D & v) function, expected prototype:\nSPK::Vector3D & SPK::Vector3D::operator-=(const SPK::Vector3D & v)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* v_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in SPK::Vector3D::operator-= function");
		}
		const SPK::Vector3D & v=*v_ptr;

		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D & SPK::Vector3D::operator-=(const SPK::Vector3D &)");
		}
		const SPK::Vector3D* lret = &self->operator-=(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// SPK::Vector3D & SPK::Vector3D::operator-=(float f)
	static int _bind_op_sub_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_sub_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D & SPK::Vector3D::operator-=(float f) function, expected prototype:\nSPK::Vector3D & SPK::Vector3D::operator-=(float f)\nClass arguments details:\n");
		}

		float f=(float)lua_tonumber(L,2);

		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D & SPK::Vector3D::operator-=(float)");
		}
		const SPK::Vector3D* lret = &self->operator-=(f);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// Overload binder for SPK::Vector3D::operator-=
	static int _bind_op_sub(lua_State *L) {
		if (_lg_typecheck_op_sub_overload_1(L)) return _bind_op_sub_overload_1(L);
		if (_lg_typecheck_op_sub_overload_2(L)) return _bind_op_sub_overload_2(L);

		luaL_error(L, "error in function operator-=, cannot match any of the overloads for function operator-=:\n  operator-=(const SPK::Vector3D &)\n  operator-=(float)\n");
		return 0;
	}

	// SPK::Vector3D & SPK::Vector3D::operator*=(float f)
	static int _bind_op_mult(lua_State *L) {
		if (!_lg_typecheck_op_mult(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D & SPK::Vector3D::operator*=(float f) function, expected prototype:\nSPK::Vector3D & SPK::Vector3D::operator*=(float f)\nClass arguments details:\n");
		}

		float f=(float)lua_tonumber(L,2);

		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D & SPK::Vector3D::operator*=(float)");
		}
		const SPK::Vector3D* lret = &self->operator*=(f);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// SPK::Vector3D & SPK::Vector3D::operator/=(float f)
	static int _bind_op_div(lua_State *L) {
		if (!_lg_typecheck_op_div(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D & SPK::Vector3D::operator/=(float f) function, expected prototype:\nSPK::Vector3D & SPK::Vector3D::operator/=(float f)\nClass arguments details:\n");
		}

		float f=(float)lua_tonumber(L,2);

		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D & SPK::Vector3D::operator/=(float)");
		}
		const SPK::Vector3D* lret = &self->operator/=(f);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// SPK::Vector3D SPK::Vector3D::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D SPK::Vector3D::operator-() const function, expected prototype:\nSPK::Vector3D SPK::Vector3D::operator-() const\nClass arguments details:\n");
		}


		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D SPK::Vector3D::operator-() const");
		}
		SPK::Vector3D stack_lret = self->operator-();
		SPK::Vector3D* lret = new SPK::Vector3D(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,true);

		return 1;
	}

	// float & SPK::Vector3D::operator[](size_t index)
	static int _bind_op_index_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float & SPK::Vector3D::operator[](size_t index) function, expected prototype:\nfloat & SPK::Vector3D::operator[](size_t index)\nClass arguments details:\n");
		}

		size_t index=(size_t)lua_tointeger(L,2);

		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float & SPK::Vector3D::operator[](size_t)");
		}
		float & lret = self->operator[](index);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const float & SPK::Vector3D::operator[](size_t index) const
	static int _bind_op_index_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const float & SPK::Vector3D::operator[](size_t index) const function, expected prototype:\nconst float & SPK::Vector3D::operator[](size_t index) const\nClass arguments details:\n");
		}

		size_t index=(size_t)lua_tointeger(L,2);

		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const float & SPK::Vector3D::operator[](size_t) const");
		}
		const float & lret = self->operator[](index);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for SPK::Vector3D::operator[]
	static int _bind_op_index(lua_State *L) {
		if (_lg_typecheck_op_index_overload_1(L)) return _bind_op_index_overload_1(L);
		if (_lg_typecheck_op_index_overload_2(L)) return _bind_op_index_overload_2(L);

		luaL_error(L, "error in function operator[], cannot match any of the overloads for function operator[]:\n  operator[](size_t)\n  operator[](size_t)\n");
		return 0;
	}


};

SPK::Vector3D* LunaTraits< SPK::Vector3D >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_Vector3D::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< SPK::Vector3D >::_bind_dtor(SPK::Vector3D* obj) {
	delete obj;
}

const char LunaTraits< SPK::Vector3D >::className[] = "Vector3D";
const char LunaTraits< SPK::Vector3D >::fullName[] = "SPK::Vector3D";
const char LunaTraits< SPK::Vector3D >::moduleName[] = "SPK";
const char* LunaTraits< SPK::Vector3D >::parents[] = {0};
const int LunaTraits< SPK::Vector3D >::hash = 70092749;
const int LunaTraits< SPK::Vector3D >::uniqueIDs[] = {70092749,0};

luna_RegType LunaTraits< SPK::Vector3D >::methods[] = {
	{"set", &luna_wrapper_SPK_Vector3D::_bind_set},
	{"getSqrNorm", &luna_wrapper_SPK_Vector3D::_bind_getSqrNorm},
	{"getNorm", &luna_wrapper_SPK_Vector3D::_bind_getNorm},
	{"normalize", &luna_wrapper_SPK_Vector3D::_bind_normalize},
	{"revert", &luna_wrapper_SPK_Vector3D::_bind_revert},
	{"abs", &luna_wrapper_SPK_Vector3D::_bind_abs},
	{"crossProduct", &luna_wrapper_SPK_Vector3D::_bind_crossProduct},
	{"op_add", &luna_wrapper_SPK_Vector3D::_bind_op_add},
	{"op_sub", &luna_wrapper_SPK_Vector3D::_bind_op_sub},
	{"op_mult", &luna_wrapper_SPK_Vector3D::_bind_op_mult},
	{"op_div", &luna_wrapper_SPK_Vector3D::_bind_op_div},
	{"__unm", &luna_wrapper_SPK_Vector3D::_bind___unm},
	{"op_index", &luna_wrapper_SPK_Vector3D::_bind_op_index},
	{"dynCast", &luna_wrapper_SPK_Vector3D::_bind_dynCast},
	{"__eq", &luna_wrapper_SPK_Vector3D::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::Vector3D >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::Vector3D >::enumValues[] = {
	{0,0}
};



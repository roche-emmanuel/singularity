#include <plug_common.h>

class luna_wrapper_osg_Matrix2 {
public:
	typedef Luna< osg::Matrix2 > luna_t;

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

		osg::Matrix2* self=(Luna< osg::Matrix2 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Matrix2");
		
		return luna_dynamicCast(L,converters,"osg::Matrix2",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18903788) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_set_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903788) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ptr_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ptr_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_makeIdentity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 4 valid operators)
	inline static bool _lg_typecheck_op_call_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_call_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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
	// osg::Matrix2::Matrix2()
	static osg::Matrix2* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrix2::Matrix2() function, expected prototype:\nosg::Matrix2::Matrix2()\nClass arguments details:\n");
		}


		return new osg::Matrix2();
	}

	// osg::Matrix2::Matrix2(const osg::Matrix2 & mat)
	static osg::Matrix2* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrix2::Matrix2(const osg::Matrix2 & mat) function, expected prototype:\nosg::Matrix2::Matrix2(const osg::Matrix2 & mat)\nClass arguments details:\narg 1 ID = 18903788\n");
		}

		const osg::Matrix2* mat_ptr=(Luna< osg::Matrix2 >::check(L,1));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in osg::Matrix2::Matrix2 function");
		}
		const osg::Matrix2 & mat=*mat_ptr;

		return new osg::Matrix2(mat);
	}

	// osg::Matrix2::Matrix2(float a00, float a01, float a10, float a11)
	static osg::Matrix2* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrix2::Matrix2(float a00, float a01, float a10, float a11) function, expected prototype:\nosg::Matrix2::Matrix2(float a00, float a01, float a10, float a11)\nClass arguments details:\n");
		}

		float a00=(float)lua_tonumber(L,1);
		float a01=(float)lua_tonumber(L,2);
		float a10=(float)lua_tonumber(L,3);
		float a11=(float)lua_tonumber(L,4);

		return new osg::Matrix2(a00, a01, a10, a11);
	}

	// Overload binder for osg::Matrix2::Matrix2
	static osg::Matrix2* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function Matrix2, cannot match any of the overloads for function Matrix2:\n  Matrix2()\n  Matrix2(const osg::Matrix2 &)\n  Matrix2(float, float, float, float)\n");
		return NULL;
	}


	// Function binds:
	// void osg::Matrix2::set(const osg::Matrix2 & rhs)
	static int _bind_set_overload_1(lua_State *L) {
		if (!_lg_typecheck_set_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Matrix2::set(const osg::Matrix2 & rhs) function, expected prototype:\nvoid osg::Matrix2::set(const osg::Matrix2 & rhs)\nClass arguments details:\narg 1 ID = 18903788\n");
		}

		const osg::Matrix2* rhs_ptr=(Luna< osg::Matrix2 >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Matrix2::set function");
		}
		const osg::Matrix2 & rhs=*rhs_ptr;

		osg::Matrix2* self=(Luna< osg::Matrix2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Matrix2::set(const osg::Matrix2 &)");
		}
		self->set(rhs);

		return 0;
	}

	// void osg::Matrix2::set(float a00, float a01, float a10, float a11)
	static int _bind_set_overload_2(lua_State *L) {
		if (!_lg_typecheck_set_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Matrix2::set(float a00, float a01, float a10, float a11) function, expected prototype:\nvoid osg::Matrix2::set(float a00, float a01, float a10, float a11)\nClass arguments details:\n");
		}

		float a00=(float)lua_tonumber(L,2);
		float a01=(float)lua_tonumber(L,3);
		float a10=(float)lua_tonumber(L,4);
		float a11=(float)lua_tonumber(L,5);

		osg::Matrix2* self=(Luna< osg::Matrix2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Matrix2::set(float, float, float, float)");
		}
		self->set(a00, a01, a10, a11);

		return 0;
	}

	// Overload binder for osg::Matrix2::set
	static int _bind_set(lua_State *L) {
		if (_lg_typecheck_set_overload_1(L)) return _bind_set_overload_1(L);
		if (_lg_typecheck_set_overload_2(L)) return _bind_set_overload_2(L);

		luaL_error(L, "error in function set, cannot match any of the overloads for function set:\n  set(const osg::Matrix2 &)\n  set(float, float, float, float)\n");
		return 0;
	}

	// float * osg::Matrix2::ptr()
	static int _bind_ptr_overload_1(lua_State *L) {
		if (!_lg_typecheck_ptr_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float * osg::Matrix2::ptr() function, expected prototype:\nfloat * osg::Matrix2::ptr()\nClass arguments details:\n");
		}


		osg::Matrix2* self=(Luna< osg::Matrix2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float * osg::Matrix2::ptr()");
		}
		float * lret = self->ptr();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// const float * osg::Matrix2::ptr() const
	static int _bind_ptr_overload_2(lua_State *L) {
		if (!_lg_typecheck_ptr_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const float * osg::Matrix2::ptr() const function, expected prototype:\nconst float * osg::Matrix2::ptr() const\nClass arguments details:\n");
		}


		osg::Matrix2* self=(Luna< osg::Matrix2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const float * osg::Matrix2::ptr() const");
		}
		const float * lret = self->ptr();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// Overload binder for osg::Matrix2::ptr
	static int _bind_ptr(lua_State *L) {
		if (_lg_typecheck_ptr_overload_1(L)) return _bind_ptr_overload_1(L);
		if (_lg_typecheck_ptr_overload_2(L)) return _bind_ptr_overload_2(L);

		luaL_error(L, "error in function ptr, cannot match any of the overloads for function ptr:\n  ptr()\n  ptr()\n");
		return 0;
	}

	// void osg::Matrix2::makeIdentity()
	static int _bind_makeIdentity(lua_State *L) {
		if (!_lg_typecheck_makeIdentity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Matrix2::makeIdentity() function, expected prototype:\nvoid osg::Matrix2::makeIdentity()\nClass arguments details:\n");
		}


		osg::Matrix2* self=(Luna< osg::Matrix2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Matrix2::makeIdentity()");
		}
		self->makeIdentity();

		return 0;
	}


	// Operator binds:
	// float & osg::Matrix2::operator()(int row, int col)
	static int _bind_op_call_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float & osg::Matrix2::operator()(int row, int col) function, expected prototype:\nfloat & osg::Matrix2::operator()(int row, int col)\nClass arguments details:\n");
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		osg::Matrix2* self=(Luna< osg::Matrix2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float & osg::Matrix2::operator()(int, int)");
		}
		float & lret = self->operator()(row, col);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::Matrix2::operator()(int row, int col) const
	static int _bind_op_call_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::Matrix2::operator()(int row, int col) const function, expected prototype:\nfloat osg::Matrix2::operator()(int row, int col) const\nClass arguments details:\n");
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		osg::Matrix2* self=(Luna< osg::Matrix2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::Matrix2::operator()(int, int) const");
		}
		float lret = self->operator()(row, col);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Matrix2::operator()
	static int _bind_op_call(lua_State *L) {
		if (_lg_typecheck_op_call_overload_1(L)) return _bind_op_call_overload_1(L);
		if (_lg_typecheck_op_call_overload_2(L)) return _bind_op_call_overload_2(L);

		luaL_error(L, "error in function operator(), cannot match any of the overloads for function operator():\n  operator()(int, int)\n  operator()(int, int)\n");
		return 0;
	}

	// float & osg::Matrix2::operator[](int i)
	static int _bind_op_index_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float & osg::Matrix2::operator[](int i) function, expected prototype:\nfloat & osg::Matrix2::operator[](int i)\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);

		osg::Matrix2* self=(Luna< osg::Matrix2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float & osg::Matrix2::operator[](int)");
		}
		float & lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::Matrix2::operator[](int i) const
	static int _bind_op_index_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::Matrix2::operator[](int i) const function, expected prototype:\nfloat osg::Matrix2::operator[](int i) const\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);

		osg::Matrix2* self=(Luna< osg::Matrix2 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::Matrix2::operator[](int) const");
		}
		float lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Matrix2::operator[]
	static int _bind_op_index(lua_State *L) {
		if (_lg_typecheck_op_index_overload_1(L)) return _bind_op_index_overload_1(L);
		if (_lg_typecheck_op_index_overload_2(L)) return _bind_op_index_overload_2(L);

		luaL_error(L, "error in function operator[], cannot match any of the overloads for function operator[]:\n  operator[](int)\n  operator[](int)\n");
		return 0;
	}


};

osg::Matrix2* LunaTraits< osg::Matrix2 >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Matrix2::_bind_ctor(L);
}

void LunaTraits< osg::Matrix2 >::_bind_dtor(osg::Matrix2* obj) {
	delete obj;
}

const char LunaTraits< osg::Matrix2 >::className[] = "Matrix2";
const char LunaTraits< osg::Matrix2 >::fullName[] = "osg::Matrix2";
const char LunaTraits< osg::Matrix2 >::moduleName[] = "osg";
const char* LunaTraits< osg::Matrix2 >::parents[] = {0};
const int LunaTraits< osg::Matrix2 >::hash = 18903788;
const int LunaTraits< osg::Matrix2 >::uniqueIDs[] = {18903788,0};

luna_RegType LunaTraits< osg::Matrix2 >::methods[] = {
	{"set", &luna_wrapper_osg_Matrix2::_bind_set},
	{"ptr", &luna_wrapper_osg_Matrix2::_bind_ptr},
	{"makeIdentity", &luna_wrapper_osg_Matrix2::_bind_makeIdentity},
	{"op_call", &luna_wrapper_osg_Matrix2::_bind_op_call},
	{"op_index", &luna_wrapper_osg_Matrix2::_bind_op_index},
	{"dynCast", &luna_wrapper_osg_Matrix2::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Matrix2 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Matrix2 >::enumValues[] = {
	{0,0}
};



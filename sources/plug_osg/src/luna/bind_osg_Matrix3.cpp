#include <plug_common.h>

class luna_wrapper_osg_Matrix3 {
public:
	typedef Luna< osg::Matrix3 > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18903789) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Matrix3*)");
		}

		osg::Matrix3* rhs =(Luna< osg::Matrix3 >::check(L,2));
		osg::Matrix3* self=(Luna< osg::Matrix3 >::check(L,1));
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

		osg::Matrix3* self=(Luna< osg::Matrix3 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Matrix3");
		
		return luna_dynamicCast(L,converters,"osg::Matrix3",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18903789) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
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


	// Function checkers:
	inline static bool _lg_typecheck_set_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903789) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_2(lua_State *L) {
		if( lua_gettop(L)!=10 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		if( lua_isnumber(L,8)==0 ) return false;
		if( lua_isnumber(L,9)==0 ) return false;
		if( lua_isnumber(L,10)==0 ) return false;
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
	// osg::Matrix3::Matrix3()
	static osg::Matrix3* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrix3::Matrix3() function, expected prototype:\nosg::Matrix3::Matrix3()\nClass arguments details:\n");
		}


		return new osg::Matrix3();
	}

	// osg::Matrix3::Matrix3(const osg::Matrix3 & mat)
	static osg::Matrix3* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrix3::Matrix3(const osg::Matrix3 & mat) function, expected prototype:\nosg::Matrix3::Matrix3(const osg::Matrix3 & mat)\nClass arguments details:\narg 1 ID = 18903789\n");
		}

		const osg::Matrix3* mat_ptr=(Luna< osg::Matrix3 >::check(L,1));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in osg::Matrix3::Matrix3 function");
		}
		const osg::Matrix3 & mat=*mat_ptr;

		return new osg::Matrix3(mat);
	}

	// osg::Matrix3::Matrix3(float a00, float a01, float a02, float a10, float a11, float a12, float a20, float a21, float a22)
	static osg::Matrix3* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrix3::Matrix3(float a00, float a01, float a02, float a10, float a11, float a12, float a20, float a21, float a22) function, expected prototype:\nosg::Matrix3::Matrix3(float a00, float a01, float a02, float a10, float a11, float a12, float a20, float a21, float a22)\nClass arguments details:\n");
		}

		float a00=(float)lua_tonumber(L,1);
		float a01=(float)lua_tonumber(L,2);
		float a02=(float)lua_tonumber(L,3);
		float a10=(float)lua_tonumber(L,4);
		float a11=(float)lua_tonumber(L,5);
		float a12=(float)lua_tonumber(L,6);
		float a20=(float)lua_tonumber(L,7);
		float a21=(float)lua_tonumber(L,8);
		float a22=(float)lua_tonumber(L,9);

		return new osg::Matrix3(a00, a01, a02, a10, a11, a12, a20, a21, a22);
	}

	// Overload binder for osg::Matrix3::Matrix3
	static osg::Matrix3* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function Matrix3, cannot match any of the overloads for function Matrix3:\n  Matrix3()\n  Matrix3(const osg::Matrix3 &)\n  Matrix3(float, float, float, float, float, float, float, float, float)\n");
		return NULL;
	}


	// Function binds:
	// void osg::Matrix3::set(const osg::Matrix3 & rhs)
	static int _bind_set_overload_1(lua_State *L) {
		if (!_lg_typecheck_set_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Matrix3::set(const osg::Matrix3 & rhs) function, expected prototype:\nvoid osg::Matrix3::set(const osg::Matrix3 & rhs)\nClass arguments details:\narg 1 ID = 18903789\n");
		}

		const osg::Matrix3* rhs_ptr=(Luna< osg::Matrix3 >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Matrix3::set function");
		}
		const osg::Matrix3 & rhs=*rhs_ptr;

		osg::Matrix3* self=(Luna< osg::Matrix3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Matrix3::set(const osg::Matrix3 &)");
		}
		self->set(rhs);

		return 0;
	}

	// void osg::Matrix3::set(float a00, float a01, float a02, float a10, float a11, float a12, float a20, float a21, float a22)
	static int _bind_set_overload_2(lua_State *L) {
		if (!_lg_typecheck_set_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Matrix3::set(float a00, float a01, float a02, float a10, float a11, float a12, float a20, float a21, float a22) function, expected prototype:\nvoid osg::Matrix3::set(float a00, float a01, float a02, float a10, float a11, float a12, float a20, float a21, float a22)\nClass arguments details:\n");
		}

		float a00=(float)lua_tonumber(L,2);
		float a01=(float)lua_tonumber(L,3);
		float a02=(float)lua_tonumber(L,4);
		float a10=(float)lua_tonumber(L,5);
		float a11=(float)lua_tonumber(L,6);
		float a12=(float)lua_tonumber(L,7);
		float a20=(float)lua_tonumber(L,8);
		float a21=(float)lua_tonumber(L,9);
		float a22=(float)lua_tonumber(L,10);

		osg::Matrix3* self=(Luna< osg::Matrix3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Matrix3::set(float, float, float, float, float, float, float, float, float)");
		}
		self->set(a00, a01, a02, a10, a11, a12, a20, a21, a22);

		return 0;
	}

	// Overload binder for osg::Matrix3::set
	static int _bind_set(lua_State *L) {
		if (_lg_typecheck_set_overload_1(L)) return _bind_set_overload_1(L);
		if (_lg_typecheck_set_overload_2(L)) return _bind_set_overload_2(L);

		luaL_error(L, "error in function set, cannot match any of the overloads for function set:\n  set(const osg::Matrix3 &)\n  set(float, float, float, float, float, float, float, float, float)\n");
		return 0;
	}

	// float * osg::Matrix3::ptr()
	static int _bind_ptr_overload_1(lua_State *L) {
		if (!_lg_typecheck_ptr_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float * osg::Matrix3::ptr() function, expected prototype:\nfloat * osg::Matrix3::ptr()\nClass arguments details:\n");
		}


		osg::Matrix3* self=(Luna< osg::Matrix3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float * osg::Matrix3::ptr()");
		}
		float * lret = self->ptr();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// const float * osg::Matrix3::ptr() const
	static int _bind_ptr_overload_2(lua_State *L) {
		if (!_lg_typecheck_ptr_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const float * osg::Matrix3::ptr() const function, expected prototype:\nconst float * osg::Matrix3::ptr() const\nClass arguments details:\n");
		}


		osg::Matrix3* self=(Luna< osg::Matrix3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const float * osg::Matrix3::ptr() const");
		}
		const float * lret = self->ptr();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// Overload binder for osg::Matrix3::ptr
	static int _bind_ptr(lua_State *L) {
		if (_lg_typecheck_ptr_overload_1(L)) return _bind_ptr_overload_1(L);
		if (_lg_typecheck_ptr_overload_2(L)) return _bind_ptr_overload_2(L);

		luaL_error(L, "error in function ptr, cannot match any of the overloads for function ptr:\n  ptr()\n  ptr()\n");
		return 0;
	}

	// void osg::Matrix3::makeIdentity()
	static int _bind_makeIdentity(lua_State *L) {
		if (!_lg_typecheck_makeIdentity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Matrix3::makeIdentity() function, expected prototype:\nvoid osg::Matrix3::makeIdentity()\nClass arguments details:\n");
		}


		osg::Matrix3* self=(Luna< osg::Matrix3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Matrix3::makeIdentity()");
		}
		self->makeIdentity();

		return 0;
	}


	// Operator binds:
	// float & osg::Matrix3::operator()(int row, int col)
	static int _bind_op_call_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float & osg::Matrix3::operator()(int row, int col) function, expected prototype:\nfloat & osg::Matrix3::operator()(int row, int col)\nClass arguments details:\n");
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		osg::Matrix3* self=(Luna< osg::Matrix3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float & osg::Matrix3::operator()(int, int)");
		}
		float & lret = self->operator()(row, col);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::Matrix3::operator()(int row, int col) const
	static int _bind_op_call_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::Matrix3::operator()(int row, int col) const function, expected prototype:\nfloat osg::Matrix3::operator()(int row, int col) const\nClass arguments details:\n");
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		osg::Matrix3* self=(Luna< osg::Matrix3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::Matrix3::operator()(int, int) const");
		}
		float lret = self->operator()(row, col);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Matrix3::operator()
	static int _bind_op_call(lua_State *L) {
		if (_lg_typecheck_op_call_overload_1(L)) return _bind_op_call_overload_1(L);
		if (_lg_typecheck_op_call_overload_2(L)) return _bind_op_call_overload_2(L);

		luaL_error(L, "error in function operator(), cannot match any of the overloads for function operator():\n  operator()(int, int)\n  operator()(int, int)\n");
		return 0;
	}

	// float & osg::Matrix3::operator[](int i)
	static int _bind_op_index_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float & osg::Matrix3::operator[](int i) function, expected prototype:\nfloat & osg::Matrix3::operator[](int i)\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);

		osg::Matrix3* self=(Luna< osg::Matrix3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float & osg::Matrix3::operator[](int)");
		}
		float & lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::Matrix3::operator[](int i) const
	static int _bind_op_index_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::Matrix3::operator[](int i) const function, expected prototype:\nfloat osg::Matrix3::operator[](int i) const\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);

		osg::Matrix3* self=(Luna< osg::Matrix3 >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::Matrix3::operator[](int) const");
		}
		float lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Matrix3::operator[]
	static int _bind_op_index(lua_State *L) {
		if (_lg_typecheck_op_index_overload_1(L)) return _bind_op_index_overload_1(L);
		if (_lg_typecheck_op_index_overload_2(L)) return _bind_op_index_overload_2(L);

		luaL_error(L, "error in function operator[], cannot match any of the overloads for function operator[]:\n  operator[](int)\n  operator[](int)\n");
		return 0;
	}


};

osg::Matrix3* LunaTraits< osg::Matrix3 >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Matrix3::_bind_ctor(L);
}

void LunaTraits< osg::Matrix3 >::_bind_dtor(osg::Matrix3* obj) {
	delete obj;
}

const char LunaTraits< osg::Matrix3 >::className[] = "Matrix3";
const char LunaTraits< osg::Matrix3 >::fullName[] = "osg::Matrix3";
const char LunaTraits< osg::Matrix3 >::moduleName[] = "osg";
const char* LunaTraits< osg::Matrix3 >::parents[] = {0};
const int LunaTraits< osg::Matrix3 >::hash = 18903789;
const int LunaTraits< osg::Matrix3 >::uniqueIDs[] = {18903789,0};

luna_RegType LunaTraits< osg::Matrix3 >::methods[] = {
	{"set", &luna_wrapper_osg_Matrix3::_bind_set},
	{"ptr", &luna_wrapper_osg_Matrix3::_bind_ptr},
	{"makeIdentity", &luna_wrapper_osg_Matrix3::_bind_makeIdentity},
	{"op_call", &luna_wrapper_osg_Matrix3::_bind_op_call},
	{"op_index", &luna_wrapper_osg_Matrix3::_bind_op_index},
	{"dynCast", &luna_wrapper_osg_Matrix3::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Matrix3::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Matrix3 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Matrix3 >::enumValues[] = {
	{0,0}
};



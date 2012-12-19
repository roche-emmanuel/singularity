#include <plug_common.h>

class luna_wrapper_osg_Vec3f {
public:
	typedef Luna< osg::Vec3f > luna_t;

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

		osg::Vec3f* self=(Luna< osg::Vec3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Vec3f");
		
		return luna_dynamicCast(L,converters,"osg::Vec3f",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303173) ) return false;
		if( (!dynamic_cast< osg::Vec2f* >(Luna< osg::Vec2f >::check(L,1))) ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_ptr_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ptr_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!dynamic_cast< osg::Vec3f* >(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_x_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_x_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_y_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_y_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_z_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_z_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_valid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isNaN(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_length(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_length2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_normalize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 16 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
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

	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!dynamic_cast< osg::Vec3f* >(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_pow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_mult(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck___div(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_div(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___unm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Constructor binds:
	// osg::Vec3f::Vec3f()
	static osg::Vec3f* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f::Vec3f() function, expected prototype:\nosg::Vec3f::Vec3f()\nClass arguments details:\n");
		}


		return new osg::Vec3f();
	}

	// osg::Vec3f::Vec3f(float x, float y, float z)
	static osg::Vec3f* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f::Vec3f(float x, float y, float z) function, expected prototype:\nosg::Vec3f::Vec3f(float x, float y, float z)\nClass arguments details:\n");
		}

		float x=(float)lua_tonumber(L,1);
		float y=(float)lua_tonumber(L,2);
		float z=(float)lua_tonumber(L,3);

		return new osg::Vec3f(x, y, z);
	}

	// osg::Vec3f::Vec3f(const osg::Vec2f & v2, float zz)
	static osg::Vec3f* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f::Vec3f(const osg::Vec2f & v2, float zz) function, expected prototype:\nosg::Vec3f::Vec3f(const osg::Vec2f & v2, float zz)\nClass arguments details:\narg 1 ID = 92303173\n");
		}

		const osg::Vec2f* v2_ptr=(Luna< osg::Vec2f >::check(L,1));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in osg::Vec3f::Vec3f function");
		}
		const osg::Vec2f & v2=*v2_ptr;
		float zz=(float)lua_tonumber(L,2);

		return new osg::Vec3f(v2, zz);
	}

	// Overload binder for osg::Vec3f::Vec3f
	static osg::Vec3f* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function Vec3f, cannot match any of the overloads for function Vec3f:\n  Vec3f()\n  Vec3f(float, float, float)\n  Vec3f(const osg::Vec2f &, float)\n");
		return NULL;
	}


	// Function binds:
	// float * osg::Vec3f::ptr()
	static int _bind_ptr_overload_1(lua_State *L) {
		if (!_lg_typecheck_ptr_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float * osg::Vec3f::ptr() function, expected prototype:\nfloat * osg::Vec3f::ptr()\nClass arguments details:\n");
		}


		osg::Vec3f* self=(Luna< osg::Vec3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float * osg::Vec3f::ptr()");
		}
		float * lret = self->ptr();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// const float * osg::Vec3f::ptr() const
	static int _bind_ptr_overload_2(lua_State *L) {
		if (!_lg_typecheck_ptr_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const float * osg::Vec3f::ptr() const function, expected prototype:\nconst float * osg::Vec3f::ptr() const\nClass arguments details:\n");
		}


		osg::Vec3f* self=(Luna< osg::Vec3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const float * osg::Vec3f::ptr() const");
		}
		const float * lret = self->ptr();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// Overload binder for osg::Vec3f::ptr
	static int _bind_ptr(lua_State *L) {
		if (_lg_typecheck_ptr_overload_1(L)) return _bind_ptr_overload_1(L);
		if (_lg_typecheck_ptr_overload_2(L)) return _bind_ptr_overload_2(L);

		luaL_error(L, "error in function ptr, cannot match any of the overloads for function ptr:\n  ptr()\n  ptr()\n");
		return 0;
	}

	// void osg::Vec3f::set(float x, float y, float z)
	static int _bind_set_overload_1(lua_State *L) {
		if (!_lg_typecheck_set_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Vec3f::set(float x, float y, float z) function, expected prototype:\nvoid osg::Vec3f::set(float x, float y, float z)\nClass arguments details:\n");
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=(float)lua_tonumber(L,4);

		osg::Vec3f* self=(Luna< osg::Vec3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Vec3f::set(float, float, float)");
		}
		self->set(x, y, z);

		return 0;
	}

	// void osg::Vec3f::set(const osg::Vec3f & rhs)
	static int _bind_set_overload_2(lua_State *L) {
		if (!_lg_typecheck_set_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Vec3f::set(const osg::Vec3f & rhs) function, expected prototype:\nvoid osg::Vec3f::set(const osg::Vec3f & rhs)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* rhs_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec3f::set function");
		}
		const osg::Vec3f & rhs=*rhs_ptr;

		osg::Vec3f* self=(Luna< osg::Vec3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Vec3f::set(const osg::Vec3f &)");
		}
		self->set(rhs);

		return 0;
	}

	// Overload binder for osg::Vec3f::set
	static int _bind_set(lua_State *L) {
		if (_lg_typecheck_set_overload_1(L)) return _bind_set_overload_1(L);
		if (_lg_typecheck_set_overload_2(L)) return _bind_set_overload_2(L);

		luaL_error(L, "error in function set, cannot match any of the overloads for function set:\n  set(float, float, float)\n  set(const osg::Vec3f &)\n");
		return 0;
	}

	// float & osg::Vec3f::x()
	static int _bind_x_overload_1(lua_State *L) {
		if (!_lg_typecheck_x_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float & osg::Vec3f::x() function, expected prototype:\nfloat & osg::Vec3f::x()\nClass arguments details:\n");
		}


		osg::Vec3f* self=(Luna< osg::Vec3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float & osg::Vec3f::x()");
		}
		float & lret = self->x();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::Vec3f::x() const
	static int _bind_x_overload_2(lua_State *L) {
		if (!_lg_typecheck_x_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::Vec3f::x() const function, expected prototype:\nfloat osg::Vec3f::x() const\nClass arguments details:\n");
		}


		osg::Vec3f* self=(Luna< osg::Vec3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::Vec3f::x() const");
		}
		float lret = self->x();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec3f::x
	static int _bind_x(lua_State *L) {
		if (_lg_typecheck_x_overload_1(L)) return _bind_x_overload_1(L);
		if (_lg_typecheck_x_overload_2(L)) return _bind_x_overload_2(L);

		luaL_error(L, "error in function x, cannot match any of the overloads for function x:\n  x()\n  x()\n");
		return 0;
	}

	// float & osg::Vec3f::y()
	static int _bind_y_overload_1(lua_State *L) {
		if (!_lg_typecheck_y_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float & osg::Vec3f::y() function, expected prototype:\nfloat & osg::Vec3f::y()\nClass arguments details:\n");
		}


		osg::Vec3f* self=(Luna< osg::Vec3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float & osg::Vec3f::y()");
		}
		float & lret = self->y();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::Vec3f::y() const
	static int _bind_y_overload_2(lua_State *L) {
		if (!_lg_typecheck_y_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::Vec3f::y() const function, expected prototype:\nfloat osg::Vec3f::y() const\nClass arguments details:\n");
		}


		osg::Vec3f* self=(Luna< osg::Vec3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::Vec3f::y() const");
		}
		float lret = self->y();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec3f::y
	static int _bind_y(lua_State *L) {
		if (_lg_typecheck_y_overload_1(L)) return _bind_y_overload_1(L);
		if (_lg_typecheck_y_overload_2(L)) return _bind_y_overload_2(L);

		luaL_error(L, "error in function y, cannot match any of the overloads for function y:\n  y()\n  y()\n");
		return 0;
	}

	// float & osg::Vec3f::z()
	static int _bind_z_overload_1(lua_State *L) {
		if (!_lg_typecheck_z_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float & osg::Vec3f::z() function, expected prototype:\nfloat & osg::Vec3f::z()\nClass arguments details:\n");
		}


		osg::Vec3f* self=(Luna< osg::Vec3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float & osg::Vec3f::z()");
		}
		float & lret = self->z();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::Vec3f::z() const
	static int _bind_z_overload_2(lua_State *L) {
		if (!_lg_typecheck_z_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::Vec3f::z() const function, expected prototype:\nfloat osg::Vec3f::z() const\nClass arguments details:\n");
		}


		osg::Vec3f* self=(Luna< osg::Vec3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::Vec3f::z() const");
		}
		float lret = self->z();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec3f::z
	static int _bind_z(lua_State *L) {
		if (_lg_typecheck_z_overload_1(L)) return _bind_z_overload_1(L);
		if (_lg_typecheck_z_overload_2(L)) return _bind_z_overload_2(L);

		luaL_error(L, "error in function z, cannot match any of the overloads for function z:\n  z()\n  z()\n");
		return 0;
	}

	// bool osg::Vec3f::valid() const
	static int _bind_valid(lua_State *L) {
		if (!_lg_typecheck_valid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Vec3f::valid() const function, expected prototype:\nbool osg::Vec3f::valid() const\nClass arguments details:\n");
		}


		osg::Vec3f* self=(Luna< osg::Vec3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Vec3f::valid() const");
		}
		bool lret = self->valid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Vec3f::isNaN() const
	static int _bind_isNaN(lua_State *L) {
		if (!_lg_typecheck_isNaN(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Vec3f::isNaN() const function, expected prototype:\nbool osg::Vec3f::isNaN() const\nClass arguments details:\n");
		}


		osg::Vec3f* self=(Luna< osg::Vec3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Vec3f::isNaN() const");
		}
		bool lret = self->isNaN();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float osg::Vec3f::length() const
	static int _bind_length(lua_State *L) {
		if (!_lg_typecheck_length(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::Vec3f::length() const function, expected prototype:\nfloat osg::Vec3f::length() const\nClass arguments details:\n");
		}


		osg::Vec3f* self=(Luna< osg::Vec3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::Vec3f::length() const");
		}
		float lret = self->length();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::Vec3f::length2() const
	static int _bind_length2(lua_State *L) {
		if (!_lg_typecheck_length2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::Vec3f::length2() const function, expected prototype:\nfloat osg::Vec3f::length2() const\nClass arguments details:\n");
		}


		osg::Vec3f* self=(Luna< osg::Vec3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::Vec3f::length2() const");
		}
		float lret = self->length2();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::Vec3f::normalize()
	static int _bind_normalize(lua_State *L) {
		if (!_lg_typecheck_normalize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::Vec3f::normalize() function, expected prototype:\nfloat osg::Vec3f::normalize()\nClass arguments details:\n");
		}


		osg::Vec3f* self=(Luna< osg::Vec3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::Vec3f::normalize()");
		}
		float lret = self->normalize();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:
	// bool osg::Vec3f::operator==(const osg::Vec3f & v) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Vec3f::operator==(const osg::Vec3f & v) const function, expected prototype:\nbool osg::Vec3f::operator==(const osg::Vec3f & v) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Vec3f::operator== function");
		}
		const osg::Vec3f & v=*v_ptr;

		osg::Vec3f* self=(Luna< osg::Vec3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Vec3f::operator==(const osg::Vec3f &) const");
		}
		bool lret = self->operator==(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Vec3f::operator!=(const osg::Vec3f & v) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Vec3f::operator!=(const osg::Vec3f & v) const function, expected prototype:\nbool osg::Vec3f::operator!=(const osg::Vec3f & v) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Vec3f::operator!= function");
		}
		const osg::Vec3f & v=*v_ptr;

		osg::Vec3f* self=(Luna< osg::Vec3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Vec3f::operator!=(const osg::Vec3f &) const");
		}
		bool lret = self->operator!=(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Vec3f::operator<(const osg::Vec3f & v) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Vec3f::operator<(const osg::Vec3f & v) const function, expected prototype:\nbool osg::Vec3f::operator<(const osg::Vec3f & v) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Vec3f::operator< function");
		}
		const osg::Vec3f & v=*v_ptr;

		osg::Vec3f* self=(Luna< osg::Vec3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Vec3f::operator<(const osg::Vec3f &) const");
		}
		bool lret = self->operator<(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float & osg::Vec3f::operator[](int i)
	static int _bind_op_index_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float & osg::Vec3f::operator[](int i) function, expected prototype:\nfloat & osg::Vec3f::operator[](int i)\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);

		osg::Vec3f* self=(Luna< osg::Vec3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float & osg::Vec3f::operator[](int)");
		}
		float & lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::Vec3f::operator[](int i) const
	static int _bind_op_index_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::Vec3f::operator[](int i) const function, expected prototype:\nfloat osg::Vec3f::operator[](int i) const\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);

		osg::Vec3f* self=(Luna< osg::Vec3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::Vec3f::operator[](int) const");
		}
		float lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Vec3f::operator[]
	static int _bind_op_index(lua_State *L) {
		if (_lg_typecheck_op_index_overload_1(L)) return _bind_op_index_overload_1(L);
		if (_lg_typecheck_op_index_overload_2(L)) return _bind_op_index_overload_2(L);

		luaL_error(L, "error in function operator[], cannot match any of the overloads for function operator[]:\n  operator[](int)\n  operator[](int)\n");
		return 0;
	}

	// float osg::Vec3f::operator*(const osg::Vec3f & rhs) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::Vec3f::operator*(const osg::Vec3f & rhs) const function, expected prototype:\nfloat osg::Vec3f::operator*(const osg::Vec3f & rhs) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* rhs_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec3f::operator* function");
		}
		const osg::Vec3f & rhs=*rhs_ptr;

		osg::Vec3f* self=(Luna< osg::Vec3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::Vec3f::operator*(const osg::Vec3f &) const");
		}
		float lret = self->operator*(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const osg::Vec3f osg::Vec3f::operator*(float rhs) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f osg::Vec3f::operator*(float rhs) const function, expected prototype:\nconst osg::Vec3f osg::Vec3f::operator*(float rhs) const\nClass arguments details:\n");
		}

		float rhs=(float)lua_tonumber(L,2);

		osg::Vec3f* self=(Luna< osg::Vec3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f osg::Vec3f::operator*(float) const");
		}
		const osg::Vec3f stack_lret = self->operator*(rhs);
		const osg::Vec3f* lret = new const osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osg::Vec3f::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const osg::Vec3f &)\n  operator*(float)\n");
		return 0;
	}

	// const osg::Vec3f osg::Vec3f::operator^(const osg::Vec3f & rhs) const
	static int _bind_op_pow(lua_State *L) {
		if (!_lg_typecheck_op_pow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f osg::Vec3f::operator^(const osg::Vec3f & rhs) const function, expected prototype:\nconst osg::Vec3f osg::Vec3f::operator^(const osg::Vec3f & rhs) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* rhs_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec3f::operator^ function");
		}
		const osg::Vec3f & rhs=*rhs_ptr;

		osg::Vec3f* self=(Luna< osg::Vec3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f osg::Vec3f::operator^(const osg::Vec3f &) const");
		}
		const osg::Vec3f stack_lret = self->operator^(rhs);
		const osg::Vec3f* lret = new const osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f & osg::Vec3f::operator*=(float rhs)
	static int _bind_op_mult(lua_State *L) {
		if (!_lg_typecheck_op_mult(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f & osg::Vec3f::operator*=(float rhs) function, expected prototype:\nosg::Vec3f & osg::Vec3f::operator*=(float rhs)\nClass arguments details:\n");
		}

		float rhs=(float)lua_tonumber(L,2);

		osg::Vec3f* self=(Luna< osg::Vec3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f & osg::Vec3f::operator*=(float)");
		}
		const osg::Vec3f* lret = &self->operator*=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec3f osg::Vec3f::operator/(float rhs) const
	static int _bind___div(lua_State *L) {
		if (!_lg_typecheck___div(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f osg::Vec3f::operator/(float rhs) const function, expected prototype:\nconst osg::Vec3f osg::Vec3f::operator/(float rhs) const\nClass arguments details:\n");
		}

		float rhs=(float)lua_tonumber(L,2);

		osg::Vec3f* self=(Luna< osg::Vec3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f osg::Vec3f::operator/(float) const");
		}
		const osg::Vec3f stack_lret = self->operator/(rhs);
		const osg::Vec3f* lret = new const osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f & osg::Vec3f::operator/=(float rhs)
	static int _bind_op_div(lua_State *L) {
		if (!_lg_typecheck_op_div(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f & osg::Vec3f::operator/=(float rhs) function, expected prototype:\nosg::Vec3f & osg::Vec3f::operator/=(float rhs)\nClass arguments details:\n");
		}

		float rhs=(float)lua_tonumber(L,2);

		osg::Vec3f* self=(Luna< osg::Vec3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f & osg::Vec3f::operator/=(float)");
		}
		const osg::Vec3f* lret = &self->operator/=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec3f osg::Vec3f::operator+(const osg::Vec3f & rhs) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f osg::Vec3f::operator+(const osg::Vec3f & rhs) const function, expected prototype:\nconst osg::Vec3f osg::Vec3f::operator+(const osg::Vec3f & rhs) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* rhs_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec3f::operator+ function");
		}
		const osg::Vec3f & rhs=*rhs_ptr;

		osg::Vec3f* self=(Luna< osg::Vec3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f osg::Vec3f::operator+(const osg::Vec3f &) const");
		}
		const osg::Vec3f stack_lret = self->operator+(rhs);
		const osg::Vec3f* lret = new const osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f & osg::Vec3f::operator+=(const osg::Vec3f & rhs)
	static int _bind_op_add(lua_State *L) {
		if (!_lg_typecheck_op_add(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f & osg::Vec3f::operator+=(const osg::Vec3f & rhs) function, expected prototype:\nosg::Vec3f & osg::Vec3f::operator+=(const osg::Vec3f & rhs)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* rhs_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec3f::operator+= function");
		}
		const osg::Vec3f & rhs=*rhs_ptr;

		osg::Vec3f* self=(Luna< osg::Vec3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f & osg::Vec3f::operator+=(const osg::Vec3f &)");
		}
		const osg::Vec3f* lret = &self->operator+=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec3f osg::Vec3f::operator-(const osg::Vec3f & rhs) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f osg::Vec3f::operator-(const osg::Vec3f & rhs) const function, expected prototype:\nconst osg::Vec3f osg::Vec3f::operator-(const osg::Vec3f & rhs) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* rhs_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec3f::operator- function");
		}
		const osg::Vec3f & rhs=*rhs_ptr;

		osg::Vec3f* self=(Luna< osg::Vec3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f osg::Vec3f::operator-(const osg::Vec3f &) const");
		}
		const osg::Vec3f stack_lret = self->operator-(rhs);
		const osg::Vec3f* lret = new const osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f & osg::Vec3f::operator-=(const osg::Vec3f & rhs)
	static int _bind_op_sub(lua_State *L) {
		if (!_lg_typecheck_op_sub(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f & osg::Vec3f::operator-=(const osg::Vec3f & rhs) function, expected prototype:\nosg::Vec3f & osg::Vec3f::operator-=(const osg::Vec3f & rhs)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* rhs_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Vec3f::operator-= function");
		}
		const osg::Vec3f & rhs=*rhs_ptr;

		osg::Vec3f* self=(Luna< osg::Vec3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f & osg::Vec3f::operator-=(const osg::Vec3f &)");
		}
		const osg::Vec3f* lret = &self->operator-=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec3f osg::Vec3f::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f osg::Vec3f::operator-() const function, expected prototype:\nconst osg::Vec3f osg::Vec3f::operator-() const\nClass arguments details:\n");
		}


		osg::Vec3f* self=(Luna< osg::Vec3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f osg::Vec3f::operator-() const");
		}
		const osg::Vec3f stack_lret = self->operator-();
		const osg::Vec3f* lret = new const osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}


};

osg::Vec3f* LunaTraits< osg::Vec3f >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Vec3f::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::Vec3f >::_bind_dtor(osg::Vec3f* obj) {
	delete obj;
}

const char LunaTraits< osg::Vec3f >::className[] = "Vec3f";
const char LunaTraits< osg::Vec3f >::fullName[] = "osg::Vec3f";
const char LunaTraits< osg::Vec3f >::moduleName[] = "osg";
const char* LunaTraits< osg::Vec3f >::parents[] = {0};
const int LunaTraits< osg::Vec3f >::hash = 92303204;
const int LunaTraits< osg::Vec3f >::uniqueIDs[] = {92303204,0};

luna_RegType LunaTraits< osg::Vec3f >::methods[] = {
	{"ptr", &luna_wrapper_osg_Vec3f::_bind_ptr},
	{"set", &luna_wrapper_osg_Vec3f::_bind_set},
	{"x", &luna_wrapper_osg_Vec3f::_bind_x},
	{"y", &luna_wrapper_osg_Vec3f::_bind_y},
	{"z", &luna_wrapper_osg_Vec3f::_bind_z},
	{"valid", &luna_wrapper_osg_Vec3f::_bind_valid},
	{"isNaN", &luna_wrapper_osg_Vec3f::_bind_isNaN},
	{"length", &luna_wrapper_osg_Vec3f::_bind_length},
	{"length2", &luna_wrapper_osg_Vec3f::_bind_length2},
	{"normalize", &luna_wrapper_osg_Vec3f::_bind_normalize},
	{"__eq", &luna_wrapper_osg_Vec3f::_bind___eq},
	{"op_neq", &luna_wrapper_osg_Vec3f::_bind_op_neq},
	{"__lt", &luna_wrapper_osg_Vec3f::_bind___lt},
	{"op_index", &luna_wrapper_osg_Vec3f::_bind_op_index},
	{"__mul", &luna_wrapper_osg_Vec3f::_bind___mul},
	{"op_pow", &luna_wrapper_osg_Vec3f::_bind_op_pow},
	{"op_mult", &luna_wrapper_osg_Vec3f::_bind_op_mult},
	{"__div", &luna_wrapper_osg_Vec3f::_bind___div},
	{"op_div", &luna_wrapper_osg_Vec3f::_bind_op_div},
	{"__add", &luna_wrapper_osg_Vec3f::_bind___add},
	{"op_add", &luna_wrapper_osg_Vec3f::_bind_op_add},
	{"__sub", &luna_wrapper_osg_Vec3f::_bind___sub},
	{"op_sub", &luna_wrapper_osg_Vec3f::_bind_op_sub},
	{"__unm", &luna_wrapper_osg_Vec3f::_bind___unm},
	{"dynCast", &luna_wrapper_osg_Vec3f::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Vec3f >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Vec3f >::enumValues[] = {
	{"num_components", osg::Vec3f::num_components},
	{0,0}
};



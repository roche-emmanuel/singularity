#include <plug_common.h>

class luna_wrapper_mglPoint {
public:
	typedef Luna< mglPoint > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56902440) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglPoint*)");
		}

		mglPoint* rhs =(Luna< mglPoint >::check(L,2));
		mglPoint* self=(Luna< mglPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

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

		mglPoint* self= (mglPoint*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglPoint >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56902440) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< mglPoint >::check(L,1));
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

		mglPoint* self=(Luna< mglPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglPoint");
		
		return luna_dynamicCast(L,converters,"mglPoint",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>4 ) return false;

		if( luatop>0 && lua_isnumber(L,1)==0 ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_IsNAN(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_val(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_norm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Normalize(lua_State *L) {
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

	inline static bool _lg_typecheck_getC(lua_State *L) {
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

	inline static bool _lg_typecheck_setC(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 6 valid operators)
	inline static bool _lg_typecheck_op_add_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_add_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,2))) ) return false;
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


	// Constructor binds:
	// mglPoint::mglPoint(double X = 0, double Y = 0, double Z = 0, double C = 0)
	static mglPoint* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglPoint::mglPoint(double X = 0, double Y = 0, double Z = 0, double C = 0) function, expected prototype:\nmglPoint::mglPoint(double X = 0, double Y = 0, double Z = 0, double C = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double X=luatop>0 ? (double)lua_tonumber(L,1) : (double)0;
		double Y=luatop>1 ? (double)lua_tonumber(L,2) : (double)0;
		double Z=luatop>2 ? (double)lua_tonumber(L,3) : (double)0;
		double C=luatop>3 ? (double)lua_tonumber(L,4) : (double)0;

		return new mglPoint(X, Y, Z, C);
	}


	// Function binds:
	// bool mglPoint::IsNAN()
	static int _bind_IsNAN(lua_State *L) {
		if (!_lg_typecheck_IsNAN(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool mglPoint::IsNAN() function, expected prototype:\nbool mglPoint::IsNAN()\nClass arguments details:\n");
		}


		mglPoint* self=(Luna< mglPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool mglPoint::IsNAN(). Got : '%s'",typeid(Luna< mglPoint >::check(L,1)).name());
		}
		bool lret = self->IsNAN();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// double mglPoint::val(int i)
	static int _bind_val(lua_State *L) {
		if (!_lg_typecheck_val(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglPoint::val(int i) function, expected prototype:\ndouble mglPoint::val(int i)\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);

		mglPoint* self=(Luna< mglPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglPoint::val(int). Got : '%s'",typeid(Luna< mglPoint >::check(L,1)).name());
		}
		double lret = self->val(i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglPoint::norm()
	static int _bind_norm(lua_State *L) {
		if (!_lg_typecheck_norm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglPoint::norm() function, expected prototype:\ndouble mglPoint::norm()\nClass arguments details:\n");
		}


		mglPoint* self=(Luna< mglPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglPoint::norm(). Got : '%s'",typeid(Luna< mglPoint >::check(L,1)).name());
		}
		double lret = self->norm();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglPoint::Normalize()
	static int _bind_Normalize(lua_State *L) {
		if (!_lg_typecheck_Normalize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglPoint::Normalize() function, expected prototype:\nvoid mglPoint::Normalize()\nClass arguments details:\n");
		}


		mglPoint* self=(Luna< mglPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglPoint::Normalize(). Got : '%s'",typeid(Luna< mglPoint >::check(L,1)).name());
		}
		self->Normalize();

		return 0;
	}

	// double mglPoint::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglPoint::x() function, expected prototype:\ndouble mglPoint::x()\nClass arguments details:\n");
		}


		mglPoint* self=(Luna< mglPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglPoint::x(). Got : '%s'",typeid(Luna< mglPoint >::check(L,1)).name());
		}
		double lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglPoint::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglPoint::y() function, expected prototype:\ndouble mglPoint::y()\nClass arguments details:\n");
		}


		mglPoint* self=(Luna< mglPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglPoint::y(). Got : '%s'",typeid(Luna< mglPoint >::check(L,1)).name());
		}
		double lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglPoint::z()
	static int _bind_getZ(lua_State *L) {
		if (!_lg_typecheck_getZ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglPoint::z() function, expected prototype:\ndouble mglPoint::z()\nClass arguments details:\n");
		}


		mglPoint* self=(Luna< mglPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglPoint::z(). Got : '%s'",typeid(Luna< mglPoint >::check(L,1)).name());
		}
		double lret = self->z;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglPoint::c()
	static int _bind_getC(lua_State *L) {
		if (!_lg_typecheck_getC(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglPoint::c() function, expected prototype:\ndouble mglPoint::c()\nClass arguments details:\n");
		}


		mglPoint* self=(Luna< mglPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglPoint::c(). Got : '%s'",typeid(Luna< mglPoint >::check(L,1)).name());
		}
		double lret = self->c;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglPoint::x(double value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglPoint::x(double value) function, expected prototype:\nvoid mglPoint::x(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		mglPoint* self=(Luna< mglPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglPoint::x(double). Got : '%s'",typeid(Luna< mglPoint >::check(L,1)).name());
		}
		self->x = value;

		return 0;
	}

	// void mglPoint::y(double value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglPoint::y(double value) function, expected prototype:\nvoid mglPoint::y(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		mglPoint* self=(Luna< mglPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglPoint::y(double). Got : '%s'",typeid(Luna< mglPoint >::check(L,1)).name());
		}
		self->y = value;

		return 0;
	}

	// void mglPoint::z(double value)
	static int _bind_setZ(lua_State *L) {
		if (!_lg_typecheck_setZ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglPoint::z(double value) function, expected prototype:\nvoid mglPoint::z(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		mglPoint* self=(Luna< mglPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglPoint::z(double). Got : '%s'",typeid(Luna< mglPoint >::check(L,1)).name());
		}
		self->z = value;

		return 0;
	}

	// void mglPoint::c(double value)
	static int _bind_setC(lua_State *L) {
		if (!_lg_typecheck_setC(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglPoint::c(double value) function, expected prototype:\nvoid mglPoint::c(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		mglPoint* self=(Luna< mglPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglPoint::c(double). Got : '%s'",typeid(Luna< mglPoint >::check(L,1)).name());
		}
		self->c = value;

		return 0;
	}


	// Operator binds:
	// void mglPoint::operator+=(const mglPoint & a)
	static int _bind_op_add_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_add_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglPoint::operator+=(const mglPoint & a) function, expected prototype:\nvoid mglPoint::operator+=(const mglPoint & a)\nClass arguments details:\narg 1 ID = 56902440\n");
		}

		const mglPoint* a_ptr=(Luna< mglPoint >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglPoint::operator+= function");
		}
		const mglPoint & a=*a_ptr;

		mglPoint* self=(Luna< mglPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglPoint::operator+=(const mglPoint &). Got : '%s'",typeid(Luna< mglPoint >::check(L,1)).name());
		}
		self->operator+=(a);

		return 0;
	}

	// void mglPoint::operator+=(double a)
	static int _bind_op_add_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_add_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglPoint::operator+=(double a) function, expected prototype:\nvoid mglPoint::operator+=(double a)\nClass arguments details:\n");
		}

		double a=(double)lua_tonumber(L,2);

		mglPoint* self=(Luna< mglPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglPoint::operator+=(double). Got : '%s'",typeid(Luna< mglPoint >::check(L,1)).name());
		}
		self->operator+=(a);

		return 0;
	}

	// Overload binder for mglPoint::operator+=
	static int _bind_op_add(lua_State *L) {
		if (_lg_typecheck_op_add_overload_1(L)) return _bind_op_add_overload_1(L);
		if (_lg_typecheck_op_add_overload_2(L)) return _bind_op_add_overload_2(L);

		luaL_error(L, "error in function operator+=, cannot match any of the overloads for function operator+=:\n  operator+=(const mglPoint &)\n  operator+=(double)\n");
		return 0;
	}

	// void mglPoint::operator-=(const mglPoint & a)
	static int _bind_op_sub_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_sub_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglPoint::operator-=(const mglPoint & a) function, expected prototype:\nvoid mglPoint::operator-=(const mglPoint & a)\nClass arguments details:\narg 1 ID = 56902440\n");
		}

		const mglPoint* a_ptr=(Luna< mglPoint >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglPoint::operator-= function");
		}
		const mglPoint & a=*a_ptr;

		mglPoint* self=(Luna< mglPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglPoint::operator-=(const mglPoint &). Got : '%s'",typeid(Luna< mglPoint >::check(L,1)).name());
		}
		self->operator-=(a);

		return 0;
	}

	// void mglPoint::operator-=(double a)
	static int _bind_op_sub_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_sub_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglPoint::operator-=(double a) function, expected prototype:\nvoid mglPoint::operator-=(double a)\nClass arguments details:\n");
		}

		double a=(double)lua_tonumber(L,2);

		mglPoint* self=(Luna< mglPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglPoint::operator-=(double). Got : '%s'",typeid(Luna< mglPoint >::check(L,1)).name());
		}
		self->operator-=(a);

		return 0;
	}

	// Overload binder for mglPoint::operator-=
	static int _bind_op_sub(lua_State *L) {
		if (_lg_typecheck_op_sub_overload_1(L)) return _bind_op_sub_overload_1(L);
		if (_lg_typecheck_op_sub_overload_2(L)) return _bind_op_sub_overload_2(L);

		luaL_error(L, "error in function operator-=, cannot match any of the overloads for function operator-=:\n  operator-=(const mglPoint &)\n  operator-=(double)\n");
		return 0;
	}

	// void mglPoint::operator*=(double a)
	static int _bind_op_mult(lua_State *L) {
		if (!_lg_typecheck_op_mult(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglPoint::operator*=(double a) function, expected prototype:\nvoid mglPoint::operator*=(double a)\nClass arguments details:\n");
		}

		double a=(double)lua_tonumber(L,2);

		mglPoint* self=(Luna< mglPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglPoint::operator*=(double). Got : '%s'",typeid(Luna< mglPoint >::check(L,1)).name());
		}
		self->operator*=(a);

		return 0;
	}

	// void mglPoint::operator/=(double a)
	static int _bind_op_div(lua_State *L) {
		if (!_lg_typecheck_op_div(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglPoint::operator/=(double a) function, expected prototype:\nvoid mglPoint::operator/=(double a)\nClass arguments details:\n");
		}

		double a=(double)lua_tonumber(L,2);

		mglPoint* self=(Luna< mglPoint >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglPoint::operator/=(double). Got : '%s'",typeid(Luna< mglPoint >::check(L,1)).name());
		}
		self->operator/=(a);

		return 0;
	}


};

mglPoint* LunaTraits< mglPoint >::_bind_ctor(lua_State *L) {
	return luna_wrapper_mglPoint::_bind_ctor(L);
}

void LunaTraits< mglPoint >::_bind_dtor(mglPoint* obj) {
	delete obj;
}

const char LunaTraits< mglPoint >::className[] = "mglPoint";
const char LunaTraits< mglPoint >::fullName[] = "mglPoint";
const char LunaTraits< mglPoint >::moduleName[] = "mathgl";
const char* LunaTraits< mglPoint >::parents[] = {0};
const int LunaTraits< mglPoint >::hash = 56902440;
const int LunaTraits< mglPoint >::uniqueIDs[] = {56902440,0};

luna_RegType LunaTraits< mglPoint >::methods[] = {
	{"IsNAN", &luna_wrapper_mglPoint::_bind_IsNAN},
	{"val", &luna_wrapper_mglPoint::_bind_val},
	{"norm", &luna_wrapper_mglPoint::_bind_norm},
	{"Normalize", &luna_wrapper_mglPoint::_bind_Normalize},
	{"getX", &luna_wrapper_mglPoint::_bind_getX},
	{"getY", &luna_wrapper_mglPoint::_bind_getY},
	{"getZ", &luna_wrapper_mglPoint::_bind_getZ},
	{"getC", &luna_wrapper_mglPoint::_bind_getC},
	{"setX", &luna_wrapper_mglPoint::_bind_setX},
	{"setY", &luna_wrapper_mglPoint::_bind_setY},
	{"setZ", &luna_wrapper_mglPoint::_bind_setZ},
	{"setC", &luna_wrapper_mglPoint::_bind_setC},
	{"op_add", &luna_wrapper_mglPoint::_bind_op_add},
	{"op_sub", &luna_wrapper_mglPoint::_bind_op_sub},
	{"op_mult", &luna_wrapper_mglPoint::_bind_op_mult},
	{"op_div", &luna_wrapper_mglPoint::_bind_op_div},
	{"dynCast", &luna_wrapper_mglPoint::_bind_dynCast},
	{"__eq", &luna_wrapper_mglPoint::_bind___eq},
	{"fromVoid", &luna_wrapper_mglPoint::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglPoint::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< mglPoint >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglPoint >::enumValues[] = {
	{0,0}
};



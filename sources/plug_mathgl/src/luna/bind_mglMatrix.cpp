#include <plug_common.h>

class luna_wrapper_mglMatrix {
public:
	typedef Luna< mglMatrix > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65490073) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglMatrix*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		mglMatrix* rhs =(Luna< mglMatrix >::check(L,2));
		mglMatrix* self=(Luna< mglMatrix >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		mglMatrix* self= (mglMatrix*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglMatrix >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65490073) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< mglMatrix >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		mglMatrix* self=(Luna< mglMatrix >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglMatrix");
		
		return luna_dynamicCast(L,converters,"mglMatrix",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_clear(lua_State *L) {
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

	inline static bool _lg_typecheck_getPf(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setZ(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPf(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65490073) ) return false;
		return true;
	}


	// Constructor binds:
	// mglMatrix::mglMatrix()
	static mglMatrix* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in mglMatrix::mglMatrix() function, expected prototype:\nmglMatrix::mglMatrix()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new mglMatrix();
	}


	// Function binds:
	// void mglMatrix::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luaL_error(L, "luna typecheck failed in void mglMatrix::clear() function, expected prototype:\nvoid mglMatrix::clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglMatrix* self=(Luna< mglMatrix >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglMatrix::clear(). Got : '%s'\n%s",typeid(Luna< mglMatrix >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clear();

		return 0;
	}

	// double mglMatrix::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luaL_error(L, "luna typecheck failed in double mglMatrix::x() function, expected prototype:\ndouble mglMatrix::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglMatrix* self=(Luna< mglMatrix >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double mglMatrix::x(). Got : '%s'\n%s",typeid(Luna< mglMatrix >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglMatrix::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luaL_error(L, "luna typecheck failed in double mglMatrix::y() function, expected prototype:\ndouble mglMatrix::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglMatrix* self=(Luna< mglMatrix >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double mglMatrix::y(). Got : '%s'\n%s",typeid(Luna< mglMatrix >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglMatrix::z()
	static int _bind_getZ(lua_State *L) {
		if (!_lg_typecheck_getZ(L)) {
			luaL_error(L, "luna typecheck failed in double mglMatrix::z() function, expected prototype:\ndouble mglMatrix::z()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglMatrix* self=(Luna< mglMatrix >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double mglMatrix::z(). Got : '%s'\n%s",typeid(Luna< mglMatrix >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->z;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglMatrix::pf()
	static int _bind_getPf(lua_State *L) {
		if (!_lg_typecheck_getPf(L)) {
			luaL_error(L, "luna typecheck failed in double mglMatrix::pf() function, expected prototype:\ndouble mglMatrix::pf()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglMatrix* self=(Luna< mglMatrix >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double mglMatrix::pf(). Got : '%s'\n%s",typeid(Luna< mglMatrix >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->pf;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglMatrix::x(double value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luaL_error(L, "luna typecheck failed in void mglMatrix::x(double value) function, expected prototype:\nvoid mglMatrix::x(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		mglMatrix* self=(Luna< mglMatrix >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglMatrix::x(double). Got : '%s'\n%s",typeid(Luna< mglMatrix >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->x = value;

		return 0;
	}

	// void mglMatrix::y(double value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luaL_error(L, "luna typecheck failed in void mglMatrix::y(double value) function, expected prototype:\nvoid mglMatrix::y(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		mglMatrix* self=(Luna< mglMatrix >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglMatrix::y(double). Got : '%s'\n%s",typeid(Luna< mglMatrix >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->y = value;

		return 0;
	}

	// void mglMatrix::z(double value)
	static int _bind_setZ(lua_State *L) {
		if (!_lg_typecheck_setZ(L)) {
			luaL_error(L, "luna typecheck failed in void mglMatrix::z(double value) function, expected prototype:\nvoid mglMatrix::z(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		mglMatrix* self=(Luna< mglMatrix >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglMatrix::z(double). Got : '%s'\n%s",typeid(Luna< mglMatrix >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->z = value;

		return 0;
	}

	// void mglMatrix::pf(double value)
	static int _bind_setPf(lua_State *L) {
		if (!_lg_typecheck_setPf(L)) {
			luaL_error(L, "luna typecheck failed in void mglMatrix::pf(double value) function, expected prototype:\nvoid mglMatrix::pf(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		mglMatrix* self=(Luna< mglMatrix >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglMatrix::pf(double). Got : '%s'\n%s",typeid(Luna< mglMatrix >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pf = value;

		return 0;
	}


	// Operator binds:
	// mglMatrix & mglMatrix::operator=(const mglMatrix & a)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in mglMatrix & mglMatrix::operator=(const mglMatrix & a) function, expected prototype:\nmglMatrix & mglMatrix::operator=(const mglMatrix & a)\nClass arguments details:\narg 1 ID = 65490073\n\n%s",luna_dumpStack(L).c_str());
		}

		const mglMatrix* a_ptr=(Luna< mglMatrix >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in mglMatrix::operator= function");
		}
		const mglMatrix & a=*a_ptr;

		mglMatrix* self=(Luna< mglMatrix >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call mglMatrix & mglMatrix::operator=(const mglMatrix &). Got : '%s'\n%s",typeid(Luna< mglMatrix >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const mglMatrix* lret = &self->operator=(a);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglMatrix >::push(L,lret,false);

		return 1;
	}


};

mglMatrix* LunaTraits< mglMatrix >::_bind_ctor(lua_State *L) {
	return luna_wrapper_mglMatrix::_bind_ctor(L);
}

void LunaTraits< mglMatrix >::_bind_dtor(mglMatrix* obj) {
	delete obj;
}

const char LunaTraits< mglMatrix >::className[] = "mglMatrix";
const char LunaTraits< mglMatrix >::fullName[] = "mglMatrix";
const char LunaTraits< mglMatrix >::moduleName[] = "mathgl";
const char* LunaTraits< mglMatrix >::parents[] = {0};
const int LunaTraits< mglMatrix >::hash = 65490073;
const int LunaTraits< mglMatrix >::uniqueIDs[] = {65490073,0};

luna_RegType LunaTraits< mglMatrix >::methods[] = {
	{"clear", &luna_wrapper_mglMatrix::_bind_clear},
	{"getX", &luna_wrapper_mglMatrix::_bind_getX},
	{"getY", &luna_wrapper_mglMatrix::_bind_getY},
	{"getZ", &luna_wrapper_mglMatrix::_bind_getZ},
	{"getPf", &luna_wrapper_mglMatrix::_bind_getPf},
	{"setX", &luna_wrapper_mglMatrix::_bind_setX},
	{"setY", &luna_wrapper_mglMatrix::_bind_setY},
	{"setZ", &luna_wrapper_mglMatrix::_bind_setZ},
	{"setPf", &luna_wrapper_mglMatrix::_bind_setPf},
	{"op_assign", &luna_wrapper_mglMatrix::_bind_op_assign},
	{"dynCast", &luna_wrapper_mglMatrix::_bind_dynCast},
	{"__eq", &luna_wrapper_mglMatrix::_bind___eq},
	{"fromVoid", &luna_wrapper_mglMatrix::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglMatrix::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< mglMatrix >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglMatrix >::enumValues[] = {
	{0,0}
};



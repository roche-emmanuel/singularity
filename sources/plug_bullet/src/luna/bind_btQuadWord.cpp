#include <plug_common.h>

class luna_wrapper_btQuadWord {
public:
	typedef Luna< btQuadWord > luna_t;

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

		btQuadWord* self=(Luna< btQuadWord >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btQuadWord");
		
		return luna_dynamicCast(L,converters,"btQuadWord",name);
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
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}


	// Function checkers:
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

	inline static bool _lg_typecheck_setW(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_x(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_y(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_z(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_w(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setValue_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setValue_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMax(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2139400) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2139400) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 2 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2139400) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2139400) ) return false;
		return true;
	}


	// Constructor binds:
	// btQuadWord::btQuadWord()
	static btQuadWord* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btQuadWord::btQuadWord() function, expected prototype:\nbtQuadWord::btQuadWord()\nClass arguments details:\n");
		}


		return new btQuadWord();
	}

	// btQuadWord::btQuadWord(const float & _x, const float & _y, const float & _z)
	static btQuadWord* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btQuadWord::btQuadWord(const float & _x, const float & _y, const float & _z) function, expected prototype:\nbtQuadWord::btQuadWord(const float & _x, const float & _y, const float & _z)\nClass arguments details:\n");
		}

		float _x=(float)lua_tonumber(L,1);
		float _y=(float)lua_tonumber(L,2);
		float _z=(float)lua_tonumber(L,3);

		return new btQuadWord(_x, _y, _z);
	}

	// btQuadWord::btQuadWord(const float & _x, const float & _y, const float & _z, const float & _w)
	static btQuadWord* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btQuadWord::btQuadWord(const float & _x, const float & _y, const float & _z, const float & _w) function, expected prototype:\nbtQuadWord::btQuadWord(const float & _x, const float & _y, const float & _z, const float & _w)\nClass arguments details:\n");
		}

		float _x=(float)lua_tonumber(L,1);
		float _y=(float)lua_tonumber(L,2);
		float _z=(float)lua_tonumber(L,3);
		float _w=(float)lua_tonumber(L,4);

		return new btQuadWord(_x, _y, _z, _w);
	}

	// Overload binder for btQuadWord::btQuadWord
	static btQuadWord* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function btQuadWord, cannot match any of the overloads for function btQuadWord:\n  btQuadWord()\n  btQuadWord(const float &, const float &, const float &)\n  btQuadWord(const float &, const float &, const float &, const float &)\n");
		return NULL;
	}


	// Function binds:
	// const float & btQuadWord::getX() const
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const float & btQuadWord::getX() const function, expected prototype:\nconst float & btQuadWord::getX() const\nClass arguments details:\n");
		}


		btQuadWord* self=(Luna< btQuadWord >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const float & btQuadWord::getX() const. Got : '%s'",typeid(Luna< btQuadWord >::check(L,1)).name());
		}
		const float & lret = self->getX();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const float & btQuadWord::getY() const
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const float & btQuadWord::getY() const function, expected prototype:\nconst float & btQuadWord::getY() const\nClass arguments details:\n");
		}


		btQuadWord* self=(Luna< btQuadWord >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const float & btQuadWord::getY() const. Got : '%s'",typeid(Luna< btQuadWord >::check(L,1)).name());
		}
		const float & lret = self->getY();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const float & btQuadWord::getZ() const
	static int _bind_getZ(lua_State *L) {
		if (!_lg_typecheck_getZ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const float & btQuadWord::getZ() const function, expected prototype:\nconst float & btQuadWord::getZ() const\nClass arguments details:\n");
		}


		btQuadWord* self=(Luna< btQuadWord >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const float & btQuadWord::getZ() const. Got : '%s'",typeid(Luna< btQuadWord >::check(L,1)).name());
		}
		const float & lret = self->getZ();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btQuadWord::setX(float _x)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuadWord::setX(float _x) function, expected prototype:\nvoid btQuadWord::setX(float _x)\nClass arguments details:\n");
		}

		float _x=(float)lua_tonumber(L,2);

		btQuadWord* self=(Luna< btQuadWord >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuadWord::setX(float). Got : '%s'",typeid(Luna< btQuadWord >::check(L,1)).name());
		}
		self->setX(_x);

		return 0;
	}

	// void btQuadWord::setY(float _y)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuadWord::setY(float _y) function, expected prototype:\nvoid btQuadWord::setY(float _y)\nClass arguments details:\n");
		}

		float _y=(float)lua_tonumber(L,2);

		btQuadWord* self=(Luna< btQuadWord >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuadWord::setY(float). Got : '%s'",typeid(Luna< btQuadWord >::check(L,1)).name());
		}
		self->setY(_y);

		return 0;
	}

	// void btQuadWord::setZ(float _z)
	static int _bind_setZ(lua_State *L) {
		if (!_lg_typecheck_setZ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuadWord::setZ(float _z) function, expected prototype:\nvoid btQuadWord::setZ(float _z)\nClass arguments details:\n");
		}

		float _z=(float)lua_tonumber(L,2);

		btQuadWord* self=(Luna< btQuadWord >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuadWord::setZ(float). Got : '%s'",typeid(Luna< btQuadWord >::check(L,1)).name());
		}
		self->setZ(_z);

		return 0;
	}

	// void btQuadWord::setW(float _w)
	static int _bind_setW(lua_State *L) {
		if (!_lg_typecheck_setW(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuadWord::setW(float _w) function, expected prototype:\nvoid btQuadWord::setW(float _w)\nClass arguments details:\n");
		}

		float _w=(float)lua_tonumber(L,2);

		btQuadWord* self=(Luna< btQuadWord >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuadWord::setW(float). Got : '%s'",typeid(Luna< btQuadWord >::check(L,1)).name());
		}
		self->setW(_w);

		return 0;
	}

	// const float & btQuadWord::x() const
	static int _bind_x(lua_State *L) {
		if (!_lg_typecheck_x(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const float & btQuadWord::x() const function, expected prototype:\nconst float & btQuadWord::x() const\nClass arguments details:\n");
		}


		btQuadWord* self=(Luna< btQuadWord >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const float & btQuadWord::x() const. Got : '%s'",typeid(Luna< btQuadWord >::check(L,1)).name());
		}
		const float & lret = self->x();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const float & btQuadWord::y() const
	static int _bind_y(lua_State *L) {
		if (!_lg_typecheck_y(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const float & btQuadWord::y() const function, expected prototype:\nconst float & btQuadWord::y() const\nClass arguments details:\n");
		}


		btQuadWord* self=(Luna< btQuadWord >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const float & btQuadWord::y() const. Got : '%s'",typeid(Luna< btQuadWord >::check(L,1)).name());
		}
		const float & lret = self->y();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const float & btQuadWord::z() const
	static int _bind_z(lua_State *L) {
		if (!_lg_typecheck_z(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const float & btQuadWord::z() const function, expected prototype:\nconst float & btQuadWord::z() const\nClass arguments details:\n");
		}


		btQuadWord* self=(Luna< btQuadWord >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const float & btQuadWord::z() const. Got : '%s'",typeid(Luna< btQuadWord >::check(L,1)).name());
		}
		const float & lret = self->z();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const float & btQuadWord::w() const
	static int _bind_w(lua_State *L) {
		if (!_lg_typecheck_w(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const float & btQuadWord::w() const function, expected prototype:\nconst float & btQuadWord::w() const\nClass arguments details:\n");
		}


		btQuadWord* self=(Luna< btQuadWord >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const float & btQuadWord::w() const. Got : '%s'",typeid(Luna< btQuadWord >::check(L,1)).name());
		}
		const float & lret = self->w();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btQuadWord::setValue(const float & _x, const float & _y, const float & _z)
	static int _bind_setValue_overload_1(lua_State *L) {
		if (!_lg_typecheck_setValue_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuadWord::setValue(const float & _x, const float & _y, const float & _z) function, expected prototype:\nvoid btQuadWord::setValue(const float & _x, const float & _y, const float & _z)\nClass arguments details:\n");
		}

		float _x=(float)lua_tonumber(L,2);
		float _y=(float)lua_tonumber(L,3);
		float _z=(float)lua_tonumber(L,4);

		btQuadWord* self=(Luna< btQuadWord >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuadWord::setValue(const float &, const float &, const float &). Got : '%s'",typeid(Luna< btQuadWord >::check(L,1)).name());
		}
		self->setValue(_x, _y, _z);

		return 0;
	}

	// void btQuadWord::setValue(const float & _x, const float & _y, const float & _z, const float & _w)
	static int _bind_setValue_overload_2(lua_State *L) {
		if (!_lg_typecheck_setValue_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuadWord::setValue(const float & _x, const float & _y, const float & _z, const float & _w) function, expected prototype:\nvoid btQuadWord::setValue(const float & _x, const float & _y, const float & _z, const float & _w)\nClass arguments details:\n");
		}

		float _x=(float)lua_tonumber(L,2);
		float _y=(float)lua_tonumber(L,3);
		float _z=(float)lua_tonumber(L,4);
		float _w=(float)lua_tonumber(L,5);

		btQuadWord* self=(Luna< btQuadWord >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuadWord::setValue(const float &, const float &, const float &, const float &). Got : '%s'",typeid(Luna< btQuadWord >::check(L,1)).name());
		}
		self->setValue(_x, _y, _z, _w);

		return 0;
	}

	// Overload binder for btQuadWord::setValue
	static int _bind_setValue(lua_State *L) {
		if (_lg_typecheck_setValue_overload_1(L)) return _bind_setValue_overload_1(L);
		if (_lg_typecheck_setValue_overload_2(L)) return _bind_setValue_overload_2(L);

		luaL_error(L, "error in function setValue, cannot match any of the overloads for function setValue:\n  setValue(const float &, const float &, const float &)\n  setValue(const float &, const float &, const float &, const float &)\n");
		return 0;
	}

	// void btQuadWord::setMax(const btQuadWord & other)
	static int _bind_setMax(lua_State *L) {
		if (!_lg_typecheck_setMax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuadWord::setMax(const btQuadWord & other) function, expected prototype:\nvoid btQuadWord::setMax(const btQuadWord & other)\nClass arguments details:\narg 1 ID = 2139400\n");
		}

		const btQuadWord* other_ptr=(Luna< btQuadWord >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in btQuadWord::setMax function");
		}
		const btQuadWord & other=*other_ptr;

		btQuadWord* self=(Luna< btQuadWord >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuadWord::setMax(const btQuadWord &). Got : '%s'",typeid(Luna< btQuadWord >::check(L,1)).name());
		}
		self->setMax(other);

		return 0;
	}

	// void btQuadWord::setMin(const btQuadWord & other)
	static int _bind_setMin(lua_State *L) {
		if (!_lg_typecheck_setMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btQuadWord::setMin(const btQuadWord & other) function, expected prototype:\nvoid btQuadWord::setMin(const btQuadWord & other)\nClass arguments details:\narg 1 ID = 2139400\n");
		}

		const btQuadWord* other_ptr=(Luna< btQuadWord >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in btQuadWord::setMin function");
		}
		const btQuadWord & other=*other_ptr;

		btQuadWord* self=(Luna< btQuadWord >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btQuadWord::setMin(const btQuadWord &). Got : '%s'",typeid(Luna< btQuadWord >::check(L,1)).name());
		}
		self->setMin(other);

		return 0;
	}


	// Operator binds:
	// bool btQuadWord::operator==(const btQuadWord & other) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btQuadWord::operator==(const btQuadWord & other) const function, expected prototype:\nbool btQuadWord::operator==(const btQuadWord & other) const\nClass arguments details:\narg 1 ID = 2139400\n");
		}

		const btQuadWord* other_ptr=(Luna< btQuadWord >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in btQuadWord::operator== function");
		}
		const btQuadWord & other=*other_ptr;

		btQuadWord* self=(Luna< btQuadWord >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btQuadWord::operator==(const btQuadWord &) const. Got : '%s'",typeid(Luna< btQuadWord >::check(L,1)).name());
		}
		bool lret = self->operator==(other);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btQuadWord::operator!=(const btQuadWord & other) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btQuadWord::operator!=(const btQuadWord & other) const function, expected prototype:\nbool btQuadWord::operator!=(const btQuadWord & other) const\nClass arguments details:\narg 1 ID = 2139400\n");
		}

		const btQuadWord* other_ptr=(Luna< btQuadWord >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in btQuadWord::operator!= function");
		}
		const btQuadWord & other=*other_ptr;

		btQuadWord* self=(Luna< btQuadWord >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btQuadWord::operator!=(const btQuadWord &) const. Got : '%s'",typeid(Luna< btQuadWord >::check(L,1)).name());
		}
		bool lret = self->operator!=(other);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

btQuadWord* LunaTraits< btQuadWord >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btQuadWord::_bind_ctor(L);
}

void LunaTraits< btQuadWord >::_bind_dtor(btQuadWord* obj) {
	delete obj;
}

const char LunaTraits< btQuadWord >::className[] = "btQuadWord";
const char LunaTraits< btQuadWord >::fullName[] = "btQuadWord";
const char LunaTraits< btQuadWord >::moduleName[] = "bullet";
const char* LunaTraits< btQuadWord >::parents[] = {0};
const int LunaTraits< btQuadWord >::hash = 2139400;
const int LunaTraits< btQuadWord >::uniqueIDs[] = {2139400,0};

luna_RegType LunaTraits< btQuadWord >::methods[] = {
	{"getX", &luna_wrapper_btQuadWord::_bind_getX},
	{"getY", &luna_wrapper_btQuadWord::_bind_getY},
	{"getZ", &luna_wrapper_btQuadWord::_bind_getZ},
	{"setX", &luna_wrapper_btQuadWord::_bind_setX},
	{"setY", &luna_wrapper_btQuadWord::_bind_setY},
	{"setZ", &luna_wrapper_btQuadWord::_bind_setZ},
	{"setW", &luna_wrapper_btQuadWord::_bind_setW},
	{"x", &luna_wrapper_btQuadWord::_bind_x},
	{"y", &luna_wrapper_btQuadWord::_bind_y},
	{"z", &luna_wrapper_btQuadWord::_bind_z},
	{"w", &luna_wrapper_btQuadWord::_bind_w},
	{"setValue", &luna_wrapper_btQuadWord::_bind_setValue},
	{"setMax", &luna_wrapper_btQuadWord::_bind_setMax},
	{"setMin", &luna_wrapper_btQuadWord::_bind_setMin},
	{"__eq", &luna_wrapper_btQuadWord::_bind___eq},
	{"op_neq", &luna_wrapper_btQuadWord::_bind_op_neq},
	{"dynCast", &luna_wrapper_btQuadWord::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< btQuadWord >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btQuadWord >::enumValues[] = {
	{0,0}
};



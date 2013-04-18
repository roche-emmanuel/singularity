#include <plug_common.h>

class luna_wrapper_sgt_half {
public:
	typedef Luna< sgt::half > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgt::half* self= (sgt::half*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::half >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31071002) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< sgt::half >::check(L,1));
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
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		sgt::half* self=(Luna< sgt::half >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::half");
		
		return luna_dynamicCast(L,converters,"sgt::half",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_toFloat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isNaN(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isFinite(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isInf(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 6 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31071002) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31071002) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31071002) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31071002) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31071002) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___div(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31071002) ) return false;
		return true;
	}


	// Constructor binds:
	// sgt::half::half()
	static sgt::half* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in sgt::half::half() function, expected prototype:\nsgt::half::half()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new sgt::half();
	}

	// sgt::half::half(float x)
	static sgt::half* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::half::half(float x) function, expected prototype:\nsgt::half::half(float x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,1);

		return new sgt::half(x);
	}

	// Overload binder for sgt::half::half
	static sgt::half* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function half, cannot match any of the overloads for function half:\n  half()\n  half(float)\n");
		return NULL;
	}


	// Function binds:
	// float sgt::half::toFloat() const
	static int _bind_toFloat(lua_State *L) {
		if (!_lg_typecheck_toFloat(L)) {
			luaL_error(L, "luna typecheck failed in float sgt::half::toFloat() const function, expected prototype:\nfloat sgt::half::toFloat() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::half* self=(Luna< sgt::half >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float sgt::half::toFloat() const. Got : '%s'\n%s",typeid(Luna< sgt::half >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->toFloat();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool sgt::half::isNaN() const
	static int _bind_isNaN(lua_State *L) {
		if (!_lg_typecheck_isNaN(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::half::isNaN() const function, expected prototype:\nbool sgt::half::isNaN() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::half* self=(Luna< sgt::half >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::half::isNaN() const. Got : '%s'\n%s",typeid(Luna< sgt::half >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isNaN();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool sgt::half::isFinite() const
	static int _bind_isFinite(lua_State *L) {
		if (!_lg_typecheck_isFinite(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::half::isFinite() const function, expected prototype:\nbool sgt::half::isFinite() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::half* self=(Luna< sgt::half >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::half::isFinite() const. Got : '%s'\n%s",typeid(Luna< sgt::half >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isFinite();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool sgt::half::isInf() const
	static int _bind_isInf(lua_State *L) {
		if (!_lg_typecheck_isInf(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::half::isInf() const function, expected prototype:\nbool sgt::half::isInf() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::half* self=(Luna< sgt::half >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::half::isInf() const. Got : '%s'\n%s",typeid(Luna< sgt::half >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isInf();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool sgt::half::isNormal() const
	static int _bind_isNormal(lua_State *L) {
		if (!_lg_typecheck_isNormal(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::half::isNormal() const function, expected prototype:\nbool sgt::half::isNormal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::half* self=(Luna< sgt::half >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::half::isNormal() const. Got : '%s'\n%s",typeid(Luna< sgt::half >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isNormal();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:
	// sgt::half sgt::half::operator==(const sgt::half v) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in sgt::half sgt::half::operator==(const sgt::half v) const function, expected prototype:\nsgt::half sgt::half::operator==(const sgt::half v) const\nClass arguments details:\narg 1 ID = 31071002\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::half* v_ptr=(Luna< sgt::half >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::half::operator== function");
		}
		const sgt::half v=*v_ptr;

		sgt::half* self=(Luna< sgt::half >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::half sgt::half::operator==(const sgt::half) const. Got : '%s'\n%s",typeid(Luna< sgt::half >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::half stack_lret = self->operator==(v);
		sgt::half* lret = new sgt::half(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::half >::push(L,lret,true);

		return 1;
	}

	// bool sgt::half::operator!=(const sgt::half v) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::half::operator!=(const sgt::half v) const function, expected prototype:\nbool sgt::half::operator!=(const sgt::half v) const\nClass arguments details:\narg 1 ID = 31071002\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::half* v_ptr=(Luna< sgt::half >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::half::operator!= function");
		}
		const sgt::half v=*v_ptr;

		sgt::half* self=(Luna< sgt::half >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::half::operator!=(const sgt::half) const. Got : '%s'\n%s",typeid(Luna< sgt::half >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// sgt::half sgt::half::operator+(const sgt::half v) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luaL_error(L, "luna typecheck failed in sgt::half sgt::half::operator+(const sgt::half v) const function, expected prototype:\nsgt::half sgt::half::operator+(const sgt::half v) const\nClass arguments details:\narg 1 ID = 31071002\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::half* v_ptr=(Luna< sgt::half >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::half::operator+ function");
		}
		const sgt::half v=*v_ptr;

		sgt::half* self=(Luna< sgt::half >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::half sgt::half::operator+(const sgt::half) const. Got : '%s'\n%s",typeid(Luna< sgt::half >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::half stack_lret = self->operator+(v);
		sgt::half* lret = new sgt::half(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::half >::push(L,lret,true);

		return 1;
	}

	// sgt::half sgt::half::operator-(const sgt::half v) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luaL_error(L, "luna typecheck failed in sgt::half sgt::half::operator-(const sgt::half v) const function, expected prototype:\nsgt::half sgt::half::operator-(const sgt::half v) const\nClass arguments details:\narg 1 ID = 31071002\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::half* v_ptr=(Luna< sgt::half >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::half::operator- function");
		}
		const sgt::half v=*v_ptr;

		sgt::half* self=(Luna< sgt::half >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::half sgt::half::operator-(const sgt::half) const. Got : '%s'\n%s",typeid(Luna< sgt::half >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::half stack_lret = self->operator-(v);
		sgt::half* lret = new sgt::half(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::half >::push(L,lret,true);

		return 1;
	}

	// sgt::half sgt::half::operator*(const sgt::half v) const
	static int _bind___mul(lua_State *L) {
		if (!_lg_typecheck___mul(L)) {
			luaL_error(L, "luna typecheck failed in sgt::half sgt::half::operator*(const sgt::half v) const function, expected prototype:\nsgt::half sgt::half::operator*(const sgt::half v) const\nClass arguments details:\narg 1 ID = 31071002\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::half* v_ptr=(Luna< sgt::half >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::half::operator* function");
		}
		const sgt::half v=*v_ptr;

		sgt::half* self=(Luna< sgt::half >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::half sgt::half::operator*(const sgt::half) const. Got : '%s'\n%s",typeid(Luna< sgt::half >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::half stack_lret = self->operator*(v);
		sgt::half* lret = new sgt::half(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::half >::push(L,lret,true);

		return 1;
	}

	// sgt::half sgt::half::operator/(const sgt::half v) const
	static int _bind___div(lua_State *L) {
		if (!_lg_typecheck___div(L)) {
			luaL_error(L, "luna typecheck failed in sgt::half sgt::half::operator/(const sgt::half v) const function, expected prototype:\nsgt::half sgt::half::operator/(const sgt::half v) const\nClass arguments details:\narg 1 ID = 31071002\n\n%s",luna_dumpStack(L).c_str());
		}

		const sgt::half* v_ptr=(Luna< sgt::half >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in sgt::half::operator/ function");
		}
		const sgt::half v=*v_ptr;

		sgt::half* self=(Luna< sgt::half >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::half sgt::half::operator/(const sgt::half) const. Got : '%s'\n%s",typeid(Luna< sgt::half >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::half stack_lret = self->operator/(v);
		sgt::half* lret = new sgt::half(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::half >::push(L,lret,true);

		return 1;
	}


};

sgt::half* LunaTraits< sgt::half >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_half::_bind_ctor(L);
}

void LunaTraits< sgt::half >::_bind_dtor(sgt::half* obj) {
	delete obj;
}

const char LunaTraits< sgt::half >::className[] = "half";
const char LunaTraits< sgt::half >::fullName[] = "sgt::half";
const char LunaTraits< sgt::half >::moduleName[] = "sgt";
const char* LunaTraits< sgt::half >::parents[] = {0};
const int LunaTraits< sgt::half >::hash = 31071002;
const int LunaTraits< sgt::half >::uniqueIDs[] = {31071002,0};

luna_RegType LunaTraits< sgt::half >::methods[] = {
	{"toFloat", &luna_wrapper_sgt_half::_bind_toFloat},
	{"isNaN", &luna_wrapper_sgt_half::_bind_isNaN},
	{"isFinite", &luna_wrapper_sgt_half::_bind_isFinite},
	{"isInf", &luna_wrapper_sgt_half::_bind_isInf},
	{"isNormal", &luna_wrapper_sgt_half::_bind_isNormal},
	{"__eq", &luna_wrapper_sgt_half::_bind___eq},
	{"op_neq", &luna_wrapper_sgt_half::_bind_op_neq},
	{"__add", &luna_wrapper_sgt_half::_bind___add},
	{"__sub", &luna_wrapper_sgt_half::_bind___sub},
	{"__mul", &luna_wrapper_sgt_half::_bind___mul},
	{"__div", &luna_wrapper_sgt_half::_bind___div},
	{"dynCast", &luna_wrapper_sgt_half::_bind_dynCast},
	{"fromVoid", &luna_wrapper_sgt_half::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_half::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::half >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::half >::enumValues[] = {
	{0,0}
};



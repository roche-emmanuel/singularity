#include <plug_common.h>

class luna_wrapper_btVector4 {
public:
	typedef Luna< btVector4 > luna_t;

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

		btVector4* self= (btVector4*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btVector4 >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btVector3 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btVector3(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btVector4* ptr= dynamic_cast< btVector4* >(Luna< btVector3 >::check(L,1));
		btVector4* ptr= luna_caster< btVector3, btVector4 >::cast(Luna< btVector3 >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btVector4 >::push(L,ptr,false);
		return 1;
	};


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


	// Function checkers:
	inline static bool _lg_typecheck_absolute4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getW(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_maxAxis4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_minAxis4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_closestAxis4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setValue(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btVector4::btVector4()
	static btVector4* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector4::btVector4() function, expected prototype:\nbtVector4::btVector4()\nClass arguments details:\n");
		}


		return new btVector4();
	}

	// btVector4::btVector4(const float & _x, const float & _y, const float & _z, const float & _w)
	static btVector4* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector4::btVector4(const float & _x, const float & _y, const float & _z, const float & _w) function, expected prototype:\nbtVector4::btVector4(const float & _x, const float & _y, const float & _z, const float & _w)\nClass arguments details:\n");
		}

		const float _x=(const float)lua_tonumber(L,1);
		const float _y=(const float)lua_tonumber(L,2);
		const float _z=(const float)lua_tonumber(L,3);
		const float _w=(const float)lua_tonumber(L,4);

		return new btVector4(_x, _y, _z, _w);
	}

	// Overload binder for btVector4::btVector4
	static btVector4* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btVector4, cannot match any of the overloads for function btVector4:\n  btVector4()\n  btVector4(const float &, const float &, const float &, const float &)\n");
		return NULL;
	}


	// Function binds:
	// btVector4 btVector4::absolute4() const
	static int _bind_absolute4(lua_State *L) {
		if (!_lg_typecheck_absolute4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector4 btVector4::absolute4() const function, expected prototype:\nbtVector4 btVector4::absolute4() const\nClass arguments details:\n");
		}


		btVector4* self=Luna< btVector3 >::checkSubType< btVector4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector4 btVector4::absolute4() const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		btVector4 stack_lret = self->absolute4();
		btVector4* lret = new btVector4(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector4 >::push(L,lret,true);

		return 1;
	}

	// float btVector4::getW() const
	static int _bind_getW(lua_State *L) {
		if (!_lg_typecheck_getW(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btVector4::getW() const function, expected prototype:\nfloat btVector4::getW() const\nClass arguments details:\n");
		}


		btVector4* self=Luna< btVector3 >::checkSubType< btVector4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btVector4::getW() const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		float lret = self->getW();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btVector4::maxAxis4() const
	static int _bind_maxAxis4(lua_State *L) {
		if (!_lg_typecheck_maxAxis4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btVector4::maxAxis4() const function, expected prototype:\nint btVector4::maxAxis4() const\nClass arguments details:\n");
		}


		btVector4* self=Luna< btVector3 >::checkSubType< btVector4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btVector4::maxAxis4() const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		int lret = self->maxAxis4();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btVector4::minAxis4() const
	static int _bind_minAxis4(lua_State *L) {
		if (!_lg_typecheck_minAxis4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btVector4::minAxis4() const function, expected prototype:\nint btVector4::minAxis4() const\nClass arguments details:\n");
		}


		btVector4* self=Luna< btVector3 >::checkSubType< btVector4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btVector4::minAxis4() const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		int lret = self->minAxis4();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btVector4::closestAxis4() const
	static int _bind_closestAxis4(lua_State *L) {
		if (!_lg_typecheck_closestAxis4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btVector4::closestAxis4() const function, expected prototype:\nint btVector4::closestAxis4() const\nClass arguments details:\n");
		}


		btVector4* self=Luna< btVector3 >::checkSubType< btVector4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btVector4::closestAxis4() const. Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		int lret = self->closestAxis4();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btVector4::setValue(const float & _x, const float & _y, const float & _z, const float & _w)
	static int _bind_setValue(lua_State *L) {
		if (!_lg_typecheck_setValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btVector4::setValue(const float & _x, const float & _y, const float & _z, const float & _w) function, expected prototype:\nvoid btVector4::setValue(const float & _x, const float & _y, const float & _z, const float & _w)\nClass arguments details:\n");
		}

		const float _x=(const float)lua_tonumber(L,2);
		const float _y=(const float)lua_tonumber(L,3);
		const float _z=(const float)lua_tonumber(L,4);
		const float _w=(const float)lua_tonumber(L,5);

		btVector4* self=Luna< btVector3 >::checkSubType< btVector4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btVector4::setValue(const float &, const float &, const float &, const float &). Got : '%s'",typeid(Luna< btVector3 >::check(L,1)).name());
		}
		self->setValue(_x, _y, _z, _w);

		return 0;
	}


	// Operator binds:

};

btVector4* LunaTraits< btVector4 >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btVector4::_bind_ctor(L);
}

void LunaTraits< btVector4 >::_bind_dtor(btVector4* obj) {
	delete obj;
}

const char LunaTraits< btVector4 >::className[] = "btVector4";
const char LunaTraits< btVector4 >::fullName[] = "btVector4";
const char LunaTraits< btVector4 >::moduleName[] = "bullet";
const char* LunaTraits< btVector4 >::parents[] = {"bullet.btVector3", 0};
const int LunaTraits< btVector4 >::hash = 91544892;
const int LunaTraits< btVector4 >::uniqueIDs[] = {91544891,0};

luna_RegType LunaTraits< btVector4 >::methods[] = {
	{"absolute4", &luna_wrapper_btVector4::_bind_absolute4},
	{"getW", &luna_wrapper_btVector4::_bind_getW},
	{"maxAxis4", &luna_wrapper_btVector4::_bind_maxAxis4},
	{"minAxis4", &luna_wrapper_btVector4::_bind_minAxis4},
	{"closestAxis4", &luna_wrapper_btVector4::_bind_closestAxis4},
	{"setValue", &luna_wrapper_btVector4::_bind_setValue},
	{"fromVoid", &luna_wrapper_btVector4::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btVector4::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btVector4 >::converters[] = {
	{"btVector3", &luna_wrapper_btVector4::_cast_from_btVector3},
	{0,0}
};

luna_RegEnumType LunaTraits< btVector4 >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

class luna_wrapper_btClock {
public:
	typedef Luna< btClock > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,61540014) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btClock*)");
		}

		btClock* rhs =(Luna< btClock >::check(L,2));
		btClock* self=(Luna< btClock >::check(L,1));
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		btClock* self= (btClock*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btClock >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,61540014) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btClock >::check(L,1));
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

		btClock* self=(Luna< btClock >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btClock");
		
		return luna_dynamicCast(L,converters,"btClock",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,61540014) ) return false;
		if( (!(Luna< btClock >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTimeMilliseconds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTimeMicroseconds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,61540014) ) return false;
		return true;
	}


	// Constructor binds:
	// btClock::btClock()
	static btClock* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btClock::btClock() function, expected prototype:\nbtClock::btClock()\nClass arguments details:\n");
		}


		return new btClock();
	}

	// btClock::btClock(const btClock & other)
	static btClock* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btClock::btClock(const btClock & other) function, expected prototype:\nbtClock::btClock(const btClock & other)\nClass arguments details:\narg 1 ID = 61540014\n");
		}

		const btClock* other_ptr=(Luna< btClock >::check(L,1));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in btClock::btClock function");
		}
		const btClock & other=*other_ptr;

		return new btClock(other);
	}

	// Overload binder for btClock::btClock
	static btClock* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btClock, cannot match any of the overloads for function btClock:\n  btClock()\n  btClock(const btClock &)\n");
		return NULL;
	}


	// Function binds:
	// void btClock::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btClock::reset() function, expected prototype:\nvoid btClock::reset()\nClass arguments details:\n");
		}


		btClock* self=(Luna< btClock >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btClock::reset(). Got : '%s'",typeid(Luna< btClock >::check(L,1)).name());
		}
		self->reset();

		return 0;
	}

	// unsigned long int btClock::getTimeMilliseconds()
	static int _bind_getTimeMilliseconds(lua_State *L) {
		if (!_lg_typecheck_getTimeMilliseconds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned long int btClock::getTimeMilliseconds() function, expected prototype:\nunsigned long int btClock::getTimeMilliseconds()\nClass arguments details:\n");
		}


		btClock* self=(Luna< btClock >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned long int btClock::getTimeMilliseconds(). Got : '%s'",typeid(Luna< btClock >::check(L,1)).name());
		}
		unsigned long int lret = self->getTimeMilliseconds();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long int btClock::getTimeMicroseconds()
	static int _bind_getTimeMicroseconds(lua_State *L) {
		if (!_lg_typecheck_getTimeMicroseconds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned long int btClock::getTimeMicroseconds() function, expected prototype:\nunsigned long int btClock::getTimeMicroseconds()\nClass arguments details:\n");
		}


		btClock* self=(Luna< btClock >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned long int btClock::getTimeMicroseconds(). Got : '%s'",typeid(Luna< btClock >::check(L,1)).name());
		}
		unsigned long int lret = self->getTimeMicroseconds();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:
	// btClock & btClock::operator=(const btClock & other)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btClock & btClock::operator=(const btClock & other) function, expected prototype:\nbtClock & btClock::operator=(const btClock & other)\nClass arguments details:\narg 1 ID = 61540014\n");
		}

		const btClock* other_ptr=(Luna< btClock >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in btClock::operator= function");
		}
		const btClock & other=*other_ptr;

		btClock* self=(Luna< btClock >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btClock & btClock::operator=(const btClock &). Got : '%s'",typeid(Luna< btClock >::check(L,1)).name());
		}
		const btClock* lret = &self->operator=(other);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btClock >::push(L,lret,false);

		return 1;
	}


};

btClock* LunaTraits< btClock >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btClock::_bind_ctor(L);
}

void LunaTraits< btClock >::_bind_dtor(btClock* obj) {
	delete obj;
}

const char LunaTraits< btClock >::className[] = "btClock";
const char LunaTraits< btClock >::fullName[] = "btClock";
const char LunaTraits< btClock >::moduleName[] = "bullet";
const char* LunaTraits< btClock >::parents[] = {0};
const int LunaTraits< btClock >::hash = 61540014;
const int LunaTraits< btClock >::uniqueIDs[] = {61540014,0};

luna_RegType LunaTraits< btClock >::methods[] = {
	{"reset", &luna_wrapper_btClock::_bind_reset},
	{"getTimeMilliseconds", &luna_wrapper_btClock::_bind_getTimeMilliseconds},
	{"getTimeMicroseconds", &luna_wrapper_btClock::_bind_getTimeMicroseconds},
	{"op_assign", &luna_wrapper_btClock::_bind_op_assign},
	{"dynCast", &luna_wrapper_btClock::_bind_dynCast},
	{"__eq", &luna_wrapper_btClock::_bind___eq},
	{"fromVoid", &luna_wrapper_btClock::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btClock::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btClock >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btClock >::enumValues[] = {
	{0,0}
};



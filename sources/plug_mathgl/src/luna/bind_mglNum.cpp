#include <plug_common.h>

class luna_wrapper_mglNum {
public:
	typedef Luna< mglNum > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18996083) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglNum*)");
		}

		mglNum* rhs =(Luna< mglNum >::check(L,2));
		mglNum* self=(Luna< mglNum >::check(L,1));
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

		mglNum* self= (mglNum*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglNum >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18996083) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< mglNum >::check(L,1));
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

		mglNum* self=(Luna< mglNum >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglNum");
		
		return luna_dynamicCast(L,converters,"mglNum",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_MoveAfter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,18996083)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getD(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getS(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPrev(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setD(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNext(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,18996083)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPrev(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,18996083)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// mglNum::mglNum()
	static mglNum* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglNum::mglNum() function, expected prototype:\nmglNum::mglNum()\nClass arguments details:\n");
		}


		return new mglNum();
	}


	// Function binds:
	// void mglNum::MoveAfter(mglNum * var)
	static int _bind_MoveAfter(lua_State *L) {
		if (!_lg_typecheck_MoveAfter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglNum::MoveAfter(mglNum * var) function, expected prototype:\nvoid mglNum::MoveAfter(mglNum * var)\nClass arguments details:\narg 1 ID = 18996083\n");
		}

		mglNum* var=(Luna< mglNum >::check(L,2));

		mglNum* self=(Luna< mglNum >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglNum::MoveAfter(mglNum *). Got : '%s'",typeid(Luna< mglNum >::check(L,1)).name());
		}
		self->MoveAfter(var);

		return 0;
	}

	// double mglNum::d()
	static int _bind_getD(lua_State *L) {
		if (!_lg_typecheck_getD(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglNum::d() function, expected prototype:\ndouble mglNum::d()\nClass arguments details:\n");
		}


		mglNum* self=(Luna< mglNum >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglNum::d(). Got : '%s'",typeid(Luna< mglNum >::check(L,1)).name());
		}
		double lret = self->d;
		lua_pushnumber(L,lret);

		return 1;
	}

	// std::wstring mglNum::s()
	static int _bind_getS(lua_State *L) {
		if (!_lg_typecheck_getS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::wstring mglNum::s() function, expected prototype:\nstd::wstring mglNum::s()\nClass arguments details:\n");
		}


		mglNum* self=(Luna< mglNum >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::wstring mglNum::s(). Got : '%s'",typeid(Luna< mglNum >::check(L,1)).name());
		}
		std::wstring lret = self->s;
		std::string lret_str = sgt::ws2s(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// mglNum * mglNum::next()
	static int _bind_getNext(lua_State *L) {
		if (!_lg_typecheck_getNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglNum * mglNum::next() function, expected prototype:\nmglNum * mglNum::next()\nClass arguments details:\n");
		}


		mglNum* self=(Luna< mglNum >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglNum * mglNum::next(). Got : '%s'",typeid(Luna< mglNum >::check(L,1)).name());
		}
		mglNum * lret = self->next;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglNum >::push(L,lret,false);

		return 1;
	}

	// mglNum * mglNum::prev()
	static int _bind_getPrev(lua_State *L) {
		if (!_lg_typecheck_getPrev(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglNum * mglNum::prev() function, expected prototype:\nmglNum * mglNum::prev()\nClass arguments details:\n");
		}


		mglNum* self=(Luna< mglNum >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglNum * mglNum::prev(). Got : '%s'",typeid(Luna< mglNum >::check(L,1)).name());
		}
		mglNum * lret = self->prev;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglNum >::push(L,lret,false);

		return 1;
	}

	// void mglNum::d(double value)
	static int _bind_setD(lua_State *L) {
		if (!_lg_typecheck_setD(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglNum::d(double value) function, expected prototype:\nvoid mglNum::d(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		mglNum* self=(Luna< mglNum >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglNum::d(double). Got : '%s'",typeid(Luna< mglNum >::check(L,1)).name());
		}
		self->d = value;

		return 0;
	}

	// void mglNum::s(std::wstring value)
	static int _bind_setS(lua_State *L) {
		if (!_lg_typecheck_setS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglNum::s(std::wstring value) function, expected prototype:\nvoid mglNum::s(std::wstring value)\nClass arguments details:\n");
		}

		std::string value_str(lua_tostring(L,2),lua_objlen(L,2));
		std::wstring value = sgt::s2ws(value_str);

		mglNum* self=(Luna< mglNum >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglNum::s(std::wstring). Got : '%s'",typeid(Luna< mglNum >::check(L,1)).name());
		}
		self->s = value;

		return 0;
	}

	// void mglNum::next(mglNum * value)
	static int _bind_setNext(lua_State *L) {
		if (!_lg_typecheck_setNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglNum::next(mglNum * value) function, expected prototype:\nvoid mglNum::next(mglNum * value)\nClass arguments details:\narg 1 ID = 18996083\n");
		}

		mglNum* value=(Luna< mglNum >::check(L,2));

		mglNum* self=(Luna< mglNum >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglNum::next(mglNum *). Got : '%s'",typeid(Luna< mglNum >::check(L,1)).name());
		}
		self->next = value;

		return 0;
	}

	// void mglNum::prev(mglNum * value)
	static int _bind_setPrev(lua_State *L) {
		if (!_lg_typecheck_setPrev(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglNum::prev(mglNum * value) function, expected prototype:\nvoid mglNum::prev(mglNum * value)\nClass arguments details:\narg 1 ID = 18996083\n");
		}

		mglNum* value=(Luna< mglNum >::check(L,2));

		mglNum* self=(Luna< mglNum >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglNum::prev(mglNum *). Got : '%s'",typeid(Luna< mglNum >::check(L,1)).name());
		}
		self->prev = value;

		return 0;
	}


	// Operator binds:

};

mglNum* LunaTraits< mglNum >::_bind_ctor(lua_State *L) {
	return luna_wrapper_mglNum::_bind_ctor(L);
}

void LunaTraits< mglNum >::_bind_dtor(mglNum* obj) {
	delete obj;
}

const char LunaTraits< mglNum >::className[] = "mglNum";
const char LunaTraits< mglNum >::fullName[] = "mglNum";
const char LunaTraits< mglNum >::moduleName[] = "mathgl";
const char* LunaTraits< mglNum >::parents[] = {0};
const int LunaTraits< mglNum >::hash = 18996083;
const int LunaTraits< mglNum >::uniqueIDs[] = {18996083,0};

luna_RegType LunaTraits< mglNum >::methods[] = {
	{"MoveAfter", &luna_wrapper_mglNum::_bind_MoveAfter},
	{"getD", &luna_wrapper_mglNum::_bind_getD},
	{"getS", &luna_wrapper_mglNum::_bind_getS},
	{"getNext", &luna_wrapper_mglNum::_bind_getNext},
	{"getPrev", &luna_wrapper_mglNum::_bind_getPrev},
	{"setD", &luna_wrapper_mglNum::_bind_setD},
	{"setS", &luna_wrapper_mglNum::_bind_setS},
	{"setNext", &luna_wrapper_mglNum::_bind_setNext},
	{"setPrev", &luna_wrapper_mglNum::_bind_setPrev},
	{"dynCast", &luna_wrapper_mglNum::_bind_dynCast},
	{"__eq", &luna_wrapper_mglNum::_bind___eq},
	{"fromVoid", &luna_wrapper_mglNum::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglNum::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< mglNum >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglNum >::enumValues[] = {
	{0,0}
};



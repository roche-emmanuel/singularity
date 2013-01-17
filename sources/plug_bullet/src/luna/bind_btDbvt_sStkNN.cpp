#include <plug_common.h>

class luna_wrapper_btDbvt_sStkNN {
public:
	typedef Luna< btDbvt::sStkNN > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,26215193) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btDbvt::sStkNN*)");
		}

		btDbvt::sStkNN* rhs =(Luna< btDbvt::sStkNN >::check(L,2));
		btDbvt::sStkNN* self=(Luna< btDbvt::sStkNN >::check(L,1));
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

		btDbvt::sStkNN* self=(Luna< btDbvt::sStkNN >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btDbvt::sStkNN");
		
		return luna_dynamicCast(L,converters,"btDbvt::sStkNN",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,91335778)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btDbvtNode >::check(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91335778)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btDbvtNode >::check(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btDbvt::sStkNN::sStkNN()
	static btDbvt::sStkNN* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDbvt::sStkNN::sStkNN() function, expected prototype:\nbtDbvt::sStkNN::sStkNN()\nClass arguments details:\n");
		}


		return new btDbvt::sStkNN();
	}

	// btDbvt::sStkNN::sStkNN(const btDbvtNode * na, const btDbvtNode * nb)
	static btDbvt::sStkNN* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDbvt::sStkNN::sStkNN(const btDbvtNode * na, const btDbvtNode * nb) function, expected prototype:\nbtDbvt::sStkNN::sStkNN(const btDbvtNode * na, const btDbvtNode * nb)\nClass arguments details:\narg 1 ID = 91335778\narg 2 ID = 91335778\n");
		}

		const btDbvtNode* na=(Luna< btDbvtNode >::check(L,1));
		const btDbvtNode* nb=(Luna< btDbvtNode >::check(L,2));

		return new btDbvt::sStkNN(na, nb);
	}

	// Overload binder for btDbvt::sStkNN::sStkNN
	static btDbvt::sStkNN* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function sStkNN, cannot match any of the overloads for function sStkNN:\n  sStkNN()\n  sStkNN(const btDbvtNode *, const btDbvtNode *)\n");
		return NULL;
	}


	// Function binds:
	// const btDbvtNode * btDbvt::sStkNN::a()
	static int _bind_getA(lua_State *L) {
		if (!_lg_typecheck_getA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btDbvtNode * btDbvt::sStkNN::a() function, expected prototype:\nconst btDbvtNode * btDbvt::sStkNN::a()\nClass arguments details:\n");
		}


		btDbvt::sStkNN* self=(Luna< btDbvt::sStkNN >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btDbvtNode * btDbvt::sStkNN::a(). Got : '%s'",typeid(Luna< btDbvt::sStkNN >::check(L,1)).name());
		}
		const btDbvtNode * lret = self->a;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btDbvtNode >::push(L,lret,false);

		return 1;
	}

	// const btDbvtNode * btDbvt::sStkNN::b()
	static int _bind_getB(lua_State *L) {
		if (!_lg_typecheck_getB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btDbvtNode * btDbvt::sStkNN::b() function, expected prototype:\nconst btDbvtNode * btDbvt::sStkNN::b()\nClass arguments details:\n");
		}


		btDbvt::sStkNN* self=(Luna< btDbvt::sStkNN >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btDbvtNode * btDbvt::sStkNN::b(). Got : '%s'",typeid(Luna< btDbvt::sStkNN >::check(L,1)).name());
		}
		const btDbvtNode * lret = self->b;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btDbvtNode >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

btDbvt::sStkNN* LunaTraits< btDbvt::sStkNN >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btDbvt_sStkNN::_bind_ctor(L);
}

void LunaTraits< btDbvt::sStkNN >::_bind_dtor(btDbvt::sStkNN* obj) {
	delete obj;
}

const char LunaTraits< btDbvt::sStkNN >::className[] = "btDbvt_sStkNN";
const char LunaTraits< btDbvt::sStkNN >::fullName[] = "btDbvt::sStkNN";
const char LunaTraits< btDbvt::sStkNN >::moduleName[] = "btDbvt";
const char* LunaTraits< btDbvt::sStkNN >::parents[] = {0};
const int LunaTraits< btDbvt::sStkNN >::hash = 26215193;
const int LunaTraits< btDbvt::sStkNN >::uniqueIDs[] = {26215193,0};

luna_RegType LunaTraits< btDbvt::sStkNN >::methods[] = {
	{"getA", &luna_wrapper_btDbvt_sStkNN::_bind_getA},
	{"getB", &luna_wrapper_btDbvt_sStkNN::_bind_getB},
	{"dynCast", &luna_wrapper_btDbvt_sStkNN::_bind_dynCast},
	{"__eq", &luna_wrapper_btDbvt_sStkNN::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btDbvt::sStkNN >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btDbvt::sStkNN >::enumValues[] = {
	{0,0}
};


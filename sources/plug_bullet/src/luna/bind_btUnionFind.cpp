#include <plug_common.h>

class luna_wrapper_btUnionFind {
public:
	typedef Luna< btUnionFind > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76872649) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btUnionFind*)");
		}

		btUnionFind* rhs =(Luna< btUnionFind >::check(L,2));
		btUnionFind* self=(Luna< btUnionFind >::check(L,1));
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

		btUnionFind* self= (btUnionFind*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btUnionFind >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76872649) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btUnionFind >::check(L,1));
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

		btUnionFind* self=(Luna< btUnionFind >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btUnionFind");
		
		return luna_dynamicCast(L,converters,"btUnionFind",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_sortIslands(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumElements(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isRoot(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_allocate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Free(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_find_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_find_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_unite(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btUnionFind::btUnionFind()
	static btUnionFind* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btUnionFind::btUnionFind() function, expected prototype:\nbtUnionFind::btUnionFind()\nClass arguments details:\n");
		}


		return new btUnionFind();
	}


	// Function binds:
	// void btUnionFind::sortIslands()
	static int _bind_sortIslands(lua_State *L) {
		if (!_lg_typecheck_sortIslands(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btUnionFind::sortIslands() function, expected prototype:\nvoid btUnionFind::sortIslands()\nClass arguments details:\n");
		}


		btUnionFind* self=(Luna< btUnionFind >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btUnionFind::sortIslands(). Got : '%s'",typeid(Luna< btUnionFind >::check(L,1)).name());
		}
		self->sortIslands();

		return 0;
	}

	// void btUnionFind::reset(int N)
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btUnionFind::reset(int N) function, expected prototype:\nvoid btUnionFind::reset(int N)\nClass arguments details:\n");
		}

		int N=(int)lua_tointeger(L,2);

		btUnionFind* self=(Luna< btUnionFind >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btUnionFind::reset(int). Got : '%s'",typeid(Luna< btUnionFind >::check(L,1)).name());
		}
		self->reset(N);

		return 0;
	}

	// int btUnionFind::getNumElements() const
	static int _bind_getNumElements(lua_State *L) {
		if (!_lg_typecheck_getNumElements(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btUnionFind::getNumElements() const function, expected prototype:\nint btUnionFind::getNumElements() const\nClass arguments details:\n");
		}


		btUnionFind* self=(Luna< btUnionFind >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btUnionFind::getNumElements() const. Got : '%s'",typeid(Luna< btUnionFind >::check(L,1)).name());
		}
		int lret = self->getNumElements();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btUnionFind::isRoot(int x) const
	static int _bind_isRoot(lua_State *L) {
		if (!_lg_typecheck_isRoot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btUnionFind::isRoot(int x) const function, expected prototype:\nbool btUnionFind::isRoot(int x) const\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);

		btUnionFind* self=(Luna< btUnionFind >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btUnionFind::isRoot(int) const. Got : '%s'",typeid(Luna< btUnionFind >::check(L,1)).name());
		}
		bool lret = self->isRoot(x);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// btElement & btUnionFind::getElement(int index)
	static int _bind_getElement_overload_1(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btElement & btUnionFind::getElement(int index) function, expected prototype:\nbtElement & btUnionFind::getElement(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btUnionFind* self=(Luna< btUnionFind >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btElement & btUnionFind::getElement(int). Got : '%s'",typeid(Luna< btUnionFind >::check(L,1)).name());
		}
		const btElement* lret = &self->getElement(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btElement >::push(L,lret,false);

		return 1;
	}

	// const btElement & btUnionFind::getElement(int index) const
	static int _bind_getElement_overload_2(lua_State *L) {
		if (!_lg_typecheck_getElement_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btElement & btUnionFind::getElement(int index) const function, expected prototype:\nconst btElement & btUnionFind::getElement(int index) const\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btUnionFind* self=(Luna< btUnionFind >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btElement & btUnionFind::getElement(int) const. Got : '%s'",typeid(Luna< btUnionFind >::check(L,1)).name());
		}
		const btElement* lret = &self->getElement(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btElement >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btUnionFind::getElement
	static int _bind_getElement(lua_State *L) {
		if (_lg_typecheck_getElement_overload_1(L)) return _bind_getElement_overload_1(L);
		if (_lg_typecheck_getElement_overload_2(L)) return _bind_getElement_overload_2(L);

		luaL_error(L, "error in function getElement, cannot match any of the overloads for function getElement:\n  getElement(int)\n  getElement(int)\n");
		return 0;
	}

	// void btUnionFind::allocate(int N)
	static int _bind_allocate(lua_State *L) {
		if (!_lg_typecheck_allocate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btUnionFind::allocate(int N) function, expected prototype:\nvoid btUnionFind::allocate(int N)\nClass arguments details:\n");
		}

		int N=(int)lua_tointeger(L,2);

		btUnionFind* self=(Luna< btUnionFind >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btUnionFind::allocate(int). Got : '%s'",typeid(Luna< btUnionFind >::check(L,1)).name());
		}
		self->allocate(N);

		return 0;
	}

	// void btUnionFind::Free()
	static int _bind_Free(lua_State *L) {
		if (!_lg_typecheck_Free(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btUnionFind::Free() function, expected prototype:\nvoid btUnionFind::Free()\nClass arguments details:\n");
		}


		btUnionFind* self=(Luna< btUnionFind >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btUnionFind::Free(). Got : '%s'",typeid(Luna< btUnionFind >::check(L,1)).name());
		}
		self->Free();

		return 0;
	}

	// int btUnionFind::find(int p, int q)
	static int _bind_find_overload_1(lua_State *L) {
		if (!_lg_typecheck_find_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btUnionFind::find(int p, int q) function, expected prototype:\nint btUnionFind::find(int p, int q)\nClass arguments details:\n");
		}

		int p=(int)lua_tointeger(L,2);
		int q=(int)lua_tointeger(L,3);

		btUnionFind* self=(Luna< btUnionFind >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btUnionFind::find(int, int). Got : '%s'",typeid(Luna< btUnionFind >::check(L,1)).name());
		}
		int lret = self->find(p, q);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btUnionFind::find(int x)
	static int _bind_find_overload_2(lua_State *L) {
		if (!_lg_typecheck_find_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btUnionFind::find(int x) function, expected prototype:\nint btUnionFind::find(int x)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);

		btUnionFind* self=(Luna< btUnionFind >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btUnionFind::find(int). Got : '%s'",typeid(Luna< btUnionFind >::check(L,1)).name());
		}
		int lret = self->find(x);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for btUnionFind::find
	static int _bind_find(lua_State *L) {
		if (_lg_typecheck_find_overload_1(L)) return _bind_find_overload_1(L);
		if (_lg_typecheck_find_overload_2(L)) return _bind_find_overload_2(L);

		luaL_error(L, "error in function find, cannot match any of the overloads for function find:\n  find(int, int)\n  find(int)\n");
		return 0;
	}

	// void btUnionFind::unite(int p, int q)
	static int _bind_unite(lua_State *L) {
		if (!_lg_typecheck_unite(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btUnionFind::unite(int p, int q) function, expected prototype:\nvoid btUnionFind::unite(int p, int q)\nClass arguments details:\n");
		}

		int p=(int)lua_tointeger(L,2);
		int q=(int)lua_tointeger(L,3);

		btUnionFind* self=(Luna< btUnionFind >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btUnionFind::unite(int, int). Got : '%s'",typeid(Luna< btUnionFind >::check(L,1)).name());
		}
		self->unite(p, q);

		return 0;
	}


	// Operator binds:

};

btUnionFind* LunaTraits< btUnionFind >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btUnionFind::_bind_ctor(L);
}

void LunaTraits< btUnionFind >::_bind_dtor(btUnionFind* obj) {
	delete obj;
}

const char LunaTraits< btUnionFind >::className[] = "btUnionFind";
const char LunaTraits< btUnionFind >::fullName[] = "btUnionFind";
const char LunaTraits< btUnionFind >::moduleName[] = "bullet";
const char* LunaTraits< btUnionFind >::parents[] = {0};
const int LunaTraits< btUnionFind >::hash = 76872649;
const int LunaTraits< btUnionFind >::uniqueIDs[] = {76872649,0};

luna_RegType LunaTraits< btUnionFind >::methods[] = {
	{"sortIslands", &luna_wrapper_btUnionFind::_bind_sortIslands},
	{"reset", &luna_wrapper_btUnionFind::_bind_reset},
	{"getNumElements", &luna_wrapper_btUnionFind::_bind_getNumElements},
	{"isRoot", &luna_wrapper_btUnionFind::_bind_isRoot},
	{"getElement", &luna_wrapper_btUnionFind::_bind_getElement},
	{"allocate", &luna_wrapper_btUnionFind::_bind_allocate},
	{"Free", &luna_wrapper_btUnionFind::_bind_Free},
	{"find", &luna_wrapper_btUnionFind::_bind_find},
	{"unite", &luna_wrapper_btUnionFind::_bind_unite},
	{"dynCast", &luna_wrapper_btUnionFind::_bind_dynCast},
	{"__eq", &luna_wrapper_btUnionFind::_bind___eq},
	{"fromVoid", &luna_wrapper_btUnionFind::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btUnionFind::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btUnionFind >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btUnionFind >::enumValues[] = {
	{0,0}
};



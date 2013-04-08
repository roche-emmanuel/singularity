#include <plug_common.h>

class luna_wrapper_btGEN_Link {
public:
	typedef Luna< btGEN_Link > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,26941337) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btGEN_Link*)");
		}

		btGEN_Link* rhs =(Luna< btGEN_Link >::check(L,2));
		btGEN_Link* self=(Luna< btGEN_Link >::check(L,1));
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

		btGEN_Link* self= (btGEN_Link*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btGEN_Link >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,26941337) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btGEN_Link >::check(L,1));
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

		btGEN_Link* self=(Luna< btGEN_Link >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btGEN_Link");
		
		return luna_dynamicCast(L,converters,"btGEN_Link",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,26941337)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btGEN_Link >::check(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,26941337)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btGEN_Link >::check(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getNext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPrev(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isHead(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isTail(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_insertBefore(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,26941337)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_insertAfter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,26941337)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_remove(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btGEN_Link::btGEN_Link()
	static btGEN_Link* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGEN_Link::btGEN_Link() function, expected prototype:\nbtGEN_Link::btGEN_Link()\nClass arguments details:\n");
		}


		return new btGEN_Link();
	}

	// btGEN_Link::btGEN_Link(btGEN_Link * next, btGEN_Link * prev)
	static btGEN_Link* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGEN_Link::btGEN_Link(btGEN_Link * next, btGEN_Link * prev) function, expected prototype:\nbtGEN_Link::btGEN_Link(btGEN_Link * next, btGEN_Link * prev)\nClass arguments details:\narg 1 ID = 26941337\narg 2 ID = 26941337\n");
		}

		btGEN_Link* next=(Luna< btGEN_Link >::check(L,1));
		btGEN_Link* prev=(Luna< btGEN_Link >::check(L,2));

		return new btGEN_Link(next, prev);
	}

	// Overload binder for btGEN_Link::btGEN_Link
	static btGEN_Link* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btGEN_Link, cannot match any of the overloads for function btGEN_Link:\n  btGEN_Link()\n  btGEN_Link(btGEN_Link *, btGEN_Link *)\n");
		return NULL;
	}


	// Function binds:
	// btGEN_Link * btGEN_Link::getNext() const
	static int _bind_getNext(lua_State *L) {
		if (!_lg_typecheck_getNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGEN_Link * btGEN_Link::getNext() const function, expected prototype:\nbtGEN_Link * btGEN_Link::getNext() const\nClass arguments details:\n");
		}


		btGEN_Link* self=(Luna< btGEN_Link >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btGEN_Link * btGEN_Link::getNext() const. Got : '%s'",typeid(Luna< btGEN_Link >::check(L,1)).name());
		}
		btGEN_Link * lret = self->getNext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btGEN_Link >::push(L,lret,false);

		return 1;
	}

	// btGEN_Link * btGEN_Link::getPrev() const
	static int _bind_getPrev(lua_State *L) {
		if (!_lg_typecheck_getPrev(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGEN_Link * btGEN_Link::getPrev() const function, expected prototype:\nbtGEN_Link * btGEN_Link::getPrev() const\nClass arguments details:\n");
		}


		btGEN_Link* self=(Luna< btGEN_Link >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btGEN_Link * btGEN_Link::getPrev() const. Got : '%s'",typeid(Luna< btGEN_Link >::check(L,1)).name());
		}
		btGEN_Link * lret = self->getPrev();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btGEN_Link >::push(L,lret,false);

		return 1;
	}

	// bool btGEN_Link::isHead() const
	static int _bind_isHead(lua_State *L) {
		if (!_lg_typecheck_isHead(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGEN_Link::isHead() const function, expected prototype:\nbool btGEN_Link::isHead() const\nClass arguments details:\n");
		}


		btGEN_Link* self=(Luna< btGEN_Link >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGEN_Link::isHead() const. Got : '%s'",typeid(Luna< btGEN_Link >::check(L,1)).name());
		}
		bool lret = self->isHead();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btGEN_Link::isTail() const
	static int _bind_isTail(lua_State *L) {
		if (!_lg_typecheck_isTail(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGEN_Link::isTail() const function, expected prototype:\nbool btGEN_Link::isTail() const\nClass arguments details:\n");
		}


		btGEN_Link* self=(Luna< btGEN_Link >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGEN_Link::isTail() const. Got : '%s'",typeid(Luna< btGEN_Link >::check(L,1)).name());
		}
		bool lret = self->isTail();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btGEN_Link::insertBefore(btGEN_Link * link)
	static int _bind_insertBefore(lua_State *L) {
		if (!_lg_typecheck_insertBefore(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGEN_Link::insertBefore(btGEN_Link * link) function, expected prototype:\nvoid btGEN_Link::insertBefore(btGEN_Link * link)\nClass arguments details:\narg 1 ID = 26941337\n");
		}

		btGEN_Link* link=(Luna< btGEN_Link >::check(L,2));

		btGEN_Link* self=(Luna< btGEN_Link >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGEN_Link::insertBefore(btGEN_Link *). Got : '%s'",typeid(Luna< btGEN_Link >::check(L,1)).name());
		}
		self->insertBefore(link);

		return 0;
	}

	// void btGEN_Link::insertAfter(btGEN_Link * link)
	static int _bind_insertAfter(lua_State *L) {
		if (!_lg_typecheck_insertAfter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGEN_Link::insertAfter(btGEN_Link * link) function, expected prototype:\nvoid btGEN_Link::insertAfter(btGEN_Link * link)\nClass arguments details:\narg 1 ID = 26941337\n");
		}

		btGEN_Link* link=(Luna< btGEN_Link >::check(L,2));

		btGEN_Link* self=(Luna< btGEN_Link >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGEN_Link::insertAfter(btGEN_Link *). Got : '%s'",typeid(Luna< btGEN_Link >::check(L,1)).name());
		}
		self->insertAfter(link);

		return 0;
	}

	// void btGEN_Link::remove()
	static int _bind_remove(lua_State *L) {
		if (!_lg_typecheck_remove(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGEN_Link::remove() function, expected prototype:\nvoid btGEN_Link::remove()\nClass arguments details:\n");
		}


		btGEN_Link* self=(Luna< btGEN_Link >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGEN_Link::remove(). Got : '%s'",typeid(Luna< btGEN_Link >::check(L,1)).name());
		}
		self->remove();

		return 0;
	}


	// Operator binds:

};

btGEN_Link* LunaTraits< btGEN_Link >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btGEN_Link::_bind_ctor(L);
}

void LunaTraits< btGEN_Link >::_bind_dtor(btGEN_Link* obj) {
	delete obj;
}

const char LunaTraits< btGEN_Link >::className[] = "btGEN_Link";
const char LunaTraits< btGEN_Link >::fullName[] = "btGEN_Link";
const char LunaTraits< btGEN_Link >::moduleName[] = "bullet";
const char* LunaTraits< btGEN_Link >::parents[] = {0};
const int LunaTraits< btGEN_Link >::hash = 26941337;
const int LunaTraits< btGEN_Link >::uniqueIDs[] = {26941337,0};

luna_RegType LunaTraits< btGEN_Link >::methods[] = {
	{"getNext", &luna_wrapper_btGEN_Link::_bind_getNext},
	{"getPrev", &luna_wrapper_btGEN_Link::_bind_getPrev},
	{"isHead", &luna_wrapper_btGEN_Link::_bind_isHead},
	{"isTail", &luna_wrapper_btGEN_Link::_bind_isTail},
	{"insertBefore", &luna_wrapper_btGEN_Link::_bind_insertBefore},
	{"insertAfter", &luna_wrapper_btGEN_Link::_bind_insertAfter},
	{"remove", &luna_wrapper_btGEN_Link::_bind_remove},
	{"dynCast", &luna_wrapper_btGEN_Link::_bind_dynCast},
	{"__eq", &luna_wrapper_btGEN_Link::_bind___eq},
	{"fromVoid", &luna_wrapper_btGEN_Link::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btGEN_Link::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btGEN_Link >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btGEN_Link >::enumValues[] = {
	{0,0}
};



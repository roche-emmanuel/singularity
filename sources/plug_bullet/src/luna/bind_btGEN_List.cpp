#include <plug_common.h>

class luna_wrapper_btGEN_List {
public:
	typedef Luna< btGEN_List > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,26941501) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btGEN_List*)");
		}

		btGEN_List* rhs =(Luna< btGEN_List >::check(L,2));
		btGEN_List* self=(Luna< btGEN_List >::check(L,1));
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

		btGEN_List* self= (btGEN_List*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btGEN_List >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,26941501) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btGEN_List >::check(L,1));
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

		btGEN_List* self=(Luna< btGEN_List >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btGEN_List");
		
		return luna_dynamicCast(L,converters,"btGEN_List",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getHead(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTail(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addHead(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,26941337)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addTail(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,26941337)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btGEN_List::btGEN_List()
	static btGEN_List* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGEN_List::btGEN_List() function, expected prototype:\nbtGEN_List::btGEN_List()\nClass arguments details:\n");
		}


		return new btGEN_List();
	}


	// Function binds:
	// btGEN_Link * btGEN_List::getHead() const
	static int _bind_getHead(lua_State *L) {
		if (!_lg_typecheck_getHead(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGEN_Link * btGEN_List::getHead() const function, expected prototype:\nbtGEN_Link * btGEN_List::getHead() const\nClass arguments details:\n");
		}


		btGEN_List* self=(Luna< btGEN_List >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btGEN_Link * btGEN_List::getHead() const. Got : '%s'",typeid(Luna< btGEN_List >::check(L,1)).name());
		}
		btGEN_Link * lret = self->getHead();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btGEN_Link >::push(L,lret,false);

		return 1;
	}

	// btGEN_Link * btGEN_List::getTail() const
	static int _bind_getTail(lua_State *L) {
		if (!_lg_typecheck_getTail(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGEN_Link * btGEN_List::getTail() const function, expected prototype:\nbtGEN_Link * btGEN_List::getTail() const\nClass arguments details:\n");
		}


		btGEN_List* self=(Luna< btGEN_List >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btGEN_Link * btGEN_List::getTail() const. Got : '%s'",typeid(Luna< btGEN_List >::check(L,1)).name());
		}
		btGEN_Link * lret = self->getTail();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btGEN_Link >::push(L,lret,false);

		return 1;
	}

	// void btGEN_List::addHead(btGEN_Link * link)
	static int _bind_addHead(lua_State *L) {
		if (!_lg_typecheck_addHead(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGEN_List::addHead(btGEN_Link * link) function, expected prototype:\nvoid btGEN_List::addHead(btGEN_Link * link)\nClass arguments details:\narg 1 ID = 26941337\n");
		}

		btGEN_Link* link=(Luna< btGEN_Link >::check(L,2));

		btGEN_List* self=(Luna< btGEN_List >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGEN_List::addHead(btGEN_Link *). Got : '%s'",typeid(Luna< btGEN_List >::check(L,1)).name());
		}
		self->addHead(link);

		return 0;
	}

	// void btGEN_List::addTail(btGEN_Link * link)
	static int _bind_addTail(lua_State *L) {
		if (!_lg_typecheck_addTail(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGEN_List::addTail(btGEN_Link * link) function, expected prototype:\nvoid btGEN_List::addTail(btGEN_Link * link)\nClass arguments details:\narg 1 ID = 26941337\n");
		}

		btGEN_Link* link=(Luna< btGEN_Link >::check(L,2));

		btGEN_List* self=(Luna< btGEN_List >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGEN_List::addTail(btGEN_Link *). Got : '%s'",typeid(Luna< btGEN_List >::check(L,1)).name());
		}
		self->addTail(link);

		return 0;
	}


	// Operator binds:

};

btGEN_List* LunaTraits< btGEN_List >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btGEN_List::_bind_ctor(L);
}

void LunaTraits< btGEN_List >::_bind_dtor(btGEN_List* obj) {
	delete obj;
}

const char LunaTraits< btGEN_List >::className[] = "btGEN_List";
const char LunaTraits< btGEN_List >::fullName[] = "btGEN_List";
const char LunaTraits< btGEN_List >::moduleName[] = "bullet";
const char* LunaTraits< btGEN_List >::parents[] = {0};
const int LunaTraits< btGEN_List >::hash = 26941501;
const int LunaTraits< btGEN_List >::uniqueIDs[] = {26941501,0};

luna_RegType LunaTraits< btGEN_List >::methods[] = {
	{"getHead", &luna_wrapper_btGEN_List::_bind_getHead},
	{"getTail", &luna_wrapper_btGEN_List::_bind_getTail},
	{"addHead", &luna_wrapper_btGEN_List::_bind_addHead},
	{"addTail", &luna_wrapper_btGEN_List::_bind_addTail},
	{"dynCast", &luna_wrapper_btGEN_List::_bind_dynCast},
	{"__eq", &luna_wrapper_btGEN_List::_bind___eq},
	{"fromVoid", &luna_wrapper_btGEN_List::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btGEN_List::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btGEN_List >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btGEN_List >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

class luna_wrapper_b2ContactEdge {
public:
	typedef Luna< b2ContactEdge > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,44405893) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2ContactEdge*)");
		}

		b2ContactEdge* rhs =(Luna< b2ContactEdge >::check(L,2));
		b2ContactEdge* self=(Luna< b2ContactEdge >::check(L,1));
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

		b2ContactEdge* self=(Luna< b2ContactEdge >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2ContactEdge");
		
		return luna_dynamicCast(L,converters,"b2ContactEdge",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getOther(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getContact(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPrev(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setOther(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,53908778)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setContact(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92978558)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPrev(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44405893)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNext(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44405893)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// b2Body * b2ContactEdge::other()
	static int _bind_getOther(lua_State *L) {
		if (!_lg_typecheck_getOther(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Body * b2ContactEdge::other() function, expected prototype:\nb2Body * b2ContactEdge::other()\nClass arguments details:\n");
		}


		b2ContactEdge* self=(Luna< b2ContactEdge >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Body * b2ContactEdge::other(). Got : '%s'",typeid(Luna< b2ContactEdge >::check(L,1)).name());
		}
		b2Body * lret = self->other;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Body >::push(L,lret,false);

		return 1;
	}

	// b2Contact * b2ContactEdge::contact()
	static int _bind_getContact(lua_State *L) {
		if (!_lg_typecheck_getContact(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Contact * b2ContactEdge::contact() function, expected prototype:\nb2Contact * b2ContactEdge::contact()\nClass arguments details:\n");
		}


		b2ContactEdge* self=(Luna< b2ContactEdge >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Contact * b2ContactEdge::contact(). Got : '%s'",typeid(Luna< b2ContactEdge >::check(L,1)).name());
		}
		b2Contact * lret = self->contact;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Contact >::push(L,lret,false);

		return 1;
	}

	// b2ContactEdge * b2ContactEdge::prev()
	static int _bind_getPrev(lua_State *L) {
		if (!_lg_typecheck_getPrev(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2ContactEdge * b2ContactEdge::prev() function, expected prototype:\nb2ContactEdge * b2ContactEdge::prev()\nClass arguments details:\n");
		}


		b2ContactEdge* self=(Luna< b2ContactEdge >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2ContactEdge * b2ContactEdge::prev(). Got : '%s'",typeid(Luna< b2ContactEdge >::check(L,1)).name());
		}
		b2ContactEdge * lret = self->prev;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2ContactEdge >::push(L,lret,false);

		return 1;
	}

	// b2ContactEdge * b2ContactEdge::next()
	static int _bind_getNext(lua_State *L) {
		if (!_lg_typecheck_getNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2ContactEdge * b2ContactEdge::next() function, expected prototype:\nb2ContactEdge * b2ContactEdge::next()\nClass arguments details:\n");
		}


		b2ContactEdge* self=(Luna< b2ContactEdge >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2ContactEdge * b2ContactEdge::next(). Got : '%s'",typeid(Luna< b2ContactEdge >::check(L,1)).name());
		}
		b2ContactEdge * lret = self->next;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2ContactEdge >::push(L,lret,false);

		return 1;
	}

	// void b2ContactEdge::other(b2Body * value)
	static int _bind_setOther(lua_State *L) {
		if (!_lg_typecheck_setOther(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactEdge::other(b2Body * value) function, expected prototype:\nvoid b2ContactEdge::other(b2Body * value)\nClass arguments details:\narg 1 ID = 53908778\n");
		}

		b2Body* value=(Luna< b2Body >::check(L,2));

		b2ContactEdge* self=(Luna< b2ContactEdge >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactEdge::other(b2Body *). Got : '%s'",typeid(Luna< b2ContactEdge >::check(L,1)).name());
		}
		self->other = value;

		return 0;
	}

	// void b2ContactEdge::contact(b2Contact * value)
	static int _bind_setContact(lua_State *L) {
		if (!_lg_typecheck_setContact(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactEdge::contact(b2Contact * value) function, expected prototype:\nvoid b2ContactEdge::contact(b2Contact * value)\nClass arguments details:\narg 1 ID = 92978558\n");
		}

		b2Contact* value=(Luna< b2Contact >::check(L,2));

		b2ContactEdge* self=(Luna< b2ContactEdge >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactEdge::contact(b2Contact *). Got : '%s'",typeid(Luna< b2ContactEdge >::check(L,1)).name());
		}
		self->contact = value;

		return 0;
	}

	// void b2ContactEdge::prev(b2ContactEdge * value)
	static int _bind_setPrev(lua_State *L) {
		if (!_lg_typecheck_setPrev(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactEdge::prev(b2ContactEdge * value) function, expected prototype:\nvoid b2ContactEdge::prev(b2ContactEdge * value)\nClass arguments details:\narg 1 ID = 44405893\n");
		}

		b2ContactEdge* value=(Luna< b2ContactEdge >::check(L,2));

		b2ContactEdge* self=(Luna< b2ContactEdge >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactEdge::prev(b2ContactEdge *). Got : '%s'",typeid(Luna< b2ContactEdge >::check(L,1)).name());
		}
		self->prev = value;

		return 0;
	}

	// void b2ContactEdge::next(b2ContactEdge * value)
	static int _bind_setNext(lua_State *L) {
		if (!_lg_typecheck_setNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactEdge::next(b2ContactEdge * value) function, expected prototype:\nvoid b2ContactEdge::next(b2ContactEdge * value)\nClass arguments details:\narg 1 ID = 44405893\n");
		}

		b2ContactEdge* value=(Luna< b2ContactEdge >::check(L,2));

		b2ContactEdge* self=(Luna< b2ContactEdge >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactEdge::next(b2ContactEdge *). Got : '%s'",typeid(Luna< b2ContactEdge >::check(L,1)).name());
		}
		self->next = value;

		return 0;
	}


	// Operator binds:

};

b2ContactEdge* LunaTraits< b2ContactEdge >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< b2ContactEdge >::_bind_dtor(b2ContactEdge* obj) {
	delete obj;
}

const char LunaTraits< b2ContactEdge >::className[] = "b2ContactEdge";
const char LunaTraits< b2ContactEdge >::fullName[] = "b2ContactEdge";
const char LunaTraits< b2ContactEdge >::moduleName[] = "box2d";
const char* LunaTraits< b2ContactEdge >::parents[] = {0};
const int LunaTraits< b2ContactEdge >::hash = 44405893;
const int LunaTraits< b2ContactEdge >::uniqueIDs[] = {44405893,0};

luna_RegType LunaTraits< b2ContactEdge >::methods[] = {
	{"getOther", &luna_wrapper_b2ContactEdge::_bind_getOther},
	{"getContact", &luna_wrapper_b2ContactEdge::_bind_getContact},
	{"getPrev", &luna_wrapper_b2ContactEdge::_bind_getPrev},
	{"getNext", &luna_wrapper_b2ContactEdge::_bind_getNext},
	{"setOther", &luna_wrapper_b2ContactEdge::_bind_setOther},
	{"setContact", &luna_wrapper_b2ContactEdge::_bind_setContact},
	{"setPrev", &luna_wrapper_b2ContactEdge::_bind_setPrev},
	{"setNext", &luna_wrapper_b2ContactEdge::_bind_setNext},
	{"dynCast", &luna_wrapper_b2ContactEdge::_bind_dynCast},
	{"__eq", &luna_wrapper_b2ContactEdge::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< b2ContactEdge >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2ContactEdge >::enumValues[] = {
	{0,0}
};



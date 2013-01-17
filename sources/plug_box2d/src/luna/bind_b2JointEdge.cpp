#include <plug_common.h>

class luna_wrapper_b2JointEdge {
public:
	typedef Luna< b2JointEdge > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,96518730) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2JointEdge*)");
		}

		b2JointEdge* rhs =(Luna< b2JointEdge >::check(L,2));
		b2JointEdge* self=(Luna< b2JointEdge >::check(L,1));
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

		b2JointEdge* self=(Luna< b2JointEdge >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2JointEdge");
		
		return luna_dynamicCast(L,converters,"b2JointEdge",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getOther(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getJoint(lua_State *L) {
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

	inline static bool _lg_typecheck_setJoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,78564754)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPrev(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,96518730)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNext(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,96518730)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// b2Body * b2JointEdge::other()
	static int _bind_getOther(lua_State *L) {
		if (!_lg_typecheck_getOther(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Body * b2JointEdge::other() function, expected prototype:\nb2Body * b2JointEdge::other()\nClass arguments details:\n");
		}


		b2JointEdge* self=(Luna< b2JointEdge >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Body * b2JointEdge::other(). Got : '%s'",typeid(Luna< b2JointEdge >::check(L,1)).name());
		}
		b2Body * lret = self->other;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Body >::push(L,lret,false);

		return 1;
	}

	// b2Joint * b2JointEdge::joint()
	static int _bind_getJoint(lua_State *L) {
		if (!_lg_typecheck_getJoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Joint * b2JointEdge::joint() function, expected prototype:\nb2Joint * b2JointEdge::joint()\nClass arguments details:\n");
		}


		b2JointEdge* self=(Luna< b2JointEdge >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Joint * b2JointEdge::joint(). Got : '%s'",typeid(Luna< b2JointEdge >::check(L,1)).name());
		}
		b2Joint * lret = self->joint;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Joint >::push(L,lret,false);

		return 1;
	}

	// b2JointEdge * b2JointEdge::prev()
	static int _bind_getPrev(lua_State *L) {
		if (!_lg_typecheck_getPrev(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2JointEdge * b2JointEdge::prev() function, expected prototype:\nb2JointEdge * b2JointEdge::prev()\nClass arguments details:\n");
		}


		b2JointEdge* self=(Luna< b2JointEdge >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2JointEdge * b2JointEdge::prev(). Got : '%s'",typeid(Luna< b2JointEdge >::check(L,1)).name());
		}
		b2JointEdge * lret = self->prev;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2JointEdge >::push(L,lret,false);

		return 1;
	}

	// b2JointEdge * b2JointEdge::next()
	static int _bind_getNext(lua_State *L) {
		if (!_lg_typecheck_getNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2JointEdge * b2JointEdge::next() function, expected prototype:\nb2JointEdge * b2JointEdge::next()\nClass arguments details:\n");
		}


		b2JointEdge* self=(Luna< b2JointEdge >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2JointEdge * b2JointEdge::next(). Got : '%s'",typeid(Luna< b2JointEdge >::check(L,1)).name());
		}
		b2JointEdge * lret = self->next;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2JointEdge >::push(L,lret,false);

		return 1;
	}

	// void b2JointEdge::other(b2Body * value)
	static int _bind_setOther(lua_State *L) {
		if (!_lg_typecheck_setOther(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2JointEdge::other(b2Body * value) function, expected prototype:\nvoid b2JointEdge::other(b2Body * value)\nClass arguments details:\narg 1 ID = 53908778\n");
		}

		b2Body* value=(Luna< b2Body >::check(L,2));

		b2JointEdge* self=(Luna< b2JointEdge >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2JointEdge::other(b2Body *). Got : '%s'",typeid(Luna< b2JointEdge >::check(L,1)).name());
		}
		self->other = value;

		return 0;
	}

	// void b2JointEdge::joint(b2Joint * value)
	static int _bind_setJoint(lua_State *L) {
		if (!_lg_typecheck_setJoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2JointEdge::joint(b2Joint * value) function, expected prototype:\nvoid b2JointEdge::joint(b2Joint * value)\nClass arguments details:\narg 1 ID = 78564754\n");
		}

		b2Joint* value=(Luna< b2Joint >::check(L,2));

		b2JointEdge* self=(Luna< b2JointEdge >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2JointEdge::joint(b2Joint *). Got : '%s'",typeid(Luna< b2JointEdge >::check(L,1)).name());
		}
		self->joint = value;

		return 0;
	}

	// void b2JointEdge::prev(b2JointEdge * value)
	static int _bind_setPrev(lua_State *L) {
		if (!_lg_typecheck_setPrev(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2JointEdge::prev(b2JointEdge * value) function, expected prototype:\nvoid b2JointEdge::prev(b2JointEdge * value)\nClass arguments details:\narg 1 ID = 96518730\n");
		}

		b2JointEdge* value=(Luna< b2JointEdge >::check(L,2));

		b2JointEdge* self=(Luna< b2JointEdge >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2JointEdge::prev(b2JointEdge *). Got : '%s'",typeid(Luna< b2JointEdge >::check(L,1)).name());
		}
		self->prev = value;

		return 0;
	}

	// void b2JointEdge::next(b2JointEdge * value)
	static int _bind_setNext(lua_State *L) {
		if (!_lg_typecheck_setNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2JointEdge::next(b2JointEdge * value) function, expected prototype:\nvoid b2JointEdge::next(b2JointEdge * value)\nClass arguments details:\narg 1 ID = 96518730\n");
		}

		b2JointEdge* value=(Luna< b2JointEdge >::check(L,2));

		b2JointEdge* self=(Luna< b2JointEdge >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2JointEdge::next(b2JointEdge *). Got : '%s'",typeid(Luna< b2JointEdge >::check(L,1)).name());
		}
		self->next = value;

		return 0;
	}


	// Operator binds:

};

b2JointEdge* LunaTraits< b2JointEdge >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2JointEdge >::_bind_dtor(b2JointEdge* obj) {
	delete obj;
}

const char LunaTraits< b2JointEdge >::className[] = "b2JointEdge";
const char LunaTraits< b2JointEdge >::fullName[] = "b2JointEdge";
const char LunaTraits< b2JointEdge >::moduleName[] = "box2d";
const char* LunaTraits< b2JointEdge >::parents[] = {0};
const int LunaTraits< b2JointEdge >::hash = 96518730;
const int LunaTraits< b2JointEdge >::uniqueIDs[] = {96518730,0};

luna_RegType LunaTraits< b2JointEdge >::methods[] = {
	{"getOther", &luna_wrapper_b2JointEdge::_bind_getOther},
	{"getJoint", &luna_wrapper_b2JointEdge::_bind_getJoint},
	{"getPrev", &luna_wrapper_b2JointEdge::_bind_getPrev},
	{"getNext", &luna_wrapper_b2JointEdge::_bind_getNext},
	{"setOther", &luna_wrapper_b2JointEdge::_bind_setOther},
	{"setJoint", &luna_wrapper_b2JointEdge::_bind_setJoint},
	{"setPrev", &luna_wrapper_b2JointEdge::_bind_setPrev},
	{"setNext", &luna_wrapper_b2JointEdge::_bind_setNext},
	{"dynCast", &luna_wrapper_b2JointEdge::_bind_dynCast},
	{"__eq", &luna_wrapper_b2JointEdge::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< b2JointEdge >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2JointEdge >::enumValues[] = {
	{0,0}
};



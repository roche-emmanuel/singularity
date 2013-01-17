#include <plug_common.h>

#include <luna/wrappers/wrapper_b2ContactListener.h>

class luna_wrapper_b2ContactListener {
public:
	typedef Luna< b2ContactListener > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		b2ContactListener* self=(Luna< b2ContactListener >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<b2ContactListener,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,55252344) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2ContactListener*)");
		}

		b2ContactListener* rhs =(Luna< b2ContactListener >::check(L,2));
		b2ContactListener* self=(Luna< b2ContactListener >::check(L,1));
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

		b2ContactListener* self=(Luna< b2ContactListener >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2ContactListener");
		
		return luna_dynamicCast(L,converters,"b2ContactListener",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_BeginContact(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92978558)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EndContact(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92978558)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PreSolve(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92978558)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,73405450)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PostSolve(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92978558)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,12344703)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_BeginContact(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92978558)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_EndContact(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92978558)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_PreSolve(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92978558)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,73405450)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_PostSolve(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92978558)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,12344703)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2ContactListener::b2ContactListener()
	static b2ContactListener* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2ContactListener::b2ContactListener() function, expected prototype:\nb2ContactListener::b2ContactListener()\nClass arguments details:\n");
		}


		return new b2ContactListener();
	}

	// b2ContactListener::b2ContactListener(lua_Table * data)
	static b2ContactListener* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2ContactListener::b2ContactListener(lua_Table * data) function, expected prototype:\nb2ContactListener::b2ContactListener(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_b2ContactListener(L,NULL);
	}

	// Overload binder for b2ContactListener::b2ContactListener
	static b2ContactListener* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function b2ContactListener, cannot match any of the overloads for function b2ContactListener:\n  b2ContactListener()\n  b2ContactListener(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void b2ContactListener::BeginContact(b2Contact * contact)
	static int _bind_BeginContact(lua_State *L) {
		if (!_lg_typecheck_BeginContact(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactListener::BeginContact(b2Contact * contact) function, expected prototype:\nvoid b2ContactListener::BeginContact(b2Contact * contact)\nClass arguments details:\narg 1 ID = 92978558\n");
		}

		b2Contact* contact=(Luna< b2Contact >::check(L,2));

		b2ContactListener* self=(Luna< b2ContactListener >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactListener::BeginContact(b2Contact *). Got : '%s'",typeid(Luna< b2ContactListener >::check(L,1)).name());
		}
		self->BeginContact(contact);

		return 0;
	}

	// void b2ContactListener::EndContact(b2Contact * contact)
	static int _bind_EndContact(lua_State *L) {
		if (!_lg_typecheck_EndContact(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactListener::EndContact(b2Contact * contact) function, expected prototype:\nvoid b2ContactListener::EndContact(b2Contact * contact)\nClass arguments details:\narg 1 ID = 92978558\n");
		}

		b2Contact* contact=(Luna< b2Contact >::check(L,2));

		b2ContactListener* self=(Luna< b2ContactListener >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactListener::EndContact(b2Contact *). Got : '%s'",typeid(Luna< b2ContactListener >::check(L,1)).name());
		}
		self->EndContact(contact);

		return 0;
	}

	// void b2ContactListener::PreSolve(b2Contact * contact, const b2Manifold * oldManifold)
	static int _bind_PreSolve(lua_State *L) {
		if (!_lg_typecheck_PreSolve(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactListener::PreSolve(b2Contact * contact, const b2Manifold * oldManifold) function, expected prototype:\nvoid b2ContactListener::PreSolve(b2Contact * contact, const b2Manifold * oldManifold)\nClass arguments details:\narg 1 ID = 92978558\narg 2 ID = 73405450\n");
		}

		b2Contact* contact=(Luna< b2Contact >::check(L,2));
		const b2Manifold* oldManifold=(Luna< b2Manifold >::check(L,3));

		b2ContactListener* self=(Luna< b2ContactListener >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactListener::PreSolve(b2Contact *, const b2Manifold *). Got : '%s'",typeid(Luna< b2ContactListener >::check(L,1)).name());
		}
		self->PreSolve(contact, oldManifold);

		return 0;
	}

	// void b2ContactListener::PostSolve(b2Contact * contact, const b2ContactImpulse * impulse)
	static int _bind_PostSolve(lua_State *L) {
		if (!_lg_typecheck_PostSolve(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactListener::PostSolve(b2Contact * contact, const b2ContactImpulse * impulse) function, expected prototype:\nvoid b2ContactListener::PostSolve(b2Contact * contact, const b2ContactImpulse * impulse)\nClass arguments details:\narg 1 ID = 92978558\narg 2 ID = 12344703\n");
		}

		b2Contact* contact=(Luna< b2Contact >::check(L,2));
		const b2ContactImpulse* impulse=(Luna< b2ContactImpulse >::check(L,3));

		b2ContactListener* self=(Luna< b2ContactListener >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactListener::PostSolve(b2Contact *, const b2ContactImpulse *). Got : '%s'",typeid(Luna< b2ContactListener >::check(L,1)).name());
		}
		self->PostSolve(contact, impulse);

		return 0;
	}

	// void b2ContactListener::base_BeginContact(b2Contact * contact)
	static int _bind_base_BeginContact(lua_State *L) {
		if (!_lg_typecheck_base_BeginContact(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactListener::base_BeginContact(b2Contact * contact) function, expected prototype:\nvoid b2ContactListener::base_BeginContact(b2Contact * contact)\nClass arguments details:\narg 1 ID = 92978558\n");
		}

		b2Contact* contact=(Luna< b2Contact >::check(L,2));

		b2ContactListener* self=(Luna< b2ContactListener >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactListener::base_BeginContact(b2Contact *). Got : '%s'",typeid(Luna< b2ContactListener >::check(L,1)).name());
		}
		self->b2ContactListener::BeginContact(contact);

		return 0;
	}

	// void b2ContactListener::base_EndContact(b2Contact * contact)
	static int _bind_base_EndContact(lua_State *L) {
		if (!_lg_typecheck_base_EndContact(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactListener::base_EndContact(b2Contact * contact) function, expected prototype:\nvoid b2ContactListener::base_EndContact(b2Contact * contact)\nClass arguments details:\narg 1 ID = 92978558\n");
		}

		b2Contact* contact=(Luna< b2Contact >::check(L,2));

		b2ContactListener* self=(Luna< b2ContactListener >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactListener::base_EndContact(b2Contact *). Got : '%s'",typeid(Luna< b2ContactListener >::check(L,1)).name());
		}
		self->b2ContactListener::EndContact(contact);

		return 0;
	}

	// void b2ContactListener::base_PreSolve(b2Contact * contact, const b2Manifold * oldManifold)
	static int _bind_base_PreSolve(lua_State *L) {
		if (!_lg_typecheck_base_PreSolve(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactListener::base_PreSolve(b2Contact * contact, const b2Manifold * oldManifold) function, expected prototype:\nvoid b2ContactListener::base_PreSolve(b2Contact * contact, const b2Manifold * oldManifold)\nClass arguments details:\narg 1 ID = 92978558\narg 2 ID = 73405450\n");
		}

		b2Contact* contact=(Luna< b2Contact >::check(L,2));
		const b2Manifold* oldManifold=(Luna< b2Manifold >::check(L,3));

		b2ContactListener* self=(Luna< b2ContactListener >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactListener::base_PreSolve(b2Contact *, const b2Manifold *). Got : '%s'",typeid(Luna< b2ContactListener >::check(L,1)).name());
		}
		self->b2ContactListener::PreSolve(contact, oldManifold);

		return 0;
	}

	// void b2ContactListener::base_PostSolve(b2Contact * contact, const b2ContactImpulse * impulse)
	static int _bind_base_PostSolve(lua_State *L) {
		if (!_lg_typecheck_base_PostSolve(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactListener::base_PostSolve(b2Contact * contact, const b2ContactImpulse * impulse) function, expected prototype:\nvoid b2ContactListener::base_PostSolve(b2Contact * contact, const b2ContactImpulse * impulse)\nClass arguments details:\narg 1 ID = 92978558\narg 2 ID = 12344703\n");
		}

		b2Contact* contact=(Luna< b2Contact >::check(L,2));
		const b2ContactImpulse* impulse=(Luna< b2ContactImpulse >::check(L,3));

		b2ContactListener* self=(Luna< b2ContactListener >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactListener::base_PostSolve(b2Contact *, const b2ContactImpulse *). Got : '%s'",typeid(Luna< b2ContactListener >::check(L,1)).name());
		}
		self->b2ContactListener::PostSolve(contact, impulse);

		return 0;
	}


	// Operator binds:

};

b2ContactListener* LunaTraits< b2ContactListener >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2ContactListener::_bind_ctor(L);
}

void LunaTraits< b2ContactListener >::_bind_dtor(b2ContactListener* obj) {
	delete obj;
}

const char LunaTraits< b2ContactListener >::className[] = "b2ContactListener";
const char LunaTraits< b2ContactListener >::fullName[] = "b2ContactListener";
const char LunaTraits< b2ContactListener >::moduleName[] = "box2d";
const char* LunaTraits< b2ContactListener >::parents[] = {0};
const int LunaTraits< b2ContactListener >::hash = 55252344;
const int LunaTraits< b2ContactListener >::uniqueIDs[] = {55252344,0};

luna_RegType LunaTraits< b2ContactListener >::methods[] = {
	{"BeginContact", &luna_wrapper_b2ContactListener::_bind_BeginContact},
	{"EndContact", &luna_wrapper_b2ContactListener::_bind_EndContact},
	{"PreSolve", &luna_wrapper_b2ContactListener::_bind_PreSolve},
	{"PostSolve", &luna_wrapper_b2ContactListener::_bind_PostSolve},
	{"base_BeginContact", &luna_wrapper_b2ContactListener::_bind_base_BeginContact},
	{"base_EndContact", &luna_wrapper_b2ContactListener::_bind_base_EndContact},
	{"base_PreSolve", &luna_wrapper_b2ContactListener::_bind_base_PreSolve},
	{"base_PostSolve", &luna_wrapper_b2ContactListener::_bind_base_PostSolve},
	{"dynCast", &luna_wrapper_b2ContactListener::_bind_dynCast},
	{"__eq", &luna_wrapper_b2ContactListener::_bind___eq},
	{"getTable", &luna_wrapper_b2ContactListener::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< b2ContactListener >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2ContactListener >::enumValues[] = {
	{0,0}
};



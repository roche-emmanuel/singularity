#include <plug_common.h>

#include <luna/wrappers/wrapper_b2PolygonAndCircleContact.h>

class luna_wrapper_b2PolygonAndCircleContact {
public:
	typedef Luna< b2PolygonAndCircleContact > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		b2Contact* self=(Luna< b2Contact >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<b2Contact,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		b2PolygonAndCircleContact* self= (b2PolygonAndCircleContact*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2PolygonAndCircleContact >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92978558) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< b2Contact >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_b2Contact(lua_State *L) {
		// all checked are already performed before reaching this point.
		//b2PolygonAndCircleContact* ptr= dynamic_cast< b2PolygonAndCircleContact* >(Luna< b2Contact >::check(L,1));
		b2PolygonAndCircleContact* ptr= luna_caster< b2Contact, b2PolygonAndCircleContact >::cast(Luna< b2Contact >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< b2PolygonAndCircleContact >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,92969381)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< b2Fixture >::check(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92969381)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< b2Fixture >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92969381)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< b2Fixture >::check(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,92969381)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< b2Fixture >::check(L,3)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,92969381)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,92969381)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,76186022)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Destroy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,92978558)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,76186022)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Evaluate(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,73405450)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,44090970) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,44090970) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Evaluate(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,73405450)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,44090970) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,44090970) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2PolygonAndCircleContact::b2PolygonAndCircleContact(b2Fixture * fixtureA, b2Fixture * fixtureB)
	static b2PolygonAndCircleContact* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in b2PolygonAndCircleContact::b2PolygonAndCircleContact(b2Fixture * fixtureA, b2Fixture * fixtureB) function, expected prototype:\nb2PolygonAndCircleContact::b2PolygonAndCircleContact(b2Fixture * fixtureA, b2Fixture * fixtureB)\nClass arguments details:\narg 1 ID = 92969381\narg 2 ID = 92969381\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Fixture* fixtureA=(Luna< b2Fixture >::check(L,1));
		b2Fixture* fixtureB=(Luna< b2Fixture >::check(L,2));

		return new b2PolygonAndCircleContact(fixtureA, fixtureB);
	}

	// b2PolygonAndCircleContact::b2PolygonAndCircleContact(lua_Table * data, b2Fixture * fixtureA, b2Fixture * fixtureB)
	static b2PolygonAndCircleContact* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in b2PolygonAndCircleContact::b2PolygonAndCircleContact(lua_Table * data, b2Fixture * fixtureA, b2Fixture * fixtureB) function, expected prototype:\nb2PolygonAndCircleContact::b2PolygonAndCircleContact(lua_Table * data, b2Fixture * fixtureA, b2Fixture * fixtureB)\nClass arguments details:\narg 2 ID = 92969381\narg 3 ID = 92969381\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Fixture* fixtureA=(Luna< b2Fixture >::check(L,2));
		b2Fixture* fixtureB=(Luna< b2Fixture >::check(L,3));

		return new wrapper_b2PolygonAndCircleContact(L,NULL, fixtureA, fixtureB);
	}

	// Overload binder for b2PolygonAndCircleContact::b2PolygonAndCircleContact
	static b2PolygonAndCircleContact* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function b2PolygonAndCircleContact, cannot match any of the overloads for function b2PolygonAndCircleContact:\n  b2PolygonAndCircleContact(b2Fixture *, b2Fixture *)\n  b2PolygonAndCircleContact(lua_Table *, b2Fixture *, b2Fixture *)\n");
		return NULL;
	}


	// Function binds:
	// static b2Contact * b2PolygonAndCircleContact::Create(b2Fixture * fixtureA, signed int indexA, b2Fixture * fixtureB, signed int indexB, b2BlockAllocator * allocator)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in static b2Contact * b2PolygonAndCircleContact::Create(b2Fixture * fixtureA, signed int indexA, b2Fixture * fixtureB, signed int indexB, b2BlockAllocator * allocator) function, expected prototype:\nstatic b2Contact * b2PolygonAndCircleContact::Create(b2Fixture * fixtureA, signed int indexA, b2Fixture * fixtureB, signed int indexB, b2BlockAllocator * allocator)\nClass arguments details:\narg 1 ID = 92969381\narg 3 ID = 92969381\narg 5 ID = 76186022\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Fixture* fixtureA=(Luna< b2Fixture >::check(L,1));
		signed int indexA=(signed int)lua_tointeger(L,2);
		b2Fixture* fixtureB=(Luna< b2Fixture >::check(L,3));
		signed int indexB=(signed int)lua_tointeger(L,4);
		b2BlockAllocator* allocator=(Luna< b2BlockAllocator >::check(L,5));

		b2Contact * lret = b2PolygonAndCircleContact::Create(fixtureA, indexA, fixtureB, indexB, allocator);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Contact >::push(L,lret,false);

		return 1;
	}

	// static void b2PolygonAndCircleContact::Destroy(b2Contact * contact, b2BlockAllocator * allocator)
	static int _bind_Destroy(lua_State *L) {
		if (!_lg_typecheck_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in static void b2PolygonAndCircleContact::Destroy(b2Contact * contact, b2BlockAllocator * allocator) function, expected prototype:\nstatic void b2PolygonAndCircleContact::Destroy(b2Contact * contact, b2BlockAllocator * allocator)\nClass arguments details:\narg 1 ID = 92978558\narg 2 ID = 76186022\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Contact* contact=(Luna< b2Contact >::check(L,1));
		b2BlockAllocator* allocator=(Luna< b2BlockAllocator >::check(L,2));

		b2PolygonAndCircleContact::Destroy(contact, allocator);

		return 0;
	}

	// void b2PolygonAndCircleContact::Evaluate(b2Manifold * manifold, const b2Transform & xfA, const b2Transform & xfB)
	static int _bind_Evaluate(lua_State *L) {
		if (!_lg_typecheck_Evaluate(L)) {
			luaL_error(L, "luna typecheck failed in void b2PolygonAndCircleContact::Evaluate(b2Manifold * manifold, const b2Transform & xfA, const b2Transform & xfB) function, expected prototype:\nvoid b2PolygonAndCircleContact::Evaluate(b2Manifold * manifold, const b2Transform & xfA, const b2Transform & xfB)\nClass arguments details:\narg 1 ID = 73405450\narg 2 ID = 44090970\narg 3 ID = 44090970\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Manifold* manifold=(Luna< b2Manifold >::check(L,2));
		const b2Transform* xfA_ptr=(Luna< b2Transform >::check(L,3));
		if( !xfA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg xfA in b2PolygonAndCircleContact::Evaluate function");
		}
		const b2Transform & xfA=*xfA_ptr;
		const b2Transform* xfB_ptr=(Luna< b2Transform >::check(L,4));
		if( !xfB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg xfB in b2PolygonAndCircleContact::Evaluate function");
		}
		const b2Transform & xfB=*xfB_ptr;

		b2PolygonAndCircleContact* self=Luna< b2Contact >::checkSubType< b2PolygonAndCircleContact >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2PolygonAndCircleContact::Evaluate(b2Manifold *, const b2Transform &, const b2Transform &). Got : '%s'\n%s",typeid(Luna< b2Contact >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Evaluate(manifold, xfA, xfB);

		return 0;
	}

	// void b2PolygonAndCircleContact::base_Evaluate(b2Manifold * manifold, const b2Transform & xfA, const b2Transform & xfB)
	static int _bind_base_Evaluate(lua_State *L) {
		if (!_lg_typecheck_base_Evaluate(L)) {
			luaL_error(L, "luna typecheck failed in void b2PolygonAndCircleContact::base_Evaluate(b2Manifold * manifold, const b2Transform & xfA, const b2Transform & xfB) function, expected prototype:\nvoid b2PolygonAndCircleContact::base_Evaluate(b2Manifold * manifold, const b2Transform & xfA, const b2Transform & xfB)\nClass arguments details:\narg 1 ID = 73405450\narg 2 ID = 44090970\narg 3 ID = 44090970\n\n%s",luna_dumpStack(L).c_str());
		}

		b2Manifold* manifold=(Luna< b2Manifold >::check(L,2));
		const b2Transform* xfA_ptr=(Luna< b2Transform >::check(L,3));
		if( !xfA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg xfA in b2PolygonAndCircleContact::base_Evaluate function");
		}
		const b2Transform & xfA=*xfA_ptr;
		const b2Transform* xfB_ptr=(Luna< b2Transform >::check(L,4));
		if( !xfB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg xfB in b2PolygonAndCircleContact::base_Evaluate function");
		}
		const b2Transform & xfB=*xfB_ptr;

		b2PolygonAndCircleContact* self=Luna< b2Contact >::checkSubType< b2PolygonAndCircleContact >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2PolygonAndCircleContact::base_Evaluate(b2Manifold *, const b2Transform &, const b2Transform &). Got : '%s'\n%s",typeid(Luna< b2Contact >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->b2PolygonAndCircleContact::Evaluate(manifold, xfA, xfB);

		return 0;
	}


	// Operator binds:

};

b2PolygonAndCircleContact* LunaTraits< b2PolygonAndCircleContact >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2PolygonAndCircleContact::_bind_ctor(L);
}

void LunaTraits< b2PolygonAndCircleContact >::_bind_dtor(b2PolygonAndCircleContact* obj) {
	delete obj;
}

const char LunaTraits< b2PolygonAndCircleContact >::className[] = "b2PolygonAndCircleContact";
const char LunaTraits< b2PolygonAndCircleContact >::fullName[] = "b2PolygonAndCircleContact";
const char LunaTraits< b2PolygonAndCircleContact >::moduleName[] = "box2d";
const char* LunaTraits< b2PolygonAndCircleContact >::parents[] = {"box2d.b2Contact", 0};
const int LunaTraits< b2PolygonAndCircleContact >::hash = 9412481;
const int LunaTraits< b2PolygonAndCircleContact >::uniqueIDs[] = {92978558,0};

luna_RegType LunaTraits< b2PolygonAndCircleContact >::methods[] = {
	{"Create", &luna_wrapper_b2PolygonAndCircleContact::_bind_Create},
	{"Destroy", &luna_wrapper_b2PolygonAndCircleContact::_bind_Destroy},
	{"Evaluate", &luna_wrapper_b2PolygonAndCircleContact::_bind_Evaluate},
	{"base_Evaluate", &luna_wrapper_b2PolygonAndCircleContact::_bind_base_Evaluate},
	{"fromVoid", &luna_wrapper_b2PolygonAndCircleContact::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2PolygonAndCircleContact::_bind_asVoid},
	{"getTable", &luna_wrapper_b2PolygonAndCircleContact::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< b2PolygonAndCircleContact >::converters[] = {
	{"b2Contact", &luna_wrapper_b2PolygonAndCircleContact::_cast_from_b2Contact},
	{0,0}
};

luna_RegEnumType LunaTraits< b2PolygonAndCircleContact >::enumValues[] = {
	{0,0}
};



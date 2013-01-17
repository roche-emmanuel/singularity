#include <plug_common.h>

class luna_wrapper_b2ContactManager {
public:
	typedef Luna< b2ContactManager > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,16361077) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2ContactManager*)");
		}

		b2ContactManager* rhs =(Luna< b2ContactManager >::check(L,2));
		b2ContactManager* self=(Luna< b2ContactManager >::check(L,1));
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

		b2ContactManager* self=(Luna< b2ContactManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2ContactManager");
		
		return luna_dynamicCast(L,converters,"b2ContactManager",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddPair(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindNewContacts(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Destroy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92978558)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Collide(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_broadPhase(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_contactList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_contactCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_contactFilter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_contactListener(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_allocator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_broadPhase(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,95168430) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_contactList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92978558)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_contactCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_contactFilter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,7470542)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_contactListener(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,55252344)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setM_allocator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,76186022)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2ContactManager::b2ContactManager()
	static b2ContactManager* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2ContactManager::b2ContactManager() function, expected prototype:\nb2ContactManager::b2ContactManager()\nClass arguments details:\n");
		}


		return new b2ContactManager();
	}


	// Function binds:
	// void b2ContactManager::AddPair(void * proxyUserDataA, void * proxyUserDataB)
	static int _bind_AddPair(lua_State *L) {
		if (!_lg_typecheck_AddPair(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactManager::AddPair(void * proxyUserDataA, void * proxyUserDataB) function, expected prototype:\nvoid b2ContactManager::AddPair(void * proxyUserDataA, void * proxyUserDataB)\nClass arguments details:\n");
		}

		void* proxyUserDataA=(Luna< void >::check(L,2));
		void* proxyUserDataB=(Luna< void >::check(L,3));

		b2ContactManager* self=(Luna< b2ContactManager >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactManager::AddPair(void *, void *). Got : '%s'",typeid(Luna< b2ContactManager >::check(L,1)).name());
		}
		self->AddPair(proxyUserDataA, proxyUserDataB);

		return 0;
	}

	// void b2ContactManager::FindNewContacts()
	static int _bind_FindNewContacts(lua_State *L) {
		if (!_lg_typecheck_FindNewContacts(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactManager::FindNewContacts() function, expected prototype:\nvoid b2ContactManager::FindNewContacts()\nClass arguments details:\n");
		}


		b2ContactManager* self=(Luna< b2ContactManager >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactManager::FindNewContacts(). Got : '%s'",typeid(Luna< b2ContactManager >::check(L,1)).name());
		}
		self->FindNewContacts();

		return 0;
	}

	// void b2ContactManager::Destroy(b2Contact * c)
	static int _bind_Destroy(lua_State *L) {
		if (!_lg_typecheck_Destroy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactManager::Destroy(b2Contact * c) function, expected prototype:\nvoid b2ContactManager::Destroy(b2Contact * c)\nClass arguments details:\narg 1 ID = 92978558\n");
		}

		b2Contact* c=(Luna< b2Contact >::check(L,2));

		b2ContactManager* self=(Luna< b2ContactManager >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactManager::Destroy(b2Contact *). Got : '%s'",typeid(Luna< b2ContactManager >::check(L,1)).name());
		}
		self->Destroy(c);

		return 0;
	}

	// void b2ContactManager::Collide()
	static int _bind_Collide(lua_State *L) {
		if (!_lg_typecheck_Collide(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactManager::Collide() function, expected prototype:\nvoid b2ContactManager::Collide()\nClass arguments details:\n");
		}


		b2ContactManager* self=(Luna< b2ContactManager >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactManager::Collide(). Got : '%s'",typeid(Luna< b2ContactManager >::check(L,1)).name());
		}
		self->Collide();

		return 0;
	}

	// b2BroadPhase b2ContactManager::m_broadPhase()
	static int _bind_getM_broadPhase(lua_State *L) {
		if (!_lg_typecheck_getM_broadPhase(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2BroadPhase b2ContactManager::m_broadPhase() function, expected prototype:\nb2BroadPhase b2ContactManager::m_broadPhase()\nClass arguments details:\n");
		}


		b2ContactManager* self=(Luna< b2ContactManager >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2BroadPhase b2ContactManager::m_broadPhase(). Got : '%s'",typeid(Luna< b2ContactManager >::check(L,1)).name());
		}
		const b2BroadPhase* lret = &self->m_broadPhase;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2BroadPhase >::push(L,lret,false);

		return 1;
	}

	// b2Contact * b2ContactManager::m_contactList()
	static int _bind_getM_contactList(lua_State *L) {
		if (!_lg_typecheck_getM_contactList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2Contact * b2ContactManager::m_contactList() function, expected prototype:\nb2Contact * b2ContactManager::m_contactList()\nClass arguments details:\n");
		}


		b2ContactManager* self=(Luna< b2ContactManager >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2Contact * b2ContactManager::m_contactList(). Got : '%s'",typeid(Luna< b2ContactManager >::check(L,1)).name());
		}
		b2Contact * lret = self->m_contactList;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Contact >::push(L,lret,false);

		return 1;
	}

	// signed int b2ContactManager::m_contactCount()
	static int _bind_getM_contactCount(lua_State *L) {
		if (!_lg_typecheck_getM_contactCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2ContactManager::m_contactCount() function, expected prototype:\nsigned int b2ContactManager::m_contactCount()\nClass arguments details:\n");
		}


		b2ContactManager* self=(Luna< b2ContactManager >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2ContactManager::m_contactCount(). Got : '%s'",typeid(Luna< b2ContactManager >::check(L,1)).name());
		}
		signed int lret = self->m_contactCount;
		lua_pushnumber(L,lret);

		return 1;
	}

	// b2ContactFilter * b2ContactManager::m_contactFilter()
	static int _bind_getM_contactFilter(lua_State *L) {
		if (!_lg_typecheck_getM_contactFilter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2ContactFilter * b2ContactManager::m_contactFilter() function, expected prototype:\nb2ContactFilter * b2ContactManager::m_contactFilter()\nClass arguments details:\n");
		}


		b2ContactManager* self=(Luna< b2ContactManager >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2ContactFilter * b2ContactManager::m_contactFilter(). Got : '%s'",typeid(Luna< b2ContactManager >::check(L,1)).name());
		}
		b2ContactFilter * lret = self->m_contactFilter;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2ContactFilter >::push(L,lret,false);

		return 1;
	}

	// b2ContactListener * b2ContactManager::m_contactListener()
	static int _bind_getM_contactListener(lua_State *L) {
		if (!_lg_typecheck_getM_contactListener(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2ContactListener * b2ContactManager::m_contactListener() function, expected prototype:\nb2ContactListener * b2ContactManager::m_contactListener()\nClass arguments details:\n");
		}


		b2ContactManager* self=(Luna< b2ContactManager >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2ContactListener * b2ContactManager::m_contactListener(). Got : '%s'",typeid(Luna< b2ContactManager >::check(L,1)).name());
		}
		b2ContactListener * lret = self->m_contactListener;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2ContactListener >::push(L,lret,false);

		return 1;
	}

	// b2BlockAllocator * b2ContactManager::m_allocator()
	static int _bind_getM_allocator(lua_State *L) {
		if (!_lg_typecheck_getM_allocator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2BlockAllocator * b2ContactManager::m_allocator() function, expected prototype:\nb2BlockAllocator * b2ContactManager::m_allocator()\nClass arguments details:\n");
		}


		b2ContactManager* self=(Luna< b2ContactManager >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2BlockAllocator * b2ContactManager::m_allocator(). Got : '%s'",typeid(Luna< b2ContactManager >::check(L,1)).name());
		}
		b2BlockAllocator * lret = self->m_allocator;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2BlockAllocator >::push(L,lret,false);

		return 1;
	}

	// void b2ContactManager::m_broadPhase(b2BroadPhase value)
	static int _bind_setM_broadPhase(lua_State *L) {
		if (!_lg_typecheck_setM_broadPhase(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactManager::m_broadPhase(b2BroadPhase value) function, expected prototype:\nvoid b2ContactManager::m_broadPhase(b2BroadPhase value)\nClass arguments details:\narg 1 ID = 95168430\n");
		}

		b2BroadPhase* value_ptr=(Luna< b2BroadPhase >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2ContactManager::m_broadPhase function");
		}
		b2BroadPhase value=*value_ptr;

		b2ContactManager* self=(Luna< b2ContactManager >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactManager::m_broadPhase(b2BroadPhase). Got : '%s'",typeid(Luna< b2ContactManager >::check(L,1)).name());
		}
		self->m_broadPhase = value;

		return 0;
	}

	// void b2ContactManager::m_contactList(b2Contact * value)
	static int _bind_setM_contactList(lua_State *L) {
		if (!_lg_typecheck_setM_contactList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactManager::m_contactList(b2Contact * value) function, expected prototype:\nvoid b2ContactManager::m_contactList(b2Contact * value)\nClass arguments details:\narg 1 ID = 92978558\n");
		}

		b2Contact* value=(Luna< b2Contact >::check(L,2));

		b2ContactManager* self=(Luna< b2ContactManager >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactManager::m_contactList(b2Contact *). Got : '%s'",typeid(Luna< b2ContactManager >::check(L,1)).name());
		}
		self->m_contactList = value;

		return 0;
	}

	// void b2ContactManager::m_contactCount(signed int value)
	static int _bind_setM_contactCount(lua_State *L) {
		if (!_lg_typecheck_setM_contactCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactManager::m_contactCount(signed int value) function, expected prototype:\nvoid b2ContactManager::m_contactCount(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2ContactManager* self=(Luna< b2ContactManager >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactManager::m_contactCount(signed int). Got : '%s'",typeid(Luna< b2ContactManager >::check(L,1)).name());
		}
		self->m_contactCount = value;

		return 0;
	}

	// void b2ContactManager::m_contactFilter(b2ContactFilter * value)
	static int _bind_setM_contactFilter(lua_State *L) {
		if (!_lg_typecheck_setM_contactFilter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactManager::m_contactFilter(b2ContactFilter * value) function, expected prototype:\nvoid b2ContactManager::m_contactFilter(b2ContactFilter * value)\nClass arguments details:\narg 1 ID = 7470542\n");
		}

		b2ContactFilter* value=(Luna< b2ContactFilter >::check(L,2));

		b2ContactManager* self=(Luna< b2ContactManager >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactManager::m_contactFilter(b2ContactFilter *). Got : '%s'",typeid(Luna< b2ContactManager >::check(L,1)).name());
		}
		self->m_contactFilter = value;

		return 0;
	}

	// void b2ContactManager::m_contactListener(b2ContactListener * value)
	static int _bind_setM_contactListener(lua_State *L) {
		if (!_lg_typecheck_setM_contactListener(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactManager::m_contactListener(b2ContactListener * value) function, expected prototype:\nvoid b2ContactManager::m_contactListener(b2ContactListener * value)\nClass arguments details:\narg 1 ID = 55252344\n");
		}

		b2ContactListener* value=(Luna< b2ContactListener >::check(L,2));

		b2ContactManager* self=(Luna< b2ContactManager >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactManager::m_contactListener(b2ContactListener *). Got : '%s'",typeid(Luna< b2ContactManager >::check(L,1)).name());
		}
		self->m_contactListener = value;

		return 0;
	}

	// void b2ContactManager::m_allocator(b2BlockAllocator * value)
	static int _bind_setM_allocator(lua_State *L) {
		if (!_lg_typecheck_setM_allocator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2ContactManager::m_allocator(b2BlockAllocator * value) function, expected prototype:\nvoid b2ContactManager::m_allocator(b2BlockAllocator * value)\nClass arguments details:\narg 1 ID = 76186022\n");
		}

		b2BlockAllocator* value=(Luna< b2BlockAllocator >::check(L,2));

		b2ContactManager* self=(Luna< b2ContactManager >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2ContactManager::m_allocator(b2BlockAllocator *). Got : '%s'",typeid(Luna< b2ContactManager >::check(L,1)).name());
		}
		self->m_allocator = value;

		return 0;
	}


	// Operator binds:

};

b2ContactManager* LunaTraits< b2ContactManager >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2ContactManager::_bind_ctor(L);
}

void LunaTraits< b2ContactManager >::_bind_dtor(b2ContactManager* obj) {
	delete obj;
}

const char LunaTraits< b2ContactManager >::className[] = "b2ContactManager";
const char LunaTraits< b2ContactManager >::fullName[] = "b2ContactManager";
const char LunaTraits< b2ContactManager >::moduleName[] = "box2d";
const char* LunaTraits< b2ContactManager >::parents[] = {0};
const int LunaTraits< b2ContactManager >::hash = 16361077;
const int LunaTraits< b2ContactManager >::uniqueIDs[] = {16361077,0};

luna_RegType LunaTraits< b2ContactManager >::methods[] = {
	{"AddPair", &luna_wrapper_b2ContactManager::_bind_AddPair},
	{"FindNewContacts", &luna_wrapper_b2ContactManager::_bind_FindNewContacts},
	{"Destroy", &luna_wrapper_b2ContactManager::_bind_Destroy},
	{"Collide", &luna_wrapper_b2ContactManager::_bind_Collide},
	{"getM_broadPhase", &luna_wrapper_b2ContactManager::_bind_getM_broadPhase},
	{"getM_contactList", &luna_wrapper_b2ContactManager::_bind_getM_contactList},
	{"getM_contactCount", &luna_wrapper_b2ContactManager::_bind_getM_contactCount},
	{"getM_contactFilter", &luna_wrapper_b2ContactManager::_bind_getM_contactFilter},
	{"getM_contactListener", &luna_wrapper_b2ContactManager::_bind_getM_contactListener},
	{"getM_allocator", &luna_wrapper_b2ContactManager::_bind_getM_allocator},
	{"setM_broadPhase", &luna_wrapper_b2ContactManager::_bind_setM_broadPhase},
	{"setM_contactList", &luna_wrapper_b2ContactManager::_bind_setM_contactList},
	{"setM_contactCount", &luna_wrapper_b2ContactManager::_bind_setM_contactCount},
	{"setM_contactFilter", &luna_wrapper_b2ContactManager::_bind_setM_contactFilter},
	{"setM_contactListener", &luna_wrapper_b2ContactManager::_bind_setM_contactListener},
	{"setM_allocator", &luna_wrapper_b2ContactManager::_bind_setM_allocator},
	{"dynCast", &luna_wrapper_b2ContactManager::_bind_dynCast},
	{"__eq", &luna_wrapper_b2ContactManager::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< b2ContactManager >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2ContactManager >::enumValues[] = {
	{0,0}
};



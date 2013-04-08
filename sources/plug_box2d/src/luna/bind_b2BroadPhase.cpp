#include <plug_common.h>

class luna_wrapper_b2BroadPhase {
public:
	typedef Luna< b2BroadPhase > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,95168430) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2BroadPhase*)");
		}

		b2BroadPhase* rhs =(Luna< b2BroadPhase >::check(L,2));
		b2BroadPhase* self=(Luna< b2BroadPhase >::check(L,1));
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

		b2BroadPhase* self= (b2BroadPhase*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2BroadPhase >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,95168430) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< b2BroadPhase >::check(L,1));
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

		b2BroadPhase* self=(Luna< b2BroadPhase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2BroadPhase");
		
		return luna_dynamicCast(L,converters,"b2BroadPhase",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_CreateProxy(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,53833672) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DestroyProxy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveProxy(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,53833672) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TouchProxy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFatAABB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TestOverlap(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetProxyCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTreeHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTreeBalance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTreeQuality(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2BroadPhase::b2BroadPhase()
	static b2BroadPhase* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2BroadPhase::b2BroadPhase() function, expected prototype:\nb2BroadPhase::b2BroadPhase()\nClass arguments details:\n");
		}


		return new b2BroadPhase();
	}


	// Function binds:
	// signed int b2BroadPhase::CreateProxy(const b2AABB & aabb, void * userData)
	static int _bind_CreateProxy(lua_State *L) {
		if (!_lg_typecheck_CreateProxy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2BroadPhase::CreateProxy(const b2AABB & aabb, void * userData) function, expected prototype:\nsigned int b2BroadPhase::CreateProxy(const b2AABB & aabb, void * userData)\nClass arguments details:\narg 1 ID = 53833672\n");
		}

		const b2AABB* aabb_ptr=(Luna< b2AABB >::check(L,2));
		if( !aabb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabb in b2BroadPhase::CreateProxy function");
		}
		const b2AABB & aabb=*aabb_ptr;
		void* userData=(Luna< void >::check(L,3));

		b2BroadPhase* self=(Luna< b2BroadPhase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2BroadPhase::CreateProxy(const b2AABB &, void *). Got : '%s'",typeid(Luna< b2BroadPhase >::check(L,1)).name());
		}
		signed int lret = self->CreateProxy(aabb, userData);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2BroadPhase::DestroyProxy(signed int proxyId)
	static int _bind_DestroyProxy(lua_State *L) {
		if (!_lg_typecheck_DestroyProxy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2BroadPhase::DestroyProxy(signed int proxyId) function, expected prototype:\nvoid b2BroadPhase::DestroyProxy(signed int proxyId)\nClass arguments details:\n");
		}

		signed int proxyId=(signed int)lua_tointeger(L,2);

		b2BroadPhase* self=(Luna< b2BroadPhase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2BroadPhase::DestroyProxy(signed int). Got : '%s'",typeid(Luna< b2BroadPhase >::check(L,1)).name());
		}
		self->DestroyProxy(proxyId);

		return 0;
	}

	// void b2BroadPhase::MoveProxy(signed int proxyId, const b2AABB & aabb, const b2Vec2 & displacement)
	static int _bind_MoveProxy(lua_State *L) {
		if (!_lg_typecheck_MoveProxy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2BroadPhase::MoveProxy(signed int proxyId, const b2AABB & aabb, const b2Vec2 & displacement) function, expected prototype:\nvoid b2BroadPhase::MoveProxy(signed int proxyId, const b2AABB & aabb, const b2Vec2 & displacement)\nClass arguments details:\narg 2 ID = 53833672\narg 3 ID = 54494886\n");
		}

		signed int proxyId=(signed int)lua_tointeger(L,2);
		const b2AABB* aabb_ptr=(Luna< b2AABB >::check(L,3));
		if( !aabb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabb in b2BroadPhase::MoveProxy function");
		}
		const b2AABB & aabb=*aabb_ptr;
		const b2Vec2* displacement_ptr=(Luna< b2Vec2 >::check(L,4));
		if( !displacement_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg displacement in b2BroadPhase::MoveProxy function");
		}
		const b2Vec2 & displacement=*displacement_ptr;

		b2BroadPhase* self=(Luna< b2BroadPhase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2BroadPhase::MoveProxy(signed int, const b2AABB &, const b2Vec2 &). Got : '%s'",typeid(Luna< b2BroadPhase >::check(L,1)).name());
		}
		self->MoveProxy(proxyId, aabb, displacement);

		return 0;
	}

	// void b2BroadPhase::TouchProxy(signed int proxyId)
	static int _bind_TouchProxy(lua_State *L) {
		if (!_lg_typecheck_TouchProxy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2BroadPhase::TouchProxy(signed int proxyId) function, expected prototype:\nvoid b2BroadPhase::TouchProxy(signed int proxyId)\nClass arguments details:\n");
		}

		signed int proxyId=(signed int)lua_tointeger(L,2);

		b2BroadPhase* self=(Luna< b2BroadPhase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2BroadPhase::TouchProxy(signed int). Got : '%s'",typeid(Luna< b2BroadPhase >::check(L,1)).name());
		}
		self->TouchProxy(proxyId);

		return 0;
	}

	// const b2AABB & b2BroadPhase::GetFatAABB(signed int proxyId) const
	static int _bind_GetFatAABB(lua_State *L) {
		if (!_lg_typecheck_GetFatAABB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const b2AABB & b2BroadPhase::GetFatAABB(signed int proxyId) const function, expected prototype:\nconst b2AABB & b2BroadPhase::GetFatAABB(signed int proxyId) const\nClass arguments details:\n");
		}

		signed int proxyId=(signed int)lua_tointeger(L,2);

		b2BroadPhase* self=(Luna< b2BroadPhase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const b2AABB & b2BroadPhase::GetFatAABB(signed int) const. Got : '%s'",typeid(Luna< b2BroadPhase >::check(L,1)).name());
		}
		const b2AABB* lret = &self->GetFatAABB(proxyId);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2AABB >::push(L,lret,false);

		return 1;
	}

	// void * b2BroadPhase::GetUserData(signed int proxyId) const
	static int _bind_GetUserData(lua_State *L) {
		if (!_lg_typecheck_GetUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * b2BroadPhase::GetUserData(signed int proxyId) const function, expected prototype:\nvoid * b2BroadPhase::GetUserData(signed int proxyId) const\nClass arguments details:\n");
		}

		signed int proxyId=(signed int)lua_tointeger(L,2);

		b2BroadPhase* self=(Luna< b2BroadPhase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * b2BroadPhase::GetUserData(signed int) const. Got : '%s'",typeid(Luna< b2BroadPhase >::check(L,1)).name());
		}
		void * lret = self->GetUserData(proxyId);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// bool b2BroadPhase::TestOverlap(signed int proxyIdA, signed int proxyIdB) const
	static int _bind_TestOverlap(lua_State *L) {
		if (!_lg_typecheck_TestOverlap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2BroadPhase::TestOverlap(signed int proxyIdA, signed int proxyIdB) const function, expected prototype:\nbool b2BroadPhase::TestOverlap(signed int proxyIdA, signed int proxyIdB) const\nClass arguments details:\n");
		}

		signed int proxyIdA=(signed int)lua_tointeger(L,2);
		signed int proxyIdB=(signed int)lua_tointeger(L,3);

		b2BroadPhase* self=(Luna< b2BroadPhase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2BroadPhase::TestOverlap(signed int, signed int) const. Got : '%s'",typeid(Luna< b2BroadPhase >::check(L,1)).name());
		}
		bool lret = self->TestOverlap(proxyIdA, proxyIdB);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// signed int b2BroadPhase::GetProxyCount() const
	static int _bind_GetProxyCount(lua_State *L) {
		if (!_lg_typecheck_GetProxyCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2BroadPhase::GetProxyCount() const function, expected prototype:\nsigned int b2BroadPhase::GetProxyCount() const\nClass arguments details:\n");
		}


		b2BroadPhase* self=(Luna< b2BroadPhase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2BroadPhase::GetProxyCount() const. Got : '%s'",typeid(Luna< b2BroadPhase >::check(L,1)).name());
		}
		signed int lret = self->GetProxyCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed int b2BroadPhase::GetTreeHeight() const
	static int _bind_GetTreeHeight(lua_State *L) {
		if (!_lg_typecheck_GetTreeHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2BroadPhase::GetTreeHeight() const function, expected prototype:\nsigned int b2BroadPhase::GetTreeHeight() const\nClass arguments details:\n");
		}


		b2BroadPhase* self=(Luna< b2BroadPhase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2BroadPhase::GetTreeHeight() const. Got : '%s'",typeid(Luna< b2BroadPhase >::check(L,1)).name());
		}
		signed int lret = self->GetTreeHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed int b2BroadPhase::GetTreeBalance() const
	static int _bind_GetTreeBalance(lua_State *L) {
		if (!_lg_typecheck_GetTreeBalance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2BroadPhase::GetTreeBalance() const function, expected prototype:\nsigned int b2BroadPhase::GetTreeBalance() const\nClass arguments details:\n");
		}


		b2BroadPhase* self=(Luna< b2BroadPhase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2BroadPhase::GetTreeBalance() const. Got : '%s'",typeid(Luna< b2BroadPhase >::check(L,1)).name());
		}
		signed int lret = self->GetTreeBalance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2BroadPhase::GetTreeQuality() const
	static int _bind_GetTreeQuality(lua_State *L) {
		if (!_lg_typecheck_GetTreeQuality(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float b2BroadPhase::GetTreeQuality() const function, expected prototype:\nfloat b2BroadPhase::GetTreeQuality() const\nClass arguments details:\n");
		}


		b2BroadPhase* self=(Luna< b2BroadPhase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float b2BroadPhase::GetTreeQuality() const. Got : '%s'",typeid(Luna< b2BroadPhase >::check(L,1)).name());
		}
		float lret = self->GetTreeQuality();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

b2BroadPhase* LunaTraits< b2BroadPhase >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2BroadPhase::_bind_ctor(L);
}

void LunaTraits< b2BroadPhase >::_bind_dtor(b2BroadPhase* obj) {
	delete obj;
}

const char LunaTraits< b2BroadPhase >::className[] = "b2BroadPhase";
const char LunaTraits< b2BroadPhase >::fullName[] = "b2BroadPhase";
const char LunaTraits< b2BroadPhase >::moduleName[] = "box2d";
const char* LunaTraits< b2BroadPhase >::parents[] = {0};
const int LunaTraits< b2BroadPhase >::hash = 95168430;
const int LunaTraits< b2BroadPhase >::uniqueIDs[] = {95168430,0};

luna_RegType LunaTraits< b2BroadPhase >::methods[] = {
	{"CreateProxy", &luna_wrapper_b2BroadPhase::_bind_CreateProxy},
	{"DestroyProxy", &luna_wrapper_b2BroadPhase::_bind_DestroyProxy},
	{"MoveProxy", &luna_wrapper_b2BroadPhase::_bind_MoveProxy},
	{"TouchProxy", &luna_wrapper_b2BroadPhase::_bind_TouchProxy},
	{"GetFatAABB", &luna_wrapper_b2BroadPhase::_bind_GetFatAABB},
	{"GetUserData", &luna_wrapper_b2BroadPhase::_bind_GetUserData},
	{"TestOverlap", &luna_wrapper_b2BroadPhase::_bind_TestOverlap},
	{"GetProxyCount", &luna_wrapper_b2BroadPhase::_bind_GetProxyCount},
	{"GetTreeHeight", &luna_wrapper_b2BroadPhase::_bind_GetTreeHeight},
	{"GetTreeBalance", &luna_wrapper_b2BroadPhase::_bind_GetTreeBalance},
	{"GetTreeQuality", &luna_wrapper_b2BroadPhase::_bind_GetTreeQuality},
	{"dynCast", &luna_wrapper_b2BroadPhase::_bind_dynCast},
	{"__eq", &luna_wrapper_b2BroadPhase::_bind___eq},
	{"fromVoid", &luna_wrapper_b2BroadPhase::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2BroadPhase::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2BroadPhase >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2BroadPhase >::enumValues[] = {
	{"e_nullProxy", b2BroadPhase::e_nullProxy},
	{0,0}
};



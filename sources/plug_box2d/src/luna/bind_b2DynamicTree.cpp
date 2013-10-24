#include <plug_common.h>

class luna_wrapper_b2DynamicTree {
public:
	typedef Luna< b2DynamicTree > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,22644719) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2DynamicTree*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		b2DynamicTree* rhs =(Luna< b2DynamicTree >::check(L,2));
		b2DynamicTree* self=(Luna< b2DynamicTree >::check(L,1));
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
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		b2DynamicTree* self= (b2DynamicTree*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2DynamicTree >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,22644719) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< b2DynamicTree >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		b2DynamicTree* self=(Luna< b2DynamicTree >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2DynamicTree");
		
		return luna_dynamicCast(L,converters,"b2DynamicTree",name);
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

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveProxy(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,53833672) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,54494886) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFatAABB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Validate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMaxBalance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAreaRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RebuildBottomUp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// b2DynamicTree::b2DynamicTree()
	static b2DynamicTree* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in b2DynamicTree::b2DynamicTree() function, expected prototype:\nb2DynamicTree::b2DynamicTree()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new b2DynamicTree();
	}


	// Function binds:
	// signed int b2DynamicTree::CreateProxy(const b2AABB & aabb, void * userData)
	static int _bind_CreateProxy(lua_State *L) {
		if (!_lg_typecheck_CreateProxy(L)) {
			luaL_error(L, "luna typecheck failed in signed int b2DynamicTree::CreateProxy(const b2AABB & aabb, void * userData) function, expected prototype:\nsigned int b2DynamicTree::CreateProxy(const b2AABB & aabb, void * userData)\nClass arguments details:\narg 1 ID = 53833672\n\n%s",luna_dumpStack(L).c_str());
		}

		const b2AABB* aabb_ptr=(Luna< b2AABB >::check(L,2));
		if( !aabb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabb in b2DynamicTree::CreateProxy function");
		}
		const b2AABB & aabb=*aabb_ptr;
		void* userData=(Luna< void >::check(L,3));

		b2DynamicTree* self=(Luna< b2DynamicTree >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed int b2DynamicTree::CreateProxy(const b2AABB &, void *). Got : '%s'\n%s",typeid(Luna< b2DynamicTree >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed int lret = self->CreateProxy(aabb, userData);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2DynamicTree::DestroyProxy(signed int proxyId)
	static int _bind_DestroyProxy(lua_State *L) {
		if (!_lg_typecheck_DestroyProxy(L)) {
			luaL_error(L, "luna typecheck failed in void b2DynamicTree::DestroyProxy(signed int proxyId) function, expected prototype:\nvoid b2DynamicTree::DestroyProxy(signed int proxyId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		signed int proxyId=(signed int)lua_tointeger(L,2);

		b2DynamicTree* self=(Luna< b2DynamicTree >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2DynamicTree::DestroyProxy(signed int). Got : '%s'\n%s",typeid(Luna< b2DynamicTree >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DestroyProxy(proxyId);

		return 0;
	}

	// bool b2DynamicTree::MoveProxy(signed int proxyId, const b2AABB & aabb1, const b2Vec2 & displacement)
	static int _bind_MoveProxy(lua_State *L) {
		if (!_lg_typecheck_MoveProxy(L)) {
			luaL_error(L, "luna typecheck failed in bool b2DynamicTree::MoveProxy(signed int proxyId, const b2AABB & aabb1, const b2Vec2 & displacement) function, expected prototype:\nbool b2DynamicTree::MoveProxy(signed int proxyId, const b2AABB & aabb1, const b2Vec2 & displacement)\nClass arguments details:\narg 2 ID = 53833672\narg 3 ID = 54494886\n\n%s",luna_dumpStack(L).c_str());
		}

		signed int proxyId=(signed int)lua_tointeger(L,2);
		const b2AABB* aabb1_ptr=(Luna< b2AABB >::check(L,3));
		if( !aabb1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabb1 in b2DynamicTree::MoveProxy function");
		}
		const b2AABB & aabb1=*aabb1_ptr;
		const b2Vec2* displacement_ptr=(Luna< b2Vec2 >::check(L,4));
		if( !displacement_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg displacement in b2DynamicTree::MoveProxy function");
		}
		const b2Vec2 & displacement=*displacement_ptr;

		b2DynamicTree* self=(Luna< b2DynamicTree >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool b2DynamicTree::MoveProxy(signed int, const b2AABB &, const b2Vec2 &). Got : '%s'\n%s",typeid(Luna< b2DynamicTree >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MoveProxy(proxyId, aabb1, displacement);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void * b2DynamicTree::GetUserData(signed int proxyId) const
	static int _bind_GetUserData(lua_State *L) {
		if (!_lg_typecheck_GetUserData(L)) {
			luaL_error(L, "luna typecheck failed in void * b2DynamicTree::GetUserData(signed int proxyId) const function, expected prototype:\nvoid * b2DynamicTree::GetUserData(signed int proxyId) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		signed int proxyId=(signed int)lua_tointeger(L,2);

		b2DynamicTree* self=(Luna< b2DynamicTree >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void * b2DynamicTree::GetUserData(signed int) const. Got : '%s'\n%s",typeid(Luna< b2DynamicTree >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->GetUserData(proxyId);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// const b2AABB & b2DynamicTree::GetFatAABB(signed int proxyId) const
	static int _bind_GetFatAABB(lua_State *L) {
		if (!_lg_typecheck_GetFatAABB(L)) {
			luaL_error(L, "luna typecheck failed in const b2AABB & b2DynamicTree::GetFatAABB(signed int proxyId) const function, expected prototype:\nconst b2AABB & b2DynamicTree::GetFatAABB(signed int proxyId) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		signed int proxyId=(signed int)lua_tointeger(L,2);

		b2DynamicTree* self=(Luna< b2DynamicTree >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const b2AABB & b2DynamicTree::GetFatAABB(signed int) const. Got : '%s'\n%s",typeid(Luna< b2DynamicTree >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const b2AABB* lret = &self->GetFatAABB(proxyId);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2AABB >::push(L,lret,false);

		return 1;
	}

	// void b2DynamicTree::Validate() const
	static int _bind_Validate(lua_State *L) {
		if (!_lg_typecheck_Validate(L)) {
			luaL_error(L, "luna typecheck failed in void b2DynamicTree::Validate() const function, expected prototype:\nvoid b2DynamicTree::Validate() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2DynamicTree* self=(Luna< b2DynamicTree >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2DynamicTree::Validate() const. Got : '%s'\n%s",typeid(Luna< b2DynamicTree >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Validate();

		return 0;
	}

	// signed int b2DynamicTree::GetHeight() const
	static int _bind_GetHeight(lua_State *L) {
		if (!_lg_typecheck_GetHeight(L)) {
			luaL_error(L, "luna typecheck failed in signed int b2DynamicTree::GetHeight() const function, expected prototype:\nsigned int b2DynamicTree::GetHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2DynamicTree* self=(Luna< b2DynamicTree >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed int b2DynamicTree::GetHeight() const. Got : '%s'\n%s",typeid(Luna< b2DynamicTree >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed int lret = self->GetHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed int b2DynamicTree::GetMaxBalance() const
	static int _bind_GetMaxBalance(lua_State *L) {
		if (!_lg_typecheck_GetMaxBalance(L)) {
			luaL_error(L, "luna typecheck failed in signed int b2DynamicTree::GetMaxBalance() const function, expected prototype:\nsigned int b2DynamicTree::GetMaxBalance() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2DynamicTree* self=(Luna< b2DynamicTree >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed int b2DynamicTree::GetMaxBalance() const. Got : '%s'\n%s",typeid(Luna< b2DynamicTree >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed int lret = self->GetMaxBalance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float b2DynamicTree::GetAreaRatio() const
	static int _bind_GetAreaRatio(lua_State *L) {
		if (!_lg_typecheck_GetAreaRatio(L)) {
			luaL_error(L, "luna typecheck failed in float b2DynamicTree::GetAreaRatio() const function, expected prototype:\nfloat b2DynamicTree::GetAreaRatio() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2DynamicTree* self=(Luna< b2DynamicTree >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float b2DynamicTree::GetAreaRatio() const. Got : '%s'\n%s",typeid(Luna< b2DynamicTree >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->GetAreaRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2DynamicTree::RebuildBottomUp()
	static int _bind_RebuildBottomUp(lua_State *L) {
		if (!_lg_typecheck_RebuildBottomUp(L)) {
			luaL_error(L, "luna typecheck failed in void b2DynamicTree::RebuildBottomUp() function, expected prototype:\nvoid b2DynamicTree::RebuildBottomUp()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		b2DynamicTree* self=(Luna< b2DynamicTree >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void b2DynamicTree::RebuildBottomUp(). Got : '%s'\n%s",typeid(Luna< b2DynamicTree >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RebuildBottomUp();

		return 0;
	}


	// Operator binds:

};

b2DynamicTree* LunaTraits< b2DynamicTree >::_bind_ctor(lua_State *L) {
	return luna_wrapper_b2DynamicTree::_bind_ctor(L);
}

void LunaTraits< b2DynamicTree >::_bind_dtor(b2DynamicTree* obj) {
	delete obj;
}

const char LunaTraits< b2DynamicTree >::className[] = "b2DynamicTree";
const char LunaTraits< b2DynamicTree >::fullName[] = "b2DynamicTree";
const char LunaTraits< b2DynamicTree >::moduleName[] = "box2d";
const char* LunaTraits< b2DynamicTree >::parents[] = {0};
const int LunaTraits< b2DynamicTree >::hash = 22644719;
const int LunaTraits< b2DynamicTree >::uniqueIDs[] = {22644719,0};

luna_RegType LunaTraits< b2DynamicTree >::methods[] = {
	{"CreateProxy", &luna_wrapper_b2DynamicTree::_bind_CreateProxy},
	{"DestroyProxy", &luna_wrapper_b2DynamicTree::_bind_DestroyProxy},
	{"MoveProxy", &luna_wrapper_b2DynamicTree::_bind_MoveProxy},
	{"GetUserData", &luna_wrapper_b2DynamicTree::_bind_GetUserData},
	{"GetFatAABB", &luna_wrapper_b2DynamicTree::_bind_GetFatAABB},
	{"Validate", &luna_wrapper_b2DynamicTree::_bind_Validate},
	{"GetHeight", &luna_wrapper_b2DynamicTree::_bind_GetHeight},
	{"GetMaxBalance", &luna_wrapper_b2DynamicTree::_bind_GetMaxBalance},
	{"GetAreaRatio", &luna_wrapper_b2DynamicTree::_bind_GetAreaRatio},
	{"RebuildBottomUp", &luna_wrapper_b2DynamicTree::_bind_RebuildBottomUp},
	{"dynCast", &luna_wrapper_b2DynamicTree::_bind_dynCast},
	{"__eq", &luna_wrapper_b2DynamicTree::_bind___eq},
	{"fromVoid", &luna_wrapper_b2DynamicTree::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2DynamicTree::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2DynamicTree >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2DynamicTree >::enumValues[] = {
	{0,0}
};



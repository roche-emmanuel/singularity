#include <plug_common.h>

class luna_wrapper_GIM_BVH_DATA {
public:
	typedef Luna< GIM_BVH_DATA > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56409546) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(GIM_BVH_DATA*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		GIM_BVH_DATA* rhs =(Luna< GIM_BVH_DATA >::check(L,2));
		GIM_BVH_DATA* self=(Luna< GIM_BVH_DATA >::check(L,1));
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

		GIM_BVH_DATA* self= (GIM_BVH_DATA*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< GIM_BVH_DATA >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56409546) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< GIM_BVH_DATA >::check(L,1));
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

		GIM_BVH_DATA* self=(Luna< GIM_BVH_DATA >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("GIM_BVH_DATA");
		
		return luna_dynamicCast(L,converters,"GIM_BVH_DATA",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBound(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,14786052) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btAABB GIM_BVH_DATA::m_bound()
	static int _bind_getBound(lua_State *L) {
		if (!_lg_typecheck_getBound(L)) {
			luaL_error(L, "luna typecheck failed in btAABB GIM_BVH_DATA::m_bound() function, expected prototype:\nbtAABB GIM_BVH_DATA::m_bound()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		GIM_BVH_DATA* self=(Luna< GIM_BVH_DATA >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btAABB GIM_BVH_DATA::m_bound(). Got : '%s'\n%s",typeid(Luna< GIM_BVH_DATA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btAABB* lret = &self->m_bound;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btAABB >::push(L,lret,false);

		return 1;
	}

	// int GIM_BVH_DATA::m_data()
	static int _bind_getData(lua_State *L) {
		if (!_lg_typecheck_getData(L)) {
			luaL_error(L, "luna typecheck failed in int GIM_BVH_DATA::m_data() function, expected prototype:\nint GIM_BVH_DATA::m_data()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		GIM_BVH_DATA* self=(Luna< GIM_BVH_DATA >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int GIM_BVH_DATA::m_data(). Got : '%s'\n%s",typeid(Luna< GIM_BVH_DATA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_data;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void GIM_BVH_DATA::m_bound(btAABB value)
	static int _bind_setBound(lua_State *L) {
		if (!_lg_typecheck_setBound(L)) {
			luaL_error(L, "luna typecheck failed in void GIM_BVH_DATA::m_bound(btAABB value) function, expected prototype:\nvoid GIM_BVH_DATA::m_bound(btAABB value)\nClass arguments details:\narg 1 ID = 14786052\n\n%s",luna_dumpStack(L).c_str());
		}

		btAABB* value_ptr=(Luna< btAABB >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in GIM_BVH_DATA::m_bound function");
		}
		btAABB value=*value_ptr;

		GIM_BVH_DATA* self=(Luna< GIM_BVH_DATA >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void GIM_BVH_DATA::m_bound(btAABB). Got : '%s'\n%s",typeid(Luna< GIM_BVH_DATA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_bound = value;

		return 0;
	}

	// void GIM_BVH_DATA::m_data(int value)
	static int _bind_setData(lua_State *L) {
		if (!_lg_typecheck_setData(L)) {
			luaL_error(L, "luna typecheck failed in void GIM_BVH_DATA::m_data(int value) function, expected prototype:\nvoid GIM_BVH_DATA::m_data(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		GIM_BVH_DATA* self=(Luna< GIM_BVH_DATA >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void GIM_BVH_DATA::m_data(int). Got : '%s'\n%s",typeid(Luna< GIM_BVH_DATA >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_data = value;

		return 0;
	}


	// Operator binds:

};

GIM_BVH_DATA* LunaTraits< GIM_BVH_DATA >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< GIM_BVH_DATA >::_bind_dtor(GIM_BVH_DATA* obj) {
	delete obj;
}

const char LunaTraits< GIM_BVH_DATA >::className[] = "GIM_BVH_DATA";
const char LunaTraits< GIM_BVH_DATA >::fullName[] = "GIM_BVH_DATA";
const char LunaTraits< GIM_BVH_DATA >::moduleName[] = "bullet";
const char* LunaTraits< GIM_BVH_DATA >::parents[] = {0};
const int LunaTraits< GIM_BVH_DATA >::hash = 56409546;
const int LunaTraits< GIM_BVH_DATA >::uniqueIDs[] = {56409546,0};

luna_RegType LunaTraits< GIM_BVH_DATA >::methods[] = {
	{"getBound", &luna_wrapper_GIM_BVH_DATA::_bind_getBound},
	{"getData", &luna_wrapper_GIM_BVH_DATA::_bind_getData},
	{"setBound", &luna_wrapper_GIM_BVH_DATA::_bind_setBound},
	{"setData", &luna_wrapper_GIM_BVH_DATA::_bind_setData},
	{"dynCast", &luna_wrapper_GIM_BVH_DATA::_bind_dynCast},
	{"__eq", &luna_wrapper_GIM_BVH_DATA::_bind___eq},
	{"fromVoid", &luna_wrapper_GIM_BVH_DATA::_bind_fromVoid},
	{"asVoid", &luna_wrapper_GIM_BVH_DATA::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< GIM_BVH_DATA >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< GIM_BVH_DATA >::enumValues[] = {
	{0,0}
};



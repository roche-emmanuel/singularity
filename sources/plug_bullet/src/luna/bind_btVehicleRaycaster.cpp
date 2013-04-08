#include <plug_common.h>

#include <luna/wrappers/wrapper_btVehicleRaycaster.h>

class luna_wrapper_btVehicleRaycaster {
public:
	typedef Luna< btVehicleRaycaster > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btVehicleRaycaster* self=(Luna< btVehicleRaycaster >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btVehicleRaycaster,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,79998095) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btVehicleRaycaster*)");
		}

		btVehicleRaycaster* rhs =(Luna< btVehicleRaycaster >::check(L,2));
		btVehicleRaycaster* self=(Luna< btVehicleRaycaster >::check(L,1));
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

		btVehicleRaycaster* self= (btVehicleRaycaster*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btVehicleRaycaster >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,79998095) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btVehicleRaycaster >::check(L,1));
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

		btVehicleRaycaster* self=(Luna< btVehicleRaycaster >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btVehicleRaycaster");
		
		return luna_dynamicCast(L,converters,"btVehicleRaycaster",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_castRay(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,50443956) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btVehicleRaycaster::btVehicleRaycaster(lua_Table * data)
	static btVehicleRaycaster* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVehicleRaycaster::btVehicleRaycaster(lua_Table * data) function, expected prototype:\nbtVehicleRaycaster::btVehicleRaycaster(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btVehicleRaycaster(L,NULL);
	}


	// Function binds:
	// void * btVehicleRaycaster::castRay(const btVector3 & from, const btVector3 & to, btVehicleRaycaster::btVehicleRaycasterResult & result)
	static int _bind_castRay(lua_State *L) {
		if (!_lg_typecheck_castRay(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btVehicleRaycaster::castRay(const btVector3 & from, const btVector3 & to, btVehicleRaycaster::btVehicleRaycasterResult & result) function, expected prototype:\nvoid * btVehicleRaycaster::castRay(const btVector3 & from, const btVector3 & to, btVehicleRaycaster::btVehicleRaycasterResult & result)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 50443956\n");
		}

		const btVector3* from_ptr=(Luna< btVector3 >::check(L,2));
		if( !from_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg from in btVehicleRaycaster::castRay function");
		}
		const btVector3 & from=*from_ptr;
		const btVector3* to_ptr=(Luna< btVector3 >::check(L,3));
		if( !to_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg to in btVehicleRaycaster::castRay function");
		}
		const btVector3 & to=*to_ptr;
		btVehicleRaycaster::btVehicleRaycasterResult* result_ptr=(Luna< btVehicleRaycaster::btVehicleRaycasterResult >::check(L,4));
		if( !result_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg result in btVehicleRaycaster::castRay function");
		}
		btVehicleRaycaster::btVehicleRaycasterResult & result=*result_ptr;

		btVehicleRaycaster* self=(Luna< btVehicleRaycaster >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btVehicleRaycaster::castRay(const btVector3 &, const btVector3 &, btVehicleRaycaster::btVehicleRaycasterResult &). Got : '%s'",typeid(Luna< btVehicleRaycaster >::check(L,1)).name());
		}
		void * lret = self->castRay(from, to, result);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

btVehicleRaycaster* LunaTraits< btVehicleRaycaster >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btVehicleRaycaster::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void * btVehicleRaycaster::castRay(const btVector3 & from, const btVector3 & to, btVehicleRaycaster::btVehicleRaycasterResult & result)
}

void LunaTraits< btVehicleRaycaster >::_bind_dtor(btVehicleRaycaster* obj) {
	delete obj;
}

const char LunaTraits< btVehicleRaycaster >::className[] = "btVehicleRaycaster";
const char LunaTraits< btVehicleRaycaster >::fullName[] = "btVehicleRaycaster";
const char LunaTraits< btVehicleRaycaster >::moduleName[] = "bullet";
const char* LunaTraits< btVehicleRaycaster >::parents[] = {0};
const int LunaTraits< btVehicleRaycaster >::hash = 79998095;
const int LunaTraits< btVehicleRaycaster >::uniqueIDs[] = {79998095,0};

luna_RegType LunaTraits< btVehicleRaycaster >::methods[] = {
	{"castRay", &luna_wrapper_btVehicleRaycaster::_bind_castRay},
	{"dynCast", &luna_wrapper_btVehicleRaycaster::_bind_dynCast},
	{"__eq", &luna_wrapper_btVehicleRaycaster::_bind___eq},
	{"fromVoid", &luna_wrapper_btVehicleRaycaster::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btVehicleRaycaster::_bind_asVoid},
	{"getTable", &luna_wrapper_btVehicleRaycaster::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btVehicleRaycaster >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btVehicleRaycaster >::enumValues[] = {
	{0,0}
};



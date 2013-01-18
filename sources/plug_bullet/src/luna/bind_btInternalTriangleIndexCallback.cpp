#include <plug_common.h>

#include <luna/wrappers/wrapper_btInternalTriangleIndexCallback.h>

class luna_wrapper_btInternalTriangleIndexCallback {
public:
	typedef Luna< btInternalTriangleIndexCallback > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btInternalTriangleIndexCallback* self=(Luna< btInternalTriangleIndexCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btInternalTriangleIndexCallback,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,59503577) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btInternalTriangleIndexCallback*)");
		}

		btInternalTriangleIndexCallback* rhs =(Luna< btInternalTriangleIndexCallback >::check(L,2));
		btInternalTriangleIndexCallback* self=(Luna< btInternalTriangleIndexCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
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

		btInternalTriangleIndexCallback* self= (btInternalTriangleIndexCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btInternalTriangleIndexCallback >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,59503577) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btInternalTriangleIndexCallback >::check(L,1));
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

		btInternalTriangleIndexCallback* self=(Luna< btInternalTriangleIndexCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btInternalTriangleIndexCallback");
		
		return luna_dynamicCast(L,converters,"btInternalTriangleIndexCallback",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_internalProcessTriangleIndex(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91544891)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btInternalTriangleIndexCallback::btInternalTriangleIndexCallback(lua_Table * data)
	static btInternalTriangleIndexCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btInternalTriangleIndexCallback::btInternalTriangleIndexCallback(lua_Table * data) function, expected prototype:\nbtInternalTriangleIndexCallback::btInternalTriangleIndexCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btInternalTriangleIndexCallback(L,NULL);
	}


	// Function binds:
	// void btInternalTriangleIndexCallback::internalProcessTriangleIndex(btVector3 * triangle, int partId, int triangleIndex)
	static int _bind_internalProcessTriangleIndex(lua_State *L) {
		if (!_lg_typecheck_internalProcessTriangleIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btInternalTriangleIndexCallback::internalProcessTriangleIndex(btVector3 * triangle, int partId, int triangleIndex) function, expected prototype:\nvoid btInternalTriangleIndexCallback::internalProcessTriangleIndex(btVector3 * triangle, int partId, int triangleIndex)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* triangle=(Luna< btVector3 >::check(L,2));
		int partId=(int)lua_tointeger(L,3);
		int triangleIndex=(int)lua_tointeger(L,4);

		btInternalTriangleIndexCallback* self=(Luna< btInternalTriangleIndexCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btInternalTriangleIndexCallback::internalProcessTriangleIndex(btVector3 *, int, int). Got : '%s'",typeid(Luna< btInternalTriangleIndexCallback >::check(L,1)).name());
		}
		self->internalProcessTriangleIndex(triangle, partId, triangleIndex);

		return 0;
	}


	// Operator binds:

};

btInternalTriangleIndexCallback* LunaTraits< btInternalTriangleIndexCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btInternalTriangleIndexCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void btInternalTriangleIndexCallback::internalProcessTriangleIndex(btVector3 * triangle, int partId, int triangleIndex)
}

void LunaTraits< btInternalTriangleIndexCallback >::_bind_dtor(btInternalTriangleIndexCallback* obj) {
	delete obj;
}

const char LunaTraits< btInternalTriangleIndexCallback >::className[] = "btInternalTriangleIndexCallback";
const char LunaTraits< btInternalTriangleIndexCallback >::fullName[] = "btInternalTriangleIndexCallback";
const char LunaTraits< btInternalTriangleIndexCallback >::moduleName[] = "bullet";
const char* LunaTraits< btInternalTriangleIndexCallback >::parents[] = {0};
const int LunaTraits< btInternalTriangleIndexCallback >::hash = 59503577;
const int LunaTraits< btInternalTriangleIndexCallback >::uniqueIDs[] = {59503577,0};

luna_RegType LunaTraits< btInternalTriangleIndexCallback >::methods[] = {
	{"internalProcessTriangleIndex", &luna_wrapper_btInternalTriangleIndexCallback::_bind_internalProcessTriangleIndex},
	{"dynCast", &luna_wrapper_btInternalTriangleIndexCallback::_bind_dynCast},
	{"__eq", &luna_wrapper_btInternalTriangleIndexCallback::_bind___eq},
	{"fromVoid", &luna_wrapper_btInternalTriangleIndexCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btInternalTriangleIndexCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_btInternalTriangleIndexCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btInternalTriangleIndexCallback >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btInternalTriangleIndexCallback >::enumValues[] = {
	{0,0}
};



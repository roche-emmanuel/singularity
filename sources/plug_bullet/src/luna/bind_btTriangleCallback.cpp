#include <plug_common.h>

#include <luna/wrappers/wrapper_btTriangleCallback.h>

class luna_wrapper_btTriangleCallback {
public:
	typedef Luna< btTriangleCallback > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btTriangleCallback* self=(Luna< btTriangleCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btTriangleCallback,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,46793426) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btTriangleCallback*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btTriangleCallback* rhs =(Luna< btTriangleCallback >::check(L,2));
		btTriangleCallback* self=(Luna< btTriangleCallback >::check(L,1));
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

		btTriangleCallback* self= (btTriangleCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btTriangleCallback >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,46793426) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btTriangleCallback >::check(L,1));
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

		btTriangleCallback* self=(Luna< btTriangleCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btTriangleCallback");
		
		return luna_dynamicCast(L,converters,"btTriangleCallback",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_processTriangle(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91544891)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btTriangleCallback::btTriangleCallback(lua_Table * data)
	static btTriangleCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in btTriangleCallback::btTriangleCallback(lua_Table * data) function, expected prototype:\nbtTriangleCallback::btTriangleCallback(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_btTriangleCallback(L,NULL);
	}


	// Function binds:
	// void btTriangleCallback::processTriangle(btVector3 * triangle, int partId, int triangleIndex)
	static int _bind_processTriangle(lua_State *L) {
		if (!_lg_typecheck_processTriangle(L)) {
			luaL_error(L, "luna typecheck failed in void btTriangleCallback::processTriangle(btVector3 * triangle, int partId, int triangleIndex) function, expected prototype:\nvoid btTriangleCallback::processTriangle(btVector3 * triangle, int partId, int triangleIndex)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* triangle=(Luna< btVector3 >::check(L,2));
		int partId=(int)lua_tointeger(L,3);
		int triangleIndex=(int)lua_tointeger(L,4);

		btTriangleCallback* self=(Luna< btTriangleCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btTriangleCallback::processTriangle(btVector3 *, int, int). Got : '%s'\n%s",typeid(Luna< btTriangleCallback >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->processTriangle(triangle, partId, triangleIndex);

		return 0;
	}


	// Operator binds:

};

btTriangleCallback* LunaTraits< btTriangleCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btTriangleCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void btTriangleCallback::processTriangle(btVector3 * triangle, int partId, int triangleIndex)
}

void LunaTraits< btTriangleCallback >::_bind_dtor(btTriangleCallback* obj) {
	delete obj;
}

const char LunaTraits< btTriangleCallback >::className[] = "btTriangleCallback";
const char LunaTraits< btTriangleCallback >::fullName[] = "btTriangleCallback";
const char LunaTraits< btTriangleCallback >::moduleName[] = "bullet";
const char* LunaTraits< btTriangleCallback >::parents[] = {0};
const int LunaTraits< btTriangleCallback >::hash = 46793426;
const int LunaTraits< btTriangleCallback >::uniqueIDs[] = {46793426,0};

luna_RegType LunaTraits< btTriangleCallback >::methods[] = {
	{"processTriangle", &luna_wrapper_btTriangleCallback::_bind_processTriangle},
	{"dynCast", &luna_wrapper_btTriangleCallback::_bind_dynCast},
	{"__eq", &luna_wrapper_btTriangleCallback::_bind___eq},
	{"fromVoid", &luna_wrapper_btTriangleCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btTriangleCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_btTriangleCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btTriangleCallback >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btTriangleCallback >::enumValues[] = {
	{0,0}
};



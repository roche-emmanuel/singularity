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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btTriangleCallback*)");
		}

		btTriangleCallback* rhs =(Luna< btTriangleCallback >::check(L,2));
		btTriangleCallback* self=(Luna< btTriangleCallback >::check(L,1));
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
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btTriangleCallback::btTriangleCallback(lua_Table * data)
	static btTriangleCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTriangleCallback::btTriangleCallback(lua_Table * data) function, expected prototype:\nbtTriangleCallback::btTriangleCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btTriangleCallback(L,NULL);
	}


	// Function binds:
	// void btTriangleCallback::processTriangle(btVector3 * triangle, int partId, int triangleIndex)
	static int _bind_processTriangle(lua_State *L) {
		if (!_lg_typecheck_processTriangle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleCallback::processTriangle(btVector3 * triangle, int partId, int triangleIndex) function, expected prototype:\nvoid btTriangleCallback::processTriangle(btVector3 * triangle, int partId, int triangleIndex)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* triangle=(Luna< btVector3 >::check(L,2));
		int partId=(int)lua_tointeger(L,3);
		int triangleIndex=(int)lua_tointeger(L,4);

		btTriangleCallback* self=(Luna< btTriangleCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleCallback::processTriangle(btVector3 *, int, int). Got : '%s'",typeid(Luna< btTriangleCallback >::check(L,1)).name());
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
	{"getTable", &luna_wrapper_btTriangleCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btTriangleCallback >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btTriangleCallback >::enumValues[] = {
	{0,0}
};



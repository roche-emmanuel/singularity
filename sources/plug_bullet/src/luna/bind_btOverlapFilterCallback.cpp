#include <plug_common.h>

#include <luna/wrappers/wrapper_btOverlapFilterCallback.h>

class luna_wrapper_btOverlapFilterCallback {
public:
	typedef Luna< btOverlapFilterCallback > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btOverlapFilterCallback* self=(Luna< btOverlapFilterCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btOverlapFilterCallback,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50236777) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btOverlapFilterCallback*)");
		}

		btOverlapFilterCallback* rhs =(Luna< btOverlapFilterCallback >::check(L,2));
		btOverlapFilterCallback* self=(Luna< btOverlapFilterCallback >::check(L,1));
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

		btOverlapFilterCallback* self=(Luna< btOverlapFilterCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btOverlapFilterCallback");
		
		return luna_dynamicCast(L,converters,"btOverlapFilterCallback",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_needBroadphaseCollision(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,44086089)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btOverlapFilterCallback::btOverlapFilterCallback(lua_Table * data)
	static btOverlapFilterCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btOverlapFilterCallback::btOverlapFilterCallback(lua_Table * data) function, expected prototype:\nbtOverlapFilterCallback::btOverlapFilterCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btOverlapFilterCallback(L,NULL);
	}


	// Function binds:
	// bool btOverlapFilterCallback::needBroadphaseCollision(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) const
	static int _bind_needBroadphaseCollision(lua_State *L) {
		if (!_lg_typecheck_needBroadphaseCollision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btOverlapFilterCallback::needBroadphaseCollision(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) const function, expected prototype:\nbool btOverlapFilterCallback::needBroadphaseCollision(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) const\nClass arguments details:\narg 1 ID = 44086089\narg 2 ID = 44086089\n");
		}

		btBroadphaseProxy* proxy0=(Luna< btBroadphaseProxy >::check(L,2));
		btBroadphaseProxy* proxy1=(Luna< btBroadphaseProxy >::check(L,3));

		btOverlapFilterCallback* self=(Luna< btOverlapFilterCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btOverlapFilterCallback::needBroadphaseCollision(btBroadphaseProxy *, btBroadphaseProxy *) const. Got : '%s'",typeid(Luna< btOverlapFilterCallback >::check(L,1)).name());
		}
		bool lret = self->needBroadphaseCollision(proxy0, proxy1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

btOverlapFilterCallback* LunaTraits< btOverlapFilterCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btOverlapFilterCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool btOverlapFilterCallback::needBroadphaseCollision(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) const
}

void LunaTraits< btOverlapFilterCallback >::_bind_dtor(btOverlapFilterCallback* obj) {
	delete obj;
}

const char LunaTraits< btOverlapFilterCallback >::className[] = "btOverlapFilterCallback";
const char LunaTraits< btOverlapFilterCallback >::fullName[] = "btOverlapFilterCallback";
const char LunaTraits< btOverlapFilterCallback >::moduleName[] = "bullet";
const char* LunaTraits< btOverlapFilterCallback >::parents[] = {0};
const int LunaTraits< btOverlapFilterCallback >::hash = 50236777;
const int LunaTraits< btOverlapFilterCallback >::uniqueIDs[] = {50236777,0};

luna_RegType LunaTraits< btOverlapFilterCallback >::methods[] = {
	{"needBroadphaseCollision", &luna_wrapper_btOverlapFilterCallback::_bind_needBroadphaseCollision},
	{"dynCast", &luna_wrapper_btOverlapFilterCallback::_bind_dynCast},
	{"__eq", &luna_wrapper_btOverlapFilterCallback::_bind___eq},
	{"getTable", &luna_wrapper_btOverlapFilterCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btOverlapFilterCallback >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btOverlapFilterCallback >::enumValues[] = {
	{0,0}
};



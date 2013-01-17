#include <plug_common.h>

#include <luna/wrappers/wrapper_btBroadphaseAabbCallback.h>

class luna_wrapper_btBroadphaseAabbCallback {
public:
	typedef Luna< btBroadphaseAabbCallback > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btBroadphaseAabbCallback* self=(Luna< btBroadphaseAabbCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btBroadphaseAabbCallback,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,52132875) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btBroadphaseAabbCallback*)");
		}

		btBroadphaseAabbCallback* rhs =(Luna< btBroadphaseAabbCallback >::check(L,2));
		btBroadphaseAabbCallback* self=(Luna< btBroadphaseAabbCallback >::check(L,1));
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

		btBroadphaseAabbCallback* self=(Luna< btBroadphaseAabbCallback >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btBroadphaseAabbCallback");
		
		return luna_dynamicCast(L,converters,"btBroadphaseAabbCallback",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_process(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44086089)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btBroadphaseAabbCallback::btBroadphaseAabbCallback(lua_Table * data)
	static btBroadphaseAabbCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBroadphaseAabbCallback::btBroadphaseAabbCallback(lua_Table * data) function, expected prototype:\nbtBroadphaseAabbCallback::btBroadphaseAabbCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btBroadphaseAabbCallback(L,NULL);
	}


	// Function binds:
	// bool btBroadphaseAabbCallback::process(const btBroadphaseProxy * proxy)
	static int _bind_process(lua_State *L) {
		if (!_lg_typecheck_process(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btBroadphaseAabbCallback::process(const btBroadphaseProxy * proxy) function, expected prototype:\nbool btBroadphaseAabbCallback::process(const btBroadphaseProxy * proxy)\nClass arguments details:\narg 1 ID = 44086089\n");
		}

		const btBroadphaseProxy* proxy=(Luna< btBroadphaseProxy >::check(L,2));

		btBroadphaseAabbCallback* self=(Luna< btBroadphaseAabbCallback >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btBroadphaseAabbCallback::process(const btBroadphaseProxy *). Got : '%s'",typeid(Luna< btBroadphaseAabbCallback >::check(L,1)).name());
		}
		bool lret = self->process(proxy);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

btBroadphaseAabbCallback* LunaTraits< btBroadphaseAabbCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btBroadphaseAabbCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool btBroadphaseAabbCallback::process(const btBroadphaseProxy * proxy)
}

void LunaTraits< btBroadphaseAabbCallback >::_bind_dtor(btBroadphaseAabbCallback* obj) {
	delete obj;
}

const char LunaTraits< btBroadphaseAabbCallback >::className[] = "btBroadphaseAabbCallback";
const char LunaTraits< btBroadphaseAabbCallback >::fullName[] = "btBroadphaseAabbCallback";
const char LunaTraits< btBroadphaseAabbCallback >::moduleName[] = "bullet";
const char* LunaTraits< btBroadphaseAabbCallback >::parents[] = {0};
const int LunaTraits< btBroadphaseAabbCallback >::hash = 52132875;
const int LunaTraits< btBroadphaseAabbCallback >::uniqueIDs[] = {52132875,0};

luna_RegType LunaTraits< btBroadphaseAabbCallback >::methods[] = {
	{"process", &luna_wrapper_btBroadphaseAabbCallback::_bind_process},
	{"dynCast", &luna_wrapper_btBroadphaseAabbCallback::_bind_dynCast},
	{"__eq", &luna_wrapper_btBroadphaseAabbCallback::_bind___eq},
	{"getTable", &luna_wrapper_btBroadphaseAabbCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btBroadphaseAabbCallback >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btBroadphaseAabbCallback >::enumValues[] = {
	{0,0}
};



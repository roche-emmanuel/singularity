#include <plug_common.h>

class luna_wrapper_sgt_TimeManager {
public:
	typedef Luna< sgt::TimeManager > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,10949480) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(sgt::TimeManager*)");
		}

		sgt::TimeManager* rhs =(Luna< sgt::TimeManager >::check(L,2));
		sgt::TimeManager* self=(Luna< sgt::TimeManager >::check(L,1));
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

		sgt::TimeManager* self=(Luna< sgt::TimeManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::TimeManager");
		
		return luna_dynamicCast(L,converters,"sgt::TimeManager",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_instance(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_destroy(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isInstanciated(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static sgt::TimeProvider & sgt::TimeManager::instance()
	static int _bind_instance(lua_State *L) {
		if (!_lg_typecheck_instance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static sgt::TimeProvider & sgt::TimeManager::instance() function, expected prototype:\nstatic sgt::TimeProvider & sgt::TimeManager::instance()\nClass arguments details:\n");
		}


		const sgt::TimeProvider* lret = &sgt::TimeManager::instance();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::TimeProvider >::push(L,lret,false);

		return 1;
	}

	// static void sgt::TimeManager::destroy()
	static int _bind_destroy(lua_State *L) {
		if (!_lg_typecheck_destroy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void sgt::TimeManager::destroy() function, expected prototype:\nstatic void sgt::TimeManager::destroy()\nClass arguments details:\n");
		}


		sgt::TimeManager::destroy();

		return 0;
	}

	// static bool sgt::TimeManager::isInstanciated()
	static int _bind_isInstanciated(lua_State *L) {
		if (!_lg_typecheck_isInstanciated(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool sgt::TimeManager::isInstanciated() function, expected prototype:\nstatic bool sgt::TimeManager::isInstanciated()\nClass arguments details:\n");
		}


		bool lret = sgt::TimeManager::isInstanciated();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

sgt::TimeManager* LunaTraits< sgt::TimeManager >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< sgt::TimeManager >::_bind_dtor(sgt::TimeManager* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< sgt::TimeManager >::className[] = "TimeManager";
const char LunaTraits< sgt::TimeManager >::fullName[] = "sgt::TimeManager";
const char LunaTraits< sgt::TimeManager >::moduleName[] = "sgt";
const char* LunaTraits< sgt::TimeManager >::parents[] = {0};
const int LunaTraits< sgt::TimeManager >::hash = 10949480;
const int LunaTraits< sgt::TimeManager >::uniqueIDs[] = {10949480,0};

luna_RegType LunaTraits< sgt::TimeManager >::methods[] = {
	{"instance", &luna_wrapper_sgt_TimeManager::_bind_instance},
	{"destroy", &luna_wrapper_sgt_TimeManager::_bind_destroy},
	{"isInstanciated", &luna_wrapper_sgt_TimeManager::_bind_isInstanciated},
	{"dynCast", &luna_wrapper_sgt_TimeManager::_bind_dynCast},
	{"__eq", &luna_wrapper_sgt_TimeManager::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::TimeManager >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::TimeManager >::enumValues[] = {
	{0,0}
};



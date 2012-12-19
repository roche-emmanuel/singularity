#include <plug_common.h>

class luna_wrapper_sgt_LogManager_SinkVector {
public:
	typedef Luna< sgt::LogManager::SinkVector > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,79167517) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(sgt::LogManager::SinkVector*)");
		}

		sgt::LogManager::SinkVector* rhs =(Luna< sgt::LogManager::SinkVector >::check(L,2));
		sgt::LogManager::SinkVector* self=(Luna< sgt::LogManager::SinkVector >::check(L,1));
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

		sgt::LogManager::SinkVector* self=(Luna< sgt::LogManager::SinkVector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::LogManager::SinkVector");
		
		return luna_dynamicCast(L,converters,"sgt::LogManager::SinkVector",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

sgt::LogManager::SinkVector* LunaTraits< sgt::LogManager::SinkVector >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< sgt::LogManager::SinkVector >::_bind_dtor(sgt::LogManager::SinkVector* obj) {
	delete obj;
}

const char LunaTraits< sgt::LogManager::SinkVector >::className[] = "SinkVector";
const char LunaTraits< sgt::LogManager::SinkVector >::fullName[] = "sgt::LogManager::SinkVector";
const char LunaTraits< sgt::LogManager::SinkVector >::moduleName[] = "sgt";
const char* LunaTraits< sgt::LogManager::SinkVector >::parents[] = {0};
const int LunaTraits< sgt::LogManager::SinkVector >::hash = 79167517;
const int LunaTraits< sgt::LogManager::SinkVector >::uniqueIDs[] = {79167517,0};

luna_RegType LunaTraits< sgt::LogManager::SinkVector >::methods[] = {
	{"dynCast", &luna_wrapper_sgt_LogManager_SinkVector::_bind_dynCast},
	{"__eq", &luna_wrapper_sgt_LogManager_SinkVector::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::LogManager::SinkVector >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::LogManager::SinkVector >::enumValues[] = {
	{0,0}
};



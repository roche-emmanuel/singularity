#include <plug_common.h>

class luna_wrapper_SparkDrawable_DeferredSystemHandler_PosAndRotate {
public:
	typedef Luna< SparkDrawable::DeferredSystemHandler::PosAndRotate > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2783204) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SparkDrawable::DeferredSystemHandler::PosAndRotate*)");
		}

		SparkDrawable::DeferredSystemHandler::PosAndRotate* rhs =(Luna< SparkDrawable::DeferredSystemHandler::PosAndRotate >::check(L,2));
		SparkDrawable::DeferredSystemHandler::PosAndRotate* self=(Luna< SparkDrawable::DeferredSystemHandler::PosAndRotate >::check(L,1));
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

		SparkDrawable::DeferredSystemHandler::PosAndRotate* self=(Luna< SparkDrawable::DeferredSystemHandler::PosAndRotate >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SparkDrawable::DeferredSystemHandler::PosAndRotate");
		
		return luna_dynamicCast(L,converters,"SparkDrawable::DeferredSystemHandler::PosAndRotate",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

SparkDrawable::DeferredSystemHandler::PosAndRotate* LunaTraits< SparkDrawable::DeferredSystemHandler::PosAndRotate >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< SparkDrawable::DeferredSystemHandler::PosAndRotate >::_bind_dtor(SparkDrawable::DeferredSystemHandler::PosAndRotate* obj) {
	delete obj;
}

const char LunaTraits< SparkDrawable::DeferredSystemHandler::PosAndRotate >::className[] = "PosAndRotate";
const char LunaTraits< SparkDrawable::DeferredSystemHandler::PosAndRotate >::fullName[] = "SparkDrawable::DeferredSystemHandler::PosAndRotate";
const char LunaTraits< SparkDrawable::DeferredSystemHandler::PosAndRotate >::moduleName[] = "SparkDrawable";
const char* LunaTraits< SparkDrawable::DeferredSystemHandler::PosAndRotate >::parents[] = {0};
const int LunaTraits< SparkDrawable::DeferredSystemHandler::PosAndRotate >::hash = 2783204;
const int LunaTraits< SparkDrawable::DeferredSystemHandler::PosAndRotate >::uniqueIDs[] = {2783204,0};

luna_RegType LunaTraits< SparkDrawable::DeferredSystemHandler::PosAndRotate >::methods[] = {
	{"dynCast", &luna_wrapper_SparkDrawable_DeferredSystemHandler_PosAndRotate::_bind_dynCast},
	{"__eq", &luna_wrapper_SparkDrawable_DeferredSystemHandler_PosAndRotate::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< SparkDrawable::DeferredSystemHandler::PosAndRotate >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SparkDrawable::DeferredSystemHandler::PosAndRotate >::enumValues[] = {
	{0,0}
};



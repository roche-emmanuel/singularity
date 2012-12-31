#include <plug_common.h>

class luna_wrapper_spark_SparkDrawable_DeferredSystemHandler_PosAndRotate {
public:
	typedef Luna< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,5357342) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(spark::SparkDrawable::DeferredSystemHandler::PosAndRotate*)");
		}

		spark::SparkDrawable::DeferredSystemHandler::PosAndRotate* rhs =(Luna< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::check(L,2));
		spark::SparkDrawable::DeferredSystemHandler::PosAndRotate* self=(Luna< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::check(L,1));
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

		spark::SparkDrawable::DeferredSystemHandler::PosAndRotate* self=(Luna< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("spark::SparkDrawable::DeferredSystemHandler::PosAndRotate");
		
		return luna_dynamicCast(L,converters,"spark::SparkDrawable::DeferredSystemHandler::PosAndRotate",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

spark::SparkDrawable::DeferredSystemHandler::PosAndRotate* LunaTraits< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::_bind_dtor(spark::SparkDrawable::DeferredSystemHandler::PosAndRotate* obj) {
	delete obj;
}

const char LunaTraits< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::className[] = "SparkDrawable_DeferredSystemHandler_PosAndRotate";
const char LunaTraits< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::fullName[] = "spark::SparkDrawable::DeferredSystemHandler::PosAndRotate";
const char LunaTraits< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::moduleName[] = "spark";
const char* LunaTraits< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::parents[] = {0};
const int LunaTraits< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::hash = 5357342;
const int LunaTraits< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::uniqueIDs[] = {5357342,0};

luna_RegType LunaTraits< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::methods[] = {
	{"dynCast", &luna_wrapper_spark_SparkDrawable_DeferredSystemHandler_PosAndRotate::_bind_dynCast},
	{"__eq", &luna_wrapper_spark_SparkDrawable_DeferredSystemHandler_PosAndRotate::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< spark::SparkDrawable::DeferredSystemHandler::PosAndRotate >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

class luna_wrapper_spark_SparkDrawable_ImageAttribute {
public:
	typedef Luna< spark::SparkDrawable::ImageAttribute > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,84449872) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(spark::SparkDrawable::ImageAttribute*)");
		}

		spark::SparkDrawable::ImageAttribute* rhs =(Luna< spark::SparkDrawable::ImageAttribute >::check(L,2));
		spark::SparkDrawable::ImageAttribute* self=(Luna< spark::SparkDrawable::ImageAttribute >::check(L,1));
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

		spark::SparkDrawable::ImageAttribute* self=(Luna< spark::SparkDrawable::ImageAttribute >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("spark::SparkDrawable::ImageAttribute");
		
		return luna_dynamicCast(L,converters,"spark::SparkDrawable::ImageAttribute",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

spark::SparkDrawable::ImageAttribute* LunaTraits< spark::SparkDrawable::ImageAttribute >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< spark::SparkDrawable::ImageAttribute >::_bind_dtor(spark::SparkDrawable::ImageAttribute* obj) {
	delete obj;
}

const char LunaTraits< spark::SparkDrawable::ImageAttribute >::className[] = "SparkDrawable_ImageAttribute";
const char LunaTraits< spark::SparkDrawable::ImageAttribute >::fullName[] = "spark::SparkDrawable::ImageAttribute";
const char LunaTraits< spark::SparkDrawable::ImageAttribute >::moduleName[] = "spark";
const char* LunaTraits< spark::SparkDrawable::ImageAttribute >::parents[] = {0};
const int LunaTraits< spark::SparkDrawable::ImageAttribute >::hash = 84449872;
const int LunaTraits< spark::SparkDrawable::ImageAttribute >::uniqueIDs[] = {84449872,0};

luna_RegType LunaTraits< spark::SparkDrawable::ImageAttribute >::methods[] = {
	{"dynCast", &luna_wrapper_spark_SparkDrawable_ImageAttribute::_bind_dynCast},
	{"__eq", &luna_wrapper_spark_SparkDrawable_ImageAttribute::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< spark::SparkDrawable::ImageAttribute >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< spark::SparkDrawable::ImageAttribute >::enumValues[] = {
	{0,0}
};



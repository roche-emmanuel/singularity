#include <plug_common.h>

class luna_wrapper_SparkDrawable_ImageAttribute {
public:
	typedef Luna< SparkDrawable::ImageAttribute > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,36168738) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SparkDrawable::ImageAttribute*)");
		}

		SparkDrawable::ImageAttribute* rhs =(Luna< SparkDrawable::ImageAttribute >::check(L,2));
		SparkDrawable::ImageAttribute* self=(Luna< SparkDrawable::ImageAttribute >::check(L,1));
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

		SparkDrawable::ImageAttribute* self=(Luna< SparkDrawable::ImageAttribute >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SparkDrawable::ImageAttribute");
		
		return luna_dynamicCast(L,converters,"SparkDrawable::ImageAttribute",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

SparkDrawable::ImageAttribute* LunaTraits< SparkDrawable::ImageAttribute >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< SparkDrawable::ImageAttribute >::_bind_dtor(SparkDrawable::ImageAttribute* obj) {
	delete obj;
}

const char LunaTraits< SparkDrawable::ImageAttribute >::className[] = "SparkDrawable_ImageAttribute";
const char LunaTraits< SparkDrawable::ImageAttribute >::fullName[] = "SparkDrawable::ImageAttribute";
const char LunaTraits< SparkDrawable::ImageAttribute >::moduleName[] = "SparkDrawable";
const char* LunaTraits< SparkDrawable::ImageAttribute >::parents[] = {0};
const int LunaTraits< SparkDrawable::ImageAttribute >::hash = 36168738;
const int LunaTraits< SparkDrawable::ImageAttribute >::uniqueIDs[] = {36168738,0};

luna_RegType LunaTraits< SparkDrawable::ImageAttribute >::methods[] = {
	{"dynCast", &luna_wrapper_SparkDrawable_ImageAttribute::_bind_dynCast},
	{"__eq", &luna_wrapper_SparkDrawable_ImageAttribute::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< SparkDrawable::ImageAttribute >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SparkDrawable::ImageAttribute >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

class luna_wrapper_osgUtil_MultiplyRangeOperator {
public:
	typedef Luna< osgUtil::MultiplyRangeOperator > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72996634) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::MultiplyRangeOperator*)");
		}

		osgUtil::MultiplyRangeOperator* rhs =(Luna< osgUtil::MultiplyRangeOperator >::check(L,2));
		osgUtil::MultiplyRangeOperator* self=(Luna< osgUtil::MultiplyRangeOperator >::check(L,1));
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

		osgUtil::MultiplyRangeOperator* self=(Luna< osgUtil::MultiplyRangeOperator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::MultiplyRangeOperator");
		
		return luna_dynamicCast(L,converters,"osgUtil::MultiplyRangeOperator",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::MultiplyRangeOperator* LunaTraits< osgUtil::MultiplyRangeOperator >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::MultiplyRangeOperator >::_bind_dtor(osgUtil::MultiplyRangeOperator* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::MultiplyRangeOperator >::className[] = "MultiplyRangeOperator";
const char LunaTraits< osgUtil::MultiplyRangeOperator >::fullName[] = "osgUtil::MultiplyRangeOperator";
const char LunaTraits< osgUtil::MultiplyRangeOperator >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::MultiplyRangeOperator >::parents[] = {0};
const int LunaTraits< osgUtil::MultiplyRangeOperator >::hash = 72996634;
const int LunaTraits< osgUtil::MultiplyRangeOperator >::uniqueIDs[] = {72996634,0};

luna_RegType LunaTraits< osgUtil::MultiplyRangeOperator >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_MultiplyRangeOperator::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_MultiplyRangeOperator::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::MultiplyRangeOperator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::MultiplyRangeOperator >::enumValues[] = {
	{0,0}
};



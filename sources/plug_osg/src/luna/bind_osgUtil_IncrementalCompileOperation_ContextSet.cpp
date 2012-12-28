#include <plug_common.h>

class luna_wrapper_osgUtil_IncrementalCompileOperation_ContextSet {
public:
	typedef Luna< osgUtil::IncrementalCompileOperation::ContextSet > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67276006) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::IncrementalCompileOperation::ContextSet*)");
		}

		osgUtil::IncrementalCompileOperation::ContextSet* rhs =(Luna< osgUtil::IncrementalCompileOperation::ContextSet >::check(L,2));
		osgUtil::IncrementalCompileOperation::ContextSet* self=(Luna< osgUtil::IncrementalCompileOperation::ContextSet >::check(L,1));
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

		osgUtil::IncrementalCompileOperation::ContextSet* self=(Luna< osgUtil::IncrementalCompileOperation::ContextSet >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::IncrementalCompileOperation::ContextSet");
		
		return luna_dynamicCast(L,converters,"osgUtil::IncrementalCompileOperation::ContextSet",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::IncrementalCompileOperation::ContextSet* LunaTraits< osgUtil::IncrementalCompileOperation::ContextSet >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::IncrementalCompileOperation::ContextSet >::_bind_dtor(osgUtil::IncrementalCompileOperation::ContextSet* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osgUtil::IncrementalCompileOperation::ContextSet >::className[] = "ContextSet";
const char LunaTraits< osgUtil::IncrementalCompileOperation::ContextSet >::fullName[] = "osgUtil::IncrementalCompileOperation::ContextSet";
const char LunaTraits< osgUtil::IncrementalCompileOperation::ContextSet >::moduleName[] = "osg";
const char* LunaTraits< osgUtil::IncrementalCompileOperation::ContextSet >::parents[] = {0};
const int LunaTraits< osgUtil::IncrementalCompileOperation::ContextSet >::hash = 67276006;
const int LunaTraits< osgUtil::IncrementalCompileOperation::ContextSet >::uniqueIDs[] = {67276006,0};

luna_RegType LunaTraits< osgUtil::IncrementalCompileOperation::ContextSet >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_IncrementalCompileOperation_ContextSet::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_IncrementalCompileOperation_ContextSet::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::IncrementalCompileOperation::ContextSet >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::IncrementalCompileOperation::ContextSet >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

class luna_wrapper_osgUtil_IncrementalCompileOperation_CompileSets {
public:
	typedef Luna< osgUtil::IncrementalCompileOperation::CompileSets > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,37124597) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::IncrementalCompileOperation::CompileSets*)");
		}

		osgUtil::IncrementalCompileOperation::CompileSets* rhs =(Luna< osgUtil::IncrementalCompileOperation::CompileSets >::check(L,2));
		osgUtil::IncrementalCompileOperation::CompileSets* self=(Luna< osgUtil::IncrementalCompileOperation::CompileSets >::check(L,1));
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

		osgUtil::IncrementalCompileOperation::CompileSets* self=(Luna< osgUtil::IncrementalCompileOperation::CompileSets >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::IncrementalCompileOperation::CompileSets");
		
		return luna_dynamicCast(L,converters,"osgUtil::IncrementalCompileOperation::CompileSets",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::IncrementalCompileOperation::CompileSets* LunaTraits< osgUtil::IncrementalCompileOperation::CompileSets >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::IncrementalCompileOperation::CompileSets >::_bind_dtor(osgUtil::IncrementalCompileOperation::CompileSets* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileSets >::className[] = "CompileSets";
const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileSets >::fullName[] = "osgUtil::IncrementalCompileOperation::CompileSets";
const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileSets >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::IncrementalCompileOperation::CompileSets >::parents[] = {0};
const int LunaTraits< osgUtil::IncrementalCompileOperation::CompileSets >::hash = 37124597;
const int LunaTraits< osgUtil::IncrementalCompileOperation::CompileSets >::uniqueIDs[] = {37124597,0};

luna_RegType LunaTraits< osgUtil::IncrementalCompileOperation::CompileSets >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileSets::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileSets::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::IncrementalCompileOperation::CompileSets >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::IncrementalCompileOperation::CompileSets >::enumValues[] = {
	{0,0}
};


